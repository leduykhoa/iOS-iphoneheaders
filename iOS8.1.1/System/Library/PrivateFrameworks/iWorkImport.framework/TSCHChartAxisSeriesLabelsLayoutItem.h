/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:29 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartCategoryAxisLabelsLayoutItem.h>

@interface TSCHChartAxisSeriesLabelsLayoutItem : TSCHChartCategoryAxisLabelsLayoutItem
-(double)unitSpaceValueForAxis:(id)arg1 index:(unsigned long long)arg2 ;
-(unsigned long long)numberOfLabelsForAxis:(id)arg1 ;
-(unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)arg1 axis:(id)arg2 ;
-(id)labelStringForAxis:(id)arg1 index:(unsigned long long)arg2 ;
-(CGSize)calcMinSize;
-(BOOL)showLabelsForAxis:(id)arg1 ;
-(unsigned long long)strideInLayoutArea:(CGRect)arg1 ;
-(id)selectionPathLabelType;
-(id)initWithParent:(id)arg1 ;
@end
