/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VKRasterOverlayDelegate;
#import <VectorKit/VectorKit-Structs.h>
@class VKRasterOverlayTileSource;

@interface VKRasterOverlay : NSObject {

	id<VKRasterOverlayDelegate> _delegate;
	SCD_Struct_VK112 _replaceMapContentInRect;
	unsigned long long _level;
	VKRasterOverlayTileSource* _mapModel;
	VKRasterOverlayTileSource* _tileSource;

}

@property (assign) id<VKRasterOverlayDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) VKRasterOverlayTileSource * tileSource;                //@synthesize tileSource=_tileSource - In the implementation block
@property (assign,nonatomic) SCD_Struct_VK112 replaceMapContentInRect;              //@synthesize replaceMapContentInRect=_replaceMapContentInRect - In the implementation block
@property (assign,nonatomic) unsigned long long level;                              //@synthesize level=_level - In the implementation block
-(void)setNeedsDisplay;
-(void)setDelegate:(id<VKRasterOverlayDelegate>)arg1 ;
-(id)init;
-(id<VKRasterOverlayDelegate>)delegate;
-(void)setLevel:(unsigned long long)arg1 ;
-(unsigned long long)level;
-(SCD_Struct_VK112)replaceMapContentInRect;
-(void)setTileSource:(VKRasterOverlayTileSource *)arg1 ;
-(VKRasterOverlayTileSource *)tileSource;
-(BOOL)canDrawKey:(const SCD_Struct_VK611*)arg1 ;
-(void)drawKey:(const SCD_Struct_VK611*)arg1 inContext:(CGContextRef)arg2 ;
-(void)setNeedsDisplayInRect:(const SCD_Struct_VK112*)arg1 level:(long long)arg2 ;
-(void)setReplaceMapContentInRect:(SCD_Struct_VK112)arg1 ;
@end

