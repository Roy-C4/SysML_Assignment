/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20221943
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommunicationUnit
//!	Generated Date	: Wed, 17, Dec 2025  
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
#include "float_seismicInference_ProxyFlowPropertyInterface.h"
//## class CommunicationUnit
#include "float_stormIntensityInference_ProxyFlowPropertyInterface.h"
//## class CommunicationUnit
#include "float_waterPressureInference_ProxyFlowPropertyInterface.h"
//## link itsDataProcessingUnit
class DataProcessingUnit;

//## package SensingSystemPKG

//## class CommunicationUnit
class CommunicationUnit : public float_waterPressureInference_ProxyFlowPropertyInterface, public float_stormIntensityInference_ProxyFlowPropertyInterface, public float_seismicInference_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package SensingSystemPKG
    class p_DataProcessingUnit_C : public float_waterPressureInference_ProxyFlowPropertyInterface, public float_stormIntensityInference_ProxyFlowPropertyInterface, public float_seismicInference_ProxyFlowPropertyInterface {
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
        float_seismicInference_ProxyFlowPropertyInterface* getItsFloat_seismicInference_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        float_stormIntensityInference_ProxyFlowPropertyInterface* getItsFloat_stormIntensityInference_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        float_waterPressureInference_ProxyFlowPropertyInterface* getItsFloat_waterPressureInference_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        virtual void setSeismicInference(float p_seismicInference);
        
        //## auto_generated
        virtual void setStormIntensityInference(float p_stormIntensityInference);
        
        //## auto_generated
        virtual void setWaterPressureInference(float p_waterPressureInference);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsFloat_seismicInference_ProxyFlowPropertyInterface(float_seismicInference_ProxyFlowPropertyInterface* const p_float_seismicInference_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsFloat_stormIntensityInference_ProxyFlowPropertyInterface(float_stormIntensityInference_ProxyFlowPropertyInterface* const p_float_stormIntensityInference_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsFloat_waterPressureInference_ProxyFlowPropertyInterface(float_waterPressureInference_ProxyFlowPropertyInterface* const p_float_waterPressureInference_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        float_seismicInference_ProxyFlowPropertyInterface* itsFloat_seismicInference_ProxyFlowPropertyInterface;		//## link itsFloat_seismicInference_ProxyFlowPropertyInterface
        
        float_stormIntensityInference_ProxyFlowPropertyInterface* itsFloat_stormIntensityInference_ProxyFlowPropertyInterface;		//## link itsFloat_stormIntensityInference_ProxyFlowPropertyInterface
        
        float_waterPressureInference_ProxyFlowPropertyInterface* itsFloat_waterPressureInference_ProxyFlowPropertyInterface;		//## link itsFloat_waterPressureInference_ProxyFlowPropertyInterface
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
    ~CommunicationUnit(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setSeismicInference(float p_seismicInference);
    
    void setStormIntensityInference(float p_stormIntensityInference);
    
    void setWaterPressureInference(float p_waterPressureInference);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_DataProcessingUnit_C* getP_DataProcessingUnit(void) const;
    
    //## auto_generated
    p_DataProcessingUnit_C* get_p_DataProcessingUnit(void) const;
    
    //## auto_generated
    const int getActiveChannels(void) const;
    
    //## auto_generated
    void setActiveChannels(const int p_activeChannels);
    
    //## auto_generated
    const float getSeismicInference(void) const;
    
    //## auto_generated
    const float getStormIntensityInference(void) const;
    
    //## auto_generated
    const double getTargetRegionCoordinates(void) const;
    
    //## auto_generated
    void setTargetRegionCoordinates(const double p_targetRegionCoordinates);
    
    //## auto_generated
    const float getWaterPressureInference(void) const;
    
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

    int activeChannels;		//## attribute activeChannels
    
    float seismicInference;		//## attribute seismicInference
    
    float stormIntensityInference;		//## attribute stormIntensityInference
    
    double targetRegionCoordinates;		//## attribute targetRegionCoordinates
    
    float waterPressureInference;		//## attribute waterPressureInference
    
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
//#[ ignore
class OMAnimatedCommunicationUnit : virtual public AOMInstance {
    DECLARE_META(CommunicationUnit, OMAnimatedCommunicationUnit)
    
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
