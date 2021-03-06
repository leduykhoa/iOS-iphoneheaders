/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class TSCHChartType;

@interface TSCH3DPrecalculatedLayoutCacheItem : NSObject <NSCopying> {

	TSCHChartType* mChartType;
	TSCH3DPrecalculatedLayoutCacheType mCacheType;

}
+(id)cacheItemForChartType:(id)arg1 cacheType:(TSCH3DPrecalculatedLayoutCacheType)arg2 ;
-(id)initForChartType:(id)arg1 cacheType:(TSCH3DPrecalculatedLayoutCacheType)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id).cxx_construct;
@end

