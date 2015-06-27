/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <Weather/WeatherXMLHTTPRequest.h>

@protocol WeatherUpdaterDelegate;
@class NSMutableArray;

@interface WeatherUpdater : WeatherXMLHTTPRequest {

	NSMutableArray* _updatingCities;
	NSMutableArray* _pendingCities;
	id<WeatherUpdaterDelegate> _delegate;
	/*^block*/id _weatherCompletionUpdaterHandler;

}

@property (nonatomic,copy) id weatherCompletionUpdaterHandler;              //@synthesize weatherCompletionUpdaterHandler=_weatherCompletionUpdaterHandler - In the implementation block
-(void)failWithError:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)aggregateDictionaryDomain;
-(char)isUpdatingCity:(id)arg1 ;
-(void)_updateNextPendingCity;
-(void)handleCompletionForCity:(id)arg1 withUpdateDetail:(unsigned)arg2 ;
-(void)_failed:(unsigned)arg1 ;
-(void)processDocument:(xmlDoc*)arg1 ;
-(void)didProcessDocument;
-(id)weatherCompletionUpdaterHandler;
-(void)parsedResultCity:(id)arg1 ;
-(void)handleNilCity;
-(void)failCity:(id)arg1 ;
-(void)runAndClearWeatherCompletionWithDetail:(unsigned)arg1 ;
-(char)isDataValid:(id)arg1 ;
-(void)addUpdatingCity:(id)arg1 ;
-(void)removeAllUpdatingCities;
-(void)addCityToPendingQueue:(id)arg1 ;
-(void)loadRequestURL:(id)arg1 parameters:(id)arg2 ;
-(void)setWeatherCompletionUpdaterHandler:(id)arg1 ;
@end
