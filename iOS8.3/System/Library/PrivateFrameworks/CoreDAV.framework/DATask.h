/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:10:17 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DATask <NSObject>
@optional
-(void)startModal;
-(void)requestCancelTaskWithReason:(int)arg1;
-(char)shouldHoldPowerAssertion;
-(void)setTaskManager:(id)arg1;
-(char)shouldForceNetworking;

@required
-(void)finishWithError:(id)arg1;
-(void)performTask;
-(void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2;

@end

