/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:22:28 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/__SBIconScrollViewAccessibility_super.h>

@interface SBIconScrollViewAccessibility : __SBIconScrollViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(id)_accessibilityUpdateCurrentPage:(int)arg1 post:(char)arg2 direction:(char)arg3 ;
-(id)_accessibilityScrollStatus:(char)arg1 ;
-(id)_accessibilityScrollStatus;
-(char)accessibilityScrollLeftPageSupported;
-(char)accessibilityScrollRightPageSupported;
-(float)_accessibilityAllowedGeometryOverlap;
-(char)accessibilityScrollDownPage;
-(char)accessibilityScrollLeftPage;
-(char)accessibilityScrollRightPage;
-(CGRect)_accessibilityContentFrame;
-(unsigned long long)accessibilityTraits;
-(char)shouldGroupAccessibilityChildren;
-(char)accessibilityScroll:(int)arg1 ;
-(char)accessibilityScrollToTopSupported;
@end

