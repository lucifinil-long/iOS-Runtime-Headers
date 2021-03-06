/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegWizardController : PSSetupController <CNFRegFirstRunDelegate> {
    _UIBackdropView * _backdropView;
    <CNFRegWizardControllerDelegate> * _firstRunDelegate;
    CNFRegController * _regController;
    id  _resignListener;
    id  _resumeListener;
    int  _serviceType;
    struct { 
        unsigned int automaticKeyboardWasDisabled : 1; 
        unsigned int shouldListenForSuspension : 1; 
        unsigned int canStartNested : 1; 
        unsigned int canShowSplashScreen : 1; 
        unsigned int canShowDisabledScreen : 1; 
        unsigned int hideLearnMoreButton : 1; 
        unsigned int showSplashOnSignin : 1; 
        unsigned int skipReloadOnNextViewWillAppear : 1; 
        unsigned int allowCancel : 1; 
        unsigned int allowSMS : 1; 
        unsigned int shouldTerminateInBackground : 1; 
    }  _wizardFlags;
}

@property (nonatomic) BOOL allowCancel;
@property (nonatomic) BOOL allowSMS;
@property (nonatomic, retain) _UIBackdropView *backdropView;
@property (nonatomic) BOOL canShowDisabledScreen;
@property (nonatomic) BOOL canShowSplashScreen;
@property (nonatomic) BOOL canStartNested;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CNFRegWizardControllerDelegate> *firstRunDelegate;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL hideLearnMoreButton;
@property (nonatomic, retain) CNFRegController *regController;
@property (nonatomic) BOOL shouldListenForSuspension;
@property (nonatomic) BOOL shouldTerminateInBackground;
@property (nonatomic) BOOL showSplashOnSignin;
@property (readonly) Class superclass;

+ (void)setGlobalAppearanceStyle:(int)arg1;
+ (void)setSupportsAutoRotation:(BOOL)arg1;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground;
- (void)_applicationDidFinishLaunching;
- (void)_checkRestrictions;
- (void)_doCancel;
- (int)_firstRunState:(id)arg1;
- (void)_restrictionsChanged;
- (void)_startListeningForResignResume;
- (void)_stopListeningForResignResume;
- (void)_updateNavigationBarHiddenForCurrentState;
- (void)_updateNavigationBarHiddenForPop;
- (void)_updateNavigationBarHiddenForPush;
- (void)_updateNavigationBarTitle;
- (BOOL)allowCancel;
- (BOOL)allowSMS;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (id)backdropView;
- (BOOL)canShowDisabledScreen;
- (BOOL)canShowSplashScreen;
- (BOOL)canStartNested;
- (id)controllerClassesToShow:(BOOL)arg1;
- (id)controllersToShow;
- (id)controllersToShow:(BOOL)arg1;
- (void)dealloc;
- (void)dismissFinished:(BOOL)arg1;
- (void)dismissWithState:(unsigned int)arg1;
- (void)firstRunController:(id)arg1 finishedWithState:(unsigned int)arg2;
- (id)firstRunDelegate;
- (BOOL)hideLearnMoreButton;
- (id)init;
- (id)initWithRegController:(id)arg1;
- (id)initWithServiceTypes:(int)arg1;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (id)popViewControllerWithTransition:(int)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 transition:(int)arg2;
- (id)regController;
- (void)setAllowCancel:(BOOL)arg1;
- (void)setAllowSMS:(BOOL)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setCanShowDisabledScreen:(BOOL)arg1;
- (void)setCanShowSplashScreen:(BOOL)arg1;
- (void)setCanStartNested:(BOOL)arg1;
- (void)setFirstRunDelegate:(id)arg1;
- (void)setHideLearnMoreButton:(BOOL)arg1;
- (void)setRegController:(id)arg1;
- (void)setShouldListenForSuspension:(BOOL)arg1;
- (void)setShouldTerminateInBackground:(BOOL)arg1;
- (void)setShowSplashOnSignin:(BOOL)arg1;
- (void)setSkipReloadOnNextViewWillAppear:(BOOL)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)setupController;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldListenForSuspension;
- (BOOL)shouldShowFirstRunController;
- (BOOL)shouldTerminateInBackground;
- (BOOL)showSplashOnSignin;
- (BOOL)skipReloadOnNextViewWillAppear;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
