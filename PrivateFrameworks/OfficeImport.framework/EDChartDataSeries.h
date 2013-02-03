/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, NSArray, NSString, EDChartSeriesFormat;

@interface EDChartDataSeries : NSObject {
    NSUInteger mAxisGroup;
    NSArray *mBubbleSizes;
    NSArray *mCategoryLabels;
    EDChartSeriesFormat *mDefaultFormat;
    NSMutableDictionary *mPointFormats;
    NSString *mTitle;
    NSArray *mValues;
}

- (void)addFormatForPoint:(id)arg1 index:(NSUInteger)arg2;
- (NSUInteger)axisGroup;
- (id)bubbleSizes;
- (id)categoryLabels;
- (void)dealloc;
- (id)defaultFormat;
- (id)formatForPoint:(NSUInteger)arg1;
- (id)init;
- (void)setAxisGroup:(NSUInteger)arg1;
- (void)setBubbleSizes:(id)arg1;
- (void)setCategoryLabels:(id)arg1;
- (void)setDefaultFormat:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setValues:(id)arg1;
- (id)title;
- (id)values;

@end
