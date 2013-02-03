/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMappedObjectStore, NSMutableDictionary, NSString;

@interface NSPersistentStoreMap : NSObject {
    NSString *_databaseUUID;
    NSMutableDictionary *_mappings;
    unsigned long long _nextPK64;
    NSMappedObjectStore *_store;
    NSMutableDictionary *_storeMetadata;
}

+ (void)initialize;

- (unsigned long long)_cheatAndLookAtCurrentValueOfnextPK64;
- (void)_setMetadata:(id)arg1;
- (id)_storeMetadataForSaving;
- (id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(BOOL)arg2;
- (void)addObject:(id)arg1 objectIDMap:(id)arg2;
- (id)configurationName;
- (id)dataForKey:(id)arg1;
- (id)databaseUUID;
- (void)dealloc;
- (id)externalMapping;
- (id)handleFetchRequest:(id)arg1;
- (id)initWithStore:(id)arg1;
- (id)metadata;
- (unsigned long long)nextPK64;
- (void)removeObject:(id)arg1 objectIDMap:(id)arg2;
- (id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2;
- (void)setDatabaseUUID:(id)arg1;
- (void)setMetadata:(id)arg1;
- (id)store;
- (void)updateObject:(id)arg1 objectIDMap:(id)arg2;

@end
