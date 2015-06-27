/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:55 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIViewElementText, SKUIImageViewElement;

@interface SKUIButtonViewElement : SKUIViewElement {

	NSString* _badgeResourceName;
	SKUIViewElementText* _buttonText;
	int _buttonViewType;
	NSString* _confirmationText;
	char _enabled;
	long long _itemIdentifier;
	NSString* _variantIdentifier;

}

@property (nonatomic,readonly) int buttonViewType;                              //@synthesize buttonViewType=_buttonViewType - In the implementation block
@property (nonatomic,readonly) SKUIViewElementText * buttonText;                //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,readonly) NSString * confirmationText;                     //@synthesize confirmationText=_confirmationText - In the implementation block
@property (nonatomic,readonly) NSString * badgeResourceName;                    //@synthesize badgeResourceName=_badgeResourceName - In the implementation block
@property (nonatomic,readonly) SKUIImageViewElement * buttonImage; 
@property (nonatomic,readonly) long long itemIdentifier;                        //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * variantIdentifier;                    //@synthesize variantIdentifier=_variantIdentifier - In the implementation block
-(id)description;
-(char)isEnabled;
-(SKUIImageViewElement *)buttonImage;
-(long long)itemIdentifier;
-(unsigned)elementType;
-(NSString *)variantIdentifier;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(int)pageComponentType;
-(SKUIViewElementText *)buttonText;
-(NSString *)confirmationText;
-(char)canPerformLocalActionWithItemState:(id)arg1 ;
-(id)personalizationLibraryItems;
-(char)canPersonalizeUsingItemState:(id)arg1 ;
-(int)buttonViewType;
-(NSString *)badgeResourceName;
@end
