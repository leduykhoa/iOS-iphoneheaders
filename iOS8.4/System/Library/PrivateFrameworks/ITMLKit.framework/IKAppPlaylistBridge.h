/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IKAppPlaylist;
@class IKJSPlaylist, IKAppMediaItemBridge;

@interface IKAppPlaylistBridge : NSObject {

	id<IKAppPlaylist> _appPlaylist;
	IKJSPlaylist* _jsPlaylist;

}

@property (nonatomic,readonly) id<IKAppPlaylist> appPlaylist;                         //@synthesize appPlaylist=_appPlaylist - In the implementation block
@property (nonatomic,readonly) IKAppMediaItemBridge * currentMediaItem; 
@property (nonatomic,readonly) IKAppMediaItemBridge * nextMediaItem; 
@property (nonatomic,readonly) IKAppMediaItemBridge * previousMediaItem; 
@property (readonly) unsigned long long length; 
@property (nonatomic,__weak,readonly) IKJSPlaylist * jsPlaylist;                      //@synthesize jsPlaylist=_jsPlaylist - In the implementation block
-(IKAppMediaItemBridge *)currentMediaItem;
-(unsigned long long)length;
-(id)item:(long long)arg1 ;
-(id<IKAppPlaylist>)appPlaylist;
-(IKAppMediaItemBridge *)previousMediaItem;
-(IKAppMediaItemBridge *)nextMediaItem;
-(id)initWithJSPlaylist:(id)arg1 ;
-(id)replaceItemsAt:(long long)arg1 count:(unsigned long long)arg2 with:(id)arg3 ;
-(IKJSPlaylist *)jsPlaylist;
@end

