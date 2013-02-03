/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableArray, MailAccount, NSString, MailboxUid, MessageCriterion, NSMutableDictionary;

@interface MailboxUid : WRObject <WeakReferenceHolder> {
    MailAccount *_account;
    NSUInteger _attributes;
    NSMutableArray *_children;
    MessageCriterion *_criterion;
    NSUInteger _numberOfGenericChildren;
    MailboxUid *_parent;
    NSString *_pathComponent;
    NSString *_permanentTag;
    NSString *_realFullPath;
    MailAccount *_representedAccount;
    NSInteger _type;
    NSMutableDictionary *_userInfo;
    BOOL allCriteriaMustBeSatisfied;
    NSString *pendingNameChange;
    NSString *uniqueId;
}

+ (id)specialNameForType:(NSInteger)arg1;

- (id)URL;
- (id)URLString;
- (id)URLStringNonNil;
- (id)URLStringWithAccount:(id)arg1;
- (void)_deleteChildrenWithURLsIfInvalid:(id)arg1 fullPaths:(id)arg2;
- (id)_loadUserInfo;
- (id)account;
- (id)accountRelativePath;
- (void)addToPostOrderTraversal:(id)arg1;
- (id)ancestralAccount;
- (NSUInteger)attributes;
- (id)childAtIndex:(NSUInteger)arg1;
- (id)childEnumerator;
- (id)childEnumeratorIncludingHiddenChildren:(BOOL)arg1;
- (id)childWithName:(id)arg1;
- (id)childWithPermanentTag:(id)arg1;
- (id)children;
- (NSInteger)compareWithMailboxUid:(id)arg1;
- (id)copyWithZone:(id)arg1;
- (id)criterion;
- (void)dealloc;
- (id)depthFirstEnumerator;
- (id)descendantWithPermanentTag:(id)arg1;
- (id)description;
- (id)displayName;
- (id)displayNameUsingSpecialNames;
- (void)flushCriteria;
- (id)fullPath;
- (id)fullPathNonNil;
- (BOOL)hasChildren;
- (NSUInteger)indexOfChild:(id)arg1;
- (NSInteger)indexToInsertChildMailboxUid:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithName:(id)arg1 attributes:(NSUInteger)arg2 forAccount:(id)arg3 permanentTag:(id)arg4;
- (void)invalidate;
- (void)invalidateCachedNumberOfGenericChildren;
- (BOOL)isContainer;
- (BOOL)isDescendantOfMailbox:(id)arg1;
- (BOOL)isOutgoingMailboxUid;
- (BOOL)isSelectable;
- (BOOL)isSpecialMailboxUid;
- (BOOL)isStore;
- (BOOL)isValid;
- (BOOL)isVisible;
- (id)mutableCopyOfChildren;
- (id)name;
- (NSUInteger)nonDeletedCount;
- (NSUInteger)numberOfChildren;
- (NSUInteger)numberOfGenericChildren;
- (void)objectWillBeDeallocated:(id)arg1;
- (id)oldURLString;
- (id)parent;
- (id)pathRelativeToMailbox:(id)arg1;
- (id)permanentTag;
- (id)realFullPath;
- (void)removeChild:(id)arg1;
- (id)representedAccount;
- (id)rootMailbox;
- (void)saveUserInfo;
- (void)setAttributes:(NSUInteger)arg1;
- (BOOL)setChildren:(id)arg1;
- (void)setCriterion:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setPendingNameChange:(id)arg1;
- (void)setPermanentTag:(id)arg1;
- (void)setRepresentedAccount:(id)arg1;
- (void)setType:(NSInteger)arg1;
- (BOOL)setUnreadCount:(NSUInteger)arg1;
- (void)setUserInfoBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)setUserInfoWithDictionary:(id)arg1;
- (BOOL)shouldRestoreMessagesAfterFailedDelete;
- (void)sortChildren;
- (id)store;
- (id)tildeAbbreviatedPath;
- (id)topMailbox;
- (NSInteger)type;
- (id)uniqueId;
- (NSUInteger)unreadCount;
- (BOOL)userInfoBoolForKey:(id)arg1;
- (id)userInfoDictionary;
- (id)userInfoForSerialization;
- (id)userInfoObjectForKey:(id)arg1;

@end
