/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIView, NSIndexPath;

@interface UIViewAnimation : NSObject {

	UIView* _view;
	NSIndexPath* _indexPath;
	CGRect _endRect;
	double _endAlpha;
	double _startFraction;
	double _endFraction;
	int _curve;
	BOOL _animateFromCurrentPosition;
	BOOL _shouldDeleteAfterAnimation;
	BOOL _editing;
	BOOL _shouldAnimateShadow;
	BOOL _shouldResetGroupOpacityAfterAnimation;
	BOOL _shouldAllowGroupOpacityAfterAnimation;
	BOOL _shouldClipToBoundsAfterAnimation;

}

@property (nonatomic,readonly) UIView * view;                                         //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                               //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) CGRect endRect;                                        //@synthesize endRect=_endRect - In the implementation block
@property (nonatomic,readonly) double endAlpha;                                       //@synthesize endAlpha=_endAlpha - In the implementation block
@property (nonatomic,readonly) double startFraction;                                  //@synthesize startFraction=_startFraction - In the implementation block
@property (nonatomic,readonly) double endFraction;                                    //@synthesize endFraction=_endFraction - In the implementation block
@property (nonatomic,readonly) int curve;                                             //@synthesize curve=_curve - In the implementation block
@property (nonatomic,readonly) BOOL animateFromCurrentPosition;                       //@synthesize animateFromCurrentPosition=_animateFromCurrentPosition - In the implementation block
@property (nonatomic,readonly) BOOL shouldDeleteAfterAnimation;                       //@synthesize shouldDeleteAfterAnimation=_shouldDeleteAfterAnimation - In the implementation block
@property (nonatomic,readonly) BOOL editing;                                          //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateShadow;                                //@synthesize shouldAnimateShadow=_shouldAnimateShadow - In the implementation block
@property (assign,nonatomic) BOOL shouldResetGroupOpacityAfterAnimation;              //@synthesize shouldResetGroupOpacityAfterAnimation=_shouldResetGroupOpacityAfterAnimation - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowGroupOpacityAfterAnimation;              //@synthesize shouldAllowGroupOpacityAfterAnimation=_shouldAllowGroupOpacityAfterAnimation - In the implementation block
@property (assign,nonatomic) BOOL shouldClipToBoundsAfterAnimation;                   //@synthesize shouldClipToBoundsAfterAnimation=_shouldClipToBoundsAfterAnimation - In the implementation block
-(void)dealloc;
-(id)description;
-(UIView *)view;
-(NSIndexPath *)indexPath;
-(int)curve;
-(double)startFraction;
-(double)endFraction;
-(BOOL)animateFromCurrentPosition;
-(double)endAlpha;
-(void)setShouldAllowGroupOpacityAfterAnimation:(BOOL)arg1 ;
-(void)setShouldResetGroupOpacityAfterAnimation:(BOOL)arg1 ;
-(void)setShouldClipToBoundsAfterAnimation:(BOOL)arg1 ;
-(BOOL)shouldAnimateShadow;
-(BOOL)shouldDeleteAfterAnimation;
-(CGRect)endRect;
-(BOOL)editing;
-(BOOL)shouldResetGroupOpacityAfterAnimation;
-(BOOL)shouldAllowGroupOpacityAfterAnimation;
-(BOOL)shouldClipToBoundsAfterAnimation;
-(id)initWithView:(id)arg1 indexPath:(id)arg2 endRect:(CGRect)arg3 endAlpha:(double)arg4 startFraction:(double)arg5 endFraction:(double)arg6 curve:(int)arg7 animateFromCurrentPosition:(BOOL)arg8 shouldDeleteAfterAnimation:(BOOL)arg9 editing:(BOOL)arg10 ;
-(void)setShouldAnimateShadow:(BOOL)arg1 ;
@end

