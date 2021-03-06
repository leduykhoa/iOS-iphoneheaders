/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIFloatArray : NSObject {

	int _count;
	int _gapCount;
	int* _gaps;
	float _gapValue;
	float _minValue;
	SCD_Union_UI22* _values;
	struct {
		unsigned valueIsSingleton : 1;
		unsigned hideGaps : 1;
		unsigned unused : 30;
	}  _floatArrayFlags;

}
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)_setupValuesWithCount:(int)arg1 singleValue:(float)arg2 isRefresh:(bool)arg3 ;
-(bool)_setupValuesWithCount:(int)arg1 dataProvider:(id)arg2 isRefresh:(bool)arg3 ;
-(bool)_setupGapIndexesWithCount:(int)arg1 dataProvider:(id)arg2 isRefresh:(bool)arg3 ;
-(bool)_setupWithDataProvider:(id)arg1 valueIsSingleton:(bool)arg2 singletonValue:(float)arg3 isRefresh:(bool)arg4 ;
-(SCD_Struct_UI23)_indexesViaSingletonFromOffset:(float)arg1 toOffset:(float)arg2 ;
-(SCD_Struct_UI23)_indexesViaArrayFromOffset:(float)arg1 toOffset:(float)arg2 ;
-(bool)refreshWithDataProvider:(id)arg1 singleValue:(float)arg2 ;
-(bool)refreshWithDataProvider:(id)arg1 ;
-(float)singleValue;
-(float)minValue;
-(int)valueCount;
-(float)sum;
-(SCD_Union_UI22)offsetsForIndex:(int)arg1 ;
-(SCD_Union_UI22)offsetsForGapIndex:(int)arg1 ;
-(SCD_Struct_UI23)indexesFromOffset:(float)arg1 toOffset:(float)arg2 ;
-(int)indexForGapIndex:(int)arg1 ;
-(void)hideGaps:(bool)arg1 ;
@end

