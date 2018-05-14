/****************************************************************************
** Meta object code from reading C++ file 'findfileform.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "findfileform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'findfileform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CFindFileForm[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      24,   14,   14,   14, 0x08,
      31,   14,   14,   14, 0x08,
      38,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CFindFileForm[] = {
    "CFindFileForm\0\0browse()\0find()\0stop()\0"
    "doTxtChange(QString)\0"
};

void CFindFileForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CFindFileForm *_t = static_cast<CFindFileForm *>(_o);
        switch (_id) {
        case 0: _t->browse(); break;
        case 1: _t->find(); break;
        case 2: _t->stop(); break;
        case 3: _t->doTxtChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CFindFileForm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CFindFileForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CFindFileForm,
      qt_meta_data_CFindFileForm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CFindFileForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CFindFileForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CFindFileForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CFindFileForm))
        return static_cast<void*>(const_cast< CFindFileForm*>(this));
    if (!strcmp(_clname, "Ui_FindFileForm"))
        return static_cast< Ui_FindFileForm*>(const_cast< CFindFileForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int CFindFileForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
