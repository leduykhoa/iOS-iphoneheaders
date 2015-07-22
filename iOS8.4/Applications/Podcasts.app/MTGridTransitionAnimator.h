/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/IMTransitionAnimator.h>

@class UIImage, UIView, UIImageView;

@interface MTGridTransitionAnimator : IMTransitionAnimator {

	UIImage* _startImage;
	UIView* _backdrop;
	UIView* _startView;
	UIImageView* _imageView;
	CGSize _endSize;
	CGRect _startFrame;

}

@property (assign,nonatomic) CGRect startFrame;                      //@synthesize startFrame=_startFrame - In the implementation block
@property (assign,nonatomic) CGSize endSize;                         //@synthesize endSize=_endSize - In the implementation block
@property (nonatomic,retain) UIImage * startImage;                   //@synthesize startImage=_startImage - In the implementation block
@property (nonatomic,retain) UIView * backdrop;                      //@synthesize backdrop=_backdrop - In the implementation block
@property (assign,nonatomic,__weak) UIView * startView;              //@synthesize startView=_startView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                //@synthesize imageView=_imageView - In the implementation block
-(CGSize)endSize;
-(void)setEndSize:(CGSize)arg1 ;
-(UIImage *)startImage;
-(void)setStartImage:(UIImage *)arg1 ;
-(void)setStartView:(UIView *)arg1 ;
-(UIView *)startView;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setStartFrame:(CGRect)arg1 ;
-(CGRect)startFrame;
-(UIImageView *)imageView;
-(UIView *)backdrop;
-(void)setBackdrop:(UIView *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
@end
