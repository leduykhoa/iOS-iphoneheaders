/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <StoreKitUI/SKUIArtworkRequestDelegate.h>
#import <StoreKitUI/SKUIProductPageOverlayDelegate.h>
#import <StoreKitUI/SKUIResourceLoaderDelegate.h>
#import <StoreKitUI/SKUIStorePageCollectionViewDelegate.h>
#import <StoreKitUI/SKUILayoutCacheDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <StoreKitUI/SKUIViewControllerTesting.h>
#import <StoreKitUI/SKUIMetricsViewController.h>
#import <UIKit/UIViewControllerRestoration.h>

@protocol SKUIStorePageDataSource, SKUIStorePageDelegate;
@class SKUIProductPageOverlayController, SKUIArtworkRequest, UIImage, SKUIClientContext, UICollectionView, NSArray, NSString, SSMetricsPageEvent, NSURLRequest, SSVLoadURLOperation, NSMapTable, NSOperationQueue, SKUIMetricsController, NSDictionary, SKUIColorScheme, UIView, UIRefreshControl, SKUIResourceLoader, NSMutableArray, SKUIStorePage, SKUILayoutCache;

@interface SKUIStorePageViewController : UIViewController <SKUIArtworkRequestDelegate, SKUIProductPageOverlayDelegate, SKUIResourceLoaderDelegate, SKUIStorePageCollectionViewDelegate, SKUILayoutCacheDelegate, UICollectionViewDataSource, SKUIViewControllerTesting, SKUIMetricsViewController, UIViewControllerRestoration> {

	SKUIProductPageOverlayController* _activeOverlayController;
	SKUIArtworkRequest* _backgroundArtworkRequest;
	UIImage* _backgroundImage;
	SKUIClientContext* _clientContext;
	UICollectionView* _collectionView;
	UIEdgeInsets _contentInsetAdjustments;
	<SKUIStorePageDataSource>* _dataSource;
	<SKUIStorePageDelegate>* _delegate;
	long long _disappearOrientation;
	NSArray* _initialOverlayURLs;
	NSString* _lastDataConsumerClassName;
	SSMetricsPageEvent* _lastPageEvent;
	NSURLRequest* _lastRequest;
	bool _loadOnAppear;
	SSVLoadURLOperation* _loadOperation;
	NSMapTable* _menuSectionContexts;
	NSOperationQueue* _operationQueue;
	SKUIMetricsController* _metricsController;
	SKUIProductPageOverlayController* _overlayController;
	NSString* _performanceTestName;
	NSDictionary* _performanceTestOptions;
	SKUIColorScheme* _placeholderColorScheme;
	UIView* _pinnedHeaderView;
	UIRefreshControl* _refreshControl;
	SKUIResourceLoader* _resourceLoader;
	NSMutableArray* _sections;
	SKUIStorePage* _storePage;
	SKUILayoutCache* _textLayoutCache;

}

@property (getter=isLoading,nonatomic,readonly) bool loading; 
@property (nonatomic,copy) SKUIStorePage * storePage;                                    //@synthesize storePage=_storePage - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                          //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) <SKUIStorePageDataSource> * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) <SKUIStorePageDelegate> * delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                          //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) UIRefreshControl * refreshControl;                          //@synthesize refreshControl=_refreshControl - In the implementation block
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(id)_resourceLoader;
-(id)operationQueue;
-(void)setOperationQueue:(id)arg1 ;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)dataSource;
-(id)delegate;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(bool)isLoading;
-(void)_setBackgroundImage:(id)arg1 ;
-(void)setRefreshControl:(id)arg1 ;
-(id)refreshControl;
-(id)_collectionView;
-(void).cxx_destruct;
-(id)clientContext;
-(id)_colorScheme;
-(id)_sections;
-(void)_metricsEnterEventNotification:(id)arg1 ;
-(void)_setMetricsController:(id)arg1 ;
-(void)loadURL:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)setMetricsController:(id)arg1 ;
-(void)productPageOverlayDidDismiss:(id)arg1 ;
-(id)activeMetricsController;
-(bool)performTestWithName:(id)arg1 options:(id)arg2 ;
-(id)_defaultSectionForGridComponent:(id)arg1 ;
-(id)_defaultSectionForSwooshComponent:(id)arg1 ;
-(void)loadURLRequest:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)loadURLRequest:(id)arg1 withDataConsumer:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)_setStorePage:(id)arg1 error:(id)arg2 ;
-(void)_reloadStorePage;
-(void)_reloadCollectionView;
-(void)_setActiveProductPageOverlayController:(id)arg1 ;
-(void)_prefetchArtworkForVisibleSections;
-(void)_runPerformanceTestAfterIdle;
-(id)_menuContextForMenuComponent:(id)arg1 ;
-(id)_newStorePageSectionContext;
-(id)_childSectionsForMenuComponent:(id)arg1 selectedIndex:(long long)arg2 ;
-(void)_updateSectionsAfterMenuChange;
-(id)_sectionWithPageComponent:(id)arg1 ;
-(id)_textLayoutCache;
-(void)_enumerateVisibleSectionsUsingBlock:(/*^block*/ id)arg1 ;
-(void)_recordMetricsPageEvent:(id)arg1 forStorePage:(id)arg2 ;
-(void)_runScrollTestWithName:(id)arg1 options:(id)arg2 ;
-(id)defaultSectionForComponent:(id)arg1 ;
-(void)_showProductPage:(id)arg1 withPageEvent:(id)arg2 ;
-(void)_runPerformanceTestAfterPageLoad;
-(void)cancelPageLoad;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)resourceLoaderDidIdle:(id)arg1 ;
-(id)collectionView:(id)arg1 layout:(id)arg2 pageSectionForIndexPath:(id)arg3 ;
-(void)layoutCacheDidFinishBatch:(id)arg1 ;
-(void)loadURL:(id)arg1 withDataConsumer:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)collectionView:(id)arg1 editorialView:(id)arg2 didSelectLink:(id)arg3 ;
-(void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2 ;
-(void)_pageSectionDidDismissOverlayController:(id)arg1 ;
-(void)_setSelectedIndex:(long long)arg1 forMenuSection:(id)arg2 ;
-(void)_updateSectionsForIndex:(long long)arg1 menuSection:(id)arg2 ;
-(id)_visibleMetricsImpressionsString;
-(id)storePage;
-(void)setClientContext:(id)arg1 ;
-(void)setStorePage:(id)arg1 ;
@end

