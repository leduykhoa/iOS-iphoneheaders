/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDImageProvider.h>

@protocol OS_dispatch_semaphore;
@class NSObject;

@interface TSDBitmapImageProvider : TSDImageProvider {

	CGImageSourceRef mImageSource;
	CGImageRef mImage;
	CGSize mNaturalSize;
	int mOrientation;
	char mIsOpaque;
	char mIsValid;
	unsigned mDPI;
	NSObject*<OS_dispatch_semaphore> mImageLock;
	long mCheckIfValidToken;
	CGImageRef mHalfSizeImage;
	CGImageRef mQuarterSizeImage;

}
+(CGImageRef)CGImageForImageData:(id)arg1 ;
+(CGImageSourceRef)p_newImageSourceFromCacheForData:(id)arg1 withFilenameSuffix:(id)arg2 ;
+(id)p_cacheStringForData:(id)arg1 ;
+(CGImageSourceRef)p_newImageSourceFromFilePath:(id)arg1 ;
+(id)TSUImageForImageData:(id)arg1 ;
+(CGSize)naturalSizeForImageData:(id)arg1 ;
+(void)clearCacheForData:(id)arg1 ;
+(void)initialize;
-(void)drawImageInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(CGImageRef)CGImageForSize:(CGSize)arg1 inContext:(CGContextRef)arg2 orLayer:(id)arg3 ;
-(CGImageRef)CGImageForNaturalSize;
-(CGSize)dpiAdjustedNaturalSize;
-(CGSize)dpiAdjustedFillSize;
-(void)i_commonInit;
-(void)p_loadImageMetadata;
-(void)p_loadSourceRefIfNecessary;
-(CGImageRef)p_newImageFromSource:(CGImageSourceRef)arg1 ;
-(void)p_loadFullSizedImageIfNecessary;
-(CGImageSourceRef)p_newImageOfSize:(CGSize)arg1 andWriteToCacheWithSuffix:(id)arg2 ;
-(CGImageRef)p_loadOrCreateResampledImageWithScale:(unsigned)arg1 andCGImage:(CGImage*)arg2 ;
-(CGImageSourceRef)p_newCGImageSourceForTemporaryUse;
-(unsigned)imageDPI;
-(CGImageSourceRef)p_newCGImageSource;
-(void)p_configureOrientationAndSizeFromImageSource:(CGImageSourceRef)arg1 andImage:(CGImageRef)arg2 ;
-(CGImageRef)CGImageForSize:(CGSize)arg1 lowQuality:(char)arg2 ;
-(CGImageRef)p_resampledImageOfSizeType:(int)arg1 ;
-(CGImageSourceRef)CGImageSource;
-(void)dealloc;
-(void)flush;
-(int)orientation;
-(char)isValid;
-(char)isOpaque;
-(CGSize)naturalSize;
-(char)hasFlushableContent;
@end

