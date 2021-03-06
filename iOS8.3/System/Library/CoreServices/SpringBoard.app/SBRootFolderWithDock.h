/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:37 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBRootFolder.h>
#import <SpringBoard/SBIconIndexNodeObserver.h>

@class SBIconListModel, NSString;

@interface SBRootFolderWithDock : SBRootFolder <SBIconIndexNodeObserver> {

	SBIconListModel* _dock;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)listContainingLeafIconWithIdentifier:(id)arg1 ;
-(void)removeEmptyList:(id)arg1 ;
-(char)containsNodeIdentifier:(id)arg1 ;
-(id)iconsOfClass:(Class)arg1 ;
-(char)supportsDock;
-(void)markIconStateClean;
-(char)isIconStateDirty;
-(id)containedNodeIdentifiers;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned)arg2 ;
-(void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(unsigned)indexOfList:(id)arg1 ;
-(void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(void)_setDock:(id)arg1 ;
-(void)_notifyIndexChange:(int)arg1 identifiers:(id)arg2 withValidationBlock:(/*^block*/id)arg3 ;
-(id)listContainingIcon:(id)arg1 ;
-(void)dealloc;
-(id)dock;
-(id)listAtIndex:(unsigned)arg1 ;
@end

