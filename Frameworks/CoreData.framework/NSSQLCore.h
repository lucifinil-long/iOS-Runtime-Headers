/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSSQLEntity, NSSQLRowCache, NSSQLRow, NSManagedObjectContext, NSMutableArray, NSSaveChangesRequest, NSSet, NSSQLConnection, NSSQLModel, NSSQLAdapter, NSMutableSet;

@interface NSSQLCore : NSPersistentStore {
    struct _sqlCoreFlags { 
        unsigned int preparingForSave : 1; 
        unsigned int beganTransaction : 1; 
        unsigned int ignoreEntityCaching : 1; 
        unsigned int storeMetadataClean : 1; 
        unsigned int useToManyCaching : 1; 
        unsigned int useSyntaxColoredLogging : 1; 
        unsigned int _RESERVED : 26; 
    NSSQLAdapter *_adapter;
    NSMutableDictionary *_batchFaultBuffer;
    NSMutableDictionary *_batchToManyFaultBuffer;
    NSMutableArray *_channels;
    NSSQLConnection *_connection;
    NSManagedObjectContext *_currentContext;
    NSInteger _currentGeneration;
    struct _NSScalarObjectID { Class x1; } *_currentGlobalID;
    NSSQLRow *_currentRow;
    NSSaveChangesRequest *_currentSaveRequest;
    struct __CFDictionary { } *_dbOperationsByGlobalID;
    NSInteger _debug;
    struct __CFSet { } *_deleteTable;
    NSSQLEntity *_lastEntity;
    NSInteger _lazyFaultDebugLevel;
    NSSet *_lockedObjects;
    NSMutableSet *_missingObjectGIDs;
    NSSQLModel *_model;
    id _reserved1;
    NSSQLRowCache *_rowCache;
    } _sqlCoreFlags;
    NSMutableDictionary *_storeMetadata;
    NSMutableArray *_toManyCache;
    NSMutableDictionary *_uniqueTable;
}

+ (BOOL)SQLGenerationV1Default;
+ (BOOL)coloredLoggingDefault;
+ (NSInteger)debugDefault;
+ (void)initialize;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2;
+ (Class)migrationManagerClass;
+ (BOOL)sanityCheckFileAtURL:(id)arg1 error:(id*)arg2;
+ (void)setColoredLoggingDefault:(BOOL)arg1;
+ (void)setDebugDefault:(NSInteger)arg1;
+ (BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3;
+ (void)setSQLGenerationV1Default:(BOOL)arg1;

- (id)_addDatabaseContextStateToException:(id)arg1;
- (void)_addDeletesToDatabaseOp:(id)arg1 forManyToMany:(id)arg2;
- (void)_addInsertsToDatabaseOp:(id)arg1 forManyToMany:(id)arg2;
- (void)_addManyToManysToDatabaseOp:(id)arg1;
- (void)_addUpdatesToDatabaseOp:(id)arg1 forManyToMany:(id)arg2;
- (void)_assertValidStateWithSelector:(SEL)arg1;
- (id)_availableChannel;
- (id)_availableChannelFromRegisteredChannels;
- (void)_beginTransaction:(id)arg1;
- (void)_checkAndRepairCorrelationTables:(BOOL)arg1;
- (void)_cleanUpAfterSave;
- (void)_cleanUpAfterTransaction;
- (id)_collectSkewedComponents:(id*)arg1;
- (void)_commitTransaction:(id)arg1;
- (id)_databaseContextState;
- (id)_dissectCorrelationTableCreationSQL:(id)arg1;
- (void)_ensureDatabaseMatchesModel;
- (void)_ensureMetadataLoaded;
- (id)_entityForObject:(id)arg1;
- (NSUInteger)_knownEntityKeyForObject:(id)arg1;
- (NSUInteger)_knownEntityKeyForObjectID:(id)arg1;
- (long long)_knownPrimaryKeyForObject:(id)arg1;
- (long long)_knownPrimaryKeyForObjectID:(id)arg1;
- (void)_loadOrSetMetadata;
- (id)_newAdapterForModel:(id)arg1;
- (id)_newConflictRecordForObject:(id)arg1 originalRow:(id)arg2 newRow:(id)arg3;
- (id)_newObjectGraphStyleForSQLRow:(id)arg1 withObject:(id)arg2;
- (id)_newRowsForFetchPlan:(struct { void *x1; void *x2; NSUInteger x3; void *x4; void *x5; void *x6; void *x7; void *x8; int (*x9)(); struct { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 3; unsigned int x_10_1_4 : 27; } x10; }*)arg1 selectedBy:(SEL)arg2 withArgument:(id)arg3;
- (Class)_objectIDClass;
- (id)_obtainOpenChannel;
- (BOOL)_obtainPermanentIDsForObjects:(id)arg1 withContext:(id)arg2;
- (void)_performChangesWithAdapterOps:(id)arg1;
- (id)_performExhaustiveConflictDetectionForObjects:(id)arg1 withChannel:(id)arg2;
- (BOOL)_performFastConflictDetectionForObjects:(id)arg1 withChannel:(id)arg2;
- (void)_performPostSaveTasks;
- (void)_populateRowForOp:(id)arg1 withObject:(id)arg2;
- (id)_predicateForSelectingObjectForOperation:(id)arg1;
- (void)_prefetchRelationshipKey:(id)arg1 sourceEntityDescription:(id)arg2 sourceObjectIDs:(id)arg3 prefetchRelationshipKeys:(id)arg4 inContext:(id)arg5;
- (void)_prefetchWithFetchRequest:(id)arg1 withObjectIDs:(id)arg2 inContext:(id)arg3;
- (id)_prepareDictionaryResultsFromResultSet:(struct { NSInteger x1; NSInteger x2; double x3; NSInteger x4; NSUInteger x5; void **x6; void *x7; void *x8; struct FetchResultsRow_st {} *x9; struct FetchResultsRow_st {} *x10; struct FetchResultsRowListHeader_st {} **x11; struct { unsigned int x_12_1_1 : 1; unsigned int x_12_1_2 : 31; } x12; }*)arg1 usingFetchPlan:(struct { void *x1; void *x2; NSUInteger x3; void *x4; void *x5; void *x6; void *x7; void *x8; int (*x9)(); struct { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 3; unsigned int x_10_1_4 : 27; } x10; }*)arg2;
- (id)_prepareResultsFromResultSet:(struct { NSInteger x1; NSInteger x2; double x3; NSInteger x4; NSUInteger x5; void **x6; void *x7; void *x8; struct FetchResultsRow_st {} *x9; struct FetchResultsRow_st {} *x10; struct FetchResultsRowListHeader_st {} **x11; struct { unsigned int x_12_1_1 : 1; unsigned int x_12_1_2 : 31; } x12; }*)arg1 usingFetchPlan:(struct { void *x1; void *x2; NSUInteger x3; void *x4; void *x5; void *x6; void *x7; void *x8; int (*x9)(); struct { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 3; unsigned int x_10_1_4 : 27; } x10; }*)arg2 withMatchingRows:(id*)arg3;
- (void)_purgeRowCache;
- (void)_registerForAdapterContextNotifications:(id)arg1;
- (void)_repairDatabaseCorrelationTables:(id)arg1 brokenHashModel:(id)arg2 recurse:(BOOL)arg3;
- (void)_rollbackTransaction:(id)arg1;
- (struct __CFArray { }*)_rowsForConflictDetection:(id)arg1 withChannel:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (void)_unregisterForAdapterContextNotifications:(id)arg1;
- (id)adapter;
- (id)availableChannel;
- (void)beginTransaction;
- (id)channels;
- (void)childContext:(id)arg1 didForgetObjectsWithObjectIDs:(id)arg2;
- (void)childContext:(id)arg1 didRememberObjectsWithObjectIDs:(id)arg2;
- (void)commitChanges:(id)arg1;
- (void)commitTransaction;
- (id)connection;
- (id)countForFetchRequest:(id)arg1 inContext:(id)arg2;
- (void)createAdapterOperationsForDatabaseOperation:(id)arg1;
- (id)createChannel;
- (id)currentContext;
- (id)databaseOperationForGlobalID:(id)arg1;
- (id)databaseOperationForObject:(id)arg1;
- (id)databaseUUID;
- (void)dealloc;
- (id)entityForEntityDescription:(id)arg1;
- (id)entityForFetchRequest:(id)arg1;
- (id)entityForObject:(id)arg1;
- (id)entityNameOrderingArrayForEntities:(id)arg1;
- (id)executeRequest:(id)arg1 withContext:(id)arg2;
- (id)fetchRowForObjectID:(struct _NSScalarObjectID { Class x1; }*)arg1;
- (void)forgetSnapshotForGlobalID:(id)arg1;
- (void)forgetSnapshotsForGlobalIDs:(id)arg1;
- (void)generatePrimaryKeysForEntity:(id)arg1;
- (id)hackQueryForManyToManyPrefetching:(id)arg1 andSourceObjectIDs:(id)arg2;
- (BOOL)handlesFetchRequest:(id)arg1;
- (id)identifier;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (void)insertEntity:(id)arg1 intoOrderingArray:(id)arg2 withDependencies:(id)arg3 processingSet:(id)arg4;
- (void)invalidateObjectsWithGlobalIDs:(id)arg1;
- (id*)knownKeyValuesForObjectID:(id)arg1 withContext:(id)arg2;
- (BOOL)load:(id*)arg1;
- (id)localSnapshotForGlobalID:(id)arg1;
- (id)metadata;
- (id)missingObjectGlobalIDs;
- (id)model;
- (id)newAdapterForModel:(id)arg1;
- (id)newFaultingPredicateForSourceID:(struct _NSScalarObjectID { Class x1; }*)arg1 andRelationship:(id)arg2;
- (id)newFetchedPKsForSourceID:(struct _NSScalarObjectID { Class x1; }*)arg1 andRelationship:(id)arg2;
- (struct _NSScalarObjectID { Class x1; }*)newForeignKeyID:(long long)arg1 entity:(id)arg2;
- (struct _NSScalarObjectID { Class x1; }*)newObjectIDForEntity:(id)arg1 pk:(long long)arg2;
- (id)newObjectIDSetsForToManyPrefetchingRequest:(id)arg1 andSourceObjectIDs:(id)arg2;
- (id)newRowsForFetchPlan:(void*)arg1;
- (id)objectIDFactoryForEntity:(id)arg1;
- (Class)objectIDFactoryForSQLEntity:(id)arg1;
- (id)objectsForFetchRequest:(id)arg1 inContext:(id)arg2;
- (id)orderAdapterOperations;
- (BOOL)ownsGlobalID:(id)arg1;
- (BOOL)ownsObject:(id)arg1;
- (void)performChanges;
- (void)prepareForSave:(id)arg1;
- (id)rawSQLTextForToManyFaultStatement:(id)arg1 stripBindVariables:(BOOL)arg2 swapEKPK:(BOOL)arg3;
- (void)recordChangesInContext:(id)arg1;
- (void)recordDatabaseOperation:(id)arg1;
- (void)recordDeleteForObject:(id)arg1;
- (void)recordPrimaryKey:(long long)arg1 forInsertedObject:(id)arg2 withSQLEntity:(id)arg3;
- (void)recordSnapshot:(id)arg1 forObjectID:(id)arg2;
- (void)recordSnapshots:(id)arg1;
- (void)recordToMany:(id)arg1 forSourceObjectID:(id)arg2 relationshipName:(id)arg3;
- (void)recordToManyInsertsForObject:(id)arg1 withOperation:(id)arg2;
- (void)recordToManyUpdatesForObject:(id)arg1 withOperation:(id)arg2;
- (void)recordUpdateForObject:(id)arg1;
- (void)recordValuesForInsertedObject:(id)arg1;
- (id)refreshObjects:(id)arg1;
- (void)registerChannel:(id)arg1;
- (id)retainedDataForObjectID:(id)arg1 withContext:(id)arg2;
- (id)retainedRelationshipDataWithSourceID:(id)arg1 forRelationship:(id)arg2 withContext:(id)arg3;
- (void)rollbackChanges;
- (void)rollbackTransaction;
- (id)rowCache;
- (id)rowForObjectID:(id)arg1 after:(double)arg2;
- (id)rowForObjectID:(id)arg1;
- (id)saveChanges:(id)arg1;
- (void)setCurrentContext:(id)arg1;
- (void)setDatabaseUUID:(id)arg1;
- (void)setExclusiveLockingMode:(BOOL)arg1;
- (void)setMetadata:(id)arg1;
- (void)setURL:(id)arg1;
- (id)type;
- (void)unregisterChannel:(id)arg1;

@end
