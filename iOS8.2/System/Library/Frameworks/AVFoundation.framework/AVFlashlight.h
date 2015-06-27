/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVFlashlightInternal;

@interface AVFlashlight : NSObject {

	AVFlashlightInternal* _internal;

}

@property (getter=isAvailable,nonatomic,readonly) char available; 
@property (getter=isOverheated,nonatomic,readonly) char overheated; 
@property (nonatomic,readonly) float flashlightLevel; 
+(char)hasFlashlight;
+(void)initialize;
+(id)alloc;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(float)flashlightLevel;
-(char)turnPowerOnWithError:(id*)arg1 ;
-(char)setFlashlightLevel:(float)arg1 withError:(id*)arg2 ;
-(char)isOverheated;
-(void)turnPowerOff;
-(void)_setupFlashlight;
-(void)_teardownFlashlight;
-(void)dealloc;
-(id)init;
-(char)isAvailable;
@end
