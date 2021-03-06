/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/ASTGestureRecorderHelperView.h>

@class UIColor;

@interface ASTGestureRecorderStaticFingerPathsOverlayView : ASTGestureRecorderHelperView {

	UIColor* _backgroundGradientPatternColor;

}

@property (nonatomic,retain) UIColor * backgroundGradientPatternColor;              //@synthesize backgroundGradientPatternColor=_backgroundGradientPatternColor - In the implementation block
-(void)setBackgroundGradientPatternColor:(id)arg1 ;
-(void)_backgroundGradientPatternColorNeedsRefresh;
-(void)_replacedStyleProvider:(id)arg1 withStyleProvider:(id)arg2 ;
-(void)_replacedDataSource:(id)arg1 withDataSource:(id)arg2 ;
-(id)backgroundGradientPatternColor;
-(void)reloadAllFingerPaths;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)setContentScaleFactor:(float)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
@end

