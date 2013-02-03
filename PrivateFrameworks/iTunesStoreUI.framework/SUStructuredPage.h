/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ISItemInfoDataSource, NSString, ISItem, SUPageSectionGroup, NSNumber, SUItemList;

@interface SUStructuredPage : NSObject {
    NSString *_clientApplication;
    NSString *_copyright;
    BOOL _didShowDialog;
    NSNumber *_focusedItemIdentifier;
    ISItem *_item;
    ISItemInfoDataSource *_itemInfoDataSource;
    SUItemList *_itemList;
    NSString *_rootSectionIdentifier;
    SUPageSectionGroup *_sectionsGroup;
    NSString *_title;
    NSInteger _type;
}

@property NSInteger type; /* unknown property attribute: V_type */
@property(retain) NSString *title; /* unknown property attribute: V_title */
@property(retain) SUPageSectionGroup *sectionsGroup; /* unknown property attribute: V_sectionsGroup */
@property(retain) NSString *rootSectionIdentifier; /* unknown property attribute: V_rootSectionIdentifier */
@property(retain) SUItemList *itemList; /* unknown property attribute: V_itemList */
@property(retain) ISItemInfoDataSource *itemInfoDataSource; /* unknown property attribute: V_itemInfoDataSource */
@property(retain) ISItem *item; /* unknown property attribute: V_item */
@property(retain) NSNumber *focusedItemIdentifier; /* unknown property attribute: V_focusedItemIdentifier */
@property(readonly) BOOL didShowDialog; /* unknown property attribute: V_didShowDialog */
@property(retain) NSString *copyright; /* unknown property attribute: V_copyright */
@property(retain) NSString *clientApplication; /* unknown property attribute: V_clientApplication */
@property(readonly) BOOL hasDisplayableContent;

- (id)_copyItemFromDictionary:(id)arg1;
- (void)_parseItemsFromDictionary:(id)arg1;
- (void)_parsePageTypeFromDictionary:(id)arg1;
- (void)_parseProtocolFromDictionary:(id)arg1;
- (NSInteger)_typeForString:(id)arg1;
- (id)clientApplication;
- (id)copyright;
- (void)dealloc;
- (BOOL)didShowDialog;
- (id)focusedItemIdentifier;
- (BOOL)hasDisplayableContent;
- (id)init;
- (id)item;
- (id)itemInfoDataSource;
- (id)itemList;
- (BOOL)loadFromDictionary:(id)arg1;
- (id)rootSectionIdentifier;
- (id)sectionsGroup;
- (void)setClientApplication:(id)arg1;
- (void)setCopyright:(id)arg1;
- (void)setFocusedItemIdentifier:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setItemInfoDataSource:(id)arg1;
- (void)setItemList:(id)arg1;
- (void)setRootSectionIdentifier:(id)arg1;
- (void)setSectionsGroup:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(NSInteger)arg1;
- (id)title;
- (NSInteger)type;

@end
