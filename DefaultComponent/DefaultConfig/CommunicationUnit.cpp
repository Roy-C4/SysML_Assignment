/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20221943
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommunicationUnit
//!	Generated Date	: Wed, 17, Dec 2025  
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
//#]

//## package SensingSystemPKG

//## class CommunicationUnit
//#[ ignore
CommunicationUnit::p_DataProcessingUnit_C::p_DataProcessingUnit_C(void) : float_waterPressureInference_ProxyFlowPropertyInterface(), float_stormIntensityInference_ProxyFlowPropertyInterface(), float_seismicInference_ProxyFlowPropertyInterface(), _p_(0), itsFloat_seismicInference_ProxyFlowPropertyInterface(NULL), itsFloat_stormIntensityInference_ProxyFlowPropertyInterface(NULL), itsFloat_waterPressureInference_ProxyFlowPropertyInterface(NULL) {
}

CommunicationUnit::p_DataProcessingUnit_C::~p_DataProcessingUnit_C(void) {
    cleanUpRelations();
}

void CommunicationUnit::p_DataProcessingUnit_C::connectCommunicationUnit(CommunicationUnit* part) {
    setItsFloat_waterPressureInference_ProxyFlowPropertyInterface(part);
    setItsFloat_stormIntensityInference_ProxyFlowPropertyInterface(part);
    setItsFloat_seismicInference_ProxyFlowPropertyInterface(part);
    
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

void CommunicationUnit::p_DataProcessingUnit_C::setWaterPressureInference(float p_waterPressureInference) {
    
    if (itsFloat_waterPressureInference_ProxyFlowPropertyInterface != NULL) {
        itsFloat_waterPressureInference_ProxyFlowPropertyInterface->setWaterPressureInference(p_waterPressureInference);
    }
    
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

void CommunicationUnit::p_DataProcessingUnit_C::cleanUpRelations(void) {
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

CommunicationUnit::CommunicationUnit(void) : float_waterPressureInference_ProxyFlowPropertyInterface(), float_stormIntensityInference_ProxyFlowPropertyInterface(), float_seismicInference_ProxyFlowPropertyInterface(), itsDataProcessingUnit(NULL) {
    NOTIFY_CONSTRUCTOR(CommunicationUnit, CommunicationUnit(), 0, SensingSystemPKG_CommunicationUnit_CommunicationUnit_SERIALIZE);
    initRelations();
}

CommunicationUnit::~CommunicationUnit(void) {
    NOTIFY_DESTRUCTOR(~CommunicationUnit, true);
    cleanUpRelations();
}

//#[ ignore
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

const int CommunicationUnit::getActiveChannels(void) const {
    return activeChannels;
}

void CommunicationUnit::setActiveChannels(const int p_activeChannels) {
    activeChannels = p_activeChannels;
}

const float CommunicationUnit::getSeismicInference(void) const {
    return seismicInference;
}

const float CommunicationUnit::getStormIntensityInference(void) const {
    return stormIntensityInference;
}

const double CommunicationUnit::getTargetRegionCoordinates(void) const {
    return targetRegionCoordinates;
}

void CommunicationUnit::setTargetRegionCoordinates(const double p_targetRegionCoordinates) {
    targetRegionCoordinates = p_targetRegionCoordinates;
}

const float CommunicationUnit::getWaterPressureInference(void) const {
    return waterPressureInference;
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
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommunicationUnit.cpp
*********************************************************************/
