/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class WAKView;

@interface WAKScrollView : WAKView <WebCoreFrameScrollView> {
    id _delegate;
    WAKView *_documentView;
}

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })actualDocumentVisibleRect;
- (BOOL)allowsHorizontalScrolling;
- (BOOL)allowsScrolling;
- (BOOL)allowsVerticalScrolling;
- (id)contentView;
- (struct CGPoint { float x1; float x2; })contentsPoint;
- (void)dealloc;
- (id)delegate;
- (id)documentView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentVisibleRect;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)drawsBackground;
- (BOOL)hasHorizontalScroller;
- (BOOL)hasVerticalScroller;
- (float)horizontalLineScroll;
- (id)horizontalScroller;
- (NSInteger)horizontalScrollingMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)reflectScrolledClipView:(id)arg1;
- (void)scrollWheel:(struct __GSEvent { }*)arg1;
- (void)scrollingModes:(NSInteger*)arg1 vertical:(NSInteger*)arg2;
- (void)setAllowsHorizontalScrolling:(BOOL)arg1;
- (void)setAllowsScrolling:(BOOL)arg1;
- (void)setAllowsVerticalScrolling:(BOOL)arg1;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentView:(id)arg1;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)setHasHorizontalScroller:(BOOL)arg1;
- (void)setHasVerticalScroller:(BOOL)arg1;
- (void)setHorizontalScroller:(id)arg1;
- (void)setHorizontalScrollingMode:(NSInteger)arg1;
- (void)setLineScroll:(float)arg1;
- (void)setScrollBarsSuppressed:(BOOL)arg1 repaintOnUnsuppress:(BOOL)arg2;
- (void)setScrollingMode:(NSInteger)arg1;
- (void)setScrollingModes:(NSInteger)arg1 vertical:(NSInteger)arg2 andLock:(BOOL)arg3;
- (void)setVerticalScroller:(id)arg1;
- (void)setVerticalScrollingMode:(NSInteger)arg1;
- (float)verticalLineScroll;
- (id)verticalScroller;
- (NSInteger)verticalScrollingMode;

@end
