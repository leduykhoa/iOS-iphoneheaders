/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:39:15 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPageComponent.h>

@class NSMutableArray, SKUIExpandViewElement;

@interface SKUIExpandPageComponent : SKUIPageComponent {

	NSMutableArray* _childComponents;
	SKUIExpandViewElement* _viewElement;

}

@property (nonatomic,readonly) SKUIExpandViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
-(id)initWithViewElement:(id)arg1 ;
-(int)componentType;
-(id)metricsElementName;
-(SKUIExpandViewElement *)viewElement;
-(id)childComponentForIndex:(int)arg1 ;
-(id)childComponents;
@end
