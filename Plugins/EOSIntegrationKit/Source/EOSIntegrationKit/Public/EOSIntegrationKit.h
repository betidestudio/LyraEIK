﻿#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FEOSIntegrationKitModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    void ConfigureOnlineSubsystemEIK();
    virtual void ShutdownModule() override;
};
