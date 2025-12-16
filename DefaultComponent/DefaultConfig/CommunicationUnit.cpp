/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20221943
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommunicationUnit
//!	Generated Date	: Tue, 16, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\CommunicationUnit.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CommunicationUnit.h"
//#[ ignore
#define SensingSystemPKG_CommunicationUnit_CommunicationUnit_SERIALIZE OM_NO_OP
//#]

//## package SensingSystemPKG

//## class CommunicationUnit
CommunicationUnit::CommunicationUnit(void) {
    NOTIFY_CONSTRUCTOR(CommunicationUnit, CommunicationUnit(), 0, SensingSystemPKG_CommunicationUnit_CommunicationUnit_SERIALIZE);
}

CommunicationUnit::~CommunicationUnit(void) {
    NOTIFY_DESTRUCTOR(~CommunicationUnit, true);
}

const int CommunicationUnit::getActiveChannels(void) const {
    return activeChannels;
}

void CommunicationUnit::setActiveChannels(const int p_activeChannels) {
    activeChannels = p_activeChannels;
}

const double CommunicationUnit::getTargetRegionCoordinates(void) const {
    return targetRegionCoordinates;
}

void CommunicationUnit::setTargetRegionCoordinates(const double p_targetRegionCoordinates) {
    targetRegionCoordinates = p_targetRegionCoordinates;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCommunicationUnit::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("activeChannels", x2String(myReal->activeChannels));
    aomsAttributes->addAttribute("targetRegionCoordinates", x2String(myReal->targetRegionCoordinates));
}
//#]

IMPLEMENT_META_P(CommunicationUnit, SensingSystemPKG, SensingSystemPKG, false, OMAnimatedCommunicationUnit)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommunicationUnit.cpp
*********************************************************************/
