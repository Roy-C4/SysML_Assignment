/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20221943
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSTWDMain
//!	Generated Date	: Tue, 16, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSTWDMain.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "SMSTWDMain.h"
//## link itsAerialSensor
#include "AerialSensor.h"
//## link itsSatelliteSensor
#include "SatelliteSensor.h"
//## link itsUnderWaterSensor
#include "UnderWaterSensor.h"
//#[ ignore
#define SensingSystemPKG_SMSTWDMain_SMSTWDMain_SERIALIZE OM_NO_OP

#define OMAnim_SensingSystemPKG_SMSTWDMain_setFlowDirection_RhpString_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_flowDirection)

#define OMAnim_SensingSystemPKG_SMSTWDMain_setFlowDirection_RhpString_SERIALIZE_RET_VAL

#define OMAnim_SensingSystemPKG_SMSTWDMain_setWindDirection_RhpString_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_windDirection)

#define OMAnim_SensingSystemPKG_SMSTWDMain_setWindDirection_RhpString_SERIALIZE_RET_VAL
//#]

//## package SensingSystemPKG

//## class SMSTWDMain
//#[ ignore
SMSTWDMain::p_UnderWaterSensor_C::p_UnderWaterSensor_C(void) : double_seismicVibration_ProxyFlowPropertyInterface(), double_waterPressure_ProxyFlowPropertyInterface(), RhpString_flowDirection_ProxyFlowPropertyInterface(), bool_transmissionMode_ProxyFlowPropertyInterface(), _p_(0), itsBool_transmissionMode_ProxyFlowPropertyInterface(NULL), itsDouble_seismicVibration_ProxyFlowPropertyInterface(NULL), itsDouble_waterPressure_ProxyFlowPropertyInterface(NULL), itsRhpString_flowDirection_ProxyFlowPropertyInterface(NULL) {
}

SMSTWDMain::p_UnderWaterSensor_C::~p_UnderWaterSensor_C(void) {
    cleanUpRelations();
}

void SMSTWDMain::p_UnderWaterSensor_C::connectSMSTWDMain(SMSTWDMain* part) {
    setItsDouble_seismicVibration_ProxyFlowPropertyInterface(part);
    setItsDouble_waterPressure_ProxyFlowPropertyInterface(part);
    setItsRhpString_flowDirection_ProxyFlowPropertyInterface(part);
    setItsBool_transmissionMode_ProxyFlowPropertyInterface(part);
    
}

bool_transmissionMode_ProxyFlowPropertyInterface* SMSTWDMain::p_UnderWaterSensor_C::getItsBool_transmissionMode_ProxyFlowPropertyInterface(void) {
    return this;
}

double_seismicVibration_ProxyFlowPropertyInterface* SMSTWDMain::p_UnderWaterSensor_C::getItsDouble_seismicVibration_ProxyFlowPropertyInterface(void) {
    return this;
}

double_waterPressure_ProxyFlowPropertyInterface* SMSTWDMain::p_UnderWaterSensor_C::getItsDouble_waterPressure_ProxyFlowPropertyInterface(void) {
    return this;
}

RhpString_flowDirection_ProxyFlowPropertyInterface* SMSTWDMain::p_UnderWaterSensor_C::getItsRhpString_flowDirection_ProxyFlowPropertyInterface(void) {
    return this;
}

void SMSTWDMain::p_UnderWaterSensor_C::setFlowDirection(RhpString p_flowDirection) {
    
    if (itsRhpString_flowDirection_ProxyFlowPropertyInterface != NULL) {
        itsRhpString_flowDirection_ProxyFlowPropertyInterface->setFlowDirection(p_flowDirection);
    }
    
}

void SMSTWDMain::p_UnderWaterSensor_C::setSeismicVibration(double p_seismicVibration) {
    
    if (itsDouble_seismicVibration_ProxyFlowPropertyInterface != NULL) {
        itsDouble_seismicVibration_ProxyFlowPropertyInterface->setSeismicVibration(p_seismicVibration);
    }
    
}

void SMSTWDMain::p_UnderWaterSensor_C::setTransmissionMode(bool p_transmissionMode) {
    
    if (itsBool_transmissionMode_ProxyFlowPropertyInterface != NULL) {
        itsBool_transmissionMode_ProxyFlowPropertyInterface->setTransmissionMode(p_transmissionMode);
    }
    
}

void SMSTWDMain::p_UnderWaterSensor_C::setWaterPressure(double p_waterPressure) {
    
    if (itsDouble_waterPressure_ProxyFlowPropertyInterface != NULL) {
        itsDouble_waterPressure_ProxyFlowPropertyInterface->setWaterPressure(p_waterPressure);
    }
    
}

void SMSTWDMain::p_UnderWaterSensor_C::setItsBool_transmissionMode_ProxyFlowPropertyInterface(bool_transmissionMode_ProxyFlowPropertyInterface* const p_bool_transmissionMode_ProxyFlowPropertyInterface) {
    itsBool_transmissionMode_ProxyFlowPropertyInterface = p_bool_transmissionMode_ProxyFlowPropertyInterface;
}

void SMSTWDMain::p_UnderWaterSensor_C::setItsDouble_seismicVibration_ProxyFlowPropertyInterface(double_seismicVibration_ProxyFlowPropertyInterface* const p_double_seismicVibration_ProxyFlowPropertyInterface) {
    itsDouble_seismicVibration_ProxyFlowPropertyInterface = p_double_seismicVibration_ProxyFlowPropertyInterface;
}

void SMSTWDMain::p_UnderWaterSensor_C::setItsDouble_waterPressure_ProxyFlowPropertyInterface(double_waterPressure_ProxyFlowPropertyInterface* const p_double_waterPressure_ProxyFlowPropertyInterface) {
    itsDouble_waterPressure_ProxyFlowPropertyInterface = p_double_waterPressure_ProxyFlowPropertyInterface;
}

void SMSTWDMain::p_UnderWaterSensor_C::setItsRhpString_flowDirection_ProxyFlowPropertyInterface(RhpString_flowDirection_ProxyFlowPropertyInterface* const p_RhpString_flowDirection_ProxyFlowPropertyInterface) {
    itsRhpString_flowDirection_ProxyFlowPropertyInterface = p_RhpString_flowDirection_ProxyFlowPropertyInterface;
}

void SMSTWDMain::p_UnderWaterSensor_C::cleanUpRelations(void) {
    if(itsBool_transmissionMode_ProxyFlowPropertyInterface != NULL)
        {
            itsBool_transmissionMode_ProxyFlowPropertyInterface = NULL;
        }
    if(itsDouble_seismicVibration_ProxyFlowPropertyInterface != NULL)
        {
            itsDouble_seismicVibration_ProxyFlowPropertyInterface = NULL;
        }
    if(itsDouble_waterPressure_ProxyFlowPropertyInterface != NULL)
        {
            itsDouble_waterPressure_ProxyFlowPropertyInterface = NULL;
        }
    if(itsRhpString_flowDirection_ProxyFlowPropertyInterface != NULL)
        {
            itsRhpString_flowDirection_ProxyFlowPropertyInterface = NULL;
        }
}

SMSTWDMain::p_AerialSensor_C::p_AerialSensor_C(void) : double_windSpeed_ProxyFlowPropertyInterface(), double_precipitationAmount_ProxyFlowPropertyInterface(), double_stormPosition_ProxyFlowPropertyInterface(), RhpString_windDirection_ProxyFlowPropertyInterface(), _p_(0), itsDouble_precipitationAmount_ProxyFlowPropertyInterface(NULL), itsDouble_stormPosition_ProxyFlowPropertyInterface(NULL), itsDouble_windSpeed_ProxyFlowPropertyInterface(NULL), itsRhpString_windDirection_ProxyFlowPropertyInterface(NULL) {
}

SMSTWDMain::p_AerialSensor_C::~p_AerialSensor_C(void) {
    cleanUpRelations();
}

void SMSTWDMain::p_AerialSensor_C::connectSMSTWDMain(SMSTWDMain* part) {
    setItsDouble_windSpeed_ProxyFlowPropertyInterface(part);
    setItsDouble_precipitationAmount_ProxyFlowPropertyInterface(part);
    setItsDouble_stormPosition_ProxyFlowPropertyInterface(part);
    setItsRhpString_windDirection_ProxyFlowPropertyInterface(part);
    
}

double_precipitationAmount_ProxyFlowPropertyInterface* SMSTWDMain::p_AerialSensor_C::getItsDouble_precipitationAmount_ProxyFlowPropertyInterface(void) {
    return this;
}

double_stormPosition_ProxyFlowPropertyInterface* SMSTWDMain::p_AerialSensor_C::getItsDouble_stormPosition_ProxyFlowPropertyInterface(void) {
    return this;
}

double_windSpeed_ProxyFlowPropertyInterface* SMSTWDMain::p_AerialSensor_C::getItsDouble_windSpeed_ProxyFlowPropertyInterface(void) {
    return this;
}

RhpString_windDirection_ProxyFlowPropertyInterface* SMSTWDMain::p_AerialSensor_C::getItsRhpString_windDirection_ProxyFlowPropertyInterface(void) {
    return this;
}

void SMSTWDMain::p_AerialSensor_C::setPrecipitationAmount(double p_precipitationAmount) {
    
    if (itsDouble_precipitationAmount_ProxyFlowPropertyInterface != NULL) {
        itsDouble_precipitationAmount_ProxyFlowPropertyInterface->setPrecipitationAmount(p_precipitationAmount);
    }
    
}

void SMSTWDMain::p_AerialSensor_C::setStormPosition(double p_stormPosition) {
    
    if (itsDouble_stormPosition_ProxyFlowPropertyInterface != NULL) {
        itsDouble_stormPosition_ProxyFlowPropertyInterface->setStormPosition(p_stormPosition);
    }
    
}

void SMSTWDMain::p_AerialSensor_C::setWindDirection(RhpString p_windDirection) {
    
    if (itsRhpString_windDirection_ProxyFlowPropertyInterface != NULL) {
        itsRhpString_windDirection_ProxyFlowPropertyInterface->setWindDirection(p_windDirection);
    }
    
}

void SMSTWDMain::p_AerialSensor_C::setWindSpeed(double p_windSpeed) {
    
    if (itsDouble_windSpeed_ProxyFlowPropertyInterface != NULL) {
        itsDouble_windSpeed_ProxyFlowPropertyInterface->setWindSpeed(p_windSpeed);
    }
    
}

void SMSTWDMain::p_AerialSensor_C::setItsDouble_precipitationAmount_ProxyFlowPropertyInterface(double_precipitationAmount_ProxyFlowPropertyInterface* const p_double_precipitationAmount_ProxyFlowPropertyInterface) {
    itsDouble_precipitationAmount_ProxyFlowPropertyInterface = p_double_precipitationAmount_ProxyFlowPropertyInterface;
}

void SMSTWDMain::p_AerialSensor_C::setItsDouble_stormPosition_ProxyFlowPropertyInterface(double_stormPosition_ProxyFlowPropertyInterface* const p_double_stormPosition_ProxyFlowPropertyInterface) {
    itsDouble_stormPosition_ProxyFlowPropertyInterface = p_double_stormPosition_ProxyFlowPropertyInterface;
}

void SMSTWDMain::p_AerialSensor_C::setItsDouble_windSpeed_ProxyFlowPropertyInterface(double_windSpeed_ProxyFlowPropertyInterface* const p_double_windSpeed_ProxyFlowPropertyInterface) {
    itsDouble_windSpeed_ProxyFlowPropertyInterface = p_double_windSpeed_ProxyFlowPropertyInterface;
}

void SMSTWDMain::p_AerialSensor_C::setItsRhpString_windDirection_ProxyFlowPropertyInterface(RhpString_windDirection_ProxyFlowPropertyInterface* const p_RhpString_windDirection_ProxyFlowPropertyInterface) {
    itsRhpString_windDirection_ProxyFlowPropertyInterface = p_RhpString_windDirection_ProxyFlowPropertyInterface;
}

void SMSTWDMain::p_AerialSensor_C::cleanUpRelations(void) {
    if(itsDouble_precipitationAmount_ProxyFlowPropertyInterface != NULL)
        {
            itsDouble_precipitationAmount_ProxyFlowPropertyInterface = NULL;
        }
    if(itsDouble_stormPosition_ProxyFlowPropertyInterface != NULL)
        {
            itsDouble_stormPosition_ProxyFlowPropertyInterface = NULL;
        }
    if(itsDouble_windSpeed_ProxyFlowPropertyInterface != NULL)
        {
            itsDouble_windSpeed_ProxyFlowPropertyInterface = NULL;
        }
    if(itsRhpString_windDirection_ProxyFlowPropertyInterface != NULL)
        {
            itsRhpString_windDirection_ProxyFlowPropertyInterface = NULL;
        }
}

SMSTWDMain::p_SatelliteSensor_C::p_SatelliteSensor_C(void) : double_ImageData_ProxyFlowPropertyInterface(), double_stormCoordinates_ProxyFlowPropertyInterface(), _p_(0), itsDouble_ImageData_ProxyFlowPropertyInterface(NULL), itsDouble_stormCoordinates_ProxyFlowPropertyInterface(NULL) {
}

SMSTWDMain::p_SatelliteSensor_C::~p_SatelliteSensor_C(void) {
    cleanUpRelations();
}

void SMSTWDMain::p_SatelliteSensor_C::connectSMSTWDMain(SMSTWDMain* part) {
    setItsDouble_ImageData_ProxyFlowPropertyInterface(part);
    setItsDouble_stormCoordinates_ProxyFlowPropertyInterface(part);
    
}

double_ImageData_ProxyFlowPropertyInterface* SMSTWDMain::p_SatelliteSensor_C::getItsDouble_ImageData_ProxyFlowPropertyInterface(void) {
    return this;
}

double_stormCoordinates_ProxyFlowPropertyInterface* SMSTWDMain::p_SatelliteSensor_C::getItsDouble_stormCoordinates_ProxyFlowPropertyInterface(void) {
    return this;
}

void SMSTWDMain::p_SatelliteSensor_C::setImageData(double p_ImageData) {
    
    if (itsDouble_ImageData_ProxyFlowPropertyInterface != NULL) {
        itsDouble_ImageData_ProxyFlowPropertyInterface->setImageData(p_ImageData);
    }
    
}

void SMSTWDMain::p_SatelliteSensor_C::setStormCoordinates(double p_stormCoordinates) {
    
    if (itsDouble_stormCoordinates_ProxyFlowPropertyInterface != NULL) {
        itsDouble_stormCoordinates_ProxyFlowPropertyInterface->setStormCoordinates(p_stormCoordinates);
    }
    
}

void SMSTWDMain::p_SatelliteSensor_C::setItsDouble_ImageData_ProxyFlowPropertyInterface(double_ImageData_ProxyFlowPropertyInterface* const p_double_ImageData_ProxyFlowPropertyInterface) {
    itsDouble_ImageData_ProxyFlowPropertyInterface = p_double_ImageData_ProxyFlowPropertyInterface;
}

void SMSTWDMain::p_SatelliteSensor_C::setItsDouble_stormCoordinates_ProxyFlowPropertyInterface(double_stormCoordinates_ProxyFlowPropertyInterface* const p_double_stormCoordinates_ProxyFlowPropertyInterface) {
    itsDouble_stormCoordinates_ProxyFlowPropertyInterface = p_double_stormCoordinates_ProxyFlowPropertyInterface;
}

void SMSTWDMain::p_SatelliteSensor_C::cleanUpRelations(void) {
    if(itsDouble_ImageData_ProxyFlowPropertyInterface != NULL)
        {
            itsDouble_ImageData_ProxyFlowPropertyInterface = NULL;
        }
    if(itsDouble_stormCoordinates_ProxyFlowPropertyInterface != NULL)
        {
            itsDouble_stormCoordinates_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

SMSTWDMain::SMSTWDMain(IOxfActive* const theActiveContext) : OMReactive(), double_seismicVibration_ProxyFlowPropertyInterface(), double_waterPressure_ProxyFlowPropertyInterface(), RhpString_flowDirection_ProxyFlowPropertyInterface(), bool_transmissionMode_ProxyFlowPropertyInterface(), double_windSpeed_ProxyFlowPropertyInterface(), double_precipitationAmount_ProxyFlowPropertyInterface(), double_stormPosition_ProxyFlowPropertyInterface(), RhpString_windDirection_ProxyFlowPropertyInterface(), double_ImageData_ProxyFlowPropertyInterface(), double_stormCoordinates_ProxyFlowPropertyInterface(), itsAerialSensor(NULL), itsSatelliteSensor(NULL), itsUnderWaterSensor(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(SMSTWDMain, SMSTWDMain(), 0, SensingSystemPKG_SMSTWDMain_SMSTWDMain_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

SMSTWDMain::~SMSTWDMain(void) {
    NOTIFY_DESTRUCTOR(~SMSTWDMain, true);
    cleanUpRelations();
}

//#[ ignore
void SMSTWDMain::setFlowDirection(RhpString p_flowDirection) {
    if (flowDirection != p_flowDirection) {
        flowDirection = p_flowDirection;
        FLOW_DATA_RECEIVE("flowDirection", flowDirection, x2String);
    }
    
}

void SMSTWDMain::setImageData(double p_ImageData) {
    if (ImageData != p_ImageData) {
        ImageData = p_ImageData;
        FLOW_DATA_RECEIVE("ImageData", ImageData, x2String);
    }
    
}

void SMSTWDMain::setPrecipitationAmount(double p_precipitationAmount) {
    if (precipitationAmount != p_precipitationAmount) {
        precipitationAmount = p_precipitationAmount;
        FLOW_DATA_RECEIVE("precipitationAmount", precipitationAmount, x2String);
    }
    
}

void SMSTWDMain::setSeismicVibration(double p_seismicVibration) {
    if (seismicVibration != p_seismicVibration) {
        seismicVibration = p_seismicVibration;
        FLOW_DATA_RECEIVE("seismicVibration", seismicVibration, x2String);
    }
    
}

void SMSTWDMain::setStormCoordinates(double p_stormCoordinates) {
    if (stormCoordinates != p_stormCoordinates) {
        stormCoordinates = p_stormCoordinates;
        FLOW_DATA_RECEIVE("stormCoordinates", stormCoordinates, x2String);
    }
    
}

void SMSTWDMain::setStormPosition(double p_stormPosition) {
    if (stormPosition != p_stormPosition) {
        stormPosition = p_stormPosition;
        FLOW_DATA_RECEIVE("stormPosition", stormPosition, x2String);
    }
    
}

void SMSTWDMain::setTransmissionMode(bool p_transmissionMode) {
    if (transmissionMode != p_transmissionMode) {
        transmissionMode = p_transmissionMode;
        FLOW_DATA_RECEIVE("transmissionMode", transmissionMode, x2String);
    }
    
}

void SMSTWDMain::setWaterPressure(double p_waterPressure) {
    if (waterPressure != p_waterPressure) {
        waterPressure = p_waterPressure;
        FLOW_DATA_RECEIVE("waterPressure", waterPressure, x2String);
    }
    
}

void SMSTWDMain::setWindDirection(RhpString p_windDirection) {
    if (windDirection != p_windDirection) {
        windDirection = p_windDirection;
        FLOW_DATA_RECEIVE("windDirection", windDirection, x2String);
    }
    
}

void SMSTWDMain::setWindSpeed(double p_windSpeed) {
    if (windSpeed != p_windSpeed) {
        windSpeed = p_windSpeed;
        FLOW_DATA_RECEIVE("windSpeed", windSpeed, x2String);
    }
    
}
//#]

SMSTWDMain::p_UnderWaterSensor_C* SMSTWDMain::getP_UnderWaterSensor(void) const {
    return (SMSTWDMain::p_UnderWaterSensor_C*) &p_UnderWaterSensor;
}

SMSTWDMain::p_UnderWaterSensor_C* SMSTWDMain::get_p_UnderWaterSensor(void) const {
    return (SMSTWDMain::p_UnderWaterSensor_C*) &p_UnderWaterSensor;
}

SMSTWDMain::p_AerialSensor_C* SMSTWDMain::getP_AerialSensor(void) const {
    return (SMSTWDMain::p_AerialSensor_C*) &p_AerialSensor;
}

SMSTWDMain::p_AerialSensor_C* SMSTWDMain::get_p_AerialSensor(void) const {
    return (SMSTWDMain::p_AerialSensor_C*) &p_AerialSensor;
}

SMSTWDMain::p_SatelliteSensor_C* SMSTWDMain::getP_SatelliteSensor(void) const {
    return (SMSTWDMain::p_SatelliteSensor_C*) &p_SatelliteSensor;
}

SMSTWDMain::p_SatelliteSensor_C* SMSTWDMain::get_p_SatelliteSensor(void) const {
    return (SMSTWDMain::p_SatelliteSensor_C*) &p_SatelliteSensor;
}

const double SMSTWDMain::getImageData(void) const {
    return ImageData;
}

const int SMSTWDMain::getActiveChannels(void) const {
    return activeChannels;
}

void SMSTWDMain::setActiveChannels(const int p_activeChannels) {
    activeChannels = p_activeChannels;
}

const int SMSTWDMain::getCurrentRiskScore(void) const {
    return currentRiskScore;
}

void SMSTWDMain::setCurrentRiskScore(const int p_currentRiskScore) {
    currentRiskScore = p_currentRiskScore;
}

const int SMSTWDMain::getDetectionThreshold(void) const {
    return detectionThreshold;
}

void SMSTWDMain::setDetectionThreshold(const int p_detectionThreshold) {
    detectionThreshold = p_detectionThreshold;
}

const RhpString SMSTWDMain::getFlowDirection(void) const {
    return flowDirection;
}

const int SMSTWDMain::getHeartbeatInterval(void) const {
    return heartbeatInterval;
}

void SMSTWDMain::setHeartbeatInterval(const int p_heartbeatInterval) {
    heartbeatInterval = p_heartbeatInterval;
}

const double SMSTWDMain::getPrecipitationAmount(void) const {
    return precipitationAmount;
}

const double SMSTWDMain::getSeismicVibration(void) const {
    return seismicVibration;
}

const double SMSTWDMain::getStormCoordinates(void) const {
    return stormCoordinates;
}

const double SMSTWDMain::getStormPosition(void) const {
    return stormPosition;
}

const double SMSTWDMain::getTargetRegionCoordinates(void) const {
    return targetRegionCoordinates;
}

void SMSTWDMain::setTargetRegionCoordinates(const double p_targetRegionCoordinates) {
    targetRegionCoordinates = p_targetRegionCoordinates;
}

const bool SMSTWDMain::getTransmissionMode(void) const {
    return transmissionMode;
}

const double SMSTWDMain::getWaterPressure(void) const {
    return waterPressure;
}

const RhpString SMSTWDMain::getWindDirection(void) const {
    return windDirection;
}

const double SMSTWDMain::getWindSpeed(void) const {
    return windSpeed;
}

const AerialSensor* SMSTWDMain::getItsAerialSensor(void) const {
    return itsAerialSensor;
}

void SMSTWDMain::setItsAerialSensor(AerialSensor* const p_AerialSensor) {
    if(p_AerialSensor != NULL)
        {
            p_AerialSensor->_setItsSMSTWDMain(this);
        }
    _setItsAerialSensor(p_AerialSensor);
}

const CommunicationUnit* SMSTWDMain::getItsCommunicationUnit(void) const {
    return &itsCommunicationUnit;
}

const DataProcessingUnit* SMSTWDMain::getItsDataProcessingUnit(void) const {
    return &itsDataProcessingUnit;
}

const SatelliteSensor* SMSTWDMain::getItsSatelliteSensor(void) const {
    return itsSatelliteSensor;
}

void SMSTWDMain::setItsSatelliteSensor(SatelliteSensor* const p_SatelliteSensor) {
    if(p_SatelliteSensor != NULL)
        {
            p_SatelliteSensor->_setItsSMSTWDMain(this);
        }
    _setItsSatelliteSensor(p_SatelliteSensor);
}

const UnderWaterSensor* SMSTWDMain::getItsUnderWaterSensor(void) const {
    return itsUnderWaterSensor;
}

void SMSTWDMain::setItsUnderWaterSensor(UnderWaterSensor* const p_UnderWaterSensor) {
    if(p_UnderWaterSensor != NULL)
        {
            p_UnderWaterSensor->_setItsSMSTWDMain(this);
        }
    _setItsUnderWaterSensor(p_UnderWaterSensor);
}

bool SMSTWDMain::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void SMSTWDMain::initRelations(void) {
    if (get_p_UnderWaterSensor() != NULL) {
        get_p_UnderWaterSensor()->connectSMSTWDMain(this);
    }
    if (get_p_AerialSensor() != NULL) {
        get_p_AerialSensor()->connectSMSTWDMain(this);
    }
    if (get_p_SatelliteSensor() != NULL) {
        get_p_SatelliteSensor()->connectSMSTWDMain(this);
    }
}

void SMSTWDMain::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void SMSTWDMain::cleanUpRelations(void) {
    if(itsAerialSensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAerialSensor");
            const SMSTWDMain* p_SMSTWDMain = itsAerialSensor->getItsSMSTWDMain();
            if(p_SMSTWDMain != NULL)
                {
                    itsAerialSensor->__setItsSMSTWDMain(NULL);
                }
            itsAerialSensor = NULL;
        }
    if(itsSatelliteSensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSatelliteSensor");
            const SMSTWDMain* p_SMSTWDMain = itsSatelliteSensor->getItsSMSTWDMain();
            if(p_SMSTWDMain != NULL)
                {
                    itsSatelliteSensor->__setItsSMSTWDMain(NULL);
                }
            itsSatelliteSensor = NULL;
        }
    if(itsUnderWaterSensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUnderWaterSensor");
            const SMSTWDMain* p_SMSTWDMain = itsUnderWaterSensor->getItsSMSTWDMain();
            if(p_SMSTWDMain != NULL)
                {
                    itsUnderWaterSensor->__setItsSMSTWDMain(NULL);
                }
            itsUnderWaterSensor = NULL;
        }
}

void SMSTWDMain::__setItsAerialSensor(AerialSensor* const p_AerialSensor) {
    itsAerialSensor = p_AerialSensor;
    if(p_AerialSensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAerialSensor", p_AerialSensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAerialSensor");
        }
}

void SMSTWDMain::_setItsAerialSensor(AerialSensor* const p_AerialSensor) {
    if(itsAerialSensor != NULL)
        {
            itsAerialSensor->__setItsSMSTWDMain(NULL);
        }
    __setItsAerialSensor(p_AerialSensor);
}

void SMSTWDMain::_clearItsAerialSensor(void) {
    NOTIFY_RELATION_CLEARED("itsAerialSensor");
    itsAerialSensor = NULL;
}

void SMSTWDMain::__setItsSatelliteSensor(SatelliteSensor* const p_SatelliteSensor) {
    itsSatelliteSensor = p_SatelliteSensor;
    if(p_SatelliteSensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSatelliteSensor", p_SatelliteSensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSatelliteSensor");
        }
}

void SMSTWDMain::_setItsSatelliteSensor(SatelliteSensor* const p_SatelliteSensor) {
    if(itsSatelliteSensor != NULL)
        {
            itsSatelliteSensor->__setItsSMSTWDMain(NULL);
        }
    __setItsSatelliteSensor(p_SatelliteSensor);
}

void SMSTWDMain::_clearItsSatelliteSensor(void) {
    NOTIFY_RELATION_CLEARED("itsSatelliteSensor");
    itsSatelliteSensor = NULL;
}

void SMSTWDMain::__setItsUnderWaterSensor(UnderWaterSensor* const p_UnderWaterSensor) {
    itsUnderWaterSensor = p_UnderWaterSensor;
    if(p_UnderWaterSensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUnderWaterSensor", p_UnderWaterSensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUnderWaterSensor");
        }
}

void SMSTWDMain::_setItsUnderWaterSensor(UnderWaterSensor* const p_UnderWaterSensor) {
    if(itsUnderWaterSensor != NULL)
        {
            itsUnderWaterSensor->__setItsSMSTWDMain(NULL);
        }
    __setItsUnderWaterSensor(p_UnderWaterSensor);
}

void SMSTWDMain::_clearItsUnderWaterSensor(void) {
    NOTIFY_RELATION_CLEARED("itsUnderWaterSensor");
    itsUnderWaterSensor = NULL;
}

void SMSTWDMain::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus SMSTWDMain::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Off
        case Off:
        {
            if(IS_EVENT_TYPE_OF(evSwitchOn_SensingSystemPKG_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    //#[ transition 1 
                    itsAerialSensor->GEN(evDetectParameters());
                    itsSatelliteSensor->GEN(evDetectParameters());
                    itsUnderWaterSensor->GEN(evDetectParameters());
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.On");
                    rootState_subState = On;
                    rootState_active = On;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State On
        case On:
        {
            if(IS_EVENT_TYPE_OF(evNewUnderWaterData_SensingSystemPKG_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    //#[ transition 4 
                    itsDataProcessingUnit.inferUnderWater(this->flowDirection, this->seismicVibration, this->transmissionMode, this->waterPressure);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            else {
                if(IS_EVENT_TYPE_OF(evSwitchOff_SensingSystemPKG_id) == 1)
                    {
                        NOTIFY_TRANSITION_STARTED("2");
                        NOTIFY_STATE_EXITED("ROOT.On");
                        //#[ transition 2 
                        itsAerialSensor->GEN(evIdle());
                        itsSatelliteSensor->GEN(evIdle());
                        itsUnderWaterSensor->GEN(evIdle());
                        //#]
                        NOTIFY_STATE_ENTERED("ROOT.Off");
                        rootState_subState = Off;
                        rootState_active = Off;
                        NOTIFY_TRANSITION_TERMINATED("2");
                        res = eventConsumed;
                    }
                else {
                    if(IS_EVENT_TYPE_OF(evNewSatelliteData_SensingSystemPKG_id) == 1)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            //#[ transition 5 
                            itsDataProcessingUnit.inferSatellite(this->ImageData, this->stormCoordinates);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                    else {
                        if(IS_EVENT_TYPE_OF(evNewAerialData_SensingSystemPKG_id) == 1)
                            {
                                NOTIFY_TRANSITION_STARTED("3");
                                //#[ transition 3 
                                 itsDataProcessingUnit.inferAerial(this->precipitationAmount, this->stormPosition, this->windSpeed, this->windDirection);
                                //#]
                                NOTIFY_TRANSITION_TERMINATED("3");
                                res = eventConsumed;
                            }
                        }
                        
                    }
                    
                }
                
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSMSTWDMain::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("windSpeed", x2String(myReal->windSpeed));
    aomsAttributes->addAttribute("windDirection", x2String(myReal->windDirection));
    aomsAttributes->addAttribute("precipitationAmount", x2String(myReal->precipitationAmount));
    aomsAttributes->addAttribute("stormPosition", x2String(myReal->stormPosition));
    aomsAttributes->addAttribute("seismicVibration", x2String(myReal->seismicVibration));
    aomsAttributes->addAttribute("flowDirection", x2String(myReal->flowDirection));
    aomsAttributes->addAttribute("transmissionMode", x2String(myReal->transmissionMode));
    aomsAttributes->addAttribute("waterPressure", x2String(myReal->waterPressure));
    aomsAttributes->addAttribute("ImageData", x2String(myReal->ImageData));
    aomsAttributes->addAttribute("stormCoordinates", x2String(myReal->stormCoordinates));
    aomsAttributes->addAttribute("targetRegionCoordinates", x2String(myReal->targetRegionCoordinates));
    aomsAttributes->addAttribute("activeChannels", x2String(myReal->activeChannels));
    aomsAttributes->addAttribute("heartbeatInterval", x2String(myReal->heartbeatInterval));
    aomsAttributes->addAttribute("currentRiskScore", x2String(myReal->currentRiskScore));
    aomsAttributes->addAttribute("detectionThreshold", x2String(myReal->detectionThreshold));
}

void OMAnimatedSMSTWDMain::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsAerialSensor", false, true);
    if(myReal->itsAerialSensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsAerialSensor);
        }
    aomsRelations->addRelation("itsUnderWaterSensor", false, true);
    if(myReal->itsUnderWaterSensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsUnderWaterSensor);
        }
    aomsRelations->addRelation("itsSatelliteSensor", false, true);
    if(myReal->itsSatelliteSensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsSatelliteSensor);
        }
    aomsRelations->addRelation("itsDataProcessingUnit", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDataProcessingUnit);
    aomsRelations->addRelation("itsCommunicationUnit", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCommunicationUnit);
}

void OMAnimatedSMSTWDMain::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case SMSTWDMain::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case SMSTWDMain::On:
        {
            On_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSMSTWDMain::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
}

void OMAnimatedSMSTWDMain::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}
//#]

IMPLEMENT_REACTIVE_META_P(SMSTWDMain, SensingSystemPKG, SensingSystemPKG, false, OMAnimatedSMSTWDMain)

IMPLEMENT_META_OP(OMAnimatedSMSTWDMain, SensingSystemPKG_SMSTWDMain_setFlowDirection_RhpString, "setFlowDirection", FALSE, "setFlowDirection(RhpString)", 1)

IMPLEMENT_OP_CALL(SensingSystemPKG_SMSTWDMain_setFlowDirection_RhpString, SMSTWDMain, setFlowDirection(p_flowDirection), NO_OP())

IMPLEMENT_META_OP(OMAnimatedSMSTWDMain, SensingSystemPKG_SMSTWDMain_setWindDirection_RhpString, "setWindDirection", FALSE, "setWindDirection(RhpString)", 1)

IMPLEMENT_OP_CALL(SensingSystemPKG_SMSTWDMain_setWindDirection_RhpString, SMSTWDMain, setWindDirection(p_windDirection), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSTWDMain.cpp
*********************************************************************/
