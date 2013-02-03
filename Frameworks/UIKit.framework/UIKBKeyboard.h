/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSMutableDictionary, NSString;

@interface UIKBKeyboard : UIKBShape <NSCoding> {
    NSMutableDictionary *m_keyCache;
    NSMutableArray *m_keyplanes;
    NSString *m_name;
    NSString *m_visualStyle;
}

@property(retain) NSDictionary *keyCache; /* unknown property attribute: Vm_keyCache */
@property(retain) NSArray *keyplanes; /* unknown property attribute: Vm_keyplanes */
@property(retain) NSString *visualStyle; /* unknown property attribute: Vm_visualStyle */
@property(retain) NSString *name; /* unknown property attribute: Vm_name */

+ (id)keyboard;

- (void)cacheKey:(id)arg1 onKeyplane:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)keyCache;
- (id)keyplaneWithName:(id)arg1;
- (id)keyplanes;
- (void)layout;
- (id)name;
- (void)setKeyCache:(id)arg1;
- (void)setKeyplanes:(id)arg1;
- (void)setName:(id)arg1;
- (void)setVisualStyle:(id)arg1;
- (id)visualStyle;

@end
