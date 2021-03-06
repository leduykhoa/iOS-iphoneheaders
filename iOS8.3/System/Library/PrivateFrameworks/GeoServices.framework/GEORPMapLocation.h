/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:26 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOLatLng, NSData, GEOPDViewportInfo;

@interface GEORPMapLocation : PBCodable <NSCopying> {

	GEOLatLng* _coordinate;
	NSData* _image;
	GEOPDViewportInfo* _viewportInfo;
	float _zoomLevel;
	SCD_Struct_GE5 _has;

}

@property (nonatomic,readonly) char hasImage; 
@property (nonatomic,retain) NSData * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) char hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate;                        //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) char hasZoomLevel; 
@property (assign,nonatomic) float zoomLevel;                               //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,readonly) char hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo;              //@synthesize viewportInfo=_viewportInfo - In the implementation block
-(void)dealloc;
-(void)setImage:(NSData *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)image;
-(id)dictionaryRepresentation;
-(char)hasCoordinate;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(char)hasViewportInfo;
-(char)hasImage;
-(void)setHasZoomLevel:(char)arg1 ;
-(char)hasZoomLevel;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setZoomLevel:(float)arg1 ;
-(float)zoomLevel;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOLatLng *)coordinate;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
@end

