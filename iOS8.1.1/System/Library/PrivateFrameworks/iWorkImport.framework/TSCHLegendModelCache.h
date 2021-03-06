/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:30 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCHLegendCellMetrics, NSArray, TSWPParagraphStyle, TSDStroke, TSDShadow, TSCHLegendViewCache;

@interface TSCHLegendModelCache : NSObject {

	TSCHLegendCellMetrics* mMetrics;
	BOOL mLegendOn;
	NSArray* mCells;
	unsigned long long mCellCount;
	TSWPParagraphStyle* mParagraphStyle;
	TSDStroke* mStroke;
	TSDShadow* mShadow;
	id mFill;
	double mOpacity;
	double mHorizontalCellSpacing;
	double mVerticalCellSpacing;
	CGSize mLargestCellSize;
	double mEffectiveStrokeWidth;
	BOOL mReverseSingleColumnLegendOrder;
	double mLastLegendWidth;
	TSCHLegendViewCache* mLastLegendViewCache;
	double mSymbolGap;

}

@property (readonly) BOOL legendOn; 
@property (readonly) unsigned long long cellCount; 
@property (readonly) NSArray * cells; 
@property (readonly) TSWPParagraphStyle * paragraphStyle; 
@property (readonly) TSDStroke * stroke; 
@property (readonly) id fill; 
@property (readonly) TSDShadow * shadow; 
@property (readonly) double opacity; 
@property (readonly) double horizontalCellSpacing; 
@property (readonly) double verticalCellSpacing; 
@property (readonly) double symbolGap; 
@property (readonly) CGSize largestCellSize; 
@property (readonly) double effectiveStrokeWidth; 
@property (readonly) BOOL reverseSingleColumnLegendOrder; 
-(TSWPParagraphStyle *)paragraphStyle;
-(BOOL)reverseSingleColumnLegendOrder;
-(BOOL)legendOn;
-(double)effectiveStrokeWidth;
-(id)cellForSeriesIndex:(unsigned long long)arg1 cellType:(int)arg2 ;
-(id)viewCacheForWidth:(double)arg1 ;
-(double)symbolGap;
-(double)horizontalCellSpacing;
-(id)initWithChartModel:(id)arg1 textEditingSelectionPair:(id)arg2 ;
-(double)verticalCellSpacing;
-(CGSize)largestCellSize;
-(void)dealloc;
-(id)fill;
-(TSDStroke *)stroke;
-(double)opacity;
-(TSDShadow *)shadow;
-(unsigned long long)cellCount;
-(NSArray *)cells;
@end

