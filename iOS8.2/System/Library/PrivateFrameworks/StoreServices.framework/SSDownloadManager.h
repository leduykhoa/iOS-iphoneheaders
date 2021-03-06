/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <StoreServices/StoreServices-Structs.h>
@class NSObject, NSArray, SSXPCConnection, SSDownloadManagerOptions, NSMutableSet;

@interface SSDownloadManager : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSArray* _activeDownloads;
	char _activeDownloadsChanged;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	SSXPCConnection* _connection;
	NSArray* _downloads;
	char _downloadsChanged;
	char _isUsingNetwork;
	SSXPCConnection* _observerConnection;
	NSObject*<OS_dispatch_queue> _observerQueue;
	CFArrayRef _observers;
	SSDownloadManagerOptions* _options;
	NSMutableSet* _removedDownloads;

}

@property (readonly) SSDownloadManagerOptions * managerOptions; 
@property (readonly) NSArray * activeDownloads; 
@property (readonly) NSArray * downloads; 
@property (getter=isUsingNetwork,readonly) char usingNetwork; 
+(id)IPodDownloadKinds;
+(void)retryAllRestoreDownloads;
+(id)allStoreDownloadKinds;
+(id)ITunesDownloadKinds;
+(void)_sendGlobalHandler:(id)arg1 ;
+(void)reconnectToLSApplicationWorkspace;
+(void)removePersistenceIdentifier:(id)arg1 ;
+(void)setDownloadHandler:(id)arg1 ;
+(id)EBookDownloadManager;
+(id)IPodDownloadManager;
+(id)softwareDownloadManager;
+(void)reevaluateBackgroundDownloadsForBundleIdentifiers:(id)arg1 ;
+(void)_triggerDownloads;
+(id)softwareDownloadKinds;
+(id)EBookDownloadKinds;
-(NSArray *)downloads;
-(id)initWithManagerOptions:(id)arg1 ;
-(void)cancelDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)finishDownloads:(id)arg1 ;
-(void)getDownloadsUsingBlock:(/*^block*/id)arg1 ;
-(void)pauseDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)resumeDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)moveDownload:(id)arg1 afterDownload:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)reloadFromServer;
-(void)addDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithDownloadKinds:(id)arg1 ;
-(char)canCancelDownload:(id)arg1 ;
-(void)_handleDownloadsRemoved:(id)arg1 ;
-(void)_willFinishDownloads:(id)arg1 ;
-(void)_finishDownloads:(id)arg1 ;
-(id)_XPCConnection;
-(id)_initSSDownloadManager;
-(void)_connectAsObserver;
-(id)_copyDownloadsForMessage:(long long)arg1 downloadIDs:(id)arg2 ;
-(void)_insertDownloads:(id)arg1 before:(id)arg2 after:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_sendMessage:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id)_copyDownloads;
-(void)_moveDownload:(id)arg1 before:(id)arg2 after:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_pauseDownloads:(id)arg1 forced:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setDownloads:(id)arg1 forKinds:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_handleReply:(id)arg1 forDownloads:(id)arg2 message:(id)arg3 isRetry:(char)arg4 block:(/*^block*/id)arg5 ;
-(void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2 ;
-(void)_sendObserverConnection;
-(void)_reloadIsUsingNetworkWithDownloadKinds:(id)arg1 ;
-(void)_loadDownloadKindsUsingNetwork;
-(void)_sendDownloadsChanged:(id)arg1 ;
-(void)_handleDownloadKindsUsingNetworkChanged:(id)arg1 ;
-(void)_handleDownloadsChanged:(id)arg1 ;
-(void)_handleDownloadStatesChanged:(id)arg1 ;
-(id)_copyDownloadKindsUsingNetwork;
-(void)_sendMessageToObservers:(SEL)arg1 ;
-(id)_newOptionsDictionary;
-(NSArray *)activeDownloads;
-(void)cancelAllDownloadsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)insertDownloads:(id)arg1 afterDownload:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)insertDownloads:(id)arg1 beforeDownload:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)moveDownload:(id)arg1 beforeDownload:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_pauseDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(char)isUsingNetwork;
-(SSDownloadManagerOptions *)managerOptions;
@end

