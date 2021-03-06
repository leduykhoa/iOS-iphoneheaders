/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/PKMicaView.h>

@class CALayer, NSString;

@interface PKPhoneGlyphView : PKMicaView {

	CALayer* _highlightLayer;
	CGPoint _highlightOffscreenPosition;
	CGPoint _highlightOnscreenPosition;
	NSString* _phoneWiggleAnimationKey;

}
-(id)initWithFrame:(CGRect)arg1 package:(id)arg2 ;
-(void)_endPhoneWiggle;
-(void)_startPhoneWiggle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
@end

