/****************************************************************************
** Meta object code from reading C++ file 'mditextedit.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mditextedit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mditextedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CMDITextEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      34,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CMDITextEdit[] = {
    "CMDITextEdit\0\0updateRecentFiels()\0"
    "counted(int)\0doModified()\0"
};

void CMDITextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CMDITextEdit *_t = static_cast<CMDITextEdit *>(_o);
        switch (_id) {
        case 0: _t->updateRecentFiels(); break;
        case 1: _t->counted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->doModified(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CMDITextEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CMDITextEdit::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_CMDITextEdit,
      qt_meta_data_CMDITextEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CMDITextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CMDITextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CMDITextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CMDITextEdit))
        return static_cast<void*>(const_cast< CMDITextEdit*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int CMDITextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void CMDITextEdit::updateRecentFiels()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CMDITextEdit::counted(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
