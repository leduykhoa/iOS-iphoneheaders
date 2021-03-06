/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class SSVLoadURLOperation, ASApplePackPage, SKUIClientContext, NSOperationQueue, UIViewController;

@interface ASLaunchNotificationsController : NSObject {

	SSVLoadURLOperation* _applePackOperation;
	ASApplePackPage* _applePackPage;
	SKUIClientContext* _clientContext;
	BOOL _didDisplayThisRunCycle;
	BOOL _loadingApplePack;
	NSOperationQueue* _operationQueue;
	UIViewController* _parentViewController;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
-(void)displayAvailableNotifications;
-(void)checkForNotifications;
-(BOOL)_hasDisplayedApplePack;
-(void)_loadApplePack;
-(void)_displayApplePack;
-(void)_reloadApplePackPage;
-(void)_setApplePackDisplayed:(BOOL)arg1 ;
-(void)_loadApplePackWithURLString:(id)arg1 ;
-(void)_setApplePack:(id)arg1 error:(id)arg2 ;
-(void)dealloc;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)itemStateCenterRestrictionsChanged:(id)arg1 ;
-(id)clientContext;
-(id)initWithParentViewController:(id)arg1 ;
-(void).cxx_destruct;
-(void)setClientContext:(id)arg1 ;
@end

