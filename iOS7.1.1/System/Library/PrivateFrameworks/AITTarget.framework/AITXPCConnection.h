/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AITTarget.framework/AITTarget
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AITXPCConnectionDelegate, OS_xpc_object, OS_dispatch_queue;
@class NSString, NSObject;

@interface AITXPCConnection : NSObject {

	int _pid;
	<AITXPCConnectionDelegate>* _delegate;
	NSString* _bundleId;
	NSObject<OS_xpc_object>* _connection;
	NSObject<OS_xpc_object>* _currentMessage;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSObject<OS_dispatch_queue>* _internalQueue;

}

@property (assign,nonatomic) <AITXPCConnectionDelegate> * delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) bool available; 
@property (nonatomic,copy) NSString * bundleId;                                        //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) int pid; 
@property (assign,nonatomic) NSObject<OS_xpc_object> * connection;                     //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) NSObject<OS_xpc_object> * currentMessage;                 //@synthesize currentMessage=_currentMessage - In the implementation block
@property (assign,nonatomic) NSObject<OS_dispatch_queue> * dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) NSObject<OS_dispatch_queue> * internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
-(id)dispatchQueue;
-(id)initWithConnection:(id)arg1 delegate:(id)arg2 ;
-(id)bundleId;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)connection;
-(void)setConnection:(id)arg1 ;
-(id)initWithConnection:(id)arg1 delegate:(id)arg2 dispatchQueue:(id)arg3 ;
-(id)internalQueue;
-(void)setInternalQueue:(id)arg1 ;
-(void)setDispatchQueue:(id)arg1 ;
-(int)pid;
-(bool)available;
-(void)closeConnection;
-(id)currentMessage;
-(void)setBundleId:(id)arg1 ;
-(void)sendMessage:(id)arg1 userInfo:(id)arg2 ;
-(void)_handleEvent:(id)arg1 ;
-(id)_deserializeMessage:(id)arg1 ;
-(void)sendMessage:(id)arg1 userInfo:(id)arg2 replyHandler:(/*^block*/ id)arg3 ;
-(void)barrierWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setCurrentMessage:(id)arg1 ;
@end

