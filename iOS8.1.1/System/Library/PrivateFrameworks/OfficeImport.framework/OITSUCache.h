/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:52 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OITSUFlushableObject.h>

@class NSString, NSMutableDictionary;

@interface OITSUCache : OITSUFlushableObject {

	NSString* mCacheName;
	NSMutableDictionary* mCache;

}
-(id)p_objectForKey:(id)arg1 ;
-(void)p_addEntriesFromDictionary:(id)arg1 ;
-(id)p_objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(void)removeAllObjects;
-(id)description;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)unload;
-(BOOL)hasFlushableContent;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

