#include "reservationwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ReservationWindow w;
    w.show();
    return a.exec();
}
