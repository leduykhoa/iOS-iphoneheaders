/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <backboardd/backboardd-Structs.h>
@interface BKAccelerometerClient : NSObject {

	CFMachPortRef _cfMachPort;
	unsigned _port;
	double _updateInterval;
	double _lastUpdateTime;
	float _xThreshold;
	float _yThreshold;
	float _zThreshold;

}

@property (assign,nonatomic) unsigned port;                         //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) CFMachPortRef CFMachPort;              //@synthesize cfMachPort=_cfMachPort - In the implementation block
@property (assign,nonatomic) double updateInterval;                 //@synthesize updateInterval=_updateInterval - In the implementation block
@property (assign,nonatomic) double lastUpdateTime;                 //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
@property (assign,nonatomic) float xThreshold;                      //@synthesize xThreshold=_xThreshold - In the implementation block
@property (assign,nonatomic) float yThreshold;                      //@synthesize yThreshold=_yThreshold - In the implementation block
@property (assign,nonatomic) float zThreshold;                      //@synthesize zThreshold=_zThreshold - In the implementation block
-(BOOL)passesThresholdForX:(float)arg1 y:(float)arg2 z:(float)arg3 ;
-(void)setCFMachPort:(CFMachPortRef)arg1 ;
-(CFMachPortRef)CFMachPort;
-(void)setPort:(unsigned)arg1 ;
-(double)lastUpdateTime;
-(void)setLastUpdateTime:(double)arg1 ;
-(void)dealloc;
-(double)updateInterval;
-(void)setUpdateInterval:(double)arg1 ;
-(void)setXThreshold:(float)arg1 ;
-(void)setYThreshold:(float)arg1 ;
-(void)setZThreshold:(float)arg1 ;
-(float)xThreshold;
-(float)yThreshold;
-(float)zThreshold;
-(unsigned)port;
@end

