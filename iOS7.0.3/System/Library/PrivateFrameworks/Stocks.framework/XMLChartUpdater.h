/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/XMLHTTPRequest.h>

@class Stock, StockChartData, XMLChartParserData;

@interface XMLChartUpdater : XMLHTTPRequest {

	id _delegate;
	Stock* _stock;
	int _interval;
	StockChartData* _currentChartData;
	XMLChartParserData* _chartParserData;

}

@property (assign,nonatomic,__weak) id delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_rangeStringForInterval:(int)arg1 ;
-(int)parseData:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)cancel;
-(void)failWithError:(id)arg1 ;
-(void)didParseData;
-(BOOL)updateChartForStock:(id)arg1 interval:(int)arg2 ;
-(id)aggregateDictionaryDomain;
-(void).cxx_destruct;
@end

