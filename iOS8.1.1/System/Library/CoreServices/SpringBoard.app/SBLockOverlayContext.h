/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class SBLockOverlayViewController;

@interface SBLockOverlayContext : NSObject {

	SBLockOverlayViewController* _viewController;
	unsigned long long _priority;
	/*^block*/id _activationBlock;
	/*^block*/id _deactivationBlock;

}

@property (nonatomic,readonly) SBLockOverlayViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                               //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) id activationBlock;                                            //@synthesize activationBlock=_activationBlock - In the implementation block
@property (nonatomic,copy) id deactivationBlock;                                          //@synthesize deactivationBlock=_deactivationBlock - In the implementation block
-(id)initWithOverlayViewController:(id)arg1 priority:(unsigned long long)arg2 ;
-(void)setActivationBlock:(id)arg1 ;
-(void)setDeactivationBlock:(id)arg1 ;
-(id)activationBlock;
-(id)deactivationBlock;
-(void)dealloc;
-(SBLockOverlayViewController *)viewController;
-(unsigned long long)priority;
@end

