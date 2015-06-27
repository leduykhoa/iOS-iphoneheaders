/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:36 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationController.h>

@class SBStarkScreenController;

@interface SBUIStarkScreenAnimationController : SBUIAnimationController {

	SBStarkScreenController* _starkScreenController;

}

@property (nonatomic,retain,readonly) SBStarkScreenController * starkScreenController;              //@synthesize starkScreenController=_starkScreenController - In the implementation block
-(SBStarkScreenController *)starkScreenController;
-(id)_getTransitionWindow;
-(void)_cleanupAnimation;
-(id)initWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2 starkScreenController:(id)arg3 ;
-(void)__startAnimation;
-(id)__newWaitForAppActivationTransaction;
-(char)__wantsInitialProgressStateChange;
-(void)dealloc;
@end
