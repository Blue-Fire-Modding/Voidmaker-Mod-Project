#pragma once
#include "CoreMinimal.h"
#include "DocumentValue.h"
#include "DynMutlMongoDocumentDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDynMutlMongoDocument, const FDocumentValue, Document);

