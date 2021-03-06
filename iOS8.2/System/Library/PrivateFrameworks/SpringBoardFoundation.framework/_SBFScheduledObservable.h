/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBFObservable.h>

@protocol SBFObservable, SBFScheduler;
@interface _SBFScheduledObservable : SBFObservable {

	id<SBFObservable> _observable;
	id<SBFScheduler> _scheduler;

}
-(void)dealloc;
-(id)subscribe:(id)arg1 ;
-(id)initWithObservable:(id)arg1 scheduler:(id)arg2 ;
@end

