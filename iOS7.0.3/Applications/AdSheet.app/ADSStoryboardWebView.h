/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AdSheet/AdSheet-Structs.h>
#import <AdSheet/ADWebView.h>
#import <AdSheet/ADJSODelegate.h>

@protocol ADWebViewDelegateADSStoryboardWebViewDelegate, OS_dispatch_queue;
@class NSMutableArray, ADSAdImpressionController, ADAdJSO, NSObject, NSArray;

@interface ADSStoryboardWebView : ADWebView <ADJSODelegate> {

	NSMutableArray* _adDismissalObservers;
	BOOL _scrollingEnabled;
	BOOL _isShuttingDown;
	<ADWebViewDelegate><ADSStoryboardWebViewDelegate>* _delegate;
	ADSAdImpressionController* _impressionController;
	ADAdJSO* _adScriptObject;
	NSMutableArray* _mapPlugins;
	id _currentModalOwner;
	NSObject<OS_dispatch_queue>* _scriptObjectModalAccessDispatchQueue;
	NSArray* _initialCookies;

}

@property (assign,nonatomic) BOOL scrollingEnabled;                                                           //@synthesize scrollingEnabled=_scrollingEnabled - In the implementation block
@property (readonly) float estimatedProgress; 
@property (assign,nonatomic) <ADWebViewDelegate><ADSStoryboardWebViewDelegate> * delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ADSAdImpressionController * impressionController;                                //@synthesize impressionController=_impressionController - In the implementation block
@property (nonatomic,retain) ADAdJSO * adScriptObject;                                                        //@synthesize adScriptObject=_adScriptObject - In the implementation block
@property (nonatomic,retain) NSMutableArray * mapPlugins;                                                     //@synthesize mapPlugins=_mapPlugins - In the implementation block
@property (nonatomic,retain) id currentModalOwner;                                                            //@synthesize currentModalOwner=_currentModalOwner - In the implementation block
@property (assign,nonatomic) NSObject<OS_dispatch_queue> * scriptObjectModalAccessDispatchQueue;              //@synthesize scriptObjectModalAccessDispatchQueue=_scriptObjectModalAccessDispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL isShuttingDown;                                                             //@synthesize isShuttingDown=_isShuttingDown - In the implementation block
@property (nonatomic,retain) NSArray * initialCookies;                                                        //@synthesize initialCookies=_initialCookies - In the implementation block
+(void)initialize;
-(id)impressionController;
-(void)scriptObjectContentSignalsReady:(id)arg1 ;
-(void)privilegedAdWantsToDismiss;
-(void)scriptObject:(id)arg1 didReportClickEventWithContext:(id)arg2 ;
-(unsigned)scriptObjectRequestsSupportedInterfaceOrientations:(id)arg1 ;
-(void)scriptObject:(id)arg1 didChangeSupportedInterfaceOrientations:(unsigned)arg2 ;
-(BOOL)javaScriptObjectShouldBeginModalActivity:(id)arg1 ;
-(void)javaScriptObjectDidFinishModalActivity:(id)arg1 ;
-(id)scriptObject:(id)arg1 requestsURLForString:(id)arg2 allowOtherDomains:(BOOL)arg3 error:(id*)arg4 ;
-(void)scriptObject:(id)arg1 requestsPresentModalViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)scriptObject:(id)arg1 didReportSystemEventWithType:(int)arg2 ;
-(void)scriptObject:(id)arg1 requestsDismissModalViewControllerAnimated:(BOOL)arg2 ;
-(void)scriptObject:(id)arg1 requestsPreview:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)scriptObjectWillTakeScreenShot:(id)arg1 ;
-(void)scriptObjectDidTakeScreenShot:(id)arg1 ;
-(void)scriptObject:(id)arg1 requestsPresentPopoverViewController:(id)arg2 fromRect:(CGRect)arg3 animated:(BOOL)arg4 tapDismissalHandler:(/*^block*/ id)arg5 ;
-(void)scriptObject:(id)arg1 requestsDismissPopoverViewControllerAnimated:(BOOL)arg2 ;
-(void)registerForAdDimissal:(id)arg1 ;
-(void)scriptObjectPopoverShouldResize:(id)arg1 ;
-(void)setImpressionController:(id)arg1 ;
-(void)willUnloadContent;
-(void)setInitialCookies:(id)arg1 ;
-(void)configureMapPlugin:(id)arg1 ;
-(void)mapPluginDestroyed:(id)arg1 ;
-(void)setAdScriptObject:(id)arg1 ;
-(id)adScriptObject;
-(void)setCurrentModalOwner:(id)arg1 ;
-(BOOL)_scriptObjectIsModalOwner:(id)arg1 ;
-(id)webViewForScriptObject:(id)arg1 ;
-(void)scriptObject:(id)arg1 didCreateView:(id)arg2 ;
-(void)scriptObjectRequestsGeolocation:(id)arg1 ;
-(id)mapPlugins;
-(void)setMapPlugins:(id)arg1 ;
-(id)currentModalOwner;
-(id)scriptObjectModalAccessDispatchQueue;
-(void)setScriptObjectModalAccessDispatchQueue:(id)arg1 ;
-(id)initialCookies;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(id)delegate;
-(int)interfaceOrientation;
-(void)setScrollingEnabled:(BOOL)arg1 ;
-(BOOL)scrollingEnabled;
-(BOOL)_webView:(id)arg1 presentViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/ id)arg4 ;
-(void)_webView:(id)arg1 dismissViewControllerAnimated:(BOOL)arg2 completion:(/*^block*/ id)arg3 ;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4 ;
-(void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 ;
-(BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 ;
-(id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 ;
-(BOOL)accessibilityPerformEscape;
-(float)estimatedProgress;
-(id)_accessibilityUserTestingElementAttributes;
-(void)setIsShuttingDown:(BOOL)arg1 ;
-(BOOL)isShuttingDown;
@end

