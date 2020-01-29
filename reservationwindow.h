#ifndef RESERVATIONWINDOW_H
#define RESERVATIONWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class ReservationWindow; }
QT_END_NAMESPACE

class ReservationWindow : public QMainWindow
{
    Q_OBJECT

public:
    ReservationWindow(QWidget *parent = nullptr);
    ~ReservationWindow();

    void calculateCost(int num);
    bool isDateValid();
    QMessageBox paymentConfirmation;
    void confirmationPage();

private slots:
    void on_nextPageButton_clicked();

    void on_prevPageButton_2_clicked();

    void on_nextPageButton_2_clicked();

    void on_roomTypeComboBox_activated(const QString &arg1);

    void on_calendarPushButton_clicked();

    void on_calendarWidget_clicked(const QDate &date);

    void on_adultGuestsSpinBox_valueChanged(int arg1);

    void on_numNightsSpinBox_valueChanged(int arg1);

    void updateCost();

    void on_yesButton_clicked();

    void on_noButton_clicked();

    void on_payButton_clicked();

    void on_closeButton_clicked();

    void on_cardTypeComboBox_currentTextChanged(const QString &arg1);

private:
    Ui::ReservationWindow *ui;
};
#endif // RESERVATIONWINDOW_H
