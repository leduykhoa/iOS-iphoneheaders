/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/LAUIDelegate.h>

@protocol OS_dispatch_queue, PKAuthenticatorDelegate;
@class LAContext, NSObject;

@interface PKAuthenticator : NSObject <LAUIDelegate> {

	LAContext* _context;
	NSObject*<OS_dispatch_queue> _contextMutationQueue;
	unsigned long long _presentationFlag;
	BOOL _fingerPresent;
	id<PKAuthenticatorDelegate> _delegate;

}

@property (assign,nonatomic) id<PKAuthenticatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL fingerPresent;                                //@synthesize fingerPresent=_fingerPresent - In the implementation block
+(id)viewServiceBundleID;
+(unsigned long long)currentStateForPolicy:(long long)arg1 ;
+(void)preheatAuthenticator;
-(void)cancelEvaluation;
-(void)evaluateRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)fingerPresent;
-(void)evaluatePolicy:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)fallbackToSystemPasscodeUI;
-(BOOL)_delegateSupportsPasscodePresentation;
-(BOOL)_contextMatchesContext:(id)arg1 ;
-(BOOL)_delegateSupportsPasscodeDismissal;
-(BOOL)_delegateSupportsPassphrasePresentation;
-(BOOL)_delegateSupportsPassphraseDismissal;
-(void)handlePasscodeEvent:(long long)arg1 params:(id)arg2 ;
-(void)handlePassphraseEvent:(long long)arg1 params:(id)arg2 ;
-(void)handleTouchIDEvent:(long long)arg1 params:(id)arg2 ;
-(id)_swapContext:(id)arg1 ;
-(id)_compareAndSwapWithCompareContext:(id)arg1 replacementContext:(id)arg2 ;
-(void)event:(long long)arg1 params:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setFingerPresent:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<PKAuthenticatorDelegate>)arg1 ;
-(id)init;
-(id<PKAuthenticatorDelegate>)delegate;
-(id)_context;
-(id)initWithDelegate:(id)arg1 ;
@end

