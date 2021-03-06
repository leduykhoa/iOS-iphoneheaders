/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:47 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <PhotoLibraryServices/PLOrderKeyObject.h>

@class PLManagedAsset, PLManagedAlbum, NSString;

@interface PLAssetToAlbumOrder : PLManagedObject <PLOrderKeyObject> {

	char _isSpecial;

}

@property (assign,nonatomic) long long orderValue; 
@property (nonatomic,retain) PLManagedAsset * asset; 
@property (nonatomic,retain) PLManagedAlbum * album; 
@property (assign,nonatomic) char isSpecial;                        //@synthesize isSpecial=_isSpecial - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newAssetOrderForAsset:(id)arg1 album:(id)arg2 ;
-(NSString *)description;
-(char)isSpecial;
-(void)didSave;
-(void)setIsSpecial:(char)arg1 ;
-(id)secondaryOrderSortKey;
-(id)childManagedObject;
@end

