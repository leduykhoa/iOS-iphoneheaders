/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EBState.h>

@class ECColumnWidthConvertor, OABReaderState;

@interface EBReaderState : EBState {

	XlBinaryReader* mXlReader;
	XlSheetInfoTable* mXlSheetInfoTable;
	ECColumnWidthConvertor* mColumnWidthConvertor;
	XlEshObjectFactory* mXlEshObjectFactory;
	OABReaderState* mOAState;
	BOOL mImportCSV;

}

@property (assign,nonatomic) BOOL importCSV; 
-(void)dealloc;
-(id)columnWidthConvertor;
-(void)reportWarning:(TCTaggedMessageStructure*)arg1 ;
-(XlBinaryReader*)xlReader;
-(id)oaState;
-(id)initWithXlReader:(XlBinaryReader*)arg1 cancelDelegate:(id)arg2 tracing:(id)arg3 ;
-(void)pauseReading;
-(BOOL)importCSV;
-(void)setImportCSV:(BOOL)arg1 ;
-(XlSheetInfoTable*)xlSheetInfoTable;
-(void)resumeReading;
-(void)readGlobalXlObjects;
@end

