/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, UIView;

@interface SBBackdropContainerView : UIView {

	_UIBackdropView* _backdropView;

}

@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,retain) _UIBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
-(void)_reallyInsertSubview:(id)arg1 atIndex:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)addSubview:(id)arg1 ;
-(void)layoutSubviews;
-(void)insertSubview:(id)arg1 atIndex:(int)arg2 ;
-(id)contentView;
-(void)setBackdropView:(id)arg1 ;
-(id)backdropView;
@end

