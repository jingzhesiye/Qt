/****************************************************************************
** Meta object code from reading C++ file 'baidumap.h'
**
** Created: Mon Apr 4 11:50:09 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../baidumap.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'baidumap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BaiduMap[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      35,    9,   27,    9, 0x0a,
      58,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BaiduMap[] = {
    "BaiduMap\0\0initialization()\0QString\0"
    "getLongitudeLatitude()\0attachMap()\0"
};

const QMetaObject BaiduMap::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BaiduMap,
      qt_meta_data_BaiduMap, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BaiduMap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BaiduMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BaiduMap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BaiduMap))
        return static_cast<void*>(const_cast< BaiduMap*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BaiduMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initialization(); break;
        case 1: { QString _r = getLongitudeLatitude();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: attachMap(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
