/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 6:56:13 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/SystemConfiguration/PPPController.bundle/sbslauncher
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SSDownloadQueueObserver <NSObject>
@optional
-(void)downloadQueueNetworkUsageChanged:(id)arg1;
-(void)downloadQueue:(id)arg1 downloadStatusChangedAtIndex:(int)arg2;

@required
-(void)downloadQueue:(id)arg1 changedWithRemovals:(id)arg2;
@end

