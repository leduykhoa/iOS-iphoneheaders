/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLock;

@interface SCRCThreadedWeakLinkedObject : NSObject {

	NSLock* _releaseLock;
	int _referenceCount;
	BOOL _calledDealloc;

}
-(id)retain;
-(void)dealloc;
-(id)init;
-(unsigned long long)retainCount;
-(void)invalidateThreadsWithWeakLinks;
-(oneway void)release;
@end

