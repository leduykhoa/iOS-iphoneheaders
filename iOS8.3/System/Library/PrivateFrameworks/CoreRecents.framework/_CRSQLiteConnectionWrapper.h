/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:13:29 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CRSQLiteConnection;

@interface _CRSQLiteConnectionWrapper : NSObject {

	CRSQLiteConnection* _connection;
	unsigned _generation;
	char _isWriter;

}

@property (nonatomic,readonly) CRSQLiteConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) unsigned generation;                          //@synthesize generation=_generation - In the implementation block
@property (assign,nonatomic) char isWriter;                                  //@synthesize isWriter=_isWriter - In the implementation block
-(void)setIsWriter:(char)arg1 ;
-(char)isWriter;
-(void)dealloc;
-(CRSQLiteConnection *)connection;
-(id)initWithConnection:(id)arg1 generation:(unsigned)arg2 ;
-(unsigned)generation;
@end

