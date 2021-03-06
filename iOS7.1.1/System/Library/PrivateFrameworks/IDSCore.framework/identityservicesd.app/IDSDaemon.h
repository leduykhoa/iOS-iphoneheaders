/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:06:18 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <IDSCore/IDSPushHandlerDelegate.h>
#import <IMFoundation/IMSystemMonitorListener.h>

@class NSRecursiveLock, NSMutableArray, NSMutableSet, IMRemoteObjectBroadcaster, NSDate, NSTimer, IMMultiQueue;

@interface IDSDaemon : NSObject <IDSPushHandlerDelegate, IMSystemMonitorListener> {

	NSRecursiveLock* _listenerLock;
	NSMutableArray* _listeners;
	NSMutableArray* _listenerLocalObjects;
	NSMutableArray* _listenerIDs;
	NSMutableArray* _listenerServices;
	NSMutableArray* _listenerCommands;
	NSMutableArray* _listenerCapabilities;
	NSMutableArray* _listenerEntitlements;
	NSMutableArray* _listenerBundleIDs;
	NSMutableArray* _queuedBroadcastAttempts;
	NSMutableSet* _listenerCachedServices;
	NSMutableSet* _listenerCachedCommands;
	IMRemoteObjectBroadcaster* _notifier;
	NSDate* _birthDate;
	NSTimer* _storageTimer;
	NSMutableSet* _messagesReceivedDuringStorage;
	NSTimer* _lowPrioritySendTimer;
	int _lowPriorityLastAttempt;
	IMMultiQueue* _incomingMessageMultiQueue;
	id _stateMonitor;
	BOOL _isHardReset;

}
+(id)sharedInstance;
-(void)logState;
-(void)_pidSuspended:(int)arg1 ;
-(void)_processStoredMessages;
-(void)_startPushHandlingLocked;
-(void)_postAliveNotification;
-(void)_terminate;
-(void)_processOutgoingLowPriorityMessages;
-(void)updateTopics;
-(void)_updatePushCommandsLocked;
-(void)_processQueuedBroadcastAttemptsLocked;
-(id)_setupInfoWithContext:(id)arg1 ;
-(void)refreshBundleIDs;
-(void)_removeListener:(id)arg1 ;
-(void)_removeListenerObject:(id)arg1 ;
-(void)_removeLocalListenerObject:(id)arg1 ;
-(void)removeListenerObject:(id)arg1 ;
-(void)removeLocalListenerObject:(id)arg1 ;
-(id)_commands;
-(id)listenerForLocalObject:(id)arg1 ;
-(id)broadcasterForTopic:(id)arg1 entitlement:(id)arg2 command:(id)arg3 messageContext:(id)arg4 ;
-(BOOL)_lockedRemoteObjectAtIndex:(unsigned)arg1 matchesService:(id)arg2 entitlement:(id)arg3 command:(id)arg4 capabilities:(unsigned)arg5 ;
-(id)_lockedRemoteObjectsWithService:(id)arg1 entitlement:(id)arg2 command:(id)arg3 capabilities:(unsigned)arg4 ;
-(BOOL)_setupListenerConnection:(id)arg1 listenerID:(id)arg2 pid:(int)arg3 setupInfo:(id)arg4 entitlements:(id)arg5 setupResponse:(id*)arg6 ;
-(id)listenerIDForLocalObject:(id)arg1 foundIndex:(unsigned*)arg2 ;
-(id)listenerWithName:(id)arg1 ;
-(void)_stopPushHandling;
-(id)broadcasterForTarget:(id)arg1 messageContext:(id)arg2 ;
-(id)broadcasterForLocalObject:(id)arg1 messageContext:(id)arg2 ;
-(id)broadcasterForEntitlement:(id)arg1 messageContext:(id)arg2 ;
-(void)enqueueBroadcast:(/*^block*/ id)arg1 forTopic:(id)arg2 entitlement:(id)arg3 command:(id)arg4 capabilities:(unsigned)arg5 messageContext:(id)arg6 ;
-(BOOL)daemonInterface:(id)arg1 shouldGrantAccessForPID:(int)arg2 auditToken:(SCD_Struct_ID0)arg3 portName:(id)arg4 listenerConnection:(id)arg5 setupInfo:(id)arg6 setupResponse:(id*)arg7 ;
-(void)setListenerServices:(id)arg1 messageContext:(id)arg2 ;
-(void)setListenerCommands:(id)arg1 messageContext:(id)arg2 ;
-(void)setListenerCapabilities:(unsigned)arg1 messageContext:(id)arg2 ;
-(void)setupAccountWithLoginID:(id)arg1 serviceName:(id)arg2 accountType:(int)arg3 accountConfig:(id)arg4 authToken:(id)arg5 password:(id)arg6 transactionID:(id)arg7 messageContext:(id)arg8 ;
-(void)addAccountWithLoginID:(id)arg1 serviceName:(id)arg2 uniqueID:(id)arg3 accountType:(int)arg4 accountInfo:(id)arg5 messageContext:(id)arg6 ;
-(void)_removeAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)_removeAndDeregisterAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)updateAccount:(id)arg1 withAccountInfo:(id)arg2 messageContext:(id)arg3 ;
-(void)enableAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)disableAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)setLoginID:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)authTokenChanged:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)passwordChanged:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)authenticateAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)passwordUpdatedForAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 forAccount:(id)arg3 messageContext:(id)arg4 ;
-(void)validateProfileForAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)addAliases:(id)arg1 toAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)removeAliases:(id)arg1 fromAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)validateAliases:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)unvalidateAliases:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)registerAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)unregisterAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)_reregisterAndReidentify:(id)arg1 account:(id)arg2 messageContext:(id)arg3 ;
-(void)deactivateAndPurgeIdentifyForAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)hardDeregisterWithMessageContext:(id)arg1 ;
-(void)_sendMessage:(id)arg1 fromID:(id)arg2 toDestinations:(id)arg3 usingAccountWithUniqueID:(id)arg4 useDictAsTopLevel:(BOOL)arg5 dataToEncrypt:(id)arg6 encryptPayload:(BOOL)arg7 wantsResponse:(BOOL)arg8 timeout:(double)arg9 command:(id)arg10 wantsDeliveryStatus:(BOOL)arg11 deliveryStatusContext:(id)arg12 messageUUID:(id)arg13 highPriority:(BOOL)arg14 identifier:(id)arg15 completionBlock:(/*^block*/ id)arg16 ;
-(void)_lowPrioritySendTimerFired;
-(int)_currentSecondsIntoDay;
-(double)_lowPrioritySendProbabilityForCurrentWindow;
-(BOOL)_hasLowPrioritySendingBudget;
-(BOOL)_rollDieForLowPrioritySend;
-(void)_updateLowPrioritySendTimer;
-(void)_optionallyDecryptMessage:(id)arg1 encryptedData:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 allowRetry:(BOOL)arg5 completionBlock:(/*^block*/ id)arg6 ;
-(void)_sendErrorMessage:(id)arg1 fromID:(id)arg2 toDestinations:(id)arg3 usingAccountWithUniqueID:(id)arg4 useDictAsTopLevel:(BOOL)arg5 dataToEncrypt:(id)arg6 wantsResponse:(BOOL)arg7 timeout:(double)arg8 command:(id)arg9 highPriority:(BOOL)arg10 completionBlock:(/*^block*/ id)arg11 ;
-(void)_processReceivedMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 storedGuid:(id)arg4 messageContext:(id)arg5 ;
-(void)_processStoredIncomingMessagesWithGUIDs:(id)arg1 ;
-(void)_handleIncomingAttachmentMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)_enqueueBlock:(/*^block*/ id)arg1 withTimeout:(double)arg2 forKey:(id)arg3 ;
-(BOOL)_isBulkingStorageMessages;
-(void)_noteLastItemFromStorage:(id)arg1 ;
-(void)_noteItemFromStorage:(id)arg1 ;
-(void)sendServerMessage:(id)arg1 command:(id)arg2 usingAccountWithUniqueID:(id)arg3 messageContext:(id)arg4 ;
-(void)sendMessage:(id)arg1 fromID:(id)arg2 toDestinations:(id)arg3 usingAccountWithUniqueID:(id)arg4 useDictAsTopLevel:(BOOL)arg5 dataToEncrypt:(id)arg6 encryptPayload:(BOOL)arg7 wantsResponse:(BOOL)arg8 timeout:(id)arg9 command:(id)arg10 wantsDeliveryStatus:(BOOL)arg11 deliveryStatusContext:(id)arg12 messageUUID:(id)arg13 highPriority:(BOOL)arg14 identifier:(id)arg15 messageContext:(id)arg16 ;
-(void)acknowledgeOutgoingMessageWithGUID:(id)arg1 messageContext:(id)arg2 ;
-(void)acknowledgeMessageWithGUID:(id)arg1 messageContext:(id)arg2 ;
-(void)requestKeepAliveWithMessageContext:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)systemDidLock;
-(id)_pushTopics;
-(void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5 ;
-(void)handler:(id)arg1 receivedOfflineMessagePendingForTopic:(id)arg2 messageContext:(id)arg3 ;
-(void)remoteObjectDiedNotification:(id)arg1 ;
-(void)localObjectDiedNotification:(id)arg1 ;
-(id)broadcasterWithMessageContext:(id)arg1 ;
-(void)_storageTimerFired;
-(void)_updateStorageTimerWithInterval:(double)arg1 ;
-(void)shutdown;
@end

