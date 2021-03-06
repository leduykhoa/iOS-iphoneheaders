/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Videos/Videos-Structs.h>
#import <MediaPlayerUI/MPUTabBarController.h>
#import <UIKit/UITabBarControllerDelegate.h>
#import <Videos/VideosNavigationControllerViewLayoutObserver.h>

@class VideosTabBarSegmentedControl, NSString;

@interface VideosTabBarController : MPUTabBarController <UITabBarControllerDelegate, VideosNavigationControllerViewLayoutObserver> {

	VideosTabBarSegmentedControl* _videosTabBarSegmentedControl;

}

@property (nonatomic,retain) VideosTabBarSegmentedControl * videosTabBarSegmentedControl;              //@synthesize videosTabBarSegmentedControl=_videosTabBarSegmentedControl - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
-(void)viewDidLayoutSubviewsForNavigationController:(id)arg1 ;
-(void)_tabBarItemSelected:(id)arg1 ;
-(void)_refreshTabBar;
-(void)_recursivelyConfigureTitleForVideosTabBarVisibilityInViewController:(id)arg1 ;
-(void)_layoutTabBar;
-(void)_selectSegmentAtIndex:(unsigned)arg1 ;
-(VideosTabBarSegmentedControl *)videosTabBarSegmentedControl;
-(void)setVideosTabBarSegmentedControl:(VideosTabBarSegmentedControl *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)setViewControllers:(id)arg1 animated:(char)arg2 ;
-(void)setSelectedViewController:(id)arg1 ;
-(void)setSelectedIndex:(unsigned)arg1 ;
@end

