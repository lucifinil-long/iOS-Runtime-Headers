/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSUserDefaults;

@interface Defaults : NSObject {
    NSUserDefaults *defaults;
}

+ (id)sharedInstance;

- (id)alternateAddressesForSelf;
- (id)archiveMailbox;
- (BOOL)boolForKey:(id)arg1;
- (void)dealloc;
- (id)defaultMailDirectory;
- (id)dictionaryForKey:(id)arg1;
- (id)draftsMailbox;
- (NSInteger)integerForKey:(id)arg1;
- (id)mailAccountDirectory;
- (id)objectForKey:(id)arg1;
- (id)primaryEmailAddress;
- (void)removeObjectForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setDefaultMailDirectory:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setPrimaryEmailAddress:(id)arg1;
- (id)stringForKey:(id)arg1;
- (BOOL)synchronize;
- (id)trashMailboxName;

@end
