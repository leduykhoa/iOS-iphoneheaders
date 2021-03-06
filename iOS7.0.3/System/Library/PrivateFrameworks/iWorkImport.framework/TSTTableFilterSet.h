/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSPCopying.h>

@class NSArray;

@interface TSTTableFilterSet : TSPObject <TSPCopying> {

	int mType;
	BOOL mIsEnabled;
	NSArray* mRules;
	BOOL mNeedsFormulaRewriteForImport;
	vector<unsigned int, std::__1::allocator<unsigned int> >* mFilterOffsets;
	vector<bool, std::__1::allocator<bool> >* mFilterEnabled;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)saveToArchive:(FilterSetArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const FilterSetArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithFilterRules:(id)arg1 type:(int)arg2 context:(id)arg3 ;
-(id)addRules:(id)arg1 inFilter:(unsigned)arg2 ;
-(id)addRules:(id)arg1 atRuleIndices:(id)arg2 inFilter:(unsigned)arg3 isNew:(BOOL)arg4 ;
-(id)removeRulesWithIndices:(id)arg1 inFilter:(unsigned)arg2 ;
-(id)removeRules:(id)arg1 ;
-(id)replaceRule:(id)arg1 atRuleIndex:(unsigned)arg2 inFilter:(unsigned)arg3 ;
-(BOOL)needsFormulaRewriteForImport;
-(void)setNeedsFormulaRewriteForImport:(BOOL)arg1 ;
-(id)ruleAtAbsoluteIndex:(unsigned)arg1 ;
-(void)enableRuleAtIndex:(unsigned)arg1 inFilterIndex:(unsigned)arg2 ;
-(void)disableRuleAtIndex:(unsigned)arg1 inFilterIndex:(unsigned)arg2 ;
-(void)enableFilterAtIndex:(unsigned)arg1 ;
-(void)disableFilterAtIndex:(unsigned)arg1 ;
-(void)setFilterSetType:(int)arg1 ;
-(void)setRulesAtAbsoluteIndices:(id)arg1 enabled:(BOOL)arg2 ;
-(BOOL)rowIsShown:(unsigned short)arg1 withHiddenStateFormulaOwner:(id)arg2 withCalculationEngine:(id)arg3 ;
-(BOOL)p_thresholdComparisonMatchesFilter:(int)arg1 withPredicateType:(int)arg2 ;
-(unsigned)numberOfRulesInFilter:(unsigned)arg1 ;
-(id)filterAtIndex:(unsigned)arg1 inTable:(id)arg2 ;
-(void)enumerateFiltersForColumn:(unsigned char)arg1 withTable:(id)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(void)enumerateRulesInFilterIndex:(unsigned)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(id)ruleInFilter:(unsigned)arg1 atIndex:(unsigned)arg2 ;
-(int)filterSetType;
-(unsigned)newFilterIndex;
-(void)enumerateFiltersInTable:(id)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)enumerateFilterIndicesInTable:(id)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(id)filterIndicesForColumn:(unsigned char)arg1 inTable:(id)arg2 ;
-(unsigned)firstFilterIndexForColumn:(unsigned char)arg1 inTable:(id)arg2 ;
-(BOOL)isFilterEnabledInColumn:(unsigned char)arg1 withTable:(id)arg2 ;
-(BOOL)isFilterRuleEnabledInColumn:(unsigned char)arg1 withTable:(id)arg2 ;
-(unsigned)ruleIndexInFilter:(unsigned)arg1 matchingCell:(id)arg2 ;
-(id)absoluteRuleIndicesForColumn:(unsigned char)arg1 inTable:(id)arg2 ;
-(BOOL)isRuleEnabledAtIndex:(unsigned)arg1 inFilterIndex:(unsigned)arg2 ;
-(BOOL)isFilterEnabledAtIndex:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)isEnabled;
-(void)setIsEnabled:(BOOL)arg1 ;
-(id).cxx_construct;
-(unsigned)ruleCount;
-(unsigned)filterCount;
-(void).cxx_destruct;
@end

