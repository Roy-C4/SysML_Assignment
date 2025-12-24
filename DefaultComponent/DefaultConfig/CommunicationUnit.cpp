/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20221943
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommunicationUnit
//!	Generated Date	: Wed, 24, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\CommunicationUnit.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CommunicationUnit.h"
//## link itsDataProcessingUnit
#include "DataProcessingUnit.h"
//#[ ignore
#define SensingSystemPKG_CommunicationUnit_CommunicationUnit_SERIALIZE OM_NO_OP

#define SensingSystemPKG_CommunicationUnit_Operation_13_SERIALIZE OM_NO_OP

#define SensingSystemPKG_CommunicationUnit_communicateGov_SERIALIZE OM_NO_OP

#define SensingSystemPKG_CommunicationUnit_communicateMessage_SERIALIZE OM_NO_OP

#define SensingSystemPKG_CommunicationUnit_communicatePublic_SERIALIZE OM_NO_OP

#define OMAnim_SensingSystemPKG_CommunicationUnit_setSeismicThreshold_float_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_seismicThreshold)

#define OMAnim_SensingSystemPKG_CommunicationUnit_setSeismicThreshold_float_SERIALIZE_RET_VAL

#define OMAnim_SensingSystemPKG_CommunicationUnit_setStormIntensityThreshold_float_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_stormIntensityThreshold)

#define OMAnim_SensingSystemPKG_CommunicationUnit_setStormIntensityThreshold_float_SERIALIZE_RET_VAL

#define OMAnim_SensingSystemPKG_CommunicationUnit_setWaterPressureThreshold_float_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_waterPressureThreshold)

#define OMAnim_SensingSystemPKG_CommunicationUnit_setWaterPressureThreshold_float_SERIALIZE_RET_VAL
//#]

//## package SensingSystemPKG

//## class CommunicationUnit
//#[ ignore
CommunicationUnit::p_DataProcessingUnit_C::p_DataProcessingUnit_C(void) : float_currentRiskScore_ProxyFlowPropertyInterface(), float_waterPressureInference_ProxyFlowPropertyInterface(), float_stormIntensityInference_ProxyFlowPropertyInterface(), float_seismicInference_ProxyFlowPropertyInterface(), int_targetRegionCoordinates_ProxyFlowPropertyInterface(), _p_(0), itsFloat_currentRiskScore_ProxyFlowPropertyInterface(NULL), itsFloat_seismicInference_ProxyFlowPropertyInterface(NULL), itsFloat_stormIntensityInference_ProxyFlowPropertyInterface(NULL), itsFloat_waterPressureInference_ProxyFlowPropertyInterface(NULL), itsInt_targetRegionCoordinates_ProxyFlowPropertyInterface(NULL) {
}

CommunicationUnit::p_DataProcessingUnit_C::~p_DataProcessingUnit_C(void) {
    cleanUpRelations();
}

void CommunicationUnit::p_DataProcessingUnit_C::connectCommunicationUnit(CommunicationUnit* part) {
    setItsFloat_currentRiskScore_ProxyFlowPropertyInterface(part);
    setItsFloat_waterPressureInference_ProxyFlowPropertyInterface(part);
    setItsFloat_stormIntensityInference_ProxyFlowPropertyInterface(part);
    setItsFloat_seismicInference_ProxyFlowPropertyInterface(part);
    setItsInt_targetRegionCoordinates_ProxyFlowPropertyInterface(part);
    
}

float_currentRiskScore_ProxyFlowPropertyInterface* CommunicationUnit::p_DataProcessingUnit_C::getItsFloat_currentRiskScore_ProxyFlowPropertyInterface(void) {
    return this;
}

float_seismicInference_ProxyFlowPropertyInterface* CommunicationUnit::p_DataProcessingUnit_C::getItsFloat_seismicInference_ProxyFlowPropertyInterface(void) {
    return this;
}

float_stormIntensityInference_ProxyFlowPropertyInterface* CommunicationUnit::p_DataProcessingUnit_C::getItsFloat_stormIntensityInference_ProxyFlowPropertyInterface(void) {
    return this;
}

float_waterPressureInference_ProxyFlowPropertyInterface* CommunicationUnit::p_DataProcessingUnit_C::getItsFloat_waterPressureInference_ProxyFlowPropertyInterface(void) {
    return this;
}

int_targetRegionCoordinates_ProxyFlowPropertyInterface* CommunicationUnit::p_DataProcessingUnit_C::getItsInt_targetRegionCoordinates_ProxyFlowPropertyInterface(void) {
    return this;
}

void CommunicationUnit::p_DataProcessingUnit_C::setCurrentRiskScore(float p_currentRiskScore) {
    
    if (itsFloat_currentRiskScore_ProxyFlowPropertyInterface != NULL) {
        itsFloat_currentRiskScore_ProxyFlowPropertyInterface->setCurrentRiskScore(p_currentRiskScore);
    }
    
}

void CommunicationUnit::p_DataProcessingUnit_C::setSeismicInference(float p_seismicInference) {
    
    if (itsFloat_seismicInference_ProxyFlowPropertyInterface != NULL) {
        itsFloat_seismicInference_ProxyFlowPropertyInterface->setSeismicInference(p_seismicInference);
    }
    
}

void CommunicationUnit::p_DataProcessingUnit_C::setStormIntensityInference(float p_stormIntensityInference) {
    
    if (itsFloat_stormIntensityInference_ProxyFlowPropertyInterface != NULL) {
        itsFloat_stormIntensityInference_ProxyFlowPropertyInterface->setStormIntensityInference(p_stormIntensityInference);
    }
    
}

void CommunicationUnit::p_DataProcessingUnit_C::setTargetRegionCoordinates(int p_targetRegionCoordinates) {
    
    if (itsInt_targetRegionCoordinates_ProxyFlowPropertyInterface != NULL) {
        itsInt_targetRegionCoordinates_ProxyFlowPropertyInterface->setTargetRegionCoordinates(p_targetRegionCoordinates);
    }
    
}

void CommunicationUnit::p_DataProcessingUnit_C::setWaterPressureInference(float p_waterPressureInference) {
    
    if (itsFloat_waterPressureInference_ProxyFlowPropertyInterface != NULL) {
        itsFloat_waterPressureInference_ProxyFlowPropertyInterface->setWaterPressureInference(p_waterPressureInference);
    }
    
}

void CommunicationUnit::p_DataProcessingUnit_C::setItsFloat_currentRiskScore_ProxyFlowPropertyInterface(float_currentRiskScore_ProxyFlowPropertyInterface* const p_float_currentRiskScore_ProxyFlowPropertyInterface) {
    itsFloat_currentRiskScore_ProxyFlowPropertyInterface = p_float_currentRiskScore_ProxyFlowPropertyInterface;
}

void CommunicationUnit::p_DataProcessingUnit_C::setItsFloat_seismicInference_ProxyFlowPropertyInterface(float_seismicInference_ProxyFlowPropertyInterface* const p_float_seismicInference_ProxyFlowPropertyInterface) {
    itsFloat_seismicInference_ProxyFlowPropertyInterface = p_float_seismicInference_ProxyFlowPropertyInterface;
}

void CommunicationUnit::p_DataProcessingUnit_C::setItsFloat_stormIntensityInference_ProxyFlowPropertyInterface(float_stormIntensityInference_ProxyFlowPropertyInterface* const p_float_stormIntensityInference_ProxyFlowPropertyInterface) {
    itsFloat_stormIntensityInference_ProxyFlowPropertyInterface = p_float_stormIntensityInference_ProxyFlowPropertyInterface;
}

void CommunicationUnit::p_DataProcessingUnit_C::setItsFloat_waterPressureInference_ProxyFlowPropertyInterface(float_waterPressureInference_ProxyFlowPropertyInterface* const p_float_waterPressureInference_ProxyFlowPropertyInterface) {
    itsFloat_waterPressureInference_ProxyFlowPropertyInterface = p_float_waterPressureInference_ProxyFlowPropertyInterface;
}

void CommunicationUnit::p_DataProcessingUnit_C::setItsInt_targetRegionCoordinates_ProxyFlowPropertyInterface(int_targetRegionCoordinates_ProxyFlowPropertyInterface* const p_int_targetRegionCoordinates_ProxyFlowPropertyInterface) {
    itsInt_targetRegionCoordinates_ProxyFlowPropertyInterface = p_int_targetRegionCoordinates_ProxyFlowPropertyInterface;
}

void CommunicationUnit::p_DataProcessingUnit_C::cleanUpRelations(void) {
    if(itsFloat_currentRiskScore_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_currentRiskScore_ProxyFlowPropertyInterface = NULL;
        }
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
    if(itsInt_targetRegionCoordinates_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_targetRegionCoordinates_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

CommunicationUnit::CommunicationUnit(void) : float_currentRiskScore_ProxyFlowPropertyInterface(), float_waterPressureInference_ProxyFlowPropertyInterface(), float_stormIntensityInference_ProxyFlowPropertyInterface(), float_seismicInference_ProxyFlowPropertyInterface(), int_targetRegionCoordinates_ProxyFlowPropertyInterface(), ledLight(false), riskThreshold(0.517), seismicThreshold(0.5), stormIntensityThreshold(0.5), waterPressureThreshold(0.5), itsDataProcessingUnit(NULL) {
    NOTIFY_CONSTRUCTOR(CommunicationUnit, CommunicationUnit(), 0, SensingSystemPKG_CommunicationUnit_CommunicationUnit_SERIALIZE);
    initRelations();
}

CommunicationUnit::~CommunicationUnit(void) {
    NOTIFY_DESTRUCTOR(~CommunicationUnit, true);
    cleanUpRelations();
}

void CommunicationUnit::Operation_13(void) {
    NOTIFY_OPERATION(Operation_13, Operation_13(), 0, SensingSystemPKG_CommunicationUnit_Operation_13_SERIALIZE);
    //#[ operation Operation_13()
    //#]
}

void CommunicationUnit::communicateGov(void) {
    NOTIFY_OPERATION(communicateGov, communicateGov(), 0, SensingSystemPKG_CommunicationUnit_communicateGov_SERIALIZE);
    //#[ operation communicateGov()
    /*char* govMessage = "";
    
    if (this->stormIntensityInference >= this->stormIntensityThreshold && this->waterPressureInference >= this->waterPressureThreshold && this->seismicInference >= this->seismicThreshold){
    	govMessage = "Instruct your citizens to pray.";
    } else if (this->stormIntensityInference >= this->stormIntensityThreshold) {
    	govMessage = "Possible storm detected, enact emergency protocol 1.";
    } else if (this->waterPressureInference >= this->waterPressureThreshold || this->seismicInference >= this->seismicThreshold) {
    	govMessage = "Possible tsunami detected, enact emergency protocol 2.";
    }
    else {
    	govMessage = "Everything is FiNe!";
    
    } 
    
    if (this->currentRiskScore>= this->riskThreshold){
    	this->ledLight = true;
    }
    else{
    	this->ledLight = false;
    }
    
    this->govMessage = govMessage;*/
    
    
    
    
    
    char* govMessage = "";
    
    if (this->stormIntensityInference >= this->stormIntensityThreshold && 
        this->waterPressureInference >= this->waterPressureThreshold && 
        this->seismicInference >= this->seismicThreshold) {
        
        govMessage = "Instruct your citizens to pray.";
        this->ledLight = true;  
    } 
    else if (this->stormIntensityInference >= this->stormIntensityThreshold) {
        govMessage = "Possible storm detected, enact emergency protocol 1.";
        this->ledLight = true;  
    } 
    else if (this->waterPressureInference >= this->waterPressureThreshold || 
             this->seismicInference >= this->seismicThreshold) {
        govMessage = "Possible tsunami detected, enact emergency protocol 2.";
        this->ledLight = true;  
    }
    else {
        govMessage = "Everything is FiNe!";
        this->ledLight = false; 
    } 
    
    this->govMessage = govMessage;
    
    
    //#]
}

void CommunicationUnit::communicateMessage(void) {
    NOTIFY_OPERATION(communicateMessage, communicateMessage(), 0, SensingSystemPKG_CommunicationUnit_communicateMessage_SERIALIZE);
    //#[ operation communicateMessage()
    this->communicatePublic();
    this->communicateGov();
    //#]
}

void CommunicationUnit::communicatePublic(void) {
    NOTIFY_OPERATION(communicatePublic, communicatePublic(), 0, SensingSystemPKG_CommunicationUnit_communicatePublic_SERIALIZE);
    //#[ operation communicatePublic()
    char* lang[2] = {"English", "Romanian"};
    char* publicMessage = "";
    float publicRisk = 0.0;
    char* publicMessageLang = "";
    
    if (this->stormIntensityInference >= this->stormIntensityThreshold && this->waterPressureInference >= this->waterPressureThreshold && this->seismicInference >= this->seismicThreshold) {
    	publicMessage = "Pray.";
    } else if (this->stormIntensityInference >= this->stormIntensityThreshold) {
    	publicMessage = "Possible storm detected, please remain indoors.";
    } else if (this->seismicInference >= this->seismicThreshold || this->waterPressureInference >= this->waterPressureThreshold) {
    	publicMessage = "Possible tsunami detected, please evacuate.";
    }
    
    this->publicMessage = publicMessage;
    
    if (publicMessage[0] != '\0') {
        this->publicRisk = this->currentRiskScore;
        this->publicMessageLang = lang[this->targetRegionCoordinates];
    } 
    else {
        this->publicRisk = 0.0; 
        this->publicMessageLang = ""; 
    }
    //#]
}

//#[ ignore
void CommunicationUnit::setCurrentRiskScore(float p_currentRiskScore) {
    if (currentRiskScore != p_currentRiskScore) {
        currentRiskScore = p_currentRiskScore;
        FLOW_DATA_RECEIVE("currentRiskScore", currentRiskScore, x2String);
    }
    
}

void CommunicationUnit::setSeismicInference(float p_seismicInference) {
    if (seismicInference != p_seismicInference) {
        seismicInference = p_seismicInference;
        FLOW_DATA_RECEIVE("seismicInference", seismicInference, x2String);
    }
    
}

void CommunicationUnit::setStormIntensityInference(float p_stormIntensityInference) {
    if (stormIntensityInference != p_stormIntensityInference) {
        stormIntensityInference = p_stormIntensityInference;
        FLOW_DATA_RECEIVE("stormIntensityInference", stormIntensityInference, x2String);
    }
    
}

void CommunicationUnit::setTargetRegionCoordinates(int p_targetRegionCoordinates) {
    if (targetRegionCoordinates != p_targetRegionCoordinates) {
        targetRegionCoordinates = p_targetRegionCoordinates;
        FLOW_DATA_RECEIVE("targetRegionCoordinates", targetRegionCoordinates, x2String);
    }
    
}

void CommunicationUnit::setWaterPressureInference(float p_waterPressureInference) {
    if (waterPressureInference != p_waterPressureInference) {
        waterPressureInference = p_waterPressureInference;
        FLOW_DATA_RECEIVE("waterPressureInference", waterPressureInference, x2String);
    }
    
}
//#]

CommunicationUnit::p_DataProcessingUnit_C* CommunicationUnit::getP_DataProcessingUnit(void) const {
    return (CommunicationUnit::p_DataProcessingUnit_C*) &p_DataProcessingUnit;
}

CommunicationUnit::p_DataProcessingUnit_C* CommunicationUnit::get_p_DataProcessingUnit(void) const {
    return (CommunicationUnit::p_DataProcessingUnit_C*) &p_DataProcessingUnit;
}

const RhpString CommunicationUnit::getActiveChannels(void) const {
    return activeChannels;
}

void CommunicationUnit::setActiveChannels(const RhpString p_activeChannels) {
    activeChannels = p_activeChannels;
}

const float CommunicationUnit::getCurrentRiskScore(void) const {
    return currentRiskScore;
}

const RhpString CommunicationUnit::getGovMessage(void) const {
    return govMessage;
}

void CommunicationUnit::setGovMessage(const RhpString p_govMessage) {
    govMessage = p_govMessage;
    NOTIFY_SET_OPERATION;
}

const bool CommunicationUnit::getLedLight(void) const {
    return ledLight;
}

void CommunicationUnit::setLedLight(const bool p_ledLight) {
    ledLight = p_ledLight;
    NOTIFY_SET_OPERATION;
}

const RhpString CommunicationUnit::getPublicMessage(void) const {
    return publicMessage;
}

void CommunicationUnit::setPublicMessage(const RhpString p_publicMessage) {
    publicMessage = p_publicMessage;
    NOTIFY_SET_OPERATION;
}

const RhpString CommunicationUnit::getPublicMessageLang(void) const {
    return publicMessageLang;
}

void CommunicationUnit::setPublicMessageLang(const RhpString p_publicMessageLang) {
    publicMessageLang = p_publicMessageLang;
    NOTIFY_SET_OPERATION;
}

const float CommunicationUnit::getPublicRisk(void) const {
    return publicRisk;
}

void CommunicationUnit::setPublicRisk(const float p_publicRisk) {
    publicRisk = p_publicRisk;
    NOTIFY_SET_OPERATION;
}

const float CommunicationUnit::getRiskThreshold(void) const {
    return riskThreshold;
}

void CommunicationUnit::setRiskThreshold(const float p_riskThreshold) {
    riskThreshold = p_riskThreshold;
}

const float CommunicationUnit::getSeismicInference(void) const {
    return seismicInference;
}

const float CommunicationUnit::getSeismicThreshold(void) const {
    return seismicThreshold;
}

void CommunicationUnit::setSeismicThreshold(const float p_seismicThreshold) {
    seismicThreshold = p_seismicThreshold;
    NOTIFY_SET_OPERATION;
}

const float CommunicationUnit::getStormIntensityInference(void) const {
    return stormIntensityInference;
}

const float CommunicationUnit::getStormIntensityThreshold(void) const {
    return stormIntensityThreshold;
}

void CommunicationUnit::setStormIntensityThreshold(const float p_stormIntensityThreshold) {
    stormIntensityThreshold = p_stormIntensityThreshold;
    NOTIFY_SET_OPERATION;
}

const int CommunicationUnit::getTargetRegionCoordinates(void) const {
    return targetRegionCoordinates;
}

const float CommunicationUnit::getWaterPressureInference(void) const {
    return waterPressureInference;
}

const float CommunicationUnit::getWaterPressureThreshold(void) const {
    return waterPressureThreshold;
}

void CommunicationUnit::setWaterPressureThreshold(const float p_waterPressureThreshold) {
    waterPressureThreshold = p_waterPressureThreshold;
    NOTIFY_SET_OPERATION;
}

const DataProcessingUnit* CommunicationUnit::getItsDataProcessingUnit(void) const {
    return itsDataProcessingUnit;
}

void CommunicationUnit::setItsDataProcessingUnit(DataProcessingUnit* const p_DataProcessingUnit) {
    if(p_DataProcessingUnit != NULL)
        {
            p_DataProcessingUnit->_setItsCommunicationUnit(this);
        }
    _setItsDataProcessingUnit(p_DataProcessingUnit);
}

void CommunicationUnit::initRelations(void) {
    if (get_p_DataProcessingUnit() != NULL) {
        get_p_DataProcessingUnit()->connectCommunicationUnit(this);
    }
}

void CommunicationUnit::cleanUpRelations(void) {
    if(itsDataProcessingUnit != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataProcessingUnit");
            const CommunicationUnit* p_CommunicationUnit = itsDataProcessingUnit->getItsCommunicationUnit();
            if(p_CommunicationUnit != NULL)
                {
                    itsDataProcessingUnit->__setItsCommunicationUnit(NULL);
                }
            itsDataProcessingUnit = NULL;
        }
}

void CommunicationUnit::__setItsDataProcessingUnit(DataProcessingUnit* const p_DataProcessingUnit) {
    itsDataProcessingUnit = p_DataProcessingUnit;
    if(p_DataProcessingUnit != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDataProcessingUnit", p_DataProcessingUnit, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDataProcessingUnit");
        }
}

void CommunicationUnit::_setItsDataProcessingUnit(DataProcessingUnit* const p_DataProcessingUnit) {
    if(itsDataProcessingUnit != NULL)
        {
            itsDataProcessingUnit->__setItsCommunicationUnit(NULL);
        }
    __setItsDataProcessingUnit(p_DataProcessingUnit);
}

void CommunicationUnit::_clearItsDataProcessingUnit(void) {
    NOTIFY_RELATION_CLEARED("itsDataProcessingUnit");
    itsDataProcessingUnit = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCommunicationUnit::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("activeChannels", x2String(myReal->activeChannels));
    aomsAttributes->addAttribute("targetRegionCoordinates", x2String(myReal->targetRegionCoordinates));
    aomsAttributes->addAttribute("seismicInference", x2String(myReal->seismicInference));
    aomsAttributes->addAttribute("waterPressureInference", x2String(myReal->waterPressureInference));
    aomsAttributes->addAttribute("stormIntensityInference", x2String(myReal->stormIntensityInference));
    aomsAttributes->addAttribute("currentRiskScore", x2String(myReal->currentRiskScore));
    aomsAttributes->addAttribute("publicMessageLang", x2String(myReal->publicMessageLang));
    aomsAttributes->addAttribute("publicMessage", x2String(myReal->publicMessage));
    aomsAttributes->addAttribute("publicRisk", x2String(myReal->publicRisk));
    aomsAttributes->addAttribute("waterPressureThreshold", x2String(myReal->waterPressureThreshold));
    aomsAttributes->addAttribute("stormIntensityThreshold", x2String(myReal->stormIntensityThreshold));
    aomsAttributes->addAttribute("seismicThreshold", x2String(myReal->seismicThreshold));
    aomsAttributes->addAttribute("govMessage", x2String(myReal->govMessage));
    aomsAttributes->addAttribute("riskThreshold", x2String(myReal->riskThreshold));
    aomsAttributes->addAttribute("ledLight", x2String(myReal->ledLight));
}

void OMAnimatedCommunicationUnit::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDataProcessingUnit", false, true);
    if(myReal->itsDataProcessingUnit)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataProcessingUnit);
        }
}
//#]

IMPLEMENT_META_P(CommunicationUnit, SensingSystemPKG, SensingSystemPKG, false, OMAnimatedCommunicationUnit)

IMPLEMENT_META_OP(OMAnimatedCommunicationUnit, SensingSystemPKG_CommunicationUnit_setSeismicThreshold_float, "setSeismicThreshold", FALSE, "setSeismicThreshold(float)", 1)

IMPLEMENT_OP_CALL(SensingSystemPKG_CommunicationUnit_setSeismicThreshold_float, CommunicationUnit, setSeismicThreshold(p_seismicThreshold), NO_OP())

IMPLEMENT_META_OP(OMAnimatedCommunicationUnit, SensingSystemPKG_CommunicationUnit_setStormIntensityThreshold_float, "setStormIntensityThreshold", FALSE, "setStormIntensityThreshold(float)", 1)

IMPLEMENT_OP_CALL(SensingSystemPKG_CommunicationUnit_setStormIntensityThreshold_float, CommunicationUnit, setStormIntensityThreshold(p_stormIntensityThreshold), NO_OP())

IMPLEMENT_META_OP(OMAnimatedCommunicationUnit, SensingSystemPKG_CommunicationUnit_setWaterPressureThreshold_float, "setWaterPressureThreshold", FALSE, "setWaterPressureThreshold(float)", 1)

IMPLEMENT_OP_CALL(SensingSystemPKG_CommunicationUnit_setWaterPressureThreshold_float, CommunicationUnit, setWaterPressureThreshold(p_waterPressureThreshold), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommunicationUnit.cpp
*********************************************************************/
