/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:04:21 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUISnippetViewController.h>
#import <Maps/MAListSnippetViewDelegate.h>
#import <Maps/CLLocationManagerDelegate.h>
#import <Maps/SiriUIViewController.h>

@class AceObject, MAListSnippetView, CLLocationManager, NSString;

@interface MAMapsDisambiguationController : SiriUISnippetViewController <MAListSnippetViewDelegate, CLLocationManagerDelegate, SiriUIViewController> {

	MAListSnippetView* _snippetView;
	CLLocationManager* _locManager;

}

@property (nonatomic,retain) MAListSnippetView * snippetView;              //@synthesize snippetView=_snippetView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AceObject * aceObject; 
-(MAListSnippetView *)snippetView;
-(void)setSnippetView:(MAListSnippetView *)arg1 ;
-(void)listViewDidChooseReviews:(id)arg1 forMapItem:(id)arg2 ;
-(void)listView:(id)arg1 didChooseMapItem:(id)arg2 ;
-(float)desiredHeightForWidth:(float)arg1 ;
-(void)dealloc;
-(id)view;
-(void)viewWillAppear;
-(void)viewWillDisappear;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(id)initWithSnippet:(id)arg1 ;
@end

