/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/TPLegacyBottomBar.h>

@class NSArray, NSTimer, TPLegacyLockKnobView, UIView, TPLegacyLockTextView, TPLegacyWell, UIImageView;

@interface TPLegacyBottomLockBar : TPLegacyBottomBar {

	NSArray* _labels;
	int _currentLabelIndex;
	NSTimer* _cycleLabelTimer;
	id _delegate;
	id _representedObject;
	TPLegacyLockKnobView* _knobView;
	UIView* _trackArrow;
	TPLegacyLockTextView* _labelView;
	TPLegacyWell* _well;
	double _knobTrackInsetLeft;
	double _fontSize;
	double _deltaFromDefaultLabelWidth;
	UIImageView* _backgroundView;

}
+(CGSize)defaultSize;
+(double)defaultLabelFontSize;
-(id)labelView;
-(void)_setLabel:(id)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)unlock;
-(BOOL)_canDrawContent;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setLabel:(id)arg1 ;
-(void)setFontSize:(double)arg1 ;
-(void)setKnobColor:(int)arg1 ;
-(void)setKnobImage:(id)arg1 ;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(double)fontSize;
-(void)setLabels:(id)arg1 ;
-(void)setSuppressDrawingBackground:(BOOL)arg1 ;
-(void)setWellAlpha:(double)arg1 ;
-(void)downInKnob;
-(double)knobTrackInsetLeft;
-(double)knobTrackInsetRight;
-(BOOL)allowsTouchTrackingBeyondVerticalThreshold;
-(void)knobDragged:(double)arg1 ;
-(void)upInKnob;
-(void)slideBack:(BOOL)arg1 ;
-(BOOL)usesBackgroundImage;
-(id)wellImageName;
-(double)defaultWellWidth;
-(id)_knobImageForColor:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 knobImage:(id)arg2 ;
-(void)_adjustKnobOrigin;
-(id)initWithFrame:(CGRect)arg1 knobColor:(int)arg2 ;
-(void)startCyclingLabels;
-(void)stopCyclingLabels;
-(BOOL)_shouldStopLabelAnimationForGrab;
-(double)_calcKnobYOffset;
-(void)_adjustLabelOrigin;
-(void)cycleToNextLabel;
-(void)cycleToLabelAtIndex:(int)arg1 ;
-(void)finishedCyclingLabelOut;
-(id)initForIncomingCallWithFrame:(CGRect)arg1 ;
-(id)knob;
-(int)currentLabelIndex;
-(void)relock;
-(void)freezeKnobInUnlockedPosition;
-(id)well;
-(void)setKnobWellWidth:(double)arg1 ;
-(void)setKnobWellWidthToDefault;
-(void)setTextAlpha:(double)arg1 ;
-(id)labels;
@end

