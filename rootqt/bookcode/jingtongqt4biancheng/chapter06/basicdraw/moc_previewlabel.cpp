/****************************************************************************
** Meta object code from reading C++ file 'previewlabel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "previewlabel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'previewlabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PreviewLabel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   14,   13,   13, 0x0a,
      42,   36,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PreviewLabel[] = {
    "PreviewLabel\0\0pen\0penChanged(QPen&)\0"
    "brush\0brushChanged(QBrush&)\0"
};

void PreviewLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PreviewLabel *_t = static_cast<PreviewLabel *>(_o);
        switch (_id) {
        case 0: _t->penChanged((*reinterpret_cast< QPen(*)>(_a[1]))); break;
        case 1: _t->brushChanged((*reinterpret_cast< QBrush(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PreviewLabel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PreviewLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_PreviewLabel,
      qt_meta_data_PreviewLabel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PreviewLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PreviewLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PreviewLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PreviewLabel))
        return static_cast<void*>(const_cast< PreviewLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int PreviewLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
