/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:52 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/nanosystemsettingsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nanosystemsettingsd/nanosystemsettingsd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <nanosystemsettingsd/NSCopying.h>

@class NSMutableArray;

@interface NSSLegalDocumentsReqMsg : PBCodable <NSCopying> {

	NSMutableArray* _preferredLanguages;

}

@property (nonatomic,retain) NSMutableArray * preferredLanguages;              //@synthesize preferredLanguages=_preferredLanguages - In the implementation block
-(void)addPreferredLanguages:(id)arg1 ;
-(unsigned)preferredLanguagesCount;
-(void)clearPreferredLanguages;
-(id)preferredLanguagesAtIndex:(unsigned)arg1 ;
-(void)setPreferredLanguages:(NSMutableArray *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)preferredLanguages;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
