/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKSelection.h>
#import <iWorkImport/TSDCanvasSelection.h>

@protocol TSDCanvasSelection <NSObject>
@property (nonatomic,readonly) NSSet * infos; 
@property (nonatomic,readonly) unsigned long long infoCount; 
@property (nonatomic,readonly) bool isEmpty; 
@property (nonatomic,readonly) TSDDrawableInfo<TSDContainerInfo> * container; 
@property (nonatomic,readonly) NSSet * unlockedInfos; 
@property (nonatomic,readonly) unsigned long long unlockedInfoCount; 
@required
+(id)emptySelection;
-(unsigned long long)infoCount;
-(id)infos;
-(bool)containsKindOfClass:(Class)arg1;
-(bool)containsUnlockedKindOfClass:(Class)arg1;
-(id)infosOfClass:(Class)arg1;
-(id)copyIncludingInfo:(id)arg1;
-(id)copyExcludingInfo:(id)arg1;
-(id)unlockedInfos;
-(unsigned long long)unlockedInfoCount;
-(bool)isEmpty;
-(id)container;
@end

#import <CoreFoundation/NSCopying.h>

@protocol TSDContainerInfo;
@class NSSet, TSDDrawableInfo;

@interface TSDCanvasSelection : TSKSelection <TSDCanvasSelection, NSCopying> {

	NSSet* mInfos;
	TSDDrawableInfo<TSDContainerInfo>* mContainer;

}

@property (nonatomic,readonly) NSSet * infos; 
@property (nonatomic,readonly) unsigned long long infoCount; 
@property (nonatomic,readonly) bool isEmpty; 
@property (nonatomic,readonly) TSDDrawableInfo<TSDContainerInfo> * container; 
@property (nonatomic,readonly) NSSet * unlockedInfos; 
@property (nonatomic,readonly) unsigned long long unlockedInfoCount; 
+(Class)archivedSelectionClass;
+(id)emptySelection;
-(void)saveToArchive:(CanvasSelectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const CanvasSelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithInfos:(id)arg1 andContainer:(id)arg2 ;
-(id)initWithInfos:(id)arg1 ;
-(unsigned long long)infoCount;
-(id)infos;
-(bool)containsKindOfClass:(Class)arg1 ;
-(bool)containsUnlockedKindOfClass:(Class)arg1 ;
-(id)infosOfClass:(Class)arg1 ;
-(id)copyIncludingInfo:(id)arg1 ;
-(id)copyExcludingInfo:(id)arg1 ;
-(id)unlockedInfos;
-(unsigned long long)unlockedInfoCount;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)isEmpty;
-(id)container;
@end

