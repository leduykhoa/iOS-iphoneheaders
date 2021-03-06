/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OADProperties.h>

@class OADTextBodyAutoFit, OADTextWarp;

@interface OADTextBodyProperties : OADProperties {

	OADTextBodyAutoFit* mAutoFit;
	OADTextWarp* mTextWarp;
	double mTopInset;
	double mLeftInset;
	double mBottomInset;
	double mRightInset;
	double mRotation;
	double mColumnSpacing;
	unsigned short mColumnCount;
	unsigned short mTextBodyId;
	unsigned char mTextAnchorType;
	unsigned char mFlowType;
	unsigned char mWrapType;
	unsigned char mVerticalOverflowType;
	unsigned char mHorizontalOverflowType;
	unsigned mRepectFirstLastParagraphSpacing : 1;
	unsigned mIsUpright : 1;
	unsigned mIsAnchorCenter : 1;
	unsigned mIsLeftToRightColumns : 1;
	unsigned mHasVerticalOverflowType : 1;
	unsigned mHasHorizontalOverflowType : 1;
	unsigned mHasTextBodyId : 1;
	unsigned mHasFlowType : 1;
	unsigned mHasWrapType : 1;
	unsigned mHasTextAnchorType : 1;
	unsigned mHasIsAnchorCenter : 1;
	unsigned mHasIsUpright : 1;
	unsigned mHasRotation : 1;
	unsigned mHasColumnCount : 1;
	unsigned mHasColumnSpacing : 1;
	unsigned mHasIsLeftToRightColumns : 1;
	unsigned mHasRepectFirstLastParagraphSpacing : 1;
	unsigned mHasTopInset : 1;
	unsigned mHasLeftInset : 1;
	unsigned mHasRightInset : 1;
	unsigned mHasBottomInset : 1;

}
+(id)defaultProperties;
+(id)defaultEscherWordArtProperties;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(int)columnCount;
-(void)setColumnCount:(int)arg1 ;
-(bool)hasTopInset;
-(double)topInset;
-(bool)hasLeftInset;
-(double)leftInset;
-(bool)hasBottomInset;
-(double)bottomInset;
-(bool)hasRightInset;
-(double)rightInset;
-(int)textAnchorType;
-(bool)hasRotation;
-(void)setVerticalOverflowType:(int)arg1 ;
-(void)setIsUpright:(bool)arg1 ;
-(void)setLeftInset:(double)arg1 ;
-(void)setRightInset:(double)arg1 ;
-(void)setTopInset:(double)arg1 ;
-(void)setBottomInset:(double)arg1 ;
-(void)setColumnSpacing:(double)arg1 ;
-(void)setHorizontalOverflowType:(int)arg1 ;
-(void)setFlowType:(int)arg1 ;
-(void)setIsLeftToRightColumns:(bool)arg1 ;
-(void)setAutoFit:(id)arg1 ;
-(void)setWrapType:(int)arg1 ;
-(void)setTextAnchorType:(int)arg1 ;
-(void)setIsAnchorCenter:(bool)arg1 ;
-(double)columnSpacing;
-(bool)isAnchorCenter;
-(int)wrapType;
-(bool)isLeftToRightColumns;
-(id)autoFit;
-(int)flowType;
-(void)setTextWarp:(id)arg1 ;
-(id)initWithDefaults;
-(void)removeUnnecessaryOverrides;
-(void)setRespectLastFirstLineSpacing:(bool)arg1 ;
-(bool)hasRespectLastFirstLineSpacing;
-(bool)hasColumnCount;
-(bool)hasColumnSpacing;
-(bool)hasIsLeftToRightColumns;
-(bool)hasAutoFit;
-(bool)hasFlowType;
-(bool)hasWrapType;
-(bool)hasVerticalOverflowType;
-(bool)hasHorizontalOverflowType;
-(bool)hasTextWarp;
-(bool)hasIsAnchorCenter;
-(bool)hasTextAnchorType;
-(bool)hasIsUpright;
-(bool)respectLastFirstLineSpacing;
-(int)verticalOverflowType;
-(bool)hasTextBodyId;
-(int)textBodyId;
-(void)setTextBodyId:(int)arg1 ;
-(id)textWarp;
-(bool)isUpright;
-(int)horizontalOverflowType;
@end

