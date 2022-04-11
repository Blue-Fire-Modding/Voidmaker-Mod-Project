#include "MongoDbCreateIndex.h"

class UMongoDbCreateIndex;
class UDatabaseConnector;
class IDatabaseConnector;

UMongoDbCreateIndex* UMongoDbCreateIndex::CreateIndex(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Keys, FDocumentValue IndexOptions) {
    return NULL;
}

UMongoDbCreateIndex::UMongoDbCreateIndex() {
}

