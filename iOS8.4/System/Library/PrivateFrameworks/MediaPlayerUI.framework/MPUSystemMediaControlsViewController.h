/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <MediaPlayerUI/MPUNowPlayingDelegate.h>
#import <MediaPlayerUI/MPUTransportControlMediaRemoteControllerDelegate.h>
#import <MediaPlayerUI/MPUTransportControlsViewDataSource.h>
#import <MediaPlayerUI/MPUTransportControlsViewDelegate.h>
#import <MediaPlayerUI/MPUTransportControlsViewLayoutDelegate.h>
#import <MediaPlayerUI/MPURemoteViewControllerPresentation.h>
#import <MediaPlayerUI/MPUChronologicalProgressViewDelegate.h>
#import <MediaPlayerUI/MPUMediaControlsTitlesViewDelegate.h>
#import <MediaPlayerUI/MPUSystemMediaControlsViewDelegate.h>
#import <MediaPlayerUI/MPAVRoutingControllerDelegate.h>

@protocol MPUSystemMediaControlsDelegate;
@class MPUNowPlayingController, MPAVRoutingController, MPUSystemMediaControlsView, UIImageView, MPUTransportControlMediaRemoteController, NSArray, NSTimer, NSString, UIView;

@interface MPUSystemMediaControlsViewController : UIViewController <MPUNowPlayingDelegate, MPUTransportControlMediaRemoteControllerDelegate, MPUTransportControlsViewDataSource, MPUTransportControlsViewDelegate, MPUTransportControlsViewLayoutDelegate, MPURemoteViewControllerPresentation, MPUChronologicalProgressViewDelegate, MPUMediaControlsTitlesViewDelegate, MPUSystemMediaControlsViewDelegate, MPAVRoutingControllerDelegate> {

	MPUNowPlayingController* _nowPlayingController;
	MPAVRoutingController* _routingController;
	MPUSystemMediaControlsView* _mediaControlsView;
	UIImageView* _artworkImageView;
	MPUTransportControlMediaRemoteController* _transportControlMediaRemoteController;
	NSArray* _currentlySupportedCommands;
	NSTimer* _skipInformationRevealTimer;
	NSTimer* _scrubberCommitTimer;
	double _scrubbedTimeDestination;
	double _lastDurationFromUpdate;
	NSString* _audioCategoryForDisabledHUD;
	BOOL _lockscreenDisabledForScreenTurnOff;
	BOOL _wantsToLaunchNowPlayingApp;
	BOOL _nowPlayingIsRadioStation;
	NSArray* _notificationObservers;
	BOOL _persistentUpdatesEnabled;
	long long _style;
	id<MPUSystemMediaControlsDelegate> _delegate;

}

@property (nonatomic,readonly) long long style;                                               //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<MPUSystemMediaControlsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * artworkView; 
@property (assign,nonatomic) BOOL persistentUpdatesEnabled;                                   //@synthesize persistentUpdatesEnabled=_persistentUpdatesEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_tearDownNotifications;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MPUSystemMediaControlsDelegate>)arg1 ;
-(id<MPUSystemMediaControlsDelegate>)delegate;
-(long long)style;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_updateSupportedCommands;
-(id)_imageForTransportButtonWithControlType:(long long)arg1 ;
-(id)presentingViewControllerForLikeBanActionSheetForTransportControlMediaRemoteController:(id)arg1 ;
-(void)transportControlMediaRemoteController:(id)arg1 requestsPushingMediaRemoteCommand:(unsigned)arg2 withOptions:(id)arg3 shouldLaunchApplication:(BOOL)arg4 ;
-(id)transportControlsView:(id)arg1 buttonForControlType:(long long)arg2 ;
-(void)transportControlsView:(id)arg1 tapOnControlType:(long long)arg2 ;
-(void)transportControlsView:(id)arg1 longPressBeginOnControlType:(long long)arg2 ;
-(void)transportControlsView:(id)arg1 longPressEndOnControlType:(long long)arg2 ;
-(double)transportControlsView:(id)arg1 transportButtonUnhighlightAnimationDurationForControlType:(long long)arg2 ;
-(CGRect)transportControlsView:(id)arg1 adjustedFrameOfTransportButtonWithControlType:(long long)arg2 proposedFrame:(CGRect)arg3 ;
-(void)_scheduleSkipInformationRevealTimer;
-(void)_invalidateSkipInformationRevealTimer;
-(UIView *)artworkView;
-(void)progressViewDidBeginScrubbing:(id)arg1 ;
-(void)progressViewDidEndScrubbing:(id)arg1 ;
-(void)mediaControlsViewDidCancelBuyTrackDownloadAction:(id)arg1 ;
-(void)mediaControlsViewDidConfirmBuyTrackAction:(id)arg1 ;
-(void)nowPlayingController:(id)arg1 nowPlayingInfoDidChange:(id)arg2 ;
-(void)nowPlayingController:(id)arg1 playbackStateDidChange:(BOOL)arg2 ;
-(void)nowPlayingController:(id)arg1 nowPlayingApplicationDidChange:(id)arg2 ;
-(void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(double)arg2 ;
-(void)_stopScrubberCommitTimer;
-(BOOL)_mediaRemoteCommandIsSupportedAndEnabled:(unsigned)arg1 ;
-(void)_updateBuyButtonsWithNowPlayingInfo:(id)arg1 ;
-(void)_launchCurrentNowPlayingApp;
-(void)_buyButtonActionForSender:(id)arg1 command:(unsigned)arg2 ;
-(void)_revealSkipInformation;
-(void)_launchFirstPartyMusicAppForShareCommand;
-(void)_beginScrubberCommitTimer;
-(void)_commitCurrentScrubberValue;
-(void)_backlightLevelChangedNotification:(id)arg1 ;
-(void)_supportedCommandsDidChangeNotification:(id)arg1 ;
-(void)_systemAppDidSkipTrackNotification:(id)arg1 ;
-(BOOL)_shouldUseExtendedTransportControls;
-(void)_updateTransportControlCount;
-(void)remoteViewControllerDidFinish;
-(void)mediaControlsTitlesViewWasTapped:(id)arg1 ;
-(void)mediaControlsViewDidConfirmBuyAlbumAction:(id)arg1 ;
-(void)setPersistentUpdatesEnabled:(BOOL)arg1 ;
-(CGSize)transportControlsView:(id)arg1 adjustedMaximumTransportButtonSizeWithProposedSize:(CGSize)arg2 ;
-(BOOL)persistentUpdatesEnabled;
-(void)_setupNotifications;
@end

