/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNRecordingEvent.h>

@interface KNRecordingLaserEvent : KNRecordingEvent {

	CGPoint mUnitLocation;

}

@property (nonatomic,readonly) CGPoint unitLocation; 
-(void)saveToArchive:(RecordingEventArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithStartTime:(double)arg1 ;
-(id)initWithStartTime:(double)arg1 unitLocation:(CGPoint)arg2 ;
-(CGPoint)unitLocation;
-(id)initWithContext:(id)arg1 archive:(const RecordingEventArchive*)arg2 unarchiver:(id)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
