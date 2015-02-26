/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:02:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoardAccessibility_super.h>

@interface SpringBoardAccessibility : SpringBoardAccessibility_super
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(id)_initializeSafeCategoryFromValidationManager;
-(void)_proximityChanged:(id)arg1 ;
-(BOOL)_isDim;
-(void)_accessibilityHandleOrientationChange;
-(void)noteInterfaceOrientationChanged:(int)arg1 duration:(float)arg2 updateMirroredDisplays:(BOOL)arg3 force:(BOOL)arg4 ;
-(void)accessibilityInitialize;
-(int)_accessibilityApplicationOrientation;
-(BOOL)_accessibilityIsSystemSleeping;
-(BOOL)_accessibilityIsVoiceControlRunning;
-(int)_accessibilityCurrentCallState;
-(BOOL)_accessibilityIsSystemLocked;
-(BOOL)_accessibilityIsBatteryLow;
-(BOOL)_accessibilityIsBuddyRunning;
-(void)reboot;
-(BOOL)_accessibilityAssistantIsListening;
-(BOOL)_accessibilitySystemWideGestureInProgress;
-(BOOL)_accessibilityIsAppSwitcherVisible;
-(BOOL)_accessibilityIsQuietModeEnabled;
-(BOOL)_accessibilityShowControlCenter:(BOOL)arg1 ;
-(void)_updateRingerState:(int)arg1 withVisuals:(BOOL)arg2 updatePreferenceRegister:(BOOL)arg3 ;
-(void)powerDown;
-(BOOL)_accessibilityIsPointInAXInspector:(id)arg1 ;
-(BOOL)accessibilityPerformAction:(int)arg1 withValue:(id)arg2 ;
-(void)_accessibilityDeactivationAnimationWillBegin;
-(BOOL)handleDoubleHeightStatusBarTap:(int)arg1 ;
-(void)_accessibilityStatusChanged:(id)arg1 ;
-(BOOL)_accessibilityIsSystemAppServer;
-(id)accessibilityAttributeValue:(int)arg1 ;
-(BOOL)_accessibilityHitTestsStatusBar;
-(BOOL)_accessibilitySystemAppServerIsReady;
-(void)accessibilityDisable;
-(id)_accessibilityStatusBar;
-(BOOL)accessibilityStartStopToggle;
-(id)_accessibilityLaunchableApps;
-(id)_accessibilityAppSwitcherApps;
@end
