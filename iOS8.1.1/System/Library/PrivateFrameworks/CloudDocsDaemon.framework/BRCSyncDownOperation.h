/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCOperation.h>
#import <CloudDocsDaemon/BRCOperationSubclass.h>

@class BRCServerContainer, NSString;

@interface BRCSyncDownOperation : BRCOperation <BRCOperationSubclass> {

	BRCServerContainer* _serverContainer;
	unsigned _batchSize;
	BOOL _hasCaughtUp;
	BOOL _isConsistent;

}

@property (nonatomic,readonly) BOOL isConsistent;                   //@synthesize isConsistent=_isConsistent - In the implementation block
@property (nonatomic,readonly) BOOL hasCaughtUp;                    //@synthesize hasCaughtUp=_hasCaughtUp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)syncDownAckQueue;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithServerContainer:(id)arg1 ;
-(BOOL)hasCaughtUp;
-(BOOL)isConsistent;
-(void)_saveRecordBatchIfNecessaryWithRecords:(id)arg1 deletedStructureRecordIDs:(id)arg2 ;
-(id)_fetchRecordChangesOperationWithCompletion:(/*^block*/id)arg1 ;
-(void)scheduleFetchQuotaAndSyncDown;
-(id)_zoneCreationOperationWithCompletionBlock:(/*^block*/id)arg1 ;
@end

