/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface NSSQLBindIntarray : NSObject {

	unsigned _index;
	id _value;
	NSString* _tableName;

}

@property (assign) unsigned index;                    //@synthesize index=_index - In the implementation block
@property (retain) id value;                          //@synthesize value=_value - In the implementation block
@property (retain) NSString * tableName;              //@synthesize tableName=_tableName - In the implementation block
-(id)initWithValue:(id)arg1 ;
-(void)setTableName:(NSString *)arg1 ;
-(void)dealloc;
-(void)setValue:(id)arg1 ;
-(id)value;
-(unsigned)index;
-(void)setIndex:(unsigned)arg1 ;
-(NSString *)tableName;
@end
