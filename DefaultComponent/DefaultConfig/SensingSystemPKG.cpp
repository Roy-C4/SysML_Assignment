/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20221943
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensingSystemPKG
//!	Generated Date	: Wed, 17, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SensingSystemPKG.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SensingSystemPKG.h"
//## classInstance itsAerialSensor
#include "AerialSensor.h"
//## classInstance itsSatelliteSensor
#include "SatelliteSensor.h"
//## classInstance itsSMSTWDMain
#include "SMSTWDMain.h"
//## classInstance itsUnderWaterSensor
#include "UnderWaterSensor.h"
//## auto_generated
#include "CommunicationUnit.h"
//## auto_generated
#include "DataProcessingUnit.h"
//#[ ignore
#define evDetectParameters_SERIALIZE OM_NO_OP

#define evDetectParameters_UNSERIALIZE OM_NO_OP

#define evDetectParameters_CONSTRUCTOR evDetectParameters()

#define evDetectUnderWater_SERIALIZE OM_NO_OP

#define evDetectUnderWater_UNSERIALIZE OM_NO_OP

#define evDetectUnderWater_CONSTRUCTOR evDetectUnderWater()

#define evIdle_SERIALIZE OM_NO_OP

#define evIdle_UNSERIALIZE OM_NO_OP

#define evIdle_CONSTRUCTOR evIdle()

#define evSwitchOn_SERIALIZE OM_NO_OP

#define evSwitchOn_UNSERIALIZE OM_NO_OP

#define evSwitchOn_CONSTRUCTOR evSwitchOn()

#define evSwitchOff_SERIALIZE OM_NO_OP

#define evSwitchOff_UNSERIALIZE OM_NO_OP

#define evSwitchOff_CONSTRUCTOR evSwitchOff()

#define evNewAerialData_SERIALIZE OM_NO_OP

#define evNewAerialData_UNSERIALIZE OM_NO_OP

#define evNewAerialData_CONSTRUCTOR evNewAerialData()

#define evNewUnderWaterData_SERIALIZE OM_NO_OP

#define evNewUnderWaterData_UNSERIALIZE OM_NO_OP

#define evNewUnderWaterData_CONSTRUCTOR evNewUnderWaterData()

#define evNewSatelliteData_SERIALIZE OM_NO_OP

#define evNewSatelliteData_UNSERIALIZE OM_NO_OP

#define evNewSatelliteData_CONSTRUCTOR evNewSatelliteData()
//#]

//## package SensingSystemPKG


//## classInstance itsAerialSensor
AerialSensor itsAerialSensor;

//## classInstance itsSMSTWDMain
SMSTWDMain itsSMSTWDMain;

//## classInstance itsSatelliteSensor
SatelliteSensor itsSatelliteSensor;

//## classInstance itsUnderWaterSensor
UnderWaterSensor itsUnderWaterSensor;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(SensingSystemPKG, SensingSystemPKG)
#endif // _OMINSTRUMENT

void SensingSystemPKG_initRelations(void) {
    {
        {
            itsSMSTWDMain.setShouldDelete(false);
        }
        {
            itsAerialSensor.setShouldDelete(false);
        }
        {
            itsUnderWaterSensor.setShouldDelete(false);
        }
        {
            itsSatelliteSensor.setShouldDelete(false);
        }
    }
    itsSMSTWDMain.setItsUnderWaterSensor(&itsUnderWaterSensor);
    itsSMSTWDMain.setItsAerialSensor(&itsAerialSensor);
    itsSMSTWDMain.setItsSatelliteSensor(&itsSatelliteSensor);
    {
        
        itsAerialSensor.get_p_AerialSensor()->setItsDouble_windSpeed_ProxyFlowPropertyInterface(itsSMSTWDMain.get_p_AerialSensor()->getItsDouble_windSpeed_ProxyFlowPropertyInterface());
        
        itsAerialSensor.get_p_AerialSensor()->setItsDouble_precipitationAmount_ProxyFlowPropertyInterface(itsSMSTWDMain.get_p_AerialSensor()->getItsDouble_precipitationAmount_ProxyFlowPropertyInterface());
        
        itsAerialSensor.get_p_AerialSensor()->setItsDouble_stormPosition_ProxyFlowPropertyInterface(itsSMSTWDMain.get_p_AerialSensor()->getItsDouble_stormPosition_ProxyFlowPropertyInterface());
        
        itsAerialSensor.get_p_AerialSensor()->setItsRhpString_windDirection_ProxyFlowPropertyInterface(itsSMSTWDMain.get_p_AerialSensor()->getItsRhpString_windDirection_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsUnderWaterSensor.get_p_UnderWaterSensor()->setItsDouble_seismicVibration_ProxyFlowPropertyInterface(itsSMSTWDMain.get_p_UnderWaterSensor()->getItsDouble_seismicVibration_ProxyFlowPropertyInterface());
        
        itsUnderWaterSensor.get_p_UnderWaterSensor()->setItsDouble_waterPressure_ProxyFlowPropertyInterface(itsSMSTWDMain.get_p_UnderWaterSensor()->getItsDouble_waterPressure_ProxyFlowPropertyInterface());
        
        itsUnderWaterSensor.get_p_UnderWaterSensor()->setItsRhpString_flowDirection_ProxyFlowPropertyInterface(itsSMSTWDMain.get_p_UnderWaterSensor()->getItsRhpString_flowDirection_ProxyFlowPropertyInterface());
        
        itsUnderWaterSensor.get_p_UnderWaterSensor()->setItsBool_transmissionMode_ProxyFlowPropertyInterface(itsSMSTWDMain.get_p_UnderWaterSensor()->getItsBool_transmissionMode_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsSatelliteSensor.get_p_SatelliteSensor()->setItsDouble_ImageData_ProxyFlowPropertyInterface(itsSMSTWDMain.get_p_SatelliteSensor()->getItsDouble_ImageData_ProxyFlowPropertyInterface());
        
        itsSatelliteSensor.get_p_SatelliteSensor()->setItsDouble_stormCoordinates_ProxyFlowPropertyInterface(itsSMSTWDMain.get_p_SatelliteSensor()->getItsDouble_stormCoordinates_ProxyFlowPropertyInterface());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool SensingSystemPKG_startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsAerialSensor.startBehavior();
        }
    if(done == true)
        {
            done = itsSMSTWDMain.startBehavior();
        }
    if(done == true)
        {
            done = itsSatelliteSensor.startBehavior();
        }
    if(done == true)
        {
            done = itsUnderWaterSensor.startBehavior();
        }
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsSMSTWDMain, SMSTWDMain, "itsSMSTWDMain", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsAerialSensor, AerialSensor, "itsAerialSensor", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsUnderWaterSensor, UnderWaterSensor, "itsUnderWaterSensor", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsSatelliteSensor, SatelliteSensor, "itsSatelliteSensor", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
SensingSystemPKG_OMInitializer::SensingSystemPKG_OMInitializer(void) {
    SensingSystemPKG_initRelations();
    (void) SensingSystemPKG_startBehavior();
}

SensingSystemPKG_OMInitializer::~SensingSystemPKG_OMInitializer(void) {
}
//#]

//## event evDetectParameters()
evDetectParameters::evDetectParameters(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evDetectParameters)
    setId(evDetectParameters_SensingSystemPKG_id);
}

//#[ ignore
const IOxfEvent::ID evDetectParameters_SensingSystemPKG_id(19001);
//#]

IMPLEMENT_META_EVENT_P(evDetectParameters, SensingSystemPKG, SensingSystemPKG, evDetectParameters())

//## event evDetectUnderWater()
evDetectUnderWater::evDetectUnderWater(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evDetectUnderWater)
    setId(evDetectUnderWater_SensingSystemPKG_id);
}

//#[ ignore
const IOxfEvent::ID evDetectUnderWater_SensingSystemPKG_id(19002);
//#]

IMPLEMENT_META_EVENT_P(evDetectUnderWater, SensingSystemPKG, SensingSystemPKG, evDetectUnderWater())

//## event evIdle()
evIdle::evIdle(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evIdle)
    setId(evIdle_SensingSystemPKG_id);
}

//#[ ignore
const IOxfEvent::ID evIdle_SensingSystemPKG_id(19003);
//#]

IMPLEMENT_META_EVENT_P(evIdle, SensingSystemPKG, SensingSystemPKG, evIdle())

//## event evSwitchOn()
evSwitchOn::evSwitchOn(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evSwitchOn)
    setId(evSwitchOn_SensingSystemPKG_id);
}

//#[ ignore
const IOxfEvent::ID evSwitchOn_SensingSystemPKG_id(19004);
//#]

IMPLEMENT_META_EVENT_P(evSwitchOn, SensingSystemPKG, SensingSystemPKG, evSwitchOn())

//## event evSwitchOff()
evSwitchOff::evSwitchOff(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evSwitchOff)
    setId(evSwitchOff_SensingSystemPKG_id);
}

//#[ ignore
const IOxfEvent::ID evSwitchOff_SensingSystemPKG_id(19005);
//#]

IMPLEMENT_META_EVENT_P(evSwitchOff, SensingSystemPKG, SensingSystemPKG, evSwitchOff())

//## event evNewAerialData()
evNewAerialData::evNewAerialData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evNewAerialData)
    setId(evNewAerialData_SensingSystemPKG_id);
}

//#[ ignore
const IOxfEvent::ID evNewAerialData_SensingSystemPKG_id(19006);
//#]

IMPLEMENT_META_EVENT_P(evNewAerialData, SensingSystemPKG, SensingSystemPKG, evNewAerialData())

//## event evNewUnderWaterData()
evNewUnderWaterData::evNewUnderWaterData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evNewUnderWaterData)
    setId(evNewUnderWaterData_SensingSystemPKG_id);
}

//#[ ignore
const IOxfEvent::ID evNewUnderWaterData_SensingSystemPKG_id(19007);
//#]

IMPLEMENT_META_EVENT_P(evNewUnderWaterData, SensingSystemPKG, SensingSystemPKG, evNewUnderWaterData())

//## event evNewSatelliteData()
evNewSatelliteData::evNewSatelliteData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evNewSatelliteData)
    setId(evNewSatelliteData_SensingSystemPKG_id);
}

//#[ ignore
const IOxfEvent::ID evNewSatelliteData_SensingSystemPKG_id(19008);
//#]

IMPLEMENT_META_EVENT_P(evNewSatelliteData, SensingSystemPKG, SensingSystemPKG, evNewSatelliteData())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensingSystemPKG.cpp
*********************************************************************/
