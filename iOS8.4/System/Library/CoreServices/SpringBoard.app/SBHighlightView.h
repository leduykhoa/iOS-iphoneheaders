/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface SBHighlightView : UIView {

	UIImageView* _highlight;
	double _highlightAlpha;
	double _highlightHeight;

}

@property (nonatomic,readonly) double highlightAlpha;               //@synthesize highlightAlpha=_highlightAlpha - In the implementation block
@property (nonatomic,readonly) double highlightHeight;              //@synthesize highlightHeight=_highlightHeight - In the implementation block
+(id)_highlightImageWithHeight:(double)arg1 alpha:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 highlightAlpha:(double)arg2 highlightHeight:(double)arg3 ;
-(double)highlightHeight;
-(void)dealloc;
-(void)layoutSubviews;
-(double)highlightAlpha;
@end

