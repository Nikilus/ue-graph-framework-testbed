#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GFNodeAsset.generated.h"

UCLASS(BlueprintType)
class GRAPHFRAMEWORKRUNTIME_API UGFNodeAsset : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Node")
    FName NodeName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Node")
    FText Description;
};