/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsUI/DDAction.h>
#import <DataDetectorsUI/EKEventEditViewDelegate.h>

@class NSString;

@interface DDCreateEventAction : DDAction <EKEventEditViewDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(id)localizedName;
-(int)interactionType;
-(void)prepareViewControllerForActionController:(id)arg1 ;
@end

