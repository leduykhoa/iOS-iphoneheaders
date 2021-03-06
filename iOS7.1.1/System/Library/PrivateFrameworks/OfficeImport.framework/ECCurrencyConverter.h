/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ECCurrencyConverter : NSObject {

	NSMutableDictionary* mXlToLassoCurrencyCode;
	NSMutableDictionary* mLassoToXlCurrencyCode;
	NSMutableDictionary* mXlAccountingFormat;
	NSMutableDictionary* mXlToLassoCurrencyCodeBySymbol;

}
+(id)currencyConverter;
-(void)populateDictionaries;
-(id)lassoCurrencyCodeForDollar;
-(void)dealloc;
-(id)lassoCurrencyCodeFromXl:(id)arg1 ;
-(id)xlCurrencyCodeFromLasso:(id)arg1 ;
-(int)xlAccountFormatFromLasso:(id)arg1 ;
@end

