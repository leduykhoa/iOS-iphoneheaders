/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:34:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface MBSFilePutReceipt : PBCodable {

	NSData* _fileID;
	NSString* _putReceipt;

}

@property (nonatomic,readonly) char hasFileID; 
@property (nonatomic,retain) NSData * fileID;                    //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,readonly) char hasPutReceipt; 
@property (nonatomic,retain) NSString * putReceipt;              //@synthesize putReceipt=_putReceipt - In the implementation block
-(char)hasFileID;
-(void)setPutReceipt:(NSString *)arg1 ;
-(char)hasPutReceipt;
-(NSString *)putReceipt;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSData *)fileID;
-(void)setFileID:(NSData *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

