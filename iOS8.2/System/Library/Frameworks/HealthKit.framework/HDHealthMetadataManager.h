/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:51 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/HealthKit.framework/healthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HDHealthMetadataManager <NSObject>
@required
-(id)metadataForDataEntity:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
-(id)metadataForDataEntity:(id)arg1 withStatement:(id)arg2 error:(id*)arg3;
-(char)insertMetadata:(id)arg1 forDataEntity:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4;

@end
