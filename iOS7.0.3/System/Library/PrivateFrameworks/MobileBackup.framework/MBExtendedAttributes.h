/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface MBExtendedAttributes : NSObject
+(id)attributesForPathFSR:(const char*)arg1 error:(id*)arg2 ;
+(unsigned)sizeOfAttributes:(id)arg1 ;
+(BOOL)setAttributes:(id)arg1 forPathFSR:(const char*)arg2 error:(id*)arg3 ;
+(id)keysForPathFSR:(const char*)arg1 error:(id*)arg2 ;
+(id)valueForKey:(id)arg1 forPathFSR:(const char*)arg2 error:(id*)arg3 ;
+(id)keysForFD:(int)arg1 error:(id*)arg2 ;
+(id)valueForKey:(id)arg1 forFD:(int)arg2 error:(id*)arg3 ;
+(id)attributesForFD:(int)arg1 error:(id*)arg2 ;
+(BOOL)setValue:(id)arg1 forKey:(id)arg2 forPathFSR:(const char*)arg3 error:(id*)arg4 ;
+(BOOL)setValue:(id)arg1 forKey:(id)arg2 forFD:(int)arg3 error:(id*)arg4 ;
+(BOOL)setAttributes:(id)arg1 forFD:(int)arg2 error:(id*)arg3 ;
+(BOOL)removeAttributeForKey:(id)arg1 forPathFSR:(const char*)arg2 error:(id*)arg3 ;
+(BOOL)removeAttributeForKey:(id)arg1 forFD:(int)arg2 error:(id*)arg3 ;
@end

