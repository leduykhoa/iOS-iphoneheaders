/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSURL, SBApplication, NSString;

@interface SBCallPermissionAlertItem : SBAlertItem {

	NSURL* _url;
	SBApplication* _appHandlingURL;
	NSString* _sender;

}
-(id)initWithURL:(id)arg1 applicationHandlingURL:(id)arg2 sender:(id)arg3 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(BOOL)dismissOnLock;
-(BOOL)allowMenuButtonDismissal;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
@end

