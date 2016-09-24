/* Generated by RuntimeBrowser.
 */

@protocol HFItemManagerDelegate <NSObject>

@optional

- (void)itemManager:(HFItemManager *)arg1 didChangeOverallLoadingState:(unsigned int)arg2;
- (void)itemManager:(HFItemManager *)arg1 didChangeSourceItem:(HFItem *)arg2;
- (void)itemManager:(HFItemManager *)arg1 didInsertItem:(HFItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)itemManager:(HFItemManager *)arg1 didInsertSections:(NSIndexSet *)arg2;
- (void)itemManager:(HFItemManager *)arg1 didMoveItem:(HFItem *)arg2 fromIndexPath:(NSIndexPath *)arg3 toIndexPath:(NSIndexPath *)arg4;
- (void)itemManager:(HFItemManager *)arg1 didMoveSection:(int)arg2 toSection:(int)arg3;
- (void)itemManager:(HFItemManager *)arg1 didRemoveItem:(HFItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)itemManager:(HFItemManager *)arg1 didRemoveSections:(NSIndexSet *)arg2;
- (void)itemManager:(HFItemManager *)arg1 didUpdateResultsForItem:(HFItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)itemManager:(HFItemManager *)arg1 didUpdateResultsForSourceItem:(HFItem *)arg2;
- (BOOL)itemManager:(void *)arg1 performBatchUpdateBlock:(void *)arg2; // needs 2 arg types, found 6: HFItemManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (BOOL)itemManager:(HFItemManager *)arg1 shouldUpdateItems:(NSSet *)arg2 itemUpdateOptions:(NSDictionary *)arg3;

@end