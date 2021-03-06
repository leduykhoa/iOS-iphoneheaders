/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SearchBarDelegate <NSObject>
@property (nonatomic,readonly) DirectionsSearchViewController * directionsSearchViewController; 
@property (nonatomic,readonly) BOOL isRotating; 
@required
-(id)collectionsViewController;
-(id)directionsSearchViewController;
-(void)searchBarDidPresentPopover:(id)arg1 shouldReselectAnnotation:(BOOL)arg2;
-(void)searchBarDirectionsButtonWasTapped:(id)arg1;
-(void)searchBar:(id)arg1 choseHistoryItem:(id)arg2;
-(void)searchBar:(id)arg1 choseBookmark:(id)arg2;
-(void)searchBarBookmarksButtonWasTapped:(id)arg1;
-(void)searchBarCancelButtonWasTapped:(id)arg1;
-(BOOL)isRotating;
-(id)mapView;
@end

