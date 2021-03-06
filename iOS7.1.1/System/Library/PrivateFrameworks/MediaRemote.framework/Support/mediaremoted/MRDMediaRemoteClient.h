/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:17:00 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, MRDXPCMessageHandling, MRDMediaRemoteClientDelegate, OS_xpc_object;
#import <mediaremoted/mediaremoted-Structs.h>
@class MRDRunAssertion, NSObject, NSString;

@interface MRDMediaRemoteClient : NSObject {

	MRDRunAssertion* _runAssertion;
	NSObject<OS_dispatch_source>* _source;
	BOOL _canBeNowPlayingApplication;
	BOOL _keepAlive;
	<MRDXPCMessageHandling>* _messageHandler;
	<MRDMediaRemoteClientDelegate>* _delegate;
	NSObject<OS_xpc_object>* _connection;
	NSString* _bundleIdentifier;
	SBSProcessAssertionRef _processAssertion;
	unsigned _originDiscoveryCount;
	unsigned _routeDiscoveryCount;
	unsigned _routeDiscoveryMode;

}

@property (assign,nonatomic) <MRDXPCMessageHandling> * messageHandler;               //@synthesize messageHandler=_messageHandler - In the implementation block
@property (assign,nonatomic) <MRDMediaRemoteClientDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject<OS_xpc_object> * connection;                 //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) int pid; 
@property (nonatomic,readonly) NSString * bundleIdentifier;                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) SBSProcessAssertionRef processAssertion;                //@synthesize processAssertion=_processAssertion - In the implementation block
@property (assign,nonatomic) BOOL canBeNowPlayingApplication;                        //@synthesize canBeNowPlayingApplication=_canBeNowPlayingApplication - In the implementation block
@property (nonatomic,readonly) unsigned originDiscoveryCount;                        //@synthesize originDiscoveryCount=_originDiscoveryCount - In the implementation block
@property (nonatomic,readonly) unsigned routeDiscoveryCount;                         //@synthesize routeDiscoveryCount=_routeDiscoveryCount - In the implementation block
@property (assign,nonatomic) unsigned routeDiscoveryMode;                            //@synthesize routeDiscoveryMode=_routeDiscoveryMode - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
@property (assign,nonatomic) BOOL keepAlive;                                         //@synthesize keepAlive=_keepAlive - In the implementation block
-(void)relayXPCMessage:(id)arg1 andReply:(BOOL)arg2 ;
-(id)initWithConnection:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)setCanBeNowPlayingApplication:(BOOL)arg1 ;
-(unsigned)routeDiscoveryCount;
-(unsigned)originDiscoveryCount;
-(id)_runAssertionName;
-(void)_cancelCurrentProcessAssertion;
-(BOOL)canBeNowPlayingApplication;
-(unsigned)routeDiscoveryMode;
-(void)setRouteDiscoveryMode:(unsigned)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)delegate;
-(BOOL)isActive;
-(id)bundleIdentifier;
-(void)_invalidate;
-(id)connection;
-(void)_handleXPCMessage:(id)arg1 ;
-(int)pid;
-(void)beginOriginDiscovery;
-(void)endOriginDiscovery;
-(void)beginRouteDiscovery;
-(void)endRouteDiscovery;
-(void)setKeepAlive:(BOOL)arg1 ;
-(BOOL)keepAlive;
-(void)setMessageHandler:(id)arg1 ;
-(id)messageHandler;
-(void)setProcessAssertion:(SBSProcessAssertionRef)arg1 ;
-(SBSProcessAssertionRef)processAssertion;
@end

