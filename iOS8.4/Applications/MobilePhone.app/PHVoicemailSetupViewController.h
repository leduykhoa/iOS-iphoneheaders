/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:52 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobilePhone/TPSetPINViewControllerDelegate.h>
#import <MobilePhone/PHVoicemailGreetingViewControllerDelegate.h>

@protocol PHVoicemailSetupViewControllerDelegate;
@class PHVoicemailNavigationController, NSTimer, PhoneNavigationController;

@interface PHVoicemailSetupViewController : UIViewController <TPSetPINViewControllerDelegate, PHVoicemailGreetingViewControllerDelegate> {

	PHVoicemailNavigationController* _navigationController;
	NSTimer* _passwordChangeTimedOutTimer;
	id<PHVoicemailSetupViewControllerDelegate> _voicemailSetupDelegate;
	PhoneNavigationController* _setupPINAndGreetingNavigationController;

}

@property (assign) PHVoicemailNavigationController * navigationController;                           //@synthesize navigationController=_navigationController - In the implementation block
@property (assign) id<PHVoicemailSetupViewControllerDelegate> voicemailSetupDelegate;                //@synthesize voicemailSetupDelegate=_voicemailSetupDelegate - In the implementation block
@property (retain) PhoneNavigationController * setupPINAndGreetingNavigationController;              //@synthesize setupPINAndGreetingNavigationController=_setupPINAndGreetingNavigationController - In the implementation block
-(void)voicemailGreetingViewControllerFinished:(id)arg1 ;
-(void)_setupNoContentViewForInitialSetup;
-(char)_hasValidProvisionalPIN;
-(void)setSetupPINAndGreetingNavigationController:(PhoneNavigationController *)arg1 ;
-(void)_handleVoicemailPasswordChangeTimedOut;
-(PhoneNavigationController *)setupPINAndGreetingNavigationController;
-(void)_voicemailSetupButtonTapped;
-(id<PHVoicemailSetupViewControllerDelegate>)voicemailSetupDelegate;
-(void)setVoicemailSetupDelegate:(id<PHVoicemailSetupViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reset;
-(PHVoicemailNavigationController *)navigationController;
-(void)loadView;
-(void)setNavigationController:(PHVoicemailNavigationController *)arg1 ;
-(void)_handleVoicemailPasswordChangeTaskNotification:(id)arg1 ;
-(id)initWithNavigationController:(id)arg1 ;
-(void)setPINViewControllerFinished:(id)arg1 success:(char)arg2 oldPIN:(id)arg3 newPIN:(id)arg4 ;
@end
