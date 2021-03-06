/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebKitLegacy/WebGeolocationProviderInitializationListener.h>

@protocol WebGeolocationProviderInitializationListener <NSObject>
@required
-(void)initializationAllowedWebView:(id)arg1;
-(void)initializationDeniedWebView:(id)arg1;

@end


@class NSString;

@interface WebGeolocationProviderInitializationListener : NSObject <WebGeolocationProviderInitializationListener> {

	RefPtr<WebCore::Geolocation>* m_geolocation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithGeolocation:(Geolocation*)arg1 ;
-(void)initializationAllowedWebView:(id)arg1 ;
-(void)initializationDeniedWebView:(id)arg1 ;
@end

