#include "JPetGeantEventInformation.h"

ClassImp(JPetGeantEventInformation)


JPetGeantEventInformation::JPetGeantEventInformation()
    :fVtxPosition(0,0,0), fVtxPromptPosition(0,0,0), fGenGammaNum(fMaxGammaNumberIndex), fnRun(0), fLifetime(0), fPromptLifetime(0)
{}


JPetGeantEventInformation::~JPetGeantEventInformation()
{}

void JPetGeantEventInformation::Clear()
{
    fGenGammaNum.ResetAllBits();  
    fnRun = 0;
    fLifetime = 0.;
    fPromptLifetime = 0.;
    fVtxPosition.SetXYZ(0,0,0);
    fVtxPromptPosition.SetXYZ(0,0,0);

}

