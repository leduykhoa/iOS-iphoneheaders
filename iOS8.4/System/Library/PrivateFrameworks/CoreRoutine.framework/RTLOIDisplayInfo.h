/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOMapItem;
@class NSString, NSDate;

@interface RTLOIDisplayInfo : NSObject {

	int _style;
	long long _type;
	long long _modeOfTransportation;
	id<GEOMapItem> _geoMapItem;
	NSString* _unknownTypeName;
	double _eta;
	NSDate* _arrival;
	NSDate* _deparature;

}

@property (nonatomic,readonly) int style;                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long modeOfTransportation;              //@synthesize modeOfTransportation=_modeOfTransportation - In the implementation block
@property (nonatomic,readonly) id<GEOMapItem> geoMapItem;                   //@synthesize geoMapItem=_geoMapItem - In the implementation block
@property (nonatomic,readonly) NSString * unknownTypeName;                  //@synthesize unknownTypeName=_unknownTypeName - In the implementation block
@property (nonatomic,readonly) double eta;                                  //@synthesize eta=_eta - In the implementation block
@property (nonatomic,readonly) NSDate * arrival;                            //@synthesize arrival=_arrival - In the implementation block
@property (nonatomic,readonly) NSDate * deparature;                         //@synthesize deparature=_deparature - In the implementation block
-(id)description;
-(long long)type;
-(int)style;
-(id)localizedDescription;
-(long long)modeOfTransportation;
-(id)initWithStyle:(int)arg1 type:(long long)arg2 geoMapItem:(id)arg3 unknownTypeName:(id)arg4 eta:(double)arg5 arrival:(id)arg6 departure:(id)arg7 modeOfTransportation:(long long)arg8 ;
-(BOOL)isEquivalentToDisplayInfo:(id)arg1 ;
-(NSString *)unknownTypeName;
-(NSDate *)arrival;
-(NSDate *)deparature;
-(id)mapsURL;
-(id<GEOMapItem>)geoMapItem;
-(double)eta;
@end
