/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPAttachment.h>

@class TSDDrawableInfo;

@interface TSWPDrawableAttachment : TSWPAttachment {

	TSDDrawableInfo* _drawableInfo;
	int _hOffsetType;
	double _hOffset;
	int _vOffsetType;
	double _vOffset;

}

@property (nonatomic,readonly) TSDDrawableInfo * drawable;              //@synthesize drawableInfo=_drawableInfo - In the implementation block
@property (assign,nonatomic) int hOffsetType;                           //@synthesize hOffsetType=_hOffsetType - In the implementation block
@property (assign,nonatomic) double hOffset;                            //@synthesize hOffset=_hOffset - In the implementation block
@property (assign,nonatomic) int vOffsetType;                           //@synthesize vOffsetType=_vOffsetType - In the implementation block
@property (assign,nonatomic) double vOffset;                            //@synthesize vOffset=_vOffset - In the implementation block
@property (nonatomic,readonly) double descent; 
+(void)setPositionerClass:(Class)arg1 ;
-(id)textStorages;
-(id)textRepresentationForCopy;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(Class)positionerClass;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(id)subclassInitFromUnarchiver:(id)arg1 ;
-(bool)isAnchored;
-(unsigned long long)enabledKnobMask;
-(bool)specifiesEnabledKnobMask;
-(bool)isHTMLWrap;
-(void)setParentStorage:(id)arg1 ;
-(bool)isPartitioned;
-(double)hOffset;
-(void)setHOffset:(double)arg1 ;
-(double)vOffset;
-(void)setVOffset:(double)arg1 ;
-(int)hOffsetType;
-(int)vOffsetType;
-(void)loadMessage:(const DrawableAttachmentArchive*)arg1 fromUnarchiver:(id)arg2 ;
-(void)saveMessage:(DrawableAttachmentArchive*)arg1 toArchiver:(id)arg2 ;
-(void)setHOffsetType:(int)arg1 ;
-(void)setVOffsetType:(int)arg1 ;
-(id)initWithContext:(id)arg1 drawable:(id)arg2 ;
-(id)detachDrawable;
-(void)attachDrawable:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(void)invalidate;
-(double)descent;
-(bool)isSearchable;
-(id)drawable;
-(int)elementKind;
-(bool)isDrawable;
@end

