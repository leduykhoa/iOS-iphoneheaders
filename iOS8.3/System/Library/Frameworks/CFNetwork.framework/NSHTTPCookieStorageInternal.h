/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:37:52 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSRecursiveLock;

@interface NSHTTPCookieStorageInternal : NSObject {

	OpaqueCFHTTPCookieStorageRef storage;
	OpaqueCFHTTPCookieStorageRef privateStorage;
	NSRecursiveLock* dataLock;
	char privateBrowsing;

}
-(id)_initWithIdentifier:(id)arg1 private:(BOOL)arg2 ;
-(void)_syncCookies;
-(void)registerForPostingNotifications;
-(id)initInternalWithCFStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(void)dealloc;
@end
