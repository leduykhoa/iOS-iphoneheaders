/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, UITextView;

@interface SBSearchWikiRowCell : UITableViewCell {

	UILabel* _labelLabel;
	UITextView* _valueTextView;

}

@property (assign) UILabel * labelLabel;                    //@synthesize labelLabel=_labelLabel - In the implementation block
@property (assign) UITextView * valueTextView;              //@synthesize valueTextView=_valueTextView - In the implementation block
-(UITextView *)valueTextView;
-(void)setLabelLabel:(UILabel *)arg1 ;
-(void)setValueTextView:(UITextView *)arg1 ;
-(void)layoutSubviews;
-(void)awakeFromNib;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(UILabel *)labelLabel;
@end

