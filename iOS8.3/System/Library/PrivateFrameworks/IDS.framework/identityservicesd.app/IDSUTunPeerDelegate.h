/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:04:31 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IDSUTunPeerDelegate <NSObject>
@required
-(void)peerConnectivityChanged:(id)arg1;
-(void)peer:(id)arg1 protobufReceived:(id)arg2 streamID:(unsigned short)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(char)arg7 expectsPeerResponse:(char)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(int)arg11;
-(void)peer:(id)arg1 dataReceived:(id)arg2 streamID:(unsigned short)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(char)arg7 expectsPeerResponse:(char)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(int)arg11;
-(void)peer:(id)arg1 messageReceived:(id)arg2 streamID:(unsigned short)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(char)arg7 expectsPeerResponse:(char)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(int)arg11;
-(void)peer:(id)arg1 receivedAppLevelAckWithStreamID:(unsigned short)arg2 fromID:(id)arg3 messageID:(id)arg4 peerResponseIdentifier:(id)arg5 priority:(int)arg6;
-(void)peerHasSpaceForNonUrgentMessages:(id)arg1 priority:(int)arg2 dataProtectionClass:(unsigned)arg3;
-(void)peerHasSpaceForUrgentMessages:(id)arg1 dataProtectionClass:(unsigned)arg2;
-(void)peerNearbyStateChanged:(id)arg1 forceNotify:(char)arg2;

@end

