/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:08:23 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface PLXPCRelay : NSObject {

	char _relayActive;
	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_xpc_object> _relayConnection;

}

@property (assign) char relayActive;                                                //@synthesize relayActive=_relayActive - In the implementation block
@property (retain) NSObject*<OS_xpc_object> xpcConnection;                          //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> relayConnection;              //@synthesize relayConnection=_relayConnection - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)stopRelay;
-(void)startRelay;
-(void)setRelayActive:(char)arg1 ;
-(void)resetRelayConnection;
-(NSObject*<OS_xpc_object>)relayConnection;
-(char)relayActive;
-(void)setRelayConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(char)isDebugEnabled;
-(void)handlePeer:(id)arg1 forEvent:(id)arg2 ;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
@end

