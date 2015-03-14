/****************************************************************************
** Meta object code from reading C++ file 'DeamonInterface.h'
**
** Created: Mon Dec 19 18:47:20 2011
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../DeamonInterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeamonInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DeamonInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      41,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   22,   17,   16, 0x05,
      48,   22,   16,   16, 0x05,
      71,   65,   17,   16, 0x05,
      97,   65,   17,   16, 0x05,
     122,   65,   17,   16, 0x05,
     147,   65,   17,   16, 0x05,
     172,   65,   17,   16, 0x05,
     194,   65,   17,   16, 0x05,
     215,   65,   17,   16, 0x05,
     234,   65,   17,   16, 0x05,
     254,   65,   17,   16, 0x05,
     285,   65,   17,   16, 0x05,
     312,   65,   17,   16, 0x05,
     331,   65,   17,   16, 0x05,
     362,   65,   17,   16, 0x05,
     386,   65,   17,   16, 0x05,
     409,   65,   17,   16, 0x05,
     429,   65,   17,   16, 0x05,
     448,   65,   17,   16, 0x05,
     467,   65,   17,   16, 0x05,
     491,   65,   17,   16, 0x05,
     515,   65,   17,   16, 0x05,
     539,   65,   17,   16, 0x05,
     564,   65,   17,   16, 0x05,
     593,   65,   17,   16, 0x05,
     618,   65,   17,   16, 0x05,
     641,   65,   17,   16, 0x05,
     664,   65,   17,   16, 0x05,
     690,   65,   17,   16, 0x05,
     716,   65,   17,   16, 0x05,
     745,   65,   17,   16, 0x05,
     773,   65,   17,   16, 0x05,
     808,   65,   17,   16, 0x05,
     831,   65,   17,   16, 0x05,
     850,   65,   17,   16, 0x05,
     873,   65,   17,   16, 0x05,
     901,   65,   17,   16, 0x05,
     936,   65,   17,   16, 0x05,
     971,   65,   17,   16, 0x05,
    1002,   65,   17,   16, 0x05,
    1030,   16,   17,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
    1049,   16,   17,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DeamonInterface[] = {
    "DeamonInterface\0\0bool\0status\0"
    "modemPlugged(bool)\0activation(bool)\0"
    "value\0signalStrengthUpdate(int)\0"
    "serviceStatusUpdate(int)\0"
    "serviceDomainUpdate(int)\0"
    "roamingStatusUpdate(int)\0systemModeUpdate(int)\0"
    "simStatusUpdate(int)\0prlUpdate(QString)\0"
    "meidUpdate(QString)\0hardwareVersionUpdate(QString)\0"
    "compileDateUpdate(QString)\0"
    "esnUpdate(QString)\0softwareVersionUpdate(QString)\0"
    "cdmaEcioUpdate(QString)\0hdrEcioUpdate(QString)\0"
    "hdrcUpdate(QString)\0sidUpdate(QString)\0"
    "nidUpdate(QString)\0sectorIdUpdate(QString)\0"
    "cdmaRssiUpdate(QString)\0pnOffsetUpdate(QString)\0"
    "walshCodeUpdate(QString)\0"
    "channelNumberUpdate(QString)\0"
    "bandClassUpdate(QString)\0"
    "txPowerUpdate(QString)\0rxPowerUpdate(QString)\0"
    "bsPreviousUpdate(QString)\0"
    "msPreviousUpdate(QString)\0"
    "previousInUseUpdate(QString)\0"
    "packetZoneIdUpdate(QString)\0"
    "lastActiveCallStateUpdate(QString)\0"
    "hdrRssiUpdate(QString)\0perUpdate(QString)\0"
    "atStateUpdate(QString)\0"
    "dormantStateUpdate(QString)\0"
    "activeStatePnOffsetUpdate(QString)\0"
    "neighborSetPnOffsetUpdate(QString)\0"
    "neighborSetEcioUpdate(QString)\0"
    "flashMessageUpdate(QString)\0"
    "defaultMinUpdate()\0onSystemUpdateTimer()\0"
};

void DeamonInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DeamonInterface *_t = static_cast<DeamonInterface *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->modemPlugged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->activation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: { bool _r = _t->signalStrengthUpdate((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->serviceStatusUpdate((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->serviceDomainUpdate((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->roamingStatusUpdate((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->systemModeUpdate((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->simStatusUpdate((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->prlUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->meidUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->hardwareVersionUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->compileDateUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->esnUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->softwareVersionUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->cdmaEcioUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->hdrEcioUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->hdrcUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->sidUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->nidUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->sectorIdUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->cdmaRssiUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->pnOffsetUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->walshCodeUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->channelNumberUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->bandClassUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->txPowerUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->rxPowerUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->bsPreviousUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->msPreviousUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->previousInUseUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->packetZoneIdUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->lastActiveCallStateUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->hdrRssiUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->perUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->atStateUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: { bool _r = _t->dormantStateUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->activeStatePnOffsetUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: { bool _r = _t->neighborSetPnOffsetUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: { bool _r = _t->neighborSetEcioUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 39: { bool _r = _t->flashMessageUpdate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: { bool _r = _t->defaultMinUpdate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: { bool _r = _t->onSystemUpdateTimer();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DeamonInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DeamonInterface::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DeamonInterface,
      qt_meta_data_DeamonInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DeamonInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DeamonInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DeamonInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DeamonInterface))
        return static_cast<void*>(const_cast< DeamonInterface*>(this));
    return QThread::qt_metacast(_clname);
}

int DeamonInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
    return _id;
}

// SIGNAL 0
bool DeamonInterface::modemPlugged(bool _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
void DeamonInterface::activation(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
bool DeamonInterface::signalStrengthUpdate(int _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}

// SIGNAL 3
bool DeamonInterface::serviceStatusUpdate(int _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
    return _t0;
}

// SIGNAL 4
bool DeamonInterface::serviceDomainUpdate(int _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
    return _t0;
}

// SIGNAL 5
bool DeamonInterface::roamingStatusUpdate(int _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
    return _t0;
}

// SIGNAL 6
bool DeamonInterface::systemModeUpdate(int _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
    return _t0;
}

// SIGNAL 7
bool DeamonInterface::simStatusUpdate(int _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
    return _t0;
}

// SIGNAL 8
bool DeamonInterface::prlUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
    return _t0;
}

// SIGNAL 9
bool DeamonInterface::meidUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
    return _t0;
}

// SIGNAL 10
bool DeamonInterface::hardwareVersionUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
    return _t0;
}

// SIGNAL 11
bool DeamonInterface::compileDateUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
    return _t0;
}

// SIGNAL 12
bool DeamonInterface::esnUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
    return _t0;
}

// SIGNAL 13
bool DeamonInterface::softwareVersionUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
    return _t0;
}

// SIGNAL 14
bool DeamonInterface::cdmaEcioUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
    return _t0;
}

// SIGNAL 15
bool DeamonInterface::hdrEcioUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
    return _t0;
}

// SIGNAL 16
bool DeamonInterface::hdrcUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
    return _t0;
}

// SIGNAL 17
bool DeamonInterface::sidUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
    return _t0;
}

// SIGNAL 18
bool DeamonInterface::nidUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
    return _t0;
}

// SIGNAL 19
bool DeamonInterface::sectorIdUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
    return _t0;
}

// SIGNAL 20
bool DeamonInterface::cdmaRssiUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
    return _t0;
}

// SIGNAL 21
bool DeamonInterface::pnOffsetUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
    return _t0;
}

// SIGNAL 22
bool DeamonInterface::walshCodeUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
    return _t0;
}

// SIGNAL 23
bool DeamonInterface::channelNumberUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
    return _t0;
}

// SIGNAL 24
bool DeamonInterface::bandClassUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
    return _t0;
}

// SIGNAL 25
bool DeamonInterface::txPowerUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
    return _t0;
}

// SIGNAL 26
bool DeamonInterface::rxPowerUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
    return _t0;
}

// SIGNAL 27
bool DeamonInterface::bsPreviousUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
    return _t0;
}

// SIGNAL 28
bool DeamonInterface::msPreviousUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
    return _t0;
}

// SIGNAL 29
bool DeamonInterface::previousInUseUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
    return _t0;
}

// SIGNAL 30
bool DeamonInterface::packetZoneIdUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
    return _t0;
}

// SIGNAL 31
bool DeamonInterface::lastActiveCallStateUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
    return _t0;
}

// SIGNAL 32
bool DeamonInterface::hdrRssiUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
    return _t0;
}

// SIGNAL 33
bool DeamonInterface::perUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
    return _t0;
}

// SIGNAL 34
bool DeamonInterface::atStateUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
    return _t0;
}

// SIGNAL 35
bool DeamonInterface::dormantStateUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
    return _t0;
}

// SIGNAL 36
bool DeamonInterface::activeStatePnOffsetUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
    return _t0;
}

// SIGNAL 37
bool DeamonInterface::neighborSetPnOffsetUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
    return _t0;
}

// SIGNAL 38
bool DeamonInterface::neighborSetEcioUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
    return _t0;
}

// SIGNAL 39
bool DeamonInterface::flashMessageUpdate(const QString & _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
    return _t0;
}

// SIGNAL 40
bool DeamonInterface::defaultMinUpdate()
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
