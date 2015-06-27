/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:59:58 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKAnnotationMarker.h>

@class VKAnimation;

@interface VKNavUserLocationAnnotationMarker : VKAnnotationMarker {

	char _shouldBillboard;
	VKAnimation* _billboardAnimation;
	float _billboardFactor;
	float _scale;
	char _shouldShowCourse;
	char _puckFlipped;
	double _presentationCourse;
	double _sizePoints;
	double _puckOffset;
	char _stale;
	VKAnimation* _puckStyleAnimation;
	int _puckStyle;
	float _greyPuckAlphaScale;
	SCD_Struct_VK296 _puckState;
	int _style;
	Matrix<float, 4, 1> _arrowColor;
	Matrix<float, 4, 1> _arrowColorStale;
	float _circleBrightness;
	float _arrowBrightness;
	shared_ptr<ggl::Texture2D>* _textureArrow;
	shared_ptr<ggl::Texture2D>* _textureCircle;
	shared_ptr<ggl::RenderState>* _gglPuckRenderState;
	shared_ptr<ggl::TextureWithBrightness::Shader::Setup>* _circleShaderSetup;
	shared_ptr<ggl::TextureAlphaMask::Shader::Setup>* _arrowShaderSetup;
	shared_ptr<ggl::RenderItem>* _arrowRenderItem;
	shared_ptr<ggl::RenderItem>* _circleRenderItem;
	char _needsTextureUpdate;

}

@property (assign,nonatomic) char shouldBillboard;                   //@synthesize shouldBillboard=_shouldBillboard - In the implementation block
@property (assign,nonatomic) char shouldShowCourse;                  //@synthesize shouldShowCourse=_shouldShowCourse - In the implementation block
@property (assign,nonatomic) float scale;                            //@synthesize scale=_scale - In the implementation block
@property (assign,getter=isStale,nonatomic) char stale;              //@synthesize stale=_stale - In the implementation block
@property (assign,nonatomic) int style;                              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double presentationCourse; 
@property (assign,nonatomic) VKEdgeInsets innerColor; 
-(void)dealloc;
-(float)scale;
-(int)style;
-(void)setScale:(float)arg1 ;
-(void)setStyle:(int)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setModel:(id)arg1 ;
-(void)layoutWithContext:(id)arg1 ;
-(void)appendCommandsToBuffer:(CommandBuffer*)arg1 inContext:(id)arg2 ;
-(void)_updatePuckStyle;
-(void)_updateTexturesIfNeeded;
-(double)presentationCourse;
-(VKEdgeInsets)innerColor;
-(void)setInnerColor:(VKEdgeInsets)arg1 ;
-(void)setPresentationCourse:(double)arg1 ;
-(void)setShouldBillboard:(char)arg1 ;
-(void)setShouldShowCourse:(char)arg1 ;
-(void)setStale:(char)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 style:(int)arg3 ;
-(void)updateWithStyleQuery:(const shared_ptr<md::StyleQuery>*)arg1 ;
-(char)isStale;
-(char)shouldBillboard;
-(char)shouldShowCourse;
@end
