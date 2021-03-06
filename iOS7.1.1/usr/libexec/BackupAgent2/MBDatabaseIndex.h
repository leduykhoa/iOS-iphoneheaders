/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:27 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MBDatabaseIndex : NSObject {

	NSMutableDictionary* _entriesByFileID;
	double _version;
	BOOL _domainRedirects;

}

@property (nonatomic,readonly) double version;                                                 //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) unsigned count; 
@property (assign,getter=containsDomainRedirects,nonatomic) BOOL domainRedirects;              //@synthesize domainRedirects=_domainRedirects - In the implementation block
+(id)databaseIndex;
+(unsigned)flagsForMode:(unsigned short)arg1 ;
-(void)setFlags:(unsigned)arg1 forFileID:(id)arg2 ;
-(BOOL)containsDomainRedirects;
-(unsigned)flagsForFileID:(id)arg1 ;
-(BOOL)containsFileID:(id)arg1 ;
-(id)fileIDEnumerator;
-(void)setOffset:(unsigned)arg1 flags:(unsigned)arg2 forFileID:(id)arg3 ;
-(void)setDomainRedirects:(BOOL)arg1 ;
-(int)offsetForFileID:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(id)description;
-(double)version;
@end

