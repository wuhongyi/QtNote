/****************************************************************************
** Meta object code from reading C++ file 'layoutdlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "layoutdlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layoutdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CLayoutDlg[] = {

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
      12,   11,   11,   11, 0x08,
      30,   11,   11,   11, 0x08,
      45,   11,   11,   11, 0x08,
      60,   11,   11,   11, 0x08,
      76,   11,   11,   11, 0x08,
      92,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CLayoutDlg[] = {
    "CLayoutDlg\0\0doActConstraint()\0"
    "doActLPolicy()\0doActRPolicy()\0"
    "doActLStretch()\0doActRStretch()\0"
    "doPushBtnShow(bool)\0"
};

void CLayoutDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CLayoutDlg *_t = static_cast<CLayoutDlg *>(_o);
        switch (_id) {
        case 0: _t->doActConstraint(); break;
        case 1: _t->doActLPolicy(); break;
        case 2: _t->doActRPolicy(); break;
        case 3: _t->doActLStretch(); break;
        case 4: _t->doActRStretch(); break;
        case 5: _t->doPushBtnShow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CLayoutDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CLayoutDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CLayoutDlg,
      qt_meta_data_CLayoutDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CLayoutDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CLayoutDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CLayoutDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CLayoutDlg))
        return static_cast<void*>(const_cast< CLayoutDlg*>(this));
    if (!strcmp(_clname, "Ui_LayoutDlg"))
        return static_cast< Ui_LayoutDlg*>(const_cast< CLayoutDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int CLayoutDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
