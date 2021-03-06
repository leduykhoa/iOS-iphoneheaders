/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIImage.h>
#import <SpringBoard/SBCountedMapValue.h>

@class SBIconLabelImageParameters;

@interface SBIconLabelImage : UIImage <SBCountedMapValue> {

	SBIconLabelImageParameters* _parameters;
	CGPoint _maxSizeOffset;

}

@property (nonatomic,readonly) SBIconLabelImageParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) CGPoint maxSizeOffset;                                //@synthesize maxSizeOffset=_maxSizeOffset - In the implementation block
+(id)checkoutLabelImageForParameters:(id)arg1 ;
+(void)checkinLabelImage:(id)arg1 ;
+(CGRect)_rectWithDrawing:(BOOL)arg1 inRect:(CGRect)arg2 fromParameters:(id)arg3 ;
+(CGRect)rectFromParameters:(id)arg1 constrainedToRect:(CGRect)arg2 ;
+(void)drawImageInRect:(CGRect)arg1 fromParameters:(id)arg2 ;
+(id)_parametersWithDefaultStyle:(id)arg1 ;
+(id)_labelImageCountedMap;
+(id)_drawLabelImageForParameters:(id)arg1 ;
-(id)countedMapKey;
-(CGPoint)maxSizeOffset;
-(id)_initWithCGImage:(CGImageRef)arg1 scale:(float)arg2 orientation:(int)arg3 parameters:(id)arg4 maxSizeOffset:(CGPoint)arg5 ;
-(void)dealloc;
-(id)description;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(float)arg2 orientation:(int)arg3 ;
-(id)parameters;
@end

