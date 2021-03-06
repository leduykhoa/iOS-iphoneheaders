/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSKMediaPlayerController.h>

@protocol TSKMediaPlayerControllerDelegate;
@class AVPlayer, NSString;

@interface TSKAVPlayerController : NSObject <TSKMediaPlayerController> {

	AVPlayer* mPlayer;
	id<TSKMediaPlayerControllerDelegate> mDelegate;
	char mStreaming;
	int mRepeatMode;
	float mVolume;
	float mRateBeforeScrubbing;
	unsigned mScrubbingCount;
	char mCanPlay;
	char mPlaying;
	char mFastReversing;
	char mFastForwarding;
	char mIsObservingStatus;

}

@property (nonatomic,readonly) AVPlayer * player; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TSKMediaPlayerControllerDelegate> delegate; 
@property (nonatomic,readonly) char canPlay; 
@property (assign,getter=isPlaying,nonatomic) char playing; 
@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double endTime; 
@property (assign,nonatomic) int repeatMode; 
@property (assign,nonatomic) float volume; 
@property (getter=isScrubbing,nonatomic,readonly) char scrubbing; 
@property (nonatomic,readonly) char canFastReverse; 
@property (assign,getter=isFastReversing,nonatomic) char fastReversing; 
@property (nonatomic,readonly) char canFastForward; 
@property (assign,getter=isFastForwarding,nonatomic) char fastForwarding; 
@property (nonatomic,readonly) double absoluteCurrentTime; 
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) double remainingTime; 
@property (nonatomic,readonly) double absoluteDuration; 
@property (nonatomic,readonly) double duration; 
+(id)keyPathsForValuesAffectingDuration;
+(id)keyPathsForValuesAffectingAbsoluteDuration;
+(char)automaticallyNotifiesObserversOfStartTime;
+(id)keyPathsForValuesAffectingStartTime;
+(char)automaticallyNotifiesObserversOfEndTime;
+(id)keyPathsForValuesAffectingEndTime;
+(id)keyPathsForValuesAffectingCanFastReverse;
+(id)keyPathsForValuesAffectingCanFastForward;
+(char)automaticallyNotifiesObserversOfRate;
+(id)keyPathsForValuesAffectingRate;
-(id)newLayer;
-(id)initWithPlayer:(id)arg1 delegate:(id)arg2 streaming:(char)arg3 ;
-(double)absoluteCurrentTime;
-(void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(double)absoluteDuration;
-(void)scrubToTime:(double)arg1 withTolerance:(double)arg2 ;
-(void)seekForwardByOneFrame;
-(void)seekBackwardByOneFrame;
-(void)seekToBeginning;
-(id)addPeriodicTimeObserverForInterval:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)removePeriodicTimeObserver:(id)arg1 ;
-(char)canFastReverse;
-(char)isFastReversing;
-(void)setFastReversing:(char)arg1 ;
-(char)canFastForward;
-(char)isFastForwarding;
-(void)setFastForwarding:(char)arg1 ;
-(void)p_startObservingClosedCaptionDisplayEnabled;
-(void)p_stopObservingClosedCaptionDisplayEnabled;
-(void)p_applyVolumeToPlayerItem;
-(void)playerItemDidPlayToEndTimeAtRate:(float)arg1 ;
-(char)p_canFastReverseAtCurrentTime;
-(char)p_canFastForwardAtCurrentTime;
-(void)p_closedCaptioningStatusDidChange:(id)arg1 ;
-(void)p_updateClosedCaptionDisplayEnabled;
-(void)p_playerItemDidPlayToEndTime:(id)arg1 ;
-(void)p_playerItemDidJumpTime:(id)arg1 ;
-(void)p_playbackDidFailWithError:(id)arg1 ;
-(void)cancelPendingSeeks;
-(int)repeatMode;
-(void)setRepeatMode:(int)arg1 ;
-(char)isScrubbing;
-(void)beginScrubbing;
-(void)endScrubbing;
-(void)setEndTime:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(id<TSKMediaPlayerControllerDelegate>)delegate;
-(double)duration;
-(void)setStartTime:(double)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)startTime;
-(void)seekToEnd;
-(double)remainingTime;
-(void)teardown;
-(float)rate;
-(void)setRate:(float)arg1 ;
-(double)endTime;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(double)currentTime;
-(AVPlayer *)player;
-(char)canPlay;
-(char)isPlaying;
-(void)setPlaying:(char)arg1 ;
@end

