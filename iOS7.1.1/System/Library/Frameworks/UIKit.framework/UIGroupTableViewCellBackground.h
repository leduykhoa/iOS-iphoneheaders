/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIColor;

@interface UIGroupTableViewCellBackground : UIView {

	int _sectionLocation;
	int _newSectionLocation;
	long long _animationCount;
	long long _selectionStyle;
	long long _separatorStyle;
	UIView* _topSeparatorView;
	UIView* _bottomSeparatorView;
	UIColor* _selectionTintColor;
	double _sectionBorderWidth;
	UIEdgeInsets _separatorInset;
	struct {
		unsigned selected : 1;
	}  _groupBackgroundFlags;

}

@property (assign,nonatomic) int sectionLocation; 
@property (assign,nonatomic) long long selectionStyle; 
@property (assign,nonatomic) long long separatorStyle; 
@property (assign,nonatomic) UIEdgeInsets separatorInset;                  //@synthesize separatorInset=_separatorInset - In the implementation block
@property (nonatomic,retain) UIColor * selectionTintColor; 
@property (assign,getter=isSelected,nonatomic) bool selected; 
@property (assign,nonatomic) double sectionBorderWidth;                    //@synthesize sectionBorderWidth=_sectionBorderWidth - In the implementation block
+(void)initialize;
+(void)_flushCacheOnNotification:(id)arg1 ;
-(id)_backgroundColor;
-(id)_separatorColor;
-(id)_sectionBorderColor;
-(void)_layoutSubviews:(bool)arg1 ;
-(id)_fillColor;
-(id)_topShadowColor;
-(id)_bottomShadowColor;
-(id)_roundedRectBezierPathInRect:(CGRect)arg1 withSectionLocation:(int)arg2 forBorder:(bool)arg3 cornerRadiusAdjustment:(double)arg4 ;
-(double)_pixelDisplayedImageHeight;
-(CGRect)_contentsRect:(bool)arg1 ;
-(CGRect)_contentsCenter:(bool)arg1 ;
-(void)_updateSeparatorViews;
-(id)_cachedImageForKey:(id)arg1 ;
-(CGRect)_contentRectForContentHeight:(double)arg1 ;
-(void)_incrementAnimationCount;
-(void)_decrementAnimationCount;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSeparatorStyle:(long long)arg1 ;
-(UIEdgeInsets)separatorInset;
-(bool)isSelected;
-(void)setSectionLocation:(int)arg1 animated:(bool)arg2 ;
-(void)setSelected:(bool)arg1 ;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(long long)separatorStyle;
-(void)displayLayer:(id)arg1 ;
-(void)setSelectionTintColor:(id)arg1 ;
-(void)setSelectionStyle:(long long)arg1 ;
-(long long)selectionStyle;
-(id)selectionTintColor;
-(int)sectionLocation;
-(id)_contentMaskLayer;
-(id)_topShadowViewWithColor:(id)arg1 ;
-(void)setSectionBorderWidth:(double)arg1 ;
-(void)setSectionLocation:(int)arg1 ;
-(double)sectionBorderWidth;
-(void)_setSectionLocationAnimationDidStop;
-(void)setSelectionTintColor:(id)arg1 layoutSubviews:(bool)arg2 ;
@end

