/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABBannerView, UISearchDisplayController, UIViewController, UIView, NSMutableArray, NSOperationQueue, UISearchBar, NSIndexPath, <ABMembersControllerDelegate>;

@interface ABMembersController : ABContentController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, UISearchDisplayDelegate, ABLocalSearchOperationDelegate, UISearchBarDelegate> {
    void *_backgroundAddressBook;
    ABBannerView *_bannerView;
    NSUInteger _cellsCreated;
    struct __CFDictionary { } *_displayableSectionHeaderToSectionHeader;
    struct __CFDictionary { } *_displayableSectionIndexToSectionIndex;
    NSUInteger _memberCount;
    <ABMembersControllerDelegate> *_membersControllerDelegate;
    NSOperationQueue *_operationQueue;
    UIViewController *_parentViewController;
    BOOL _resumeForPhoneApp;
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchController;
    struct __CFArray { } *_searchResults;
    NSUInteger _searchSequenceNumber;
    struct __CFDictionary { } *_sectionHeaderToDisplayableSectionHeader;
    struct __CFDictionary { } *_sectionHeaderToSortingIndex;
    NSMutableArray *_sectionIndexTitles;
    struct __CFDictionary { } *_sectionIndexToDisplayableSectionIndex;
    NSIndexPath *_selectedIndexPath;
    BOOL _shouldRestoreScrollPosition;
    BOOL _showingCardFromSearch;
    UIView *_tableAccessoryView;
    BOOL _wasKeyboardShowing;
}

- (void)_deselectAllRowsWithAnimation;
- (void)_reselectLastSelectedCellIfNeeded;
- (void)_searchForWords:(id)arg1;
- (void*)_selectedPerson;
- (void)_setSelectedIndexPath:(id)arg1;
- (void)_updateCountString;
- (void)_updateEmptyTableViewAnimated:(BOOL)arg1;
- (void)_updateNoContactsViewAnimated:(BOOL)arg1;
- (id)accessoryView;
- (void)cancelSearching:(id)arg1;
- (void)cancelSearchingAnimated:(BOOL)arg1;
- (NSUInteger)cellsCreated;
- (id)contentView;
- (void*)copyBackgroundAddressBook;
- (void)createAllDisplayableSectionIndexAndHeaderCaches;
- (id)currentTableView;
- (void)dealloc;
- (void)deselectAllRowsWithAnimation:(BOOL)arg1;
- (id)displayableSectionHeaderFromSectionHeader:(id)arg1;
- (id)displayableSectionIndexFromSectionIndex:(id)arg1;
- (void)displayedMembersListChanged;
- (id)initWithContentControllerDelegate:(id)arg1 addressBook:(void*)arg2;
- (BOOL)isSearching;
- (void)loadState;
- (void)localSearchOperation:(id)arg1 completedWithCopyOfMatchingRecordIDs:(struct __CFArray { }*)arg2;
- (id)navigationBarTitleWithModel:(id)arg1;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (id)operationQueue;
- (void)relayoutAccessoryView;
- (void)restoreScrollPosition;
- (void)resume;
- (void)saveScrollPosition:(void*)arg1;
- (void)saveState:(void*)arg1;
- (BOOL)scrollMemberVisible:(void*)arg1;
- (void)scrollTableViewToSearchField:(id)arg1 animated:(BOOL)arg2;
- (void)scrollTableViewToSearchFieldIfNotAlreadyScrolled;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (struct __CFDictionary { }*)sectionHeaderSortingIndices;
- (id)sectionIndexFromDisplayableSectionIndex:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)selectedCell;
- (void)setBannerTitle:(id)arg1 value:(id)arg2;
- (void)setCellsCreated:(NSUInteger)arg1;
- (void)setMembersControllerDelegate:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (BOOL)shouldShowIndex;
- (BOOL)showCardForPerson:(void*)arg1 animate:(BOOL)arg2;
- (BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3;
- (void)stopScrolling;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(NSInteger)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (NSInteger)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(NSInteger)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(NSInteger)arg2;
- (id)tableView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end
