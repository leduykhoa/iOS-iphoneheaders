/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:05 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSAImportDelegate <NSObject>
@optional
-(void)willSaveImportedDocument:(id)arg1;
-(void)importControllerDidCancelImport:(id)arg1;
-(void)importControllerDidRunOutOfSpace:(id)arg1;
-(void)importController:(id)arg1 documentDidMoveToURL:(id)arg2;
-(char)areNewExternalReferencesToDataAllowedForImportController:(id)arg1;

@end
