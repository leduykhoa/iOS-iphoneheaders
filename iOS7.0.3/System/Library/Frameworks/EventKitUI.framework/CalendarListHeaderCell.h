/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@class CalendarListHeaderCellContentView;

@interface CalendarListHeaderCell : UIView {

	CalendarListHeaderCellContentView* _contentView;
	BOOL _showWeekNumber;
	double _date;

}

@property (assign,nonatomic) double date;                      //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL indentsForDots; 
@property (nonatomic,readonly) BOOL reusable; 
@property (assign,nonatomic) BOOL showWeekNumber;              //@synthesize showWeekNumber=_showWeekNumber - In the implementation block
-(BOOL)indentsForDots;
-(void)setIndentsForDots:(BOOL)arg1 ;
-(void)setShowWeekNumber:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 date:(double)arg2 ;
-(BOOL)reusable;
-(BOOL)showWeekNumber;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setNeedsDisplay;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)date;
-(id)_backgroundImage;
-(void)setDate:(double)arg1 ;
-(void).cxx_destruct;
@end

