/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray;

@interface TSCH3DChartBuildImageRenderCycle : TSCH3DChartRenderCycle {
    boolmFlipImages;
    boolmIsAntialiasing;
    boolmIsSingleImage;
    boolmShouldConvertToLayerRelativeBounds;
    NSArray *mImages;
}

@property bool antialias;
@property bool flipImages;
@property(readonly) NSArray * images;
@property bool isSingleImage;
@property bool shouldConvertToLayerRelativeBounds;

- (bool)allocateFramebufferWithAllocationInfo:(const struct FramebufferAllocationInfo { id x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; }*)arg1;
- (bool)antialias;
- (void)dealloc;
- (bool)flipImages;
- (struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; } x1; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; } x2; })imageBounds;
- (id)images;
- (id)initWithRenderCycleInfo:(const struct RenderCycleInfo { id x1; id x2; id x3; }*)arg1;
- (bool)isSingleImage;
- (Class)layerCacheLogicClass;
- (Class)layerClass;
- (void)p_allocateTileFramebuffer;
- (id)p_buildImageSetup;
- (void)p_setClippingRectFromVisibleBodyCanvasBounds:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (void)p_setViewportSpaceImages:(id)arg1 samples:(float)arg2;
- (void)p_setupPipelineWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3 antialiasing:(bool)arg4;
- (unsigned long long)p_tileSize;
- (void)restoreDefaultRenderPresenter;
- (bool)runPipeline:(id)arg1;
- (void)setAntialias:(bool)arg1;
- (void)setFlipImages:(bool)arg1;
- (void)setIsSingleImage:(bool)arg1;
- (void)setShouldConvertToLayerRelativeBounds:(bool)arg1;
- (bool)shouldConvertToLayerRelativeBounds;
- (bool)shouldRenderLegendIntoSeparateLayer;
- (void)switchToRenderPresenter:(id)arg1;
- (id)tileFBOResource;
- (id)tilePipeline;

@end