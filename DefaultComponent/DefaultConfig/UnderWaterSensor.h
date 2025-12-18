/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20221943
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UnderWaterSensor
//!	Generated Date	: Thu, 18, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\UnderWaterSensor.h
*********************************************************************/

#ifndef UnderWaterSensor_H
#define UnderWaterSensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SensingSystemPKG.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## class p_UnderWaterSensor_C
#include "bool_transmissionMode_ProxyFlowPropertyInterface.h"
//## class p_UnderWaterSensor_C
#include "double_seismicVibration_ProxyFlowPropertyInterface.h"
//## class p_UnderWaterSensor_C
#include "double_waterPressure_ProxyFlowPropertyInterface.h"
//## class p_UnderWaterSensor_C
#include "RhpString_flowDirection_ProxyFlowPropertyInterface.h"
//## link itsSMSTWDMain
class SMSTWDMain;

//## package SensingSystemPKG

//## class UnderWaterSensor
class UnderWaterSensor : public OMReactive {
public :

//#[ ignore
    //## package SensingSystemPKG
    class p_UnderWaterSensor_C : public double_seismicVibration_ProxyFlowPropertyInterface, public double_waterPressure_ProxyFlowPropertyInterface, public RhpString_flowDirection_ProxyFlowPropertyInterface, public bool_transmissionMode_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_UnderWaterSensor_C(void);
        
        //## auto_generated
        virtual ~p_UnderWaterSensor_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        bool_transmissionMode_ProxyFlowPropertyInterface* getItsBool_transmissionMode_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        double_seismicVibration_ProxyFlowPropertyInterface* getItsDouble_seismicVibration_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        double_waterPressure_ProxyFlowPropertyInterface* getItsDouble_waterPressure_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        RhpString_flowDirection_ProxyFlowPropertyInterface* getItsRhpString_flowDirection_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        UnderWaterSensor::p_UnderWaterSensor_C* getOutBound(void);
        
        //## auto_generated
        virtual void setFlowDirection(RhpString p_flowDirection);
        
        //## auto_generated
        virtual void setSeismicVibration(double p_seismicVibration);
        
        //## auto_generated
        virtual void setTransmissionMode(bool p_transmissionMode);
        
        //## auto_generated
        virtual void setWaterPressure(double p_waterPressure);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsBool_transmissionMode_ProxyFlowPropertyInterface(bool_transmissionMode_ProxyFlowPropertyInterface* const p_bool_transmissionMode_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsDouble_seismicVibration_ProxyFlowPropertyInterface(double_seismicVibration_ProxyFlowPropertyInterface* const p_double_seismicVibration_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsDouble_waterPressure_ProxyFlowPropertyInterface(double_waterPressure_ProxyFlowPropertyInterface* const p_double_waterPressure_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsRhpString_flowDirection_ProxyFlowPropertyInterface(RhpString_flowDirection_ProxyFlowPropertyInterface* const p_RhpString_flowDirection_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        bool_transmissionMode_ProxyFlowPropertyInterface* itsBool_transmissionMode_ProxyFlowPropertyInterface;		//## link itsBool_transmissionMode_ProxyFlowPropertyInterface
        
        double_seismicVibration_ProxyFlowPropertyInterface* itsDouble_seismicVibration_ProxyFlowPropertyInterface;		//## link itsDouble_seismicVibration_ProxyFlowPropertyInterface
        
        double_waterPressure_ProxyFlowPropertyInterface* itsDouble_waterPressure_ProxyFlowPropertyInterface;		//## link itsDouble_waterPressure_ProxyFlowPropertyInterface
        
        RhpString_flowDirection_ProxyFlowPropertyInterface* itsRhpString_flowDirection_ProxyFlowPropertyInterface;		//## link itsRhpString_flowDirection_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedUnderWaterSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit UnderWaterSensor(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~UnderWaterSensor(void);
    
    ////    Operations    ////
    
    //## operation getSeismicVibrations()
    virtual void getSeismicVibrations(void);
    
    //## operation getTransmissionMode()
    virtual void getTransmissionMode(void);
    
    //## operation getWaterPressure()
    virtual void getWaterPressure(void);
    
    //## operation getflowDirection()
    virtual void getflowDirection(void);
    
//#[ ignore
    void setFlowDirection(RhpString p_flowDirection);
    
    void setSeismicVibration(double p_seismicVibration);
    
    void setTransmissionMode(bool p_transmissionMode);
    
    void setWaterPressure(double p_waterPressure);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_UnderWaterSensor_C* getP_UnderWaterSensor(void) const;
    
    //## auto_generated
    p_UnderWaterSensor_C* get_p_UnderWaterSensor(void) const;
    
    //## auto_generated
    const RhpString getFlowDirection(void) const;
    
    //## auto_generated
    const double getSeismicVibration(void) const;
    
    //## auto_generated
    const SMSTWDMain* getItsSMSTWDMain(void) const;
    
    //## auto_generated
    void setItsSMSTWDMain(SMSTWDMain* const p_SMSTWDMain);
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    //## auto_generated
    void cancelTimeouts(void);
    
    ////    Attributes    ////

private :

    RhpString flowDirection;		//## attribute flowDirection
    
    double seismicVibration;		//## attribute seismicVibration
    
    bool transmissionMode;		//## attribute transmissionMode
    
    double waterPressure;		//## attribute waterPressure
    
    ////    Relations and components    ////
    
//#[ ignore
    p_UnderWaterSensor_C p_UnderWaterSensor;
//#]

    SMSTWDMain* itsSMSTWDMain;		//## link itsSMSTWDMain
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSMSTWDMain(SMSTWDMain* const p_SMSTWDMain);
    
    //## auto_generated
    void _setItsSMSTWDMain(SMSTWDMain* const p_SMSTWDMain);
    
    //## auto_generated
    void _clearItsSMSTWDMain(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // ReadyToDetect:
    //## statechart_method
    inline RhpBoolean ReadyToDetect_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus ReadyToDetectTakeevDetectParameters(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus ReadyToDetect_handleEvent(void);
    
    // DetectingUnderwater:
    //## statechart_method
    inline RhpBoolean DetectingUnderwater_IN(void) const;
    
    //## statechart_method
    void DetectingUnderwater_entDef(void);
    
    //## statechart_method
    void DetectingUnderwater_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus DetectingUnderwater_processEvent(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus DetectingUnderwater_handleEvent(void);
    
    // state_9:
    //## statechart_method
    inline RhpBoolean state_9_IN(void) const;
    
    //## statechart_method
    void state_9_entDef(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_9_processEvent(void);
    
    // waterPressureAnalysed:
    //## statechart_method
    inline RhpBoolean waterPressureAnalysed_IN(void) const;
    
    // accepttimeevent_13:
    //## statechart_method
    inline RhpBoolean accepttimeevent_13_IN(void) const;
    
    // state_8:
    //## statechart_method
    inline RhpBoolean state_8_IN(void) const;
    
    //## statechart_method
    void state_8_entDef(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_8_processEvent(void);
    
    // transmissionModeUpdated:
    //## statechart_method
    inline RhpBoolean transmissionModeUpdated_IN(void) const;
    
    // accepttimeevent_14:
    //## statechart_method
    inline RhpBoolean accepttimeevent_14_IN(void) const;
    
    // state_7:
    //## statechart_method
    inline RhpBoolean state_7_IN(void) const;
    
    //## statechart_method
    void state_7_entDef(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_7_processEvent(void);
    
    // seismicVibrationDetected:
    //## statechart_method
    inline RhpBoolean seismicVibrationDetected_IN(void) const;
    
    // accepttimeevent_11:
    //## statechart_method
    inline RhpBoolean accepttimeevent_11_IN(void) const;
    
    // state_6:
    //## statechart_method
    inline RhpBoolean state_6_IN(void) const;
    
    //## statechart_method
    void state_6_entDef(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_6_processEvent(void);
    
    // flowDirectionDetected:
    //## statechart_method
    inline RhpBoolean flowDirectionDetected_IN(void) const;
    
    // accepttimeevent_10:
    //## statechart_method
    inline RhpBoolean accepttimeevent_10_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum UnderWaterSensor_Enum {
        OMNonState = 0,
        ReadyToDetect = 1,
        DetectingUnderwater = 2,
        state_9 = 3,
        waterPressureAnalysed = 4,
        accepttimeevent_13 = 5,
        state_8 = 6,
        transmissionModeUpdated = 7,
        accepttimeevent_14 = 8,
        state_7 = 9,
        seismicVibrationDetected = 10,
        accepttimeevent_11 = 11,
        state_6 = 12,
        flowDirectionDetected = 13,
        accepttimeevent_10 = 14
    };
//#]

private :

//#[ ignore
    UnderWaterSensor_Enum rootState_subState;
    
    UnderWaterSensor_Enum rootState_active;
    
    UnderWaterSensor_Enum state_9_subState;
    
    UnderWaterSensor_Enum state_9_active;
    
    IOxfTimeout* state_9_timeout;
    
    UnderWaterSensor_Enum state_8_subState;
    
    UnderWaterSensor_Enum state_8_active;
    
    IOxfTimeout* state_8_timeout;
    
    UnderWaterSensor_Enum state_7_subState;
    
    UnderWaterSensor_Enum state_7_active;
    
    IOxfTimeout* state_7_timeout;
    
    UnderWaterSensor_Enum state_6_subState;
    
    UnderWaterSensor_Enum state_6_active;
    
    IOxfTimeout* state_6_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUnderWaterSensor : virtual public AOMInstance {
    DECLARE_REACTIVE_META(UnderWaterSensor, OMAnimatedUnderWaterSensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ReadyToDetect_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DetectingUnderwater_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_9_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void waterPressureAnalysed_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_13_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_8_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void transmissionModeUpdated_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_14_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void seismicVibrationDetected_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_11_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_6_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void flowDirectionDetected_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_10_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean UnderWaterSensor::rootState_IN(void) const {
    return true;
}

inline RhpBoolean UnderWaterSensor::ReadyToDetect_IN(void) const {
    return rootState_subState == ReadyToDetect;
}

inline RhpBoolean UnderWaterSensor::DetectingUnderwater_IN(void) const {
    return rootState_subState == DetectingUnderwater;
}

inline RhpBoolean UnderWaterSensor::state_9_IN(void) const {
    return DetectingUnderwater_IN();
}

inline RhpBoolean UnderWaterSensor::waterPressureAnalysed_IN(void) const {
    return state_9_subState == waterPressureAnalysed;
}

inline RhpBoolean UnderWaterSensor::accepttimeevent_13_IN(void) const {
    return state_9_subState == accepttimeevent_13;
}

inline RhpBoolean UnderWaterSensor::state_8_IN(void) const {
    return DetectingUnderwater_IN();
}

inline RhpBoolean UnderWaterSensor::transmissionModeUpdated_IN(void) const {
    return state_8_subState == transmissionModeUpdated;
}

inline RhpBoolean UnderWaterSensor::accepttimeevent_14_IN(void) const {
    return state_8_subState == accepttimeevent_14;
}

inline RhpBoolean UnderWaterSensor::state_7_IN(void) const {
    return DetectingUnderwater_IN();
}

inline RhpBoolean UnderWaterSensor::seismicVibrationDetected_IN(void) const {
    return state_7_subState == seismicVibrationDetected;
}

inline RhpBoolean UnderWaterSensor::accepttimeevent_11_IN(void) const {
    return state_7_subState == accepttimeevent_11;
}

inline RhpBoolean UnderWaterSensor::state_6_IN(void) const {
    return DetectingUnderwater_IN();
}

inline RhpBoolean UnderWaterSensor::flowDirectionDetected_IN(void) const {
    return state_6_subState == flowDirectionDetected;
}

inline RhpBoolean UnderWaterSensor::accepttimeevent_10_IN(void) const {
    return state_6_subState == accepttimeevent_10;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UnderWaterSensor.h
*********************************************************************/
