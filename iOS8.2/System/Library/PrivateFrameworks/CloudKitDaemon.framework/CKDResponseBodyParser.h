/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:43 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSError;


@protocol CKDResponseBodyParser <NSObject>
@property (nonatomic,readonly) NSError * parserError; 
@property (nonatomic,copy) id objectParsedBlock; 
@required
-(void)setObjectParsedBlock:(/*^block*/id)arg1;
-(void)processData:(id)arg1;
-(void)finishWithCompletion:(/*^block*/id)arg1;
-(id)objectParsedBlock;
-(NSError *)parserError;

@end

