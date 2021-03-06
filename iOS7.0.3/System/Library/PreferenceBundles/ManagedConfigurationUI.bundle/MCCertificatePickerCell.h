/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UILabel;

@interface MCCertificatePickerCell : PSTableCell {

	UILabel* _issuedByLabel;
	UILabel* _issuerLabel;
	UILabel* _expiresByLabel;
	UILabel* _expiryDateLabel;

}
+(id)_dateFormatter;
+(float)defaultCellHeight;
+(id)_attributeFont;
+(float)_attributeLabelSpace;
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg1 ;
-(id)_checkmarkView;
-(void)setIssuer:(id)arg1 ;
-(id)_attributeLabelCopy;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(id)_labelColor;
-(void)setExpirationDate:(id)arg1 ;
-(void).cxx_destruct;
@end

