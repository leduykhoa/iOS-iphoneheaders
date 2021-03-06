/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSecureCoding.h>
#import <Foundation/NSCopying.h>

@interface NSPredicateOperator : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _operatorType;
	unsigned long long _modifier;

}
+(id)operatorWithType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
+(id)_newOperatorWithType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
+(SEL)_getSelectorForType:(unsigned long long)arg1 ;
+(id)_getSymbolForType:(unsigned long long)arg1 ;
+(id)operatorWithCustomSelector:(SEL)arg1 modifier:(unsigned long long)arg2 ;
+(BOOL)supportsSecureCoding;
-(unsigned long long)operatorType;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(unsigned long long)modifier;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)predicateFormat;
-(BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(BOOL)performOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 ;
-(void)_setOptions:(unsigned long long)arg1 ;
-(id)initWithOperatorType:(unsigned long long)arg1 ;
-(void)_setModifier:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SEL)selector;
-(unsigned long long)options;
-(id)symbol;
@end

