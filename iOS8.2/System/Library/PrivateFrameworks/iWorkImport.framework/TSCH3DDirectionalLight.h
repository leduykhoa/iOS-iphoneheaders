/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DLight.h>
#import <iWorkImport/TSCH3DLightDirectional.h>

@interface TSCH3DDirectionalLight : TSCH3DLight <TSCH3DLightDirectional> {

	tvec3<float> mDirection;

}

@property (assign,nonatomic) tvec3<float> direction; 
+(id)instanceWithArchive:(const Chart3DLightArchive*)arg1 unarchiver:(id)arg2 ;
+(Class)effectClass;
-(void)saveToArchive:(Chart3DLightArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DLightArchive*)arg1 unarchiver:(id)arg2 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDirection:(tvec3<float>)arg1 ;
-(tvec3<float>)direction;
@end

