/****************************************************************************
** Meta object code from reading C++ file 'Updater.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../QSimpleUpdater/src/Updater.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Updater.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Updater_t {
    const uint offsetsAndSize[72];
    char stringdata0[454];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Updater_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Updater_t qt_meta_stringdata_Updater = {
    {
QT_MOC_LITERAL(0, 7), // "Updater"
QT_MOC_LITERAL(8, 16), // "checkingFinished"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 3), // "url"
QT_MOC_LITERAL(30, 16), // "downloadFinished"
QT_MOC_LITERAL(47, 8), // "filepath"
QT_MOC_LITERAL(56, 17), // "appcastDownloaded"
QT_MOC_LITERAL(74, 4), // "data"
QT_MOC_LITERAL(79, 15), // "checkForUpdates"
QT_MOC_LITERAL(95, 6), // "setUrl"
QT_MOC_LITERAL(102, 13), // "setModuleName"
QT_MOC_LITERAL(116, 4), // "name"
QT_MOC_LITERAL(121, 17), // "setNotifyOnUpdate"
QT_MOC_LITERAL(139, 6), // "notify"
QT_MOC_LITERAL(146, 17), // "setNotifyOnFinish"
QT_MOC_LITERAL(164, 18), // "setUserAgentString"
QT_MOC_LITERAL(183, 5), // "agent"
QT_MOC_LITERAL(189, 16), // "setModuleVersion"
QT_MOC_LITERAL(206, 7), // "version"
QT_MOC_LITERAL(214, 20), // "setDownloaderEnabled"
QT_MOC_LITERAL(235, 7), // "enabled"
QT_MOC_LITERAL(243, 14), // "setDownloadDir"
QT_MOC_LITERAL(258, 3), // "dir"
QT_MOC_LITERAL(262, 14), // "setPlatformKey"
QT_MOC_LITERAL(277, 11), // "platformKey"
QT_MOC_LITERAL(289, 19), // "setUseCustomAppcast"
QT_MOC_LITERAL(309, 13), // "customAppcast"
QT_MOC_LITERAL(323, 29), // "setUseCustomInstallProcedures"
QT_MOC_LITERAL(353, 6), // "custom"
QT_MOC_LITERAL(360, 18), // "setMandatoryUpdate"
QT_MOC_LITERAL(379, 16), // "mandatory_update"
QT_MOC_LITERAL(396, 7), // "onReply"
QT_MOC_LITERAL(404, 14), // "QNetworkReply*"
QT_MOC_LITERAL(419, 5), // "reply"
QT_MOC_LITERAL(425, 18), // "setUpdateAvailable"
QT_MOC_LITERAL(444, 9) // "available"

    },
    "Updater\0checkingFinished\0\0url\0"
    "downloadFinished\0filepath\0appcastDownloaded\0"
    "data\0checkForUpdates\0setUrl\0setModuleName\0"
    "name\0setNotifyOnUpdate\0notify\0"
    "setNotifyOnFinish\0setUserAgentString\0"
    "agent\0setModuleVersion\0version\0"
    "setDownloaderEnabled\0enabled\0"
    "setDownloadDir\0dir\0setPlatformKey\0"
    "platformKey\0setUseCustomAppcast\0"
    "customAppcast\0setUseCustomInstallProcedures\0"
    "custom\0setMandatoryUpdate\0mandatory_update\0"
    "onReply\0QNetworkReply*\0reply\0"
    "setUpdateAvailable\0available"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Updater[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  122,    2, 0x06,    1 /* Public */,
       4,    2,  125,    2, 0x06,    3 /* Public */,
       6,    2,  130,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,  135,    2, 0x0a,    9 /* Public */,
       9,    1,  136,    2, 0x0a,   10 /* Public */,
      10,    1,  139,    2, 0x0a,   12 /* Public */,
      12,    1,  142,    2, 0x0a,   14 /* Public */,
      14,    1,  145,    2, 0x0a,   16 /* Public */,
      15,    1,  148,    2, 0x0a,   18 /* Public */,
      17,    1,  151,    2, 0x0a,   20 /* Public */,
      19,    1,  154,    2, 0x0a,   22 /* Public */,
      21,    1,  157,    2, 0x0a,   24 /* Public */,
      23,    1,  160,    2, 0x0a,   26 /* Public */,
      25,    1,  163,    2, 0x0a,   28 /* Public */,
      27,    1,  166,    2, 0x0a,   30 /* Public */,
      29,    1,  169,    2, 0x0a,   32 /* Public */,
      31,    1,  172,    2, 0x08,   34 /* Private */,
      34,    1,  175,    2, 0x08,   36 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    3,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, QMetaType::Bool,   35,

       0        // eod
};

void Updater::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Updater *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->checkingFinished((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->downloadFinished((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->appcastDownloaded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 3: _t->checkForUpdates(); break;
        case 4: _t->setUrl((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->setModuleName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->setNotifyOnUpdate((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setNotifyOnFinish((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->setUserAgentString((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->setModuleVersion((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->setDownloaderEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->setDownloadDir((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->setPlatformKey((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->setUseCustomAppcast((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->setUseCustomInstallProcedures((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->setMandatoryUpdate((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->onReply((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 17: _t->setUpdateAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Updater::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Updater::checkingFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Updater::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Updater::downloadFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Updater::*)(const QString & , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Updater::appcastDownloaded)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Updater::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Updater.offsetsAndSize,
    qt_meta_data_Updater,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Updater_t
, QtPrivate::TypeAndForceComplete<Updater, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *Updater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Updater::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Updater.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Updater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void Updater::checkingFinished(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Updater::downloadFinished(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Updater::appcastDownloaded(const QString & _t1, const QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
