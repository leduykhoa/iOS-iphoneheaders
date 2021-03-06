/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol IDSUTunDeliveryControllerDelegate <NSObject>
@optional
-(void)deliveryController:(id)arg1 protobufReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(BOOL)arg7 expectsPeerResponse:(BOOL)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10;
-(void)deliveryController:(id)arg1 dataReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(BOOL)arg7 expectsPeerResponse:(BOOL)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10;
-(void)deliveryController:(id)arg1 messageReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(BOOL)arg7 expectsPeerResponse:(BOOL)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10;
-(void)deliveryController:(id)arg1 receivedAppLevelAckWithTopic:(id)arg2 fromID:(id)arg3 peerResponseIdentifier:(id)arg4;
-(void)deliveryControllerHasSpaceforNonUrgentMessages:(id)arg1;
-(id)deliveryControllerQueuedIncomingMessageDictionary:(id)arg1;

@end

