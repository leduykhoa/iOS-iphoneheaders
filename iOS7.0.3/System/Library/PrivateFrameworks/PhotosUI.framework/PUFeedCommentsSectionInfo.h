/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PUFeedSectionInfo.h>

@interface PUFeedCommentsSectionInfo : PUFeedSectionInfo {

	BOOL __hasLikes;

}

@property (assign,setter=_setHasLikes:,nonatomic) BOOL _hasLikes;              //@synthesize _hasLikes=__hasLikes - In the implementation block
-(id)assets;
-(unsigned)assetsCount;
-(BOOL)containsAsset:(id)arg1 ;
-(void)updateFromCloudFeedEntry;
-(id)assetForItemAtIndex:(int)arg1 ;
-(int)sectionType;
-(int)typeForItemAtIndex:(int)arg1 ;
-(int)indexOfItemWithAsset:(id)arg1 ;
-(id)assetsForItemAtIndex:(int)arg1 maximumCount:(int)arg2 ;
-(id)commentForItemAtIndex:(int)arg1 ;
-(id)likesForItemAtIndex:(int)arg1 ;
-(BOOL)hasMultipleAssetsForItemAtIndex:(int)arg1 ;
-(int)indexOfItemWithComment:(id)arg1 ;
-(void)getCommentCount:(out unsigned*)arg1 likeCount:(out unsigned*)arg2 ;
-(id)cloudFeedCommentsEntry;
-(void)_setHasLikes:(BOOL)arg1 ;
-(BOOL)_hasLikes;
@end

