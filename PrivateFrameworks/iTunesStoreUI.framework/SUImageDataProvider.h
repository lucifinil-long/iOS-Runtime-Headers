/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUImageModifier, UIColor;

@interface SUImageDataProvider : ISDataProvider <NSCopying> {
    struct CGSize { 
        float width; 
        float height; 
    UIColor *_fillColor;
    } _finalSize;
    SUImageModifier *_modifier;
}

@property(retain) SUImageModifier *modifier; /* unknown property attribute: V_modifier */
@property CGSize finalSize; /* unknown property attribute: V_finalSize */
@property(retain) UIColor *fillColor; /* unknown property attribute: V_fillColor */

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createImageFromImage:(id)arg1;
- (void)dealloc;
- (id)fillColor;
- (struct CGSize { float x1; float x2; })finalSize;
- (id)modifier;
- (BOOL)parseData:(id)arg1 returningError:(id*)arg2;
- (void)setFillColor:(id)arg1;
- (void)setFinalSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setModifier:(id)arg1;

@end
