/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:02:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKMultiSectionFeatureAccessibilityElement.h>

@class NSMutableArray, NSArray, NSString;

@interface VKRoadFeatureAccessibilityElement : VKMultiSectionFeatureAccessibilityElement {

	NSMutableArray* _expandedPaths;
	NSMutableArray* _gutterPaths;
	NSMutableArray* _originalPaths;
	BOOL _lastHitTestNearBorder;
	NSArray* _allPoints;
	NSString* _roadDirection;
	int _roadType;
	NSArray* _intersectingRoads;
	int _travelDirection;

}

@property (assign) int roadType;                                       //@synthesize roadType=_roadType - In the implementation block
@property (nonatomic,retain) NSArray * intersectingRoads;              //@synthesize intersectingRoads=_intersectingRoads - In the implementation block
@property (nonatomic,readonly) NSArray * originalPaths;                //@synthesize originalPaths=_originalPaths - In the implementation block
@property (assign,nonatomic) int travelDirection;                      //@synthesize travelDirection=_travelDirection - In the implementation block
@property (nonatomic,retain) NSString * roadDirection;                 //@synthesize roadDirection=_roadDirection - In the implementation block
-(void)setRoadType:(int)arg1 ;
-(int)roadType;
-(id)intersectingRoads;
-(void)setIntersectingRoads:(id)arg1 ;
-(id)originalPaths;
-(id)_roadLength;
-(id)_axRoadSuffix;
-(void)_mergePaths;
-(id)roadDirection;
-(BOOL)pointInside:(CGPoint)arg1 ;
-(id)_axRoadPrefix;
-(id)trueLabel;
-(id)accessibilityPaths;
-(id)detailedFeatureElementInfoAtPoint:(CGPoint)arg1 ;
-(int)_accessibilityMapRoadType;
-(id)_roadDirectionDescription;
-(void)_combineRoadPaths:(id)arg1 ;
-(id)_nearestIntersectionForPoint:(CGPoint)arg1 ;
-(id)_nearestPOIsForPoint:(CGPoint)arg1 ;
-(void)setRoadDirection:(id)arg1 ;
-(void)dealloc;
-(id)accessibilityLabel;
-(void)_updatePath;
-(CGRect)accessibilityFrame;
-(int)travelDirection;
-(void)setTravelDirection:(int)arg1 ;
-(id)_accessibilityUpcomingRoadForPoint:(CGPoint)arg1 forAngle:(float)arg2 ;
-(float)_accessibilityDistanceFromEndOfRoad:(CGPoint)arg1 forAngle:(float)arg2 ;
-(BOOL)_accessibilityRoadContainsTrackingPoint:(CGPoint)arg1 ;
-(int)_accessibilityMapFeatureType;
-(BOOL)_accessibilityLastHitTestNearBorder;
@end

