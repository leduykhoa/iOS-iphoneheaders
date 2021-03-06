/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/ATConnectionDelegate.h>

@protocol BKAirTrafficControllerDelegate, OS_dispatch_queue;
@class ATConnection, NSMutableSet, NSObject, NSString;

@interface BKAirTrafficController : NSObject <ATConnectionDelegate> {

	char _connectionEstablished;
	char _syncing;
	id<BKAirTrafficControllerDelegate> _delegate;
	ATConnection* _connection;
	NSMutableSet* _assets;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<BKAirTrafficControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) char connectionEstablished;                                                //@synthesize connectionEstablished=_connectionEstablished - In the implementation block
@property (nonatomic,retain) ATConnection * connection;                                       //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableSet * assets;                                           //@synthesize assets=_assets - In the implementation block
@property (assign,getter=isSyncing,nonatomic) char syncing;                                   //@synthesize syncing=_syncing - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(char)connectionEstablished;
-(char)hasDownloadInfoForPersistentId:(id)arg1 ;
-(id)_initSharedController;
-(char)_supportsDataclass:(id)arg1 assetType:(id)arg2 ;
-(void)_syncDidFinish;
-(void)setConnectionEstablished:(char)arg1 ;
-(void)_syncDidStart;
-(void)dealloc;
-(void)setDelegate:(id<BKAirTrafficControllerDelegate>)arg1 ;
-(id)init;
-(id<BKAirTrafficControllerDelegate>)delegate;
-(void)start;
-(ATConnection *)connection;
-(void)setConnection:(ATConnection *)arg1 ;
-(void)connection:(id)arg1 updatedAssets:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
-(void)setSyncing:(char)arg1 ;
-(NSMutableSet *)assets;
-(void)setAssets:(NSMutableSet *)arg1 ;
-(char)isSyncing;
@end

