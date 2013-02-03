/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@interface CalendarEventAvailabilityEditItem : CalendarEventEditItem {
    NSInteger _availability;
}

- (void)absorbValueFromOccurrence:(struct CalEventOccurrence { }*)arg1 givenModel:(id)arg2 editModel:(id)arg3;
- (void)absorbValueFromView:(id)arg1 intoEditModel:(id)arg2;
- (id)cellForSubitemAtIndex:(NSInteger)arg1 givenEditModel:(id)arg2;
- (BOOL)configureForCalendarConstraints:(void*)arg1 withOccurrence:(struct CalEventOccurrence { }*)arg2;
- (id)detailViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(NSInteger)arg2;
- (BOOL)editItemViewDirty:(id)arg1;
- (id)identifier;
- (void)saveIntoEvent:(void*)arg1;
- (id)serializedValue;

@end
