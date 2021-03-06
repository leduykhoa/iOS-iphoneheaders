/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:54 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface UpdateAndReportServices : NSObject {

	BOOL _update;
	BOOL _report;
	/*^block*/id _block;

}

@property (readonly) BOOL update;              //@synthesize update=_update - In the implementation block
@property (readonly) BOOL report;              //@synthesize report=_report - In the implementation block
@property (copy) id block;                     //@synthesize block=_block - In the implementation block
-(void)dealloc;
-(BOOL)update;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(BOOL)report;
-(id)initWithServices:(BOOL)arg1 needToReport:(BOOL)arg2 service:(/*^block*/id)arg3 ;
@end

