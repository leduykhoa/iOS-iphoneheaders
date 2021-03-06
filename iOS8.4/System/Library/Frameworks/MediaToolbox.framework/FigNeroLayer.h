/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <QuartzCore/CALayer.h>

@protocol OS_dispatch_queue, FigNeroLayerDelegate;
@class NSObject;

@interface FigNeroLayer : CALayer {

	NSObject*<OS_dispatch_queue> _neroQueue;
	OpaqueFigNeroidRef _neroid;
	id<FigNeroLayerDelegate> _neroDelegate;

}

@property (assign,nonatomic) id<FigNeroLayerDelegate> neroDelegate; 
-(void)_dispatchNotification:(id)arg1 value:(id)arg2 ;
-(id<FigNeroLayerDelegate>)neroDelegate;
-(void)setNeroDelegate:(id<FigNeroLayerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(void)stop;
-(void)_start;
-(void)start;
@end

