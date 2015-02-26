/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMediaLayout.h>

@interface TSDAudioLayout : TSDMediaLayout
-(id)layoutGeometryFromInfo;
-(CGRect)alignmentFrame;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(BOOL)resizeMayChangeAspectRatio;
-(BOOL)shouldDisplayGuides;
-(BOOL)allowsConnections;
-(BOOL)supportsRotation;
-(CGRect)computeAlignmentFrameInRoot:(BOOL)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(BOOL)canFlip;
-(id)movieInfo;
-(int)wrapType;
@end
