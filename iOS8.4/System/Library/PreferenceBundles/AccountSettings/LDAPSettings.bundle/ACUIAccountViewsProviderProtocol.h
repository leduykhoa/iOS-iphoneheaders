/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/LDAPSettings.bundle/LDAPSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ACUIAccountViewsProviderProtocol <NSObject>
@optional
-(Class)controllerClassForCreatingAccountWithType:(id)arg1;

@required
-(Class)viewControllerClassForCreatingAccountWithType:(id)arg1;
-(id)configurationInfoForCreatingAccountWithType:(id)arg1;
-(Class)viewControllerClassForViewingAccount:(id)arg1;
-(id)configurationInfoForViewingAccount:(id)arg1;
-(id)supportedAccountTypeIdentifiers;

@end

