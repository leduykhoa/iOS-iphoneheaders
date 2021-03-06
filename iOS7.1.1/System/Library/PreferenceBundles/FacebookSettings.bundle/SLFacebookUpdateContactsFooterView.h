/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Preferences/PSHeaderFooterView.h>

@class UIActivityIndicatorView, UILabel, UIProgressView;

@interface SLFacebookUpdateContactsFooterView : UIView <PSHeaderFooterView> {

	UIActivityIndicatorView* _activityIndicator;
	UILabel* _footerLabel;
	UIProgressView* _progressIndicator;
	int _mode;

}

@property (assign,nonatomic) int mode;                                                   //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressIndicator;                       //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (nonatomic,readonly) UILabel * footerLabel;                                    //@synthesize footerLabel=_footerLabel - In the implementation block
-(id)initWithSpecifier:(id)arg1 ;
-(id)progressIndicator;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)layoutSubviews;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void).cxx_destruct;
-(id)activityIndicator;
-(id)footerLabel;
@end

