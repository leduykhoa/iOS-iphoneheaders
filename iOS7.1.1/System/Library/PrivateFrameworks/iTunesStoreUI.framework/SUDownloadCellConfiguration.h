/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUArtworkCellConfiguration.h>
#import <iTunesStoreUI/SUDownloadCellConfiguration.h>

@protocol SUDownloadCellConfiguration <NSObject>
@required
-(CGRect*)frameForProgressBar:(id)arg1;
-(bool)showProgressBar;
-(id)newProgressBar;
@end


@interface SUDownloadCellConfiguration : SUArtworkCellConfiguration <SUDownloadCellConfiguration>
+(double)rowHeightForContext:(id)arg1 representedObject:(id)arg2 ;
+(id)copyDefaultContext;
-(id)init;
-(void)drawWithModifiers:(unsigned long long)arg1 ;
-(id)fontForLabelAtIndex:(unsigned long long)arg1 ;
-(bool)getShadowColor:(id*)arg1 offset:(CGSize*)arg2 forLabelAtIndex:(unsigned long long)arg3 withModifiers:(unsigned long long)arg4 ;
-(id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2 ;
-(void)reloadImages;
-(void)reloadStrings;
-(void)reloadLayoutInformation;
-(CGRect)frameForProgressBar:(id)arg1 ;
-(bool)showProgressBar;
-(id)newProgressBar;
-(CGRect)frameForTitle;
@end

