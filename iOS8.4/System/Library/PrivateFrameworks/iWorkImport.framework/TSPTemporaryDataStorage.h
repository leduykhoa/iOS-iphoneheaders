/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPFileDataStorage.h>

@protocol TSPCryptoInfo;
@class NSURL;

@interface TSPTemporaryDataStorage : TSPFileDataStorage {

	NSURL* _URL;
	id<TSPCryptoInfo> _decryptionInfo;
	BOOL _isMissingData;
	BOOL _gilligan_isRemote;
	BOOL _isMissingOriginalData;

}

@property (assign,nonatomic) BOOL isMissingOriginalData;              //@synthesize isMissingOriginalData=_isMissingOriginalData - In the implementation block
@property (assign,nonatomic) BOOL isMissingData;                      //@synthesize isMissingData=_isMissingData - In the implementation block
-(id)initWithURL:(id)arg1 decryptionInfo:(id)arg2 ;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(id)decryptionInfo;
-(BOOL)isMissingData;
-(BOOL)gilligan_isRemote;
-(void)setGilligan_isRemote:(BOOL)arg1 ;
-(void)setIsMissingOriginalData:(BOOL)arg1 ;
-(void)setIsMissingData:(BOOL)arg1 ;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(DataInfo*)arg3 preferredFilename:(id)arg4 ;
-(BOOL)isMissingOriginalData;
-(void)dealloc;
-(unsigned long long)length;
@end
