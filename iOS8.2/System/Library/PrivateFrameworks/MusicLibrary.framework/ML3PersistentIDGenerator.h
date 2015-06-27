/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:28 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ML3DatabaseConnection;

@interface ML3PersistentIDGenerator : NSObject {

	ML3DatabaseConnection* _connection;
	long long _currentPersistentID;
	long long _nextUsedPersistentID;

}
-(id)initWithDatabaseConnection:(id)arg1 ;
-(long long)nextPersistentID;
-(void)_calculateNewRun;
@end
