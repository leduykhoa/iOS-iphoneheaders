/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:43 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GEOEquatorialCelestialBodyData : NSObject {

	double _rightAscension;
	double _declination;

}

@property (nonatomic,readonly) double rightAscension;              //@synthesize rightAscension=_rightAscension - In the implementation block
@property (nonatomic,readonly) double declination;                 //@synthesize declination=_declination - In the implementation block
-(id)initWithDate:(id)arg1 body:(long long)arg2 ;
-(double)rightAscension;
-(double)declination;
@end

