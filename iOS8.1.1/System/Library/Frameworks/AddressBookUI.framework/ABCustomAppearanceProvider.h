/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABStyleProvider;

@interface ABCustomAppearanceProvider : NSObject {

	ABStyleProvider* _styleProvider;

}
-(Class)propertyCellClass;
-(Class)actionCellClass;
-(id)newActionButton;
-(id)newScrollingBackgroundView;
-(double)distanceBetweenSections;
-(void)setHighlighted:(BOOL)arg1 onPropertyCell:(id)arg2 ;
-(void)setIndicatesFaceTimeHistory:(BOOL)arg1 onActionButton:(id)arg2 ;
-(long long)unknownModalPresentationStyle;
-(BOOL)shouldUseCardContentProviderWhenAvailable;
-(Class)customCardCellClass;
-(Class)customCardActionCellClass;
-(id)newCardActionButton;
-(id)newCustomCardTableScrollingBackgroundView;
-(double)cardTableViewSectionHeaderHeightWhenEditing:(BOOL)arg1 ;
-(double)cardTableViewSectionFooterHeightWhenEditing:(BOOL)arg1 ;
-(BOOL)shouldPropagateStylesToPickers;
-(BOOL)shouldPropagateStylesThroughUnknownPersonActions;
-(void)customSetEmphasized:(BOOL)arg1 onCell:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

