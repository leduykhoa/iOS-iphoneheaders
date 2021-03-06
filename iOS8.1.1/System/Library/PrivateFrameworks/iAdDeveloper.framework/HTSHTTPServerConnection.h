/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iAdDeveloper/iAdDeveloper-Structs.h>
#import <iAdDeveloper/NSStreamDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class HTSHTTPServer, NSObject, NSMutableArray, NSString, NSTimer;

@interface HTSHTTPServerConnection : NSObject <NSStreamDelegate> {

	HTSHTTPServer* _server;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_source> _readSource;
	BOOL _readActive;
	NSObject*<OS_dispatch_source> _writeSource;
	BOOL _writeActive;
	int _socket;
	int _socketRefCount;
	CFHTTPMessageRef _incomingMessage;
	NSMutableArray* _incomingQueue;
	NSMutableArray* _outputQueue;
	BOOL _outputStalled;
	BOOL _closeOnEmptyQueue;
	NSString* _identifier;
	double _lastActivity;
	NSTimer* _idleTimer;

}

@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double lastActivity;                   //@synthesize lastActivity=_lastActivity - In the implementation block
@property (nonatomic,retain) NSTimer * idleTimer;                   //@synthesize idleTimer=_idleTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)identifier;
-(id)initWithServer:(id)arg1 socket:(int)arg2 ;
-(void)sendResponse:(id)arg1 withLatency:(double)arg2 closeAfterSending:(BOOL)arg3 ;
-(void)_closeInputStream;
-(void)_closeOutputStream;
-(void)setLastActivity:(double)arg1 ;
-(void)_processStreamInput;
-(void)_processStreamOutput;
-(void)_processIncomingBytes:(const char*)arg1 length:(long long)arg2 ;
-(void)setIdleTimer:(NSTimer *)arg1 ;
-(void)_shutdownIdleConnection:(id)arg1 ;
-(void)printData:(id)arg1 withMessage:(id)arg2 ;
-(double)lastActivity;
-(NSTimer *)idleTimer;
@end

