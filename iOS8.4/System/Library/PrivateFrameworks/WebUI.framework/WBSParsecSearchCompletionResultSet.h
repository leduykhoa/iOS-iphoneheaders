/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface WBSParsecSearchCompletionResultSet : NSObject {

	long long _status;
	NSString* _errorCodeString;
	NSString* _completionString;
	NSString* _prefix;
	NSString* _feedbackQueryIdentifier;
	NSArray* _results;
	double _maxAge;
	double _completionScore;

}

@property (nonatomic,readonly) long long status;                                //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSString * errorCodeString;                      //@synthesize errorCodeString=_errorCodeString - In the implementation block
@property (nonatomic,readonly) NSString * completionString;                     //@synthesize completionString=_completionString - In the implementation block
@property (nonatomic,readonly) NSString * prefix;                               //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,readonly) NSString * feedbackQueryIdentifier;              //@synthesize feedbackQueryIdentifier=_feedbackQueryIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * results;                               //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) double maxAge;                                   //@synthesize maxAge=_maxAge - In the implementation block
@property (nonatomic,readonly) double completionScore;                          //@synthesize completionScore=_completionScore - In the implementation block
+(id)resultSetWithDictionary:(id)arg1 cache:(id)arg2 ;
-(NSArray *)results;
-(long long)status;
-(double)maxAge;
-(NSString *)prefix;
-(id)_initWithDictionary:(id)arg1 cache:(id)arg2 ;
-(NSString *)completionString;
-(NSString *)errorCodeString;
-(NSString *)feedbackQueryIdentifier;
-(double)completionScore;
@end

