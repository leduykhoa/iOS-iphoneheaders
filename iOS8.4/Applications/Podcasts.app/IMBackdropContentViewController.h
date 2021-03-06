/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIViewController;

@interface IMBackdropContentViewController : UIViewController {

	int _backdropViewPrivateStyle;
	UIViewController* _contentViewController;

}

@property (assign,nonatomic) int backdropViewPrivateStyle;                          //@synthesize backdropViewPrivateStyle=_backdropViewPrivateStyle - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
-(void)dealloc;
-(void)loadView;
-(UIViewController *)contentViewController;
-(id)initWithContentViewController:(id)arg1 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)setBackdropViewPrivateStyle:(int)arg1 ;
-(int)backdropViewPrivateStyle;
@end

