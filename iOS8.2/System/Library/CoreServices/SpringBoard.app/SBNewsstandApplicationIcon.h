/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUserInstalledApplicationIcon.h>

@class SBNewsstandApplication;

@interface SBNewsstandApplicationIcon : SBUserInstalledApplicationIcon {

	SBNewsstandApplication* _fakeApp;

}

@property (nonatomic,retain) SBNewsstandApplication * fakeApp;              //@synthesize fakeApp=_fakeApp - In the implementation block
-(void)launchFromLocation:(int)arg1 ;
-(char)iconAppearsInNewsstand;
-(int)iconFormatForLocation:(int)arg1 ;
-(char)isNewsstandApplicationIcon;
-(id)getGenericIconImage:(int)arg1 ;
-(Class)iconImageViewClassForLocation:(int)arg1 ;
-(char)shouldWarmUp;
-(void)setFakeApp:(SBNewsstandApplication *)arg1 ;
-(SBNewsstandApplication *)fakeApp;
-(char)launchEnabled;
-(void)dealloc;
-(id)initWithApplication:(id)arg1 ;
-(id)application;
@end
