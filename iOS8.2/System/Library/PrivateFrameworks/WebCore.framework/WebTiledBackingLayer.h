/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:26 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface WebTiledBackingLayer : CALayer {

	OwnPtr<WebCore::TileController>* _tileController;

}
-(void)setOpaque:(char)arg1 ;
-(void)dealloc;
-(void)setNeedsDisplay;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(void)invalidate;
-(id)actionForKey:(id)arg1 ;
-(char)isOpaque;
-(float)contentsScale;
-(void)setContentsScale:(float)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setBorderWidth:(float)arg1 ;
-(void)setBorderColor:(CGColorRef)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(TileController*)createTileController:(PlatformCALayer*)arg1 ;
-(char)acceleratesDrawing;
-(void)setAcceleratesDrawing:(char)arg1 ;
-(TiledBacking*)tiledBacking;
@end

