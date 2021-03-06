/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/nsnetworkd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSURLCredentialStorage.h>

@protocol OS_dispatch_queue, NDCredentialStorageDelegate;
@class NSMutableDictionary, NSObject;

@interface NDCredentialStorage : NSURLCredentialStorage {

	NSMutableDictionary* _cachedCredentials;
	NSMutableDictionary* _cachedDefaultCredentialUsers;
	NSObject<OS_dispatch_queue>* _queue;
	<NDCredentialStorageDelegate>* _delegate;

}

@property (__weak) <NDCredentialStorageDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)credentialsForProtectionSpace:(id)arg1 ;
-(id)allCredentials;
-(void)setCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)defaultCredentialForProtectionSpace:(id)arg1 ;
-(void)reset;
-(void).cxx_destruct;
-(id)initWithDelegate:(id)arg1 ;
@end

