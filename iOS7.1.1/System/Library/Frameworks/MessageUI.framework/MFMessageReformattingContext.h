/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@class DOMDocument, DOMNode, NSMutableArray, NSArray, DOMRange;

@interface MFMessageReformattingContext : NSObject {

	DOMDocument* _document;
	DOMNode* _body;
	NSMutableArray* _changes;
	double _maximumWidth;
	double _meanWidth;
	double _widthDeviation;
	bool _hasAnyLeftFloat;
	NSArray* _rightFloats;
	bool _floatsNeedUpdate;
	bool _metricsNeedUpdate;
	bool _documentContainsAnyWebKitTransform;
	double _minimumRescalingFactor;
	DOMRange* _firstTextRange;

}

@property (nonatomic,readonly) bool hasAnyLeftFloat; 
@property (nonatomic,readonly) bool hasAnyRightFloat; 
@property (nonatomic,readonly) NSArray * rightFloats; 
@property (nonatomic,readonly) double maximumWidth; 
@property (nonatomic,readonly) double meanWidth; 
@property (nonatomic,readonly) double widthDeviation; 
@property (assign,nonatomic) double minimumRescalingFactor;              //@synthesize minimumRescalingFactor=_minimumRescalingFactor - In the implementation block
@property (nonatomic,readonly) DOMDocument * document; 
@property (nonatomic,readonly) DOMNode * body; 
@property (nonatomic,readonly) bool didChangeDocument; 
@property (nonatomic,retain) DOMRange * firstTextRange;                  //@synthesize firstTextRange=_firstTextRange - In the implementation block
-(double)minimumRescalingFactor;
-(bool)hasAnyRightFloat;
-(void)rollBackLastChangeForElement:(id)arg1 ;
-(void)rollBackAllChanges;
-(bool)didChangeDocument;
-(double)widthDeviation;
-(double)meanWidth;
-(bool)hasAnyLeftFloat;
-(id)rightFloats;
-(CGRect)boundingBoxOf:(id)arg1 ;
-(bool)rescaleElement:(id)arg1 withScale:(double)arg2 ;
-(id)firstTextRange;
-(void)setFirstTextRange:(id)arg1 ;
-(bool)resizeElement:(id)arg1 withScale:(double)arg2 verificationBlock:(/*^block*/ id)arg3 ;
-(void)setMinimumRescalingFactor:(double)arg1 ;
-(void)_updateFloatsIfNecessary;
-(void)_updateMetricsIfNecessary;
-(bool)changeSizeOfElement:(id)arg1 priority:(id)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(void)changeProprety:(id)arg1 ofElement:(id)arg2 toValue:(id)arg3 priority:(id)arg4 ;
-(bool)changeMarginOfElement:(id)arg1 priority:(id)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(void)_rollBackChange:(id)arg1 ;
-(void)dealloc;
-(double)maximumWidth;
-(id)body;
-(id)document;
-(id)initWithDocument:(id)arg1 ;
@end

