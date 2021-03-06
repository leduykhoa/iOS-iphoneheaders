/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <DataDetectorsUI/ABUnknownPersonViewControllerDelegate.h>
#import <DataDetectorsUI/DDRemoteActionViewControllerConfiguration.h>

@protocol DDRemoteActionPresenter;
@class DDAction, ABUnknownPersonViewController, NSString;

@interface DDAddToContactsViewController : UINavigationController <ABUnknownPersonViewControllerDelegate, DDRemoteActionViewControllerConfiguration> {

	id<DDRemoteActionPresenter> _proxy;
	DDAction* _action;
	ABUnknownPersonViewController* _personViewController;

}

@property (retain) DDAction * action;                               //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)cancelPressed:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(DDAction *)action;
-(void)setAction:(DDAction *)arg1 ;
-(void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2 ;
-(BOOL)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)prepareForAction:(id)arg1 ;
-(void)_augmentRecord:(void*)arg1 withResultsFromAction:(id)arg2 ;
@end

