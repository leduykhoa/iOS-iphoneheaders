/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:37 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@interface _MKJunctionElement : NSObject {

	CGPoint _leftBasePoint;
	CGPoint _rightBasePoint;
	float _angle;

}

@property (assign) CGPoint leftBasePoint;               //@synthesize leftBasePoint=_leftBasePoint - In the implementation block
@property (assign) CGPoint rightBasePoint;              //@synthesize rightBasePoint=_rightBasePoint - In the implementation block
@property (assign) float angle;                         //@synthesize angle=_angle - In the implementation block
-(CGPoint)leftBasePoint;
-(CGPoint)rightBasePoint;
-(CGPoint)leftEdgePointAtDistanceFromBase:(float)arg1 ;
-(CGPoint)rightEdgePointAtDistanceFromBase:(float)arg1 ;
-(void)setLeftBasePoint:(CGPoint)arg1 ;
-(void)setRightBasePoint:(CGPoint)arg1 ;
-(void)setAngle:(float)arg1 ;
-(float)angle;
@end

