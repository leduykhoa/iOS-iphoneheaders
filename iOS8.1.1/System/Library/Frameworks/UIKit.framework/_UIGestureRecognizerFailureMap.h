/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface _UIGestureRecognizerFailureMap : NSObject {

	NSMutableArray* _gestureRecognizers;
	char* _failureMap;
	int _unmetFailureRequirementCount;
	int _unmetFailureDependentCount;

}

@property (readonly) BOOL hasUnmetFailureRequirementsOrDependents; 
+(void)buildFailureMapForGestureRecognizer:(id)arg1 ;
+(void)buildFailureMapForGestureRecognizers:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)gestureRecognizerDeallocated:(id)arg1 ;
-(void)reloadFailureMap;
-(void)gestureRecognizerFinished:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isGestureRecognizerWaitingForGestureRecognizersToFail:(id)arg1 ;
-(BOOL)hasUnmetFailureRequirementsOrDependents;
-(void)gestureRecognizerBecameDirty:(id)arg1 ;
-(void)rebuildFailureMap;
-(void)_rebuildFailureMapDefferingRelease;
-(void)_gestureRecognizerFinished:(id)arg1 withEvent:(id)arg2 ;
-(void)_queueRecognizersForResetIfFinished;
-(id)initWithRelatedGestures:(id)arg1 ;
@end
