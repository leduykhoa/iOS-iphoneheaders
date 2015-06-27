/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:08:43 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAnimatable.h>
#import <SceneKit/NSCopying.h>
#import <SceneKit/NSSecureCoding.h>

@class NSMutableDictionary, SCNOrderedDictionary, NSDictionary, NSString;

@interface SCNTechnique : NSObject <SCNAnimatable, NSCopying, NSSecureCoding> {

	id _reserved;
	unsigned _isPresentationInstance : 1;
	C3DFXTechniqueRef _technique;
	NSMutableDictionary* _valueForSymbol;
	SCNOrderedDictionary* _animations;

}

@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)SCNJSExportProtocol;
+(id)techniqueWithDictionary:(id)arg1 ;
+(id)techniqueBySequencingTechniques:(id)arg1 ;
+(id)techniqueWithTechniqueRef:(C3DFXTechniqueRef)arg1 ;
+(char)supportsSecureCoding;
-(id)scene;
-(id)initWithTechniqueRef:(C3DFXTechniqueRef)arg1 ;
-(C3DFXTechniqueRef)techniqueRef;
-(id)_symbolsAssignedValues;
-(C3DSceneRef)sceneRef;
-(void*)__CFObject;
-(void)_syncObjCAnimations;
-(_C3DAnimationManager*)animationManager;
-(void)_pauseAnimation:(char)arg1 forKey:(id)arg2 ;
-(id)initPresentationTechniqueWithTechniqueRef:(C3DFXTechniqueRef)arg1 ;
-(void)handleBindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(void)_customEncodingOfSCNTechnique:(id)arg1 ;
-(void)_customDecodingOfSCNTechnique:(id)arg1 ;
-(char)isAnimationForKeyPaused:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(float)arg2 ;
-(void)setValue:(id)arg1 forSymbolNamed:(id)arg2 ;
-(id)valueForSymbolNamed:(id)arg1 ;
-(void)__removeAnimation:(id)arg1 forKey:(id)arg2 ;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 ;
-(char)isPausedOrPausedByInheritance;
-(id)presentationInstance;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copy;
-(void)addAnimation:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)animationKeys;
-(id)animationForKey:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllAnimations;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end
