/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:58 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSInputStream, PBMessageStreamReader;

@interface BRCPackageManifestReader : NSEnumerator {

	NSInputStream* _stream;
	PBMessageStreamReader* _reader;

}

@property (assign,nonatomic) Class itemClass; 
-(void)dealloc;
-(id)nextObject;
-(void)setItemClass:(Class)arg1 ;
-(Class)itemClass;
-(void)done;
-(id)initWithAsset:(id)arg1 ;
-(id)initWithDeviceID:(int)arg1 fileID:(unsigned long long)arg2 ;
-(id)initWithInputStream:(id)arg1 ;
@end
