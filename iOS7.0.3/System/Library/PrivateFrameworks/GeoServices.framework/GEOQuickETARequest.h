/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class GEOWaypoint, NSDate, GEOLocation;

@interface GEOQuickETARequest : NSObject {

	GEOWaypoint* _source;
	GEOWaypoint* _destination;
	NSDate* _departureDate;
	NSDate* _arrivalDate;
	int _transportType;
	GEOLocation* _currentLocation;

}

@property (nonatomic,readonly) GEOWaypoint * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) GEOWaypoint * destination;                  //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) NSDate * departureDate;                     //@synthesize departureDate=_departureDate - In the implementation block
@property (nonatomic,readonly) NSDate * arrivalDate;                       //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,readonly) int transportType;                          //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) GEOLocation * currentLocation;              //@synthesize currentLocation=_currentLocation - In the implementation block
-(id)initWithOrigin:(id)arg1 destinationLOI:(id)arg2 ;
-(id)initWithDirectionsRequest:(id)arg1 ;
-(id)currentLocation;
-(void)dealloc;
-(id)description;
-(id)source;
-(id)destination;
-(id)initWithSource:(id)arg1 destination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 ;
-(id)initWithSource:(id)arg1 destination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 ;
-(id)departureDate;
-(id)arrivalDate;
-(int)transportType;
@end

