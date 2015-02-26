/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:58 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCOperation.h>
#import <CloudDocsDaemon/BRCOperationSubclass.h>

@class CKModifyRecordsOperation, NSArray, NSString;

@interface BRCSyncUpOperation : BRCOperation <BRCOperationSubclass> {

	float _cost;
	CKModifyRecordsOperation* _modifyOperation;
	/*^block*/id _syncUpCompletionBlock;
	NSArray* _recordsNeedingSharingInfo;

}

@property (nonatomic,readonly) float cost;                                              //@synthesize cost=_cost - In the implementation block
@property (nonatomic,readonly) CKModifyRecordsOperation * modifyOperation;              //@synthesize modifyOperation=_modifyOperation - In the implementation block
@property (nonatomic,copy) id syncUpCompletionBlock;                                    //@synthesize syncUpCompletionBlock=_syncUpCompletionBlock - In the implementation block
@property (nonatomic,readonly) NSArray * recordsNeedingSharingInfo;                     //@synthesize recordsNeedingSharingInfo=_recordsNeedingSharingInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)modifyRecordsOperationForContainer:(id)arg1 maxCost:(float)arg2 cost:(float*)arg3 retryAfter:(unsigned long long*)arg4 recordsNeedingSharingInfo:(id*)arg5 ;
+(id)syncUpOperationForContainer:(id)arg1 maxCost:(float)arg2 retryAfter:(unsigned long long*)arg3 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithContainer:(id)arg1 cost:(float)arg2 modifyOperation:(id)arg3 recordsNeedingSharingInfo:(id)arg4 ;
-(CKModifyRecordsOperation *)modifyOperation;
-(id)syncUpCompletionBlock;
-(void)setSyncUpCompletionBlock:(id)arg1 ;
-(NSArray *)recordsNeedingSharingInfo;
-(float)cost;
@end
