/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableDictionary, NSString, NSCountedSet, NSMutableSet;

@interface DAPowerAssertionManager : NSObject {
    struct __CFDictionary { } *_contextToGroupIdentifier;
    NSCountedSet *_contexts;
    NSMutableDictionary *_groupIdentifierToContexts;
    NSCountedSet *_heldAsideContexts;
    NSMutableSet *_heldAsideGroupIdentifiers;
    NSString *_uuid;
}

+ (id)sharedPowerAssertionManager;
+ (void)vendDaemons:(Class)arg1;

- (void)_releaseAssertions;
- (void)_retainAssertions;
- (void)dealloc;
- (void)dropPowerAssertionsForGroupIdentifier:(id)arg1;
- (id)init;
- (NSUInteger)powerAssertionRetainCount:(id)arg1;
- (void)reattainPowerAssertionsForGroupIdentifier:(id)arg1;
- (void)releasePowerAssertion:(id)arg1;
- (void)retainPowerAssertion:(id)arg1 withGroupIdentifier:(id)arg2;
- (id)stateString;

@end
