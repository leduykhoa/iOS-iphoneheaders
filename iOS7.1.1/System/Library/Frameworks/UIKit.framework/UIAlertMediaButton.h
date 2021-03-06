/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertButton.h>

@class UIImageView, UIImage;

@interface UIAlertMediaButton : UIAlertButton {

	UIImageView* _checkmarkView;
	UIImage* _tableIcon;
	UIImage* _highlightedTableIcon;

}

@property (nonatomic,readonly) UIImageView * checkmarkView; 
@property (nonatomic,retain) UIImage * tableIcon;                         //@synthesize tableIcon=_tableIcon - In the implementation block
@property (nonatomic,retain) UIImage * highlightedTableIcon;              //@synthesize highlightedTableIcon=_highlightedTableIcon - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTableIcon:(id)arg1 ;
-(void)setHighlightedTableIcon:(id)arg1 ;
-(id)tableIcon;
-(id)highlightedTableIcon;
-(id)checkmarkView;
@end

