/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:43 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreIndoor/CoreIndoor-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreIndoor/NSCopying.h>

@interface WifiParameters : PBCodable <NSCopying> {

	int _batching;
	float _historyTimespanSeconds;
	float _scanPeriodSeconds;
	SCD_Struct_In2 _has;

}

@property (assign,nonatomic) BOOL hasHistoryTimespanSeconds; 
@property (assign,nonatomic) float historyTimespanSeconds;                //@synthesize historyTimespanSeconds=_historyTimespanSeconds - In the implementation block
@property (assign,nonatomic) BOOL hasScanPeriodSeconds; 
@property (assign,nonatomic) float scanPeriodSeconds;                     //@synthesize scanPeriodSeconds=_scanPeriodSeconds - In the implementation block
@property (assign,nonatomic) BOOL hasBatching; 
@property (assign,nonatomic) int batching;                                //@synthesize batching=_batching - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHistoryTimespanSeconds:(float)arg1 ;
-(void)setHasHistoryTimespanSeconds:(BOOL)arg1 ;
-(BOOL)hasHistoryTimespanSeconds;
-(void)setScanPeriodSeconds:(float)arg1 ;
-(void)setHasScanPeriodSeconds:(BOOL)arg1 ;
-(BOOL)hasScanPeriodSeconds;
-(void)setBatching:(int)arg1 ;
-(void)setHasBatching:(BOOL)arg1 ;
-(BOOL)hasBatching;
-(float)historyTimespanSeconds;
-(float)scanPeriodSeconds;
-(int)batching;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

