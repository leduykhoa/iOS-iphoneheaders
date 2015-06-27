/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:56:25 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class MKPolygon;

@interface MKPolygonRenderer : MKOverlayPathRenderer

@property (nonatomic,readonly) MKPolygon * polygon; 
-(void)fillPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithPolygon:(id)arg1 ;
-(MKPolygon *)polygon;
-(void)createPath;
@end
