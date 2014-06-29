/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/KNAnimationPluginContext.h>

@protocol KNAnimationPluginContext <NSObject>
@property (nonatomic,readonly) NSArray * textures; 
@property (nonatomic,readonly) unsigned long long direction; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double percent; 
@property (nonatomic,readonly) KNAnimatedBuild * animatedBuild; 
@property (nonatomic,readonly) NSDictionary * transitionAttributes; 
@property (nonatomic,readonly) NSArray * magicMoveMatches; 
@property (nonatomic,readonly) bool isBuild; 
@property (nonatomic,readonly) bool isTransition; 
@property (nonatomic,readonly) bool isMagicMove; 
@property (nonatomic,readonly) bool isFrameRenderer; 
@property (nonatomic,readonly) bool isWarmingUp; 
@required
-(bool)isMagicMove;
-(id)animatedBuild;
-(bool)isFrameRenderer;
-(bool)isBuild;
-(bool)isTransition;
-(id)transitionAttributes;
-(id)magicMoveMatches;
-(bool)isWarmingUp;
-(double)duration;
-(unsigned long long)direction;
-(id)textures;
-(double)percent;
@end


@class NSArray, KNAnimatedBuild, NSDictionary;

@interface KNAnimationPluginContext : NSObject <KNAnimationPluginContext> {

	bool _isWarmingUp;
	KNAnimatedBuild* _animatedBuild;
	NSArray* _magicMoveMatches;
	double _percent;
	NSArray* _textures;
	NSDictionary* _transitionAttributes;
	unsigned long long _direction;
	double _duration;
	long long _rendererType;

}

@property (assign,nonatomic) NSArray * textures;                               //@synthesize textures=_textures - In the implementation block
@property (assign,nonatomic) unsigned long long direction;                     //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double percent;                                   //@synthesize percent=_percent - In the implementation block
@property (assign,nonatomic) KNAnimatedBuild * animatedBuild;                  //@synthesize animatedBuild=_animatedBuild - In the implementation block
@property (assign,nonatomic) NSDictionary * transitionAttributes;              //@synthesize transitionAttributes=_transitionAttributes - In the implementation block
@property (assign,nonatomic) NSArray * magicMoveMatches;                       //@synthesize magicMoveMatches=_magicMoveMatches - In the implementation block
@property (assign,nonatomic) bool isWarmingUp;                                 //@synthesize isWarmingUp=_isWarmingUp - In the implementation block
@property (assign,nonatomic) long long rendererType;                           //@synthesize rendererType=_rendererType - In the implementation block
@property (nonatomic,readonly) bool isBuild; 
@property (nonatomic,readonly) bool isTransition; 
@property (nonatomic,readonly) bool isMagicMove; 
@property (nonatomic,readonly) bool isFrameRenderer; 
-(bool)isMagicMove;
-(id)animatedBuild;
-(bool)isFrameRenderer;
-(bool)isBuild;
-(bool)isTransition;
-(id)transitionAttributes;
-(id)magicMoveMatches;
-(void)setAnimatedBuild:(id)arg1 ;
-(void)setRendererType:(long long)arg1 ;
-(void)setTransitionAttributes:(id)arg1 ;
-(void)setMagicMoveMatches:(id)arg1 ;
-(long long)rendererType;
-(bool)isWarmingUp;
-(void)setIsWarmingUp:(bool)arg1 ;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setDirection:(unsigned long long)arg1 ;
-(unsigned long long)direction;
-(void)setTextures:(id)arg1 ;
-(id)textures;
-(double)percent;
-(void)setPercent:(double)arg1 ;
@end
