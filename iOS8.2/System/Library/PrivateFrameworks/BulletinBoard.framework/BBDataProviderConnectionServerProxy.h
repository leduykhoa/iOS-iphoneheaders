/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:29 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BBDataProviderConnectionServerProxy <NSObject>
@required
-(void)addDataProviderWithSectionID:(id)arg1 clientProxy:(id)arg2 identity:(id)arg3 completion:(/*^block*/id)arg4;
-(void)removeDataProviderWithSectionID:(id)arg1;
-(void)addParentSectionFactory:(id)arg1;
-(void)clientIsReady:(/*^block*/id)arg1;

@end

