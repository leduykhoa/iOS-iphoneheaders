/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalDAV/CalDAV-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSSet;

@interface CalDAVServerVersion : NSObject <NSCopying> {

	double _version;
	bool _supportsTimeRangeFilter;
	bool _supportsTodoTimeRangeFilter;
	bool _supportsTimeRangeFilterWithoutEndDate;
	bool _supportsTimeRangeFilterOnInbox;
	bool _supportsAutoSchedule;
	bool _supportsPrivateComments;
	bool _supportsSharing;
	bool _supportsSharingNoScheduling;
	bool _supportsCalendarProxy;
	bool _supportsInboxAvailability;
	bool _supportsPrivateEvents;
	bool _supportsSubscriptionCalendars;
	bool _supportsPrincipalPropertySearch;
	bool _supportsExtendedCalendarQuery;
	bool _supportsRequestCompression;
	bool _supportsManagedAttachments;
	bool _supportsCheckForValidEmail;
	bool _supportsChecksumming;
	bool _supportsCalendarHomeSync;
	NSString* _supportedCalendarComponentSets;
	NSSet* _complianceClasses;
	NSString* _serverHeader;

}

@property (nonatomic,readonly) NSString * type; 
@property (assign,nonatomic) double version;                                          //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) bool supportsTimeRangeFilter;                            //@synthesize supportsTimeRangeFilter=_supportsTimeRangeFilter - In the implementation block
@property (assign,nonatomic) bool supportsTodoTimeRangeFilter;                        //@synthesize supportsTodoTimeRangeFilter=_supportsTodoTimeRangeFilter - In the implementation block
@property (assign,nonatomic) bool supportsTimeRangeFilterWithoutEndDate;              //@synthesize supportsTimeRangeFilterWithoutEndDate=_supportsTimeRangeFilterWithoutEndDate - In the implementation block
@property (assign,nonatomic) bool supportsTimeRangeFilterOnInbox;                     //@synthesize supportsTimeRangeFilterOnInbox=_supportsTimeRangeFilterOnInbox - In the implementation block
@property (assign,nonatomic) bool supportsAutoSchedule;                               //@synthesize supportsAutoSchedule=_supportsAutoSchedule - In the implementation block
@property (assign,nonatomic) bool supportsPrivateComments;                            //@synthesize supportsPrivateComments=_supportsPrivateComments - In the implementation block
@property (assign,nonatomic) bool supportsSharing;                                    //@synthesize supportsSharing=_supportsSharing - In the implementation block
@property (assign,nonatomic) bool supportsSharingNoScheduling;                        //@synthesize supportsSharingNoScheduling=_supportsSharingNoScheduling - In the implementation block
@property (assign,nonatomic) bool supportsCalendarProxy;                              //@synthesize supportsCalendarProxy=_supportsCalendarProxy - In the implementation block
@property (assign,nonatomic) bool supportsInboxAvailability;                          //@synthesize supportsInboxAvailability=_supportsInboxAvailability - In the implementation block
@property (assign,nonatomic) bool supportsPrivateEvents;                              //@synthesize supportsPrivateEvents=_supportsPrivateEvents - In the implementation block
@property (assign,nonatomic) bool supportsSubscriptionCalendars;                      //@synthesize supportsSubscriptionCalendars=_supportsSubscriptionCalendars - In the implementation block
@property (assign,nonatomic) bool supportsPrincipalPropertySearch;                    //@synthesize supportsPrincipalPropertySearch=_supportsPrincipalPropertySearch - In the implementation block
@property (assign,nonatomic) bool supportsExtendedCalendarQuery;                      //@synthesize supportsExtendedCalendarQuery=_supportsExtendedCalendarQuery - In the implementation block
@property (assign,nonatomic) bool supportsRequestCompression;                         //@synthesize supportsRequestCompression=_supportsRequestCompression - In the implementation block
@property (assign,nonatomic) bool supportsManagedAttachments;                         //@synthesize supportsManagedAttachments=_supportsManagedAttachments - In the implementation block
@property (assign,nonatomic) bool supportsCheckForValidEmail;                         //@synthesize supportsCheckForValidEmail=_supportsCheckForValidEmail - In the implementation block
@property (assign,nonatomic) bool supportsChecksumming;                               //@synthesize supportsChecksumming=_supportsChecksumming - In the implementation block
@property (assign,nonatomic) bool supportsCalendarHomeSync;                           //@synthesize supportsCalendarHomeSync=_supportsCalendarHomeSync - In the implementation block
@property (nonatomic,copy) NSString * supportedCalendarComponentSets;                 //@synthesize supportedCalendarComponentSets=_supportedCalendarComponentSets - In the implementation block
@property (nonatomic,retain) NSSet * complianceClasses;                               //@synthesize complianceClasses=_complianceClasses - In the implementation block
@property (nonatomic,copy) NSString * serverHeader;                                   //@synthesize serverHeader=_serverHeader - In the implementation block
+(id)_prototypeMatchingServerHeaders:(id)arg1 ;
+(id)versionWithPropertyValue:(id)arg1 ;
+(id)versionWithHTTPHeaders:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)type;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setVersion:(double)arg1 ;
-(double)version;
-(bool)supportsPrincipalPropertySearch;
-(void)setSupportsExtendedCalendarQuery:(bool)arg1 ;
-(void)setServerHeader:(id)arg1 ;
-(id)_propertiesToComplianceClasses;
-(id)_additionalFlagKeys;
-(void)setComplianceClasses:(id)arg1 ;
-(bool)supportsInboxAvailability;
-(void)setSupportsInboxAvailability:(bool)arg1 ;
-(void)_setPropertiesFromComplianceClasses:(id)arg1 ;
-(void)setSupportsRequestCompression:(bool)arg1 ;
-(id)serverHeader;
-(id)complianceClasses;
-(id)_allFlagKeys;
-(void)setSupportsTimeRangeFilter:(bool)arg1 ;
-(void)setSupportsTodoTimeRangeFilter:(bool)arg1 ;
-(void)setSupportsTimeRangeFilterWithoutEndDate:(bool)arg1 ;
-(void)setSupportsTimeRangeFilterOnInbox:(bool)arg1 ;
-(void)setSupportsAutoSchedule:(bool)arg1 ;
-(void)setSupportsPrivateComments:(bool)arg1 ;
-(void)setSupportsSharing:(bool)arg1 ;
-(void)setSupportsSharingNoScheduling:(bool)arg1 ;
-(bool)supportsCalendarProxy;
-(void)setSupportsCalendarProxy:(bool)arg1 ;
-(bool)supportsPrivateEvents;
-(void)setSupportsPrivateEvents:(bool)arg1 ;
-(bool)supportsSubscriptionCalendars;
-(void)setSupportsSubscriptionCalendars:(bool)arg1 ;
-(void)setSupportsPrincipalPropertySearch:(bool)arg1 ;
-(bool)supportsManagedAttachments;
-(void)setSupportsManagedAttachments:(bool)arg1 ;
-(bool)supportsCheckForValidEmail;
-(void)setSupportsCheckForValidEmail:(bool)arg1 ;
-(bool)supportsChecksumming;
-(void)setSupportsChecksumming:(bool)arg1 ;
-(void)setSupportsCalendarHomeSync:(bool)arg1 ;
-(id)propertyValue;
-(bool)supportsTimeRangeFilter;
-(bool)supportsTodoTimeRangeFilter;
-(bool)supportsTimeRangeFilterOnInbox;
-(id)supportedCalendarComponentSets;
-(bool)supportsCalendarHomeSync;
-(bool)supportsTimeRangeFilterWithoutEndDate;
-(bool)supportsAutoSchedule;
-(bool)supportsPrivateComments;
-(bool)supportsSharing;
-(bool)supportsExtendedCalendarQuery;
-(bool)supportsRequestCompression;
-(void)setSupportedCalendarComponentSets:(id)arg1 ;
-(bool)supportsSharingNoScheduling;
@end

