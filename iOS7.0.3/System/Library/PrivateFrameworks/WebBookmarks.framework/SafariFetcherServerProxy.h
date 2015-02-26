/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <WebBookmarks/WebBookmarksXPCConnectionDelegate.h>

@protocol WebBookmarksClientDelegateProtocol;
@class WebBookmarksXPCConnection;

@interface SafariFetcherServerProxy : NSObject <WebBookmarksXPCConnectionDelegate> {

	WebBookmarksXPCConnection* _connection;
	<WebBookmarksClientDelegateProtocol>* _delegate;

}

@property (assign,nonatomic) <WebBookmarksClientDelegateProtocol> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)invalidate;
-(void)clearReadingListArchiveWithUUID:(id)arg1 ;
-(void)clearAllReadingListArchives;
-(void)startReadingListFetcher;
-(void)connection:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)didFinishFetching;
-(void)didUpdateProgressWithMessage:(id)arg1 ;
-(void)didStartFetchingReadingListItemWithMessage:(id)arg1 ;
-(void)didStopFetchingReadingListItemWithMessage:(id)arg1 ;
-(void)_clearConnection;
@end
