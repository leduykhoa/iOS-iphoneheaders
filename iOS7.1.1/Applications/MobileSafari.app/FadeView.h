/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>

@interface FadeView : UIView {

	id _target;
	SEL _action;

}

@property (assign,nonatomic) id target;               //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;              //@synthesize action=_action - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)target;
-(void)setAction:(SEL)arg1 ;
@end

