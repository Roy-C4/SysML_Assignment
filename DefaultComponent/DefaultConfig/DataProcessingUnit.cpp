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
