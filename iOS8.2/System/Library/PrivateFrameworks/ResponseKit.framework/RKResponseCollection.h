/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:57 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface RKResponseCollection : NSObject {

	NSString* _context;
	NSMutableDictionary* _responseCatalogEditable;
	NSMutableDictionary* _responseCatalogNonEditable;
	NSMutableDictionary* _phraseMap;

}

@property (retain) NSString * context;                                            //@synthesize context=_context - In the implementation block
@property (retain) NSMutableDictionary * responseCatalogEditable;                 //@synthesize responseCatalogEditable=_responseCatalogEditable - In the implementation block
@property (retain) NSMutableDictionary * responseCatalogNonEditable;              //@synthesize responseCatalogNonEditable=_responseCatalogNonEditable - In the implementation block
@property (retain) NSMutableDictionary * phraseMap;                               //@synthesize phraseMap=_phraseMap - In the implementation block
+(id)responseCollectionWithContext:(id)arg1 ;
-(id)init;
-(NSString *)context;
-(void)setContext:(NSString *)arg1 ;
-(id)_initWithContext:(id)arg1 ;
-(void)resetResponseCatalog;
-(void)resetPhraseMap;
-(void)setResponseCatalogEditable:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)responseCatalogEditable;
-(void)setResponseCatalogNonEditable:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)responseCatalogNonEditable;
-(void)setPhraseMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)phraseMap;
-(id)responsesForCategory:(unsigned)arg1 gender:(unsigned)arg2 maximumResponses:(unsigned)arg3 withLanguage:(id)arg4 options:(unsigned)arg5 ;
-(id)responsesForFixedPhrase:(id)arg1 withLanguage:(id)arg2 ;
-(void)dumpResponseCatalog;
@end

