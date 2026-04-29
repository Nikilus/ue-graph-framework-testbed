#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GFDialogueNodeAsset.generated.h"

UCLASS(BlueprintType)
class GRAPHFRAMEWORKRUNTIME_API UGFDialogueNodeAsset : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue")
    FName NodeId;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue")
    FString SpeakerName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue")
    FText Text;
};