/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>

@interface EDReference : NSObject <NSCopying> {

	EDAreaReference mAreaReference;

}
+(id)referenceWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4 ;
+(id)referenceWithReference:(id)arg1 ;
+(id)reference;
+(id)referenceWithAreaReference:(EDAreaReference*)arg1 ;
-(void)setLastColumn:(int)arg1 ;
-(void)setFirstColumn:(int)arg1 ;
-(void)setFirstRow:(int)arg1 ;
-(void)setLastRow:(int)arg1 ;
-(void)unionWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4 ;
-(void)unionWithRow:(int)arg1 column:(int)arg2 ;
-(void)unionWithReference:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)lastColumn;
-(int)firstColumn;
-(int)firstRow;
-(int)lastRow;
-(unsigned long long)countOfCellsBeingReferenced;
-(id)initWithReference:(id)arg1 ;
-(BOOL)isCellReference;
-(BOOL)isValidAreaReference;
-(BOOL)isValidCellReference;
-(BOOL)containsRow:(int)arg1 column:(int)arg2 ;
-(BOOL)isRowReference;
-(BOOL)isColumnReference;
-(BOOL)isEqualToReference:(id)arg1 ;
-(BOOL)fullyAdjacentToReference:(id)arg1 ;
-(EDAreaReference)areaReference;
-(id)initWithAreaReference:(EDAreaReference*)arg1 ;
-(id)initWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4 ;
@end
