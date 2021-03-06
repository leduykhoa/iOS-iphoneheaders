/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class SBBBInfoOperand;

@interface SBBBCompoundInfoOperand : NSObject {

	SBBBInfoOperand* _activeOperand;
	SBBBInfoOperand* _referenceOperand;

}

@property (nonatomic,readonly) SBBBInfoOperand * activeOperand;                          //@synthesize activeOperand=_activeOperand - In the implementation block
@property (nonatomic,readonly) SBBBInfoOperand * referenceOperand;                       //@synthesize referenceOperand=_referenceOperand - In the implementation block
@property (getter=isSectionOperand,nonatomic,readonly) BOOL sectionOperand; 
+(id)compoundOperandWithOperand:(id)arg1 referenceOperand:(id)arg2 ;
-(SBBBInfoOperand *)activeOperand;
-(SBBBInfoOperand *)referenceOperand;
-(BOOL)isSectionOperand;
-(id)initWithOperand:(id)arg1 operand:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

