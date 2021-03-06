/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:40:53 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AAUICredentialRecoveryPresentationDelegate
@optional
-(id)navigationItemToShowInitialLoadingForCredentialRecoveryController:(id)arg1;
-(id)navigationControllerForPresentationWithCredentialRecoveryController:(id)arg1;

@required
-(void)credentialRecoveryController:(id)arg1 didFailWithError:(id)arg2;
-(void)credentialRecoveryController:(id)arg1 finishedWithSuccess:(char)arg2;
-(void)credentialRecoveryController:(id)arg1 needsPresentationOfViewController:(id)arg2;

@end

