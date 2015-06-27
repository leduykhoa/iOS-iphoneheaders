/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@protocol EKCellShortener;
@class UILabel;

@interface CalendarEventEditedByCell : EKUIConstrainedFontsTableViewCell {

	UILabel* _titleLabel2;
	UILabel* _valueLabel2;
	unsigned _valuePlaceholder : 2;
	id<EKCellShortener> _shortener;

}

@property (nonatomic,retain,readonly) UILabel * textLabel2; 
@property (nonatomic,retain,readonly) UILabel * detailTextLabel2; 
@property (assign,nonatomic,__weak) id<EKCellShortener> shortener;              //@synthesize shortener=_shortener - In the implementation block
-(void)setShortener:(id<EKCellShortener>)arg1 ;
-(UILabel *)detailTextLabel2;
-(void)_checkValueWidth;
-(id<EKCellShortener>)shortener;
-(void)_copyTextLabelAttributesFrom:(id)arg1 to:(id)arg2 ;
-(char)detailTextIsPlaceholder;
-(char)detailText2IsPlaceholder;
-(void)setDetailTextIsPlaceholder:(char)arg1 ;
-(void)setDetailText2IsPlaceholder:(char)arg1 ;
-(void)layoutSubviews;
-(UILabel *)textLabel2;
@end
