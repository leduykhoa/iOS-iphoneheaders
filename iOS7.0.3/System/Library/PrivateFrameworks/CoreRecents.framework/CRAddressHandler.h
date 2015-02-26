/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:06:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol CRAddressHandler;
@class CRAddressHandlerIdentity;

@interface CRAddressHandler : NSObject {

	<CRAddressHandler>* _handler;
	CRAddressHandlerIdentity* _identity;

}

@property (nonatomic,retain) CRAddressHandlerIdentity * identity;              //@synthesize identity=_identity - In the implementation block
+(id)addressHandlerWithPrincipalClass:(Class)arg1 ;
-(id)externalAddressFromAddress:(id)arg1 kind:(id)arg2 ;
-(id)addressFromExternalAddress:(id)arg1 kind:(id)arg2 ;
-(id)syncKeyForAddress:(id)arg1 kind:(id)arg2 ;
-(id)supportedAddressKinds;
-(id)initWithPrincipalClass:(Class)arg1 ;
-(id)initWithAddressHandler:(id)arg1 ;
-(id)identity;
-(void)dealloc;
-(id)description;
-(void)setIdentity:(id)arg1 ;
@end
