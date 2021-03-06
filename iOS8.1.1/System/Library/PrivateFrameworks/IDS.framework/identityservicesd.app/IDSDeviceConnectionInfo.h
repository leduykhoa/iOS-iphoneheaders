/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@class NSString, IDSSockAddrWrapper, NSMutableDictionary, IDSUTunControlChannel, NSData, NSMutableSet, NSMutableArray;

@interface IDSDeviceConnectionInfo : NSObject {

	NSString* _token;
	IDSSockAddrWrapper* _remoteSA;
	NSMutableDictionary* _connectionsByID;
	IDSUTunControlChannel* _controlChannel;
	NSData* _controlChannelCachedSYN;
	NSMutableSet* _highPriorityConnectionSendingSet;
	unsigned _localCIDSet[2048];
	BOOL _suspendTraffic;
	double _suspendTrafficCheckTime;
	BOOL _linkManagerConnected;
	double _linkManagerDisconnectTime;
	NEVirtualInterface_sRef _vifRef;
	NSString* _vifName;
	IDSSockAddrWrapper* _localSA;
	IDSPortMap _portMap;
	SimpleUInt32ToObjectTable* _connectionsTableByLocalRemotePortKey;
	SimpleUInt32ToObjectTable* _outgoingEncryptionTableBySSRC;
	SimpleUInt32ToObjectTable* _incomingEncryptionTableBySSRC;
	NSMutableArray* _blocksOnLinkConnect;
	int _utunSocket;

}

@property (nonatomic,readonly) NSString * token;                                                             //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) IDSSockAddrWrapper * remoteSA;                                                    //@synthesize remoteSA=_remoteSA - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * connectionsByID;                                        //@synthesize connectionsByID=_connectionsByID - In the implementation block
@property (nonatomic,retain) IDSUTunControlChannel * controlChannel;                                         //@synthesize controlChannel=_controlChannel - In the implementation block
@property (nonatomic,retain) NSData * controlChannelCachedSYN;                                               //@synthesize controlChannelCachedSYN=_controlChannelCachedSYN - In the implementation block
@property (assign,nonatomic) NSMutableSet * highPriorityConnectionSendingSet;                                //@synthesize highPriorityConnectionSendingSet=_highPriorityConnectionSendingSet - In the implementation block
@property (assign,nonatomic) BOOL suspendTraffic;                                                            //@synthesize suspendTraffic=_suspendTraffic - In the implementation block
@property (assign,nonatomic) double suspendTrafficCheckTime;                                                 //@synthesize suspendTrafficCheckTime=_suspendTrafficCheckTime - In the implementation block
@property (assign,nonatomic) BOOL linkManagerConnected;                                                      //@synthesize linkManagerConnected=_linkManagerConnected - In the implementation block
@property (assign,nonatomic) double linkManagerDisconnectTime;                                               //@synthesize linkManagerDisconnectTime=_linkManagerDisconnectTime - In the implementation block
@property (assign,nonatomic) NEVirtualInterface_sRef vifRef;                                                 //@synthesize vifRef=_vifRef - In the implementation block
@property (nonatomic,copy) NSString * vifName;                                                               //@synthesize vifName=_vifName - In the implementation block
@property (nonatomic,copy) IDSSockAddrWrapper * localSA;                                                     //@synthesize localSA=_localSA - In the implementation block
@property (nonatomic,readonly) IDSPortMap* portMap; 
@property (nonatomic,readonly) SimpleUInt32ToObjectTable* connectionsTableByLocalRemotePortKey; 
@property (nonatomic,readonly) SimpleUInt32ToObjectTable* outgoingEncryptionTableBySSRC; 
@property (nonatomic,readonly) SimpleUInt32ToObjectTable* incomingEncryptionTableBySSRC; 
@property (assign,nonatomic) int utunSocket;                                                                 //@synthesize utunSocket=_utunSocket - In the implementation block
-(IDSPortMap*)portMap;
-(SimpleUInt32ToObjectTable*)connectionsTableByLocalRemotePortKey;
-(SimpleUInt32ToObjectTable*)outgoingEncryptionTableBySSRC;
-(SimpleUInt32ToObjectTable*)incomingEncryptionTableBySSRC;
-(unsigned short)nextAvailableLocalCID;
-(void)clearLocalCID:(unsigned short)arg1 ;
-(void)addBlocksOnLinkConnect:(/*^block*/id)arg1 ;
-(void)performBlocksOnLinkConnect;
-(void)cancelBlockOnLinkConnectWithID:(id)arg1 cancelSucceeded:(BOOL*)arg2 ;
-(void)cancelBlocksOnLinkConnect;
-(IDSSockAddrWrapper *)remoteSA;
-(void)setRemoteSA:(IDSSockAddrWrapper *)arg1 ;
-(NSMutableDictionary *)connectionsByID;
-(IDSUTunControlChannel *)controlChannel;
-(void)setControlChannel:(IDSUTunControlChannel *)arg1 ;
-(NSData *)controlChannelCachedSYN;
-(void)setControlChannelCachedSYN:(NSData *)arg1 ;
-(NSMutableSet *)highPriorityConnectionSendingSet;
-(void)setHighPriorityConnectionSendingSet:(NSMutableSet *)arg1 ;
-(BOOL)suspendTraffic;
-(void)setSuspendTraffic:(BOOL)arg1 ;
-(double)suspendTrafficCheckTime;
-(void)setSuspendTrafficCheckTime:(double)arg1 ;
-(BOOL)linkManagerConnected;
-(void)setLinkManagerConnected:(BOOL)arg1 ;
-(double)linkManagerDisconnectTime;
-(void)setLinkManagerDisconnectTime:(double)arg1 ;
-(NEVirtualInterface_sRef)vifRef;
-(void)setVifRef:(NEVirtualInterface_sRef)arg1 ;
-(NSString *)vifName;
-(void)setVifName:(NSString *)arg1 ;
-(IDSSockAddrWrapper *)localSA;
-(void)setLocalSA:(IDSSockAddrWrapper *)arg1 ;
-(int)utunSocket;
-(void)setUtunSocket:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(NSString *)token;
-(id)initWithToken:(id)arg1 ;
@end

