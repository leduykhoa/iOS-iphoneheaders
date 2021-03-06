/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Restaurants/Restaurants-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class SARestaurantRestaurantsSnippet, NSMutableArray, NSNumber, UICollectionView, NSString;

@interface SiriRestaurantsListViewController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	SARestaurantRestaurantsSnippet* _snippet;
	BOOL _showTableTimes;
	NSMutableArray* _logoButtons;
	NSNumber* _lastCompactWidth;

}

@property (nonatomic,retain) UICollectionView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_configureAttributionCell:(id)arg1 forItem:(unsigned long long)arg2 ;
-(long long)_numberOfColumnsForCellOfType:(long long)arg1 forWidth:(double)arg2 ;
-(CGSize)_sizeForCellOfType:(long long)arg1 forCollectionViewWidth:(double)arg2 ;
-(void)_enumerateCellTypesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_sectionIsValidCellType:(long long)arg1 ;
-(double)_widthForSizing;
-(id)initWithRestaurantsSnippet:(id)arg1 ;
-(unsigned long long)_numberOfCellsForType:(long long)arg1 ;
-(id)_reuseIdentifierForCellOfType:(long long)arg1 ;
-(void)_configureCell:(id)arg1 forType:(long long)arg2 item:(long long)arg3 ;
-(BOOL)_shouldSelectCellForType:(long long)arg1 ;
-(void)_selectCellOfType:(long long)arg1 item:(long long)arg2 ;
-(double)_cellWidth;
-(void)_logoButtonPressed:(id)arg1 ;
-(void)_startDownloadingLogos:(id)arg1 ;
-(id)_restaurantsListTitleFromSnippet:(id)arg1 ;
-(void)_configureItemCell:(id)arg1 forItem:(unsigned long long)arg2 ;
-(void)_selectItemCellForItem:(unsigned long long)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)siriDidLayoutSnippetView;
@end

