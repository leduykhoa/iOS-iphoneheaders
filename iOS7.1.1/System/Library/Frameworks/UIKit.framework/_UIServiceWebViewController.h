/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/_UIServiceWebViewControllerProtocol.h>
#import <UIKit/WebUIBrowserLoadingControllerDelegate.h>

@class _UIServiceWebView, WebUIBrowserLoadingController;

@interface _UIServiceWebViewController : UIViewController <_UIServiceWebViewControllerProtocol, WebUIBrowserLoadingControllerDelegate> {

	_UIServiceWebView* _uiWebView;
	WebUIBrowserLoadingController* _loadingController;

}
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)dealloc;
-(void)reload;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(id)_makeAlertView;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(void)_willAppearInRemoteViewController;
-(void)loadEncodedRequest:(id)arg1 ;
-(void)loadUserTypedAddress:(id)arg1 ;
-(void)setShouldDecidePolicyRemotely:(bool)arg1 ;
-(void)configureWithEncodedSettings:(id)arg1 ;
-(void)_webContentSizeWithReplyHandler:(/*^block*/ id)arg1 ;
-(bool)_isInternalInstall;
-(id)localizedApplicationNameForProcess:(int)arg1 ;
-(void)_setupRemoteInspectorDetailsForRequestingProcess;
-(void)browserLoadingControllerDidUpdateURLString:(id)arg1 ;
-(void)browserLoadingControllerDidUpdateTitle:(id)arg1 ;
-(void)browserLoadingControllerDidUpdateBackForward:(id)arg1 ;
-(void)browserLoadingControllerDidUpdateEstimatedProgress:(id)arg1 ;
-(void)browserLoadingControllerDidStartLoading:(id)arg1 ;
-(void)browserLoadingController:(id)arg1 didFinishLoadingWithError:(id)arg2 dataSource:(id)arg3 ;
-(void)_remotelyDecidePolicyForRequest:(id)arg1 inMainFrame:(bool)arg2 navigationType:(id)arg3 decisionHandler:(/*^block*/ id)arg4 ;
-(void)_remotelyDispatchWillPresentViewControllerWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)_remotelyDispatchDidDismissViewController;
@end
