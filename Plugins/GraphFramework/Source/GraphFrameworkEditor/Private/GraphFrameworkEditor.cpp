#include "GraphFrameworkEditor.h"
#include "Modules/ModuleManager.h"
#include "Logging/LogMacros.h"

DEFINE_LOG_CATEGORY_STATIC(LogGraphFrameworkEditor, Log, All);

void FGraphFrameworkEditorModule::StartupModule()
{
    UE_LOG(LogGraphFrameworkEditor, Log, TEXT("GraphFrameworkEditor module started"));
}

void FGraphFrameworkEditorModule::ShutdownModule()
{
    UE_LOG(LogGraphFrameworkEditor, Log, TEXT("GraphFrameworkEditor module shutdown"));
}

IMPLEMENT_MODULE(FGraphFrameworkEditorModule, GraphFrameworkEditor);
