/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20221943
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessingUnit
//!	Generated Date	: Thu, 18, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\DataProcessingUnit.h
*********************************************************************/

#ifndef DataProcessingUnit_H
#define DataProcessingUnit_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SensingSystemPKG.h"
//## class p_DataProcessingUnit_C
#include "float_currentRiskScore_ProxyFlowPropertyInterface.h"
//## class p_DataProcessingUnit_C
#include "float_seismicInference_ProxyFlowPropertyInterface.h"
//## class p_DataProcessingUnit_C
#include "float_stormIntensityInference_ProxyFlowPropertyInterface.h"
//## class p_DataProcessingUnit_C
#include "float_waterPressureInference_ProxyFlowPropertyInterface.h"
//## class p_DataProcessingUnit_C
#include "int_targetRegionCoordinates_ProxyFlowPropertyInterface.h"
//## link itsCommunicationUnit
class CommunicationUnit;

//## package SensingSystemPKG

//## class DataProcessingUnit
class DataProcessingUnit {
public :

//#[ ignore
    //## package SensingSystemPKG
    class p_DataProcessingUnit_C : public float_currentRiskScore_ProxyFlowPropertyInterface, public float_waterPressureInference_ProxyFlowPropertyInterface, public float_stormIntensityInference_ProxyFlowPropertyInterface, public float_seismicInference_ProxyFlowPropertyInterface, public int_targetRegionCoordinates_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_DataProcessingUnit_C(void);
        
        //## auto_generated
        virtual ~p_DataProcessingUnit_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        float_currentRiskScore_ProxyFlowPropertyInterface* getItsFloat_currentRiskScore_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        float_seismicInference_ProxyFlowPropertyInterface* getItsFloat_seismicInference_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        float_stormIntensityInference_ProxyFlowPropertyInterface* getItsFloat_stormIntensityInference_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        float_waterPressureInference_ProxyFlowPropertyInterface* getItsFloat_waterPressureInference_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_targetRegionCoordinates_ProxyFlowPropertyInterface* getItsInt_targetRegionCoordinates_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        DataProcessingUnit::p_DataProcessingUnit_C* getOutBound(void);
        
        //## auto_generated
        virtual void setCurrentRiskScore(float p_currentRiskScore);
        
        //## auto_generated
        virtual void setSeismicInference(float p_seismicInference);
        
        //## auto_generated
        virtual void setStormIntensityInference(float p_stormIntensityInference);
        
        //## auto_generated
        virtual void setTargetRegionCoordinates(int p_targetRegionCoordinates);
        
        //## auto_generated
        virtual void setWaterPressureInference(float p_waterPressureInference);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsFloat_currentRiskScore_ProxyFlowPropertyInterface(float_currentRiskScore_ProxyFlowPropertyInterface* const p_float_currentRiskScore_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsFloat_seismicInference_ProxyFlowPropertyInterface(float_seismicInference_ProxyFlowPropertyInterface* const p_float_seismicInference_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsFloat_stormIntensityInference_ProxyFlowPropertyInterface(float_stormIntensityInference_ProxyFlowPropertyInterface* const p_float_stormIntensityInference_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsFloat_waterPressureInference_ProxyFlowPropertyInterface(float_waterPressureInference_ProxyFlowPropertyInterface* const p_float_waterPressureInference_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_targetRegionCoordinates_ProxyFlowPropertyInterface(int_targetRegionCoordinates_ProxyFlowPropertyInterface* const p_int_targetRegionCoordinates_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        float_currentRiskScore_ProxyFlowPropertyInterface* itsFloat_currentRiskScore_ProxyFlowPropertyInterface;		//## link itsFloat_currentRiskScore_ProxyFlowPropertyInterface
        
        float_seismicInference_ProxyFlowPropertyInterface* itsFloat_seismicInference_ProxyFlowPropertyInterface;		//## link itsFloat_seismicInference_ProxyFlowPropertyInterface
        
        float_stormIntensityInference_ProxyFlowPropertyInterface* itsFloat_stormIntensityInference_ProxyFlowPropertyInterface;		//## link itsFloat_stormIntensityInference_ProxyFlowPropertyInterface
        
        float_waterPressureInference_ProxyFlowPropertyInterface* itsFloat_waterPressureInference_ProxyFlowPropertyInterface;		//## link itsFloat_waterPressureInference_ProxyFlowPropertyInterface
        
        int_targetRegionCoordinates_ProxyFlowPropertyInterface* itsInt_targetRegionCoordinates_ProxyFlowPropertyInterface;		//## link itsInt_targetRegionCoordinates_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedDataProcessingUnit;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DataProcessingUnit(void);
    
    //## auto_generated
    virtual ~DataProcessingUnit(void);
    
    ////    Operations    ////
    
    //## operation InferSeismic()
    virtual void InferSeismic(void);
    
    //## operation InferStormIntensity()
    virtual void InferStormIntensity(void);
    
    //## operation deNoise(float,float,float)
    virtual float deNoise(float datapoint, float hyper1, float hyper2);
    
    //## operation inferAerial(double,double,double,RhpString)
    virtual void inferAerial(double precipitationAmount, double stormPosition, double windSpeed, const RhpString& windDirection);
    
    //## operation inferRisk()
    virtual void inferRisk(void);
    
    //## operation inferSatellite(double,double)
    virtual void inferSatellite(double ImageData, double stormCoordinates);
    
    //## operation inferTargetReg()
    virtual void inferTargetReg(void);
    
    //## operation inferUnderWater(RhpString,double,bool,double)
    virtual void inferUnderWater(const RhpString& flowDirection, double seismicVibration, bool transmissionMode, double waterPressure);
    
//#[ ignore
    void setCurrentRiskScore(float p_currentRiskScore);
    
    void setSeismicInference(float p_seismicInference);
    
    void setStormIntensityInference(float p_stormIntensityInference);
    
    void setTargetRegionCoordinates(int p_targetRegionCoordinates);
    
    void setWaterPressureInference(float p_waterPressureInference);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_DataProcessingUnit_C* getP_DataProcessingUnit(void) const;
    
    //## auto_generated
    p_DataProcessingUnit_C* get_p_DataProcessingUnit(void) const;
    
    //## auto_generated
    const float getAerialInference(void) const;
    
    //## auto_generated
    void setAerialInference(const float p_aerialInference);
    
    //## auto_generated
    const float getCurrentRiskScore(void) const;
    
    //## auto_generated
    const int getHeartbeatInterval(void) const;
    
    //## auto_generated
    void setHeartbeatInterval(const int p_heartbeatInterval);
    
    //## auto_generated
    const float getSatelliteInference(void) const;
    
    //## auto_generated
    void setSatelliteInference(const float p_satelliteInference);
    
    //## auto_generated
    const float getSeismicInference(void) const;
    
    //## auto_generated
    const float getStormIntensityInference(void) const;
    
    //## auto_generated
    const int getTargetRegionCoordinates(void) const;
    
    //## auto_generated
    const float getWaterPressureInference(void) const;
    
    //## auto_generated
    const CommunicationUnit* getItsCommunicationUnit(void) const;
    
    //## auto_generated
    void setItsCommunicationUnit(CommunicationUnit* const p_CommunicationUnit);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    float aerialInference;		//## attribute aerialInference
    
    float currentRiskScore;		//## attribute currentRiskScore
    
    int heartbeatInterval;		//## attribute heartbeatInterval
    
    float satelliteInference;		//## attribute satelliteInference
    
    float seismicInference;		//## attribute seismicInference
    
    float stormIntensityInference;		//## attribute stormIntensityInference
    
    int targetRegionCoordinates;		//## attribute targetRegionCoordinates
    
    float waterPressureInference;		//## attribute waterPressureInference
    
    ////    Relations and components    ////
    
//#[ ignore
    p_DataProcessingUnit_C p_DataProcessingUnit;
//#]

    CommunicationUnit* itsCommunicationUnit;		//## link itsCommunicationUnit
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCommunicationUnit(CommunicationUnit* const p_CommunicationUnit);
    
    //## auto_generated
    void _setItsCommunicationUnit(CommunicationUnit* const p_CommunicationUnit);
    
    //## auto_generated
    void _clearItsCommunicationUnit(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDataProcessingUnit : virtual public AOMInstance {
    DECLARE_META(DataProcessingUnit, OMAnimatedDataProcessingUnit)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessingUnit.h
*********************************************************************/
