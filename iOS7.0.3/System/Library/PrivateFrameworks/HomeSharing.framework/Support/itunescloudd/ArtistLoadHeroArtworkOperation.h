/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/itunescloudd-Structs.h>
#import <Foundation/NSOperation.h>

@class NSArray, NSMutableDictionary;

@interface ArtistLoadHeroArtworkOperation : NSOperation {

	NSArray* _formatIDs;
	NSMutableDictionary* _imageURLs;
	NSArray* _storeArtistIDs;

}
-(id)initWithStoreArtistIDs:(id)arg1 formatIDs:(id)arg2 ;
-(id)_bestImageURLForSize:(CGSize)arg1 withVariants:(id)arg2 ;
-(void)main;
-(void).cxx_destruct;
@end

