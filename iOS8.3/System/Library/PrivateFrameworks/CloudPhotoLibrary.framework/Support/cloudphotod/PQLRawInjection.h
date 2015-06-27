/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:49 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <cloudphotod/cloudphotod-Structs.h>
#import <CloudDocsDaemon/PQLNameInjectionBase.h>
#import <cloudphotod/PQLInjecting.h>

@class NSString, NSData;

@interface PQLRawInjection : PQLNameInjectionBase <PQLInjecting>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * sql; 
+(void)initialize;
+(id)rawInjection:(const char*)arg1 length:(unsigned long)arg2 ;
-(NSString *)description;
-(int)bindWithStatement:(sqlite3_stmtRef)arg1 startingAtIndex:(int)arg2 ;
-(id)initWithUTF8String:(const char*)arg1 length:(unsigned long)arg2 ;
@end
