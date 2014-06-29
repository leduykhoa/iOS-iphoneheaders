/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ISStopwatch : NSObject {

	NSString* label;
	NSString* comment;
	double startTime;
	double endTime;

}

@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * comment; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double endTime; 
+(void)dumpBuffer:(id)arg1 ;
+(void)eventWithLabel:(id)arg1 comment:(id)arg2 ;
+(id)illegalLabelCharacterSet;
+(void)eventWithLabel:(id)arg1 ;
+(id)stopwatchWithLabel:(id)arg1 ;
+(void)initialize;
-(id)descriptionAsData;
-(void)stopWithComment:(id)arg1 ;
-(void)setComment:(id)arg1 ;
-(id)initWithLabel:(id)arg1 ;
-(id)description;
-(void)setStartTime:(double)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(void).cxx_destruct;
-(double)startTime;
-(void)stop;
-(void)setEndTime:(double)arg1 ;
-(id)comment;
-(double)endTime;
@end
