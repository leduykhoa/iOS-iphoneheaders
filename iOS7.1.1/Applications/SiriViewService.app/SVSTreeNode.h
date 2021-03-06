/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <CoreFoundation/NSFastEnumeration.h>

@class NSMutableArray;

@interface SVSTreeNode : NSObject <NSFastEnumeration> {

	id _item;
	SVSTreeNode* _parentNode;
	NSMutableArray* _childNodes;

}

@property (nonatomic,retain) id item;                                                       //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) SVSTreeNode * parentNode;                               //@synthesize parentNode=_parentNode - In the implementation block
@property (getter=_childNodes,nonatomic,readonly) NSMutableArray * childNodes;              //@synthesize childNodes=_childNodes - In the implementation block
+(id)absoluteIndexPathsForTreeNodes:(id)arg1 ;
-(id)absoluteIndexPath;
-(id)_childNodes;
-(void)_appendDescriptionToString:(id)arg1 withIndentation:(id)arg2 ;
-(id)indexPathFromAncestorNode:(id)arg1 ;
-(int)indexOfChildNode:(id)arg1 ;
-(int)numberOfChildNodes;
-(id)childNodeAtIndex:(int)arg1 ;
-(void)enumerateDescendentNodesUsingBlock:(/*^block*/ id)arg1 ;
-(void)removeChildNode:(id)arg1 ;
-(void)removeFromParentNode;
-(void)_setParentNode:(id)arg1 ;
-(void)insertChildNode:(id)arg1 atIndex:(int)arg2 ;
-(void)removeChildNodeAtIndex:(int)arg1 ;
-(void)enumerateChildNodesWithOptions:(unsigned)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(BOOL)containsNodeAtIndexPath:(id)arg1 ;
-(id)nodeAtIndexPath:(id)arg1 ;
-(id)indexPathOfNodeWithItem:(id)arg1 ;
-(id)lastChildNode;
-(void)addChildNode:(id)arg1 ;
-(void)replaceChildNodeAtIndex:(int)arg1 withNode:(id)arg2 ;
-(void)enumerateChildNodesUsingBlock:(/*^block*/ id)arg1 ;
-(void)setItem:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_SV0*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(id)init;
-(id)description;
-(id)item;
-(id)parentNode;
-(void).cxx_destruct;
@end

