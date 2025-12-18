/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20221943
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommunicationUnit
//!	Generated Date	: Thu, 18, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\CommunicationUnit.h
*********************************************************************/

#ifndef CommunicationUnit_H
#define CommunicationUnit_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SensingSystemPKG.h"
//## class CommunicationUnit
#include "float_currentRiskScore_ProxyFlowPropertyInterface.h"
//## class CommunicationUnit
#include "float_seismicInference_ProxyFlowPropertyInterface.h"
//## class CommunicationUnit
#include "float_stormIntensityInference_ProxyFlowPropertyInterface.h"
//## class CommunicationUnit
#include "float_waterPressureInference_ProxyFlowPropertyInterface.h"
//## class CommunicationUnit
#include "int_targetRegionCoordinates_ProxyFlowPropertyInterface.h"
//## link itsDataProcessingUnit
class DataProcessingUnit;

//#[ ignore
#define OMAnim_SensingSystemPKG_CommunicationUnit_setSeismicThreshold_float_ARGS_DECLARATION float p_seismicThreshold;

#define OMAnim_SensingSystemPKG_CommunicationUnit_setStormIntensityThreshold_float_ARGS_DECLARATION float p_stormIntensityThreshold;

#define OMAnim_SensingSystemPKG_CommunicationUnit_setWaterPressureThreshold_float_ARGS_DECLARATION float p_waterPressureThreshold;
//#]

//## package SensingSystemPKG

//## class CommunicationUnit
class CommunicationUnit : public float_currentRiskScore_ProxyFlowPropertyInterface, public float_waterPressureInference_ProxyFlowPropertyInterface, public float_stormIntensityInference_ProxyFlowPropertyInterface, public float_seismicInference_ProxyFlowPropertyInterface, public int_targetRegionCoordinates_ProxyFlowPropertyInterface {
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
        void connectCommunicationUnit(CommunicationUnit* part);
        
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
    friend class OMAnimatedCommunicationUnit;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CommunicationUnit(void);
    
    //## auto_generated
    virtual ~CommunicationUnit(void);
    
    ////    Operations    ////
    
    //## operation Operation_13()
    virtual void Operation_13(void);
    
    //## operation communicateGov()
    virtual void communicateGov(void);
    
    //## operation communicateMessage()
    virtual void communicateMessage(void);
    
    //## operation communicatePublic()
    virtual void communicatePublic(void);
    
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
    const RhpString getActiveChannels(void) const;
    
    //## auto_generated
    void setActiveChannels(const RhpString p_activeChannels);
    
    //## auto_generated
    const float getCurrentRiskScore(void) const;
    
    //## auto_generated
    const RhpString getGovMessage(void) const;
    
    //## auto_generated
    void setGovMessage(const RhpString p_govMessage);
    
    //## auto_generated
    const bool getLedLight(void) const;
    
    //## auto_generated
    void setLedLight(const bool p_ledLight);
    
    //## auto_generated
    const RhpString getPublicMessage(void) const;
    
    //## auto_generated
    void setPublicMessage(const RhpString p_publicMessage);
    
    //## auto_generated
    const RhpString getPublicMessageLang(void) const;
    
    //## auto_generated
    void setPublicMessageLang(const RhpString p_publicMessageLang);
    
    //## auto_generated
    const float getPublicRisk(void) const;
    
    //## auto_generated
    void setPublicRisk(const float p_publicRisk);
    
    //## auto_generated
    const int getRiskThreshold(void) const;
    
    //## auto_generated
    void setRiskThreshold(const int p_riskThreshold);
    
    //## auto_generated
    const float getSeismicInference(void) const;
    
    //## auto_generated
    const float getSeismicThreshold(void) const;
    
    //## auto_generated
    void setSeismicThreshold(const float p_seismicThreshold);
    
    //## auto_generated
    const float getStormIntensityInference(void) const;
    
    //## auto_generated
    const float getStormIntensityThreshold(void) const;
    
    //## auto_generated
    void setStormIntensityThreshold(const float p_stormIntensityThreshold);
    
    //## auto_generated
    const int getTargetRegionCoordinates(void) const;
    
    //## auto_generated
    const float getWaterPressureInference(void) const;
    
    //## auto_generated
    const float getWaterPressureThreshold(void) const;
    
    //## auto_generated
    void setWaterPressureThreshold(const float p_waterPressureThreshold);
    
    //## auto_generated
    const DataProcessingUnit* getItsDataProcessingUnit(void) const;
    
    //## auto_generated
    void setItsDataProcessingUnit(DataProcessingUnit* const p_DataProcessingUnit);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    RhpString activeChannels;		//## attribute activeChannels
    
    float currentRiskScore;		//## attribute currentRiskScore
    
    RhpString govMessage;		//## attribute govMessage
    
    bool ledLight;		//## attribute ledLight
    
    RhpString publicMessage;		//## attribute publicMessage
    
    RhpString publicMessageLang;		//## attribute publicMessageLang
    
    float publicRisk;		//## attribute publicRisk
    
    int riskThreshold;		//## attribute riskThreshold
    
    float seismicInference;		//## attribute seismicInference
    
    float seismicThreshold;		//## attribute seismicThreshold
    
    float stormIntensityInference;		//## attribute stormIntensityInference
    
    float stormIntensityThreshold;		//## attribute stormIntensityThreshold
    
    int targetRegionCoordinates;		//## attribute targetRegionCoordinates
    
    float waterPressureInference;		//## attribute waterPressureInference
    
    float waterPressureThreshold;		//## attribute waterPressureThreshold
    
    ////    Relations and components    ////
    
//#[ ignore
    p_DataProcessingUnit_C p_DataProcessingUnit;
//#]

    DataProcessingUnit* itsDataProcessingUnit;		//## link itsDataProcessingUnit
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDataProcessingUnit(DataProcessingUnit* const p_DataProcessingUnit);
    
    //## auto_generated
    void _setItsDataProcessingUnit(DataProcessingUnit* const p_DataProcessingUnit);
    
    //## auto_generated
    void _clearItsDataProcessingUnit(void);
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(SensingSystemPKG_CommunicationUnit_setSeismicThreshold_float)

DECLARE_OPERATION_CLASS(SensingSystemPKG_CommunicationUnit_setStormIntensityThreshold_float)

DECLARE_OPERATION_CLASS(SensingSystemPKG_CommunicationUnit_setWaterPressureThreshold_float)

//#[ ignore
class OMAnimatedCommunicationUnit : virtual public AOMInstance {
    DECLARE_META(CommunicationUnit, OMAnimatedCommunicationUnit)
    
    DECLARE_META_OP(SensingSystemPKG_CommunicationUnit_setSeismicThreshold_float)
    
    DECLARE_META_OP(SensingSystemPKG_CommunicationUnit_setStormIntensityThreshold_float)
    
    DECLARE_META_OP(SensingSystemPKG_CommunicationUnit_setWaterPressureThreshold_float)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommunicationUnit.h
*********************************************************************/
