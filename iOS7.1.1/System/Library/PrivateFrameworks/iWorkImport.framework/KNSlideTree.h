/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPContainedObject.h>

@class KNSlideNode, NSMutableArray, NSMutableDictionary, TSUPointerKeyDictionary, NSArray;

@interface KNSlideTree : TSPContainedObject {

	KNSlideNode* mRootSlideNode;
	NSMutableArray* mSlideNodeCache;
	NSMutableArray* mDisplayedSlideNodeCache;
	NSMutableDictionary* mSlideNodesForUniqueIdentifiersCache;
	NSMutableDictionary* mSlideNodesForFormulaReferenceNamesCache;
	TSUPointerKeyDictionary* mFormulaReferenceNamesForSlideNodesCache;

}

@property (nonatomic,retain) KNSlideNode * rootSlideNode; 
@property (nonatomic,readonly) NSArray * slideNodes; 
@property (nonatomic,readonly) NSArray * visibleSlideNodes; 
@property (nonatomic,retain) NSArray * displayedSlideNodes; 
-(void)saveToArchive:(SlideTreeArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const SlideTreeArchive*)arg1 unarchiver:(id)arg2 owner:(id)arg3 ;
-(id)slideNodes;
-(id)visibleSlideNodes;
-(id)formulaReferenceNameForSlideNode:(id)arg1 ;
-(id)slideNodeForFormulaReferenceName:(id)arg1 caseSensitive:(bool)arg2 ;
-(id)slideNamesMatchingPrefix:(id)arg1 ;
-(id)rootSlideNode;
-(void)insertSlideNode:(id)arg1 intoSlideNode:(id)arg2 atIndex:(unsigned long long)arg3 dolcContext:(id)arg4 ;
-(unsigned long long)indexOfSlideNode:(id)arg1 ;
-(id)slideNodeAtIndex:(unsigned long long)arg1 ignoreHiddenNodes:(bool)arg2 ;
-(void)invalidateSlideNameCache;
-(void)p_clearSlideNodeCache;
-(void)p_cacheSlideNodes;
-(void)setDisplayedSlideNodes:(id)arg1 ;
-(id)slidesUsingMasterSlide:(id)arg1 ;
-(void)p_addSlideNodeAndDescendantsOfSlideNode:(id)arg1 toArray:(id)arg2 slideNodesForUniqueIdentifiersDictionary:(id)arg3 slideNodesForFormulaReferencesDictionary:(id)arg4 formulaReferenceNamesForSlideNodesDictionary:(id)arg5 visibleSlidesSoFar:(unsigned long long*)arg6 hiddenSlidesSoFar:(unsigned long long*)arg7 ;
-(void)p_addSlideNodeAndDescendantsOfSlideNode:(id)arg1 toArray:(id)arg2 slideNodesForUniqueIdentifiersDictionary:(id)arg3 slideNodesForFormulaReferencesDictionary:(id)arg4 formulaReferenceNamesForSlideNodesDictionary:(id)arg5 ;
-(void)setRootSlideNode:(id)arg1 ;
-(void)moveSlideNode:(id)arg1 inSlideNode:(id)arg2 toIndex:(unsigned long long)arg3 ;
-(void)removeSlideNode:(id)arg1 fromSlideNode:(id)arg2 ;
-(void)addSlideNode:(id)arg1 atDepth:(int)arg2 dolcContext:(id)arg3 ;
-(id)displayedSlideNodes;
-(id)orderedSlideNodesInSelection:(id)arg1 ;
-(void)reloadDisplayedNodes;
-(id)unhiddenSlideNodeAtIndex:(unsigned long long)arg1 ;
-(id)slideNodeWithUniqueIdentifier:(id)arg1 ;
-(unsigned long long)slideNumberForSlideNode:(id)arg1 ;
-(unsigned long long)visiblePageCountIsSeparatedByBuilds:(bool)arg1 ;
-(unsigned long long)byBuildPageIndexForSlideIndex:(unsigned long long)arg1 andEventIndex:(unsigned long long)arg2 ;
-(void)slideIndex:(unsigned long long*)arg1 andEventIndex:(unsigned long long*)arg2 forByBuildPageIndex:(unsigned long long)arg3 ;
-(unsigned long long)numberOfSlidesUsingMasterSlide:(id)arg1 ;
-(id)initWithOwner:(id)arg1 ;
-(void)dealloc;
-(void)removeAll;
@end

