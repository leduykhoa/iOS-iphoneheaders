/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIModalViewDelegate.h>

@class UIAlertView;

@interface APAlert : NSObject <UIModalViewDelegate> {

	id _delegate;
	UIAlertView* _sheet;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)dismiss;
-(void)showAlertForNetwork:(id)arg1 error:(int)arg2 ;
@end

