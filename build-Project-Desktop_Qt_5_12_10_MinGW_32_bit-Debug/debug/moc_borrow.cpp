/****************************************************************************
** Meta object code from reading C++ file 'borrow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Project/borrow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'borrow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_borrow_t {
    QByteArrayData data[9];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_borrow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_borrow_t qt_meta_stringdata_borrow = {
    {
QT_MOC_LITERAL(0, 0, 6), // "borrow"
QT_MOC_LITERAL(1, 7, 5), // "write"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 19), // "QList<borrow_class>"
QT_MOC_LITERAL(4, 34, 10), // "borrowlist"
QT_MOC_LITERAL(5, 45, 16), // "on_close_clicked"
QT_MOC_LITERAL(6, 62, 17), // "on_reload_clicked"
QT_MOC_LITERAL(7, 80, 15), // "on_back_clicked"
QT_MOC_LITERAL(8, 96, 19) // "on_borrow_2_clicked"

    },
    "borrow\0write\0\0QList<borrow_class>\0"
    "borrowlist\0on_close_clicked\0"
    "on_reload_clicked\0on_back_clicked\0"
    "on_borrow_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_borrow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,
       7,    0,   44,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void borrow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<borrow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->write((*reinterpret_cast< QList<borrow_class>(*)>(_a[1]))); break;
        case 1: _t->on_close_clicked(); break;
        case 2: _t->on_reload_clicked(); break;
        case 3: _t->on_back_clicked(); break;
        case 4: _t->on_borrow_2_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject borrow::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_borrow.data,
    qt_meta_data_borrow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *borrow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *borrow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_borrow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int borrow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
