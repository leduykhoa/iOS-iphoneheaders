/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <FuseUI/MusicProductMainViewControllerDelegate.h>
#import <FuseUI/SKUIProxyScrollViewDelegate.h>
#import <FuseUI/MusicJSNativeViewControllerFactory.h>
#import <FuseUI/MusicJSProductNativeViewControllerDelegate.h>
#import <FuseUI/MusicClientContextConsuming.h>
#import <FuseUI/SKUINavigationBarDisplayConfiguring.h>

@protocol MusicEntityProviding;
@class UIColor, MPArtworkCatalog, UIBarButtonItem, MusicEntityValueContext, NSArray, MusicProductMainViewController, MusicProductDetailViewController, SKUIProxyScrollView, MusicClientContext, UIButton, UIScrollView, NSString, SKUIClientContext;

@interface MusicProductViewController : UIViewController <MusicProductMainViewControllerDelegate, SKUIProxyScrollViewDelegate, MusicJSNativeViewControllerFactory, MusicJSProductNativeViewControllerDelegate, MusicClientContextConsuming, SKUINavigationBarDisplayConfiguring> {

	UIColor* _backgroundOverlayTintColor;
	MPArtworkCatalog* _blurArtworkCatalog;
	UIBarButtonItem* _cancelButtonItem;
	id<MusicEntityProviding> _containerEntityProvider;
	MusicEntityValueContext* _containerEntityValueContext;
	BOOL _editingWasCancelled;
	BOOL _hasReceivedViewWillAppearAtLeastOnce;
	UIColor* _headerTintColor;
	BOOL _isCollapsed;
	BOOL _needsEffectiveNavigationItemUpdateForEditingStateChangeUponViewWillAppear;
	NSArray* _nonEditingLeftBarButtonItems;
	NSArray* _nonEditingRightBarButtonItems;
	MusicProductMainViewController* _productMainViewController;
	MusicProductDetailViewController* _productDetailViewController;
	SKUIProxyScrollView* _proxyScrollView;
	id<MusicEntityProviding> _tracklistEntityProvider;
	BOOL _usesLightContentOverHeader;
	BOOL _shouldAutomaticallyDismissUponExitingEditingMode;
	MusicClientContext* _clientContext;
	long long _presentationSource;
	UIButton* _shareDocumentPopoverTarget;

}

@property (assign,nonatomic) BOOL shouldAutomaticallyDismissUponExitingEditingMode;                         //@synthesize shouldAutomaticallyDismissUponExitingEditingMode=_shouldAutomaticallyDismissUponExitingEditingMode - In the implementation block
@property (nonatomic,readonly) id<MusicEntityProviding> containerEntityProvider;                            //@synthesize containerEntityProvider=_containerEntityProvider - In the implementation block
@property (nonatomic,readonly) id<MusicEntityValueProviding> containerEntityValueProvider; 
@property (nonatomic,readonly) UIScrollView * containerScrollView; 
@property (nonatomic,readonly) long long presentationSource;                                                //@synthesize presentationSource=_presentationSource - In the implementation block
@property (nonatomic,readonly) MusicProductDetailViewController * productDetailViewController;              //@synthesize productDetailViewController=_productDetailViewController - In the implementation block
@property (nonatomic,readonly) MusicProductMainViewController * productMainViewController;                  //@synthesize productMainViewController=_productMainViewController - In the implementation block
@property (nonatomic,readonly) id<MusicEntityProviding> tracklistEntityProvider;                            //@synthesize tracklistEntityProvider=_tracklistEntityProvider - In the implementation block
@property (assign,nonatomic,__weak) UIButton * shareDocumentPopoverTarget;                                  //@synthesize shareDocumentPopoverTarget=_shareDocumentPopoverTarget - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
+(Class)storeEntityValueProviderClass;
-(void)commitEditing;
-(void)dealloc;
-(id)navigationItem;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id<MusicEntityValueProviding>)containerEntityValueProvider;
-(long long)presentationSource;
-(id<MusicEntityProviding>)tracklistEntityProvider;
-(id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 existingJSProductNativeViewController:(id)arg4 ;
-(void)setShouldAutomaticallyDismissUponExitingEditingMode:(BOOL)arg1 ;
-(id<MusicEntityProviding>)containerEntityProvider;
-(BOOL)shouldAutomaticallyPopForMissingContainerEntityValueProvider;
-(void)setShareDocumentPopoverTarget:(UIButton *)arg1 ;
-(MusicProductMainViewController *)productMainViewController;
-(MusicProductDetailViewController *)productDetailViewController;
-(void)productMainViewControllerDidTapEdit:(id)arg1 ;
-(id)newProductDetailViewController;
-(id)newProductMainViewController;
-(BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2 ;
-(void)_reloadContainerEntityValueContextProperties;
-(void)_containerEntityProviderDidInvalidateNotification:(id)arg1 ;
-(void)cancelEditing;
-(id)_containerMetadataContextWithContainerJSDictionary:(id)arg1 tracklistItemJSDictionaries:(id)arg2 ;
-(void)_updateEffectiveNavigationItemForEditingStateChangeAnimated:(BOOL)arg1 ;
-(UIScrollView *)containerScrollView;
-(id)_effectiveNavigationItem;
-(void)_handleCancelButtonTapped:(id)arg1 ;
-(void)jsProductNativeViewController:(id)arg1 presentShareDocument:(id)arg2 options:(id)arg3 ;
-(void)jsProductNativeViewController:(id)arg1 setProductEntityValueProviderData:(id)arg2 ;
-(void)jsProductNativeViewController:(id)arg1 setReportingInformation:(id)arg2 ;
-(void)jsProductNativeViewController:(id)arg1 setTracklistItems:(id)arg2 ;
-(void)jsProductNativeViewController:(id)arg1 setRelatedContentDocument:(id)arg2 options:(id)arg3 ;
-(id)loadJSNativeViewControllerWithAppContext:(id)arg1 ;
-(BOOL)shouldAutomaticallyDismissUponExitingEditingMode;
-(BOOL)_calculateCollapsed;
-(void)_updateSplitChildViewControllers;
-(void)_initializeHeaderTintColor;
-(void)_configureContainerEntityValueContext;
-(void)_registerForNotificationsForContainerEntityProvider:(id)arg1 ;
-(void)_unregisterForNotificationsForContainerEntityProvider:(id)arg1 ;
-(void)_updateStoreEntityProvidersWithCompletionHandler:(/*^block*/id)arg1 ;
-(UIButton *)shareDocumentPopoverTarget;
-(void)_updateProductHeaderLockupColorsForArtworkBackgroundColor:(id)arg1 requiresLightContent:(BOOL)arg2 allowsBarsAppearanceUpdate:(BOOL)arg3 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(BOOL)prefersNavigationBarBackgroundViewHidden;
-(id)navigationBarTintColor;
-(void)scrollViewDidChangeContentInset:(id)arg1 ;
@end

