/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDAffineGeometry, GQDBezierPath;

@interface GQDDrawable : NSObject <GQWrapPointGenerator> {
    struct set<GQUtility::ObjcSharedPtr<GQDWrapPoint>,GQUtility::NSObjectComparator<GQDWrapPoint>,std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > { struct _Rb_tree<GQUtility::ObjcSharedPtr<GQDWrapPoint>,GQUtility::ObjcSharedPtr<GQDWrapPoint>,std::_Identity<GQUtility::ObjcSharedPtr<GQDWrapPoint> >,GQUtility::NSObjectComparator<GQDWrapPoint>,std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > { 
            struct _Rb_tree_impl<GQUtility::NSObjectComparator<GQDWrapPoint>,false> { 
                struct NSObjectComparator<GQDWrapPoint> { 
                    SEL mCompareSelector; 
                } _M_key_compare; 
                struct _Rb_tree_node_base { 
                    NSInteger _M_color; 
                    struct _Rb_tree_node_base {} *_M_parent; 
                    struct _Rb_tree_node_base {} *_M_left; 
                    struct _Rb_tree_node_base {} *_M_right; 
                } _M_header; 
                NSUInteger _M_node_count; 
            } _M_impl; 
    GQDAffineGeometry *mGeometry;
    BOOL mHasPagesOrder;
        } x1; } *mInnerWrapPoints;
    long mPagesOrder;
    char *mUid;
    struct __CFURL { } *mUrl;
    GQDAffineGeometry *mWrapGeometry;
    GQDBezierPath *mWrapPath;
}

- (void)addWrapPoint:(id)arg1;
- (void)clearWrapPoints;
- (void)collectWrapPoints:(id)arg1 forPath:(struct CGPath { }*)arg2 context:(struct FindLinesContext { BOOL x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct __CFArray {} *x4; BOOL x5; NSInteger x6; }*)arg3;
- (NSInteger)collectWrapPointsForState:(id)arg1 graphicStyle:(id)arg2;
- (struct CGPath { }*)createBezierPath;
- (struct vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>,std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > { struct _Vector_impl { struct ObjcSharedPtr<GQDWrapPoint> {} *x_1_1_1; struct ObjcSharedPtr<GQDWrapPoint> {} *x_1_1_2; struct ObjcSharedPtr<GQDWrapPoint> {} *x_1_1_3; } x1; }*)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(NSInteger)arg4;
- (void)dealloc;
- (id)geometry;
- (BOOL)hasPagesOrder;
- (NSInteger)pagesOrder;
- (const char *)uid;
- (struct __CFURL { }*)url;
- (struct __CFString { }*)urlString;
- (const struct set<GQUtility::ObjcSharedPtr<GQDWrapPoint>,GQUtility::NSObjectComparator<GQDWrapPoint>,std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > { struct _Rb_tree<GQUtility::ObjcSharedPtr<GQDWrapPoint>,GQUtility::ObjcSharedPtr<GQDWrapPoint>,std::_Identity<GQUtility::ObjcSharedPtr<GQDWrapPoint> >,GQUtility::NSObjectComparator<GQDWrapPoint>,std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > { struct _Rb_tree_impl<GQUtility::NSObjectComparator<GQDWrapPoint>,false> { struct NSObjectComparator<GQDWrapPoint> { SEL x_1_3_1; } x_1_2_1; struct _Rb_tree_node_base { NSInteger x_2_3_1; struct _Rb_tree_node_base {} *x_2_3_2; struct _Rb_tree_node_base {} *x_2_3_3; struct _Rb_tree_node_base {} *x_2_3_4; } x_1_2_2; NSUInteger x_1_2_3; } x_1_1_1; } x1; }*)wrapPoints;

@end
