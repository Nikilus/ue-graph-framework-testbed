#include "GraphFrameworkRuntime.h"
#include "Modules/ModuleManager.h"
#include "Logging/LogMacros.h"

DEFINE_LOG_CATEGORY_STATIC(LogGraphFrameworkRuntime, Log, All);

class FGraphFrameworkRuntimeModule : public IModuleInterface
{
public:
    virtual void StartupModule() override
    {
        UE_LOG(LogGraphFrameworkRuntime, Log, TEXT("GraphFrameworkRuntime module started"));
    }

    virtual void ShutdownModule() override
    {
        UE_LOG(LogGraphFrameworkRuntime, Log, TEXT("GraphFrameworkRuntime module shutdown"));
    }
};

IMPLEMENT_MODULE(FGraphFrameworkRuntimeModule, GraphFrameworkRuntime);
