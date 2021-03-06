/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet;

@interface SBOrientationLockManager : NSObject {

	NSMutableSet* _lockOverrideReasons;
	int _userLockedOrientation;

}
+(id)sharedInstance;
-(void)restoreStateFromPrefs;
-(void)enableLockOverrideForReason:(id)arg1 forceOrientation:(int)arg2 ;
-(void)setLockOverrideEnabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)enableLockOverrideForReason:(id)arg1 suggestOrientation:(int)arg2 ;
-(void)lock:(int)arg1 ;
-(BOOL)_effectivelyLocked;
-(void)_updateLockStateWithOrientation:(int)arg1 forceUpdateHID:(BOOL)arg2 changes:(/*^block*/ id)arg3 ;
-(void)_updateLockStateWithChanges:(/*^block*/ id)arg1 ;
-(BOOL)lockOverrideEnabled;
-(int)userLockOrientation;
-(void)updateLockOverrideForCurrentDeviceOrientation;
-(void)dealloc;
-(id)init;
-(BOOL)isLocked;
-(void)lock;
-(void)unlock;
@end

