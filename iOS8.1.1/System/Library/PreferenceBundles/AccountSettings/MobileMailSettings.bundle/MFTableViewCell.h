/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIColor;

@interface MFTableViewCell : UITableViewCell {

	UIColor* _savedTextColor;
	BOOL _shouldDisableWhileEditing;

}

@property (nonatomic,readonly) double accessoryWidth; 
@property (assign,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL shouldDisableWhileEditing;              //@synthesize shouldDisableWhileEditing=_shouldDisableWhileEditing - In the implementation block
+(double)defaultAccessoryWidth;
+(double)reorderingAccessoryWidth;
-(void)dealloc;
-(void)prepareForReuse;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setShouldDisableWhileEditing:(BOOL)arg1 ;
-(BOOL)shouldDisableWhileEditing;
-(double)accessoryWidth;
@end
