/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UINavigationBarDelegate.h>

@class UIView, UINavigationBar, NSString;

@interface PLInteractiveNavigationControllerView : UIView <UINavigationBarDelegate> {

	UIView* _top;
	UIView* _bottom;
	UIView* _interactive;
	UIView* _overlay;
	UINavigationBar* _navBar;
	UIView* _header;
	UIView* _footer;
	long long _orientation;
	struct {
		unsigned transitioning : 1;
		unsigned headerViewIsVisible : 1;
		unsigned footerViewIsVisible : 1;
	}  _controllerViewFlags;

}

@property (nonatomic,readonly) UINavigationBar * navigationBar;                            //@synthesize navBar=_navBar - In the implementation block
@property (nonatomic,retain) UIView * topView;                                             //@synthesize top=_top - In the implementation block
@property (nonatomic,retain) UIView * bottomView;                                          //@synthesize bottom=_bottom - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                          //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                          //@synthesize footer=_footer - In the implementation block
@property (assign,getter=headerViewIsHidden,nonatomic) BOOL headerViewHidden; 
@property (assign,getter=footerViewIsHidden,nonatomic) BOOL footerViewHidden; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transitionWillBegin;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UINavigationBar *)navigationBar;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(UIView *)topView;
-(UIView *)bottomView;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setTopView:(UIView *)arg1 ;
-(void)setBottomView:(UIView *)arg1 ;
-(void)setInteractiveView:(id)arg1 ;
-(void)setTopViewAlpha:(double)arg1 ;
-(void)transitionDidEnd;
-(void)setInteractiveView:(id)arg1 removePrevious:(BOOL)arg2 ;
-(BOOL)footerViewIsHidden;
-(BOOL)headerViewIsHidden;
-(void)setHeaderViewHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setFooterViewHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHeaderViewHidden:(BOOL)arg1 ;
-(void)setFooterViewHidden:(BOOL)arg1 ;
-(void)_adjustViewFrame:(id)arg1 ;
-(id)interactiveView;
-(void)setOverlayView:(id)arg1 ;
@end

