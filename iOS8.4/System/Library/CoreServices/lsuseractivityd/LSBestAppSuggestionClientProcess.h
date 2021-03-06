/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/lsuseractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <lsuseractivityd/NSXPCConnectionDelegate.h>
#import <lsuseractivityd/LSBestAppSuggestionManagerProtocol.h>

@class CornerActionManager, NSXPCConnection, LSAuditToken, NSString;

@interface LSBestAppSuggestionClientProcess : NSObject <NSXPCConnectionDelegate, LSBestAppSuggestionManagerProtocol> {

	CornerActionManager* _manager;
	NSXPCConnection* _connection;
	LSAuditToken* _auditToken;

}

@property (retain,readonly) CornerActionManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (retain) NSXPCConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (retain) LSAuditToken * auditToken;                           //@synthesize auditToken=_auditToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithManager:(id)arg1 connection:(id)arg2 ;
-(void)doConnected;
-(void)doStartBestAppSuggestion:(double)arg1 ;
-(void)doDetermineBestAppSuggestions:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)doRemoveBestAppSuggestion:(id)arg1 options:(id)arg2 ;
-(void)doRegisterForBestAppChangeNotification;
-(void)doUnregisterForBestAppChangeNotification;
-(void)doDetermineBestAppSuggestionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)doQueueFetchOfPayloadForBestAppSuggestion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)doLaunchFollowUp:(id)arg1 interactionType:(unsigned long long)arg2 cancelled:(BOOL)arg3 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(LSAuditToken *)auditToken;
-(CornerActionManager *)manager;
-(void)setAuditToken:(LSAuditToken *)arg1 ;
@end

