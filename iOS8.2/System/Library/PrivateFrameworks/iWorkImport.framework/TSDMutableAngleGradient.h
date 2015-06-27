/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:12 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSDAngleGradient.h>
#import <iWorkImport/TSDGradientStopContainer.h>

@class NSString, NSArray, TSUColor;

@interface TSDMutableAngleGradient : TSDAngleGradient <TSDGradientStopContainer>

@property (assign,nonatomic) float gradientAngleInDegrees; 
@property (assign,nonatomic) float gradientAngle; 
@property (assign,nonatomic) unsigned gradientType; 
@property (assign,nonatomic) float opacity; 
@property (assign,nonatomic) char isAdvancedGradient; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * gradientStops; 
@property (nonatomic,retain) TSUColor * firstColor; 
@property (nonatomic,retain) TSUColor * lastColor; 
-(void)setColorOfStopAtIndex:(unsigned)arg1 toColor:(id)arg2 ;
-(void)insertGradientStop:(id)arg1 ;
-(id)insertStopAtFraction:(float)arg1 ;
-(void)swapStopAtIndex:(unsigned)arg1 withStopAtIndex:(unsigned)arg2 ;
-(id)insertStopAtFraction:(float)arg1 withColor:(id)arg2 ;
-(void)removeStop:(id)arg1 ;
-(id)removeStopAtIndex:(unsigned)arg1 ;
-(void)reverseStopOrder;
-(void)evenlyDistributeStops;
-(void)moveStopAtIndex:(unsigned)arg1 toFraction:(float)arg2 ;
-(void)setInflectionOfStopAtIndex:(unsigned)arg1 toInflection:(float)arg2 ;
-(void)setGradientStops:(NSArray *)arg1 ;
-(void)setFirstColor:(TSUColor *)arg1 ;
-(void)setLastColor:(TSUColor *)arg1 ;
-(void)setGradientType:(unsigned)arg1 ;
-(void)setGradientAngleInDegrees:(float)arg1 ;
@end
