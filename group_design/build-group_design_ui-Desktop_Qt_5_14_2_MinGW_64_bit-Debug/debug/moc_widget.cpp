/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../group_design_ui/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[17];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 6), // "slotOK"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 10), // "slotCancel"
QT_MOC_LITERAL(4, 26, 9), // "slotShowP"
QT_MOC_LITERAL(5, 36, 3), // "num"
QT_MOC_LITERAL(6, 40, 13), // "slotShowMajor"
QT_MOC_LITERAL(7, 54, 4), // "name"
QT_MOC_LITERAL(8, 59, 9), // "slotShowS"
QT_MOC_LITERAL(9, 69, 9), // "slotShowM"
QT_MOC_LITERAL(10, 79, 17), // "slotSchoolMessage"
QT_MOC_LITERAL(11, 97, 27), // "on_pushButton_start_clicked"
QT_MOC_LITERAL(12, 125, 27), // "on_pushButton_close_clicked"
QT_MOC_LITERAL(13, 153, 28), // "on_pushButton_return_clicked"
QT_MOC_LITERAL(14, 182, 31), // "on_pushButton_recommand_clicked"
QT_MOC_LITERAL(15, 214, 35), // "on_pushButton_search_school_c..."
QT_MOC_LITERAL(16, 250, 34) // "on_pushButton_search_major_cl..."

    },
    "Widget\0slotOK\0\0slotCancel\0slotShowP\0"
    "num\0slotShowMajor\0name\0slotShowS\0"
    "slotShowM\0slotSchoolMessage\0"
    "on_pushButton_start_clicked\0"
    "on_pushButton_close_clicked\0"
    "on_pushButton_return_clicked\0"
    "on_pushButton_recommand_clicked\0"
    "on_pushButton_search_school_clicked\0"
    "on_pushButton_search_major_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    1,   81,    2, 0x08 /* Private */,
       6,    1,   84,    2, 0x08 /* Private */,
       8,    1,   87,    2, 0x08 /* Private */,
       9,    1,   90,    2, 0x08 /* Private */,
      10,    1,   93,    2, 0x08 /* Private */,
      11,    0,   96,    2, 0x08 /* Private */,
      12,    0,   97,    2, 0x08 /* Private */,
      13,    0,   98,    2, 0x08 /* Private */,
      14,    0,   99,    2, 0x08 /* Private */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotOK(); break;
        case 1: _t->slotCancel(); break;
        case 2: _t->slotShowP((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotShowMajor((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->slotShowS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slotShowM((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotSchoolMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_start_clicked(); break;
        case 8: _t->on_pushButton_close_clicked(); break;
        case 9: _t->on_pushButton_return_clicked(); break;
        case 10: _t->on_pushButton_recommand_clicked(); break;
        case 11: _t->on_pushButton_search_school_clicked(); break;
        case 12: _t->on_pushButton_search_major_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Widget.data,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
