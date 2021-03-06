/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCH3DSceneObject : NSObject
+(id)sceneObject;
+(id)renderCacheKey;
+(void)setSelectionPath:(id)arg1 selectionMode:(int)arg2 forScene:(id)arg3 ;
+(float)textRotationForChartInfo:(id)arg1 ;
-(void)addZAxisAnimationToClips:(id)arg1 scene:(id)arg2 ;
-(box<glm::detail::tvec1<float> >)shadowBlendRangeForChartDeliveryStyle:(unsigned)arg1 ;
-(box<glm::detail::tvec3<float> >)shadowPlanePadding;
-(char)growAnimationSequenceInOrderForChartDeliveryStyle:(unsigned)arg1 ;
-(char)growAnimationLinearInterpolationForChartDeliveryStyle:(unsigned)arg1 ;
-(void)addTitleAnimationToClips:(id)arg1 ;
-(void)getBounds:(id)arg1 ;
-(void)statePreservedPrerender:(id)arg1 ;
-(void)statePreservedRender:(id)arg1 ;
-(void)statePreservedPostrender:(id)arg1 ;
-(void)postGetBounds:(id)arg1 ;
-(void)statePreservedRayPick:(id)arg1 ;
-(void)rayPick:(id)arg1 ;
-(void)postrender:(id)arg1 ;
-(void)primeRenderCaches:(id)arg1 ;
-(void)getSelectionKnobsPositions:(id)arg1 ;
-(id)selectionPathForInfo:(id)arg1 scene:(id)arg2 pickedPoint:(id)arg3 ;
-(id)convertSelectionPathTo3D:(id)arg1 path:(id)arg2 ;
-(char)canRenderSelectionPath:(id)arg1 forInfo:(id)arg2 ;
-(char)canEditTextForSelectionPath:(id)arg1 forInfo:(id)arg2 ;
-(id)renderInfoForSelectionPath:(id)arg1 info:(id)arg2 ;
-(float)shadowCameraDepthLimitAdjustmentFactorForScene:(id)arg1 ;
-(void)prerender:(id)arg1 ;
-(void)statePreservedPrimeRenderCaches:(id)arg1 ;
-(void)statePreservedGetSelectionKnobsPositions:(id)arg1 ;
-(Class)chartBoundsLayoutSceneDelegateClass;
-(int)p_animationTextureSceneDelegateChunkPlane;
-(char)animationTextureSceneDelegateShouldSkipForRep:(id)arg1 finalElements:(char)arg2 chunkStage:(int)arg3 ;
-(EdgeDetectionParameters)edgeDetectionParameters;
-(void)render:(id)arg1 ;
@end

