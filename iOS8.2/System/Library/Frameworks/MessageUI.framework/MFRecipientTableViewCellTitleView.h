/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:41 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIView.h>
#import <MessageUI/MFTinting.h>

@class NSAttributedString, UIColor, UILabel, NSString;

@interface MFRecipientTableViewCellTitleView : UIView <MFTinting> {

	NSAttributedString* _deselectedAttributedString;
	UIColor* _tintColor;
	char _shouldDim;
	char _highlighted;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) char highlighted;                      //@synthesize highlighted=_highlighted - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char shouldDim;                        //@synthesize shouldDim=_shouldDim - In the implementation block
+(id)defaultStringAttributes;
+(id)highlightedStringAttributes;
+(id)regularStringAttributes;
+(float)height;
-(void)setShouldDim:(char)arg1 ;
-(char)shouldDim;
-(void)setTintColor:(id)arg1 animated:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)tintColor;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)titleLabel;
-(char)highlighted;
@end
