/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSHashTable.h>

@interface NSClassicHashTable : NSHashTable {

	SCD_Struct_NS25* _callBacks;
	CFBasicHashRef _ht;

}
-(void*)getItem:(const void*)arg1 ;
-(void)removeAllItems;
-(void)insertKnownAbsentItem:(const void*)arg1 ;
-(void)getKeys:(const void*)arg1 count:(unsigned*)arg2 ;
-(void)insertItem:(const void*)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(void)addObject:(id)arg1 ;
-(id)copy;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)allObjects;
-(void)removeItem:(const void*)arg1 ;
@end

