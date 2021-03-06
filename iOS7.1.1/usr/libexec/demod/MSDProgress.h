/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/demod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MSDProgress : NSObject {

	int _stage;
	int _percent;

}

@property (assign) int stage;                                            //@synthesize stage=_stage - In the implementation block
@property (assign) int percent;                                          //@synthesize percent=_percent - In the implementation block
@property (nonatomic,readonly) NSString * stageDescription; 
+(id)progressWithStage:(int)arg1 percent:(int)arg2 ;
+(id)progressWithStage:(int)arg1 ;
-(id)stageDescription;
-(int)stage;
-(void)setStage:(int)arg1 ;
-(int)percent;
-(void)setPercent:(int)arg1 ;
@end

