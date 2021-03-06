/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:56 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString;

@interface GEOCarInfo : PBCodable <NSCopying> {

	SCD_Struct_GE190 _screenResolution;
	int _interactionModel;
	NSString* _manufacturer;
	NSString* _model;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) BOOL hasInteractionModel; 
@property (assign,nonatomic) int interactionModel;                           //@synthesize interactionModel=_interactionModel - In the implementation block
@property (nonatomic,readonly) BOOL hasManufacturer; 
@property (nonatomic,retain) NSString * manufacturer;                        //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,retain) NSString * model;                               //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) BOOL hasScreenResolution; 
@property (assign,nonatomic) SCD_Struct_GE191 screenResolution;              //@synthesize screenResolution=_screenResolution - In the implementation block
+(id)carInfoWithTraits:(id)arg1 ;
-(id)initWithTraits:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)model;
-(id)dictionaryRepresentation;
-(void)setModel:(NSString *)arg1 ;
-(int)interactionModel;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setInteractionModel:(int)arg1 ;
-(void)setScreenResolution:(SCD_Struct_GE191)arg1 ;
-(void)setHasInteractionModel:(BOOL)arg1 ;
-(BOOL)hasInteractionModel;
-(BOOL)hasManufacturer;
-(BOOL)hasModel;
-(void)setHasScreenResolution:(BOOL)arg1 ;
-(BOOL)hasScreenResolution;
-(SCD_Struct_GE191)screenResolution;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

