/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:29:07 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/WDWebServiceConnectionTask.h>

@class WDPassUpdateContext, NSString;

@interface WDGetPassTask : WDWebServiceConnectionTask {

	BOOL _userRequested;
	BOOL _serverRequested;
	WDPassUpdateContext* _context;

}

@property (nonatomic,readonly) NSString * serialNumber; 
@property (nonatomic,retain) WDPassUpdateContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL userRequested;                         //@synthesize userRequested=_userRequested - In the implementation block
@property (assign,nonatomic) BOOL serverRequested;                       //@synthesize serverRequested=_serverRequested - In the implementation block
+(id)taskWithWebService:(id)arg1 updateContext:(id)arg2 ;
-(BOOL)coalescesWithTaskSubclass:(Class)arg1 ;
-(int)actionForInactiveTask:(id)arg1 ;
-(int)actionForActiveTask:(id)arg1 ;
-(void)handleResponse:(id)arg1 data:(id)arg2 ;
-(void)setUserRequested:(BOOL)arg1 ;
-(void)setServerRequested:(BOOL)arg1 ;
-(BOOL)serverRequested;
-(BOOL)pertainsToPassTypeID:(id)arg1 serialNumber:(id)arg2 ;
-(BOOL)userRequested;
-(id)endpointComponents;
-(id)_resultFromResponseData:(id)arg1 ;
-(BOOL)_matchesGetPassTask:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)context;
-(void)setContext:(id)arg1 ;
-(id)method;
-(void)handleError:(id)arg1 ;
-(id)serialNumber;
-(id)headerFields;
@end

