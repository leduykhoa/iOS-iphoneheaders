/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class _IDSIDQueryController;

@interface IDSIDQueryController : NSObject {

	_IDSIDQueryController* _internal;

}
+(id)sharedInstance;
-(BOOL)requestIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)dealloc;
-(id)init;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(BOOL)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(BOOL)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 ;
-(BOOL)requestIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(BOOL)_warmupQueryCacheForService:(id)arg1 ;
-(BOOL)_flushQueryCacheForService:(id)arg1 ;
-(void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 ;
-(BOOL)_hasCacheForService:(id)arg1 ;
-(int)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 ;
-(BOOL)currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(BOOL)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)addListenerID:(id)arg1 forService:(id)arg2 ;
-(BOOL)removeListenerID:(id)arg1 forService:(id)arg2 ;
-(void)removeDelegate:(id)arg1 ;
@end
