/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@interface RCEntityRevision : NSManagedObject

@property (nonatomic,readonly) int revisionType; 
@property (nonatomic,readonly) long long revisionID; 
@property (nonatomic,readonly) long long recordingID; 
-(long long)recordingID;
-(void)setRecordingID:(long long)arg1 ;
-(void)setRevisionID:(long long)arg1 ;
-(void)setRevisionType:(int)arg1 ;
-(int)revisionType;
-(long long)revisionID;
@end

