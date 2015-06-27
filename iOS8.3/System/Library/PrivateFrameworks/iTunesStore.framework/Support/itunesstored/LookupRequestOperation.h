/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:37:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <itunesstored/ISStoreURLOperationDelegate.h>

@class SSAuthenticationContext, NSString, ISFairPlaySAPSession, SSLookupProperties, SSLookupResponse;

@interface LookupRequestOperation : ISOperation <ISStoreURLOperationDelegate> {

	SSAuthenticationContext* _authenticationContext;
	NSString* _clientIdentifierHeader;
	ISFairPlaySAPSession* _mescalSession;
	int _personalizationStyle;
	SSLookupProperties* _properties;
	SSLookupResponse* _response;
	NSString* _userAgent;

}

@property (readonly) SSLookupProperties * lookupProperties; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (copy) NSString * clientIdentifierHeader; 
@property (assign) int personalizationStyle; 
@property (copy) NSString * userAgent; 
@property (readonly) SSLookupResponse * lookupResponse; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLookupProperties:(id)arg1 ;
-(SSLookupResponse *)lookupResponse;
-(char)_performLocationLookup:(id*)arg1 ;
-(char)_performJSSignLookupWithURLBag:(id)arg1 error:(id*)arg2 ;
-(char)_performPlatformLookup:(id*)arg1 ;
-(void)_setLookupResponse:(id)arg1 ;
-(char)_isMescalEnabledInBagContext:(id)arg1 ;
-(id)_beginMescalSession:(id*)arg1 ;
-(id)_newStoreURLOperationWithBagKey:(id)arg1 ;
-(id)_newLookupResponseWithResultsFromOperation:(id)arg1 ;
-(void)_setAccountID:(id)arg1 ;
-(SSLookupProperties *)lookupProperties;
-(NSString *)userAgent;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)setPersonalizationStyle:(int)arg1 ;
-(void)dealloc;
-(void)run;
-(void)setUserAgent:(NSString *)arg1 ;
-(id)_authenticationContext;
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(id)_URLBagContext;
-(SSAuthenticationContext *)authenticationContext;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
-(int)personalizationStyle;
@end
