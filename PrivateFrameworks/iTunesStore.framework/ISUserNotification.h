/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSDictionary;

@interface ISUserNotification : NSObject {
    NSInteger _allowedRetryCount;
    NSInteger _currentRetryCount;
    NSDictionary *_dictionary;
    NSUInteger _optionFlags;
    NSDictionary *_userInfo;
}

@property(retain) NSDictionary *userInfo; /* unknown property attribute: V_userInfo */
@property NSUInteger optionFlags; /* unknown property attribute: V_optionFlags */
@property(retain) NSDictionary *dictionary; /* unknown property attribute: V_dictionary */
@property NSInteger currentRetryCount; /* unknown property attribute: V_currentRetryCount */
@property NSInteger allowedRetryCount; /* unknown property attribute: V_allowedRetryCount */

- (NSInteger)allowedRetryCount;
- (struct __CFUserNotification { }*)copyUserNotification;
- (NSInteger)currentRetryCount;
- (void)dealloc;
- (id)dictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1 options:(unsigned long)arg2;
- (unsigned long)optionFlags;
- (void)setAllowedRetryCount:(NSInteger)arg1;
- (void)setCurrentRetryCount:(NSInteger)arg1;
- (void)setDictionary:(id)arg1;
- (void)setOptionFlags:(unsigned long)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
