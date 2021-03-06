/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:32 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSLock;

@interface _NSXPCConnectionExportedObjectTable : NSObject {

	NSLock* _lock;
	CFDictionaryRef _proxyNumberToObject;
	CFDictionaryRef _objectToProxyNumber;
	unsigned long long _next;
	char _valid;

}
-(id)exportedObjectForProxyNumber:(unsigned long long)arg1 ;
-(id)interfaceForProxyNumber:(unsigned long long)arg1 ;
-(void)setExportedObject:(id)arg1 forProxyNumber:(unsigned long long)arg2 ;
-(void)setInterface:(id)arg1 forProxyNumber:(unsigned long long)arg2 ;
-(void)releaseExportedObject:(unsigned long long)arg1 ;
-(unsigned long long)proxyNumberForExportedObject:(id)arg1 interface:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)invalidate;
-(void)finalize;
@end

