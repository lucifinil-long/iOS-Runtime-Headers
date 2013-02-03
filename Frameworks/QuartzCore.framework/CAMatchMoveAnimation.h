/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMatchMoveAnimation : CAAnimation {
}

@property(copy) NSString *keyPath;
@property(retain) CALayer *sourceLayer;
@property(copy) NSArray *sourcePoints;
@property(getter=isAdditive) BOOL additive;
@property BOOL appliesRotation;
@property BOOL appliesScale;
@property BOOL appliesX;
@property BOOL appliesY;
@property BOOL targetsSuperlayer;

+ (id)defaultValueForKey:(id)arg1;

- (struct Animation { int (**x1)(); struct Atomic { struct { NSInteger x_1_2_1; } x_2_1_1; } x2; float x3; struct Timing {} *x4; struct Vector {} *x5; void *x6; NSUInteger x7; NSUInteger x8; }*)_copyRenderAnimationForLayer:(id)arg1;
- (NSUInteger)_propertyFlagsForLayer:(id)arg1;
- (BOOL)appliesRotation;
- (BOOL)appliesScale;
- (BOOL)appliesX;
- (BOOL)appliesY;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (BOOL)isAdditive;
- (id)keyPath;
- (void)setAdditive:(BOOL)arg1;
- (void)setAppliesRotation:(BOOL)arg1;
- (void)setAppliesScale:(BOOL)arg1;
- (void)setAppliesX:(BOOL)arg1;
- (void)setAppliesY:(BOOL)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setSourceLayer:(id)arg1;
- (void)setSourcePoints:(id)arg1;
- (void)setTargetsSuperlayer:(BOOL)arg1;
- (id)sourceLayer;
- (id)sourcePoints;
- (BOOL)targetsSuperlayer;

@end
