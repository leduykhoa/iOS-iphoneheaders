/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <backupd/MBCoding.h>
#import <backupd/NSCopying.h>

@class NSData, NSString;

@interface MBFileID : NSObject <MBCoding, NSCopying> {

	unsigned char _bytes[20];

}

@property (nonatomic,readonly) const void* bytes; 
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * string; 
+(id)fileIDWithDomain:(id)arg1 relativePath:(id)arg2 ;
+(id)fileIDWithDomainName:(id)arg1 relativePath:(id)arg2 ;
+(id)fileIDWithData:(id)arg1 ;
+(id)fileIDWithString:(id)arg1 ;
-(BOOL)isEqualToFileID:(id)arg1 ;
-(id)initWithDomain:(id)arg1 relativePath:(id)arg2 ;
-(id)initWithDecoder:(id)arg1 ;
-(void)encode:(id)arg1 ;
-(id)initWithDomainName:(id)arg1 relativePath:(id)arg2 ;
-(id)initWithBytes:(const void*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)length;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)filename;
@end
