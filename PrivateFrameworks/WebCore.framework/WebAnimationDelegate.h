/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class WebLayer, WebAnimationDelegate;

@interface WebAnimationDelegate : NSObject {
    struct GraphicsLayerCA { int (**x1)(); struct GraphicsLayerClient {} *x2; struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } x3; struct IntSize { 
            NSInteger m_width; 
            NSInteger m_height; 
        } x4; struct FloatPoint { 
            float m_x; 
            float m_y; 
        } x5; struct FloatPoint3D { 
            float m_x; 
            float m_y; 
            float m_z; 
        } x6; struct FloatSize { 
            float m_width; 
            float m_height; 
        } x7; struct TransformationMatrix { 
            double m_matrix[4][4]; 
        } x8; struct TransformationMatrix { 
            double m_matrix[4][4]; 
        } x9; struct Color { 
            NSUInteger m_color; 
            /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*m_valid; 
        } x10; float x11; float x12; float x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; NSInteger x21; struct Vector<WebCore::GraphicsLayer*,0ul> { 
            NSUInteger m_size; 
            struct VectorBuffer<WebCore::GraphicsLayer*,0ul> { 
                struct GraphicsLayer {} **m_buffer; 
                NSUInteger m_capacity; 
            } m_buffer; 
        } x22; struct GraphicsLayer {} *x23; struct Vector<WebCore::GraphicsLayer::AnimationEntry,0ul> { 
            NSUInteger m_size; 
            struct VectorBuffer<WebCore::GraphicsLayer::AnimationEntry,0ul> { 
                struct AnimationEntry {} *m_buffer; 
                NSUInteger m_capacity; 
            } m_buffer; 
        } x24; struct RetainPtr<WebLayer> { 
            WebLayer *m_ptr; 
        } x25; struct RetainPtr<WebLayer> { 
            WebLayer *m_ptr; 
        } x26; struct RetainPtr<WebLayer> { 
            WebLayer *m_ptr; 
        } x27; struct RetainPtr<WebAnimationDelegate> { 
            WebAnimationDelegate *m_ptr; 
     /* Encoded args for previous method: ^{GraphicsLayerCA=^^?^{GraphicsLayerClient}{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}{IntSize=ii}{FloatPoint=ff}{FloatPoint3D=fff}{FloatSize=ff}{TransformationMatrix=[4[4d]]}{TransformationMatrix=[4[4d]]}{Color=IB}fffb1b1b1b1b1b1b1i{Vector<WebCore::GraphicsLayer*,0ul>=I{VectorBuffer<WebCore::GraphicsLayer*,0ul>=^^{GraphicsLayer}I}}^{GraphicsLayer}{Vector<WebCore::GraphicsLayer::AnimationEntry,0ul>=I{VectorBuffer<WebCore::GraphicsLayer::AnimationEntry,0ul>=^{AnimationEntry}I}}{RetainPtr<WebLayer>=@}{RetainPtr<WebLayer>=@}{RetainPtr<WebLayer>=@}{RetainPtr<WebAnimationDelegate>=@}B}8@0:4 */
     /* Encoded args for previous method: v12@0:4^{GraphicsLayerCA=^^?^{GraphicsLayerClient}{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}{IntSize=ii}{FloatPoint=ff}{FloatPoint3D=fff}{FloatSize=ff}{TransformationMatrix=[4[4d]]}{TransformationMatrix=[4[4d]]}{Color=IB}fffb1b1b1b1b1b1b1i{Vector<WebCore::GraphicsLayer*,0ul>=I{VectorBuffer<WebCore::GraphicsLayer*,0ul>=^^{GraphicsLayer}I}}^{GraphicsLayer}{Vector<WebCore::GraphicsLayer::AnimationEntry,0ul>=I{VectorBuffer<WebCore::GraphicsLayer::AnimationEntry,0ul>=^{AnimationEntry}I}}{RetainPtr<WebLayer>=@}{RetainPtr<WebLayer>=@}{RetainPtr<WebLayer>=@}{RetainPtr<WebAnimationDelegate>=@}B}8 */
        } x28; void*x29; } *m_graphicsLayer;
}

- (struct GraphicsLayerCA { int (**x1)(); struct GraphicsLayerClient {} *x2; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct IntSize { NSInteger x_4_1_1; NSInteger x_4_1_2; } x4; struct FloatPoint { float x_5_1_1; float x_5_1_2; } x5; struct FloatPoint3D { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; struct FloatSize { float x_7_1_1; float x_7_1_2; } x7; struct TransformationMatrix { double x_8_1_1[4][4]; } x8; struct TransformationMatrix { double x_9_1_1[4][4]; } x9; struct Color { NSUInteger x_10_1_1; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x_10_1_2; } x10; float x11; float x12; float x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; NSInteger x21; struct Vector<WebCore::GraphicsLayer*,0ul> { NSUInteger x_22_1_1; struct VectorBuffer<WebCore::GraphicsLayer*,0ul> { struct GraphicsLayer {} **x_2_2_1; NSUInteger x_2_2_2; } x_22_1_2; } x22; struct GraphicsLayer {} *x23; struct Vector<WebCore::GraphicsLayer::AnimationEntry,0ul> { NSUInteger x_24_1_1; struct VectorBuffer<WebCore::GraphicsLayer::AnimationEntry,0ul> { struct AnimationEntry {} *x_2_2_1; NSUInteger x_2_2_2; } x_24_1_2; } x24; struct RetainPtr<WebLayer> { id x_25_1_1; } x25; struct RetainPtr<WebLayer> { id x_26_1_1; } x26; struct RetainPtr<WebLayer> { id x_27_1_1; } x27; struct RetainPtr<WebAnimationDelegate> { id x_28_1_1; } x28; void*x29; }*)graphicsLayer;
- (void)animationDidStart:(id)arg1;
- (void)setLayer:(struct GraphicsLayerCA { int (**x1)(); struct GraphicsLayerClient {} *x2; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct IntSize { NSInteger x_4_1_1; NSInteger x_4_1_2; } x4; struct FloatPoint { float x_5_1_1; float x_5_1_2; } x5; struct FloatPoint3D { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; struct FloatSize { float x_7_1_1; float x_7_1_2; } x7; struct TransformationMatrix { double x_8_1_1[4][4]; } x8; struct TransformationMatrix { double x_9_1_1[4][4]; } x9; struct Color { NSUInteger x_10_1_1; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x_10_1_2; } x10; float x11; float x12; float x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; NSInteger x21; struct Vector<WebCore::GraphicsLayer*,0ul> { NSUInteger x_22_1_1; struct VectorBuffer<WebCore::GraphicsLayer*,0ul> { struct GraphicsLayer {} **x_2_2_1; NSUInteger x_2_2_2; } x_22_1_2; } x22; struct GraphicsLayer {} *x23; struct Vector<WebCore::GraphicsLayer::AnimationEntry,0ul> { NSUInteger x_24_1_1; struct VectorBuffer<WebCore::GraphicsLayer::AnimationEntry,0ul> { struct AnimationEntry {} *x_2_2_1; NSUInteger x_2_2_2; } x_24_1_2; } x24; struct RetainPtr<WebLayer> { id x_25_1_1; } x25; struct RetainPtr<WebLayer> { id x_26_1_1; } x26; struct RetainPtr<WebLayer> { id x_27_1_1; } x27; struct RetainPtr<WebAnimationDelegate> { id x_28_1_1; } x28; void*x29; }*)arg1;

@end
