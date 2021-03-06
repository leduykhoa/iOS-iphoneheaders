/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:46 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBWallpaperObserver.h>
#import <SpringBoard/SBAppSwitcherPageContentView.h>

@class UIView, SBFakeStatusBarView, SBAppSwitcherStatusBarViewCache;

@interface SBAppSliderHomePageCellView : UIView <SBWallpaperObserver, SBAppSwitcherPageContentView> {

	UIView* _possiblyRotatedContainer;
	UIView* _nonRotatedContainer;
	UIView* _homeScreenView;
	UIView* _homeSnapshot;
	UIView* _wallpaperView;
	SBFakeStatusBarView* _fakeStatusBar;
	SBAppSwitcherStatusBarViewCache* _statusBarCache;
	BOOL _usesSnapshots;
	int _snapshotOrientation;
	int _orientation;

}

@property (nonatomic,readonly) UIView * homeSnapshot;              //@synthesize homeSnapshot=_homeSnapshot - In the implementation block
@property (nonatomic,retain) UIView * homeScreenView;              //@synthesize homeScreenView=_homeScreenView - In the implementation block
@property (assign,nonatomic) int orientation;                      //@synthesize orientation=_orientation - In the implementation block
+(id)wallpaperSnapshotForZoomFactor:(float)arg1 orientation:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 statusBarCache:(id)arg2 ;
-(void)setHomeSnapshot:(id)arg1 inOrientation:(int)arg2 ;
-(void)setHomeScreenView:(id)arg1 ;
-(void)wallpaperDidChangeForVariant:(int)arg1 ;
-(void)_viewPresenting:(id)arg1 ;
-(void)_viewDismissing:(id)arg1 ;
-(void)_viewDidAnimatePresentation:(id)arg1 ;
-(void)_statusBarFrameChanging;
-(void)_updateWallpaperView;
-(void)_addHomeScreenViewAsSubview:(id)arg1 ;
-(id)homeSnapshot;
-(id)homeScreenView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
-(void)setLegibilitySettings:(id)arg1 ;
@end

