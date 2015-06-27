/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:34:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <backupd/MBFileHandle.h>

@class NSString;

@interface MBBasicFileHandle : MBFileHandle {

	NSString* _path;
	int _fd;

}
+(id)basicFileHandleWithPath:(id)arg1 flags:(int)arg2 mode:(unsigned short)arg3 error:(id*)arg4 ;
-(id)encryptionKeyWithError:(id*)arg1 ;
-(char)statWithBuffer:(stat*)arg1 error:(id*)arg2 ;
-(int)writeWithBytes:(const void*)arg1 length:(unsigned)arg2 error:(id*)arg3 ;
-(int)readWithBytes:(void*)arg1 length:(unsigned)arg2 error:(id*)arg3 ;
-(id)initWithPath:(id)arg1 fd:(int)arg2 ;
-(int)fd;
-(void)dealloc;
-(id)path;
-(char)closeWithError:(id*)arg1 ;
@end
