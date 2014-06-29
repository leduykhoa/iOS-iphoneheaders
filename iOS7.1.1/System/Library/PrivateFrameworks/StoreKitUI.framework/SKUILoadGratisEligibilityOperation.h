/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSArray, SKUIClientContext, NSObject;

@interface SKUILoadGratisEligibilityOperation : NSOperation {

	NSArray* _bundleIDs;
	SKUIClientContext* _clientContext;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	/*^block*/ id _outputBlock;

}

@property (copy) id outputBlock; 
-(id)init;
-(void)main;
-(void).cxx_destruct;
-(id)initWithBundleIdentifiers:(id)arg1 clientContext:(id)arg2 ;
-(/*^block*/ id)outputBlock;
-(id)_bodyData;
-(void)setOutputBlock:(/*^block*/ id)arg1 ;
@end
