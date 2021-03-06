/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSArray.h>

@interface NSMutableArray : NSArray
+(id)nonRetainingArray;
+(id)nonRetainingArray;
+(id)nonRetainingArray;
+(id)copyNonRetainingArray;
+(id)arrayWithCapacity:(unsigned long long)arg1 ;
-(void)shuffle;
-(void)cr_removeObjectsStartingAtIndex:(unsigned long long)arg1 ;
-(void)cr_insertObject:(id)arg1 usingComparator:(/*^block*/ id)arg2 ;
-(void)cr_addObject:(id)arg1 orPlaceholder:(id)arg2 ;
-(void)cr_addNonNilObject:(id)arg1 ;
-(void)applySelector:(SEL)arg1 withObject:(id)arg2 ;
-(void)removeAllObjectsWithClass:(Class)arg1 ;
-(void)applySelector:(SEL)arg1 ;
-(unsigned long long)mf_removeObject:(id)arg1 usingSortFunction:(/*function pointer*/ void*)arg2 context:(void*)arg3 ;
-(unsigned long long)mf_removeObject:(id)arg1 usingComparator:(/*^block*/ id)arg2 ;
-(unsigned long long)mf_insertObject:(id)arg1 usingComparator:(/*^block*/ id)arg2 allowDuplicates:(bool)arg3 ;
-(unsigned long long)mf_insertObject:(id)arg1 usingSortFunction:(/*function pointer*/ void*)arg2 context:(void*)arg3 allowDuplicates:(bool)arg4 ;
-(bool)mf_addObjectIfAbsentAccordingToEquals:(id)arg1 ;
-(void)mf_moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(bool)mf_addObjectIfAbsent:(id)arg1 ;
-(void)removeAllObjectsWithClass:(Class)arg1 ;
-(id)_gkMutableOrderedSet;
-(void)MSRemoveOneObjectByPointerComparison:(id)arg1 ;
-(void)MSRemoveOneObject:(id)arg1 ;
-(unsigned long long)_mapkit_insertSortedAnnotationView:(id)arg1 reverse:(bool)arg2 ;
-(unsigned long long)_mapkit_insertSortedAnnotationView:(id)arg1 ;
-(void)_mapkit_sortUsingLatitudeAscending:(bool)arg1 ;
-(void)_mapkit_sortUsingLongitudeAscending:(bool)arg1 ;
-(void)_mapkit_sortUsingDistanceFromCoordinate:(SCD_Struct_NS17)arg1 ascending:(bool)arg2 ;
-(id)_mapkit_popLastObject;
-(void)_mapkit_sortUsingLatitude;
-(void)_mapkit_sortUsingLongitude;
-(void)_mapkit_sortUsingDistanceFromCoordinate:(SCD_Struct_NS17)arg1 ;
-(void)_mapkit_makeObjectsPerformSelector:(SEL)arg1 ;
-(void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)removeItemAtIndex:(unsigned long long)arg1 ;
-(void)_ui_enqueue:(id)arg1 ;
-(id)_ui_peek;
-(id)_ui_dequeue;
-(void)removeViewsFromSuperview;
-(void)_kb_reverse;
-(void)_addObjectsFromArray:(id)arg1 range:(NSRange)arg2 ;
-(void)axSafelyAddObject:(id)arg1 ;
-(void)ax_enqueueObject:(id)arg1 ;
-(id)ax_dequeueObject;
-(id)ax_lastEnqueuedObject;
-(id)ax_nextDequeuedObject;
-(void)__imRandomizeArray;
-(void)removeFirstObject;
-(void)setObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)filterUsingPredicate:(id)arg1 ;
-(void)sortUsingDescriptors:(id)arg1 ;
-(void)removeObjectsFromIndices:(unsigned long long*)arg1 numIndices:(unsigned long long)arg2 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(void)addObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)insertObjects:(const id*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)sortRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/ id)arg3 ;
-(void)setObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjects:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)replaceObject:(id)arg1 ;
-(void)_mutate;
-(void)insertObjectsFromArray:(id)arg1 range:(NSRange)arg2 atIndex:(unsigned long long)arg3 ;
-(void)insertObjectsFromOrderedSet:(id)arg1 range:(NSRange)arg2 atIndex:(unsigned long long)arg3 ;
-(void)insertObjectsFromSet:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 inArray:(id)arg2 range:(NSRange)arg3 ;
-(void)removeObjectsInRange:(NSRange)arg1 inOrderedSet:(id)arg2 range:(NSRange)arg3 ;
-(void)removeObjectsInRange:(NSRange)arg1 inSet:(id)arg2 ;
-(void)removeObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/ id)arg2 ;
-(void)addObjectsFromArray:(id)arg1 range:(NSRange)arg2 ;
-(void)addObjectsFromOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(void)addObjectsFromOrderedSet:(id)arg1 ;
-(void)addObjectsFromSet:(id)arg1 ;
-(void)insertObjectsFromArray:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertObjectsFromOrderedSet:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeFirstObject;
-(void)removeObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 inArray:(id)arg2 ;
-(void)removeObjectsInArray:(id)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 inOrderedSet:(id)arg2 ;
-(void)removeObjectsInOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInOrderedSet:(id)arg1 ;
-(void)removeObjectsInSet:(id)arg1 ;
-(void)removeObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/ id)arg3 ;
-(void)removeObjectsPassingTest:(/*^block*/ id)arg1 ;
-(void)replaceObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromArray:(id)arg2 range:(NSRange)arg3 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromArray:(id)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromOrderedSet:(id)arg2 range:(NSRange)arg3 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromOrderedSet:(id)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromSet:(id)arg2 ;
-(void)rollObjectsInRange:(NSRange)arg1 by:(long long)arg2 ;
-(void)setOrderedSet:(id)arg1 ;
-(void)sortUsingFunction:(/*function pointer*/ void*)arg1 context:(void*)arg2 range:(NSRange)arg3 ;
-(void)removeObject:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeLastObject;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)removeObjectIdenticalTo:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)removeObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)sortUsingComparator:(/*^block*/ id)arg1 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(void)sortUsingFunction:(/*function pointer*/ void*)arg1 context:(void*)arg2 ;
-(void)sortUsingSelector:(SEL)arg1 ;
-(void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)setArray:(id)arg1 ;
-(void)sortWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/ id)arg2 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2 ;
-(void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2 ;
@end

