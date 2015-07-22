/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:05 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CAMCaptureResponse.h>

@class UIImage, NSData, NSMutableDictionary, CIFilter, NSString, NSDictionary;

@interface CAMStillImageCaptureResponse : CAMCaptureResponse {

	BOOL _transient;
	BOOL _finalResponse;
	UIImage* _stillImageOriginalImage;
	NSData* _stillImageJPEGData;
	opaqueCMSampleBufferRef _stillImageOriginalSampleBuffer;
	IOSurfaceRef _stillImageOriginalSurface;
	unsigned long long _stillImageOriginalSurfaceSize;
	IOSurfaceRef _stillImageUnfilteredPreviewSurface;
	IOSurfaceRef _stillImageFilteredPreviewSurface;
	UIImage* _stillImageUnfilteredPreviewImage;
	UIImage* _stillImageFilteredPreviewImage;
	NSMutableDictionary* _stillImageJob;
	/*^block*/id _stillImageRequestEnqueuedBlock;
	/*^block*/id _stillImageCompletionBlock;
	CIFilter* _effectFilter;
	NSString* _avalancheUUID;
	NSString* _timelapseDestinationPath;

}

@property (assign,getter=isTransient,nonatomic) BOOL transient;                                   //@synthesize transient=_transient - In the implementation block
@property (assign,getter=isFinalResponse,nonatomic) BOOL finalResponse;                           //@synthesize finalResponse=_finalResponse - In the implementation block
@property (nonatomic,readonly) UIImage * thumbnailImage; 
@property (nonatomic,retain) UIImage * stillImageOriginalImage;                                   //@synthesize stillImageOriginalImage=_stillImageOriginalImage - In the implementation block
@property (nonatomic,retain) NSData * stillImageJPEGData;                                         //@synthesize stillImageJPEGData=_stillImageJPEGData - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stillImageMetadata; 
@property (assign,nonatomic) opaqueCMSampleBufferRef stillImageOriginalSampleBuffer;              //@synthesize stillImageOriginalSampleBuffer=_stillImageOriginalSampleBuffer - In the implementation block
@property (assign,nonatomic) IOSurfaceRef stillImageOriginalSurface;                              //@synthesize stillImageOriginalSurface=_stillImageOriginalSurface - In the implementation block
@property (assign,nonatomic) unsigned long long stillImageOriginalSurfaceSize;                    //@synthesize stillImageOriginalSurfaceSize=_stillImageOriginalSurfaceSize - In the implementation block
@property (assign,nonatomic) IOSurfaceRef stillImageUnfilteredPreviewSurface;                     //@synthesize stillImageUnfilteredPreviewSurface=_stillImageUnfilteredPreviewSurface - In the implementation block
@property (assign,nonatomic) IOSurfaceRef stillImageFilteredPreviewSurface;                       //@synthesize stillImageFilteredPreviewSurface=_stillImageFilteredPreviewSurface - In the implementation block
@property (nonatomic,retain) UIImage * stillImageUnfilteredPreviewImage;                          //@synthesize stillImageUnfilteredPreviewImage=_stillImageUnfilteredPreviewImage - In the implementation block
@property (nonatomic,retain) UIImage * stillImageFilteredPreviewImage;                            //@synthesize stillImageFilteredPreviewImage=_stillImageFilteredPreviewImage - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stillImageJob;                                 //@synthesize stillImageJob=_stillImageJob - In the implementation block
@property (nonatomic,copy) id stillImageRequestEnqueuedBlock;                                     //@synthesize stillImageRequestEnqueuedBlock=_stillImageRequestEnqueuedBlock - In the implementation block
@property (nonatomic,copy) id stillImageCompletionBlock;                                          //@synthesize stillImageCompletionBlock=_stillImageCompletionBlock - In the implementation block
@property (nonatomic,copy) CIFilter * effectFilter;                                               //@synthesize effectFilter=_effectFilter - In the implementation block
@property (nonatomic,copy) NSString * avalancheUUID;                                              //@synthesize avalancheUUID=_avalancheUUID - In the implementation block
@property (nonatomic,copy) NSString * timelapseDestinationPath;                                   //@synthesize timelapseDestinationPath=_timelapseDestinationPath - In the implementation block
-(void)setTransient:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isTransient;
-(UIImage *)thumbnailImage;
-(IOSurfaceRef)stillImageUnfilteredPreviewSurface;
-(BOOL)isFinalResponse;
-(void)setTimelapseDestinationPath:(NSString *)arg1 ;
-(void)releaseCachedImages;
-(UIImage *)stillImageUnfilteredPreviewImage;
-(UIImage *)stillImageFilteredPreviewImage;
-(NSDictionary *)stillImageMetadata;
-(void)setStillImageOriginalSurface:(IOSurfaceRef)arg1 ;
-(void)setStillImageFilteredPreviewSurface:(IOSurfaceRef)arg1 ;
-(void)setStillImageUnfilteredPreviewSurface:(IOSurfaceRef)arg1 ;
-(void)setFinalResponse:(BOOL)arg1 ;
-(UIImage *)stillImageOriginalImage;
-(void)setStillImageOriginalImage:(UIImage *)arg1 ;
-(NSData *)stillImageJPEGData;
-(void)setStillImageJPEGData:(NSData *)arg1 ;
-(opaqueCMSampleBufferRef)stillImageOriginalSampleBuffer;
-(void)setStillImageOriginalSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(IOSurfaceRef)stillImageOriginalSurface;
-(unsigned long long)stillImageOriginalSurfaceSize;
-(void)setStillImageOriginalSurfaceSize:(unsigned long long)arg1 ;
-(IOSurfaceRef)stillImageFilteredPreviewSurface;
-(void)setStillImageUnfilteredPreviewImage:(UIImage *)arg1 ;
-(void)setStillImageFilteredPreviewImage:(UIImage *)arg1 ;
-(NSMutableDictionary *)stillImageJob;
-(void)setStillImageJob:(NSMutableDictionary *)arg1 ;
-(id)stillImageRequestEnqueuedBlock;
-(void)setStillImageRequestEnqueuedBlock:(id)arg1 ;
-(id)stillImageCompletionBlock;
-(void)setStillImageCompletionBlock:(id)arg1 ;
-(CIFilter *)effectFilter;
-(void)setEffectFilter:(CIFilter *)arg1 ;
-(NSString *)timelapseDestinationPath;
-(NSString *)avalancheUUID;
-(void)setAvalancheUUID:(NSString *)arg1 ;
@end
