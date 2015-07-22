/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Maps/NSCopying.h>

@class NSMutableArray;

@interface PersistentHistory : PBCodable <NSCopying> {

	NSMutableArray* _items;

}

@property (nonatomic,retain) NSMutableArray * items;              //@synthesize items=_items - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(void)addItems:(id)arg1 ;
-(unsigned)itemsCount;
-(void)clearItems;
-(id)itemsAtIndex:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
