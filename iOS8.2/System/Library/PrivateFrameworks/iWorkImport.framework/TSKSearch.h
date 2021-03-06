/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface TSKSearch : NSObject {

	char _isComplete;
	NSString* _string;
	unsigned _options;
	/*^block*/id _hitBlock;

}

@property (nonatomic,copy) NSString * string;               //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) unsigned options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id hitBlock;                     //@synthesize hitBlock=_hitBlock - In the implementation block
@property (assign,nonatomic) char isComplete;               //@synthesize isComplete=_isComplete - In the implementation block
-(void)setHitBlock:(id)arg1 ;
-(void)setIsComplete:(char)arg1 ;
-(id)initWithString:(id)arg1 options:(unsigned)arg2 hitBlock:(/*^block*/id)arg3 ;
-(id)hitBlock;
-(char)isComplete;
-(void)dealloc;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)setOptions:(unsigned)arg1 ;
-(unsigned)options;
@end

