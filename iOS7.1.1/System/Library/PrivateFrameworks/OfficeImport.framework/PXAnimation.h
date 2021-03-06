/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PXAnimation : NSObject
+(void)readCommonTimeNodeData:(xmlNode*)arg1 commonTimeNodeData:(id)arg2 drawingState:(id)arg3 ;
+(id)readParagraphBuild:(xmlNode*)arg1 ;
+(id)readOleChartBuild:(xmlNode*)arg1 ;
+(id)readGraphicBuild:(xmlNode*)arg1 ;
+(void)readTimeNodeType:(id)arg1 commonTimeNodeData:(id)arg2 ;
+(void)readPresetClass:(id)arg1 commonTimeNodeData:(id)arg2 ;
+(void)readRestartType:(id)arg1 commonTimeNodeData:(id)arg2 ;
+(void)readChildTimeNodeList:(xmlNode*)arg1 commonTimeNodeData:(id)arg2 drawingState:(id)arg3 ;
+(void)readIterate:(xmlNode*)arg1 commonTimeNodeData:(id)arg2 drawingState:(id)arg3 ;
+(void)readStConditionList:(xmlNode*)arg1 commonTimeNodeData:(id)arg2 drawingState:(id)arg3 ;
+(void)readAnimElement:(xmlNode*)arg1 timeNode:(id)arg2 drawingState:(id)arg3 ;
+(void)readAnimEffectElement:(xmlNode*)arg1 timeNode:(id)arg2 drawingState:(id)arg3 ;
+(void)readAnimMotionElement:(xmlNode*)arg1 timeNode:(id)arg2 drawingState:(id)arg3 ;
+(void)readAnimRotationElement:(xmlNode*)arg1 timeNode:(id)arg2 drawingState:(id)arg3 ;
+(void)readAnimScaleElement:(xmlNode*)arg1 timeNode:(id)arg2 drawingState:(id)arg3 ;
+(void)readAnimAudioElement:(xmlNode*)arg1 timeNode:(id)arg2 drawingState:(id)arg3 ;
+(void)readAnimVideoElement:(xmlNode*)arg1 timeNode:(id)arg2 drawingState:(id)arg3 ;
+(void)readAnimCmdElement:(xmlNode*)arg1 timeNode:(id)arg2 drawingState:(id)arg3 ;
+(void)readAnimParallelElement:(xmlNode*)arg1 timeNode:(id)arg2 drawingState:(id)arg3 ;
+(void)readAnimSequentialElement:(xmlNode*)arg1 timeNode:(id)arg2 drawingState:(id)arg3 ;
+(void)readAnimSetElement:(xmlNode*)arg1 timeNode:(id)arg2 drawingState:(id)arg3 ;
+(void)readCondition:(xmlNode*)arg1 timeCondition:(id)arg2 drawingState:(id)arg3 ;
+(void)readTriggerEvent:(id)arg1 timeCondition:(id)arg2 ;
+(id)newTarget:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)newShapeTarget:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(void)readChartType:(id)arg1 oleChartTarget:(id)arg2 ;
+(void)readCommonBehaviorData:(xmlNode*)arg1 tgtCommonBehaviorData:(id)arg2 drawingState:(id)arg3 ;
+(void)readPointFromNode:(xmlNode*)arg1 tgtPoint:(CGPoint*)arg2 ;
+(void)readCommonMediaNodeData:(xmlNode*)arg1 commonMediaData:(id)arg2 drawingState:(id)arg3 ;
+(id)readAnimVariant:(xmlNode*)arg1 ;
+(int)readChartBuildType:(id)arg1 ;
+(void)readAnimationFromTimingXmlNode:(xmlNode*)arg1 tgtAnimation:(id)arg2 drawingState:(id)arg3 ;
@end

