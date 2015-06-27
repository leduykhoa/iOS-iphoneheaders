/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:35 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKVectorTile.h>

@class NSMapTable, NSMutableArray, VKRealisticPolygonMaker, VKAnimation, NSArray;

@interface VKRealisticTile : VKVectorTile {

	NSMapTable* _realisticRoadGroupsTable;
	NSMutableArray* _realisticRoadGroups;
	float _roadZ;
	float _laneMarkingZ;
	float _landZ;
	float _waterZ;
	char _shouldBlend;
	float _alpha;
	VKRealisticPolygonMaker* _landPolygonMaker;
	VKRealisticPolygonMaker* _waterPolygonMaker;
	VKAnimation* _startDrawingAnimation;
	map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > >* _landDrawableIndices;
	map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > >* _waterDrawableIndices;
	vector<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> >, std::__1::allocator<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > > >* _landDrawables;
	vector<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> >, std::__1::allocator<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > > >* _waterDrawables;
	shared_ptr<ggl::RealisticCasingFacade::RealisticMesh>* _coastlineMesh;
	shared_ptr<md::StyleQuery>* _landTextureStyleQuery;
	shared_ptr<ggl::Texture2D>* _defaultLandTexture;
	shared_ptr<ggl::Texture2D>* _defaultLandTextureVariant;
	vector<_VKRealisticPolygonMetaData, std::__1::allocator<_VKRealisticPolygonMetaData> >* _polygonMetaData;
	shared_ptr<ggl::Fog::FogUniformData>* _fogUniformData;
	shared_ptr<ggl::RealisticTexture::RealisticUniformData>* _realisticTextureUniformData;

}

@property (nonatomic,readonly) NSArray * realisticRoadGroups;                                                                     //@synthesize realisticRoadGroups=_realisticRoadGroups - In the implementation block
@property (nonatomic,readonly) float roadZ;                                                                                       //@synthesize roadZ=_roadZ - In the implementation block
@property (nonatomic,readonly) float landZ;                                                                                       //@synthesize landZ=_landZ - In the implementation block
@property (nonatomic,readonly) float waterZ;                                                                                      //@synthesize waterZ=_waterZ - In the implementation block
@property (assign,nonatomic) char shouldBlend;                                                                                    //@synthesize shouldBlend=_shouldBlend - In the implementation block
@property (assign,nonatomic) float alpha;                                                                                         //@synthesize alpha=_alpha - In the implementation block
@property (nonatomic,retain) VKAnimation * startDrawingAnimation;                                                                 //@synthesize startDrawingAnimation=_startDrawingAnimation - In the implementation block
@property (nonatomic,readonly) shared_ptr<ggl::Texture2D>* defaultLandTexture;                                                    //@synthesize defaultLandTexture=_defaultLandTexture - In the implementation block
@property (nonatomic,readonly) shared_ptr<ggl::Texture2D>* defaultLandTextureVariant; 
@property (nonatomic,readonly) vector<std::__1::unique_ptr<md::TexturedDrawable* landDrawables; 
@property (nonatomic,readonly) vector<std::__1::unique_ptr<md::TexturedDrawable* waterDrawables; 
@property (nonatomic,readonly) RealisticMesh* coastlineMesh; 
@property (nonatomic,readonly) shared_ptr<ggl::Fog::FogUniformData>* fogUniformData;                                              //@synthesize fogUniformData=_fogUniformData - In the implementation block
@property (nonatomic,readonly) shared_ptr<ggl::RealisticTexture::RealisticUniformData>* realisticTextureUniformData;              //@synthesize realisticTextureUniformData=_realisticTextureUniformData - In the implementation block
+(void)updateFogUniforms:(const shared_ptr<ggl::Fog::FogUniformData>*)arg1 withLayoutContext:(id)arg2 toWorld:(const Matrix<double, 4, 4>*)arg3 ;
-(void)dealloc;
-(float)alpha;
-(void)setAlpha:(float)arg1 ;
-(void)updateViewDependentStateWithContext:(id)arg1 ;
-(void)updateViewDependentStateIfNecessaryWithContext:(id)arg1 ;
-(id)initWithKey:(const VKTileKey*)arg1 modelTile:(id)arg2 styleManager:(id)arg3 sharedResources:(id)arg4 contentScale:(float)arg5 device:(DeviceRef)arg6 ;
-(int)vectorType;
-(float)roadZ;
-(void)createMeshes;
-(void)_parseCoastlines;
-(void)_parsePolygons;
-(void)addTriangulatedPointsToDrawableInMap:(map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > >*)arg1 vendors:(vector<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> >, std::__1::allocator<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > > >*)arg2 zIndex:(float)arg3 points:(const Matrix<float, 2, 1>*)arg4 pointCount:(unsigned)arg5 indices:(const unsigned short*)arg6 indexCount:(unsigned)arg7 styleQuery:(shared_ptr<md::StyleQuery>*)arg8 ;
-(void)_updateDefaultLandTextures;
-(NSArray *)realisticRoadGroups;
-(id)_groupForRenderZ:(int)arg1 ;
-(shared_ptr<ggl::Texture2D>*)_createDefaultTextureForLevelOfDetail:(unsigned)arg1 takeVariant:(char)arg2 ;
-(void)_addCoastlineMeshForPoints:(const Matrix<float, 2, 1>*)arg1 pointCount:(unsigned)arg2 ;
-(TexturedDrawable*)_drawableInMap:(map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > >*)arg1 vendors:(vector<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> >, std::__1::allocator<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > > >*)arg2 forStyleQuery:(shared_ptr<md::StyleQuery>*)arg3 ;
-(vector<std::__1::unique_ptr<md::TexturedDrawable*)landDrawables;
-(vector<std::__1::unique_ptr<md::TexturedDrawable*)waterDrawables;
-(RealisticMesh*)coastlineMesh;
-(void)updateTextures;
-(shared_ptr<ggl::Texture2D>*)defaultLandTextureVariant;
-(shared_ptr<ggl::Texture2D>*)defaultLandTexture;
-(shared_ptr<ggl::Fog::FogUniformData>*)fogUniformData;
-(shared_ptr<ggl::RealisticTexture::RealisticUniformData>*)realisticTextureUniformData;
-(float)landZ;
-(float)waterZ;
-(char)shouldBlend;
-(void)setShouldBlend:(char)arg1 ;
-(VKAnimation *)startDrawingAnimation;
-(void)setStartDrawingAnimation:(VKAnimation *)arg1 ;
@end
