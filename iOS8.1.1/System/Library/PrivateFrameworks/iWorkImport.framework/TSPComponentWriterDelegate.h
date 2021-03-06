/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSPComponentWriterDelegate <NSObject>
@optional
-(void)componentWriterNeedsDocumentRecovery:(id)arg1;
-(void)componentWriter:(id)arg1 locatorForClaimingComponent:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4;
-(BOOL)componentWriter:(id)arg1 object:(id)arg2 belongsToLinkedComponent:(id)arg3;
-(BOOL)componentWriter:(id)arg1 externalPackageDidWriteObject:(id)arg2 claimingComponent:(id*)arg3;
-(BOOL)componentWriter:(id)arg1 shouldDelayWritingObject:(id)arg2;

@required
-(id)componentWriter:(id)arg1 wantsExplicitComponentRootObjectForObject:(id)arg2 claimingComponent:(id)arg3;
-(void)componentWriter:(id)arg1 canSkipArchivingStronglyReferencedObject:(id)arg2 fromComponentRootObject:(id)arg3 completion:(/*^block*/id)arg4;
-(void)componentWriterWantsDelayedObjects:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3;
-(void)componentWriter:(id)arg1 wantsComponentOfObject:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4;

@end

