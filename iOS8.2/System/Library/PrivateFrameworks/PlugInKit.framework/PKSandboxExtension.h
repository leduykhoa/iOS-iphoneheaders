/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:49 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PKSandboxExtension : NSObject {

	NSString* _token;
	long long _handle;

}

@property (retain) NSString * token;              //@synthesize token=_token - In the implementation block
@property (assign) long long handle;              //@synthesize handle=_handle - In the implementation block
-(id)initWithExtension:(id)arg1 ;
-(void)dealloc;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(long long)handle;
-(void)setHandle:(long long)arg1 ;
-(void)consume;
-(void)expel;
@end

