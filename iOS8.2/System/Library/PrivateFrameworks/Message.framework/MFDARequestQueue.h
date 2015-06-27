/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFRequestQueue.h>

@class DAMailAccount, NSString;

@interface MFDARequestQueue : MFRequestQueue {

	DAMailAccount* _account;
	NSString* _folderID;

}
-(void)dealloc;
-(id)initWithAccount:(id)arg1 folderID:(id)arg2 ;
-(id)filterRequests:(id)arg1 consumers:(id)arg2 newConsumers:(id*)arg3 ;
-(void)processRequests:(id)arg1 consumers:(id)arg2 ;
@end
