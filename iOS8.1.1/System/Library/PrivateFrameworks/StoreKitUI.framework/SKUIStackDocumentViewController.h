/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <StoreKitUI/SKUIIndexBarControlControllerDataSource.h>
#import <StoreKitUI/SKUIIndexBarControlControllerDelegate.h>
#import <StoreKitUI/SKUIIndexBarEntryListControllerDelegate.h>
#import <StoreKitUI/SKUIModalSourceViewProvider.h>
#import <StoreKitUI/SKUIViewControllerTesting.h>
#import <StoreKitUI/SKUIDocumentViewController.h>

@class NSArray, SKUIIndexBarControlController, SKUIResourceLoader, SKUIStorePageSectionsViewController, SKUIStackTemplateElement, NSMapTable, NSString;

@interface SKUIStackDocumentViewController : SKUIViewController <SKUIIndexBarControlControllerDataSource, SKUIIndexBarControlControllerDelegate, SKUIIndexBarEntryListControllerDelegate, SKUIModalSourceViewProvider, SKUIViewControllerTesting, SKUIDocumentViewController> {

	NSArray* _entryListControllers;
	SKUIIndexBarControlController* _indexBarControlController;
	long long _layoutStyle;
	SKUIResourceLoader* _resourceLoader;
	SKUIStorePageSectionsViewController* _sectionsViewController;
	SKUIStackTemplateElement* _templateElement;
	NSMapTable* _viewElementToEntryListController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(id)_resourceLoader;
-(void)dealloc;
-(void)loadView;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(id)_colorScheme;
-(void)documentDidUpdate:(id)arg1 ;
-(id)impressionableViewElements;
-(void)skui_viewWillAppear:(BOOL)arg1 ;
-(BOOL)performTestWithName:(id)arg1 options:(id)arg2 ;
-(long long)_pinningTransitionStyle;
-(id)_pageSplitsDescription;
-(id)_indexBarViewElement;
-(void)_updateEntryListControllersWithReload:(BOOL)arg1 ;
-(void)_updateIndexBarVisibility;
-(void)_configureIndexBarControl:(id)arg1 ;
-(BOOL)_tryToScrollToSectionAtIndexPath:(id)arg1 ;
-(long long)_globalIndexFromIndexPath:(id)arg1 ;
-(long long)_maxGlobalIndex;
-(id)_indexPathFromGlobalIndex:(long long)arg1 ;
-(id)_pageComponentsWithViewElements:(id)arg1 ;
-(BOOL)_shouldShowIndexBar;
-(id)_indexBarControlController;
-(long long)indexBarControlController:(id)arg1 numberOfEntryDescriptorsInSection:(long long)arg2 ;
-(id)indexBarControlController:(id)arg1 entryDescriptorAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInIndexBarControlController:(id)arg1 ;
-(void)indexBarControlController:(id)arg1 didSelectEntryDescriptorAtIndexPath:(id)arg2 ;
-(void)indexBarControlControllerDidSelectBeyondBottom:(id)arg1 ;
-(void)indexBarControlControllerDidSelectBeyondTop:(id)arg1 ;
-(void)indexBarEntryListControllerDidInvalidate:(id)arg1 ;
-(void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithTemplateElement:(id)arg1 layoutStyle:(long long)arg2 ;
@end
