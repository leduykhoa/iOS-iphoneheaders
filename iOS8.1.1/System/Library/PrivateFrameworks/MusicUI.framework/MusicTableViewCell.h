/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:46 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class MusicTableViewCellContentView;

@interface MusicTableViewCell : UITableViewCell {

	MusicTableViewCellContentView* _cellContentView;
	double _maximumContentViewHeight;

}

@property (nonatomic,readonly) MusicTableViewCellContentView * cellContentView;              //@synthesize cellContentView=_cellContentView - In the implementation block
@property (assign,nonatomic) double maximumContentViewHeight;                                //@synthesize maximumContentViewHeight=_maximumContentViewHeight - In the implementation block
+(Class)contentViewClass;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIEdgeInsets)layoutMargins;
-(void)prepareForReuse;
-(void)setMaximumContentViewHeight:(double)arg1 ;
-(double)maximumContentViewHeight;
-(MusicTableViewCellContentView *)cellContentView;
@end
