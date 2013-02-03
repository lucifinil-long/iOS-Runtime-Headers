/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, AccountsManager;

@interface ABGroupWrapper : NSObject {
    NSString *_accountIdentifier;
    AccountsManager *_accountsManager;
    void *_addressBook;
    NSString *_cachedName;
    void *_group;
    void *_store;
}

@property(readonly) void *group; /* unknown property attribute: V_group */
@property(readonly) void *store; /* unknown property attribute: V_store */
@property(readonly) void *addressBook; /* unknown property attribute: V_addressBook */
@property(readonly) NSString *accountIdentifier; /* unknown property attribute: V_accountIdentifier */
@property(retain) AccountsManager *accountsManager; /* unknown property attribute: V_accountsManager */
@property(readonly) NSString *_accountDescriptionBasedOnIdentifier;
@property(readonly) NSString *name;
@property(readonly) void *storeForNewRecords;
@property(readonly) NSInteger storeType;

+ (id)createGroupWrapperFromDictionaryRepresentation:(id)arg1 withAddressBook:(void*)arg2;
+ (id)createGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2 accountsManager:(id)arg3;
+ (id)createGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2;

- (id)_accountDescriptionBasedOnIdentifier;
- (id)accountIdentifier;
- (id)accountManager;
- (id)accountsManager;
- (void*)addressBook;
- (NSInteger)compareToGroupWrapper:(id)arg1;
- (id)copyDictionaryRepresentation;
- (void)dealloc;
- (id)description;
- (void*)group;
- (id)initWithAddressBook:(void*)arg1 accountIdentifier:(id)arg2 store:(void*)arg3 group:(void*)arg4;
- (BOOL)isContainerWrapper;
- (BOOL)isDirectoryWrapper;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isGlobalWrapper;
- (id)name;
- (NSInteger)score;
- (void)setAccountsManager:(id)arg1;
- (void*)store;
- (void*)storeForNewRecords;
- (NSInteger)storeType;

@end
