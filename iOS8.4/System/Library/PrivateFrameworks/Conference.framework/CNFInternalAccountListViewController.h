/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class IMServiceImpl, FTRegConnectionHandler;

@interface CNFInternalAccountListViewController : PSListController {

	IMServiceImpl* _service;
	FTRegConnectionHandler* _connectionHandler;

}

@property (nonatomic,retain) IMServiceImpl * service;              //@synthesize service=_service - In the implementation block
-(void)_startListeningForNotifications;
-(id)initWithServiceType:(long long)arg1 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)accountTappedWithSpecifier:(id)arg1 ;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_handleAccountNotification:(id)arg1 ;
-(void)_stopListeningForNotifications;
-(void)_handleDaemonDisconnected:(id)arg1 ;
-(id)accountNameForSpecifier:(id)arg1 ;
-(IMServiceImpl *)service;
-(void)setService:(IMServiceImpl *)arg1 ;
-(id)specifiers;
@end

