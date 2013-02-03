/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class NSMutableDictionary, NSArray, NSString, WAKView, WebPluginController, WebDataSource, NSTimer;

@interface WebHTMLViewPrivate : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGPoint { 
        float x; 
        float y; 
    NSTimer *autoscrollTimer;
    struct __GSEvent { } *autoscrollTriggerEvent;
    BOOL avoidingPrintOrphan;
    BOOL closed;
    WebDataSource *dataSource;
    BOOL handlingMouseDownEvent;
    NSMutableDictionary *highlighters;
    BOOL ignoringMouseDraggedEvents;
    struct WebHTMLViewInterpretKeyEventsParameters { struct KeyboardEvent {} *x1; BOOL x2; BOOL x3; BOOL x4; } *interpretKeyEventsParameters;
    struct __GSEvent { } *keyDownEvent;
    } lastLayoutSize;
    } lastScrollPosition;
    WAKView *layerHostingView;
    struct __GSEvent { } *mouseDownEvent;
    BOOL needsLayout;
    BOOL needsToApplyStyles;
    NSArray *pageRects;
    WebPluginController *pluginController;
    BOOL printing;
    BOOL receivedNOOP;
    id savedSubviews;
    SEL selectorForDoCommandBySelector;
    BOOL subviewsSetAside;
    NSString *toolTip;
    id trackingRectOwner;
    void *trackingRectUserData;
    BOOL transparentBackground;
}

+ (void)initialize;

- (void)clear;
- (void)dealloc;
- (void)finalize;

@end
