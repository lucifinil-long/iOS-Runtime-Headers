/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, NSString, OADColorMap, OADColorScheme;

@interface CMState : NSObject {
    NSInteger _textLevel;
    NSMutableDictionary *components;
    NSMutableDictionary *htmlResource;
    OADColorMap *mColorMap;
    OADColorScheme *mColorScheme;
    BOOL mIsThumbnail;
    NSString *mResourceUrlPrefix;
    NSInteger mSrcFormat;
}

- (id)colorMap;
- (id)colorScheme;
- (id)componentByName:(id)arg1;
- (void)copyFromCMStateWithoutComponents:(id)arg1;
- (void)dealloc;
- (id)getHtmlResource;
- (id)init;
- (BOOL)isOffice12;
- (BOOL)isThumbnail;
- (void)popTextLevel;
- (void)pushTextLevel;
- (id)resourceUrlPrefix;
- (void)setColorMap:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setComponentWithName:(id)arg1 value:(id)arg2;
- (void)setHtmlResource:(id)arg1;
- (void)setIsThumbnail:(BOOL)arg1;
- (void)setResourceUrlPrefix:(id)arg1;
- (void)setSrcFormat:(NSInteger)arg1;
- (NSInteger)sourceFormat;
- (NSInteger)textLevel;

@end
