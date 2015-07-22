/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassBackFaceImageSet : PKPassImageSet {

	PKImage* _faceImage;

}

@property (nonatomic,retain) PKImage * faceImage;              //@synthesize faceImage=_faceImage - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)currentVersion;
+(long long)imageSetType;
+(id)archiveName;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)preheatImages;
-(PKImage *)faceImage;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)setFaceImage:(PKImage *)arg1 ;
@end
