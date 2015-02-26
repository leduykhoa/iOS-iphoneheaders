/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:45 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/KNRenderingExporter.h>
#import <iWorkImport/TSKEncryptedDocumentExporter.h>

@class NSDictionary, NSString;

@interface KNPdfExporter : KNRenderingExporter <TSKEncryptedDocumentExporter> {

	NSDictionary* mOptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPassphrase:(id)arg1 hint:(id)arg2 ;
-(void)setPrintPassphrase:(id)arg1 hint:(id)arg2 ;
-(void)setCopyPassphrase:(id)arg1 hint:(id)arg2 ;
-(id)p_renderingExporterDelegate;
-(void)dealloc;
-(void)setOptions:(id)arg1 ;
@end
