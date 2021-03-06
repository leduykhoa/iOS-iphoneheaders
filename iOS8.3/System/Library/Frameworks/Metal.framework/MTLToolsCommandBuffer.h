/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:01:20 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLToolsObject.h>
#import <Metal/MTLCommandBufferSPI.h>

@class NSDictionary, MTLToolsPointerArray, NSString, NSError;

@interface MTLToolsCommandBuffer : MTLToolsObject <MTLCommandBufferSPI> {

	MTLToolsPointerArray* _renderCommandEncoders;
	MTLToolsPointerArray* _computeCommandEncoders;
	MTLToolsPointerArray* _blitCommandEncoders;
	MTLToolsPointerArray* _parallelRenderCommandEncoders;

}

@property (nonatomic,readonly) MTLToolsPointerArray * renderCommandEncoders;                      //@synthesize renderCommandEncoders=_renderCommandEncoders - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * computeCommandEncoders;                     //@synthesize computeCommandEncoders=_computeCommandEncoders - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * blitCommandEncoders;                        //@synthesize blitCommandEncoders=_blitCommandEncoders - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * parallelRenderCommandEncoders;              //@synthesize parallelRenderCommandEncoders=_parallelRenderCommandEncoders - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) id<MTLCommandQueue> commandQueue; 
@property (readonly) char retainedReferences; 
@property (copy) NSString * label; 
@property (readonly) unsigned status; 
@property (readonly) NSError * error; 
@property (getter=isProfilingEnabled) char profilingEnabled; 
@property (readonly) NSDictionary * profilingResults; 
-(void)acceptVisitor:(id)arg1 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(char)isProfilingEnabled;
-(char)retainedReferences;
-(void)enqueue;
-(void)addScheduledHandler:(/*^block*/id)arg1 ;
-(void)presentDrawable:(id)arg1 ;
-(void)presentDrawable:(id)arg1 atTime:(double)arg2 ;
-(void)addCompletedHandler:(/*^block*/id)arg1 ;
-(id)blitCommandEncoder;
-(id)computeCommandEncoder;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(MTLToolsPointerArray *)blitCommandEncoders;
-(id)unwrapMTLRenderPassDescriptor:(id)arg1 ;
-(MTLToolsPointerArray *)renderCommandEncoders;
-(MTLToolsPointerArray *)computeCommandEncoders;
-(MTLToolsPointerArray *)parallelRenderCommandEncoders;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(SCD_Struct_MT21*)arg1 capacity:(unsigned)arg2 ;
-(void)setProfilingEnabled:(char)arg1 ;
-(NSDictionary *)profilingResults;
-(id)sampledRenderCommandEncoderWithFramebuffer:(id)arg1 programInfoBuffer:(SCD_Struct_MT21*)arg2 capacity:(unsigned)arg3 ;
-(void)waitUntilScheduled;
-(void)waitUntilCompleted;
-(id)renderCommandEncoderWithDescriptor:(id)arg1 ;
-(NSString *)label;
-(void)commit;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned)status;
-(NSError *)error;
-(id<MTLCommandQueue>)commandQueue;
-(id<MTLDevice>)device;
@end

