// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGWildCardDescriptor.h"

UFGWildCardDescriptor::UFGWildCardDescriptor() : Super() {
	this->mUseDisplayNameAndDescription = true;
	this->mDisplayName = NSLOCTEXT("WildCardDescriptor", "DisplayName", "*");
	this->mDescription = NSLOCTEXT("WildCardDescriptor", "Description", "Anything");
	this->mStackSize = EStackSize::SS_MEDIUM;
	this->mCanBeDiscarded = true;
	this->mForm = EResourceForm::RF_SOLID;
}
