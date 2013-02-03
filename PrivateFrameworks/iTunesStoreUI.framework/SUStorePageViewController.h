/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUStorePageViewControllerDelegate>, NSDictionary, NSString, UISegmentedControl, SUPageSectionGroup, SUViewController, NSURL;

@interface SUStorePageViewController : SUViewController <ISURLOperationDelegate> {
    SUViewController *_activeChildViewController;
    NSInteger _activeSectionIndex;
    NSDictionary *_customHeaders;
    <SUStorePageViewControllerDelegate> *_delegate;
    BOOL _loadingForSectionChange;
    BOOL _needsAuthentication;
    NSInteger _pageType;
    SUViewController *_pendingChildViewController;
    NSDictionary *_queryStringDictionary;
    struct __CFRunLoopTimer { } *_refreshTimer;
    BOOL _reloadOnAppear;
    UISegmentedControl *_sectionSwitchControl;
    SUPageSectionGroup *_sectionsGroup;
    BOOL _shouldFetchAutomatically;
    NSURL *_url;
    NSString *_urlBagKey;
}

@property(retain) NSString *urlBagKey; /* unknown property attribute: V_urlBagKey */
@property(retain) NSURL *url; /* unknown property attribute: V_url */
@property BOOL shouldFetchAutomatically; /* unknown property attribute: V_shouldFetchAutomatically */
@property(retain) NSDictionary *queryStringDictionary; /* unknown property attribute: V_queryStringDictionary */
@property BOOL needsAuthentication; /* unknown property attribute: V_needsAuthentication */
@property <SUStorePageViewControllerDelegate> *delegate; /* unknown property attribute: V_delegate */
@property(retain) NSDictionary *customHeaders; /* unknown property attribute: V_customHeaders */

- (void)_delayedFetchPage;
- (void)_fetchPage:(BOOL)arg1;
- (void)_finishSuccessfulLoad;
- (void)_fireRefreshTimer;
- (void)_reloadForOutput:(id)arg1 ofType:(NSInteger)arg2 fromURL:(id)arg3;
- (void)_resetRefreshTimerWithTimeInterval:(double)arg1;
- (void)_sectionControlAction:(id)arg1;
- (void)_setActiveChildViewController:(id)arg1;
- (void)_setPendingChildViewController:(id)arg1;
- (id)copyArchivableContext;
- (id)createFetchOperation;
- (id)createPlaceholderViewController;
- (id)createViewControllerForPage:(id)arg1 ofType:(NSInteger)arg2 returningError:(id*)arg3;
- (id)customHeaders;
- (void)dealloc;
- (id)delegate;
- (id)displayedURL;
- (void)handleFailureWithError:(id)arg1;
- (id)init;
- (id)initWithSection:(id)arg1;
- (void)invalidate;
- (BOOL)loadMoreWithURL:(id)arg1;
- (void)loadView;
- (BOOL)needsAuthentication;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)purgeMemoryForReason:(NSInteger)arg1;
- (BOOL)pushStorePageWithURL:(id)arg1 withAuthentication:(BOOL)arg2 animated:(BOOL)arg3;
- (id)queryStringDictionary;
- (void)reload;
- (void)reloadForNetworkTypeChange;
- (BOOL)reloadForSectionsWithGroup:(id)arg1;
- (BOOL)reloadWithURL:(id)arg1;
- (void)resetNavigationItem:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (void)setCustomHeaders:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setNeedsAuthentication:(BOOL)arg1;
- (void)setQueryStringDictionary:(id)arg1;
- (void)setShouldFetchAutomatically:(BOOL)arg1;
- (void)setUrl:(id)arg1;
- (void)setUrlBagKey:(id)arg1;
- (BOOL)shouldFetchAutomatically;
- (void)showPlaceholderViewController;
- (id)url;
- (id)urlBagKey;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
