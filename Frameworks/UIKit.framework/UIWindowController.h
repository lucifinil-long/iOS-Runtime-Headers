/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITransitionView, UIViewController, UIWindow;

@interface UIWindowController : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    } _beginOriginForToView;
    NSInteger _currentTransition;
    SEL _didEndSelector;
    } _endOriginForToView;
    UIViewController *_fromViewController;
    id _target;
    UIViewController *_toViewController;
    UITransitionView *_transitionView;
    UIWindow *_window;
}

@property UIWindow *window; /* unknown property attribute: V_window */

+ (id)windowControllerForWindow:(id)arg1;
+ (void)windowWillBeDeallocated:(id)arg1;

- (struct CGPoint { float x1; float x2; })_adjustOrigin:(struct CGPoint { float x1; float x2; })arg1 givenOtherOrigin:(struct CGPoint { float x1; float x2; })arg2 forTransition:(NSInteger)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsForViewController:(id)arg1 orientation:(NSInteger)arg2 fullScreenLayout:(BOOL)arg3;
- (struct CGSize { float x1; float x2; })_flipSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })_originForViewController:(id)arg1 orientation:(NSInteger)arg2 fullScreenLayout:(BOOL)arg3;
- (void)_prepareKeyboardForTransition:(NSInteger)arg1 fromView:(id)arg2;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_rotationTransformForInterfaceOrientation:(NSInteger)arg1;
- (void)_transplantView:(id)arg1 toSuperview:(id)arg2 atIndex:(NSUInteger)arg3;
- (void)dealloc;
- (double)durationForTransition:(NSInteger)arg1;
- (void)setWindow:(id)arg1;
- (void)transition:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5;
- (struct CGPoint { float x1; float x2; })transitionView:(id)arg1 beginOriginForToView:(id)arg2 forTransition:(NSInteger)arg3 defaultOrigin:(struct CGPoint { float x1; float x2; })arg4;
- (struct CGPoint { float x1; float x2; })transitionView:(id)arg1 endOriginForFromView:(id)arg2 forTransition:(NSInteger)arg3 defaultOrigin:(struct CGPoint { float x1; float x2; })arg4;
- (struct CGPoint { float x1; float x2; })transitionView:(id)arg1 endOriginForToView:(id)arg2 forTransition:(NSInteger)arg3 defaultOrigin:(struct CGPoint { float x1; float x2; })arg4;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (id)window;

@end
