/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <RemoteMediaServices/NSCopying.h>

@class NSString;

@interface RMSServiceMessage : PBCodable <NSCopying> {

	NSString* _displayName;
	NSString* _homeSharingGroupKey;
	NSString* _hostName;
	NSString* _networkName;
	int _port;
	int _serviceDiscoverySource;
	int _serviceLegacyFlags;
	int _serviceType;
	SCD_Struct_RM6 _has;

}

@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkName; 
@property (nonatomic,retain) NSString * networkName;                      //@synthesize networkName=_networkName - In the implementation block
@property (nonatomic,readonly) BOOL hasHostName; 
@property (nonatomic,retain) NSString * hostName;                         //@synthesize hostName=_hostName - In the implementation block
@property (assign,nonatomic) BOOL hasPort; 
@property (assign,nonatomic) int port;                                    //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) BOOL hasServiceType; 
@property (assign,nonatomic) int serviceType;                             //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) BOOL hasServiceDiscoverySource; 
@property (assign,nonatomic) int serviceDiscoverySource;                  //@synthesize serviceDiscoverySource=_serviceDiscoverySource - In the implementation block
@property (assign,nonatomic) BOOL hasServiceLegacyFlags; 
@property (assign,nonatomic) int serviceLegacyFlags;                      //@synthesize serviceLegacyFlags=_serviceLegacyFlags - In the implementation block
@property (nonatomic,readonly) BOOL hasHomeSharingGroupKey; 
@property (nonatomic,retain) NSString * homeSharingGroupKey;              //@synthesize homeSharingGroupKey=_homeSharingGroupKey - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(int)port;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)hasDisplayName;
-(void)setPort:(int)arg1 ;
-(NSString *)hostName;
-(void)setHostName:(NSString *)arg1 ;
-(void)setServiceType:(int)arg1 ;
-(int)serviceType;
-(void)setHasServiceType:(BOOL)arg1 ;
-(BOOL)hasServiceType;
-(void)setNetworkName:(NSString *)arg1 ;
-(BOOL)hasNetworkName;
-(NSString *)networkName;
-(int)serviceDiscoverySource;
-(int)serviceLegacyFlags;
-(NSString *)homeSharingGroupKey;
-(void)setServiceDiscoverySource:(int)arg1 ;
-(void)setServiceLegacyFlags:(int)arg1 ;
-(void)setHomeSharingGroupKey:(NSString *)arg1 ;
-(BOOL)hasHostName;
-(void)setHasPort:(BOOL)arg1 ;
-(BOOL)hasPort;
-(void)setHasServiceDiscoverySource:(BOOL)arg1 ;
-(BOOL)hasServiceDiscoverySource;
-(void)setHasServiceLegacyFlags:(BOOL)arg1 ;
-(BOOL)hasServiceLegacyFlags;
-(BOOL)hasHomeSharingGroupKey;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

