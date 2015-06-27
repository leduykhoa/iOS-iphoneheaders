/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:34:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface MBSKeySet : PBCodable {

	NSMutableArray* _keys;

}

@property (nonatomic,retain) NSMutableArray * keys;              //@synthesize keys=_keys - In the implementation block
-(void)setKeys:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSMutableArray *)keys;
-(void)addKey:(id)arg1 ;
-(id)keyAtIndex:(unsigned)arg1 ;
-(unsigned)keysCount;
-(void)clearKeys;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
