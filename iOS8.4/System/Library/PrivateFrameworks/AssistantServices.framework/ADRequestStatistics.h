/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSNumber, NSMutableArray, NSString, NSArray, NSError;

@interface ADRequestStatistics : NSObject {

	NSNumber* _baselineTime;
	NSMutableArray* _addViewsReceivedTimes;
	NSNumber* _launchAppTime;
	NSNumber* _requestCompletedTime;
	NSMutableArray* _partialRecognitionTimes;
	NSNumber* _speechRecognizedTime;
	NSNumber* _startedRecordingTime;
	NSNumber* _activationEventTime;
	NSNumber* _expectedActivationEventTime;
	long long _activationEvent;
	NSNumber* _usefulUserResultTime;
	NSString* _connectionPolicyId;
	NSString* _connectionRouteId;
	double _connectionDelay;
	NSNumber* _recordingWillStartTime;
	BOOL _usedBluetooth;
	BOOL _aggressivelyPrewarmed;
	NSArray* _enabledLogging;
	NSString* _requestId;
	BOOL _isFailure;
	NSError* _failureError;
	BOOL _musicWasDetected;
	BOOL _endpointWasExtendedDueToMusicClassifier;
	BOOL _partialResultAcousticIdTimerScheduled;
	BOOL _partialResultAcousticIdTimerFired;
	NSNumber* _useNonBlockingHaptics;
	BOOL _usedManualEndpointing;
	NSNumber* _homeButtonUpFromBeep;
	double _processLaunchTime;

}

@property (nonatomic,copy) NSNumber * recordingWillStartTime;              //@synthesize recordingWillStartTime=_recordingWillStartTime - In the implementation block
@property (assign,nonatomic) BOOL usedBluetooth;                           //@synthesize usedBluetooth=_usedBluetooth - In the implementation block
@property (assign,nonatomic) BOOL aggressivelyPrewarmed;                   //@synthesize aggressivelyPrewarmed=_aggressivelyPrewarmed - In the implementation block
@property (nonatomic,copy) NSArray * enabledLogging;                       //@synthesize enabledLogging=_enabledLogging - In the implementation block
@property (nonatomic,copy) NSString * requestId;                           //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,retain) NSNumber * homeButtonUpFromBeep;              //@synthesize homeButtonUpFromBeep=_homeButtonUpFromBeep - In the implementation block
@property (assign,nonatomic) BOOL usedManualEndpointing;                   //@synthesize usedManualEndpointing=_usedManualEndpointing - In the implementation block
@property (assign,nonatomic) BOOL isFailure;                               //@synthesize isFailure=_isFailure - In the implementation block
@property (nonatomic,copy) NSError * failureError;                         //@synthesize failureError=_failureError - In the implementation block
@property (assign,nonatomic) double processLaunchTime;                     //@synthesize processLaunchTime=_processLaunchTime - In the implementation block
+(id)requestIndifferentMetrics;
-(double)processLaunchTime;
-(void)markBaselineTime;
-(void)markAddViewsReceived;
-(void)markLaunchApp;
-(void)markSpeechRecognized;
-(void)markPartialSpeechRecognition;
-(void)setPartialResultAcousticIdTimerScheduled;
-(void)setPartialResultAcousticIdTimerFired;
-(void)markRequestCompleted;
-(id)requestDuration;
-(BOOL)hasValidTimingsForCompletedRequest;
-(void)setConnectionPolicyId:(id)arg1 routeId:(id)arg2 connectionDelay:(double)arg3 ;
-(void)setRecordingWillStartTime:(NSNumber *)arg1 ;
-(void)markStartedRecording;
-(void)setUsedBluetooth:(BOOL)arg1 ;
-(void)setMusicWasDetected;
-(void)setEndpointWasExtendedDueToMusicClassifier;
-(BOOL)hasSpeechRecognized;
-(void)markUsefulUserFacingResultPresentationTimestamp:(double)arg1 ;
-(void)setIsFailure:(BOOL)arg1 ;
-(void)setFailureError:(NSError *)arg1 ;
-(void)setValuesForSpeechRequestOptions:(id)arg1 ;
-(void)setUsedManualEndpointing:(BOOL)arg1 ;
-(void)setEnabledLogging:(NSArray *)arg1 ;
-(void)setActivationEventTime:(double)arg1 expectedActivationEventTime:(double)arg2 forEvent:(long long)arg3 ;
-(double)_systemUptime;
-(NSNumber *)recordingWillStartTime;
-(BOOL)usedBluetooth;
-(BOOL)aggressivelyPrewarmed;
-(void)setAggressivelyPrewarmed:(BOOL)arg1 ;
-(NSArray *)enabledLogging;
-(BOOL)usedManualEndpointing;
-(BOOL)isFailure;
-(void)setProcessLaunchTime:(double)arg1 ;
-(NSError *)failureError;
-(id)init;
-(void)reset;
-(id)metrics;
-(NSNumber *)homeButtonUpFromBeep;
-(void)setHomeButtonUpFromBeep:(NSNumber *)arg1 ;
-(NSString *)requestId;
-(void)setRequestId:(NSString *)arg1 ;
@end
