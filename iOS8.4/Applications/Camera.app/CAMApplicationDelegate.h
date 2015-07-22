/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Camera.app/Camera
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Camera/Camera-Structs.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, DeferredPUCameraApplicationViewController, NSString;

@interface CAMApplicationDelegate : NSObject <UIApplicationDelegate> {

	UIWindow* __window;
	DeferredPUCameraApplicationViewController* __applicationViewController;

}

@property (nonatomic,readonly) UIWindow * _window;                                                                  //@synthesize _window=__window - In the implementation block
@property (nonatomic,readonly) DeferredPUCameraApplicationViewController * _applicationViewController;              //@synthesize _applicationViewController=__applicationViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(DeferredPUCameraApplicationViewController *)_applicationViewController;
-(char)wantsWindowRotationAnimation;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)application:(id)arg1 didFinishLaunchingSuspendedWithOptions:(id)arg2 ;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg1 ;
-(UIWindow *)_window;
@end
