/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobufWifi.dylib
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDProtobufWifi.dylib/libAWDProtobufWifi.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface AWDWiFiMetricsKnownNetworksEvent : PBCodable {

	unsigned long long _timestamp;
	unsigned _eventType;
	unsigned _networkSecurity;
	unsigned _networkTypeBitMap;
	NSData* _oui;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) unsigned eventType;                        //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkTypeBitMap; 
@property (assign,nonatomic) unsigned networkTypeBitMap;                //@synthesize networkTypeBitMap=_networkTypeBitMap - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkSecurity; 
@property (assign,nonatomic) unsigned networkSecurity;                  //@synthesize networkSecurity=_networkSecurity - In the implementation block
@property (nonatomic,readonly) BOOL hasOui; 
@property (nonatomic,retain) NSData * oui;                              //@synthesize oui=_oui - In the implementation block
-(unsigned)eventType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)setEventType:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setOui:(id)arg1 ;
-(BOOL)hasOui;
-(id)oui;
-(BOOL)hasEventType;
-(BOOL)hasNetworkTypeBitMap;
-(unsigned)networkTypeBitMap;
-(void)setNetworkTypeBitMap:(unsigned)arg1 ;
-(BOOL)hasNetworkSecurity;
-(unsigned)networkSecurity;
-(void)setNetworkSecurity:(unsigned)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(void)setHasNetworkTypeBitMap:(BOOL)arg1 ;
-(void)setHasNetworkSecurity:(BOOL)arg1 ;
@end

