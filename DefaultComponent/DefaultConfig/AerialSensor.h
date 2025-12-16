/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20221943
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AerialSensor
//!	Generated Date	: Tue, 16, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\AerialSensor.h
*********************************************************************/

#ifndef AerialSensor_H
#define AerialSensor_H

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
//## class p_AerialSensor_C
#include "double_precipitationAmount_ProxyFlowPropertyInterface.h"
//## class p_AerialSensor_C
#include "double_stormPosition_ProxyFlowPropertyInterface.h"
//## class p_AerialSensor_C
#include "double_windSpeed_ProxyFlowPropertyInterface.h"
//## class p_AerialSensor_C
#include "RhpString_windDirection_ProxyFlowPropertyInterface.h"
//## link itsSMSTWDMain
class SMSTWDMain;

//## package SensingSystemPKG

//## class AerialSensor
class AerialSensor : public OMReactive {
public :

//#[ ignore
    //## package SensingSystemPKG
    class p_AerialSensor_C : public double_windSpeed_ProxyFlowPropertyInterface, public double_precipitationAmount_ProxyFlowPropertyInterface, public double_stormPosition_ProxyFlowPropertyInterface, public RhpString_windDirection_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_AerialSensor_C(void);
        
        //## auto_generated
        virtual ~p_AerialSensor_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        double_precipitationAmount_ProxyFlowPropertyInterface* getItsDouble_precipitationAmount_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        double_stormPosition_ProxyFlowPropertyInterface* getItsDouble_stormPosition_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        double_windSpeed_ProxyFlowPropertyInterface* getItsDouble_windSpeed_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        RhpString_windDirection_ProxyFlowPropertyInterface* getItsRhpString_windDirection_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        AerialSensor::p_AerialSensor_C* getOutBound(void);
        
        //## auto_generated
        virtual void setPrecipitationAmount(double p_precipitationAmount);
        
        //## auto_generated
        virtual void setStormPosition(double p_stormPosition);
        
        //## auto_generated
        virtual void setWindDirection(RhpString p_windDirection);
        
        //## auto_generated
        virtual void setWindSpeed(double p_windSpeed);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsDouble_precipitationAmount_ProxyFlowPropertyInterface(double_precipitationAmount_ProxyFlowPropertyInterface* const p_double_precipitationAmount_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsDouble_stormPosition_ProxyFlowPropertyInterface(double_stormPosition_ProxyFlowPropertyInterface* const p_double_stormPosition_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsDouble_windSpeed_ProxyFlowPropertyInterface(double_windSpeed_ProxyFlowPropertyInterface* const p_double_windSpeed_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsRhpString_windDirection_ProxyFlowPropertyInterface(RhpString_windDirection_ProxyFlowPropertyInterface* const p_RhpString_windDirection_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        double_precipitationAmount_ProxyFlowPropertyInterface* itsDouble_precipitationAmount_ProxyFlowPropertyInterface;		//## link itsDouble_precipitationAmount_ProxyFlowPropertyInterface
        
        double_stormPosition_ProxyFlowPropertyInterface* itsDouble_stormPosition_ProxyFlowPropertyInterface;		//## link itsDouble_stormPosition_ProxyFlowPropertyInterface
        
        double_windSpeed_ProxyFlowPropertyInterface* itsDouble_windSpeed_ProxyFlowPropertyInterface;		//## link itsDouble_windSpeed_ProxyFlowPropertyInterface
        
        RhpString_windDirection_ProxyFlowPropertyInterface* itsRhpString_windDirection_ProxyFlowPropertyInterface;		//## link itsRhpString_windDirection_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedAerialSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit AerialSensor(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~AerialSensor(void);
    
    ////    Operations    ////
    
    //## operation getPrecipitationAmount()
    virtual void getPrecipitationAmount(void);
    
    //## operation getStormPosition()
    virtual void getStormPosition(void);
    
    //## operation getWindDirection()
    virtual void getWindDirection(void);
    
    //## operation getWindSpeed()
    virtual void getWindSpeed(void);
    
//#[ ignore
    void setPrecipitationAmount(double p_precipitationAmount);
    
    void setStormPosition(double p_stormPosition);
    
    void setWindDirection(RhpString p_windDirection);
    
    void setWindSpeed(double p_windSpeed);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_AerialSensor_C* getP_AerialSensor(void) const;
    
    //## auto_generated
    p_AerialSensor_C* get_p_AerialSensor(void) const;
    
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

    double precipitationAmount;		//## attribute precipitationAmount
    
    double stormPosition;		//## attribute stormPosition
    
    RhpString windDirection;		//## attribute windDirection
    
    double windSpeed;		//## attribute windSpeed
    
    ////    Relations and components    ////
    
//#[ ignore
    p_AerialSensor_C p_AerialSensor;
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
    
    // DetectingAerial:
    //## statechart_method
    inline RhpBoolean DetectingAerial_IN(void) const;
    
    //## statechart_method
    void DetectingAerial_entDef(void);
    
    //## statechart_method
    void DetectingAerial_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus DetectingAerial_processEvent(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus DetectingAerial_handleEvent(void);
    
    // state_9:
    //## statechart_method
    inline RhpBoolean state_9_IN(void) const;
    
    //## statechart_method
    void state_9_entDef(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_9_processEvent(void);
    
    // windDirectionDetected:
    //## statechart_method
    inline RhpBoolean windDirectionDetected_IN(void) const;
    
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
    
    // windSpeedDetected:
    //## statechart_method
    inline RhpBoolean windSpeedDetected_IN(void) const;
    
    // accepttimeevent_12:
    //## statechart_method
    inline RhpBoolean accepttimeevent_12_IN(void) const;
    
    // state_7:
    //## statechart_method
    inline RhpBoolean state_7_IN(void) const;
    
    //## statechart_method
    void state_7_entDef(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_7_processEvent(void);
    
    // stormPositionDetected:
    //## statechart_method
    inline RhpBoolean stormPositionDetected_IN(void) const;
    
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
    
    // PrecipitationDetected:
    //## statechart_method
    inline RhpBoolean PrecipitationDetected_IN(void) const;
    
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
    enum AerialSensor_Enum {
        OMNonState = 0,
        ReadyToDetect = 1,
        DetectingAerial = 2,
        state_9 = 3,
        windDirectionDetected = 4,
        accepttimeevent_13 = 5,
        state_8 = 6,
        windSpeedDetected = 7,
        accepttimeevent_12 = 8,
        state_7 = 9,
        stormPositionDetected = 10,
        accepttimeevent_11 = 11,
        state_6 = 12,
        PrecipitationDetected = 13,
        accepttimeevent_10 = 14
    };
//#]

private :

//#[ ignore
    AerialSensor_Enum rootState_subState;
    
    AerialSensor_Enum rootState_active;
    
    AerialSensor_Enum state_9_subState;
    
    AerialSensor_Enum state_9_active;
    
    IOxfTimeout* state_9_timeout;
    
    AerialSensor_Enum state_8_subState;
    
    AerialSensor_Enum state_8_active;
    
    IOxfTimeout* state_8_timeout;
    
    AerialSensor_Enum state_7_subState;
    
    AerialSensor_Enum state_7_active;
    
    IOxfTimeout* state_7_timeout;
    
    AerialSensor_Enum state_6_subState;
    
    AerialSensor_Enum state_6_active;
    
    IOxfTimeout* state_6_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAerialSensor : virtual public AOMInstance {
    DECLARE_REACTIVE_META(AerialSensor, OMAnimatedAerialSensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ReadyToDetect_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DetectingAerial_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_9_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void windDirectionDetected_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_13_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_8_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void windSpeedDetected_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_12_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void stormPositionDetected_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_11_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_6_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PrecipitationDetected_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_10_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean AerialSensor::rootState_IN(void) const {
    return true;
}

inline RhpBoolean AerialSensor::ReadyToDetect_IN(void) const {
    return rootState_subState == ReadyToDetect;
}

inline RhpBoolean AerialSensor::DetectingAerial_IN(void) const {
    return rootState_subState == DetectingAerial;
}

inline RhpBoolean AerialSensor::state_9_IN(void) const {
    return DetectingAerial_IN();
}

inline RhpBoolean AerialSensor::windDirectionDetected_IN(void) const {
    return state_9_subState == windDirectionDetected;
}

inline RhpBoolean AerialSensor::accepttimeevent_13_IN(void) const {
    return state_9_subState == accepttimeevent_13;
}

inline RhpBoolean AerialSensor::state_8_IN(void) const {
    return DetectingAerial_IN();
}

inline RhpBoolean AerialSensor::windSpeedDetected_IN(void) const {
    return state_8_subState == windSpeedDetected;
}

inline RhpBoolean AerialSensor::accepttimeevent_12_IN(void) const {
    return state_8_subState == accepttimeevent_12;
}

inline RhpBoolean AerialSensor::state_7_IN(void) const {
    return DetectingAerial_IN();
}

inline RhpBoolean AerialSensor::stormPositionDetected_IN(void) const {
    return state_7_subState == stormPositionDetected;
}

inline RhpBoolean AerialSensor::accepttimeevent_11_IN(void) const {
    return state_7_subState == accepttimeevent_11;
}

inline RhpBoolean AerialSensor::state_6_IN(void) const {
    return DetectingAerial_IN();
}

inline RhpBoolean AerialSensor::PrecipitationDetected_IN(void) const {
    return state_6_subState == PrecipitationDetected;
}

inline RhpBoolean AerialSensor::accepttimeevent_10_IN(void) const {
    return state_6_subState == accepttimeevent_10;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AerialSensor.h
*********************************************************************/
