/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:56:15 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKMultiPoint.h>
#import <MapKit/MKOverlay.h>

@class NSArray, NSString;

@interface MKPolygon : MKMultiPoint <MKOverlay> {

	SCD_Struct_MK1 _centroid;
	NSArray* _interiorPolygons;
	char _isDefinitelyConvex;

}

@property (readonly) NSArray * interiorPolygons;                            //@synthesize interiorPolygons=_interiorPolygons - In the implementation block
@property (assign,nonatomic) char _isDefinitelyConvex;                      //@synthesize isDefinitelyConvex=_isDefinitelyConvex - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_MK1 coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) SCD_Struct_MK2 boundingMapRect; 
+(id)polygonWithPoints:(SCD_Struct_MK1*)arg1 count:(unsigned)arg2 interiorPolygons:(id)arg3 ;
+(id)polygonWithCoordinates:(SCD_Struct_MK1*)arg1 count:(unsigned)arg2 interiorPolygons:(id)arg3 ;
+(id)polygonWithPoints:(SCD_Struct_MK1*)arg1 count:(unsigned)arg2 ;
+(id)polygonWithCoordinates:(SCD_Struct_MK1*)arg1 count:(unsigned)arg2 ;
+(id)polygonEnclosingMapPoints:(SCD_Struct_MK1*)arg1 count:(unsigned)arg2 ;
+(id)_polygonWithMapRect:(SCD_Struct_MK2)arg1 ;
-(SCD_Struct_MK2)boundingMapRect;
-(char)intersectsMapRect:(SCD_Struct_MK2)arg1 ;
-(NSArray *)interiorPolygons;
-(void)set_isDefinitelyConvex:(char)arg1 ;
-(char)_isDefinitelyConvex;
-(SCD_Struct_MK1)coordinate;
@end
