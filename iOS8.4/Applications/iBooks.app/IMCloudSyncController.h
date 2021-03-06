/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/IMCloudSyncOperationDelegate.h>
#import <iBooks/IMCloudsyncDeserializeOperationDelegate.h>

@protocol IMCloudSyncControllerDelegate, OS_dispatch_queue;
@class NSURL, NSString, IMCloudSyncStoreAuthenticationController, NSMutableArray, IMCloudSyncClampsController, IMCloudSyncTransaction, NSOperationQueue, IMCloudSyncDeserializer, NSObject;

@interface IMCloudSyncController : NSObject <IMCloudSyncOperationDelegate, IMCloudsyncDeserializeOperationDelegate> {

	NSURL* _defaultGetURL;
	NSURL* _defaultSetURL;
	NSString* _defaultDomain;
	char _enabled;
	IMCloudSyncStoreAuthenticationController* _authenticationController;
	char _resolvingError;
	id<IMCloudSyncControllerDelegate> _delegate;
	NSMutableArray* _pendingTransactions;
	IMCloudSyncClampsController* _clampsController;
	IMCloudSyncTransaction* _currentTransaction;
	NSOperationQueue* _operationQueue;
	IMCloudSyncDeserializer* _currentDeserializer;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	unsigned _backgroundTaskIdentifier;

}

@property (__weak) id<IMCloudSyncControllerDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSURL * defaultGetURL;                                                            //@synthesize defaultGetURL=_defaultGetURL - In the implementation block
@property (retain) NSURL * defaultSetURL;                                                            //@synthesize defaultSetURL=_defaultSetURL - In the implementation block
@property (copy) NSString * defaultDomain;                                                           //@synthesize defaultDomain=_defaultDomain - In the implementation block
@property (getter=isEnabled) char enabled;                                                           //@synthesize enabled=_enabled - In the implementation block
@property (retain) IMCloudSyncStoreAuthenticationController * authenticationController;              //@synthesize authenticationController=_authenticationController - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingTransactions;                                   //@synthesize pendingTransactions=_pendingTransactions - In the implementation block
@property (nonatomic,retain) IMCloudSyncTransaction * currentTransaction;                            //@synthesize currentTransaction=_currentTransaction - In the implementation block
@property (nonatomic,retain) IMCloudSyncClampsController * clampsController;                         //@synthesize clampsController=_clampsController - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                      //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) IMCloudSyncDeserializer * currentDeserializer;                          //@synthesize currentDeserializer=_currentDeserializer - In the implementation block
@property (assign,getter=isResolvingError,nonatomic) char resolvingError;                            //@synthesize resolvingError=_resolvingError - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                             //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned backgroundTaskIdentifier;                                      //@synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)scheduleGetTransactionWithKeys:(id)arg1 processor:(id)arg2 ;
-(id)scheduleSetTransactionWithKeys:(id)arg1 processor:(id)arg2 ;
-(void)resolveError:(id)arg1 resolution:(int)arg2 ;
-(void)setDefaultGetURL:(NSURL *)arg1 ;
-(void)setDefaultSetURL:(NSURL *)arg1 ;
-(void)setDefaultDomain:(NSString *)arg1 ;
-(void)deserializeOperationDidFinish:(id)arg1 shouldReschedule:(char)arg2 ;
-(void)cloudSyncOperationOperationDidFinish:(id)arg1 ;
-(void)cloudSyncOperation:(id)arg1 scheduleURLOperation:(id)arg2 ;
-(NSURL *)defaultGetURL;
-(NSString *)defaultDomain;
-(NSURL *)defaultSetURL;
-(void)_processPendingTransactions;
-(void)_cancelAllTransactions:(id)arg1 ;
-(id)_scheduleTransactionWithType:(int)arg1 URL:(id)arg2 keys:(id)arg3 processor:(id)arg4 ;
-(void)_scheduleTransaction:(id)arg1 ;
-(void)_transactionDidFail:(id)arg1 withError:(id)arg2 ;
-(void)_cancelTransaction:(id)arg1 error:(id)arg2 ;
-(IMCloudSyncClampsController *)clampsController;
-(void)_processCurrentTransaction;
-(char)_authenticationCanProcessTransaction:(id)arg1 error:(id*)arg2 ;
-(id)_requestForTransaction:(id)arg1 ;
-(char)_canScheduleTransaction:(id)arg1 error:(id*)arg2 ;
-(void)_addPendingTransaction:(id)arg1 ;
-(char)_isEnabledForTransaction:(id)arg1 error:(id*)arg2 ;
-(char)_isTransactionValid:(id)arg1 error:(id*)arg2 ;
-(char)_clampsCanScheduleTransaction:(id)arg1 error:(id*)arg2 ;
-(void)setCurrentDeserializer:(IMCloudSyncDeserializer *)arg1 ;
-(void)setResolvingError:(char)arg1 ;
-(void)_errorResolutionRetry:(id)arg1 ;
-(void)_errorResolutionCancel:(id)arg1 ;
-(void)_errorResolutionDefault:(id)arg1 ;
-(void)_processOperationOutput:(id)arg1 operationAuthenticated:(char)arg2 ;
-(void)_currentTransactionDidFinish;
-(IMCloudSyncDeserializer *)currentDeserializer;
-(void)setClampsController:(IMCloudSyncClampsController *)arg1 ;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)_endBackgroundTask;
-(void)dealloc;
-(void)setDelegate:(id<IMCloudSyncControllerDelegate>)arg1 ;
-(id)init;
-(id<IMCloudSyncControllerDelegate>)delegate;
-(void)reset;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)setBackgroundTaskIdentifier:(unsigned)arg1 ;
-(unsigned)backgroundTaskIdentifier;
-(NSOperationQueue *)operationQueue;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)scheduleTransaction:(id)arg1 ;
-(char)_delegateShouldScheduleTransaction:(id)arg1 error:(id*)arg2 ;
-(void)_delegateTransactionDidFinish:(id)arg1 ;
-(char)_delegateTransactionDidFail:(id)arg1 withError:(id)arg2 ;
-(void)_resolveError:(id)arg1 resolution:(int)arg2 ;
-(void)cancelScheduledTransaction:(id)arg1 ;
-(IMCloudSyncStoreAuthenticationController *)authenticationController;
-(void)setAuthenticationController:(IMCloudSyncStoreAuthenticationController *)arg1 ;
-(IMCloudSyncTransaction *)currentTransaction;
-(void)setCurrentTransaction:(IMCloudSyncTransaction *)arg1 ;
-(NSMutableArray *)pendingTransactions;
-(void)setPendingTransactions:(NSMutableArray *)arg1 ;
-(char)isResolvingError;
-(char)isIdle;
-(void)_beginBackgroundTask;
-(void)operation:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
@end

