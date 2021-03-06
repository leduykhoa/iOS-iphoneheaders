/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/SpringBoardPlugins/ChatKit.servicebundle/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKAlertItem.h>

@class NSString;

@interface CKCarrierSMSAlertItem : CKAlertItem {

	NSString* _messageBody;
	NSString* _sender;
	/*^block*/id _acknowledgeBlock;

}
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(id)name;
-(void)didDeactivateForReason:(int)arg1 ;
-(id)messageText;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(char)willShowInAwayItems;
-(char)shouldShowInEmergencyCall;
-(char)shouldShowInLockScreen;
-(id)initWithMessageBody:(id)arg1 sender:(id)arg2 acknowledgeBlock:(/*^block*/id)arg3 ;
@end

