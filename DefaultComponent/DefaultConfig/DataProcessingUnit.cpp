/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20221943
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessingUnit
//!	Generated Date	: Wed, 17, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\DataProcessingUnit.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DataProcessingUnit.h"
//## link itsCommunicationUnit
#include "CommunicationUnit.h"
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

#define SensingSystemPKG_DataProcessingUnit_InferSeismic_SERIALIZE OM_NO_OP

#define SensingSystemPKG_DataProcessingUnit_InferStormIntensity_SERIALIZE OM_NO_OP
//#]

//## package SensingSystemPKG

//## class DataProcessingUnit
//#[ ignore
DataProcessingUnit::p_DataProcessingUnit_C::p_DataProcessingUnit_C(void) : float_waterPressureInference_ProxyFlowPropertyInterface(), float_stormIntensityInference_ProxyFlowPropertyInterface(), float_seismicInference_ProxyFlowPropertyInterface(), _p_(0), itsFloat_seismicInference_ProxyFlowPropertyInterface(NULL), itsFloat_stormIntensityInference_ProxyFlowPropertyInterface(NULL), itsFloat_waterPressureInference_ProxyFlowPropertyInterface(NULL) {
}

DataProcessingUnit::p_DataProcessingUnit_C::~p_DataProcessingUnit_C(void) {
    cleanUpRelations();
}

float_seismicInference_ProxyFlowPropertyInterface* DataProcessingUnit::p_DataProcessingUnit_C::getItsFloat_seismicInference_ProxyFlowPropertyInterface(void) {
    return this;
}

float_stormIntensityInference_ProxyFlowPropertyInterface* DataProcessingUnit::p_DataProcessingUnit_C::getItsFloat_stormIntensityInference_ProxyFlowPropertyInterface(void) {
    return this;
}

float_waterPressureInference_ProxyFlowPropertyInterface* DataProcessingUnit::p_DataProcessingUnit_C::getItsFloat_waterPressureInference_ProxyFlowPropertyInterface(void) {
    return this;
}

DataProcessingUnit::p_DataProcessingUnit_C* DataProcessingUnit::p_DataProcessingUnit_C::getOutBound(void) {
    return this;
}

void DataProcessingUnit::p_DataProcessingUnit_C::setSeismicInference(float p_seismicInference) {
    
    if (itsFloat_seismicInference_ProxyFlowPropertyInterface != NULL) {
        itsFloat_seismicInference_ProxyFlowPropertyInterface->setSeismicInference(p_seismicInference);
    }
    
}

void DataProcessingUnit::p_DataProcessingUnit_C::setStormIntensityInference(float p_stormIntensityInference) {
    
    if (itsFloat_stormIntensityInference_ProxyFlowPropertyInterface != NULL) {
        itsFloat_stormIntensityInference_ProxyFlowPropertyInterface->setStormIntensityInference(p_stormIntensityInference);
    }
    
}

void DataProcessingUnit::p_DataProcessingUnit_C::setWaterPressureInference(float p_waterPressureInference) {
    
    if (itsFloat_waterPressureInference_ProxyFlowPropertyInterface != NULL) {
        itsFloat_waterPressureInference_ProxyFlowPropertyInterface->setWaterPressureInference(p_waterPressureInference);
    }
    
}

void DataProcessingUnit::p_DataProcessingUnit_C::setItsFloat_seismicInference_ProxyFlowPropertyInterface(float_seismicInference_ProxyFlowPropertyInterface* const p_float_seismicInference_ProxyFlowPropertyInterface) {
    itsFloat_seismicInference_ProxyFlowPropertyInterface = p_float_seismicInference_ProxyFlowPropertyInterface;
}

void DataProcessingUnit::p_DataProcessingUnit_C::setItsFloat_stormIntensityInference_ProxyFlowPropertyInterface(float_stormIntensityInference_ProxyFlowPropertyInterface* const p_float_stormIntensityInference_ProxyFlowPropertyInterface) {
    itsFloat_stormIntensityInference_ProxyFlowPropertyInterface = p_float_stormIntensityInference_ProxyFlowPropertyInterface;
}

void DataProcessingUnit::p_DataProcessingUnit_C::setItsFloat_waterPressureInference_ProxyFlowPropertyInterface(float_waterPressureInference_ProxyFlowPropertyInterface* const p_float_waterPressureInference_ProxyFlowPropertyInterface) {
    itsFloat_waterPressureInference_ProxyFlowPropertyInterface = p_float_waterPressureInference_ProxyFlowPropertyInterface;
}

void DataProcessingUnit::p_DataProcessingUnit_C::cleanUpRelations(void) {
    if(itsFloat_seismicInference_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_seismicInference_ProxyFlowPropertyInterface = NULL;
        }
    if(itsFloat_stormIntensityInference_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_stormIntensityInference_ProxyFlowPropertyInterface = NULL;
        }
    if(itsFloat_waterPressureInference_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_waterPressureInference_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

DataProcessingUnit::DataProcessingUnit(void) : itsCommunicationUnit(NULL) {
    NOTIFY_CONSTRUCTOR(DataProcessingUnit, DataProcessingUnit(), 0, SensingSystemPKG_DataProcessingUnit_DataProcessingUnit_SERIALIZE);
}

DataProcessingUnit::~DataProcessingUnit(void) {
    NOTIFY_DESTRUCTOR(~DataProcessingUnit, true);
    cleanUpRelations();
}

void DataProcessingUnit::InferSeismic(void) {
    NOTIFY_OPERATION(InferSeismic, InferSeismic(), 0, SensingSystemPKG_DataProcessingUnit_InferSeismic_SERIALIZE);
    //#[ operation InferSeismic()
    float params[2] = {0.001, 0.003};
    double sensorData[2] = {this->satelliteInference, 
    						this->waterPressureInference
    						};
    
    float activation = 0;
    
    for (int i = 0; i<2; i++) {
    	activation += params[i]*float(sensorData[i]);
    }
    
    setSeismicInference(1.0 / (1.0 + std::exp(-activation)));
    
    
    
    
    
    //#]
}

void DataProcessingUnit::InferStormIntensity(void) {
    NOTIFY_OPERATION(InferStormIntensity, InferStormIntensity(), 0, SensingSystemPKG_DataProcessingUnit_InferStormIntensity_SERIALIZE);
    //#[ operation InferStormIntensity()
    float params[2] = {0.008, 0.006};
    double sensorData[2] = {this->satelliteInference, 
    						this->aerialInference
    						};
    
    float activation = 0;
    
    for (int i = 0; i<2; i++) {
    	activation += params[i]*float(sensorData[i]);
    }
    
    setStormIntensityInference(1.0 / (1.0 + std::exp(-activation)));
    
    
    
    
    
    //#]
}

void DataProcessingUnit::inferAerial(double precipitationAmount, double stormPosition, double windSpeed, const RhpString& windDirection) {
    NOTIFY_OPERATION(inferAerial, inferAerial(double,double,double,const RhpString&), 4, SensingSystemPKG_DataProcessingUnit_inferAerial_SERIALIZE);
    //#[ operation inferAerial(double,double,double,RhpString)
    float params[3] = {0.001, 0.003, 0.0015};
    double sensorData[3] = {precipitationAmount, 
    						stormPosition, 
    						windSpeed};
    
    float activation = 0;
    
    for (int i = 0; i<3; i++) {
    	activation += params[i]*float(sensorData[i]);
    }
    
    this->aerialInference =  1.0 / (1.0 + std::exp(-activation));
    
    this->InferStormIntensity();
    //#]
}

void DataProcessingUnit::inferSatellite(double ImageData, double stormCoordinates) {
    NOTIFY_OPERATION(inferSatellite, inferSatellite(double,double), 2, SensingSystemPKG_DataProcessingUnit_inferSatellite_SERIALIZE);
    //#[ operation inferSatellite(double,double)
    float params[2] = {0.001, 0.003};
    double sensorData[2] = {ImageData, stormCoordinates};
    
    float activation = 0;
    
    for (int i = 0; i<2; i++) {
    	activation += params[i]*float(sensorData[i]);
    }
    
    this->satelliteInference =  1.0 / (1.0 + std::exp(-activation));
    
    this->InferStormIntensity();
    this->InferSeismic();
    
    
    
    //#]
}

void DataProcessingUnit::inferUnderWater(const RhpString& flowDirection, double seismicVibration, bool transmissionMode, double waterPressure) {
    NOTIFY_OPERATION(inferUnderWater, inferUnderWater(const RhpString&,double,bool,double), 4, SensingSystemPKG_DataProcessingUnit_inferUnderWater_SERIALIZE);
    //#[ operation inferUnderWater(RhpString,double,bool,double)
    float params[3] = {0.0015, 0.0027, 0.005};
    double sensorData[3] = {waterPressure, 
    						seismicVibration};
    
    float activation = 0;
    char* encodedDir[8] = {"NE", "N", "S", "W", "E", "SE", "NW", "SW"};
    float valuesDir[8] = {0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5};
    for (int i = 0; i<2; i++) {
    	activation += params[i]*float(sensorData[i]);
    }
    
    for(int i=0; i<8; i++){
    	if (encodedDir[i] == flowDirection){
    		activation += params[2]* valuesDir[i];
    	}
    }
    
    setWaterPressureInference(1.0 / (1.0 + std::exp(-activation)));
    
    
    this->InferSeismic();
    
    
    
    
    //#]
}

//#[ ignore
void DataProcessingUnit::setSeismicInference(float p_seismicInference) {
    if (seismicInference != p_seismicInference)  {
        seismicInference = p_seismicInference;
        FLOW_DATA_SEND(seismicInference, p_DataProcessingUnit, setSeismicInference, x2String);
    }
}

void DataProcessingUnit::setStormIntensityInference(float p_stormIntensityInference) {
    if (stormIntensityInference != p_stormIntensityInference)  {
        stormIntensityInference = p_stormIntensityInference;
        FLOW_DATA_SEND(stormIntensityInference, p_DataProcessingUnit, setStormIntensityInference, x2String);
    }
}

void DataProcessingUnit::setWaterPressureInference(float p_waterPressureInference) {
    if (waterPressureInference != p_waterPressureInference)  {
        waterPressureInference = p_waterPressureInference;
        FLOW_DATA_SEND(waterPressureInference, p_DataProcessingUnit, setWaterPressureInference, x2String);
    }
}
//#]

DataProcessingUnit::p_DataProcessingUnit_C* DataProcessingUnit::getP_DataProcessingUnit(void) const {
    return (DataProcessingUnit::p_DataProcessingUnit_C*) &p_DataProcessingUnit;
}

DataProcessingUnit::p_DataProcessingUnit_C* DataProcessingUnit::get_p_DataProcessingUnit(void) const {
    return (DataProcessingUnit::p_DataProcessingUnit_C*) &p_DataProcessingUnit;
}

const float DataProcessingUnit::getAerialInference(void) const {
    return aerialInference;
}

void DataProcessingUnit::setAerialInference(const float p_aerialInference) {
    aerialInference = p_aerialInference;
}

const int DataProcessingUnit::getCurrentRiskScore(void) const {
    return currentRiskScore;
}

void DataProcessingUnit::setCurrentRiskScore(const int p_currentRiskScore) {
    currentRiskScore = p_currentRiskScore;
}

const int DataProcessingUnit::getHeartbeatInterval(void) const {
    return heartbeatInterval;
}

void DataProcessingUnit::setHeartbeatInterval(const int p_heartbeatInterval) {
    heartbeatInterval = p_heartbeatInterval;
}

const float DataProcessingUnit::getSatelliteInference(void) const {
    return satelliteInference;
}

void DataProcessingUnit::setSatelliteInference(const float p_satelliteInference) {
    satelliteInference = p_satelliteInference;
}

const float DataProcessingUnit::getSeismicActivityThreshold(void) const {
    return seismicActivityThreshold;
}

void DataProcessingUnit::setSeismicActivityThreshold(const float p_seismicActivityThreshold) {
    seismicActivityThreshold = p_seismicActivityThreshold;
}

const float DataProcessingUnit::getSeismicInference(void) const {
    return seismicInference;
}

const float DataProcessingUnit::getStormIntensityInference(void) const {
    return stormIntensityInference;
}

const int DataProcessingUnit::getStormIntensityThreshold(void) const {
    return stormIntensityThreshold;
}

void DataProcessingUnit::setStormIntensityThreshold(const int p_stormIntensityThreshold) {
    stormIntensityThreshold = p_stormIntensityThreshold;
}

const float DataProcessingUnit::getWaterPressureInference(void) const {
    return waterPressureInference;
}

const float DataProcessingUnit::getWaterPressureThreshold(void) const {
    return waterPressureThreshold;
}

void DataProcessingUnit::setWaterPressureThreshold(const float p_waterPressureThreshold) {
    waterPressureThreshold = p_waterPressureThreshold;
}

const CommunicationUnit* DataProcessingUnit::getItsCommunicationUnit(void) const {
    return itsCommunicationUnit;
}

void DataProcessingUnit::setItsCommunicationUnit(CommunicationUnit* const p_CommunicationUnit) {
    if(p_CommunicationUnit != NULL)
        {
            p_CommunicationUnit->_setItsDataProcessingUnit(this);
        }
    _setItsCommunicationUnit(p_CommunicationUnit);
}

void DataProcessingUnit::cleanUpRelations(void) {
    if(itsCommunicationUnit != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunicationUnit");
            const DataProcessingUnit* p_DataProcessingUnit = itsCommunicationUnit->getItsDataProcessingUnit();
            if(p_DataProcessingUnit != NULL)
                {
                    itsCommunicationUnit->__setItsDataProcessingUnit(NULL);
                }
            itsCommunicationUnit = NULL;
        }
}

void DataProcessingUnit::__setItsCommunicationUnit(CommunicationUnit* const p_CommunicationUnit) {
    itsCommunicationUnit = p_CommunicationUnit;
    if(p_CommunicationUnit != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCommunicationUnit", p_CommunicationUnit, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCommunicationUnit");
        }
}

void DataProcessingUnit::_setItsCommunicationUnit(CommunicationUnit* const p_CommunicationUnit) {
    if(itsCommunicationUnit != NULL)
        {
            itsCommunicationUnit->__setItsDataProcessingUnit(NULL);
        }
    __setItsCommunicationUnit(p_CommunicationUnit);
}

void DataProcessingUnit::_clearItsCommunicationUnit(void) {
    NOTIFY_RELATION_CLEARED("itsCommunicationUnit");
    itsCommunicationUnit = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDataProcessingUnit::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("stormIntensityThreshold", x2String(myReal->stormIntensityThreshold));
    aomsAttributes->addAttribute("currentRiskScore", x2String(myReal->currentRiskScore));
    aomsAttributes->addAttribute("heartbeatInterval", x2String(myReal->heartbeatInterval));
    aomsAttributes->addAttribute("aerialInference", x2String(myReal->aerialInference));
    aomsAttributes->addAttribute("waterPressureInference", x2String(myReal->waterPressureInference));
    aomsAttributes->addAttribute("satelliteInference", x2String(myReal->satelliteInference));
    aomsAttributes->addAttribute("stormIntensityInference", x2String(myReal->stormIntensityInference));
    aomsAttributes->addAttribute("seismicInference", x2String(myReal->seismicInference));
    aomsAttributes->addAttribute("waterPressureThreshold", x2String(myReal->waterPressureThreshold));
    aomsAttributes->addAttribute("seismicActivityThreshold", x2String(myReal->seismicActivityThreshold));
}

void OMAnimatedDataProcessingUnit::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsCommunicationUnit", false, true);
    if(myReal->itsCommunicationUnit)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunicationUnit);
        }
}
//#]

IMPLEMENT_META_P(DataProcessingUnit, SensingSystemPKG, SensingSystemPKG, false, OMAnimatedDataProcessingUnit)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessingUnit.cpp
*********************************************************************/
