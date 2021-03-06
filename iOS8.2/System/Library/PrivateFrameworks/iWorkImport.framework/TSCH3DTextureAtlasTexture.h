/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray, TSCH3DTextureAtlasTextureResource;

@interface TSCH3DTextureAtlasTexture : NSObject {

	tvec2<int> mSize;
	float mSamples;
	NSMutableArray* mLabels;
	vector<glm::detail::tvec2<int>, std::__1::allocator<glm::detail::tvec2<int> > >* mPositions;
	int mCurrentxpos;
	int mCurrentypos;
	int mCurrentheight;
	TSCH3DTextureAtlasTextureResource* mResource;

}

@property (nonatomic,readonly) tvec2<int> size; 
-(void)p_invalidateResource;
-(id)getTextureDataBuffer;
-(void)dealloc;
-(tvec2<int>)size;
-(id)initWithSize:(tvec2<int>)arg1 ;
-(tvec2<int>)addLabel:(id)arg1 ;
-(id)resource;
@end

