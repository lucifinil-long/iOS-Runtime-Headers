/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDTComputedFormatSpec;

@interface GQDTNumberCell : GQDTCell {
    GQDTComputedFormatSpec *mComputedFormat;
    double mValue;
}

- (struct __CFString { }*)createStringValue;
- (void)dealloc;
- (NSInteger)readAttributesForNCell:(struct _xmlTextReader { }*)arg1;
- (NSInteger)readAttributesForNumberCell:(struct _xmlTextReader { }*)arg1;
- (double)value;

@end
