// GFDialogueRunnerActor.cpp
#include "GFDialogueRunnerActor.h"

AGFDialogueRunnerActor::AGFDialogueRunnerActor()
{
    PrimaryActorTick.bCanEverTick = false;
}

void AGFDialogueRunnerActor::PrintDialogue()
{
    if (DialogueGraph)
    {
        UE_LOG(LogTemp, Warning, TEXT("Dialogue Graph: %s"), *DialogueGraph->GraphName.ToString());
        
        for (auto Node : DialogueGraph->DialogueNodes)
        {
            if (Node)
            {
                UE_LOG(LogTemp, Warning, TEXT("%s: %s"), *Node->SpeakerName, *Node->Text.ToString());
            }
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No Dialogue Graph assigned!"));
    }
}