/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WebBookmarkCollection, WebBookmark;

@interface BABookmarkItem : NSObject {

	WebBookmarkCollection* _collection;
	WebBookmark* _bookmark;

}

@property (nonatomic,readonly) WebBookmarkCollection * collection;              //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) WebBookmark * bookmark;                            //@synthesize bookmark=_bookmark - In the implementation block
-(id)collection;
-(void)dealloc;
-(id)description;
-(id)bookmark;
-(id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2 ;
-(void)setBookmark:(id)arg1 ;
@end
