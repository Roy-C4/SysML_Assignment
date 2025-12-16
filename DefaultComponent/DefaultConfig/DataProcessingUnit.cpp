/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20221943
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessingUnit
//!	Generated Date	: Tue, 16, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\DataProcessingUnit.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DataProcessingUnit.h"
//#[ ignore
#define SensingSystemPKG_DataProcessingUnit_inferAerial_SERIALIZE \
    aomsmethod->addAttribute("precipitationAmount", x2String(precipitationAmount));\
    aomsmethod->addAttribute("stormPosition", x2String(stormPosition));\
    aomsmethod->addAttribute("windSpeed", x2String(windSpeed));\
    aomsmethod->addAttribute("windDirection", x2String(windDirection));
#define SensingSystemPKG_DataProcessingUnit_inferSatellite_SERIALIZE \
    aomsmethod->addAttribute("ImageData", x2String(ImageData));\
    aomsmethod->addAttribute("stormCoordinates", x2String(stormCoordinates));
#define SensingSystemPKG_DataProcessingUnit_inferUnderWater_SERIALIZE \
    aomsmethod->addAttribute("flowDirection", x2String(flowDirection));\
    aomsmethod->addAttribute("seismicVibration", x2String(seismicVibration));\
    aomsmethod->addAttribute("transmissionMode", x2String(transmissionMode));\
    aomsmethod->addAttribute("waterPressure", x2String(waterPressure));
#define SensingSystemPKG_DataProcessingUnit_DataProcessingUnit_SERIALIZE OM_NO_OP
//#]

//## package SensingSystemPKG

//## class DataProcessingUnit
DataProcessingUnit::DataProcessingUnit(void) {
    NOTIFY_CONSTRUCTOR(DataProcessingUnit, DataProcessingUnit(), 0, SensingSystemPKG_DataProcessingUnit_DataProcessingUnit_SERIALIZE);
}

DataProcessingUnit::~DataProcessingUnit(void) {
    NOTIFY_DESTRUCTOR(~DataProcessingUnit, true);
}

void DataProcessingUnit::inferAerial(double precipitationAmount, double stormPosition, double windSpeed, const RhpString& windDirection) {
    NOTIFY_OPERATION(inferAerial, inferAerial(double,double,double,const RhpString&), 4, SensingSystemPKG_DataProcessingUnit_inferAerial_SERIALIZE);
    //#[ operation inferAerial(double,double,double,RhpString)
    std::cout << "Testing for inferAerial Parameters \n";
    //#]
}

void DataProcessingUnit::inferSatellite(double ImageData, double stormCoordinates) {
    NOTIFY_OPERATION(inferSatellite, inferSatellite(double,double), 2, SensingSystemPKG_DataProcessingUnit_inferSatellite_SERIALIZE);
    //#[ operation inferSatellite(double,double)
    std::cout << "Leo is a god among men";
    //#]
}

void DataProcessingUnit::inferUnderWater(const RhpString& flowDirection, double seismicVibration, bool transmissionMode, double waterPressure) {
    NOTIFY_OPERATION(inferUnderWater, inferUnderWater(const RhpString&,double,bool,double), 4, SensingSystemPKG_DataProcessingUnit_inferUnderWater_SERIALIZE);
    //#[ operation inferUnderWater(RhpString,double,bool,double)
    std::cout << "Reached 2";
    //#]
}

const int DataProcessingUnit::getCurrentRiskScore(void) const {
    return currentRiskScore;
}

void DataProcessingUnit::setCurrentRiskScore(const int p_currentRiskScore) {
    currentRiskScore = p_currentRiskScore;
}

const int DataProcessingUnit::getDetectionThreshold(void) const {
    return detectionThreshold;
}

void DataProcessingUnit::setDetectionThreshold(const int p_detectionThreshold) {
    detectionThreshold = p_detectionThreshold;
}

const int DataProcessingUnit::getHeartbeatInterval(void) const {
    return heartbeatInterval;
}

void DataProcessingUnit::setHeartbeatInterval(const int p_heartbeatInterval) {
    heartbeatInterval = p_heartbeatInterval;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDataProcessingUnit::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("detectionThreshold", x2String(myReal->detectionThreshold));
    aomsAttributes->addAttribute("currentRiskScore", x2String(myReal->currentRiskScore));
    aomsAttributes->addAttribute("heartbeatInterval", x2String(myReal->heartbeatInterval));
}
//#]

IMPLEMENT_META_P(DataProcessingUnit, SensingSystemPKG, SensingSystemPKG, false, OMAnimatedDataProcessingUnit)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessingUnit.cpp
*********************************************************************/
