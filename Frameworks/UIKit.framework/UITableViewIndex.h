/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIFont;

@interface UITableViewIndex : UIControl {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    } _cachedSize;
    } _cachedSizeToFit;
    UIFont *_font;
    BOOL _pastBottom;
    BOOL _pastTop;
    NSInteger _selectedSection;
    NSArray *_titles;
}

@property(readonly) BOOL pastBottom; /* unknown property attribute: V_pastBottom */
@property(readonly) BOOL pastTop; /* unknown property attribute: V_pastTop */
@property(readonly) NSInteger selectedSection; /* unknown property attribute: V_selectedSection */
@property(retain) UIFont *font;
@property(readonly) NSString *selectedSectionTitle;
@property(retain) NSArray *titles;

- (id)_createTouchesWithMouseEvent:(struct __GSEvent { }*)arg1 phase:(NSInteger)arg2;
- (id)_displayTitles;
- (void)_selectSectionForTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSUInteger)maximumNumberOfTitlesWithoutTruncationForHeight:(float)arg1;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (BOOL)pastBottom;
- (BOOL)pastTop;
- (NSInteger)selectedSection;
- (id)selectedSectionTitle;
- (void)setFont:(id)arg1;
- (void)setTitles:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)titles;

@end
