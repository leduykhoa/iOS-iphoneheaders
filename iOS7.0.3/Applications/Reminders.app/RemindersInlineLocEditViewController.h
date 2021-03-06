/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Reminders/RemindersLocationPickerModelDelegate.h>
#import <EventKit/ABSearchOperationDelegate.h>
#import <ChatKit/MKMapViewDelegate.h>
#import <Reminders/RemindersMapDragRadiusDelegate.h>

@protocol RemindersLocationEditorDelegate;
@class UISearchBar, UIView, UITableView, UISegmentedControl, MKMapView, RemindersMapDragRadiusView, NSString, EKStructuredLocation, RemindersLocationPickerModel, NSMutableArray, MKLocalSearch, NSArray, NSOperationQueue, ABSearchOperation;

@interface RemindersInlineLocEditViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, RemindersLocationPickerModelDelegate, ABSearchOperationDelegate, MKMapViewDelegate, RemindersMapDragRadiusDelegate> {

	UISearchBar* _searchBar;
	UIView* _dividerView;
	UITableView* _tableView;
	UISegmentedControl* _proximityControl;
	MKMapView* _mapView;
	RemindersMapDragRadiusView* _dragView;
	NSString* _selectedLocationAddressString;
	EKStructuredLocation* _structuredLocation;
	int _proximity;
	RemindersLocationPickerModel* _model;
	BOOL _needsAddToRecents;
	NSMutableArray* _recents;
	MKLocalSearch* _locationSearch;
	NSArray* _locationSearchResults;
	NSOperationQueue* _abSearchQueue;
	ABSearchOperation* _abSearchOperation;
	NSMutableArray* _abSearchResults;
	<RemindersLocationEditorDelegate>* _delegate;

}

@property (assign,nonatomic) <RemindersLocationEditorDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)locationImage;
+(id)homeImage;
+(id)workImage;
+(id)pinImage;
-(void)updateRecents:(id)arg1 ;
-(void)setupMap;
-(id)dictionaryForCLLocation:(id)arg1 ;
-(void)displayLocation:(id)arg1 ;
-(BOOL)_hasLocation;
-(void)_proximityChanged:(id)arg1 ;
-(void)_updateLayoutContraints;
-(id)CLLocationForDictionary:(id)arg1 ;
-(void)resetSearchResults;
-(void)radiusDidChange:(double)arg1 ;
-(id)initWithProximity:(int)arg1 structuredLocation:(id)arg2 ;
-(void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)locationPickerModelDidUpdateCurrentLocation:(id)arg1 ;
-(void)locationPickerModelDidUpdateCustomLocation:(id)arg1 ;
-(void)locationPickerModel:(id)arg1 didUpdateMeCardItem:(int)arg2 ;
-(void)locationPickerModelDidChangeSelection:(id)arg1 ;
-(void)locationPickerModel:(id)arg1 didEncounterError:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(void)_updateUI;
-(void).cxx_destruct;
@end

