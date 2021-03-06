/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:47:17 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditItem.h>

@class CalendarEventAlarmTable, NSArray;

@interface EKCalendarItemAlarmEditItem : EKCalendarItemEditItem {

	CalendarEventAlarmTable* _alarmTable;
	unsigned _disclosedSubitem;
	NSArray* _alarms;
	int _lastSeenAllDayState;
	char _userChangedAlarm;
	char _hasLeaveNowAlarm;
	char _canHaveLeaveNowAlarm;

}
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned)arg2 ;
-(unsigned)numberOfSubitems;
-(char)saveAndDismissWithForce:(char)arg1 ;
-(void)setCalendarItem:(id)arg1 store:(id)arg2 ;
-(char)editItemViewControllerCommit:(id)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(char)configureForCalendarConstraints:(id)arg1 ;
-(void)updateInternalTravelTimeStateForCalendarItem:(id)arg1 ;
-(void)_updateAlarms;
-(void)_updateDefaultAlarm;
-(char)_calendarItemHasLeaveNowAlarm;
-(char)_alarmsMatchCalendarItem;
-(id)init;
@end

