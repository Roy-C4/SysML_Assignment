/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20221943
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessingUnit
//!	Generated Date	: Tue, 16, Dec 2025  
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
//## package SensingSystemPKG

//## class DataProcessingUnit
class DataProcessingUnit {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDataProcessingUnit;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DataProcessingUnit(void);
    
    //## auto_generated
    virtual ~DataProcessingUnit(void);
    
    ////    Operations    ////
    
    //## operation inferAerial(double,double,double,RhpString)
    virtual void inferAerial(double precipitationAmount, double stormPosition, double windSpeed, const RhpString& windDirection);
    
    //## operation inferSatellite(double,double)
    virtual void inferSatellite(double ImageData, double stormCoordinates);
    
    //## operation inferUnderWater(RhpString,double,bool,double)
    virtual void inferUnderWater(const RhpString& flowDirection, double seismicVibration, bool transmissionMode, double waterPressure);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const int getCurrentRiskScore(void) const;
    
    //## auto_generated
    void setCurrentRiskScore(const int p_currentRiskScore);
    
    //## auto_generated
    const int getDetectionThreshold(void) const;
    
    //## auto_generated
    void setDetectionThreshold(const int p_detectionThreshold);
    
    //## auto_generated
    const int getHeartbeatInterval(void) const;
    
    //## auto_generated
    void setHeartbeatInterval(const int p_heartbeatInterval);
    
    ////    Attributes    ////

private :

    int currentRiskScore;		//## attribute currentRiskScore
    
    int detectionThreshold;		//## attribute detectionThreshold
    
    int heartbeatInterval;		//## attribute heartbeatInterval
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDataProcessingUnit : virtual public AOMInstance {
    DECLARE_META(DataProcessingUnit, OMAnimatedDataProcessingUnit)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessingUnit.h
*********************************************************************/
