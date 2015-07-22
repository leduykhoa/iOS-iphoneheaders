/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EKEventOccurrenceInfo, EKEvent, EKCalendarEventInvitationNotification, NSDictionary;

@interface InboxRepliedSectionItem : NSObject {

	EKEventOccurrenceInfo* _occurrenceInfo;
	EKEvent* _event;
	EKCalendarEventInvitationNotification* _notification;
	NSDictionary* _cellFrameDictionary;

}

@property (nonatomic,retain) EKEventOccurrenceInfo * occurrenceInfo;                            //@synthesize occurrenceInfo=_occurrenceInfo - In the implementation block
@property (nonatomic,retain) EKEvent * event;                                                   //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) EKCalendarEventInvitationNotification * notification;              //@synthesize notification=_notification - In the implementation block
@property (nonatomic,retain) NSDictionary * cellFrameDictionary;                                //@synthesize cellFrameDictionary=_cellFrameDictionary - In the implementation block
-(NSDictionary *)cellFrameDictionary;
-(void)setCellFrameDictionary:(NSDictionary *)arg1 ;
-(id)initWithOccurrenceInfo:(id)arg1 ;
-(EKEventOccurrenceInfo *)occurrenceInfo;
-(void)setOccurrenceInfo:(EKEventOccurrenceInfo *)arg1 ;
-(id)description;
-(EKCalendarEventInvitationNotification *)notification;
-(void)setEvent:(EKEvent *)arg1 ;
-(EKEvent *)event;
-(void)setNotification:(EKCalendarEventInvitationNotification *)arg1 ;
@end
