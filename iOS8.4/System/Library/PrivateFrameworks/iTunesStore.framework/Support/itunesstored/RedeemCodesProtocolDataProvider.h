/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunesstored/DaemonProtocolDataProvider.h>

@class ISDialogButton;

@interface RedeemCodesProtocolDataProvider : DaemonProtocolDataProvider {

	ISDialogButton* _dialogButton;

}

@property (retain) ISDialogButton * dialogButton;              //@synthesize dialogButton=_dialogButton - In the implementation block
-(void)setDialogButton:(ISDialogButton *)arg1 ;
-(ISDialogButton *)dialogButton;
-(void)dealloc;
-(BOOL)_runServerAuthenticationOperation:(id)arg1 error:(id*)arg2 ;
@end

