/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/GAXSpringboardServer.bundle/GAXSpringboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GAXSpringboardServer/GAXSpringboardServer-Structs.h>
#import <GAXSpringboardServer/__GAXSpringBoardOverride_super.h>

@interface GAXSpringBoardOverride : __GAXSpringBoardOverride_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)statusBarReturnActionTap:(GSEventRef)arg1 ;
-(BOOL)_gaxShouldAllowOpeningURL:(id)arg1 ;
-(void)_revealSpotlight;
-(void)_applicationOpenURL:(id)arg1 withApplication:(id)arg2 sender:(id)arg3 publicURLsOnly:(BOOL)arg4 animating:(BOOL)arg5 activationSettings:(id)arg6 withResult:(/*^block*/id)arg7 ;
-(BOOL)_requestPermissionToOpenURL:(id)arg1 withApplication:(id)arg2 sender:(id)arg3 ;
-(BOOL)handleEvent:(GSEventRef)arg1 withNewEvent:(id)arg2 ;
-(void)batteryStatusDidChange:(id)arg1 ;
@end

