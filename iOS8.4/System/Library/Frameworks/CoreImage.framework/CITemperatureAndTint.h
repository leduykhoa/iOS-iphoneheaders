/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CITemperatureAndTint : CIFilter {

	CIImage* inputImage;
	CIVector* inputNeutral;
	CIVector* inputTargetNeutral;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputNeutral; 
@property (nonatomic,retain) CIVector * inputTargetNeutral; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputNeutral:(CIVector *)arg1 ;
-(void)setInputTargetNeutral:(CIVector *)arg1 ;
-(CIVector *)inputNeutral;
-(CIVector *)inputTargetNeutral;
-(CIImage *)inputImage;
-(void)setDefaults;
-(id)outputImage;
@end

