/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20221943
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UnderWaterSensor
//!	Generated Date	: Wed, 17, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\UnderWaterSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "UnderWaterSensor.h"
//## link itsSMSTWDMain
#include "SMSTWDMain.h"
//#[ ignore
#define SensingSystemPKG_UnderWaterSensor_UnderWaterSensor_SERIALIZE OM_NO_OP

#define SensingSystemPKG_UnderWaterSensor_getSeismicVibrations_SERIALIZE OM_NO_OP

#define SensingSystemPKG_UnderWaterSensor_getTransmissionMode_SERIALIZE OM_NO_OP

#define SensingSystemPKG_UnderWaterSensor_getWaterPressure_SERIALIZE OM_NO_OP

#define SensingSystemPKG_UnderWaterSensor_getflowDirection_SERIALIZE OM_NO_OP
//#]

//## package SensingSystemPKG

//## class UnderWaterSensor
//#[ ignore
UnderWaterSensor::p_UnderWaterSensor_C::p_UnderWaterSensor_C(void) : double_seismicVibration_ProxyFlowPropertyInterface(), double_waterPressure_ProxyFlowPropertyInterface(), RhpString_flowDirection_ProxyFlowPropertyInterface(), bool_transmissionMode_ProxyFlowPropertyInterface(), _p_(0), itsBool_transmissionMode_ProxyFlowPropertyInterface(NULL), itsDouble_seismicVibration_ProxyFlowPropertyInterface(NULL), itsDouble_waterPressure_ProxyFlowPropertyInterface(NULL), itsRhpString_flowDirection_ProxyFlowPropertyInterface(NULL) {
}

UnderWaterSensor::p_UnderWaterSensor_C::~p_UnderWaterSensor_C(void) {
    cleanUpRelations();
}

bool_transmissionMode_ProxyFlowPropertyInterface* UnderWaterSensor::p_UnderWaterSensor_C::getItsBool_transmissionMode_ProxyFlowPropertyInterface(void) {
    return this;
}

double_seismicVibration_ProxyFlowPropertyInterface* UnderWaterSensor::p_UnderWaterSensor_C::getItsDouble_seismicVibration_ProxyFlowPropertyInterface(void) {
    return this;
}

double_waterPressure_ProxyFlowPropertyInterface* UnderWaterSensor::p_UnderWaterSensor_C::getItsDouble_waterPressure_ProxyFlowPropertyInterface(void) {
    return this;
}

RhpString_flowDirection_ProxyFlowPropertyInterface* UnderWaterSensor::p_UnderWaterSensor_C::getItsRhpString_flowDirection_ProxyFlowPropertyInterface(void) {
    return this;
}

UnderWaterSensor::p_UnderWaterSensor_C* UnderWaterSensor::p_UnderWaterSensor_C::getOutBound(void) {
    return this;
}

void UnderWaterSensor::p_UnderWaterSensor_C::setFlowDirection(RhpString p_flowDirection) {
    
    if (itsRhpString_flowDirection_ProxyFlowPropertyInterface != NULL) {
        itsRhpString_flowDirection_ProxyFlowPropertyInterface->setFlowDirection(p_flowDirection);
    }
    
}

void UnderWaterSensor::p_UnderWaterSensor_C::setSeismicVibration(double p_seismicVibration) {
    
    if (itsDouble_seismicVibration_ProxyFlowPropertyInterface != NULL) {
        itsDouble_seismicVibration_ProxyFlowPropertyInterface->setSeismicVibration(p_seismicVibration);
    }
    
}

void UnderWaterSensor::p_UnderWaterSensor_C::setTransmissionMode(bool p_transmissionMode) {
    
    if (itsBool_transmissionMode_ProxyFlowPropertyInterface != NULL) {
        itsBool_transmissionMode_ProxyFlowPropertyInterface->setTransmissionMode(p_transmissionMode);
    }
    
}

void UnderWaterSensor::p_UnderWaterSensor_C::setWaterPressure(double p_waterPressure) {
    
    if (itsDouble_waterPressure_ProxyFlowPropertyInterface != NULL) {
        itsDouble_waterPressure_ProxyFlowPropertyInterface->setWaterPressure(p_waterPressure);
    }
    
}

void UnderWaterSensor::p_UnderWaterSensor_C::setItsBool_transmissionMode_ProxyFlowPropertyInterface(bool_transmissionMode_ProxyFlowPropertyInterface* const p_bool_transmissionMode_ProxyFlowPropertyInterface) {
    itsBool_transmissionMode_ProxyFlowPropertyInterface = p_bool_transmissionMode_ProxyFlowPropertyInterface;
}

void UnderWaterSensor::p_UnderWaterSensor_C::setItsDouble_seismicVibration_ProxyFlowPropertyInterface(double_seismicVibration_ProxyFlowPropertyInterface* const p_double_seismicVibration_ProxyFlowPropertyInterface) {
    itsDouble_seismicVibration_ProxyFlowPropertyInterface = p_double_seismicVibration_ProxyFlowPropertyInterface;
}

void UnderWaterSensor::p_UnderWaterSensor_C::setItsDouble_waterPressure_ProxyFlowPropertyInterface(double_waterPressure_ProxyFlowPropertyInterface* const p_double_waterPressure_ProxyFlowPropertyInterface) {
    itsDouble_waterPressure_ProxyFlowPropertyInterface = p_double_waterPressure_ProxyFlowPropertyInterface;
}

void UnderWaterSensor::p_UnderWaterSensor_C::setItsRhpString_flowDirection_ProxyFlowPropertyInterface(RhpString_flowDirection_ProxyFlowPropertyInterface* const p_RhpString_flowDirection_ProxyFlowPropertyInterface) {
    itsRhpString_flowDirection_ProxyFlowPropertyInterface = p_RhpString_flowDirection_ProxyFlowPropertyInterface;
}

void UnderWaterSensor::p_UnderWaterSensor_C::cleanUpRelations(void) {
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
//#]

UnderWaterSensor::UnderWaterSensor(IOxfActive* const theActiveContext) : OMReactive(), itsSMSTWDMain(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(UnderWaterSensor, UnderWaterSensor(), 0, SensingSystemPKG_UnderWaterSensor_UnderWaterSensor_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

UnderWaterSensor::~UnderWaterSensor(void) {
    NOTIFY_DESTRUCTOR(~UnderWaterSensor, true);
    cleanUpRelations();
    cancelTimeouts();
}

void UnderWaterSensor::getSeismicVibrations(void) {
    NOTIFY_OPERATION(getSeismicVibrations, getSeismicVibrations(), 0, SensingSystemPKG_UnderWaterSensor_getSeismicVibrations_SERIALIZE);
    //#[ operation getSeismicVibrations()
    setSeismicVibration(double(( std::rand() % (10 + 1))));
    std::cout<<"Richter Scale reading: " << this->seismicVibration <<std::endl;
    
    itsSMSTWDMain->GEN(evNewUnderWaterData());
    //#]
}

void UnderWaterSensor::getTransmissionMode(void) {
    NOTIFY_OPERATION(getTransmissionMode, getTransmissionMode(), 0, SensingSystemPKG_UnderWaterSensor_getTransmissionMode_SERIALIZE);
    //#[ operation getTransmissionMode()
    int thresholdSeismic = 4;
    int thresholdPressure = 100;
    
    
    if (this->seismicVibration >= thresholdSeismic && this->waterPressure >= thresholdPressure){
    	setTransmissionMode(true);
    	std::cout << "Reached\n";
    }
    else {
    	setTransmissionMode(false);
    }
    
    itsSMSTWDMain->GEN(evNewUnderWaterData());
    //#]
}

void UnderWaterSensor::getWaterPressure(void) {
    NOTIFY_OPERATION(getWaterPressure, getWaterPressure(), 0, SensingSystemPKG_UnderWaterSensor_getWaterPressure_SERIALIZE);
    //#[ operation getWaterPressure()
    setWaterPressure(double(( std::rand() % (500 + 1))));
    std::cout<<"Water Pressure: " << this->waterPressure <<std::endl;
    
    itsSMSTWDMain->GEN(evNewUnderWaterData());
    //#]
}

void UnderWaterSensor::getflowDirection(void) {
    NOTIFY_OPERATION(getflowDirection, getflowDirection(), 0, SensingSystemPKG_UnderWaterSensor_getflowDirection_SERIALIZE);
    //#[ operation getflowDirection()
    char* dir[8] = {"N", "NE", "E", "SE", "S", "SW", "W", "NW"};
    
    int idx = int(std::rand() % ( 7 + 1 ));
    
    setFlowDirection(dir[idx]);
    
    std::cout << "Wind Direction: " << this->flowDirection << std::endl;
    
    itsSMSTWDMain->GEN(evNewUnderWaterData());
    
    
    
    //#]
}

//#[ ignore
void UnderWaterSensor::setFlowDirection(RhpString p_flowDirection) {
    if (flowDirection != p_flowDirection)  {
        flowDirection = p_flowDirection;
        FLOW_DATA_SEND(flowDirection, p_UnderWaterSensor, setFlowDirection, x2String);
    }
}

void UnderWaterSensor::setSeismicVibration(double p_seismicVibration) {
    if (seismicVibration != p_seismicVibration)  {
        seismicVibration = p_seismicVibration;
        FLOW_DATA_SEND(seismicVibration, p_UnderWaterSensor, setSeismicVibration, x2String);
    }
}

void UnderWaterSensor::setTransmissionMode(bool p_transmissionMode) {
    if (transmissionMode != p_transmissionMode)  {
        transmissionMode = p_transmissionMode;
        FLOW_DATA_SEND(transmissionMode, p_UnderWaterSensor, setTransmissionMode, x2String);
    }
}

void UnderWaterSensor::setWaterPressure(double p_waterPressure) {
    if (waterPressure != p_waterPressure)  {
        waterPressure = p_waterPressure;
        FLOW_DATA_SEND(waterPressure, p_UnderWaterSensor, setWaterPressure, x2String);
    }
}
//#]

UnderWaterSensor::p_UnderWaterSensor_C* UnderWaterSensor::getP_UnderWaterSensor(void) const {
    return (UnderWaterSensor::p_UnderWaterSensor_C*) &p_UnderWaterSensor;
}

UnderWaterSensor::p_UnderWaterSensor_C* UnderWaterSensor::get_p_UnderWaterSensor(void) const {
    return (UnderWaterSensor::p_UnderWaterSensor_C*) &p_UnderWaterSensor;
}

const RhpString UnderWaterSensor::getFlowDirection(void) const {
    return flowDirection;
}

const double UnderWaterSensor::getSeismicVibration(void) const {
    return seismicVibration;
}

const SMSTWDMain* UnderWaterSensor::getItsSMSTWDMain(void) const {
    return itsSMSTWDMain;
}

void UnderWaterSensor::setItsSMSTWDMain(SMSTWDMain* const p_SMSTWDMain) {
    if(p_SMSTWDMain != NULL)
        {
            p_SMSTWDMain->_setItsUnderWaterSensor(this);
        }
    _setItsSMSTWDMain(p_SMSTWDMain);
}

bool UnderWaterSensor::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(state_9_timeout == arg)
        {
            state_9_timeout = NULL;
            res = true;
        }
    if(state_8_timeout == arg)
        {
            state_8_timeout = NULL;
            res = true;
        }
    if(state_7_timeout == arg)
        {
            state_7_timeout = NULL;
            res = true;
        }
    if(state_6_timeout == arg)
        {
            state_6_timeout = NULL;
            res = true;
        }
    return res;
}

bool UnderWaterSensor::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void UnderWaterSensor::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_9_subState = OMNonState;
    state_9_active = OMNonState;
    state_9_timeout = NULL;
    state_8_subState = OMNonState;
    state_8_active = OMNonState;
    state_8_timeout = NULL;
    state_7_subState = OMNonState;
    state_7_active = OMNonState;
    state_7_timeout = NULL;
    state_6_subState = OMNonState;
    state_6_active = OMNonState;
    state_6_timeout = NULL;
}

void UnderWaterSensor::cleanUpRelations(void) {
    if(itsSMSTWDMain != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSTWDMain");
            const UnderWaterSensor* p_UnderWaterSensor = itsSMSTWDMain->getItsUnderWaterSensor();
            if(p_UnderWaterSensor != NULL)
                {
                    itsSMSTWDMain->__setItsUnderWaterSensor(NULL);
                }
            itsSMSTWDMain = NULL;
        }
}

void UnderWaterSensor::cancelTimeouts(void) {
    cancel(state_9_timeout);
    cancel(state_8_timeout);
    cancel(state_7_timeout);
    cancel(state_6_timeout);
}

void UnderWaterSensor::__setItsSMSTWDMain(SMSTWDMain* const p_SMSTWDMain) {
    itsSMSTWDMain = p_SMSTWDMain;
    if(p_SMSTWDMain != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSTWDMain", p_SMSTWDMain, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSTWDMain");
        }
}

void UnderWaterSensor::_setItsSMSTWDMain(SMSTWDMain* const p_SMSTWDMain) {
    if(itsSMSTWDMain != NULL)
        {
            itsSMSTWDMain->__setItsUnderWaterSensor(NULL);
        }
    __setItsSMSTWDMain(p_SMSTWDMain);
}

void UnderWaterSensor::_clearItsSMSTWDMain(void) {
    NOTIFY_RELATION_CLEARED("itsSMSTWDMain");
    itsSMSTWDMain = NULL;
}

IOxfReactive::TakeEventStatus UnderWaterSensor::ReadyToDetectTakeevDetectParameters(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("1");
    NOTIFY_STATE_EXITED("ROOT.ReadyToDetect");
    DetectingUnderwater_entDef();
    NOTIFY_TRANSITION_TERMINATED("1");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus UnderWaterSensor::ReadyToDetect_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evDetectParameters_SensingSystemPKG_id) == 1)
        {
            res = ReadyToDetectTakeevDetectParameters();
        }
    
    return res;
}

void UnderWaterSensor::DetectingUnderwater_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.DetectingUnderwater");
    rootState_subState = DetectingUnderwater;
    rootState_active = DetectingUnderwater;
    state_6_entDef();
    state_7_entDef();
    state_8_entDef();
    state_9_entDef();
}

void UnderWaterSensor::DetectingUnderwater_exit(void) {
    switch (state_6_subState) {
        // State flowDirectionDetected
        case flowDirectionDetected:
        {
            cancel(state_6_timeout);
            NOTIFY_STATE_EXITED("ROOT.DetectingUnderwater.state_6.flowDirectionDetected");
        }
        break;
        case accepttimeevent_10:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.DetectingUnderwater.state_6.accepttimeevent_10");
        }
        break;
        default:
            break;
    }
    state_6_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.DetectingUnderwater.state_6");
    switch (state_7_subState) {
        // State seismicVibrationDetected
        case seismicVibrationDetected:
        {
            cancel(state_7_timeout);
            NOTIFY_STATE_EXITED("ROOT.DetectingUnderwater.state_7.seismicVibrationDetected");
        }
        break;
        case accepttimeevent_11:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.DetectingUnderwater.state_7.accepttimeevent_11");
        }
        break;
        default:
            break;
    }
    state_7_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.DetectingUnderwater.state_7");
    switch (state_8_subState) {
        // State transmissionModeUpdated
        case transmissionModeUpdated:
        {
            cancel(state_8_timeout);
            NOTIFY_STATE_EXITED("ROOT.DetectingUnderwater.state_8.transmissionModeUpdated");
        }
        break;
        case accepttimeevent_14:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.DetectingUnderwater.state_8.accepttimeevent_14");
        }
        break;
        default:
            break;
    }
    state_8_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.DetectingUnderwater.state_8");
    switch (state_9_subState) {
        // State waterPressureAnalysed
        case waterPressureAnalysed:
        {
            cancel(state_9_timeout);
            NOTIFY_STATE_EXITED("ROOT.DetectingUnderwater.state_9.waterPressureAnalysed");
        }
        break;
        case accepttimeevent_13:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.DetectingUnderwater.state_9.accepttimeevent_13");
        }
        break;
        default:
            break;
    }
    state_9_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.DetectingUnderwater.state_9");
    
    NOTIFY_STATE_EXITED("ROOT.DetectingUnderwater");
}

IOxfReactive::TakeEventStatus UnderWaterSensor::DetectingUnderwater_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    IOxfReactive::TakeEventStatus omComponentStatus = eventNotConsumed;
    bool dispatchDone = false;
    {
        // State state_6
        omComponentStatus = state_6_processEvent();
        if(omComponentStatus != eventNotConsumed)
            {
                res = eventConsumed;
                if(IS_IN(DetectingUnderwater) == false)
                    {
                        dispatchDone = true;
                    }
            }
    }
    if(!dispatchDone)
        {
            // State state_7
            omComponentStatus = state_7_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                    if(IS_IN(DetectingUnderwater) == false)
                        {
                            dispatchDone = true;
                        }
                }
        }
    if(!dispatchDone)
        {
            // State state_8
            omComponentStatus = state_8_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                    if(IS_IN(DetectingUnderwater) == false)
                        {
                            dispatchDone = true;
                        }
                }
        }
    if(!dispatchDone)
        {
            // State state_9
            omComponentStatus = state_9_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                }
        }
    if(res == eventNotConsumed)
        {
            res = DetectingUnderwater_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus UnderWaterSensor::DetectingUnderwater_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evIdle_SensingSystemPKG_id) == 1)
        {
            NOTIFY_TRANSITION_STARTED("12");
            DetectingUnderwater_exit();
            NOTIFY_STATE_ENTERED("ROOT.ReadyToDetect");
            rootState_subState = ReadyToDetect;
            rootState_active = ReadyToDetect;
            NOTIFY_TRANSITION_TERMINATED("12");
            res = eventConsumed;
        }
    
    return res;
}

void UnderWaterSensor::state_9_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.DetectingUnderwater.state_9");
    NOTIFY_TRANSITION_STARTED("5");
    NOTIFY_STATE_ENTERED("ROOT.DetectingUnderwater.state_9.waterPressureAnalysed");
    state_9_subState = waterPressureAnalysed;
    state_9_active = waterPressureAnalysed;
    //#[ state DetectingUnderwater.state_9.waterPressureAnalysed.(Entry) 
    getWaterPressure();
    //#]
    state_9_timeout = scheduleTimeout(500, "ROOT.DetectingUnderwater.state_9.waterPressureAnalysed");
    NOTIFY_TRANSITION_TERMINATED("5");
}

IOxfReactive::TakeEventStatus UnderWaterSensor::state_9_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_9_active) {
        // State waterPressureAnalysed
        case waterPressureAnalysed:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == state_9_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("10");
                            cancel(state_9_timeout);
                            NOTIFY_STATE_EXITED("ROOT.DetectingUnderwater.state_9.waterPressureAnalysed");
                            NOTIFY_STATE_ENTERED("ROOT.DetectingUnderwater.state_9.accepttimeevent_13");
                            pushNullTransition();
                            state_9_subState = accepttimeevent_13;
                            state_9_active = accepttimeevent_13;
                            NOTIFY_TRANSITION_TERMINATED("10");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case accepttimeevent_13:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("11");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.DetectingUnderwater.state_9.accepttimeevent_13");
                    NOTIFY_STATE_ENTERED("ROOT.DetectingUnderwater.state_9.waterPressureAnalysed");
                    state_9_subState = waterPressureAnalysed;
                    state_9_active = waterPressureAnalysed;
                    //#[ state DetectingUnderwater.state_9.waterPressureAnalysed.(Entry) 
                    getWaterPressure();
                    //#]
                    state_9_timeout = scheduleTimeout(500, "ROOT.DetectingUnderwater.state_9.waterPressureAnalysed");
                    NOTIFY_TRANSITION_TERMINATED("11");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void UnderWaterSensor::state_8_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.DetectingUnderwater.state_8");
    NOTIFY_TRANSITION_STARTED("4");
    NOTIFY_STATE_ENTERED("ROOT.DetectingUnderwater.state_8.transmissionModeUpdated");
    state_8_subState = transmissionModeUpdated;
    state_8_active = transmissionModeUpdated;
    //#[ state DetectingUnderwater.state_8.transmissionModeUpdated.(Entry) 
    getTransmissionMode();
    //#]
    state_8_timeout = scheduleTimeout(0, "ROOT.DetectingUnderwater.state_8.transmissionModeUpdated");
    NOTIFY_TRANSITION_TERMINATED("4");
}

IOxfReactive::TakeEventStatus UnderWaterSensor::state_8_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_8_active) {
        // State transmissionModeUpdated
        case transmissionModeUpdated:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == state_8_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("13");
                            cancel(state_8_timeout);
                            NOTIFY_STATE_EXITED("ROOT.DetectingUnderwater.state_8.transmissionModeUpdated");
                            NOTIFY_STATE_ENTERED("ROOT.DetectingUnderwater.state_8.accepttimeevent_14");
                            pushNullTransition();
                            state_8_subState = accepttimeevent_14;
                            state_8_active = accepttimeevent_14;
                            NOTIFY_TRANSITION_TERMINATED("13");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case accepttimeevent_14:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("14");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.DetectingUnderwater.state_8.accepttimeevent_14");
                    NOTIFY_STATE_ENTERED("ROOT.DetectingUnderwater.state_8.transmissionModeUpdated");
                    state_8_subState = transmissionModeUpdated;
                    state_8_active = transmissionModeUpdated;
                    //#[ state DetectingUnderwater.state_8.transmissionModeUpdated.(Entry) 
                    getTransmissionMode();
                    //#]
                    state_8_timeout = scheduleTimeout(0, "ROOT.DetectingUnderwater.state_8.transmissionModeUpdated");
                    NOTIFY_TRANSITION_TERMINATED("14");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void UnderWaterSensor::state_7_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.DetectingUnderwater.state_7");
    NOTIFY_TRANSITION_STARTED("3");
    NOTIFY_STATE_ENTERED("ROOT.DetectingUnderwater.state_7.seismicVibrationDetected");
    state_7_subState = seismicVibrationDetected;
    state_7_active = seismicVibrationDetected;
    //#[ state DetectingUnderwater.state_7.seismicVibrationDetected.(Entry) 
    getSeismicVibrations();
    //#]
    state_7_timeout = scheduleTimeout(500, "ROOT.DetectingUnderwater.state_7.seismicVibrationDetected");
    NOTIFY_TRANSITION_TERMINATED("3");
}

IOxfReactive::TakeEventStatus UnderWaterSensor::state_7_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_7_active) {
        // State seismicVibrationDetected
        case seismicVibrationDetected:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == state_7_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("8");
                            cancel(state_7_timeout);
                            NOTIFY_STATE_EXITED("ROOT.DetectingUnderwater.state_7.seismicVibrationDetected");
                            NOTIFY_STATE_ENTERED("ROOT.DetectingUnderwater.state_7.accepttimeevent_11");
                            pushNullTransition();
                            state_7_subState = accepttimeevent_11;
                            state_7_active = accepttimeevent_11;
                            NOTIFY_TRANSITION_TERMINATED("8");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case accepttimeevent_11:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.DetectingUnderwater.state_7.accepttimeevent_11");
                    NOTIFY_STATE_ENTERED("ROOT.DetectingUnderwater.state_7.seismicVibrationDetected");
                    state_7_subState = seismicVibrationDetected;
                    state_7_active = seismicVibrationDetected;
                    //#[ state DetectingUnderwater.state_7.seismicVibrationDetected.(Entry) 
                    getSeismicVibrations();
                    //#]
                    state_7_timeout = scheduleTimeout(500, "ROOT.DetectingUnderwater.state_7.seismicVibrationDetected");
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void UnderWaterSensor::state_6_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.DetectingUnderwater.state_6");
    NOTIFY_TRANSITION_STARTED("2");
    NOTIFY_STATE_ENTERED("ROOT.DetectingUnderwater.state_6.flowDirectionDetected");
    state_6_subState = flowDirectionDetected;
    state_6_active = flowDirectionDetected;
    //#[ state DetectingUnderwater.state_6.flowDirectionDetected.(Entry) 
    getflowDirection();
    //#]
    state_6_timeout = scheduleTimeout(500, "ROOT.DetectingUnderwater.state_6.flowDirectionDetected");
    NOTIFY_TRANSITION_TERMINATED("2");
}

IOxfReactive::TakeEventStatus UnderWaterSensor::state_6_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_6_active) {
        // State flowDirectionDetected
        case flowDirectionDetected:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == state_6_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("6");
                            cancel(state_6_timeout);
                            NOTIFY_STATE_EXITED("ROOT.DetectingUnderwater.state_6.flowDirectionDetected");
                            NOTIFY_STATE_ENTERED("ROOT.DetectingUnderwater.state_6.accepttimeevent_10");
                            pushNullTransition();
                            state_6_subState = accepttimeevent_10;
                            state_6_active = accepttimeevent_10;
                            NOTIFY_TRANSITION_TERMINATED("6");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case accepttimeevent_10:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.DetectingUnderwater.state_6.accepttimeevent_10");
                    NOTIFY_STATE_ENTERED("ROOT.DetectingUnderwater.state_6.flowDirectionDetected");
                    state_6_subState = flowDirectionDetected;
                    state_6_active = flowDirectionDetected;
                    //#[ state DetectingUnderwater.state_6.flowDirectionDetected.(Entry) 
                    getflowDirection();
                    //#]
                    state_6_timeout = scheduleTimeout(500, "ROOT.DetectingUnderwater.state_6.flowDirectionDetected");
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void UnderWaterSensor::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.ReadyToDetect");
        rootState_subState = ReadyToDetect;
        rootState_active = ReadyToDetect;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus UnderWaterSensor::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State ReadyToDetect
        case ReadyToDetect:
        {
            res = ReadyToDetect_handleEvent();
        }
        break;
        // State DetectingUnderwater
        case DetectingUnderwater:
        {
            res = DetectingUnderwater_processEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUnderWaterSensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("seismicVibration", x2String(myReal->seismicVibration));
    aomsAttributes->addAttribute("waterPressure", x2String(myReal->waterPressure));
    aomsAttributes->addAttribute("flowDirection", x2String(myReal->flowDirection));
    aomsAttributes->addAttribute("transmissionMode", x2String(myReal->transmissionMode));
}

void OMAnimatedUnderWaterSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSTWDMain", false, true);
    if(myReal->itsSMSTWDMain)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSTWDMain);
        }
}

void OMAnimatedUnderWaterSensor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case UnderWaterSensor::ReadyToDetect:
        {
            ReadyToDetect_serializeStates(aomsState);
        }
        break;
        case UnderWaterSensor::DetectingUnderwater:
        {
            DetectingUnderwater_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUnderWaterSensor::ReadyToDetect_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ReadyToDetect");
}

void OMAnimatedUnderWaterSensor::DetectingUnderwater_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingUnderwater");
    state_6_serializeStates(aomsState);
    state_7_serializeStates(aomsState);
    state_8_serializeStates(aomsState);
    state_9_serializeStates(aomsState);
}

void OMAnimatedUnderWaterSensor::state_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingUnderwater.state_9");
    switch (myReal->state_9_subState) {
        case UnderWaterSensor::waterPressureAnalysed:
        {
            waterPressureAnalysed_serializeStates(aomsState);
        }
        break;
        case UnderWaterSensor::accepttimeevent_13:
        {
            accepttimeevent_13_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUnderWaterSensor::waterPressureAnalysed_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingUnderwater.state_9.waterPressureAnalysed");
}

void OMAnimatedUnderWaterSensor::accepttimeevent_13_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingUnderwater.state_9.accepttimeevent_13");
}

void OMAnimatedUnderWaterSensor::state_8_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingUnderwater.state_8");
    switch (myReal->state_8_subState) {
        case UnderWaterSensor::transmissionModeUpdated:
        {
            transmissionModeUpdated_serializeStates(aomsState);
        }
        break;
        case UnderWaterSensor::accepttimeevent_14:
        {
            accepttimeevent_14_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUnderWaterSensor::transmissionModeUpdated_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingUnderwater.state_8.transmissionModeUpdated");
}

void OMAnimatedUnderWaterSensor::accepttimeevent_14_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingUnderwater.state_8.accepttimeevent_14");
}

void OMAnimatedUnderWaterSensor::state_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingUnderwater.state_7");
    switch (myReal->state_7_subState) {
        case UnderWaterSensor::seismicVibrationDetected:
        {
            seismicVibrationDetected_serializeStates(aomsState);
        }
        break;
        case UnderWaterSensor::accepttimeevent_11:
        {
            accepttimeevent_11_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUnderWaterSensor::seismicVibrationDetected_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingUnderwater.state_7.seismicVibrationDetected");
}

void OMAnimatedUnderWaterSensor::accepttimeevent_11_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingUnderwater.state_7.accepttimeevent_11");
}

void OMAnimatedUnderWaterSensor::state_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingUnderwater.state_6");
    switch (myReal->state_6_subState) {
        case UnderWaterSensor::flowDirectionDetected:
        {
            flowDirectionDetected_serializeStates(aomsState);
        }
        break;
        case UnderWaterSensor::accepttimeevent_10:
        {
            accepttimeevent_10_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUnderWaterSensor::flowDirectionDetected_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingUnderwater.state_6.flowDirectionDetected");
}

void OMAnimatedUnderWaterSensor::accepttimeevent_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingUnderwater.state_6.accepttimeevent_10");
}
//#]

IMPLEMENT_REACTIVE_META_P(UnderWaterSensor, SensingSystemPKG, SensingSystemPKG, false, OMAnimatedUnderWaterSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UnderWaterSensor.cpp
*********************************************************************/
