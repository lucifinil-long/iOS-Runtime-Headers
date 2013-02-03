/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableArray, NSLock, ABGroupWrapper;

@interface ABModel : NSObject {
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    void *_addressBook;
    BOOL _backgroundInvalidated;
    NSLock *_backgroundLoadingLock;
    NSMutableArray *_cachedModelRecords;
    struct __CFArray { } *_databaseChangeDelegates;
    NSUInteger _displayOrdering;
    NSMutableArray *_displayedGroups;
    } _displayedMemberPreparedRange;
    struct __CFArray { } *_displayedMembers;
    BOOL _displayedMembersAreSearchResults;
    struct __CFDictionary { } *_headerSortKeyToHeaderString;
    ABGroupWrapper *_lastSelectedGroupWrapper;
    BOOL _loadingInBackground;
    NSLock *_memberLock;
    NSUInteger _numberOfDisplayedMembers;
    struct { struct { /* ? */ } *x1; NSInteger x2; NSInteger x3; } *_sectionLists;
    ABGroupWrapper *_selectedGroupWrapper;
    void *_selectedPerson;
}

+ (void)initialize;
+ (NSUInteger)sortOrdering;

- (void)_cachePeople:(struct __CFArray { }*)arg1 atEnd:(BOOL)arg2;
- (id)_createModelRecordFromRecord:(void*)arg1;
- (id)_displayedGroupMembersInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)_loadMembersInBackground:(id)arg1;
- (void)_modelDatabaseChanged:(struct __CFDictionary { }*)arg1;
- (void)_notifyDelegatesOfDatabaseChangeWithDeletedGroup:(BOOL)arg1 deletedPerson:(BOOL)arg2;
- (id)_partialDisplayedGroupMembersInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)_startBackgroundThreadIfNecessaryScanningForward:(BOOL)arg1;
- (void)_waitUntilBackgroundThreadFinished;
- (void)addDatabaseChangeDelegate:(id)arg1;
- (void)addDisplayedMember:(void*)arg1;
- (void*)addressBook;
- (id)allDisplayedMembers;
- (void)copyDisplayedNamePieces:(id*)arg1 isGroup:(BOOL*)arg2 highlightIndex:(NSInteger*)arg3 forMember:(const void**)arg4 atindex:(NSUInteger)arg5;
- (void)dealloc;
- (void*)displayedMemberAtIndex:(NSUInteger)arg1;
- (struct { struct { /* ? */ } *x1; NSInteger x2; NSInteger x3; }*)displayedMemberSectionLists;
- (NSInteger)displayedMemberSectionListsCount;
- (id)displayedMembersInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (struct __CFDictionary { }*)headerSortKeyToHeaderStringDictionary;
- (long)indexForDisplayedMember:(void*)arg1;
- (id)initWithUIController:(id)arg1 addressBook:(void*)arg2;
- (void)invalidateDisplayedGroups;
- (void)invalidateDisplayedMembers;
- (void)invalidateLastSelectedGroupWrapper;
- (id)lastSelectedGroupWrapper;
- (void)modifiedDisplayedMember:(void*)arg1;
- (NSUInteger)numberOfDisplayedMembers;
- (void)prepareDisplayedMembersInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)removeDatabaseChangeDelegate:(id)arg1;
- (void)removeDisplayedMember:(void*)arg1;
- (void)resetSectionList;
- (void)resetSortKeyToHeaderStringDictionary;
- (void*)selectedGroup;
- (id)selectedGroupWrapper;
- (void*)selectedPerson;
- (void)setAddressBook:(void*)arg1;
- (void)setAutoInvalidateOnDatabaseChange:(BOOL)arg1;
- (void)setDisplayNameOrdering:(NSUInteger)arg1;
- (void)setFilteredDisplayedMembers:(struct __CFArray { }*)arg1;
- (void)setLastSelectedGroupWrapper:(id)arg1;
- (void)setSelectedGroup:(void*)arg1;
- (void)setSelectedGroupWrapper:(id)arg1;
- (void)setSelectedPerson:(void*)arg1;
- (void)setSortOrdering:(NSUInteger)arg1;
- (BOOL)shouldUsePartialLoadingForGroupWrapper:(id)arg1;

@end
