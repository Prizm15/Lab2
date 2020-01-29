#include "reservationwindow.h"
#include "ui_reservationwindow.h"

ReservationWindow::ReservationWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ReservationWindow)
{
    ui->setupUi(this);
    ui->calendarWidget->setVisible(false);
    ui->nextPageButton->setVisible(false);
    ui->nextPageButton_2->setVisible(false);
}

ReservationWindow::~ReservationWindow()
{
    delete ui;
}

void ReservationWindow::calculateCost(int num) {
    const double PARKING_COST = 12.50;
    int choice = num;
    double cost = 0;
    double taxCost = 0;
    double resortFeeCost = 0;
    double parkingCost = 0;
    double totalCost = 0;
    switch (choice) {
    case 1:
        cost = cost + 284 * ui->numNightsSpinBox->value();
        break;

    case 2:
        cost = cost + 325 * ui->numNightsSpinBox->value();
        break;

    case 3:
        cost = cost + 290 * ui->numNightsSpinBox->value();
        break;

    case 4:
        cost = cost + 350 * ui->numNightsSpinBox->value();
        break;
    }

//Room Cost
    ui->roomDollarsLabel->setText("$" + QString::number(cost, 'f', 2));


//Tax Cost
    taxCost = cost * 0.15;
    ui->taxDollarsLabel->setText("$" + QString::number(taxCost, 'f', 2));


//Parking Cost
    if (ui->yesButton->isChecked()) {
    parkingCost = ui->numNightsSpinBox->value() * PARKING_COST;
    ui->parkingCostDollarsLabel->setText("$" + QString::number(parkingCost, 'f', 2));
    }


//Estimated Cost
    ui->estimatedCostTargetLabel->setText("$" + QString::number(cost, 'f', 2));


//Resort Fee Cost
    resortFeeCost = ui->numNightsSpinBox->value() * 15;
    ui->resortFeesDollarsLabel->setText("$" + QString::number(resortFeeCost, 'f', 2));



//Total Cost
    totalCost = resortFeeCost + taxCost + cost + parkingCost;
    ui->totalCostDollarsLabel->setText("$" + QString::number(totalCost, 'f', 2));


    if (ui->roomTypeComboBox->currentText() == "---" || !isDateValid())
        ui->nextPageButton->setVisible(false);
    else
        ui->nextPageButton->setVisible(true);
}

bool ReservationWindow::isDateValid() {
    if (ui->dateEdit->date().dayOfYear() > QDate::currentDate().dayOfYear() && ui->dateEdit->date().year() >= QDate::currentDate().year()) {
        return true;
    }
    else {
        return false;
    }
}

void ReservationWindow::on_nextPageButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void ReservationWindow::on_prevPageButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void ReservationWindow::on_nextPageButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void ReservationWindow::updateCost() {
        QString noChoice = "---";
        QString StdQueen = "Standard 2-queen room ($284/night)";
        QString AtrQueen = "Atrium 2-queen room ($325/night)";
        QString StdKing = "Standard 1-king room ($290/night)";
        QString AtrKing = "Atrium 1-king room ($350/night)";
            //Do not allow user to set anything if no Room choice
        QString option = ui->roomTypeComboBox->currentText();

            //Calculate Cost
        if (option == StdQueen) {
            calculateCost(1);
        }
        if (option == AtrQueen) {
            calculateCost(2);
        }
        if (option == StdKing) {
            calculateCost(3);
        }
        if (option == AtrKing) {
            calculateCost(4);
        }
}

void ReservationWindow::on_roomTypeComboBox_activated(const QString &option)
{
    QString noChoice = "---";
    QString StdQueen = "Standard 2-queen room ($284/night)";
    QString AtrQueen = "Atrium 2-queen room ($325/night)";
    QString StdKing = "Standard 1-king room ($290/night)";
    QString AtrKing = "Atrium 1-king room ($350/night)";
        //Do not allow user to set anything if no Room choice
    if (option == noChoice) {
        ui->nextPageButton->setVisible(false);
        ui->adultGuestsSpinBox->setMaximum(0);
        ui->childrenGuestsSpinBox->setMaximum(0);
    }
        //Keep maxiumum requirements
    if (option == StdQueen || option == AtrQueen) {
        ui->adultGuestsSpinBox->setMaximum(4);
    }

    if (option == StdKing || option == AtrKing) {
        ui->adultGuestsSpinBox->setMaximum(3);
    }
    updateCost();
}

void ReservationWindow::on_calendarPushButton_clicked()
{
    ui->calendarWidget->setVisible(true);

}

void ReservationWindow::on_calendarWidget_clicked(const QDate &date)
{
    ui->dateEdit->setDate(date);
    if (isDateValid()) {
        ui->calendarWidget->setVisible(false);
        ui->errorLabel->setText("");
        updateCost();
    }
    else
        ui->errorLabel->setText("*Please enter a valid starting date");
}

void ReservationWindow::on_adultGuestsSpinBox_valueChanged(int numAdults)
{
    if (numAdults == 1) {
        ui->childrenGuestsSpinBox->setMaximum(ui->adultGuestsSpinBox->maximum() - numAdults);
    }
    if (numAdults == 2) {
         ui->childrenGuestsSpinBox->setMaximum(ui->adultGuestsSpinBox->maximum() - numAdults);
    }
    if (numAdults == 3) {
         ui->childrenGuestsSpinBox->setMaximum(ui->adultGuestsSpinBox->maximum() - numAdults);
    }
    if (numAdults == 4) {
         ui->childrenGuestsSpinBox->setMaximum(ui->adultGuestsSpinBox->maximum() - numAdults);
    }
}

void ReservationWindow::on_numNightsSpinBox_valueChanged(int num)
{
    updateCost();
}

void ReservationWindow::on_yesButton_clicked()
{
    updateCost();
}

void ReservationWindow::on_noButton_clicked()
{
    updateCost();
}

void ReservationWindow::on_payButton_clicked()
{
    ReservationWindow::paymentConfirmation.setText("Transaction was successfully proccessed!");
    ReservationWindow::paymentConfirmation.open();
    confirmationPage();
    ui->stackedWidget->setCurrentIndex(2);
}

void ReservationWindow::confirmationPage() {
    QString StdQueen = "Standard 2-queen room ($284/night)";
    QString AtrQueen = "Atrium 2-queen room ($325/night)";
    QString StdKing = "Standard 1-king room ($290/night)";
    QString AtrKing = "Atrium 1-king room ($350/night)";

        if (ui->roomTypeComboBox->currentText() == StdQueen) {
            ui->roomTypeLabel->setText(ui->roomTypeLabel->text() + " Standard 2-Queen");
        }
        if (ui->roomTypeComboBox->currentText() == AtrQueen) {
            ui->roomTypeLabel->setText(ui->roomTypeLabel->text() + " Atrium 2-Queen");
        }
        if (ui->roomTypeComboBox->currentText() == StdKing) {
            ui->roomTypeLabel->setText(ui->roomTypeLabel->text() + " Standard 1-King");
        }
        if (ui->roomTypeComboBox->currentText() == AtrKing) {
            ui->roomTypeLabel->setText(ui->roomTypeLabel->text() + " Atrium 1-King");
        }

    if (ui->yesButton->isChecked())
        ui->parkingLabel->setText(ui->parkingLabel->text() + " Yes");
    else
        ui->parkingLabel->setText(ui->parkingLabel->text() + " No");

    //How Many Nights Label
    ui->howManyNightsLabel->setText(ui->howManyNightsLabel->text() + " " + QString::number(ui->numNightsSpinBox->value()));

    //First Day Label
    ui->firstDayLabel->setText(ui->firstDayLabel->text() + " " + ui->dateEdit->date().toString("MM/dd/yyyy"));

    //Adults Label
    ui->adultsLabel->setText(ui->adultsLabel->text() + " " + QString::number(ui->adultGuestsSpinBox->value()));

    //Children Label
    ui->childrenLabel->setText(ui->childrenLabel->text() + " " + QString::number(ui->childrenGuestsSpinBox->value()));

    //Total Amount
    ui->totalAmountLabel->setText(ui->totalAmountLabel->text() + "  " + ui->totalCostLabel->text());

    //Card Label
    QString lastOfCardNum = ui->cardNumberInputBox->text().mid(ui->cardNumberInputBox->text().size() - 4, 4);
    ui->paidWithCardLabel->setText(ui->paidWithCardLabel->text() + " " + lastOfCardNum);
}

void ReservationWindow::on_closeButton_clicked()
{
    ReservationWindow::close();
}

void ReservationWindow::on_cardTypeComboBox_currentTextChanged(const QString &option)
{
    QString AE = "American Express";
        QString V = "Visa";
        QString M = "Mastercard";
        QString D = "Discover";
        const QString AE_Mask = "9999 9999999 99999;_";
        const QString OtherCards_Mask = "9999 9999 9999 9999;_";

        if (option == AE) {
            ui->cardNumberInputBox->setInputMask(AE_Mask);
            ui->cardNumberInputBox->repaint();
        }
        else {
            ui->cardNumberInputBox->setInputMask(OtherCards_Mask);
            ui->cardNumberInputBox->repaint();
        }
}
