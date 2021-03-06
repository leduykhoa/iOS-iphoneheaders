/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDTCell.h>

@interface GQDTGroupingCell : GQDTCell {

	unsigned short mLevel;
	unsigned short mRowIdx;
	unsigned short mRowCount;
	char mIsCollapsed;
	id mValue;
	id mFormat;
	CFBundleRef mProcessorBundle;
	char mHasValidFormulaValue;
	CFStringRef mFormulaValue;

}
+(CFStringRef)displayTypeString:(int)arg1 ;
-(void)setProcessorBundle:(CFBundleRef)arg1 ;
-(CFStringRef)createFormattedValue;
-(char)hasFormulaValue;
-(int)readValue:(xmlTextReaderRef)arg1 ;
-(int)readElement:(xmlTextReaderRef)arg1 ;
-(int)readAttributes:(xmlTextReaderRef)arg1 ;
-(int)readRootFormat:(xmlTextReaderRef)arg1 ;
-(unsigned short)rowIdx;
-(void)dealloc;
-(unsigned short)level;
-(id)value;
-(char)isCollapsed;
-(unsigned short)rowCount;
@end

