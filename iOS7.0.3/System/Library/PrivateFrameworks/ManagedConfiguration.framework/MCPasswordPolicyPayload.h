/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSNumber;

@interface MCPasswordPolicyPayload : MCPayload {

	NSNumber* _isSimplePasscodeAllowed;
	NSNumber* _isPasscodeRequired;
	NSNumber* _isAlphanumericPasscodeRequired;
	NSNumber* _isManualFetchingWhenRoaming;
	NSNumber* _minLength;
	NSNumber* _maxFailedAttempts;
	NSNumber* _maxGracePeriodMinutes;
	NSNumber* _maxInactivityMinutes;
	NSNumber* _maxPasscodeAgeDays;
	NSNumber* _passcodeHistoryCount;
	NSNumber* _minComplexCharacters;

}

@property (nonatomic,readonly) NSNumber * isSimplePasscodeAllowed;                     //@synthesize isSimplePasscodeAllowed=_isSimplePasscodeAllowed - In the implementation block
@property (nonatomic,readonly) NSNumber * isPasscodeRequired;                          //@synthesize isPasscodeRequired=_isPasscodeRequired - In the implementation block
@property (nonatomic,readonly) NSNumber * isAlphanumericPasscodeRequired;              //@synthesize isAlphanumericPasscodeRequired=_isAlphanumericPasscodeRequired - In the implementation block
@property (nonatomic,readonly) NSNumber * isManualFetchingWhenRoaming;                 //@synthesize isManualFetchingWhenRoaming=_isManualFetchingWhenRoaming - In the implementation block
@property (nonatomic,readonly) NSNumber * minLength;                                   //@synthesize minLength=_minLength - In the implementation block
@property (nonatomic,readonly) NSNumber * maxFailedAttempts;                           //@synthesize maxFailedAttempts=_maxFailedAttempts - In the implementation block
@property (nonatomic,readonly) NSNumber * maxGracePeriodMinutes;                       //@synthesize maxGracePeriodMinutes=_maxGracePeriodMinutes - In the implementation block
@property (nonatomic,readonly) NSNumber * maxInactivityMinutes;                        //@synthesize maxInactivityMinutes=_maxInactivityMinutes - In the implementation block
@property (nonatomic,readonly) NSNumber * maxPasscodeAgeDays;                          //@synthesize maxPasscodeAgeDays=_maxPasscodeAgeDays - In the implementation block
@property (nonatomic,readonly) NSNumber * passcodeHistoryCount;                        //@synthesize passcodeHistoryCount=_passcodeHistoryCount - In the implementation block
@property (nonatomic,readonly) NSNumber * minComplexCharacters;                        //@synthesize minComplexCharacters=_minComplexCharacters - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)restrictions;
-(id)description;
-(id)title;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)minLength;
-(id)isSimplePasscodeAllowed;
-(id)isAlphanumericPasscodeRequired;
-(id)minComplexCharacters;
-(id)isPasscodeRequired;
-(id)maxFailedAttempts;
-(id)maxGracePeriodMinutes;
-(id)maxInactivityMinutes;
-(id)maxPasscodeAgeDays;
-(id)passcodeHistoryCount;
-(id)isManualFetchingWhenRoaming;
-(void).cxx_destruct;
@end

