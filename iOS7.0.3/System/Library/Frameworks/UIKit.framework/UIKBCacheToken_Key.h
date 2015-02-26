/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBCacheToken.h>

@class NSString;

@interface UIKBCacheToken_Key : UIKBCacheToken {

	SCD_Union_UI80 _style;
	NSString* _cacheDisplayString;
	int _displayTypeHint;
	int _displayRowHint;
	CGSize _size;
	int _state;
	int _clipCorners;
	BOOL _usesInsets;
	UIEdgeInsets _displayInsets;

}
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI30)arg2 ;
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI30)arg2 displayInsets:(UIEdgeInsets)arg3 ;
-(void)dealloc;
-(CGSize)size;
-(id)string;
-(void)setSize:(CGSize)arg1 ;
-(BOOL)hasKey;
-(id)stringForRenderFlags:(int)arg1 lightKeyboard:(BOOL)arg2 ;
-(int)rowHint;
-(void)setRowHint:(int)arg1 ;
-(int)displayHint;
-(void)setDisplayHint:(int)arg1 ;
-(id)_initWithKey:(id)arg1 style:(SCD_Struct_UI30)arg2 displayInsets:(UIEdgeInsets)arg3 ;
-(id)_stringWithAdditionalValues:(/*^block*/ id)arg1 ;
@end
