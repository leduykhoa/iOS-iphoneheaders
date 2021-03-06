/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:49 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/Support/nanoappregistryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nanoappregistryd/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSObject, NADSyncController, NADApplicationStore, NSString;

@interface NADaemon : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _workspaceListener;
	NSObject*<OS_dispatch_queue> _queue;
	NADSyncController* _syncController;
	NADApplicationStore* _applicationStore;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDaemon;
-(void)registerForLaunchEvents;
-(void)startSyncControllerIfNeeded;
-(id)init;
-(void)start;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

