/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileQuickLook.framework/MobileQuickLook
 */

@interface RTFTextTable : RTFTextBlock {
    id _lcache;
    NSUInteger _numCols;
    NSUInteger _tableFlags;
    void *_tablePrimary;
    void *_tableSecondary;
}

- (void)_setTableFlags:(NSUInteger)arg1;
- (NSUInteger)_tableFlags;
- (void)_takeValuesFromTextBlock:(id)arg1;
- (BOOL)collapsesBorders;
- (void)dealloc;
- (BOOL)hidesEmptyCells;
- (id)init;
- (NSUInteger)layoutAlgorithm;
- (NSUInteger)numberOfColumns;
- (void)setCollapsesBorders:(BOOL)arg1;
- (void)setHidesEmptyCells:(BOOL)arg1;
- (void)setLayoutAlgorithm:(NSUInteger)arg1;
- (void)setNumberOfColumns:(NSUInteger)arg1;

@end
