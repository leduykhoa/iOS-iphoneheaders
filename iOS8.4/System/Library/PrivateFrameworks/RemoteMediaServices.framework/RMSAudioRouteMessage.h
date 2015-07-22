/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <RemoteMediaServices/NSCopying.h>

@class NSString;

@interface RMSAudioRouteMessage : PBCodable <NSCopying> {

	long long _macAddress;
	NSString* _displayName;
	BOOL _selected;
	BOOL _supportsVideo;
	SCD_Struct_RM5 _has;

}

@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL hasMacAddress; 
@property (assign,nonatomic) long long macAddress;                //@synthesize macAddress=_macAddress - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsVideo; 
@property (assign,nonatomic) BOOL supportsVideo;                  //@synthesize supportsVideo=_supportsVideo - In the implementation block
@property (assign,nonatomic) BOOL hasSelected; 
@property (assign,nonatomic) BOOL selected;                       //@synthesize selected=_selected - In the implementation block
-(BOOL)supportsVideo;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)selected;
-(NSString *)displayName;
-(void)setMacAddress:(long long)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)hasDisplayName;
-(long long)macAddress;
-(void)setHasMacAddress:(BOOL)arg1 ;
-(BOOL)hasMacAddress;
-(void)setSupportsVideo:(BOOL)arg1 ;
-(void)setHasSupportsVideo:(BOOL)arg1 ;
-(BOOL)hasSupportsVideo;
-(void)setHasSelected:(BOOL)arg1 ;
-(BOOL)hasSelected;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
