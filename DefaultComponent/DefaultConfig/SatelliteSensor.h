/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20221943
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SatelliteSensor
//!	Generated Date	: Thu, 18, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SatelliteSensor.h
*********************************************************************/

#ifndef SatelliteSensor_H
#define SatelliteSensor_H

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
//## class p_SatelliteSensor_C
#include "double_ImageData_ProxyFlowPropertyInterface.h"
//## class p_SatelliteSensor_C
#include "double_stormCoordinates_ProxyFlowPropertyInterface.h"
//## link itsSMSTWDMain
class SMSTWDMain;

//## package SensingSystemPKG

//## class SatelliteSensor
class SatelliteSensor : public OMReactive {
public :

//#[ ignore
    //## package SensingSystemPKG
    class p_SatelliteSensor_C : public double_ImageData_ProxyFlowPropertyInterface, public double_stormCoordinates_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_SatelliteSensor_C(void);
        
        //## auto_generated
        virtual ~p_SatelliteSensor_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        double_ImageData_ProxyFlowPropertyInterface* getItsDouble_ImageData_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        double_stormCoordinates_ProxyFlowPropertyInterface* getItsDouble_stormCoordinates_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        SatelliteSensor::p_SatelliteSensor_C* getOutBound(void);
        
        //## auto_generated
        virtual void setImageData(double p_ImageData);
        
        //## auto_generated
        virtual void setStormCoordinates(double p_stormCoordinates);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsDouble_ImageData_ProxyFlowPropertyInterface(double_ImageData_ProxyFlowPropertyInterface* const p_double_ImageData_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsDouble_stormCoordinates_ProxyFlowPropertyInterface(double_stormCoordinates_ProxyFlowPropertyInterface* const p_double_stormCoordinates_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        double_ImageData_ProxyFlowPropertyInterface* itsDouble_ImageData_ProxyFlowPropertyInterface;		//## link itsDouble_ImageData_ProxyFlowPropertyInterface
        
        double_stormCoordinates_ProxyFlowPropertyInterface* itsDouble_stormCoordinates_ProxyFlowPropertyInterface;		//## link itsDouble_stormCoordinates_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedSatelliteSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit SatelliteSensor(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~SatelliteSensor(void);
    
    ////    Operations    ////
    
    //## operation getImageData()
    virtual void getImageData(void);
    
    //## operation getStormCoords()
    virtual void getStormCoords(void);
    
//#[ ignore
    void setImageData(double p_ImageData);
    
    void setStormCoordinates(double p_stormCoordinates);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_SatelliteSensor_C* getP_SatelliteSensor(void) const;
    
    //## auto_generated
    p_SatelliteSensor_C* get_p_SatelliteSensor(void) const;
    
    //## auto_generated
    const double getStormCoordinates(void) const;
    
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

    double ImageData;		//## attribute ImageData
    
    double stormCoordinates;		//## attribute stormCoordinates
    
    ////    Relations and components    ////
    
//#[ ignore
    p_SatelliteSensor_C p_SatelliteSensor;
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
    
    // DetectingSatellite:
    //## statechart_method
    inline RhpBoolean DetectingSatellite_IN(void) const;
    
    //## statechart_method
    void DetectingSatellite_entDef(void);
    
    //## statechart_method
    void DetectingSatellite_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus DetectingSatellite_processEvent(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus DetectingSatellite_handleEvent(void);
    
    // state_3:
    //## statechart_method
    inline RhpBoolean state_3_IN(void) const;
    
    //## statechart_method
    void state_3_entDef(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_3_processEvent(void);
    
    // StormCoordCaptured:
    //## statechart_method
    inline RhpBoolean StormCoordCaptured_IN(void) const;
    
    // accepttimeevent_8:
    //## statechart_method
    inline RhpBoolean accepttimeevent_8_IN(void) const;
    
    // state_2:
    //## statechart_method
    inline RhpBoolean state_2_IN(void) const;
    
    //## statechart_method
    void state_2_entDef(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_2_processEvent(void);
    
    // ImageCaptured:
    //## statechart_method
    inline RhpBoolean ImageCaptured_IN(void) const;
    
    // accepttimeevent_6:
    //## statechart_method
    inline RhpBoolean accepttimeevent_6_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum SatelliteSensor_Enum {
        OMNonState = 0,
        ReadyToDetect = 1,
        DetectingSatellite = 2,
        state_3 = 3,
        StormCoordCaptured = 4,
        accepttimeevent_8 = 5,
        state_2 = 6,
        ImageCaptured = 7,
        accepttimeevent_6 = 8
    };
//#]

private :

//#[ ignore
    SatelliteSensor_Enum rootState_subState;
    
    SatelliteSensor_Enum rootState_active;
    
    SatelliteSensor_Enum state_3_subState;
    
    SatelliteSensor_Enum state_3_active;
    
    IOxfTimeout* state_3_timeout;
    
    SatelliteSensor_Enum state_2_subState;
    
    SatelliteSensor_Enum state_2_active;
    
    IOxfTimeout* state_2_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSatelliteSensor : virtual public AOMInstance {
    DECLARE_REACTIVE_META(SatelliteSensor, OMAnimatedSatelliteSensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ReadyToDetect_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DetectingSatellite_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void StormCoordCaptured_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_8_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ImageCaptured_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_6_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean SatelliteSensor::rootState_IN(void) const {
    return true;
}

inline RhpBoolean SatelliteSensor::ReadyToDetect_IN(void) const {
    return rootState_subState == ReadyToDetect;
}

inline RhpBoolean SatelliteSensor::DetectingSatellite_IN(void) const {
    return rootState_subState == DetectingSatellite;
}

inline RhpBoolean SatelliteSensor::state_3_IN(void) const {
    return DetectingSatellite_IN();
}

inline RhpBoolean SatelliteSensor::StormCoordCaptured_IN(void) const {
    return state_3_subState == StormCoordCaptured;
}

inline RhpBoolean SatelliteSensor::accepttimeevent_8_IN(void) const {
    return state_3_subState == accepttimeevent_8;
}

inline RhpBoolean SatelliteSensor::state_2_IN(void) const {
    return DetectingSatellite_IN();
}

inline RhpBoolean SatelliteSensor::ImageCaptured_IN(void) const {
    return state_2_subState == ImageCaptured;
}

inline RhpBoolean SatelliteSensor::accepttimeevent_6_IN(void) const {
    return state_2_subState == accepttimeevent_6;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SatelliteSensor.h
*********************************************************************/
