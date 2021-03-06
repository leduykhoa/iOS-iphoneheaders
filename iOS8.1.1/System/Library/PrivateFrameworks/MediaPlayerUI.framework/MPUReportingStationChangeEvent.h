/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:30 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUReportingEvent.h>

@class MPUReportingRadioStationMetadata;

@interface MPUReportingStationChangeEvent : MPUReportingEvent {

	MPUReportingRadioStationMetadata* _oldStationMetadata;
	MPUReportingRadioStationMetadata* _currentStationMetadata;

}

@property (nonatomic,retain) MPUReportingRadioStationMetadata * oldStationMetadata;                  //@synthesize oldStationMetadata=_oldStationMetadata - In the implementation block
@property (nonatomic,retain) MPUReportingRadioStationMetadata * currentStationMetadata;              //@synthesize currentStationMetadata=_currentStationMetadata - In the implementation block
-(BOOL)isValid;
-(MPUReportingRadioStationMetadata *)currentStationMetadata;
-(MPUReportingRadioStationMetadata *)oldStationMetadata;
-(void)setOldStationMetadata:(MPUReportingRadioStationMetadata *)arg1 ;
-(void)setCurrentStationMetadata:(MPUReportingRadioStationMetadata *)arg1 ;
@end

