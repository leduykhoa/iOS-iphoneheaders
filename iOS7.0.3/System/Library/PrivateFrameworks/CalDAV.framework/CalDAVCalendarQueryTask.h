/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPropFindTask.h>

@class NSDateComponents;

@interface CalDAVCalendarQueryTask : CoreDAVPropFindTask {

	BOOL _syncEvents;
	BOOL _syncTodos;
	NSDateComponents* _eventFilterStartDate;
	NSDateComponents* _eventFilterEndDate;
	NSDateComponents* _todoFilterStartDate;
	NSDateComponents* _todoFilterEndDate;

}

@property (assign) BOOL syncEvents;                                      //@synthesize syncEvents=_syncEvents - In the implementation block
@property (assign) BOOL syncTodos;                                       //@synthesize syncTodos=_syncTodos - In the implementation block
@property (retain) NSDateComponents * eventFilterStartDate;              //@synthesize eventFilterStartDate=_eventFilterStartDate - In the implementation block
@property (retain) NSDateComponents * eventFilterEndDate;                //@synthesize eventFilterEndDate=_eventFilterEndDate - In the implementation block
@property (retain) NSDateComponents * todoFilterStartDate;               //@synthesize todoFilterStartDate=_todoFilterStartDate - In the implementation block
@property (retain) NSDateComponents * todoFilterEndDate;                 //@synthesize todoFilterEndDate=_todoFilterEndDate - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setSyncEvents:(BOOL)arg1 ;
-(void)setSyncTodos:(BOOL)arg1 ;
-(BOOL)syncTodos;
-(BOOL)syncEvents;
-(void)setEventFilterStartDate:(id)arg1 ;
-(void)setEventFilterEndDate:(id)arg1 ;
-(void)setTodoFilterStartDate:(id)arg1 ;
-(void)setTodoFilterEndDate:(id)arg1 ;
-(id)_icsDateStringForNSDateComponents:(id)arg1 ;
-(void)_appendTimeRangeFilterToXMLData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)_appendComponentFiltersToXMLData:(id)arg1 ;
-(id)eventFilterStartDate;
-(id)eventFilterEndDate;
-(id)todoFilterStartDate;
-(id)todoFilterEndDate;
-(id)requestBody;
-(id)httpMethod;
@end

