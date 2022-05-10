#pragma once
#include "CoreMinimal.h"
#include "DatabaseData.h"
#include "DynMultListDatabasesDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDynMultListDatabases, const TArray<FDatabaseData>&, Databases);

