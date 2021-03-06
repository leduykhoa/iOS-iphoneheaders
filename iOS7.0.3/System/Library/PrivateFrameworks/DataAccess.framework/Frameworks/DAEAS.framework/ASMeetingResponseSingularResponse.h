/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSString, NSNumber;

@interface ASMeetingResponseSingularResponse : ASItem {

	NSString* _requestId;
	NSNumber* _status;
	NSString* _eventId;

}

@property (retain) NSString * requestId;              //@synthesize requestId=_requestId - In the implementation block
@property (retain) NSNumber * status;                 //@synthesize status=_status - In the implementation block
@property (retain) NSString * eventId;                //@synthesize eventId=_eventId - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)dealloc;
-(id)description;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(id)eventId;
-(id)requestId;
-(void)setRequestId:(id)arg1 ;
-(void)setEventId:(id)arg1 ;
@end

