/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSString;

@interface IMCloudSyncDataVersionPair : NSObject {

	NSData* _data;
	NSString* _version;

}

@property (nonatomic,retain) NSData * data;                   //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * version;              //@synthesize version=_version - In the implementation block
+(id)pairWithData:(id)arg1 version:(id)arg2 ;
-(id)initWithData:(id)arg1 version:(id)arg2 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
@end
