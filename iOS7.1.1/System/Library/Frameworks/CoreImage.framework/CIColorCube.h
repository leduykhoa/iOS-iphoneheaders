/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSData;

@interface CIColorCube : CIFilter {

	CIImage* inputImage;
	NSNumber* inputCubeDimension;
	NSData* inputCubeData;
	CIImage* _cubeImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputCubeDimension; 
@property (nonatomic,copy) NSData * inputCubeData; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(id)_kernel;
-(void)setInputCubeData:(id)arg1 ;
-(void)setInputCubeDimension:(id)arg1 ;
-(bool)_checkInputs;
-(id)cubeImage;
-(id)inputCubeDimension;
-(id)inputCubeData;
-(void)dealloc;
@end

