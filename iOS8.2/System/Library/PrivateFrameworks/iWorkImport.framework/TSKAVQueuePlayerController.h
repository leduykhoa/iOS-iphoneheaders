/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSKAVPlayerController.h>

@class NSArray;

@interface TSKAVQueuePlayerController : TSKAVPlayerController {

	NSArray* mAssets;

}
-(void)playerItemDidPlayToEndTimeAtRate:(float)arg1 ;
-(id)initWithQueuePlayer:(id)arg1 delegate:(id)arg2 assets:(id)arg3 initialAssetIndex:(unsigned)arg4 ;
-(void)p_enqueueAssetsFromIndex:(unsigned)arg1 ;
-(id)initWithQueuePlayer:(id)arg1 delegate:(id)arg2 assets:(id)arg3 ;
-(void)skipToAssetAtIndex:(unsigned)arg1 ;
-(void)dealloc;
@end

