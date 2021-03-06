/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer;

@interface ContentProtectionTesting : NSObject {

	NSTimer* _lockTimer;

}
+(id)sharedInstance;
-(void)_simulateContentProtectionState:(int)arg1 ;
-(void)_lockTimerFired:(id)arg1 ;
-(void)_invalidateLockTimer;
-(void)toggleLockState;
-(void)disableContentProtection;
-(id)init;
@end

