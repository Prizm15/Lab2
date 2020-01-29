/****************************************************************************
** Meta object code from reading C++ file 'reservationwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "reservationwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reservationwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReservationWindow_t {
    QByteArrayData data[18];
    char stringdata0[400];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReservationWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReservationWindow_t qt_meta_stringdata_ReservationWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ReservationWindow"
QT_MOC_LITERAL(1, 18, 25), // "on_nextPageButton_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 27), // "on_prevPageButton_2_clicked"
QT_MOC_LITERAL(4, 73, 27), // "on_nextPageButton_2_clicked"
QT_MOC_LITERAL(5, 101, 29), // "on_roomTypeComboBox_activated"
QT_MOC_LITERAL(6, 131, 4), // "arg1"
QT_MOC_LITERAL(7, 136, 29), // "on_calendarPushButton_clicked"
QT_MOC_LITERAL(8, 166, 25), // "on_calendarWidget_clicked"
QT_MOC_LITERAL(9, 192, 4), // "date"
QT_MOC_LITERAL(10, 197, 34), // "on_adultGuestsSpinBox_valueCh..."
QT_MOC_LITERAL(11, 232, 32), // "on_numNightsSpinBox_valueChanged"
QT_MOC_LITERAL(12, 265, 10), // "updateCost"
QT_MOC_LITERAL(13, 276, 20), // "on_yesButton_clicked"
QT_MOC_LITERAL(14, 297, 19), // "on_noButton_clicked"
QT_MOC_LITERAL(15, 317, 20), // "on_payButton_clicked"
QT_MOC_LITERAL(16, 338, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(17, 361, 38) // "on_cardTypeComboBox_currentTe..."

    },
    "ReservationWindow\0on_nextPageButton_clicked\0"
    "\0on_prevPageButton_2_clicked\0"
    "on_nextPageButton_2_clicked\0"
    "on_roomTypeComboBox_activated\0arg1\0"
    "on_calendarPushButton_clicked\0"
    "on_calendarWidget_clicked\0date\0"
    "on_adultGuestsSpinBox_valueChanged\0"
    "on_numNightsSpinBox_valueChanged\0"
    "updateCost\0on_yesButton_clicked\0"
    "on_noButton_clicked\0on_payButton_clicked\0"
    "on_closeButton_clicked\0"
    "on_cardTypeComboBox_currentTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReservationWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    1,   87,    2, 0x08 /* Private */,
       7,    0,   90,    2, 0x08 /* Private */,
       8,    1,   91,    2, 0x08 /* Private */,
      10,    1,   94,    2, 0x08 /* Private */,
      11,    1,   97,    2, 0x08 /* Private */,
      12,    0,  100,    2, 0x08 /* Private */,
      13,    0,  101,    2, 0x08 /* Private */,
      14,    0,  102,    2, 0x08 /* Private */,
      15,    0,  103,    2, 0x08 /* Private */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    1,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    9,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void ReservationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ReservationWindow *_t = static_cast<ReservationWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_nextPageButton_clicked(); break;
        case 1: _t->on_prevPageButton_2_clicked(); break;
        case 2: _t->on_nextPageButton_2_clicked(); break;
        case 3: _t->on_roomTypeComboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_calendarPushButton_clicked(); break;
        case 5: _t->on_calendarWidget_clicked((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 6: _t->on_adultGuestsSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_numNightsSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateCost(); break;
        case 9: _t->on_yesButton_clicked(); break;
        case 10: _t->on_noButton_clicked(); break;
        case 11: _t->on_payButton_clicked(); break;
        case 12: _t->on_closeButton_clicked(); break;
        case 13: _t->on_cardTypeComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ReservationWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ReservationWindow.data,
      qt_meta_data_ReservationWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ReservationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReservationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReservationWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ReservationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
