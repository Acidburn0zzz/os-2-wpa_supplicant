/****************************************************************************
** Meta object code from reading C++ file 'eventhistory.h'
**
** Created: Sat Apr 14 17:17:35 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "eventhistory.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eventhistory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EventListModel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_EventListModel[] = {
    "EventListModel\0"
};

const QMetaObject EventListModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_EventListModel,
      qt_meta_data_EventListModel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EventListModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EventListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EventListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EventListModel))
        return static_cast<void*>(const_cast< EventListModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int EventListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_EventHistory[] = {

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
      19,   14,   13,   13, 0x0a,
      45,   41,   13,   13, 0x0a,
      62,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_EventHistory[] = {
    "EventHistory\0\0msgs\0addEvents(WpaMsgList)\0"
    "msg\0addEvent(WpaMsg)\0languageChange()\0"
};

const QMetaObject EventHistory::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EventHistory,
      qt_meta_data_EventHistory, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EventHistory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EventHistory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EventHistory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EventHistory))
        return static_cast<void*>(const_cast< EventHistory*>(this));
    if (!strcmp(_clname, "Ui::EventHistory"))
        return static_cast< Ui::EventHistory*>(const_cast< EventHistory*>(this));
    return QDialog::qt_metacast(_clname);
}

int EventHistory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addEvents((*reinterpret_cast< WpaMsgList(*)>(_a[1]))); break;
        case 1: addEvent((*reinterpret_cast< WpaMsg(*)>(_a[1]))); break;
        case 2: languageChange(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
