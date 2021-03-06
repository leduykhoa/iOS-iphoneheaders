/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSURL;

@interface SKUIReviewMetadata : NSObject <NSCopying> {

	NSString* _body;
	unsigned _bodyMaxLength;
	NSString* _nickname;
	unsigned _nicknameMaxLength;
	float _rating;
	NSURL* _submitURL;
	NSString* _title;
	unsigned _titleMaxLength;

}

@property (nonatomic,copy) NSString * body;                             //@synthesize body=_body - In the implementation block
@property (nonatomic,copy) NSString * nickname;                         //@synthesize nickname=_nickname - In the implementation block
@property (assign,nonatomic) float rating;                              //@synthesize rating=_rating - In the implementation block
@property (nonatomic,copy) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * submitURL;                       //@synthesize submitURL=_submitURL - In the implementation block
@property (nonatomic,readonly) unsigned bodyMaxLength;                  //@synthesize bodyMaxLength=_bodyMaxLength - In the implementation block
@property (nonatomic,readonly) unsigned nicknameMaxLength;              //@synthesize nicknameMaxLength=_nicknameMaxLength - In the implementation block
@property (nonatomic,readonly) unsigned titleMaxLength;                 //@synthesize titleMaxLength=_titleMaxLength - In the implementation block
-(void)setRating:(float)arg1 ;
-(float)rating;
-(void)setTitle:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)title;
-(id)body;
-(void)setBody:(id)arg1 ;
-(id)initWithReviewDictionary:(id)arg1 ;
-(unsigned)bodyMaxLength;
-(unsigned)nicknameMaxLength;
-(id)submitURL;
-(unsigned)titleMaxLength;
-(void).cxx_destruct;
-(id)nickname;
-(void)setNickname:(id)arg1 ;
@end

