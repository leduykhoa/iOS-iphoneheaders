/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/UserEventPlugins/MobileBackupUEA.plugin/MobileBackupUEA
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UsageSettings/MBManagerDelegate.h>

@protocol OS_dispatch_queue;
@class PCPersistentTimer, NSObject, MBManager;

@interface MBUEAPlugin : NSObject <MBManagerDelegate> {

	void* _reachabilityRef;
	int _screenLockedToken;
	int _powerToken;
	int _profilesToken;
	int _keybagToken;
	int _appleAccountToken;
	PCPersistentTimer* _pcTimer;
	NSObject<OS_dispatch_queue>* _eventQueue;
	bool _isPowered;
	bool _isScreenLocked;
	bool _isOnWiFi;
	bool _ignorePowerState;
	bool _enabled;
	MBManager* _manager;

}

@property (assign) bool isPowered; 
@property (assign) bool isScreenLocked; 
@property (assign) bool isOnWiFi; 
@property (assign) bool enabled; 
-(id)initWithEventQueue:(id)arg1 ;
-(void)setIsOnWiFi:(bool)arg1 ;
-(void)_updatePCTimer;
-(bool)isOnWiFi;
-(bool)isPowered;
-(void)_pcTimerFired;
-(void)notifyDaemonOfAccountChange;
-(void)setIsPowered:(bool)arg1 ;
-(void)notifyDaemonThatKeyBagIsLocking;
-(void)notifyDaemonThatKeyBagIsUnlocked;
-(void)setIsScreenLocked:(bool)arg1 ;
-(void)_stateDidChange;
-(void)_updateEnabledState;
-(void)dealloc;
-(void)setEnabled:(bool)arg1 ;
-(void)cancel;
-(bool)enabled;
-(bool)isScreenLocked;
-(void)managerDidLoseConnectionToService:(id)arg1 ;
-(void)_install;
@end
