/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

@interface MBDecoder : NSObject {

	NSData* _data;
	unsigned _offset;
	int _mark;

}

@property (nonatomic,readonly) NSData * data;              //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned offset; 
+(id)decoderWithData:(id)arg1 ;
-(id)decodeData;
-(short)decodeInt16;
-(long long)decodeInt64;
-(long)decodeInt32;
-(char)decodeInt8;
-(void)decodeBytes:(void*)arg1 length:(unsigned)arg2 ;
-(double)decodeVersion;
-(id)decodeDate;
-(void)mark;
-(void)dealloc;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(void)setOffset:(unsigned)arg1 ;
-(unsigned)offset;
-(void)reset;
-(void)close;
-(char)isDone;
-(id)decodeString;
@end

