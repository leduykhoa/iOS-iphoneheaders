/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray, GEOWaypoint;

@interface GEOETARequest : PBRequest <NSCopying> {

	SCD_Struct_GE75 _timepoint;
	NSMutableArray* _destinations;
	GEOWaypoint* _origin;
	NSMutableArray* _serviceTags;
	int _transportType;
	BOOL _allowPartialResults;
	BOOL _includeHistoricTravelTime;
	SCD_Struct_GE47 _has;

}

@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                              //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasTimepoint; 
@property (assign,nonatomic) SCD_Struct_GE76 timepoint;                      //@synthesize timepoint=_timepoint - In the implementation block
@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) GEOWaypoint * origin;                           //@synthesize origin=_origin - In the implementation block
@property (nonatomic,retain) NSMutableArray * destinations;                  //@synthesize destinations=_destinations - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) BOOL includeHistoricTravelTime;                 //@synthesize includeHistoricTravelTime=_includeHistoricTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasAllowPartialResults; 
@property (assign,nonatomic) BOOL allowPartialResults;                       //@synthesize allowPartialResults=_allowPartialResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceTags;                   //@synthesize serviceTags=_serviceTags - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)origin;
-(void)setOrigin:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setServiceTags:(id)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(unsigned)serviceTagsCount;
-(void)clearServiceTags;
-(id)serviceTagAtIndex:(unsigned)arg1 ;
-(id)serviceTags;
-(BOOL)hasTransportType;
-(void)setTransportType:(int)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(void)addDestination:(id)arg1 ;
-(BOOL)hasTimepoint;
-(SCD_Struct_GE76)timepoint;
-(void)setTimepoint:(SCD_Struct_GE76)arg1 ;
-(BOOL)hasOrigin;
-(unsigned)destinationsCount;
-(void)clearDestinations;
-(id)destinationAtIndex:(unsigned)arg1 ;
-(BOOL)hasIncludeHistoricTravelTime;
-(BOOL)includeHistoricTravelTime;
-(void)setIncludeHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasAllowPartialResults;
-(BOOL)allowPartialResults;
-(void)setAllowPartialResults:(BOOL)arg1 ;
-(void)setHasTimepoint:(BOOL)arg1 ;
-(void)setHasIncludeHistoricTravelTime:(BOOL)arg1 ;
-(void)setHasAllowPartialResults:(BOOL)arg1 ;
-(id)destinations;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDestinations:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)transportType;
@end

