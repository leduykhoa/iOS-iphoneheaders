/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAttachmentItem.h>

@interface CKImageAttachmentItem : CKAttachmentItem {

	BOOL _backgroundEnqueued;
	BOOL _useDefaultSize;
	CGSize _imageSize;

}

@property (assign) CGSize imageSize;                               //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) BOOL backgroundEnqueued;              //@synthesize backgroundEnqueued=_backgroundEnqueued - In the implementation block
@property (assign,nonatomic) BOOL useDefaultSize;                  //@synthesize useDefaultSize=_useDefaultSize - In the implementation block
+(id)UTITypes;
-(CGSize)size;
-(CGSize)imageSize;
-(void)startDeferredSetup;
-(void)generatePreviewWithCompletion:(/*^block*/id)arg1 ;
-(id)_newImageData;
-(BOOL)backgroundEnqueued;
-(CGSize)_calculateImageSize;
-(void)setUseDefaultSize:(BOOL)arg1 ;
-(BOOL)useDefaultSize;
-(void)setBackgroundEnqueued:(BOOL)arg1 ;
-(id)imageData;
-(void)setImageSize:(CGSize)arg1 ;
@end

