/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/TKVibrationPickerStyleProvider.h>

@class UIFont, UIColor;

@interface ABFaceTimeVibrationPickerStyleProvider : NSObject <TKVibrationPickerStyleProvider> {

	UIFont* _vibrationPickerCellTextFont;
	UIColor* _vibrationPickerCellHighlightedTextColor;
	UIFont* _vibrationPickerHeaderTextFont;
	UIColor* _vibrationPickerHeaderTextShadowColor;
	UIOffset _vibrationPickerHeaderTextShadowOffset;
	UIEdgeInsets _vibrationPickerHeaderTextPaddingInsets;

}

@property (nonatomic,readonly) UIFont * vibrationPickerCellTextFont;                             //@synthesize vibrationPickerCellTextFont=_vibrationPickerCellTextFont - In the implementation block
@property (nonatomic,readonly) UIColor * vibrationPickerCellHighlightedTextColor;                //@synthesize vibrationPickerCellHighlightedTextColor=_vibrationPickerCellHighlightedTextColor - In the implementation block
@property (nonatomic,readonly) UIFont * vibrationPickerHeaderTextFont;                           //@synthesize vibrationPickerHeaderTextFont=_vibrationPickerHeaderTextFont - In the implementation block
@property (nonatomic,readonly) UIColor * vibrationPickerHeaderTextShadowColor;                   //@synthesize vibrationPickerHeaderTextShadowColor=_vibrationPickerHeaderTextShadowColor - In the implementation block
@property (nonatomic,readonly) UIOffset vibrationPickerHeaderTextShadowOffset;                   //@synthesize vibrationPickerHeaderTextShadowOffset=_vibrationPickerHeaderTextShadowOffset - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets vibrationPickerHeaderTextPaddingInsets;              //@synthesize vibrationPickerHeaderTextPaddingInsets=_vibrationPickerHeaderTextPaddingInsets - In the implementation block
@property (nonatomic,readonly) bool vibrationPickerUsesOpaqueBackground; 
@property (nonatomic,readonly) long long vibrationPickerTableViewSeparatorStyle; 
@property (nonatomic,readonly) UIColor * vibrationPickerCellTextColor; 
@property (nonatomic,readonly) UIColor * vibrationPickerCellBackgroundColor; 
@property (nonatomic,readonly) bool wantsCustomVibrationPickerHeaderView; 
@property (nonatomic,readonly) UIColor * vibrationPickerHeaderTextColor; 
-(bool)vibrationPickerUsesOpaqueBackground;
-(long long)vibrationPickerTableViewSeparatorStyle;
-(id)vibrationPickerCellTextFont;
-(id)vibrationPickerCellTextColor;
-(id)vibrationPickerCellHighlightedTextColor;
-(id)vibrationPickerCellBackgroundColor;
-(id)newBackgroundViewForSelectedVibrationPickerCell:(bool)arg1 ;
-(id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
-(bool)wantsCustomVibrationPickerHeaderView;
-(id)vibrationPickerHeaderTextFont;
-(id)vibrationPickerHeaderTextColor;
-(id)vibrationPickerHeaderTextShadowColor;
-(UIOffset)vibrationPickerHeaderTextShadowOffset;
-(UIEdgeInsets)vibrationPickerHeaderTextPaddingInsets;
@end

