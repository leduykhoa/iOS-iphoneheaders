/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray, GEOLocation;

@interface GEODirectionsFeedbackCollection : PBCodable <NSCopying> {

	SCD_Struct_GE89 _navigationAudioFeedback;
	double _endTimeStamp;
	double _startTimeStamp;
	NSMutableArray* _directionsFeedbacks;
	GEOLocation* _finalLocation;
	bool _arrivedAtDestination;
	SCD_Struct_GE47 _has;

}

@property (nonatomic,retain) NSMutableArray * directionsFeedbacks;                 //@synthesize directionsFeedbacks=_directionsFeedbacks - In the implementation block
@property (nonatomic,readonly) bool hasFinalLocation; 
@property (nonatomic,retain) GEOLocation * finalLocation;                          //@synthesize finalLocation=_finalLocation - In the implementation block
@property (assign,nonatomic) bool hasStartTimeStamp; 
@property (assign,nonatomic) double startTimeStamp;                                //@synthesize startTimeStamp=_startTimeStamp - In the implementation block
@property (assign,nonatomic) bool hasEndTimeStamp; 
@property (assign,nonatomic) double endTimeStamp;                                  //@synthesize endTimeStamp=_endTimeStamp - In the implementation block
@property (assign,nonatomic) bool hasArrivedAtDestination; 
@property (assign,nonatomic) bool arrivedAtDestination;                            //@synthesize arrivedAtDestination=_arrivedAtDestination - In the implementation block
@property (assign,nonatomic) bool hasNavigationAudioFeedback; 
@property (assign,nonatomic) SCD_Struct_GE87 navigationAudioFeedback;              //@synthesize navigationAudioFeedback=_navigationAudioFeedback - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStartTimeStamp:(double)arg1 ;
-(void)addDirectionsFeedback:(id)arg1 ;
-(void)setFinalLocation:(id)arg1 ;
-(void)setArrivedAtDestination:(bool)arg1 ;
-(void)setNavigationAudioFeedback:(SCD_Struct_GE87)arg1 ;
-(void)setEndTimeStamp:(double)arg1 ;
-(void)setDirectionsFeedbacks:(id)arg1 ;
-(unsigned long long)directionsFeedbacksCount;
-(void)clearDirectionsFeedbacks;
-(id)directionsFeedbackAtIndex:(unsigned long long)arg1 ;
-(bool)hasFinalLocation;
-(void)setHasStartTimeStamp:(bool)arg1 ;
-(bool)hasStartTimeStamp;
-(void)setHasEndTimeStamp:(bool)arg1 ;
-(bool)hasEndTimeStamp;
-(void)setHasArrivedAtDestination:(bool)arg1 ;
-(bool)hasArrivedAtDestination;
-(void)setHasNavigationAudioFeedback:(bool)arg1 ;
-(bool)hasNavigationAudioFeedback;
-(id)directionsFeedbacks;
-(id)finalLocation;
-(double)startTimeStamp;
-(double)endTimeStamp;
-(bool)arrivedAtDestination;
-(SCD_Struct_GE87)navigationAudioFeedback;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

