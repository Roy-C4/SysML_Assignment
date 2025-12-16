/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20221943
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensingSystemPKG
//!	Generated Date	: Tue, 16, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SensingSystemPKG.h
*********************************************************************/

#ifndef SensingSystemPKG_H
#define SensingSystemPKG_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <event.h>
//## classInstance itsAerialSensor
class AerialSensor;

//## classInstance itsCommunicationUnit
class CommunicationUnit;

//## classInstance itsDataProcessingUnit
class DataProcessingUnit;

//## classInstance itsSMSTWDMain
class SMSTWDMain;

//## classInstance itsSatelliteSensor
class SatelliteSensor;

//## classInstance itsUnderWaterSensor
class UnderWaterSensor;

//## package SensingSystemPKG


//## classInstance itsAerialSensor
extern AerialSensor itsAerialSensor;

//## classInstance itsCommunicationUnit
extern CommunicationUnit itsCommunicationUnit;

//## classInstance itsDataProcessingUnit
extern DataProcessingUnit itsDataProcessingUnit;

//## classInstance itsSMSTWDMain
extern SMSTWDMain itsSMSTWDMain;

//## classInstance itsSatelliteSensor
extern SatelliteSensor itsSatelliteSensor;

//## classInstance itsUnderWaterSensor
extern UnderWaterSensor itsUnderWaterSensor;

//## auto_generated
void SensingSystemPKG_initRelations(void);

//## auto_generated
bool SensingSystemPKG_startBehavior(void);

//#[ ignore
class SensingSystemPKG_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    SensingSystemPKG_OMInitializer(void);
    
    //## auto_generated
    ~SensingSystemPKG_OMInitializer(void);
};
//#]

//## event evDetectParameters()
class evDetectParameters : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDetectParameters;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDetectParameters(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDetectParameters : virtual public AOMEvent {
    DECLARE_META_EVENT(evDetectParameters)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evDetectParameters_SensingSystemPKG_id;
//#]

//## event evDetectUnderWater()
class evDetectUnderWater : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDetectUnderWater;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDetectUnderWater(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDetectUnderWater : virtual public AOMEvent {
    DECLARE_META_EVENT(evDetectUnderWater)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evDetectUnderWater_SensingSystemPKG_id;
//#]

//## event evIdle()
class evIdle : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevIdle;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evIdle(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevIdle : virtual public AOMEvent {
    DECLARE_META_EVENT(evIdle)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evIdle_SensingSystemPKG_id;
//#]

//## event evSwitchOn()
class evSwitchOn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSwitchOn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSwitchOn(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSwitchOn : virtual public AOMEvent {
    DECLARE_META_EVENT(evSwitchOn)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evSwitchOn_SensingSystemPKG_id;
//#]

//## event evSwitchOff()
class evSwitchOff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSwitchOff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSwitchOff(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSwitchOff : virtual public AOMEvent {
    DECLARE_META_EVENT(evSwitchOff)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evSwitchOff_SensingSystemPKG_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensingSystemPKG.h
*********************************************************************/
