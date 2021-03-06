/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/geod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEODaemon;

@interface GEOServer : NSObject {

	GEODaemon* _daemon;

}

@property (assign,nonatomic) GEODaemon * daemon;              //@synthesize daemon=_daemon - In the implementation block
+(Class)peerClass;
+(id)identifier;
-(void)daemonWillTerminateWithReason:(int)arg1 ;
-(void)peerDidConnect:(id)arg1 ;
-(char)canHandleIncomingMessage:(id)arg1 ;
-(void)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2 ;
-(void)peerDidDisconnect:(id)arg1 ;
-(id)description;
-(GEODaemon *)daemon;
-(void)setDaemon:(GEODaemon *)arg1 ;
@end

