/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartAllElementSceneObjectDelegate.h>

@class NSString;

@interface TSCH3DChartSelectedElementSceneObjectDelegate : NSObject <TSCH3DChartAllElementSceneObjectDelegate> {

	unsigned long long mSelectedSeriesIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ElementRenderPass)renderPassForSceneObject:(id)arg1 ;
-(BOOL)willBeginProcessingSceneObject:(id)arg1 ;
-(void)didEndProcessingSceneObject:(id)arg1 ;
-(BOOL)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(BOOL)willProcessSeries:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 ;
-(void)didGenerateShaderEffectsForSeriesAtIndex:(const tvec2<int>*)arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4 ;
-(BOOL)willProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 ;
-(void)didProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 ;
-(BOOL)willProcessElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(ElementRenderPass)renderPassForElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(BOOL)willUpdateElementEffectsStatesForElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(void)didTransformElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(BOOL)willRenderElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(BOOL)willSubmitElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(id)initWithSelectedSeriesIndex:(unsigned long long)arg1 ;
@end
