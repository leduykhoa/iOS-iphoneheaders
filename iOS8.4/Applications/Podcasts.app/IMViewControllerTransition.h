/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:06 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/IMTransition.h>

@protocol IMViewControllerContaining;
@class UIViewController, UIImageView, UIView;

@interface IMViewControllerTransition : IMTransition {

	UIViewController*<IMViewControllerContaining> _fromViewController;
	UIViewController*<IMViewControllerContaining> _toViewController;
	UIImageView* _fromViewSnapshot;
	UIImageView* _toViewSnapshot;

}

@property (nonatomic,retain) UIViewController*<IMViewControllerContaining> fromViewController;              //@synthesize fromViewController=_fromViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<IMViewControllerContaining> toViewController;                //@synthesize toViewController=_toViewController - In the implementation block
@property (nonatomic,retain) UIImageView * fromViewSnapshot;                                                //@synthesize fromViewSnapshot=_fromViewSnapshot - In the implementation block
@property (nonatomic,retain) UIImageView * toViewSnapshot;                                                  //@synthesize toViewSnapshot=_toViewSnapshot - In the implementation block
@property (nonatomic,readonly) UIView * fromView; 
@property (nonatomic,readonly) UIView * toView; 
-(void)setReverse:(char)arg1 ;
-(void)prepareTransition;
-(void)cleanupTransition;
-(UIImageView *)fromViewSnapshot;
-(UIImageView *)toViewSnapshot;
-(CGRect)fillBoundsTargetRect;
-(void)performNonAnimatedTransition;
-(int)roleForViewController:(id)arg1 ;
-(void)setFromViewSnapshot:(UIImageView *)arg1 ;
-(void)setToViewSnapshot:(UIImageView *)arg1 ;
-(void)loadToView;
-(void)beginAppearanceTransition;
-(CATransform3D)fillBoundsScaleTransformFromTransform:(CATransform3D)arg1 sourceRect:(CGRect)arg2 ;
-(void)beginTransition;
-(void)setFromViewController:(UIViewController*<IMViewControllerContaining>)arg1 ;
-(void)setToViewController:(UIViewController*<IMViewControllerContaining>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)endAppearanceTransition;
-(UIView *)fromView;
-(UIView *)toView;
-(UIViewController*<IMViewControllerContaining>)fromViewController;
-(UIViewController*<IMViewControllerContaining>)toViewController;
-(void)transitionDidEnd;
@end

