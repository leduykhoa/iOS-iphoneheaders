/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>

@class UIViewController;

@interface SKUISimpleContainerViewController : UIViewController {

	UIViewController* _contentViewController;

}

@property (nonatomic,retain) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
+(char)_shouldForwardViewWillTransitionToSize;
-(void)loadView;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(UIViewController *)contentViewController;
-(void)setContentViewController:(UIViewController *)arg1 ;
@end
