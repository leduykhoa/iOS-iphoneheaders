/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol PKPaymentProvisioningServiceDelegate <NSObject>
@optional
-(void)deleteCardWithAID:(id)arg1;
-(void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)registrationDataWithAuthToken:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)configurationDataWithCompletionHandler:(/*^block*/id)arg1;
-(void)provisioningDataWithCompletionHandler:(/*^block*/id)arg1;
-(int)paymentSupportedInCurrentRegionForWebService:(id)arg1;
-(void)paymentWebServiceDidUpdateConfiguration:(id)arg1;
-(void)setNewAuthRandomIfNecessary:(/*^block*/id)arg1;
-(id)filterVerificationChannels:(id)arg1;
-(void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2;

@required
-(void)shouldArchiveContext:(id)arg1;
-(void)shouldArchiveBackgroundContext:(id)arg1;

@end

