/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DTile.h>

@interface TSCH3DRenderBlockTile : TSCH3DTile {

	/*^block*/id mRenderBlock;

}
-(BOOL)renderIntoContext:(CGContextRef)arg1 ;
-(id)initWithBounds:(const box<glm::detail::tvec2<float> >*)arg1 renderBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

