/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:12 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIFont, UIColor, NSArray;

@interface SUTableTextFooterView : UIView {

	UIFont* _font;
	UIColor* _shadowColor;
	long long _textAlignment;
	UIColor* _textColor;
	NSArray* _textLines;

}

@property (nonatomic,retain) UIFont * font;                        //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) long long textAlignment;              //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                  //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) NSArray * textLines;                  //@synthesize textLines=_textLines - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)sizeToFit;
-(UIColor *)shadowColor;
-(UIFont *)font;
-(UIColor *)textColor;
-(long long)textAlignment;
-(void)setTextLines:(NSArray *)arg1 ;
-(NSArray *)textLines;
@end
