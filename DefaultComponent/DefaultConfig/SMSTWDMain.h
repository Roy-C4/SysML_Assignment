/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20221943
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSTWDMain
//!	Generated Date	: Wed, 17, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSTWDMain.h
*********************************************************************/

#ifndef SMSTWDMain_H
#define SMSTWDMain_H

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
//## class SMSTWDMain
#include "bool_transmissionMode_ProxyFlowPropertyInterface.h"
//## classInstance itsCommunicationUnit
#include "CommunicationUnit.h"
//## classInstance itsDataProcessingUnit
#include "DataProcessingUnit.h"
//## class SMSTWDMain
#include "double_ImageData_ProxyFlowPropertyInterface.h"
//## class SMSTWDMain
#include "double_precipitationAmount_ProxyFlowPropertyInterface.h"
//## class SMSTWDMain
#include "double_seismicVibration_ProxyFlowPropertyInterface.h"
//## class SMSTWDMain
#include "double_stormCoordinates_ProxyFlowPropertyInterface.h"
//## class SMSTWDMain
#include "double_stormPosition_ProxyFlowPropertyInterface.h"
//## class SMSTWDMain
#include "double_waterPressure_ProxyFlowPropertyInterface.h"
//## class SMSTWDMain
#include "double_windSpeed_ProxyFlowPropertyInterface.h"
//## class SMSTWDMain
#include "RhpString_flowDirection_ProxyFlowPropertyInterface.h"
//## class SMSTWDMain
#include "RhpString_windDirection_ProxyFlowPropertyInterface.h"
//## link itsAerialSensor
class AerialSensor;

//## link itsSatelliteSensor
class SatelliteSensor;

//## link itsUnderWaterSensor
class UnderWaterSensor;

//#[ ignore
#define OMAnim_SensingSystemPKG_SMSTWDMain_setFlowDirection_RhpString_ARGS_DECLARATION RhpString p_flowDirection;

#define OMAnim_SensingSystemPKG_SMSTWDMain_setWindDirection_RhpString_ARGS_DECLARATION RhpString p_windDirection;
//#]

//## package SensingSystemPKG

//## class SMSTWDMain
class SMSTWDMain : public OMReactive, public double_seismicVibration_ProxyFlowPropertyInterface, public double_waterPressure_ProxyFlowPropertyInterface, public RhpString_flowDirection_ProxyFlowPropertyInterface, public bool_transmissionMode_ProxyFlowPropertyInterface, public double_windSpeed_ProxyFlowPropertyInterface, public double_precipitationAmount_ProxyFlowPropertyInterface, public double_stormPosition_ProxyFlowPropertyInterface, public RhpString_windDirection_ProxyFlowPropertyInterface, public double_ImageData_ProxyFlowPropertyInterface, public double_stormCoordinates_ProxyFlowPropertyInterface {
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
        void connectSMSTWDMain(SMSTWDMain* part);
        
        //## auto_generated
        bool_transmissionMode_ProxyFlowPropertyInterface* getItsBool_transmissionMode_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        double_seismicVibration_ProxyFlowPropertyInterface* getItsDouble_seismicVibration_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        double_waterPressure_ProxyFlowPropertyInterface* getItsDouble_waterPressure_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        RhpString_flowDirection_ProxyFlowPropertyInterface* getItsRhpString_flowDirection_ProxyFlowPropertyInterface(void);
        
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
        void connectSMSTWDMain(SMSTWDMain* part);
        
        //## auto_generated
        double_precipitationAmount_ProxyFlowPropertyInterface* getItsDouble_precipitationAmount_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        double_stormPosition_ProxyFlowPropertyInterface* getItsDouble_stormPosition_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        double_windSpeed_ProxyFlowPropertyInterface* getItsDouble_windSpeed_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        RhpString_windDirection_ProxyFlowPropertyInterface* getItsRhpString_windDirection_ProxyFlowPropertyInterface(void);
        
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
        void connectSMSTWDMain(SMSTWDMain* part);
        
        //## auto_generated
        double_ImageData_ProxyFlowPropertyInterface* getItsDouble_ImageData_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        double_stormCoordinates_ProxyFlowPropertyInterface* getItsDouble_stormCoordinates_ProxyFlowPropertyInterface(void);
        
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
    friend class OMAnimatedSMSTWDMain;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit SMSTWDMain(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~SMSTWDMain(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setFlowDirection(RhpString p_flowDirection);
    
    void setImageData(double p_ImageData);
    
    void setPrecipitationAmount(double p_precipitationAmount);
    
    void setSeismicVibration(double p_seismicVibration);
    
    void setStormCoordinates(double p_stormCoordinates);
    
    void setStormPosition(double p_stormPosition);
    
    void setTransmissionMode(bool p_transmissionMode);
    
    void setWaterPressure(double p_waterPressure);
    
    void setWindDirection(RhpString p_windDirection);
    
    void setWindSpeed(double p_windSpeed);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_UnderWaterSensor_C* getP_UnderWaterSensor(void) const;
    
    //## auto_generated
    p_UnderWaterSensor_C* get_p_UnderWaterSensor(void) const;
    
    //## auto_generated
    p_AerialSensor_C* getP_AerialSensor(void) const;
    
    //## auto_generated
    p_AerialSensor_C* get_p_AerialSensor(void) const;
    
    //## auto_generated
    p_SatelliteSensor_C* getP_SatelliteSensor(void) const;
    
    //## auto_generated
    p_SatelliteSensor_C* get_p_SatelliteSensor(void) const;
    
    //## auto_generated
    const double getImageData(void) const;
    
    //## auto_generated
    const int getActiveChannels(void) const;
    
    //## auto_generated
    void setActiveChannels(const int p_activeChannels);
    
    //## auto_generated
    const int getCurrentRiskScore(void) const;
    
    //## auto_generated
    void setCurrentRiskScore(const int p_currentRiskScore);
    
    //## auto_generated
    const int getDetectionThreshold(void) const;
    
    //## auto_generated
    void setDetectionThreshold(const int p_detectionThreshold);
    
    //## auto_generated
    const RhpString getFlowDirection(void) const;
    
    //## auto_generated
    const int getHeartbeatInterval(void) const;
    
    //## auto_generated
    void setHeartbeatInterval(const int p_heartbeatInterval);
    
    //## auto_generated
    const double getPrecipitationAmount(void) const;
    
    //## auto_generated
    const double getSeismicVibration(void) const;
    
    //## auto_generated
    const double getStormCoordinates(void) const;
    
    //## auto_generated
    const double getStormPosition(void) const;
    
    //## auto_generated
    const double getTargetRegionCoordinates(void) const;
    
    //## auto_generated
    void setTargetRegionCoordinates(const double p_targetRegionCoordinates);
    
    //## auto_generated
    const bool getTransmissionMode(void) const;
    
    //## auto_generated
    const double getWaterPressure(void) const;
    
    //## auto_generated
    const RhpString getWindDirection(void) const;
    
    //## auto_generated
    const double getWindSpeed(void) const;
    
    //## auto_generated
    const AerialSensor* getItsAerialSensor(void) const;
    
    //## auto_generated
    void setItsAerialSensor(AerialSensor* const p_AerialSensor);
    
    //## auto_generated
    const CommunicationUnit* getItsCommunicationUnit(void) const;
    
    //## auto_generated
    const DataProcessingUnit* getItsDataProcessingUnit(void) const;
    
    //## auto_generated
    const SatelliteSensor* getItsSatelliteSensor(void) const;
    
    //## auto_generated
    void setItsSatelliteSensor(SatelliteSensor* const p_SatelliteSensor);
    
    //## auto_generated
    const UnderWaterSensor* getItsUnderWaterSensor(void) const;
    
    //## auto_generated
    void setItsUnderWaterSensor(UnderWaterSensor* const p_UnderWaterSensor);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    double ImageData;		//## attribute ImageData
    
    int activeChannels;		//## attribute activeChannels
    
    int currentRiskScore;		//## attribute currentRiskScore
    
    int detectionThreshold;		//## attribute detectionThreshold
    
    RhpString flowDirection;		//## attribute flowDirection
    
    int heartbeatInterval;		//## attribute heartbeatInterval
    
    double precipitationAmount;		//## attribute precipitationAmount
    
    double seismicVibration;		//## attribute seismicVibration
    
    double stormCoordinates;		//## attribute stormCoordinates
    
    double stormPosition;		//## attribute stormPosition
    
    double targetRegionCoordinates;		//## attribute targetRegionCoordinates
    
    bool transmissionMode;		//## attribute transmissionMode
    
    double waterPressure;		//## attribute waterPressure
    
    RhpString windDirection;		//## attribute windDirection
    
    double windSpeed;		//## attribute windSpeed
    
    ////    Relations and components    ////
    
//#[ ignore
    p_UnderWaterSensor_C p_UnderWaterSensor;
    
    p_AerialSensor_C p_AerialSensor;
    
    p_SatelliteSensor_C p_SatelliteSensor;
//#]

    AerialSensor* itsAerialSensor;		//## link itsAerialSensor
    
    CommunicationUnit itsCommunicationUnit;		//## classInstance itsCommunicationUnit
    
    DataProcessingUnit itsDataProcessingUnit;		//## classInstance itsDataProcessingUnit
    
    SatelliteSensor* itsSatelliteSensor;		//## link itsSatelliteSensor
    
    UnderWaterSensor* itsUnderWaterSensor;		//## link itsUnderWaterSensor
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAerialSensor(AerialSensor* const p_AerialSensor);
    
    //## auto_generated
    void _setItsAerialSensor(AerialSensor* const p_AerialSensor);
    
    //## auto_generated
    void _clearItsAerialSensor(void);
    
    //## auto_generated
    void __setItsSatelliteSensor(SatelliteSensor* const p_SatelliteSensor);
    
    //## auto_generated
    void _setItsSatelliteSensor(SatelliteSensor* const p_SatelliteSensor);
    
    //## auto_generated
    void _clearItsSatelliteSensor(void);
    
    //## auto_generated
    void __setItsUnderWaterSensor(UnderWaterSensor* const p_UnderWaterSensor);
    
    //## auto_generated
    void _setItsUnderWaterSensor(UnderWaterSensor* const p_UnderWaterSensor);
    
    //## auto_generated
    void _clearItsUnderWaterSensor(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // On:
    //## statechart_method
    inline RhpBoolean On_IN(void) const;
    
    // Off:
    //## statechart_method
    inline RhpBoolean Off_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum SMSTWDMain_Enum {
        OMNonState = 0,
        On = 1,
        Off = 2
    };
//#]

private :

//#[ ignore
    SMSTWDMain_Enum rootState_subState;
    
    SMSTWDMain_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(SensingSystemPKG_SMSTWDMain_setFlowDirection_RhpString)

DECLARE_OPERATION_CLASS(SensingSystemPKG_SMSTWDMain_setWindDirection_RhpString)

//#[ ignore
class OMAnimatedSMSTWDMain : virtual public AOMInstance {
    DECLARE_REACTIVE_META(SMSTWDMain, OMAnimatedSMSTWDMain)
    
    DECLARE_META_OP(SensingSystemPKG_SMSTWDMain_setFlowDirection_RhpString)
    
    DECLARE_META_OP(SensingSystemPKG_SMSTWDMain_setWindDirection_RhpString)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Off_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean SMSTWDMain::rootState_IN(void) const {
    return true;
}

inline RhpBoolean SMSTWDMain::On_IN(void) const {
    return rootState_subState == On;
}

inline RhpBoolean SMSTWDMain::Off_IN(void) const {
    return rootState_subState == Off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSTWDMain.h
*********************************************************************/
