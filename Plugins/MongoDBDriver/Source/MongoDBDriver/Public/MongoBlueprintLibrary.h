#pragma once
#include "CoreMinimal.h"
#include "EDocumentValueType.h"
#include "DocumentValue.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ObjectId.h"
#include "MongoBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UMongoBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMongoBlueprintLibrary();
    UFUNCTION(BlueprintPure)
    static uint8 ToUint8(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToString(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FObjectId ToObjectId(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<FString, FDocumentValue> ToMap(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToJson(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintPure)
    static int64 ToInt64(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ToInt32(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintPure)
    static float ToFloat(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ToBool(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FDocumentValue> ToArray(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintCallable)
    static void SwitchOnType(const FDocumentValue& DocumentValue, EDocumentValueType& Branches);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ObjectIdToString(const FObjectId& ObjectId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FObjectId MakeObjectId(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUndefined(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNull(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDocumentValueType GetType(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintPure)
    static FDocumentValue FromUint8(uint8 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDocumentValue FromString(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDocumentValue FromObjectId(const FObjectId& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDocumentValue FromNull();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDocumentValue FromMap(const TMap<FString, FDocumentValue>& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDocumentValue FromJSON(const FString& Value);
    
    UFUNCTION(BlueprintPure)
    static FDocumentValue FromInt64(int64 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDocumentValue FromInt32(int32 Value);
    
    UFUNCTION(BlueprintPure)
    static FDocumentValue FromFloat(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDocumentValue FromBool(bool bValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDocumentValue FromArray(const TArray<FDocumentValue>& Value);
    
};

