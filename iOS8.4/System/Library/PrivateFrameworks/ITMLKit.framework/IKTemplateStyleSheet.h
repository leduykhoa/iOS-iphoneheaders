/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:13 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class IKStyleFactory, NSDictionary, NSMutableDictionary;

@interface IKTemplateStyleSheet : NSObject {

	IKStyleFactory* _styleFactory;
	NSDictionary* _templateTree;
	NSMutableDictionary* _templateKeyPathMap;
	NSMutableDictionary* _styleComposersByKeypath;

}

@property (nonatomic,retain,readonly) IKStyleFactory * styleFactory;                              //@synthesize styleFactory=_styleFactory - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * templateTree;                                  //@synthesize templateTree=_templateTree - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * templateKeyPathMap;                   //@synthesize templateKeyPathMap=_templateKeyPathMap - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * styleComposersByKeypath;              //@synthesize styleComposersByKeypath=_styleComposersByKeypath - In the implementation block
+(id)styleSheetForTemplateName:(id)arg1 ;
+(id)_templateTreeNodeWithXMLNode:(xmlNode*)arg1 ;
+(void)registerStyleSheetURL:(id)arg1 forTemplateName:(id)arg2 ;
-(IKStyleFactory *)styleFactory;
-(NSMutableDictionary *)styleComposersByKeypath;
-(id)styleComposerForElement:(id)arg1 ;
-(NSMutableDictionary *)templateKeyPathMap;
-(NSDictionary *)templateTree;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
@end
