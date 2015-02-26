/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class JaliscoAppLibrary, NSArray;

@interface JaliscoAppArtworkOperation : CloudLibraryOperation {

	JaliscoAppLibrary* _appLibrary;
	NSArray* _adamIDs;
	BOOL _searchResultRequest;

}

@property (assign,getter=isSearchResultRequest,nonatomic) BOOL searchResultRequest;              //@synthesize searchResultRequest=_searchResultRequest - In the implementation block
+(id)cachedBitmapDataForBundleIdentifier:(id)arg1 ;
+(id)pngDataFromCachedBitmap:(id)arg1 scale:(double)arg2 ;
-(id)initWithJaliscoAppLibrary:(id)arg1 ;
-(void)setSpecificAdamIDs:(id)arg1 ;
-(void)setSearchResultRequest:(BOOL)arg1 ;
-(BOOL)isSearchResultRequest;
-(void)downloadEntry:(id)arg1 cache:(id)arg2 ;
-(id)description;
-(void)main;
@end
