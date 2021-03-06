/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFilePresenter.h>

@class NSURL, PFUbiquityLocation, NSOperationQueue;

@interface PFUbiquityMetadataFactoryFilePresenter : NSObject <NSFilePresenter> {

	NSURL* _presentedItemURL;
	PFUbiquityLocation* _presentedItemLocation;

}

@property (readonly) NSURL * presentedItemURL;                                          //@synthesize presentedItemURL=_presentedItemURL - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * presentedItemLocation;              //@synthesize presentedItemLocation=_presentedItemLocation - In the implementation block
@property (readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (readonly) NSURL * primaryPresentedItemURL; 
+(void)initialize;
-(id)initWithMetadataStoreFileLocation:(id)arg1 ;
-(id)presentedItemLocation;
-(void)dealloc;
-(id)init;
-(void)relinquishPresentedItemToReader:(/*^block*/ id)arg1 ;
-(void)relinquishPresentedItemToWriter:(/*^block*/ id)arg1 ;
-(void)savePresentedItemChangesWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)presentedItemURL;
-(id)presentedItemOperationQueue;
@end

