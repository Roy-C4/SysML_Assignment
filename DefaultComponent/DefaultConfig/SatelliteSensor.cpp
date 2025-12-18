/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20221943
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SatelliteSensor
//!	Generated Date	: Thu, 18, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SatelliteSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "SatelliteSensor.h"
//## link itsSMSTWDMain
#include "SMSTWDMain.h"
//#[ ignore
#define SensingSystemPKG_SatelliteSensor_SatelliteSensor_SERIALIZE OM_NO_OP

#define SensingSystemPKG_SatelliteSensor_getImageData_SERIALIZE OM_NO_OP

#define SensingSystemPKG_SatelliteSensor_getStormCoords_SERIALIZE OM_NO_OP
//#]

//## package SensingSystemPKG

//## class SatelliteSensor
//#[ ignore
SatelliteSensor::p_SatelliteSensor_C::p_SatelliteSensor_C(void) : double_ImageData_ProxyFlowPropertyInterface(), double_stormCoordinates_ProxyFlowPropertyInterface(), _p_(0), itsDouble_ImageData_ProxyFlowPropertyInterface(NULL), itsDouble_stormCoordinates_ProxyFlowPropertyInterface(NULL) {
}

SatelliteSensor::p_SatelliteSensor_C::~p_SatelliteSensor_C(void) {
    cleanUpRelations();
}

double_ImageData_ProxyFlowPropertyInterface* SatelliteSensor::p_SatelliteSensor_C::getItsDouble_ImageData_ProxyFlowPropertyInterface(void) {
    return this;
}

double_stormCoordinates_ProxyFlowPropertyInterface* SatelliteSensor::p_SatelliteSensor_C::getItsDouble_stormCoordinates_ProxyFlowPropertyInterface(void) {
    return this;
}

SatelliteSensor::p_SatelliteSensor_C* SatelliteSensor::p_SatelliteSensor_C::getOutBound(void) {
    return this;
}

void SatelliteSensor::p_SatelliteSensor_C::setImageData(double p_ImageData) {
    
    if (itsDouble_ImageData_ProxyFlowPropertyInterface != NULL) {
        itsDouble_ImageData_ProxyFlowPropertyInterface->setImageData(p_ImageData);
    }
    
}

void SatelliteSensor::p_SatelliteSensor_C::setStormCoordinates(double p_stormCoordinates) {
    
    if (itsDouble_stormCoordinates_ProxyFlowPropertyInterface != NULL) {
        itsDouble_stormCoordinates_ProxyFlowPropertyInterface->setStormCoordinates(p_stormCoordinates);
    }
    
}

void SatelliteSensor::p_SatelliteSensor_C::setItsDouble_ImageData_ProxyFlowPropertyInterface(double_ImageData_ProxyFlowPropertyInterface* const p_double_ImageData_ProxyFlowPropertyInterface) {
    itsDouble_ImageData_ProxyFlowPropertyInterface = p_double_ImageData_ProxyFlowPropertyInterface;
}

void SatelliteSensor::p_SatelliteSensor_C::setItsDouble_stormCoordinates_ProxyFlowPropertyInterface(double_stormCoordinates_ProxyFlowPropertyInterface* const p_double_stormCoordinates_ProxyFlowPropertyInterface) {
    itsDouble_stormCoordinates_ProxyFlowPropertyInterface = p_double_stormCoordinates_ProxyFlowPropertyInterface;
}

void SatelliteSensor::p_SatelliteSensor_C::cleanUpRelations(void) {
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

SatelliteSensor::SatelliteSensor(IOxfActive* const theActiveContext) : OMReactive(), itsSMSTWDMain(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(SatelliteSensor, SatelliteSensor(), 0, SensingSystemPKG_SatelliteSensor_SatelliteSensor_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

SatelliteSensor::~SatelliteSensor(void) {
    NOTIFY_DESTRUCTOR(~SatelliteSensor, true);
    cleanUpRelations();
    cancelTimeouts();
}

void SatelliteSensor::getImageData(void) {
    NOTIFY_OPERATION(getImageData, getImageData(), 0, SensingSystemPKG_SatelliteSensor_getImageData_SERIALIZE);
    //#[ operation getImageData()
    setImageData(double(( std::rand() % (500 + 1))));
    std::cout<<"Image received";
    
    itsSMSTWDMain->GEN(evNewSatelliteData());
    //#]
}

void SatelliteSensor::getStormCoords(void) {
    NOTIFY_OPERATION(getStormCoords, getStormCoords(), 0, SensingSystemPKG_SatelliteSensor_getStormCoords_SERIALIZE);
    //#[ operation getStormCoords()
    double unRounded = double(float(std::rand()) / float(1000));
    setStormCoordinates(double(std::round(unRounded * 100.0) / 100.0));
    std::cout<<"Storm Coordinates: " << this->stormCoordinates <<std::endl;
    itsSMSTWDMain->GEN(evNewSatelliteData());
    //#]
}

//#[ ignore
void SatelliteSensor::setImageData(double p_ImageData) {
    if (ImageData != p_ImageData)  {
        ImageData = p_ImageData;
        FLOW_DATA_SEND(ImageData, p_SatelliteSensor, setImageData, x2String);
    }
}

void SatelliteSensor::setStormCoordinates(double p_stormCoordinates) {
    if (stormCoordinates != p_stormCoordinates)  {
        stormCoordinates = p_stormCoordinates;
        FLOW_DATA_SEND(stormCoordinates, p_SatelliteSensor, setStormCoordinates, x2String);
    }
}
//#]

SatelliteSensor::p_SatelliteSensor_C* SatelliteSensor::getP_SatelliteSensor(void) const {
    return (SatelliteSensor::p_SatelliteSensor_C*) &p_SatelliteSensor;
}

SatelliteSensor::p_SatelliteSensor_C* SatelliteSensor::get_p_SatelliteSensor(void) const {
    return (SatelliteSensor::p_SatelliteSensor_C*) &p_SatelliteSensor;
}

const double SatelliteSensor::getStormCoordinates(void) const {
    return stormCoordinates;
}

const SMSTWDMain* SatelliteSensor::getItsSMSTWDMain(void) const {
    return itsSMSTWDMain;
}

void SatelliteSensor::setItsSMSTWDMain(SMSTWDMain* const p_SMSTWDMain) {
    if(p_SMSTWDMain != NULL)
        {
            p_SMSTWDMain->_setItsSatelliteSensor(this);
        }
    _setItsSMSTWDMain(p_SMSTWDMain);
}

bool SatelliteSensor::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(state_3_timeout == arg)
        {
            state_3_timeout = NULL;
            res = true;
        }
    if(state_2_timeout == arg)
        {
            state_2_timeout = NULL;
            res = true;
        }
    return res;
}

bool SatelliteSensor::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void SatelliteSensor::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_3_subState = OMNonState;
    state_3_active = OMNonState;
    state_3_timeout = NULL;
    state_2_subState = OMNonState;
    state_2_active = OMNonState;
    state_2_timeout = NULL;
}

void SatelliteSensor::cleanUpRelations(void) {
    if(itsSMSTWDMain != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSTWDMain");
            const SatelliteSensor* p_SatelliteSensor = itsSMSTWDMain->getItsSatelliteSensor();
            if(p_SatelliteSensor != NULL)
                {
                    itsSMSTWDMain->__setItsSatelliteSensor(NULL);
                }
            itsSMSTWDMain = NULL;
        }
}

void SatelliteSensor::cancelTimeouts(void) {
    cancel(state_3_timeout);
    cancel(state_2_timeout);
}

void SatelliteSensor::__setItsSMSTWDMain(SMSTWDMain* const p_SMSTWDMain) {
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

void SatelliteSensor::_setItsSMSTWDMain(SMSTWDMain* const p_SMSTWDMain) {
    if(itsSMSTWDMain != NULL)
        {
            itsSMSTWDMain->__setItsSatelliteSensor(NULL);
        }
    __setItsSMSTWDMain(p_SMSTWDMain);
}

void SatelliteSensor::_clearItsSMSTWDMain(void) {
    NOTIFY_RELATION_CLEARED("itsSMSTWDMain");
    itsSMSTWDMain = NULL;
}

void SatelliteSensor::DetectingSatellite_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.DetectingSatellite");
    rootState_subState = DetectingSatellite;
    rootState_active = DetectingSatellite;
    state_2_entDef();
    state_3_entDef();
}

void SatelliteSensor::DetectingSatellite_exit(void) {
    switch (state_2_subState) {
        // State ImageCaptured
        case ImageCaptured:
        {
            cancel(state_2_timeout);
            NOTIFY_STATE_EXITED("ROOT.DetectingSatellite.state_2.ImageCaptured");
        }
        break;
        case accepttimeevent_6:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.DetectingSatellite.state_2.accepttimeevent_6");
        }
        break;
        default:
            break;
    }
    state_2_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.DetectingSatellite.state_2");
    switch (state_3_subState) {
        // State StormCoordCaptured
        case StormCoordCaptured:
        {
            cancel(state_3_timeout);
            NOTIFY_STATE_EXITED("ROOT.DetectingSatellite.state_3.StormCoordCaptured");
        }
        break;
        case accepttimeevent_8:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.DetectingSatellite.state_3.accepttimeevent_8");
        }
        break;
        default:
            break;
    }
    state_3_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.DetectingSatellite.state_3");
    
    NOTIFY_STATE_EXITED("ROOT.DetectingSatellite");
}

IOxfReactive::TakeEventStatus SatelliteSensor::DetectingSatellite_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    IOxfReactive::TakeEventStatus omComponentStatus = eventNotConsumed;
    bool dispatchDone = false;
    {
        // State state_2
        omComponentStatus = state_2_processEvent();
        if(omComponentStatus != eventNotConsumed)
            {
                res = eventConsumed;
                if(IS_IN(DetectingSatellite) == false)
                    {
                        dispatchDone = true;
                    }
            }
    }
    if(!dispatchDone)
        {
            // State state_3
            omComponentStatus = state_3_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                }
        }
    if(res == eventNotConsumed)
        {
            res = DetectingSatellite_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus SatelliteSensor::DetectingSatellite_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evIdle_SensingSystemPKG_id) == 1)
        {
            NOTIFY_TRANSITION_STARTED("2");
            DetectingSatellite_exit();
            NOTIFY_STATE_ENTERED("ROOT.ReadyToDetect");
            rootState_subState = ReadyToDetect;
            rootState_active = ReadyToDetect;
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    
    return res;
}

void SatelliteSensor::state_3_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.DetectingSatellite.state_3");
    NOTIFY_TRANSITION_STARTED("8");
    NOTIFY_STATE_ENTERED("ROOT.DetectingSatellite.state_3.StormCoordCaptured");
    state_3_subState = StormCoordCaptured;
    state_3_active = StormCoordCaptured;
    //#[ state DetectingSatellite.state_3.StormCoordCaptured.(Entry) 
    getStormCoords();
    //#]
    state_3_timeout = scheduleTimeout(8000, "ROOT.DetectingSatellite.state_3.StormCoordCaptured");
    NOTIFY_TRANSITION_TERMINATED("8");
}

IOxfReactive::TakeEventStatus SatelliteSensor::state_3_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_3_active) {
        // State StormCoordCaptured
        case StormCoordCaptured:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == state_3_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("6");
                            cancel(state_3_timeout);
                            NOTIFY_STATE_EXITED("ROOT.DetectingSatellite.state_3.StormCoordCaptured");
                            NOTIFY_STATE_ENTERED("ROOT.DetectingSatellite.state_3.accepttimeevent_8");
                            pushNullTransition();
                            state_3_subState = accepttimeevent_8;
                            state_3_active = accepttimeevent_8;
                            NOTIFY_TRANSITION_TERMINATED("6");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case accepttimeevent_8:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.DetectingSatellite.state_3.accepttimeevent_8");
                    NOTIFY_STATE_ENTERED("ROOT.DetectingSatellite.state_3.StormCoordCaptured");
                    state_3_subState = StormCoordCaptured;
                    state_3_active = StormCoordCaptured;
                    //#[ state DetectingSatellite.state_3.StormCoordCaptured.(Entry) 
                    getStormCoords();
                    //#]
                    state_3_timeout = scheduleTimeout(8000, "ROOT.DetectingSatellite.state_3.StormCoordCaptured");
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

void SatelliteSensor::state_2_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.DetectingSatellite.state_2");
    NOTIFY_TRANSITION_STARTED("3");
    NOTIFY_STATE_ENTERED("ROOT.DetectingSatellite.state_2.ImageCaptured");
    state_2_subState = ImageCaptured;
    state_2_active = ImageCaptured;
    //#[ state DetectingSatellite.state_2.ImageCaptured.(Entry) 
    getImageData();
    //#]
    state_2_timeout = scheduleTimeout(10000, "ROOT.DetectingSatellite.state_2.ImageCaptured");
    NOTIFY_TRANSITION_TERMINATED("3");
}

IOxfReactive::TakeEventStatus SatelliteSensor::state_2_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_2_active) {
        // State ImageCaptured
        case ImageCaptured:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == state_2_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("4");
                            cancel(state_2_timeout);
                            NOTIFY_STATE_EXITED("ROOT.DetectingSatellite.state_2.ImageCaptured");
                            NOTIFY_STATE_ENTERED("ROOT.DetectingSatellite.state_2.accepttimeevent_6");
                            pushNullTransition();
                            state_2_subState = accepttimeevent_6;
                            state_2_active = accepttimeevent_6;
                            NOTIFY_TRANSITION_TERMINATED("4");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case accepttimeevent_6:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.DetectingSatellite.state_2.accepttimeevent_6");
                    NOTIFY_STATE_ENTERED("ROOT.DetectingSatellite.state_2.ImageCaptured");
                    state_2_subState = ImageCaptured;
                    state_2_active = ImageCaptured;
                    //#[ state DetectingSatellite.state_2.ImageCaptured.(Entry) 
                    getImageData();
                    //#]
                    state_2_timeout = scheduleTimeout(10000, "ROOT.DetectingSatellite.state_2.ImageCaptured");
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void SatelliteSensor::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.ReadyToDetect");
        rootState_subState = ReadyToDetect;
        rootState_active = ReadyToDetect;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus SatelliteSensor::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State ReadyToDetect
        case ReadyToDetect:
        {
            if(IS_EVENT_TYPE_OF(evDetectParameters_SensingSystemPKG_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.ReadyToDetect");
                    DetectingSatellite_entDef();
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State DetectingSatellite
        case DetectingSatellite:
        {
            res = DetectingSatellite_processEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSatelliteSensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("ImageData", x2String(myReal->ImageData));
    aomsAttributes->addAttribute("stormCoordinates", x2String(myReal->stormCoordinates));
}

void OMAnimatedSatelliteSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSTWDMain", false, true);
    if(myReal->itsSMSTWDMain)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSTWDMain);
        }
}

void OMAnimatedSatelliteSensor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case SatelliteSensor::ReadyToDetect:
        {
            ReadyToDetect_serializeStates(aomsState);
        }
        break;
        case SatelliteSensor::DetectingSatellite:
        {
            DetectingSatellite_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSatelliteSensor::ReadyToDetect_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ReadyToDetect");
}

void OMAnimatedSatelliteSensor::DetectingSatellite_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingSatellite");
    state_2_serializeStates(aomsState);
    state_3_serializeStates(aomsState);
}

void OMAnimatedSatelliteSensor::state_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingSatellite.state_3");
    switch (myReal->state_3_subState) {
        case SatelliteSensor::StormCoordCaptured:
        {
            StormCoordCaptured_serializeStates(aomsState);
        }
        break;
        case SatelliteSensor::accepttimeevent_8:
        {
            accepttimeevent_8_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSatelliteSensor::StormCoordCaptured_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingSatellite.state_3.StormCoordCaptured");
}

void OMAnimatedSatelliteSensor::accepttimeevent_8_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingSatellite.state_3.accepttimeevent_8");
}

void OMAnimatedSatelliteSensor::state_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingSatellite.state_2");
    switch (myReal->state_2_subState) {
        case SatelliteSensor::ImageCaptured:
        {
            ImageCaptured_serializeStates(aomsState);
        }
        break;
        case SatelliteSensor::accepttimeevent_6:
        {
            accepttimeevent_6_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSatelliteSensor::ImageCaptured_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingSatellite.state_2.ImageCaptured");
}

void OMAnimatedSatelliteSensor::accepttimeevent_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DetectingSatellite.state_2.accepttimeevent_6");
}
//#]

IMPLEMENT_REACTIVE_META_P(SatelliteSensor, SensingSystemPKG, SensingSystemPKG, false, OMAnimatedSatelliteSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SatelliteSensor.cpp
*********************************************************************/
