/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class TSTIntegerKeyDict, TSTTableDataObjectKeyDict;

@interface TSTTableDataList : TSPObject {

	int mListType;
	unsigned mNextID;
	TSTIntegerKeyDict* mData;
	TSTTableDataObjectKeyDict* mIDs;

}

@property (nonatomic,readonly) unsigned nextID; 
@property (nonatomic,readonly) TSTIntegerKeyDict * data; 
+(id)newObjectForUnarchiver:(id)arg1 ;
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)allRichTextPayloadStorages;
-(unsigned long long)flushableSize;
-(id)initWithType:(int)arg1 context:(id)arg2 ;
-(bool)supportsIDMapForType:(int)arg1 ;
-(void)p_setupWithType:(int)arg1 nextKeyID:(unsigned)arg2 ;
-(unsigned)nextID;
-(void)dealloc;
-(id)data;
@end
