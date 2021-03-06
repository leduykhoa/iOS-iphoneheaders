/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Calculator.app/Calculator
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Calculator/Calculator-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView, NSString;

@interface CalcValueView : UIView {

	UILabel* _label;
	UIView* _labelSnapshot;
	NSString* _stringValue;
	NSString* _localizedDecimalSeparator;
	NSString* _localizedGroupingSeparator;
	unsigned _maximumDigitDisplay;
	unsigned _minimumDigitsSavedBeforeScientific;
	BOOL _stringIsUserEntered;
	int _fixedPrecision;
	CGRect _displayRect;

}
+(id)fontForSize:(float)arg1 ;
+(id)textColor;
-(void)_resetLocale;
-(void)useFixedPoint:(BOOL)arg1 withPrecision:(unsigned)arg2 ;
-(id)formattedPasteboardValue;
-(void)setDisplayValue:(id)arg1 userEntered:(BOOL)arg2 ;
-(void)setMaxDigits:(unsigned)arg1 minDigitsSavedForScientific:(unsigned)arg2 ;
-(void)_updateValue;
-(id)newFormattedStringForDisplayWithString:(id)arg1 maxDigits:(unsigned)arg2 minSaved:(unsigned)arg3 precision:(int)arg4 ;
-(id)formattedDisplayValue;
-(void)_updateValue:(id)arg1 ;
-(void)_adjustLabelToFit;
-(CGRect)displayRect;
-(float)baselineOriginY;
-(void)didAnimateToFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)_automationID;
-(id)_automationValue;
-(void)animateToFrame:(CGRect)arg1 ;
@end

