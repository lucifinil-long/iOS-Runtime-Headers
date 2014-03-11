/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class SKStorePageViewController;

@interface SKRemoteStorePageViewController : _UIRemoteViewController <SKUIClientStorePageViewController> {
    SKStorePageViewController *_storePageViewController;
}

@property SKStorePageViewController * storePageViewController;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)didFinishWithResult:(id)arg1 error:(id)arg2;
- (void)setStorePageViewController:(id)arg1;
- (void)showProductPageWithItemIdentifier:(id)arg1;
- (id)storePageViewController;

@end