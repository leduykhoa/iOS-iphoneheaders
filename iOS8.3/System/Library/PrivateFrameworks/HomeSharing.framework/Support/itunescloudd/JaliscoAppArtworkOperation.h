/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:02:37 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class JaliscoAppLibrary, NSArray;

@interface JaliscoAppArtworkOperation : CloudLibraryOperation {

	JaliscoAppLibrary* _appLibrary;
	NSArray* _adamIDs;
	char _searchResultRequest;

}

@property (assign,getter=isSearchResultRequest,nonatomic) char searchResultRequest;              //@synthesize searchResultRequest=_searchResultRequest - In the implementation block
+(id)cachedBitmapDataForBundleIdentifier:(id)arg1 ;
+(id)pngDataFromCachedBitmap:(id)arg1 scale:(float)arg2 ;
-(id)initWithJaliscoAppLibrary:(id)arg1 ;
-(void)setSpecificAdamIDs:(id)arg1 ;
-(void)setSearchResultRequest:(char)arg1 ;
-(char)isSearchResultRequest;
-(void)downloadEntry:(id)arg1 cache:(id)arg2 ;
-(id)description;
-(void)main;
@end

