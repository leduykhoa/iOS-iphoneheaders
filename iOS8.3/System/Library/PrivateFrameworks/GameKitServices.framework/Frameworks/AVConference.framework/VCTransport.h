/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:50:40 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary, NSObject;

@interface VCTransport : NSObject {

	tagHANDLE* tpHandle;
	NSMutableDictionary* iceBlocks;
	NSObject*<OS_dispatch_queue> delegateQueue;
	NSMutableDictionary* dataReceivedHandlers;
	NSObject*<OS_dispatch_queue> dataReceivedHandlerQueue;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)cleanup;
-(long)updateBaseband:(tagCONNRESULT*)arg1 ;
-(long)discardRelayBindingForCallID:(unsigned long)arg1 withChannelNumber:(int)arg2 ;
-(long)discardRelayBindingForCallID:(unsigned long)arg1 ;
-(int)detailedErrorCodeForConnectionWithCallID:(unsigned long)arg1 ;
-(long)stopConnectivityCheckForCallID:(unsigned long)arg1 ;
-(char)ipPortStillExists:(tagIPPORT*)arg1 requiresWifi:(char)arg2 ;
-(void)registerICEBlockForCallID:(unsigned long)arg1 connectedBlock:(/*^block*/id)arg2 newCandidatesBlock:(/*^block*/id)arg3 setupRelayBlock:(/*^block*/id)arg4 ;
-(long)setSKEState:(SKEStateOpaqueRef)arg1 forCallID:(unsigned long)arg2 ;
-(long)processRemoteInterfaceChangeMessage:(unsigned long)arg1 resultKey:(tagCONNRESULT*)arg2 remoteData:(void*)arg3 remoteLen:(int)arg4 remoteCandidateVersion:(unsigned short)arg5 ;
-(long)sendUDPPacketReliableEncrypted:(id)arg1 localIPPort:(tagIPPORT*)arg2 destinationIPPort:(tagIPPORT*)arg3 oftType:(int)arg4 ;
-(long)updateInterfaceList:(tagCONNRESULT*)arg1 shouldFilterCellInterface:(char)arg2 isUpdateNeeded:(int*)arg3 ;
-(long)getConnectionDataForCallID:(unsigned long)arg1 version:(unsigned char)arg2 useCompressedData:(char)arg3 pConnectionData:(void*)arg4 connectDataSizeInBytes:(int*)arg5 relayDictionary:(CFDictionaryRef)arg6 interfaceUpdate:(char)arg7 nonCellularCandidateTimeout:(double)arg8 ;
-(long)getLoopbackIP:(tagIPPORT*)arg1 ;
-(long)setupDTLSSecurity:(unsigned long)arg1 connectionResult:(tagCONNRESULT*)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long)setICETimeout:(double)arg1 ;
-(long)flushBasebandQueue:(void*)arg1 ;
-(long)getSignalStrength:(int*)arg1 signalRaw:(int*)arg2 signalGrade:(int*)arg3 ;
-(long)getCellTechForCallID:(unsigned long)arg1 localCellTech:(int*)arg2 isLocalCellularQoSEnabled:(int*)arg3 remoteCellTech:(int*)arg4 isRemoteCellularQoSEnabled:(int*)arg5 ;
-(long)setupBaseband:(tagCONNRESULT*)arg1 ;
-(long)updateQoS:(char)arg1 ;
-(long)updateICERoleForCallID:(unsigned long)arg1 role:(int)arg2 remoteCallID:(unsigned long)arg3 sessionID:(CFStringRef)arg4 ;
-(long)setForceRelayForCallID:(unsigned long)arg1 ;
-(long)setForceIPv6ForCallID:(unsigned long)arg1 ;
-(long)startConnectionCheckForCallID:(unsigned long)arg1 remoteConnectionDataBlob:(id)arg2 relayDictionary:(id)arg3 iceTimeout:(double)arg4 securityIdentity:(SecIdentityRef)arg5 skeState:(SKEStateOpaqueRef)arg6 usedRelay:(int*)arg7 ;
-(long)updateQualityIndicator:(int)arg1 isIPv6:(char)arg2 ;
-(long)getRemoteICEVersion:(unsigned long)arg1 remoteICEVersion:(unsigned*)arg2 ;
-(id)getRemoteCIDForDstIPPort:(tagIPPORT*)arg1 callID:(unsigned long)arg2 ;
-(long)getNextBestCandidate:(tagCANDIDATE*)arg1 callID:(unsigned long)arg2 isLocal:(int)arg3 IPPortToExclude:(tagIPPORT*)arg4 ;
-(void)setARPLHandler:(/*^block*/id)arg1 ;
-(void)registerDataReceivedHandler:(/*^block*/id)arg1 forCallID:(unsigned long)arg2 ;
-(long)sendData:(id)arg1 localIPPort:(tagIPPORT*)arg2 destinationIPPort:(tagIPPORT*)arg3 remoteCallID:(unsigned long)arg4 encrypted:(char)arg5 ;
-(void)iceConnectedForCallID:(unsigned long)arg1 result:(tagCONNRESULT*)arg2 didReceivePacket:(int)arg3 useRelay:(int)arg4 secretKey:(CFDataRef)arg5 skeResult:(int)arg6 ;
-(void)iceNewCandidatesForCallID:(unsigned long)arg1 blob:(char*)arg2 size:(int)arg3 newCandidateVersion:(unsigned short)arg4 ;
-(void)iceSetupSecondaryRelayForCallID:(unsigned long)arg1 callerRequired:(char)arg2 ;
-(void)receivedDataPacket:(char*)arg1 length:(int)arg2 forCallID:(unsigned long)arg3 encrypted:(char)arg4 ;
-(long)processRemoteInterfaceChange:(unsigned long)arg1 remoteData:(void*)arg2 remoteLen:(int)arg3 ;
@end

