/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/TKView.h>
#import <Podcasts/TKMultilineLabelScrollerDelegate.h>

@class NSString, UIButton, UILabel, TKMultilineLabelComponent, TKMultilineLabelScroller;

@interface TKMultilineLabel : TKView <TKMultilineLabelScrollerDelegate> {

	CGRect _lastLineFrame;
	CGRect _moreSize;
	NSString* _moreText;
	char hasOverflow;
	UIButton* _moreButton;
	CGSize _fullSize;
	char _hasMore;
	UILabel* _bodyLabel;
	UILabel* _moreLineLabel;
	TKMultilineLabelComponent* _model;
	float _lineHeight;
	float _topBottomPadding;
	TKMultilineLabelScroller* _moreLabel;
	CGSize _expectedSize;

}

@property (retain) UILabel * bodyLabel;                               //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (retain) UILabel * moreLineLabel;                           //@synthesize moreLineLabel=_moreLineLabel - In the implementation block
@property (retain) TKMultilineLabelComponent * model;                 //@synthesize model=_model - In the implementation block
@property (assign) char hasMore;                                      //@synthesize hasMore=_hasMore - In the implementation block
@property (assign) float lineHeight;                                  //@synthesize lineHeight=_lineHeight - In the implementation block
@property (assign) float topBottomPadding;                            //@synthesize topBottomPadding=_topBottomPadding - In the implementation block
@property (assign) CGSize expectedSize;                               //@synthesize expectedSize=_expectedSize - In the implementation block
@property (retain) TKMultilineLabelScroller * moreLabel;              //@synthesize moreLabel=_moreLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)rectForBounds:(CGRect)arg1 withTop:(float)arg2 withTheme:(id)arg3 withComponent:(id)arg4 ;
+(CGSize)getHeightForTheme:(id)arg1 forNode:(id)arg2 withSize:(CGSize)arg3 ;
-(id)initWithFrame:(CGRect)arg1 withComponent:(id)arg2 withTheme:(id)arg3 ;
-(id)createMoreButton;
-(void)morePressed:(CGSize)arg1 ;
-(void)expandExpandingLabel:(id)arg1 ;
-(UILabel *)moreLineLabel;
-(void)setMoreLineLabel:(UILabel *)arg1 ;
-(char)hasMore;
-(void)setHasMore:(char)arg1 ;
-(float)topBottomPadding;
-(void)setTopBottomPadding:(float)arg1 ;
-(void)setExpectedSize:(CGSize)arg1 ;
-(TKMultilineLabelScroller *)moreLabel;
-(void)setMoreLabel:(TKMultilineLabelScroller *)arg1 ;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(float)lineHeight;
-(void)tintColorDidChange;
-(TKMultilineLabelComponent *)model;
-(void)setLineHeight:(float)arg1 ;
-(void)setModel:(TKMultilineLabelComponent *)arg1 ;
-(CGSize)expectedSize;
@end

