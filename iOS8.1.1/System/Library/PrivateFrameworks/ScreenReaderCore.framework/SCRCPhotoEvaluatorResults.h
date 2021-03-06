/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SCRCPhotoEvaluatorResult, SCRCPhotoEvaluatorResultPeople;

@interface SCRCPhotoEvaluatorResults : NSObject {

	SCRCPhotoEvaluatorResult* _blurResult;
	SCRCPhotoEvaluatorResult* _colorResult;
	SCRCPhotoEvaluatorResultPeople* _peopleResult;
	SCRCPhotoEvaluatorResult* _luminanceResult;

}

@property (nonatomic,readonly) SCRCPhotoEvaluatorResult * blurResult;                      //@synthesize blurResult=_blurResult - In the implementation block
@property (nonatomic,readonly) SCRCPhotoEvaluatorResult * colorResult;                     //@synthesize colorResult=_colorResult - In the implementation block
@property (nonatomic,readonly) SCRCPhotoEvaluatorResultPeople * peopleResult;              //@synthesize peopleResult=_peopleResult - In the implementation block
@property (nonatomic,readonly) SCRCPhotoEvaluatorResult * luminanceResult;                 //@synthesize luminanceResult=_luminanceResult - In the implementation block
-(void)dealloc;
-(id)initWithBlurResult:(id)arg1 colorResult:(id)arg2 peopleResult:(id)arg3 luminanceResult:(id)arg4 ;
-(SCRCPhotoEvaluatorResult *)colorResult;
-(SCRCPhotoEvaluatorResultPeople *)peopleResult;
-(SCRCPhotoEvaluatorResult *)blurResult;
-(SCRCPhotoEvaluatorResult *)luminanceResult;
@end

