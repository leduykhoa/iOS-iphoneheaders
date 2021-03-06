/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSData;

@interface CSIBitmapWrapper : NSObject {

	CGContextRef _bitmap;
	NSData* _pixelData;

}
-(void)dealloc;
-(id)pixelData;
-(bool)getCompressedData:(id*)arg1 usedEncoding:(int*)arg2 ;
-(id)initWithPixelWidth:(unsigned)arg1 pixelHeight:(unsigned)arg2 ;
-(CGContextRef)bitmapContext;
-(id)compressedData;
-(void)finalize;
@end

