/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray;

@interface SULoadSectionsOperation : ISOperation <ISURLOperationDelegate> {
    NSArray *_sections;
    BOOL _shouldResetUserOrdering;
    BOOL _shouldUseCache;
    BOOL _usedCache;
}

@property BOOL usedCache; /* unknown property attribute: V_usedCache */
@property BOOL shouldUseCache; /* unknown property attribute: V_shouldUseCache */
@property BOOL shouldResetUserOrdering; /* unknown property attribute: V_shouldResetUserOrdering */
@property(retain) NSArray *sections; /* unknown property attribute: V_sections */

- (id)_baseCachePath;
- (id)_cachePathForVersion:(id)arg1 create:(BOOL)arg2;
- (BOOL)_loadArtworkForSections:(id)arg1 fromCacheDirectory:(id)arg2;
- (BOOL)_loadDefaultSections;
- (BOOL)_loadSectionsFromCacheForVersion:(id)arg1;
- (BOOL)_loadSectionsFromNetworkWithDictionary:(id)arg1;
- (BOOL)_loadSectionsFromPath:(id)arg1;
- (void)_writeImage:(id)arg1 toCachePath:(id)arg2 forIdentifier:(id)arg3 variant:(id)arg4;
- (void)_writeSectionsToCache:(id)arg1 forVersion:(id)arg2 withOriginalDictionary:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)run;
- (id)sections;
- (void)setSections:(id)arg1;
- (void)setShouldResetUserOrdering:(BOOL)arg1;
- (void)setShouldUseCache:(BOOL)arg1;
- (void)setUsedCache:(BOOL)arg1;
- (BOOL)shouldResetUserOrdering;
- (BOOL)shouldUseCache;
- (BOOL)usedCache;

@end
