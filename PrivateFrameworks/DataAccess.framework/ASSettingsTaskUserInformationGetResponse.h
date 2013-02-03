/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSArray;

@interface ASSettingsTaskUserInformationGetResponse : ASItem {
    NSArray *_emailAddresses;
}

@property(retain) NSArray *emailAddresses; /* unknown property attribute: V_emailAddresses */

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;

- (id)asParseRules;
- (void)dealloc;
- (id)description;
- (id)emailAddresses;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)setEmailAddresses:(id)arg1;

@end
