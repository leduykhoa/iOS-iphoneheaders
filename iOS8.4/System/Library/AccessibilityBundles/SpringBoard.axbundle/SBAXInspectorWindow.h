/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIWindow.h>

@class SBAXInspectorDisplay;

@interface SBAXInspectorWindow : UIWindow {

	SBAXInspectorDisplay* _inspectorDisplay;
	id _inspector;

}

@property (assign,nonatomic) id inspector;              //@synthesize inspector=_inspector - In the implementation block
-(BOOL)isPointInInspectorBar:(CGPoint)arg1 ;
-(void)setInspector:(id)arg1 ;
-(void)setInspectorDisplay:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isKeyWindow;
-(id)inspector;
@end

