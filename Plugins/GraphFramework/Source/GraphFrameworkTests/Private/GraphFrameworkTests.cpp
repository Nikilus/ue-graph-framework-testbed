#include "GraphFrameworkTests.h"
#include "Modules/ModuleManager.h"
#include "Logging/LogMacros.h"

DEFINE_LOG_CATEGORY_STATIC(LogGraphFrameworkTests, Log, All);

class FGraphFrameworkTestsModule : public IModuleInterface
{
public:
    virtual void StartupModule() override
    {
        UE_LOG(LogGraphFrameworkTests, Log, TEXT("GraphFrameworkTests module started"));
    }

    virtual void ShutdownModule() override
    {
        UE_LOG(LogGraphFrameworkTests, Log, TEXT("GraphFrameworkTests module shutdown"));
    }
};

IMPLEMENT_MODULE(FGraphFrameworkTestsModule, GraphFrameworkTests);
