/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/Plugins/Calendar.assistantBundle/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObjectCommit.h>

@class EKEventStore;

@interface EKAssistantEventCommit : SADomainObjectCommit {

	EKEventStore* _eventStore;

}
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(id)_commitEvent:(id)arg1 serviceHelper:(id)arg2 ;
-(id)_validateEvent:(id)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
-(id)eventStore;
-(void)setEventStore:(id)arg1 ;
@end

