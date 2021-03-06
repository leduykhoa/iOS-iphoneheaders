/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SBOperation : NSObject {

	/*^block*/ id _block;
	NSString* _name;
	BOOL _hasRun;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)operationWithBlock:(/*^block*/ id)arg1 name:(id)arg2 ;
-(id)initWithBlock:(/*^block*/ id)arg1 name:(id)arg2 ;
-(void)execute;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)name;
@end

