/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFDAMailAccountConsumer.h>
#import <Message/DAMailboxRequestConsumer.h>
#import <DAEAS/DAMailboxStreamingContentConsumer.h>

@class NSArray, NSString, MFActivityMonitor, NSMutableData;

@interface MFDAMailAccountSyncConsumer : MFDAMailAccountConsumer <DAMailboxRequestConsumer, DAMailboxStreamingContentConsumer> {

	NSArray* _requests;
	NSArray* _consumers;
	NSString* _tag;
	NSString* _accountID;
	MFActivityMonitor* _monitor;
	id _streamConsumer;
	NSMutableData* _bodyData;
	bool _moreAvailable;
	bool _receivedFirstItem;
	bool _firstSyncBatch;
	int _syncKeyResets;
	int _serverErrors;

}

@property (nonatomic,readonly) NSString * tag;                  //@synthesize tag=_tag - In the implementation block
@property (nonatomic,retain) id streamConsumer;                 //@synthesize streamConsumer=_streamConsumer - In the implementation block
@property (nonatomic,readonly) bool moreAvailable;              //@synthesize moreAvailable=_moreAvailable - In the implementation block
-(void)dealloc;
-(id)tag;
-(void)reset;
-(id)initWithCurrentTag:(id)arg1 accountID:(id)arg2 requests:(id)arg3 consumers:(id)arg4 ;
-(bool)moreAvailable;
-(void)taskFailed:(id)arg1 statusCode:(int)arg2 error:(id)arg3 ;
-(void)setStreamConsumer:(id)arg1 ;
-(id)streamConsumer;
-(bool)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2 ;
-(void)consumeData:(char*)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4 ;
-(void)didEndStreamingForMailMessage:(id)arg1 ;
-(void)_setTag:(id)arg1 ;
-(id)actionsConsumer;
-(id)originalThreadMonitor;
-(void)handleSyncResponses:(id)arg1 ;
-(void)resultsForMailbox:(id)arg1 newTag:(id)arg2 actions:(id)arg3 responses:(id)arg4 percentComplete:(double)arg5 moreAvailable:(bool)arg6 ;
-(void)partialResultsForMailbox:(id)arg1 actions:(id)arg2 responses:(id)arg3 percentComplete:(double)arg4 moreAvailable:(bool)arg5 ;
@end
