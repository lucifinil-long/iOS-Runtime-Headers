/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDTOverlapCell, GQDTCell, GQDTTable;

@interface GQSTable : NSObject {
    BOOL mAlwaysPutReadCellsInArray;
    long mCellCount;
    GQDTOverlapCell *mCurrentOverlapCell;
    BOOL mIsCounting;
    BOOL mIsStreaming;
    GQDTCell *mLastCellRead;
    GQDTTable *mTable;
}

- (BOOL)alwaysPutReadCellsInArray;
- (long)column;
- (id)currentOverlapCell;
- (void)dealloc;
- (void)incrementCellPosition;
- (id)initWithStreaming:(BOOL)arg1 table:(id)arg2;
- (BOOL)isCounting;
- (BOOL)isStreaming;
- (id)lastCellRead;
- (long)row;
- (void)setAlwaysPutReadCellsInArray:(BOOL)arg1;
- (void)setCurrentOverlapCell:(id)arg1;
- (void)setIsCountingCount:(BOOL)arg1;
- (void)setLastCellRead:(id)arg1;
- (void)skipCells:(long)arg1;
- (id)table;

@end
