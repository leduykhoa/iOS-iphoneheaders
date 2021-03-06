/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Search/Search-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SPSearchResult : PBCodable {

	unsigned long long _identifier;
	NSString* _auxiliarySubtitle;
	NSString* _auxiliaryTitle;
	int _flags;
	unsigned _numberOfSummaryLines;
	NSString* _subtitle;
	NSString* _summary;
	NSString* _title;
	NSString* _url;
	SCD_Struct_SP0 _has;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL hasSummary; 
@property (nonatomic,retain) NSString * summary;                         //@synthesize summary=_summary - In the implementation block
@property (nonatomic,readonly) BOOL hasAuxiliaryTitle; 
@property (nonatomic,retain) NSString * auxiliaryTitle;                  //@synthesize auxiliaryTitle=_auxiliaryTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasAuxiliarySubtitle; 
@property (nonatomic,retain) NSString * auxiliarySubtitle;               //@synthesize auxiliarySubtitle=_auxiliarySubtitle - In the implementation block
@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;                             //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) int flags;                                  //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfSummaryLines; 
@property (assign,nonatomic) unsigned numberOfSummaryLines;              //@synthesize numberOfSummaryLines=_numberOfSummaryLines - In the implementation block
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)title;
-(unsigned long long)identifier;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(id)dictionaryRepresentation;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(int)flags;
-(BOOL)hasTitle;
-(BOOL)hasUrl;
-(BOOL)hasIdentifier;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setFlags:(int)arg1 ;
-(void)setAuxiliaryTitle:(id)arg1 ;
-(void)setAuxiliarySubtitle:(id)arg1 ;
-(BOOL)hasSubtitle;
-(BOOL)hasSummary;
-(BOOL)hasAuxiliaryTitle;
-(id)auxiliaryTitle;
-(BOOL)hasAuxiliarySubtitle;
-(id)auxiliarySubtitle;
-(BOOL)hasFlags;
-(BOOL)hasNumberOfSummaryLines;
-(unsigned)numberOfSummaryLines;
-(void)setNumberOfSummaryLines:(unsigned)arg1 ;
-(void)setHasFlags:(BOOL)arg1 ;
-(void)setHasNumberOfSummaryLines:(BOOL)arg1 ;
-(BOOL)isEquivalentToResult:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)summary;
-(void)setSummary:(id)arg1 ;
@end

