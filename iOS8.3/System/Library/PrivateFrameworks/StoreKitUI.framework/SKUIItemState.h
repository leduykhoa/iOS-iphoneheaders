/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:32 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/NSCopying.h>

@class NSString, NSNumber;

@interface SKUIItemState : NSObject <NSCopying> {

	unsigned _downloadContentFlags;
	NSString* _downloadPhase;
	float _downloadProgress;
	NSNumber* _itemIdentifier;
	unsigned _libraryContentFlags;
	int _mediaCategory;
	unsigned _state;
	NSString* _variantIdentifier;

}

@property (nonatomic,readonly) char activeStateIsPreview; 
@property (nonatomic,readonly) unsigned allContentFlags; 
@property (assign,nonatomic) unsigned downloadContentFlags;              //@synthesize downloadContentFlags=_downloadContentFlags - In the implementation block
@property (nonatomic,copy) NSString * downloadPhase;                     //@synthesize downloadPhase=_downloadPhase - In the implementation block
@property (assign,nonatomic) float downloadProgress;                     //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,copy) NSNumber * itemIdentifier;                    //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) unsigned libraryContentFlags;               //@synthesize libraryContentFlags=_libraryContentFlags - In the implementation block
@property (assign,nonatomic) int mediaCategory;                          //@synthesize mediaCategory=_mediaCategory - In the implementation block
@property (assign,nonatomic) unsigned state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * variantIdentifier;                 //@synthesize variantIdentifier=_variantIdentifier - In the implementation block
-(NSString *)downloadPhase;
-(id)description;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)itemIdentifier;
-(char)activeStateIsPreview;
-(unsigned)allContentFlags;
-(unsigned)downloadContentFlags;
-(void)setDownloadContentFlags:(unsigned)arg1 ;
-(void)setDownloadPhase:(NSString *)arg1 ;
-(float)downloadProgress;
-(void)setDownloadProgress:(float)arg1 ;
-(void)setItemIdentifier:(NSNumber *)arg1 ;
-(unsigned)libraryContentFlags;
-(void)setLibraryContentFlags:(unsigned)arg1 ;
-(int)mediaCategory;
-(void)setMediaCategory:(int)arg1 ;
-(NSString *)variantIdentifier;
-(void)setVariantIdentifier:(NSString *)arg1 ;
@end
