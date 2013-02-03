/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSDictionary;

@interface ASParseRule : NSObject {
    NSDictionary *_callbackDict;
    NSInteger _codePage;
    NSInteger _collectionClassType;
    NSInteger _maximumNumber;
    NSInteger _minimumNumber;
    Class _objectClass;
    SEL _setterMethod;
    NSDictionary *_streamCallbackDict;
    NSDictionary *_subclassRuleSet;
    NSInteger _token;
}

- (id)callbackDict;
- (NSInteger)codePage;
- (NSInteger)collectionClassType;
- (void)dealloc;
- (id)initWithMinimumNumber:(NSInteger)arg1 maximumNumber:(NSInteger)arg2 codePage:(NSInteger)arg3 token:(NSInteger)arg4 objectClass:(Class)arg5 setterMethod:(SEL)arg6 collectionClassType:(NSInteger)arg7 callbackDict:(id)arg8 streamCallbackDict:(id)arg9 subclassRuleSet:(id)arg10;
- (NSInteger)maximumNumber;
- (NSInteger)minimumNumber;
- (Class)objectClass;
- (SEL)setterMethod;
- (id)streamCallbackDict;
- (id)subclassRuleSet;
- (NSInteger)token;

@end
