/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:36 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/ODDLayoutObject.h>

@class NSMutableArray, ODDOtherwise;

@interface ODDChoose : ODDLayoutObject {

	NSMutableArray* mWhens;
	ODDOtherwise* mOtherwise;

}
-(void)dealloc;
-(id)init;
-(id)whens;
-(void)addWhen:(id)arg1 ;
-(id)otherwise;
-(void)setOtherwise:(id)arg1 ;
@end
