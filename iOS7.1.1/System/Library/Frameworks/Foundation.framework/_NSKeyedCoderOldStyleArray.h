/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _NSKeyedCoderOldStyleArray : NSObject {

	void* _addr;
	unsigned long long _count;
	unsigned long long _size;
	BOOL _type;
	bool _decoded;
	BOOL _padding[2];

}
-(id)initWithObjCType:(BOOL)arg1 count:(unsigned long long)arg2 at:(const void*)arg3 ;
-(void)fillObjCType:(BOOL)arg1 count:(unsigned long long)arg2 at:(void*)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)finalize;
@end

