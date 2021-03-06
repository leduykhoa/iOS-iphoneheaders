/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFOfflineCacheOperation.h>
#import <Message/MFDADeferredFolderChangeOperation.h>

@class NSString;

@interface _MFDADeferredModifyMailboxOperation : MFOfflineCacheOperation <MFDADeferredFolderChangeOperation> {

	NSString* _folderID;
	NSString* _newParentFolderID;
	NSString* _newDisplayName;

}
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)folderChangeResult;
-(void)applyToFolderMap:(id)arg1 ;
-(bool)performWithAccount:(id)arg1 offlineCache:(id)arg2 ;
-(id)initWithFolderID:(id)arg1 newParentFolderID:(id)arg2 newDisplayName:(id)arg3 ;
@end

