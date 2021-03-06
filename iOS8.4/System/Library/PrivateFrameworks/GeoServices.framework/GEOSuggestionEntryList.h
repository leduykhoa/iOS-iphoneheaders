/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOSuggestionEntryList : PBCodable <NSCopying> {

	NSString* _localizedSectionHeader;
	NSMutableArray* _suggestionEntries;

}

@property (nonatomic,retain) NSMutableArray * suggestionEntries;              //@synthesize suggestionEntries=_suggestionEntries - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedSectionHeader; 
@property (nonatomic,retain) NSString * localizedSectionHeader;               //@synthesize localizedSectionHeader=_localizedSectionHeader - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)suggestionEntriesCount;
-(NSMutableArray *)suggestionEntries;
-(NSString *)localizedSectionHeader;
-(void)setSuggestionEntries:(NSMutableArray *)arg1 ;
-(void)setLocalizedSectionHeader:(NSString *)arg1 ;
-(void)addSuggestionEntries:(id)arg1 ;
-(void)clearSuggestionEntries;
-(id)suggestionEntriesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasLocalizedSectionHeader;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

