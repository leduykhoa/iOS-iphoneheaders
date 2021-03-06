/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:44 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface UICompositeImageView : UIView {

	NSMutableArray* m_images;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)addImage:(id)arg1 toRect:(CGRect)arg2 fromRect:(CGRect)arg3 operation:(int)arg4 fraction:(float)arg5 ;
-(void)addImage:(id)arg1 ;
-(void)addImage:(id)arg1 operation:(int)arg2 fraction:(float)arg3 ;
-(void)addImage:(id)arg1 toRect:(CGRect)arg2 fromRect:(CGRect)arg3 ;
-(void)removeAllImages;
@end

