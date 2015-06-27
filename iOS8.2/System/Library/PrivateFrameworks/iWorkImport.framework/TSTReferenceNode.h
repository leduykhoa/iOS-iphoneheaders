/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTExpressionNode.h>

@class TSDMultiPaneController, TSCECalculationEngine, NSString, TSTReferenceColorHelper;

@interface TSTReferenceNode : TSTExpressionNode {

	SCD_Struct_TS275* mRangeReference;
	unsigned char mStickyBits;
	CFUUIDRef mHostTableID;
	TSDMultiPaneController* mMenuPopoverController;
	char mRangeWithFunction;
	TSCECalculationEngine* mCalculationEngine;
	int mRangeContext;
	NSString* mRefString;
	NSString* mFormulaPlainText;
	TSTReferenceColorHelper* mReferenceColorHelper;
	char mBlankForKeyboardInsertion;

}

@property (assign,nonatomic) SCD_Struct_TS275* rangeReference; 
@property (assign,nonatomic) SCD_Struct_TS274 rangeCoordinate; 
@property (assign,setter=setTableID:,nonatomic) CFUUIDRef tableID; 
@property (assign,setter=setHostTableID:,nonatomic) CFUUIDRef hostTableID; 
@property (assign,nonatomic) unsigned char stickyBits; 
@property (assign,nonatomic) int rangeContext; 
@property (getter=isNonSpanningRange,nonatomic,readonly) char nonSpanningRange; 
@property (getter=isRange,nonatomic,readonly) char range; 
@property (getter=isLocalReference,nonatomic,readonly) char localReference; 
@property (assign,getter=isRangeWithFunction,nonatomic) char rangeWithFunction; 
@property (getter=isSimpleRowOrColumnReference,nonatomic,readonly) char simpleRowOrColumnReference; 
@property (getter=isResizable,nonatomic,readonly) char resizable; 
@property (nonatomic,retain) TSTReferenceColorHelper * referenceColorHelper; 
@property (assign,getter=isBlankForKeyboardInsertion,nonatomic) char blankForKeyboardInsertion; 
@property (getter=isSingleASTNode,nonatomic,readonly) char singleASTNode; 
@property (nonatomic,retain,readonly) TSCECalculationEngine * calculationEngine; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(SCD_Struct_TS275*)rangeReference;
-(int)rangeContext;
-(CFUUIDRef)tableID;
-(void)saveToArchive:(ReferenceNodeArchive*)arg1 archiver:(id)arg2 ;
-(void)setStickyBits:(unsigned char)arg1 ;
-(unsigned char)stickyBits;
-(TSCECalculationEngine *)calculationEngine;
-(id)initFromArchive:(const ReferenceNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(char)isLocalReference;
-(void)setHostTableID:(CFUUIDRef)arg1 ;
-(void)setTableID:(CFUUIDRef)arg1 ;
-(void)setReferenceColorHelper:(TSTReferenceColorHelper *)arg1 ;
-(id)formulaPlainText;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(SCD_Struct_TS271)arg2 ;
-(id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned)arg3 lastIndex:(unsigned)arg4 ;
-(id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3 ;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(char)arg2 ;
-(id)exportString;
-(id)initWithReferenceStart:(id)arg1 referenceEnd:(id)arg2 firstIndex:(unsigned)arg3 lastIndex:(unsigned)arg4 ;
-(void)setRangeWithFunction:(char)arg1 ;
-(id)initWithContext:(id)arg1 calculationEngine:(id)arg2 cellRange:(SCD_Struct_TS274)arg3 stickyBits:(unsigned char)arg4 hostTableID:(CFUUIDRef)arg5 tableID:(CFUUIDRef)arg6 referenceColorHelper:(id)arg7 firstIndex:(unsigned)arg8 lastIndex:(unsigned)arg9 ;
-(char)isSingleASTNode;
-(CFUUIDRef)hostTableID;
-(SCD_Struct_TS274)rangeCoordinate;
-(TSTReferenceColorHelper *)referenceColorHelper;
-(void)p_invalidate;
-(void)setRangeCoordinate:(SCD_Struct_TS274)arg1 ;
-(char)isRangeWithFunction;
-(void)p_resetMenu;
-(char)isValidReference;
-(void)p_buildASTNodeArray:(TSCEASTNodeArray*)arg1 forRangeComponent:(SCD_Struct_TS271)arg2 stickyBits:(unsigned char)arg3 hostCell:(SCD_Struct_TS271)arg4 ;
-(void)setRangeReference:(SCD_Struct_TS275*)arg1 ;
-(char)isNonSpanningRange;
-(char)isResizable;
-(char)isSimpleRowOrColumnReference;
-(char)isBlankForKeyboardInsertion;
-(void)setBlankForKeyboardInsertion:(char)arg1 ;
-(id)asTableSelection;
-(void)setRangeContext:(int)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)string;
-(char)isRange;
-(int)tokenType;
@end
