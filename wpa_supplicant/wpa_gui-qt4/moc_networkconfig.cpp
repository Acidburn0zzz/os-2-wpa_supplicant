/****************************************************************************
** Meta object code from reading C++ file 'networkconfig.h'
**
** Created: Sat Apr 14 17:17:43 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "networkconfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkconfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NetworkConfig[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   15,   14,   14, 0x0a,
      36,   14,   14,   14, 0x0a,
      49,   15,   14,   14, 0x0a,
      89,   70,   14,   14, 0x0a,
     121,   14,   14,   14, 0x0a,
     137,   15,   14,   14, 0x0a,
     153,   14,   14,   14, 0x0a,
     162,   14,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_NetworkConfig[] = {
    "NetworkConfig\0\0sel\0authChanged(int)\0"
    "addNetwork()\0encrChanged(QString)\0"
    "network_id,edit,id\0writeWepKey(int,QLineEdit*,int)\0"
    "removeNetwork()\0eapChanged(int)\0"
    "useWps()\0languageChange()\0"
};

const QMetaObject NetworkConfig::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_NetworkConfig,
      qt_meta_data_NetworkConfig, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NetworkConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NetworkConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NetworkConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkConfig))
        return static_cast<void*>(const_cast< NetworkConfig*>(this));
    if (!strcmp(_clname, "Ui::NetworkConfig"))
        return static_cast< Ui::NetworkConfig*>(const_cast< NetworkConfig*>(this));
    return QDialog::qt_metacast(_clname);
}

int NetworkConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: authChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: addNetwork(); break;
        case 2: encrChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: writeWepKey((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QLineEdit*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: removeNetwork(); break;
        case 5: eapChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: useWps(); break;
        case 7: languageChange(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
