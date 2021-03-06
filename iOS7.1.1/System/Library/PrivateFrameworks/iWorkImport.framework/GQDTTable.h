/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDGraphic.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDTTableModel, GQDSStyle;

@interface GQDTTable : GQDGraphic <GQDNameMappable> {

	GQDTTableModel* mModel;
	GQDSStyle* mStyle;
	bool mIsStreamed;

}
+(const StateSpec*)stateForReading;
-(int)walkTableWithGenerator:(Class)arg1 state:(id)arg2 ;
-(bool)isStreamed;
-(id)defaultVectorStyleForVectorType:(int)arg1 ;
-(void)dealloc;
-(id)model;
-(void)setModel:(id)arg1 ;
-(id)tableStyle;
-(void)setTableStyle:(id)arg1 ;
@end

