/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, DOMHTMLSelectElement, <UISelectedItemPrivate>;

@interface UISelectionPeripheral : UIPickerView <UIFormPeripheral, UIPickerViewDataSource, UIPickerViewDelegate> {
    NSMutableArray *_cachedItems;
    NSUInteger _firstSelectedIndex;
    NSInteger _orientation;
    <UISelectedItemPrivate> *_selectedItem;
    DOMHTMLSelectElement *_selectionNode;
}

@property(retain) <UISelectedItemPrivate> *_selectedItem; /* unknown property attribute: V_selectedItem */
@property(retain) DOMHTMLSelectElement *_selectionNode; /* unknown property attribute: V_selectionNode */

+ (id)createPeripheral;

- (id)_selectedItem;
- (id)_selectionNode;
- (void)beginEditing;
- (void)dealloc;
- (void)endEditing;
- (id)initFormPeripheral;
- (BOOL)isKeyboard;
- (NSInteger)numberOfComponentsInPickerView:(id)arg1;
- (NSInteger)orientation;
- (id)peripheralFormNode;
- (NSInteger)pickerView:(id)arg1 numberOfRowsInComponent:(NSInteger)arg2;
- (void)pickerView:(id)arg1 row:(NSInteger)arg2 column:(NSInteger)arg3 checked:(BOOL)arg4;
- (id)pickerView:(id)arg1 viewForRow:(NSInteger)arg2 forComponent:(NSInteger)arg3 reusingView:(id)arg4;
- (float)pickerView:(id)arg1 widthForComponent:(NSInteger)arg2;
- (void)pickerViewLoaded:(id)arg1;
- (void)reset;
- (void)setPeripheralFormNode:(id)arg1;
- (void)set_selectedItem:(id)arg1;
- (void)set_selectionNode:(id)arg1;

@end
