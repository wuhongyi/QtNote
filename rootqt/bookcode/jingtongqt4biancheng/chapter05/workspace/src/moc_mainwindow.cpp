/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      21,   12,   12,   12, 0x08,
      30,   12,   12,   12, 0x08,
      40,   12,   12,   12, 0x08,
      49,   12,   12,   12, 0x08,
      59,   12,   12,   12, 0x08,
      68,   12,   12,   12, 0x08,
      77,   12,   12,   12, 0x08,
      85,   12,   12,   12, 0x08,
      94,   12,   12,   12, 0x08,
     103,   12,   12,   12, 0x08,
     111,   12,   12,   12, 0x08,
     120,   12,   12,   12, 0x08,
     137,   12,   12,   12, 0x08,
     157,   12,   12,   12, 0x08,
     170,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CMainWindow[] = {
    "CMainWindow\0\0doNew()\0doOpen()\0doClose()\0"
    "doSave()\0doASave()\0doQuit()\0doUndo()\0"
    "doCut()\0doCopy()\0doPast()\0doAll()\0"
    "doFind()\0openRecentFile()\0updateRecentFiles()\0"
    "updateMenu()\0showCount(int)\0"
};

void CMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CMainWindow *_t = static_cast<CMainWindow *>(_o);
        switch (_id) {
        case 0: _t->doNew(); break;
        case 1: _t->doOpen(); break;
        case 2: _t->doClose(); break;
        case 3: _t->doSave(); break;
        case 4: _t->doASave(); break;
        case 5: _t->doQuit(); break;
        case 6: _t->doUndo(); break;
        case 7: _t->doCut(); break;
        case 8: _t->doCopy(); break;
        case 9: _t->doPast(); break;
        case 10: _t->doAll(); break;
        case 11: _t->doFind(); break;
        case 12: _t->openRecentFile(); break;
        case 13: _t->updateRecentFiles(); break;
        case 14: _t->updateMenu(); break;
        case 15: _t->showCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CMainWindow,
      qt_meta_data_CMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CMainWindow))
        return static_cast<void*>(const_cast< CMainWindow*>(this));
    if (!strcmp(_clname, "Ui::MainWindow"))
        return static_cast< Ui::MainWindow*>(const_cast< CMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
