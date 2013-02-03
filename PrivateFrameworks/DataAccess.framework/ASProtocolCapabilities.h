/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface ASProtocolCapabilities : NSObject {
    NSString *_abConstraintsPlistPath;
    NSString *_calConstraintsPlistPath;
}

- (id)_abConstraintsPlistPath;
- (id)_calConstraintsPlistPath;
- (id)addressBookConstraintsPath;
- (id)calendarConstraintsPath;
- (void)dealloc;
- (id)initWithProtocolVersionString:(id)arg1;
- (BOOL)supportsItemOperationsCommand;
- (BOOL)supportsMailboxSearch;
- (BOOL)supportsProtocolVersion:(id)arg1;
- (BOOL)supportsSettingsCommand;

@end
