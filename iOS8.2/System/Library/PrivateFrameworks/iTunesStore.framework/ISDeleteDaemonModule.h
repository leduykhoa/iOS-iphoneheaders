/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:29 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iTunesStore/iTunesStore-Structs.h>
@class SSAppPurchaseHistoryCache;

@interface ISDeleteDaemonModule : NSObject {

	CFURLStorageSessionRef _storageSession;
	CFURLCacheRef _urlCache;
	SSAppPurchaseHistoryCache* _purchaseHistoryCache;

}
-(void)dealloc;
-(id)init;
-(unsigned long long)purgeableSpace;
-(unsigned long long)purge:(unsigned long long)arg1 ;
@end

