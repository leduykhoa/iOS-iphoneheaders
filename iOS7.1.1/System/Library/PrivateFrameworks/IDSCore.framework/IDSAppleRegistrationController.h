/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSCore/IDSAppleSMSRegistrationCenterListener.h>
#import <IDSCore/IDSAppleIDRegistrationCenterListener.h>
#import <IDSCore/IDSAppleIDSRegistrationCenterListener.h>

@class NSString, NSMutableArray, NSMutableSet, NSArray;

@interface IDSAppleRegistrationController : NSObject <IDSAppleSMSRegistrationCenterListener, IDSAppleIDRegistrationCenterListener, IDSAppleIDSRegistrationCenterListener> {

	NSString* _deviceName;
	NSMutableArray* _handlers;
	NSMutableArray* _activeRegistrations;
	NSMutableArray* _trackedRegistrations;
	NSMutableArray* _authenticatedRegistrations;
	NSMutableSet* _deferredRegisters;
	int _iMessageToken;
	int _faceTimeToken;
	int _callingToken;

}

@property (nonatomic,readonly) NSArray * trackedRegistrations;                       //@synthesize trackedRegistrations=_trackedRegistrations - In the implementation block
@property (nonatomic,readonly) NSArray * authenticatedRegistrations;                 //@synthesize authenticatedRegistrations=_authenticatedRegistrations - In the implementation block
@property (nonatomic,readonly) NSArray * activeRegistrations;                        //@synthesize activeRegistrations=_activeRegistrations - In the implementation block
@property (nonatomic,readonly) NSArray * activeRegistrationsToRegister; 
+(id)sharedInstance;
+(void)initialize;
+(bool)validSIMStateForRegistration;
+(bool)systemSupportsRegistrationInfo:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)center:(id)arg1 succeededInitialRegionQuery:(id)arg2 ;
-(void)center:(id)arg1 succeededRegionValidation:(id)arg2 regionID:(id)arg3 phoneNumber:(id)arg4 extraContext:(id)arg5 verified:(bool)arg6 ;
-(void)center:(id)arg1 noteRegistrationRequired:(id)arg2 ;
-(void)center:(id)arg1 failedAuthentication:(id)arg2 error:(long long)arg3 info:(id)arg4 ;
-(void)center:(id)arg1 succeededAuthentication:(id)arg2 ;
-(void)center:(id)arg1 succeededLinkHandlesConfirmation:(id)arg2 emailAddress:(id)arg3 ;
-(void)systemDidLeaveFirstDataProtectionLock;
-(void)cancelActionsForRegistrationInfo:(id)arg1 ;
-(bool)registerInfo:(id)arg1 ;
-(void)center:(id)arg1 failedIDSAuthentication:(id)arg2 error:(long long)arg3 info:(id)arg4 ;
-(void)center:(id)arg1 succeededIDSAuthentication:(id)arg2 ;
-(void)center:(id)arg1 failedRegistration:(id)arg2 error:(long long)arg3 info:(id)arg4 ;
-(void)center:(id)arg1 succeededRegistration:(id)arg2 ;
-(void)center:(id)arg1 allSucceededRegistrations:(id)arg2 ;
-(void)center:(id)arg1 failedCurrentEmailsRequest:(id)arg2 error:(long long)arg3 info:(id)arg4 ;
-(void)center:(id)arg1 succeededCurrentEmailsRequest:(id)arg2 emailInfo:(id)arg3 ;
-(void)_notifyRegistrationSuccess:(id)arg1 ;
-(void)_notifyRegistrationFailure:(id)arg1 error:(long long)arg2 info:(id)arg3 ;
-(id)activeRegistrationsToRegister;
-(id)activeRegistrations;
-(id)activeRegistrationsMatchingUserID:(id)arg1 ;
-(void)_registrationStatusChanged:(id)arg1 ;
-(void)_technologyChanged:(id)arg1 ;
-(void)_SIMInserted:(id)arg1 ;
-(void)_updateNotifyState;
-(bool)registrationSupportedForRegistration:(id)arg1 ;
-(bool)_sendIDSAuthenticationForRegistration:(id)arg1 ;
-(bool)_sendIDSAuthenticationOrRegistrationIfNeeded:(id)arg1 ;
-(bool)_ensureProfileQueriesAreReadyForRegistratration:(id)arg1 ;
-(void)_notifyRegistrationStarting:(id)arg1 ;
-(void)startTrackingActiveRegistration:(id)arg1 ;
-(void)stopTrackingActiveRegistration:(id)arg1 ;
-(void)_notifyDeregistrationStarting:(id)arg1 ;
-(void)_notifyAllRegistrationSuccess:(id)arg1 ;
-(void)_notifyNeedsNewRegistration;
-(void)_notifyRegistrationUpdated:(id)arg1 ;
-(bool)unregisterInfo:(id)arg1 ;
-(void)_checkTechChange;
-(void)center:(id)arg1 succeededIdentification:(id)arg2 phoneNumber:(id)arg3 token:(id)arg4 ;
-(void)center:(id)arg1 failedIdentification:(id)arg2 error:(long long)arg3 ;
-(void)centerNeedsNewIdentification:(id)arg1 ;
-(bool)validRegistrationStateToAcceptCallsForRegistration:(id)arg1 ;
-(bool)validRegistrationStateToMakeCallsForRegistration:(id)arg1 ;
-(void)startTrackingRegistration:(id)arg1 ;
-(void)stopTrackingRegistration:(id)arg1 ;
-(void)addAuthenticatedRegistration:(id)arg1 ;
-(void)removeAuthenticatedRegistration:(id)arg1 ;
-(void)_systemConfigurationPrefsChanged;
-(id)trackedRegistrations;
-(id)authenticatedRegistrations;
@end

