/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/NSCopying.h>
#import <Radio/NSMutableCopying.h>

@class NSArray;

@interface RadioPlaybackContext : NSObject <NSCopying, NSMutableCopying> {

	long long _numberOfSkipsUsed;
	NSArray* _trackPlaybackDescriptorQueue;

}

@property (nonatomic,readonly) long long numberOfSkipsUsed;                              //@synthesize numberOfSkipsUsed=_numberOfSkipsUsed - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackPlaybackDescriptorQueue;              //@synthesize trackPlaybackDescriptorQueue=_trackPlaybackDescriptorQueue - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)playbackContextDictionary;
-(long long)numberOfSkipsUsed;
-(NSArray *)trackPlaybackDescriptorQueue;
@end
