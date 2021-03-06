/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:31:29 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVDelegateStorage.h>

@protocol OS_dispatch_queue;
@class NSObject, AVWeakReference, NSString;

@interface AVWeakReferencingDelegateStorage : NSObject <AVDelegateStorage> {

	NSObject*<OS_dispatch_queue> _delegateReadWriteQueue;
	AVWeakReference* _weakReferenceToDelegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,readonly) id delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)invokeDelegateCallbackWithBlock:(/*^block*/id)arg1 ;
-(void)_collectUncollectables;
-(void)getRetainedDelegate:(id*)arg1 retainedDelegateQueue:(id*)arg2 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(id)_delegate;
-(void)_setDelegate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)finalize;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
@end

