#include "TESTEditor.h"
#include "Modules/ModuleManager.h"
#include "Logging/LogMacros.h"

DEFINE_LOG_CATEGORY_STATIC(LogTESTEditor, Log, All);

void FTESTEditorModule::StartupModule()
{
    UE_LOG(LogTESTEditor, Log, TEXT("TESTEditor module started"));
}

void FTESTEditorModule::ShutdownModule()
{
    UE_LOG(LogTESTEditor, Log, TEXT("TESTEditor module shutdown"));
}

IMPLEMENT_MODULE(FTESTEditorModule, TESTEditor);
