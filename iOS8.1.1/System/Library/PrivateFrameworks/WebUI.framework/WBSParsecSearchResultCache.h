/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:56 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface WBSParsecSearchResultCache : NSObject {

	NSMutableDictionary* _resultSetCache;
	NSMutableDictionary* _resultCache;
	unsigned long long _cachedQueriesLimit;
	unsigned long long _cachedResultsLimit;

}

@property (nonatomic,readonly) NSArray * allCachedQueries; 
@property (nonatomic,readonly) NSArray * allCachedResultIdentifiers; 
-(id)resultSetForQuery:(id)arg1 ;
-(void)cacheResultSet:(id)arg1 ;
-(id)resultForIdentifier:(id)arg1 ;
-(void)cacheResult:(id)arg1 ;
-(id)initWithCachedQueriesLimit:(unsigned long long)arg1 cachedResultsLimit:(unsigned long long)arg2 ;
-(NSArray *)allCachedQueries;
-(NSArray *)allCachedResultIdentifiers;
@end
