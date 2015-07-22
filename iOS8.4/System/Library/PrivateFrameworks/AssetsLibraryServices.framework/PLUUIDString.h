/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <Foundation/NSString.h>

@interface PLUUIDString : NSString {

	unsigned char _uuid[16];
	char _uuidString[37];

}
+(id)UUIDString;
-(id)initWithCFUUID:(CFUUIDRef)arg1 ;
-(const char*)UTF8String;
-(BOOL)isEqualToString:(id)arg1 ;
-(id)init;
-(unsigned long long)length;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(id)initWithUUID:(unsigned char)arg1 ;
-(id)UUIDData;
-(id)initWithUUIDData:(id)arg1 ;
-(SCD_Struct_PL1)UUIDBytes;
-(id)initWithCFUUIDBytes:(SCD_Struct_PL1)arg1 ;
@end
