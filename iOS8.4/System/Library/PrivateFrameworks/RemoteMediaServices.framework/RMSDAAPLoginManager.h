/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class RMSDAAPRequestManager, RMSFairPlaySession;

@interface RMSDAAPLoginManager : NSObject {

	RMSDAAPRequestManager* _requestManager;
	RMSFairPlaySession* _fairPlaySession;
	BOOL _isFairPlayRequired;

}
-(void)_requestControlInterfaceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_requestFairPlayHandshake:(/*^block*/id)arg1 ;
-(void)_requestLoginWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_requestServerInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_isFairplayRequiredForServerInfo:(id)arg1 ;
-(void)_continueFairPlayHandshakeWithData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithRequestManager:(id)arg1 ;
-(void)loginWithCompletionHandler:(/*^block*/id)arg1 ;
@end

