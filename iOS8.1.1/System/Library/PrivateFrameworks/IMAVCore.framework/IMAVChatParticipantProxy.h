/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:11 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, IMAVChatProxy, NSString, IMAVChat;

@interface IMAVChatParticipantProxy : NSObject {

	NSDictionary* _info;
	IMAVChatProxy* _chat;

}

@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL _inviteDelivered; 
@property (nonatomic,retain,readonly) IMAVChat * avChat; 
-(void)dealloc;
-(NSString *)name;
-(void)forwardInvocation:(id)arg1 ;
-(IMAVChat *)avChat;
-(BOOL)_inviteDelivered;
-(id)initWithDictionary:(id)arg1 chat:(id)arg2 ;
@end
