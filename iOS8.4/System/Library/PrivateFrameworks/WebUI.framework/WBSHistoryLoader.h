/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WBSHistoryLoader <NSObject>
@required
-(void)startLoading;
-(id)initWithURL:(id)arg1 itemCountLimit:(unsigned long long)arg2 ageLimit:(double)arg3 historyItemClass:(Class)arg4;
-(void)waitForLoadingToComplete;

@end

