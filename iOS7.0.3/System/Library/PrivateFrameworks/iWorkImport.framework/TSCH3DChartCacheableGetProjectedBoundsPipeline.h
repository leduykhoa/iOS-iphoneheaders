/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartGetProjectedBoundsPipeline.h>

@class TSCH3DGetBoundsProjector;

@interface TSCH3DChartCacheableGetProjectedBoundsPipeline : TSCH3DChartGetProjectedBoundsPipeline {

	BOOL mUseIndividualBounds;
	BOOL mLayoutBoundsValid;
	box<glm::detail::tvec3<float> > mShadowsLayout3DBounds;
	box<glm::detail::tvec3<float> > mLayout3DBounds;
	box<glm::detail::tvec3<float> > mBodyLayout3DBounds;
	box<glm::detail::tvec3<float> > mConstantDepthBodyLayout3DBounds;
	TSCH3DGetBoundsProjector* mProjector;

}

@property (assign,nonatomic) BOOL useIndividualBounds; 
+(BOOL)includesDepthForUnitScaleForScene:(id)arg1 ;
+(void)setIncludesDepthForUnitScale:(BOOL)arg1 forScene:(id)arg2 ;
-(BOOL)useIndividualBounds;
-(id)initWithScene:(id)arg1 ;
-(void)invalidateCachedBounds;
-(void)setUseIndividualBounds:(BOOL)arg1 ;
-(id)updatedConstantDepthSceneFromScene:(id)arg1 ;
-(box<glm::detail::tvec3<float> >)boundsFromObjectBoundsOfType:(int)arg1 ;
-(void)calculateLayoutBounds;
-(void)calculateBounds;
-(void)updateLayoutBounds;
-(void)updateRenderBounds;
-(void)calculateLayoutLabelsBounds;
-(Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1 ;
-(void)updateBounds;
-(void)dealloc;
-(id).cxx_construct;
@end

