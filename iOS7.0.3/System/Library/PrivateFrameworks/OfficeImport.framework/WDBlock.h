/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class WDText;

@interface WDBlock : NSObject {

	WDText* mText;

}
-(id)init;
-(BOOL)isEmpty;
-(id)text;
-(id)document;
-(id)initWithText:(id)arg1 ;
-(int)blockType;
-(int)textType;
-(id)runIterator;
-(id)newRunIterator;
-(void)clearProperties;
@end
