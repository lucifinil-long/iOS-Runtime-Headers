/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, OADBulletSize, OADBulletFont, OADBulletColor, OADTextSpacing, OADBulletProperties;

@interface OADParagraphProperties : OADCharacterProperties {
    OADTextSpacing *mAfterSpacing;
    NSInteger mAlign;
    OADTextSpacing *mBeforeSpacing;
    OADBulletColor *mBulletColor;
    OADBulletFont *mBulletFont;
    OADBulletProperties *mBulletProperties;
    OADBulletSize *mBulletSize;
    double mDefaultTab;
    NSInteger mFontAlign;
    BOOL mHasAlign;
    BOOL mHasDefaultTab;
    BOOL mHasFontAlign;
    BOOL mHasIndent;
    BOOL mHasIsHangingPunctuation;
    BOOL mHasIsLatinLineBreak;
    BOOL mHasIsRightToLeft;
    BOOL mHasLeftMargin;
    BOOL mHasLevel;
    BOOL mHasRightMargin;
    BOOL mHasTabStops;
    BOOL mHasWrap;
    double mIndent;
    BOOL mIsHangingPunctuation;
    BOOL mIsLatinLineBreak;
    BOOL mIsRightToLeft;
    double mLeftMargin;
    NSInteger mLevel;
    OADTextSpacing *mLineSpacing;
    double mRightMargin;
    NSMutableArray *mTabStops;
    NSInteger mWrap;
}

+ (id)defaultProperties;

- (id)addTabStop;
- (id)afterSpacing;
- (NSInteger)align;
- (id)beforeSpacing;
- (id)bulletColor;
- (id)bulletFont;
- (id)bulletProperties;
- (id)bulletSize;
- (void)clearTabStops;
- (void)dealloc;
- (double)defaultTab;
- (NSInteger)fontAlign;
- (BOOL)hasAfterSpacing;
- (BOOL)hasAlign;
- (BOOL)hasBeforeSpacing;
- (BOOL)hasBulletColor;
- (BOOL)hasBulletFont;
- (BOOL)hasBulletProperties;
- (BOOL)hasBulletSize;
- (BOOL)hasDefaultTab;
- (BOOL)hasFontAlign;
- (BOOL)hasIndent;
- (BOOL)hasIsHangingPunctuation;
- (BOOL)hasIsLatinLineBreak;
- (BOOL)hasIsRightToLeft;
- (BOOL)hasLeftMargin;
- (BOOL)hasLevel;
- (BOOL)hasLineSpacing;
- (BOOL)hasRightMargin;
- (BOOL)hasTabStops;
- (BOOL)hasWrap;
- (double)indent;
- (id)init;
- (id)initWithDefaults;
- (BOOL)isHangingPunctuation;
- (BOOL)isLatinLineBreak;
- (BOOL)isRightToLeft;
- (double)leftMargin;
- (NSUInteger)level;
- (id)lineSpacing;
- (double)nonOveridenLeftMargin;
- (double)rightMargin;
- (void)setAfterSpacing:(id)arg1;
- (void)setAlign:(NSInteger)arg1;
- (void)setBeforeSpacing:(id)arg1;
- (void)setBulletColor:(id)arg1;
- (void)setBulletFont:(id)arg1;
- (void)setBulletProperties:(id)arg1;
- (void)setBulletSize:(id)arg1;
- (void)setDefaultTab:(double)arg1;
- (void)setFontAlign:(NSInteger)arg1;
- (void)setIndent:(double)arg1;
- (void)setIsHangingPunctuation:(BOOL)arg1;
- (void)setIsLatinLineBreak:(BOOL)arg1;
- (void)setIsRightToLeft:(BOOL)arg1;
- (void)setLeftMargin:(double)arg1;
- (void)setLevel:(NSUInteger)arg1;
- (void)setLineSpacing:(id)arg1;
- (void)setRightMargin:(double)arg1;
- (void)setWrap:(NSInteger)arg1;
- (id)tabStopAtIndex:(NSUInteger)arg1;
- (NSUInteger)tabStopCount;
- (NSInteger)wrap;

@end
