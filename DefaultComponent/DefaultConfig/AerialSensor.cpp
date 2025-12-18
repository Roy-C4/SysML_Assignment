/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20221943
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AerialSensor
//!	Generated Date	: Thu, 18, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\AerialSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "AerialSensor.h"
//## link itsSMSTWDMain
#include "SMSTWDMain.h"
//#[ ignore
#define SensingSystemPKG_AerialSensor_AerialSensor_SERIALIZE OM_NO_OP

#define SensingSystemPKG_AerialSensor_getPrecipitationAmount_SERIALIZE OM_NO_OP

#define SensingSystemPKG_AerialSensor_getStormPosition_SERIALIZE OM_NO_OP

#define SensingSystemPKG_AerialSensor_getWindDirection_SERIALIZE OM_NO_OP

#define SensingSystemPKG_AerialSensor_getWindSpeed_SERIALIZE OM_NO_OP
//#]

//## package SensingSystemPKG

//## class AerialSensor
//#[ ignore
AerialSensor::p_AerialSensor_C::p_AerialSensor_C(void) : double_windSpeed_ProxyFlowPropertyInterface(), double_precipitationAmount_ProxyFlowPropertyInterface(), double_stormPosition_ProxyFlowPropertyInterface(), RhpString_windDirection_ProxyFlowPropertyInterface(), _p_(0), itsDouble_precipitationAmount_ProxyFlowPropertyInterface(NULL), itsDouble_stormPosition_ProxyFlowPropertyInterface(NULL), itsDouble_windSpeed_ProxyFlowPropertyInterface(NULL), itsRhpString_windDirection_ProxyFlowPropertyInterface(NULL) {
}

AerialSensor::p_AerialSensor_C::~p_AerialSensor_C(void) {
    cleanUpRelations();
}

double_precipitationAmount_ProxyFlowPropertyInterface* AerialSensor::p_AerialSensor_C::getItsDouble_precipitationAmount_ProxyFlowPropertyInterface(void) {
    return this;
}

double_stormPosition_ProxyFlowPropertyInterface* AerialSensor::p_AerialSensor_C::getItsDouble_stormPosition_ProxyFlowPropertyInterface(void) {
    return this;
}

double_windSpeed_ProxyFlowPropertyInterface* AerialSensor::p_AerialSensor_C::getItsDouble_windSpeed_ProxyFlowPropertyInterface(void) {
    return this;
}

RhpString_windDirection_ProxyFlowPropertyInterface* AerialSensor::p_AerialSensor_C::getItsRhpString_windDirection_ProxyFlowPropertyInterface(void) {
    return this;
}

AerialSensor::p_AerialSensor_C* AerialSensor::p_AerialSensor_C::getOutBound(void) {
    return this;
}

void AerialSensor::p_AerialSensor_C::setPrecipitationAmount(double p_precipitationAmount) {
    
    if (itsDouble_precipitationAmount_ProxyFlowPropertyInterface != NULL) {
        itsDouble_precipitationAmount_ProxyFlowPropertyInterface->setPrecipitationAmount(p_precipitationAmount);
    }
    
}

void AerialSensor::p_AerialSensor_C::setStormPosition(double p_stormPosition) {
    
    if (itsDouble_stormPosition_ProxyFlowPropertyInterface != NULL) {
        itsDouble_stormPosition_ProxyFlowPropertyInterface->setStormPosition(p_stormPosition);
    }
    
}

void AerialSensor::p_AerialSensor_C::setWindDirection(RhpString p_windDirection) {
    
    if (itsRhpString_windDirection_ProxyFlowPropertyInterface != NULL) {
        itsRhpString_windDirection_ProxyFlowPropertyInterface->setWindDirection(p_windDirection);
    }
    
}

void AerialSensor::p_AerialSensor_C::setWindSpeed(double p_windSpeed) {
    
    if (itsDouble_windSpeed_ProxyFlowPropertyInterface != NULL) {
        itsDouble_windSpeed_ProxyFlowPropertyInterface->setWindSpeed(p_windSpeed);
    }
    
}

void AerialSensor::p_AerialSensor_C::setItsDouble_precipitationAmount_ProxyFlowPropertyInterface(double_precipitationAmount_ProxyFlowPropertyInterface* const p_double_precipitationAmount_ProxyFlowPropertyInterface) {
    itsDouble_precipitationAmount_ProxyFlowPropertyInterface = p_double_precipitationAmount_ProxyFlowPropertyInterface;
}

void AerialSensor::p_AerialSensor_C::setItsDouble_stormPosition_ProxyFlowPropertyInterface(double_stormPosition_ProxyFlowPropertyInterface* const p_double_stormPosition_ProxyFlowPropertyInterface) {
    itsDouble_stormPosition_ProxyFlowPropertyInterface = p_double_stormPosition_ProxyFlowPropertyInterface;
}

void AerialSensor::p_AerialSensor_C::setItsDouble_windSpeed_ProxyFlowPropertyInterface(double_windSpeed_ProxyFlowPropertyInterface* const p_double_windSpeed_ProxyFlowPropertyInterface) {
    itsDouble_windSpeed_ProxyFlowPropertyInterface = p_double_windSpeed_ProxyFlowPropertyInterface;
}

void AerialSensor::p_AerialSensor_C::setItsRhpString_windDirection_ProxyFlowPropertyInterface(RhpString_windDirection_ProxyFlowPropertyInterface* const p_RhpString_windDirection_ProxyFlowPropertyInterface) {
    itsRhpString_windDirection_ProxyFlowPropertyInterface = p_RhpString_windDirection_ProxyFlowPropertyInterface;
}

void AerialSensor::p_AerialSensor_C::cleanUpRelations(void) {
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
//#]

AerialSensor::AerialSensor(IOxfActive* const theActiveContext) : OMReactive(), itsSMSTWDMain(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(AerialSensor, AerialSensor(), 0, SensingSystemPKG_AerialSensor_AerialSensor_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

AerialSensor::~AerialSensor(void) {
    NOTIFY_DESTRUCTOR(~AerialSensor, true);
    cleanUpRelations();
    cancelTimeouts();
}

void AerialSensor::getPrecipitationAmount(void) {
    NOTIFY_OPERATION(getPrecipitationAmount, getPrecipitationAmount(), 0, SensingSystemPKG_AerialSensor_getPrecipitationAmount_SERIALIZE);
    //#[ operation getPrecipitationAmount()
    setPrecipitationAmount(double(( std::rand() % (200 + 1))));
    std::cout<<"Precipatation Amount: " << this->precipitationAmount <<std::endl;
    
    itsSMSTWDMain->GEN(evNewAerialData());
    //#]
}

void AerialSensor::getStormPosition(void) {
    NOTIFY_OPERATION(getStormPosition, getStormPosition(), 0, SensingSystemPKG_AerialSensor_getStormPosition_SERIALIZE);
    //#[ operation getStormPosition()
    double unRounded = double(float(std::rand()) / float(1000));
    setStormPosition(double(std::round(unRounded * 100.0) / 100.0));
    std::cout<<"Storm Position: " << this->stormPosition <<std::endl;
    itsSMSTWDMain->GEN(evNewAerialData());
    //#]
}

void AerialSensor::getWindDirection(void) {
    NOTIFY_OPERATION(getWindDirection, getWindDirection(), 0, SensingSystemPKG_AerialSensor_getWindDirection_SERIALIZE);
    //#[ operation getWindDirection()
    char* dir[8] = {"N", "NE", "E", "SE", "S", "SW", "W", "NW"};
    
    int idx = int(std::rand() % ( 7 + 1 ));
    setWindDirection(dir[idx]);
    
    std::cout << "Wind Direction: " << this->windDirection << std::endl;
    
    itsSMSTWDMain->GEN(evNewAerialData());
    
    
    //#]
}

void AerialSensor::getWindSpeed(void) {
    NOTIFY_OPERATION(getWindSpeed, getWindSpeed(), 0, SensingSystemPKG_AerialSensor_getWindSpeed_SERIALIZE);
    //#[ operation getWindSpeed()
    setWindSpeed(double(( std::rand() % (500 + 1))));
    std::cout<<"Wind Speed: " << this->windSpeed <<std::endl;
    itsSMSTWDMain->GEN(evNewAerialData());
    //#]
}

//#[ ignore
void AerialSensor::setPrecipitationAmount(double p_precipitationAmount) {
    if (precipitationAmount != p_precipitationAmount)  {
        precipitationAmount = p_precipitationAmount;
        FLOW_DATA_SEND(precipitationAmount, p_AerialSensor, setPrecipitationAmount, x2String);
    }
}

void AerialSensor::setStormPosition(double p_stormPosition) {
    if (stormPosition != p_stormPosition)  {
        stormPosition = p_stormPosition;
        FLOW_DATA_SEND(stormPosition, p_AerialSensor, setStormPosition, x2String);
    }
}

void AerialSensor::setWindDirection(RhpString p_windDirection) {
    if (windDirection != p_windDirection)  {
        windDirection = p_windDirection;
        FLOW_DATA_SEND(windDirection, p_AerialSensor, setWindDirection, x2String);
    }
}

void AerialSensor::setWindSpeed(double p_windSpeed) {
    if (windSpeed != p_windSpeed)  {
        windSpeed = p_windSpeed;
        FLOW_DATA_SEND(windSpeed, p_AerialSensor, setWindSpeed, x2String);
    }
}
//#]

AerialSensor::p_AerialSensor_C* AerialSensor::getP_AerialSensor(void) const {
    return (AerialSensor::p_AerialSensor_C*) &p_AerialSensor;
}

AerialSensor::p_AerialSensor_C* AerialSensor::get_p_AerialSensor(void) const {
    return (AerialSensor::p_AerialSensor_C*) &p_AerialSensor;
}

const SMSTWDMain* AerialSensor::getItsSMSTWDMain(void) const {
    return itsSMSTWDMain;
}

void AerialSensor::setItsSMSTWDMain(SMSTWDMain* const p_SMSTWDMain) {
    if(p_SMSTWDMain != NULL)
        {
            p_SMSTWDMain->_setItsAerialSensor(this);
        }
    _setItsSMSTWDMain(p_SMSTWDMain);
}

bool AerialSensor::cancelTimeout(const IOxfTimeout* arg) {
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

bool AerialSensor::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void AerialSensor::initStatechart(void) {
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

void AerialSensor::cleanUpRelations(void) {
    if(itsSMSTWDMain != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSTWDMain");
            const AerialSensor* p_AerialSensor = itsSMSTWDMain->getItsAerialSensor();
            if(p_AerialSensor != NULL)
                {
                    itsSMSTWDMain->__setItsAerialSensor(NULL);
                }
            itsSMSTWDMain = NULL;
        }
}

void AerialSensor::cancelTimeouts(void) {
    cancel(state_9_timeout);
    cancel(state_8_timeout);
    cancel(state_7_timeout);
    cancel(state_6_timeout);
}

void AerialSensor::__setItsSMSTWDMain(SMSTWDMain* const p_SMSTWDMain) {
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

void AerialSensor::_setItsSMSTWDMain(SMSTWDMain* const p_SMSTWDMain) {
    if(itsSMSTWDMain != NULL)
        {
            itsSMSTWDMain->__setItsAerialSensor(NULL);
        }
    __setItsSMSTWDMain(p_SMSTWDMain);
}

void AerialSensor::_clearItsSMSTWDMain(void) {
    NOTIFY_RELATION_CLEARED("itsSMSTWDMain");
    itsSMSTWDMain = NULL;
}

IOxfReactive::TakeEventStatus AerialSensor::ReadyToDetectTakeevDetectParameters(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("1");
    NOTIFY_STATE_EXITED("ROOT.ReadyToDetect");
    DetectingAerial_entDef();
    NOTIFY_TRANSITION_TERMINATED("1");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus AerialSensor::ReadyToDetect_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evDetectParameters_SensingSystemPKG_id) == 1)
        {
            res = ReadyToDetectTakeevDetectParameters();
        }
    
    return res;
}

void AerialSensor::DetectingAerial_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.DetectingAerial");
    rootState_subState = DetectingAerial;
    rootState_active = DetectingAerial;
    state_6_entDef();
    state_7_entDef();
    state_8_entDef();
    state_9_entDef();
}

void AerialSensor::DetectingAerial_exit(void) {
    switch (state_6_subState) {
        // State PrecipitationDetected
        case PrecipitationDetected:
        {
            cancel(state_6_timeout);
            NOTIFY_STATE_EXITED("ROOT.DetectingAerial.state_6.PrecipitationDetected");
        }
        break;
        case accepttimeevent_10:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.DetectingAerial.state_6.accepttimeevent_10");
        }
        break;
        default:
            break;
    }
    state_6_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.DetectingAerial.state_6");
    switch (state_7_subState) {
        // State stormPositionDetected
        case stormPositionDetected:
        {
            cancel(state_7_timeout);
            NOTIFY_STATE_EXITED("ROOT.DetectingAerial.state_7.stormPositionDetected");
        }
        break;
        case accepttimeevent_11:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.DetectingAerial.state_7.accepttimeevent_11");
        }
        break;
        default:
            break;
    }
    state_7_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.DetectingAerial.state_7");
    switch (state_8_subState) {
        // State windSpeedDetected
        case windSpeedDetected:
        {
            cancel(state_8_timeout);
            NOTIFY_STATE_EXITED("ROOT.DetectingAerial.state_8.windSpeedDetected");
        }
        break;
        case accepttimeevent_12:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.DetectingAerial.state_8.accepttimeevent_12");
        }
        break;
        default:
            break;
    }
    state_8_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.DetectingAerial.state_8");
    switch (state_9_subState) {
        // State windDirectionDetected
        case windDirectionDetected:
        {
            cancel(state_9_timeout);
            NOTIFY_STATE_EXITED("ROOT.DetectingAerial.state_9.windDirectionDetected");
        }
        break;
        case accepttimeevent_13:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.DetectingAerial.state_9.accepttimeevent_13");
        }
        break;
        default:
            break;
    }
    state_9_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.DetectingAerial.state_9");
    
    NOTIFY_STATE_EXITED("ROOT.DetectingAerial");
}

IOxfReactive::TakeEventStatus AerialSensor::DetectingAerial_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    IOxfReactive::TakeEventStatus omComponentStatus = eventNotConsumed;
    bool dispatchDone = false;
    {
        // State state_6
        omComponentStatus = state_6_processEvent();
        if(omComponentStatus != eventNotConsumed)
            {
                res = eventConsumed;
                if(IS_IN(DetectingAerial) == false)
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
                    if(IS_IN(DetectingAerial) == false)
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
                    if(IS_IN(DetectingAerial) == false)
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
            res = DetectingAerial_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus AerialSensor::DetectingAerial_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evIdle_SensingSystemPKG_id) == 1)
        {
            NOTIFY_TRANSITION_STARTED("14");
            DetectingAerial_exit();
            NOTIFY_STATE_ENTERED("ROOT.ReadyToDetect");
            rootState_subState = ReadyToDetect;
            rootState_active = ReadyToDetect;
            NOTIFY_TRANSITION_TERMINATED("14");
            res = eventConsumed;
        }
    
    return res;
}

void AerialSensor::state_9_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.DetectingAerial.state_9");
    NOTIFY_TRANSITION_STARTED("5");
    NOTIFY_STATE_ENTERED("ROOT.DetectingAerial.state_9.windDirectionDetected");
    state_9_subState = windDirectionDetected;
    state_9_active = windDirectionDetected;
    //#[ state DetectingAerial.state_9.windDirectionDetected.(Entry) 
    getWindDirection();
    //#]
    state_9_timeout = scheduleTimeout(10000, "ROOT.DetectingAerial.state_9.windDirectionDetected");
    NOTIFY_TRANSITION_TERMINATED("5");
}

IOxfReactive::TakeEventStatus AerialSensor::state_9_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_9_active) {
        // State windDirectionDetected
        case windDirectionDetected:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == state_9_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("12");
                            cancel(state_9_timeout);
                            NOTIFY_STATE_EXITED("ROOT.DetectingAerial.state_9.windDirectionDetected");
                            NOTIFY_STATE_ENTERED("ROOT.DetectingAerial.state_9.accepttimeevent_13");
                            pushNullTransition();
                            state_9_subState = accepttimeevent_13;
                            state_9_active = accepttimeevent_13;
                            NOTIFY_TRANSITION_TERMINATED("12");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case accepttimeevent_13:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.DetectingAerial.state_9.accepttimeevent_13");
                    NOTIFY_STATE_ENTERED("ROOT.DetectingAerial.state_9.windDirectionDetected");
                    state_9_subState = windDirectionDetected;
                    state_9_active = windDirectionDetected;
                    //#[ state DetectingAerial.state_9.windDirectionDetected.(Entry) 
                    getWindDirection();
                    //#]
                    state_9_timeout = scheduleTimeout(10000, "ROOT.DetectingAerial.state_9.windDirectionDetected");
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void AerialSensor::state_8_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.DetectingAerial.state_8");
    NOTIFY_TRANSITION_STARTED("4");
    NOTIFY_STATE_ENTERED("ROOT.DetectingAerial.state_8.windSpeedDetected");
    state_8_subState = windSpeedDetected;
    state_8_active = windSpeedDetected;
    //#[ state DetectingAerial.state_8.windSpeedDetected.(Entry) 
    getWindSpeed();
    //#]
    state_8_timeout = scheduleTimeout(8000, "ROOT.DetectingAerial.state_8.windSpeedDetected");
    NOTIFY_TRANSITION_TERMINATED("4");
}

IOxfReactive::TakeEventStatus AerialSensor::state_8_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_8_active) {
        // State windSpeedDetected
        case windSpeedDetected:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == state_8_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("10");
                            cancel(state_8_timeout);
                            NOTIFY_STATE_EXITED("ROOT.DetectingAerial.state_8.windSpeedDetected");
                            NOTIFY_STATE_ENTERED("ROOT.DetectingAerial.state_8.accepttimeevent_12");
                            pushNullTransition();
                            state_8_subState = accepttimeevent_12;
                            state_8_active = accepttimeevent_12;
                            NOTIFY_TRANSITION_TERMINATED("10");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case accepttimeevent_12:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("11");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.DetectingAerial.state_8.accepttimeevent_12");
                    NOTIFY_STATE_ENTERED("ROOT.DetectingAerial.state_8.windSpeedDetected");
                    state_8_subState = windSpeedDetected;
                    state_8_active = windSpeedDetected;
                    //#[ state DetectingAerial.state_8.windSpeedDetected.(Entry) 
                    getWindSpeed();
                    //#]
                    state_8_timeout = scheduleTimeout(8000, "ROOT.DetectingAerial.state_8.windSpeedDetected");
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

void AerialSensor::state_7_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.DetectingAerial.state_7");
    NOTIFY_TRANSITION_STARTED("3");
    NOTIFY_STATE_ENTERED("ROOT.DetectingAerial.state_7.stormPositionDetected");
    state_7_subState = stormPositionDetected;
    state_7_active = stormPositionDetected;
    //#[ state DetectingAerial.state_7.stormPositionDetected.(Entry) 
    getStormPosition();
    //#]
    state_7_timeout = scheduleTimeout(5000, "ROOT.DetectingAerial.state_7.stormPositionDetected");
    NOTIFY_TRANSITION_TERMINATED("3");
}

IOxfReactive::TakeEventStatus AerialSensor::state_7_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_7_active) {
        // State stormPositionDetected
        case stormPositionDetected:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == state_7_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("8");
                            cancel(state_7_timeout);
                            NOTIFY_STATE_EXITED("ROOT.DetectingAerial.state_7.stormPositionDetected");
                            NOTIFY_STATE_ENTERED("ROOT.DetectingAerial.state_7.accepttimeevent_11");
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
                    NOTIFY_STATE_EXITED("ROOT.DetectingAerial.state_7.accepttimeevent_11");
                    NOTIFY_STATE_ENTERED("ROOT.DetectingAerial.state_7.stormPositionDetected");
                    state_7_subState = stormPositionDetected;
                    state_7_active = stormPositionDetected;
                    //#[ state DetectingAerial.state_7.stormPositionDetected.(Entry) 
                    getStormPosition();
                    //#]
                    state_7_timeout = scheduleTimeout(5000, "ROOT.DetectingAerial.state_7.stormPositionDetected");
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

void AerialSensor::state_6_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.DetectingAerial.state_6");
    NOTIFY_TRANSITION_STARTED("2");
    NOTIFY_STATE_ENTERED("ROOT.DetectingAerial.state_6.PrecipitationDetected");
    state_6_subState = PrecipitationDetected;
    state_6_active = PrecipitationDetected;
    //#[ state DetectingAerial.state_6.PrecipitationDetected.(Entry) 
    getPrecipitationAmount();
    //#]
    state_6_timeout = scheduleTimeout(7000, "ROOT.DetectingAerial.state_6.PrecipitationDetected");
    NOTIFY_TRANSITION_TERMINATED("2");
}

IOxfReactive::TakeEventStatus AerialSensor::state_6_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_6_active) {
        // State PrecipitationDetected
        case PrecipitationDetected:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == state_6_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("6");
                            cancel(state_6_timeout);
                            NOTIFY_STATE_EXITED("ROOT.DetectingAerial.state_6.PrecipitationDetected");
                            NOTIFY_STATE_ENTERED("ROOT.DetectingAerial.state_6.accepttimeevent_10");
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
                    NOTIFY_STATE_EXITED("ROOT.DetectingAerial.state_6.accepttimeevent_10");
                    NOTIFY_STATE_ENTERED("ROOT.DetectingAerial.state_6.PrecipitationDetected");
                    state_6_subState = PrecipitationDetected;
                    state_6_active = PrecipitationDetected;
                    //#[ state DetectingAerial.state_6.PrecipitationDetected.(Entry) 
                    getPrecipitationAmount();
                    //#]
                    state_6_timeout = scheduleTimeout(7000, "ROOT.DetectingAerial.state_6.PrecipitationDetected");
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

void AerialSensor::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.ReadyToDetect");
        rootState_subState = ReadyToDetect;
        rootState_active = ReadyToDetect;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus AerialSensor::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State ReadyToDetect
        case ReadyToDetect:
        {
            res = ReadyToDetect_handleEvent();
        }
        break;
        // State DetectingAerial
        case DetectingAerial:
        {
            res = DetectingAerial_processEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAerialSensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("windSpeed", x2String(myReal->windSpeed));
    aomsAttributes->addAttribute("precipitationAmount", x2String(myReal->precipitationAmount));
    aomsAttributes->addAttribute("stormPosition", x2String(myReal->stormPosition));
    aomsAttributes->addAttribute("windDirection", x2String(myReal->windDirection));
}

void OMAnimatedAerialSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSTWDMain", false, true);
    if(myReal->itsSMSTWDMain)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSTWDMain);
        }
}

void OMAnimatedAerialSensor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case AerialSensor::ReadyToDetect:
        {
            ReadyToDetect_serializeStates(aomsState);
        }
        break;
        case AerialSensor::DetectingAerial:
        {
            DetectingAerial_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedAerialSensor::ReadyToDetect_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ReadyToDetect");
}

void OMAnimatedAerialSensor::DetectingAerial_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingAerial");
    state_6_serializeStates(aomsState);
    state_7_serializeStates(aomsState);
    state_8_serializeStates(aomsState);
    state_9_serializeStates(aomsState);
}

void OMAnimatedAerialSensor::state_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingAerial.state_9");
    switch (myReal->state_9_subState) {
        case AerialSensor::windDirectionDetected:
        {
            windDirectionDetected_serializeStates(aomsState);
        }
        break;
        case AerialSensor::accepttimeevent_13:
        {
            accepttimeevent_13_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedAerialSensor::windDirectionDetected_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingAerial.state_9.windDirectionDetected");
}

void OMAnimatedAerialSensor::accepttimeevent_13_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingAerial.state_9.accepttimeevent_13");
}

void OMAnimatedAerialSensor::state_8_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingAerial.state_8");
    switch (myReal->state_8_subState) {
        case AerialSensor::windSpeedDetected:
        {
            windSpeedDetected_serializeStates(aomsState);
        }
        break;
        case AerialSensor::accepttimeevent_12:
        {
            accepttimeevent_12_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedAerialSensor::windSpeedDetected_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingAerial.state_8.windSpeedDetected");
}

void OMAnimatedAerialSensor::accepttimeevent_12_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingAerial.state_8.accepttimeevent_12");
}

void OMAnimatedAerialSensor::state_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingAerial.state_7");
    switch (myReal->state_7_subState) {
        case AerialSensor::stormPositionDetected:
        {
            stormPositionDetected_serializeStates(aomsState);
        }
        break;
        case AerialSensor::accepttimeevent_11:
        {
            accepttimeevent_11_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedAerialSensor::stormPositionDetected_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingAerial.state_7.stormPositionDetected");
}

void OMAnimatedAerialSensor::accepttimeevent_11_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingAerial.state_7.accepttimeevent_11");
}

void OMAnimatedAerialSensor::state_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingAerial.state_6");
    switch (myReal->state_6_subState) {
        case AerialSensor::PrecipitationDetected:
        {
            PrecipitationDetected_serializeStates(aomsState);
        }
        break;
        case AerialSensor::accepttimeevent_10:
        {
            accepttimeevent_10_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedAerialSensor::PrecipitationDetected_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingAerial.state_6.PrecipitationDetected");
}

void OMAnimatedAerialSensor::accepttimeevent_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingAerial.state_6.accepttimeevent_10");
}
//#]

IMPLEMENT_REACTIVE_META_P(AerialSensor, SensingSystemPKG, SensingSystemPKG, false, OMAnimatedAerialSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AerialSensor.cpp
*********************************************************************/
