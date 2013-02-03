/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextInputTraits;

@interface UIDefaultKeyboardInput : UIView <UIKeyboardInput> {
    UITextInputTraits *m_traits;
}

@property(readonly) UIView<UITextSelectingContent> *content;
@property(retain) UIColor *insertionPointColor;
@property(readonly) UITextInteractionAssistant *interactionAssistant;
@property(readonly) UITextSelectionView *selectionView;
@property __CFCharacterSet *textTrimmingSet;
@property BOOL acceptsEmoji;
@property NSInteger autocapitalizationType;
@property NSInteger autocorrectionType;
@property BOOL contentsIsSingleValue;
@property(getter=isEditable,readonly) BOOL editable;
@property(getter=isEditing,readonly) BOOL editing;
@property BOOL enablesReturnKeyAutomatically;
@property NSUInteger insertionPointWidth;
@property NSInteger keyboardAppearance;
@property NSInteger keyboardType;
@property NSInteger returnKeyType;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property NSInteger textLoupeVisibility;
@property NSInteger textSelectionBehavior;
@property id textSuggestionDelegate;

- (BOOL)acceptsEmoji;
- (BOOL)becomesEditableWithGestures;
- (void)beginSelectionChange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRect;
- (unsigned short)characterAfterCaretSelection;
- (unsigned short)characterBeforeCaretSelection;
- (unsigned short)characterInRelationToCaretSelection:(NSInteger)arg1;
- (void)confirmMarkedText:(id)arg1;
- (id)content;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertCaretRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteBackward;
- (void)detachInteractionAssistant;
- (void)detachSelectionView;
- (id)editingDelegate;
- (void)endSelectionChange;
- (void)expandSelectionToStartOfWordContainingCaretSelection;
- (void)extendCurrentSelection:(NSInteger)arg1;
- (id)fontForCaretSelection;
- (void)forwardInvocation:(id)arg1;
- (BOOL)hasContent;
- (BOOL)hasSelection;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (BOOL)isProxyFor:(id)arg1;
- (BOOL)isSecure;
- (BOOL)isShowingPlaceholder;
- (id)keyboardInputView;
- (id)markedText;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })markedTextRange;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)moveBackward:(NSUInteger)arg1;
- (void)moveForward:(NSUInteger)arg1;
- (BOOL)rangeAtSentenceStart:(id)arg1;
- (id)rangeByExtendingCurrentSelection:(NSInteger)arg1;
- (id)rangeByMovingCurrentSelection:(NSInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectContainingCaretSelection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForNSRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)rectsForNSRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)replaceCurrentWordWithText:(id)arg1;
- (void)replaceRangeWithText:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 replacementText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 replacementText:(id)arg2;
- (void)selectAll;
- (id)selectedDOMRange;
- (BOOL)selectionAtDocumentStart;
- (BOOL)selectionAtSentenceStart;
- (BOOL)selectionAtWordStart;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionClipRect;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })selectionRange;
- (NSInteger)selectionState;
- (id)selectionView;
- (void)setAcceptsEmoji:(BOOL)arg1;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (void)setEditingDelegate:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)setMarkedText:(id)arg1;
- (void)setSecure:(BOOL)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(BOOL)arg2;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)setupPlaceholderTextIfNeeded;
- (void)takeTraitsFrom:(id)arg1;
- (id)text;
- (id)textColorForCaretSelection;
- (id)textInputTraits;
- (void)updateSelection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleBounds;
- (id)wordContainingCaretSelection;
- (id)wordInRange:(id)arg1;
- (NSInteger)wordOffsetInRange:(id)arg1;
- (id)wordRangeContainingCaretSelection;

@end
