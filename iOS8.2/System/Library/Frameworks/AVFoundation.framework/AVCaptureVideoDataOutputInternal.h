/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVWeakReferencingDelegateStorage, NSDictionary, NSObject;

@interface AVCaptureVideoDataOutputInternal : NSObject {

	AVWeakReference* weakReference;
	AVWeakReferencingDelegateStorage* delegateStorage;
	NSDictionary* videoSettings;
	SCD_Struct_CM4 deprecatedMinFrameDuration;
	char alwaysDiscardsLateVideoFrames;
	NSObject*<OS_dispatch_queue> bufferQueue;
	OpaqueFigSimpleMutexRef remoteQueueMutex;
	remoteQueueReceiverOpaqueRef remoteReceiverQueue;

}
-(void)dealloc;
-(id)init;
@end

