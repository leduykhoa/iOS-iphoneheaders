/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/WeatherUpdater.h>

@class CLGeocoder, City;

@interface LocationUpdater : WeatherUpdater {

	BOOL _isGeoCoding;
	CLGeocoder* _geoCoder;
	/*^block*/ id _localWeatherHandler;
	City* _currentCity;

}

@property (nonatomic,retain) City * currentCity;              //@synthesize currentCity=_currentCity - In the implementation block
+(id)sharedLocationUpdater;
+(void)clearSharedLocationUpdater;
-(void)dealloc;
-(void)cancel;
-(id)aggregateDictionaryDomain;
-(void)didProcessDocument;
-(void)handleCompletionForCity:(id)arg1 withUpdateDetail:(unsigned)arg2 ;
-(void)failCity:(id)arg1 ;
-(void)_failed:(unsigned)arg1 ;
-(void)handleNilCity;
-(BOOL)isDataValid:(id)arg1 ;
-(void)parsedResultCity:(id)arg1 ;
-(void)updateWeatherForLocation:(id)arg1 city:(id)arg2 withCompletionHandler:(/*^block*/ id)arg3 ;
-(void)updateWeatherForLocation:(id)arg1 city:(id)arg2 ;
-(void)enableProgressIndicator:(BOOL)arg1 ;
-(void)setCurrentCity:(id)arg1 ;
-(id)currentCity;
@end

