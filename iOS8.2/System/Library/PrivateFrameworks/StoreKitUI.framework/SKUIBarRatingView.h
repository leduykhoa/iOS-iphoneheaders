/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@interface SKUIBarRatingView : UIView {

	int _barRatingStyle;
	int _numberOfBars;
	float _ratingValue;

}

@property (assign,nonatomic) int barRatingStyle;              //@synthesize barRatingStyle=_barRatingStyle - In the implementation block
@property (assign,nonatomic) int numberOfBars;                //@synthesize numberOfBars=_numberOfBars - In the implementation block
@property (assign,nonatomic) float ratingValue;               //@synthesize ratingValue=_ratingValue - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(float)ratingValue;
-(void)setBarRatingStyle:(int)arg1 ;
-(void)setNumberOfBars:(int)arg1 ;
-(void)setRatingValue:(float)arg1 ;
-(int)barRatingStyle;
-(int)numberOfBars;
@end

