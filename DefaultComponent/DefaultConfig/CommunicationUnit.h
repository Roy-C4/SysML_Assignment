/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20221943
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommunicationUnit
//!	Generated Date	: Tue, 16, Dec 2025  
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
//## package SensingSystemPKG

//## class CommunicationUnit
class CommunicationUnit {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCommunicationUnit;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CommunicationUnit(void);
    
    //## auto_generated
    ~CommunicationUnit(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const int getActiveChannels(void) const;
    
    //## auto_generated
    void setActiveChannels(const int p_activeChannels);
    
    //## auto_generated
    const double getTargetRegionCoordinates(void) const;
    
    //## auto_generated
    void setTargetRegionCoordinates(const double p_targetRegionCoordinates);
    
    ////    Attributes    ////

private :

    int activeChannels;		//## attribute activeChannels
    
    double targetRegionCoordinates;		//## attribute targetRegionCoordinates
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCommunicationUnit : virtual public AOMInstance {
    DECLARE_META(CommunicationUnit, OMAnimatedCommunicationUnit)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommunicationUnit.h
*********************************************************************/
