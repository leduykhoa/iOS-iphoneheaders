/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol WebInspectorXPCWrapperDelegate, OS_xpc_object;
@class NSString, NSObject;

@interface WebInspectorXPCWrapper : NSObject {

	<WebInspectorXPCWrapperDelegate>* _delegate;
	NSString* _tag;
	NSObject<OS_xpc_object>* _connection;
	NSObject<OS_xpc_object>* _currentMessage;

}

@property (assign,nonatomic) <WebInspectorXPCWrapperDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL available; 
@property (nonatomic,copy) NSString * tag;                                             //@synthesize tag=_tag - In the implementation block
@property (assign,nonatomic) NSObject<OS_xpc_object> * connection;                     //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) NSObject<OS_xpc_object> * currentMessage;                 //@synthesize currentMessage=_currentMessage - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setTag:(id)arg1 ;
-(id)tag;
-(void)close;
-(id)connection;
-(id)initWithConnection:(id)arg1 ;
-(void)setConnection:(id)arg1 ;
-(BOOL)available;
-(id)currentMessage;
-(void)sendMessage:(id)arg1 userInfo:(id)arg2 ;
-(void)_handleEvent:(id)arg1 ;
-(id)_deserializeMessage:(id)arg1 ;
-(void)sendMessage:(id)arg1 userInfo:(id)arg2 replyHandler:(/*^block*/ id)arg3 ;
-(void)barrierWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setCurrentMessage:(id)arg1 ;
@end
