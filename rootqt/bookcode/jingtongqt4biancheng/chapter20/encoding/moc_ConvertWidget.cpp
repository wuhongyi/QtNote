/****************************************************************************
** Meta object code from reading C++ file 'ConvertWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ConvertWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConvertWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConvertWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      39,   14,   14,   14, 0x08,
      60,   14,   14,   14, 0x08,
      83,   14,   14,   14, 0x08,
     104,   14,   14,   14, 0x08,
     130,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ConvertWidget[] = {
    "ConvertWidget\0\0on_btnConvert_clicked()\0"
    "on_btnExit_clicked()\0on_btnSource_clicked()\0"
    "on_btnDest_clicked()\0on_radioGBToUTF_clicked()\0"
    "on_radioUTFToGB_clicked()\0"
};

void ConvertWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConvertWidget *_t = static_cast<ConvertWidget *>(_o);
        switch (_id) {
        case 0: _t->on_btnConvert_clicked(); break;
        case 1: _t->on_btnExit_clicked(); break;
        case 2: _t->on_btnSource_clicked(); break;
        case 3: _t->on_btnDest_clicked(); break;
        case 4: _t->on_radioGBToUTF_clicked(); break;
        case 5: _t->on_radioUTFToGB_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ConvertWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ConvertWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ConvertWidget,
      qt_meta_data_ConvertWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConvertWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConvertWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConvertWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConvertWidget))
        return static_cast<void*>(const_cast< ConvertWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ConvertWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
