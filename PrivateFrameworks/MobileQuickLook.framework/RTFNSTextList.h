/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileQuickLook.framework/MobileQuickLook
 */

@class NSString;

@interface RTFNSTextList : NSObject <NSCoding, NSCopying> {
    NSUInteger _listFlags;
    void *_listSecondary;
    NSString *_markerFormat;
    NSInteger _startIndex;
}

+ (id)_standardMarkerAttributesForAttributes:(id)arg1;
+ (void)initialize;

- (BOOL)_isOrdered;
- (id)_markerForMarkerFormat:(id)arg1 itemNumber:(NSInteger)arg2 isNumbered:(BOOL*)arg3 substitutionStart:(NSUInteger*)arg4 end:(NSUInteger*)arg5 specifierStart:(NSUInteger*)arg6 end:(NSUInteger*)arg7;
- (id)_markerPrefix;
- (id)_markerSpecifier;
- (id)_markerSuffix;
- (id)_markerTitle;
- (id)_unaffixedMarkerForItemNumber:(NSInteger)arg1;
- (id)_unaffixedMarkerFormat;
- (id)_unaffixedMarkerTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMarkerFormat:(id)arg1 options:(NSUInteger)arg2;
- (NSUInteger)listOptions;
- (id)markerForItemNumber:(NSInteger)arg1;
- (id)markerFormat;
- (NSUInteger)options;
- (void)setStartingItemNumber:(NSInteger)arg1;
- (NSInteger)startingItemNumber;

@end
