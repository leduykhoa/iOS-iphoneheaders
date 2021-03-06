/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface AutoFetchHistoryEntry : NSObject {

	NSString* _mailboxPath;
	unsigned _frequency;
	double _lastFetchTime;
	double _lastFetchDuration;

}

@property (nonatomic,readonly) NSString * mailboxPath;              //@synthesize mailboxPath=_mailboxPath - In the implementation block
@property (assign,nonatomic) unsigned frequency;                    //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) double lastFetchTime;                  //@synthesize lastFetchTime=_lastFetchTime - In the implementation block
@property (assign,nonatomic) double lastFetchDuration;              //@synthesize lastFetchDuration=_lastFetchDuration - In the implementation block
-(double)lastFetchTime;
-(id)initWithMailboxPath:(id)arg1 ;
-(NSString *)mailboxPath;
-(void)setLastFetchTime:(double)arg1 ;
-(double)lastFetchDuration;
-(void)setLastFetchDuration:(double)arg1 ;
-(void)dealloc;
-(unsigned)frequency;
-(void)setFrequency:(unsigned)arg1 ;
@end

