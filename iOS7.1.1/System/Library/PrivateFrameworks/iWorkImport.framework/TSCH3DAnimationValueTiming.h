/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DAnimationTiming.h>

@class NSString;

@interface TSCH3DAnimationValueTiming : TSCH3DAnimationTiming {

	NSString* mName;
	box<glm::detail::tvec1<float> > mValueRange;

}

@property (assign,nonatomic) box<glm::detail::tvec1<float> > valueRange; 
@property (nonatomic,retain) NSString * name; 
+(id)timingWithName:(id)arg1 ;
+(id)timingWithName:(id)arg1 valueRange:(const box<glm::detail::tvec1<float> >*)arg2 ;
-(void)evaluate:(float)arg1 context:(id)arg2 ;
-(id)initWithName:(id)arg1 valueRange:(const box<glm::detail::tvec1<float> >*)arg2 ;
-(box<glm::detail::tvec1<float> >)valueRange;
-(void)setValueRange:(box<glm::detail::tvec1<float> >)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id).cxx_construct;
-(id)initWithName:(id)arg1 ;
@end
