/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:36 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSHashTable, NSMutableOrderedSet, NSMutableDictionary, NSMutableSet;

@interface SBAppStatusBarManager : NSObject {

	NSHashTable* _disableAlphaChangeAssertions;
	NSHashTable* _disableUserInteractionChangeAssertions;
	NSMutableOrderedSet* _windowLevelOverrideReasons;
	NSMutableDictionary* _windowLevelOverrideMap;
	float _defaultWindowLevel;
	NSMutableDictionary* _edgeInsetsDictionary;
	NSMutableSet* _activeLayoutLayers;

}

@property (nonatomic,readonly) UIEdgeInsets statusBarEdgeInsets; 
@property (nonatomic,readonly) unsigned topmostActiveLayoutLayer; 
+(id)sharedInstance;
-(void)hideStatusBar;
-(UIEdgeInsets)statusBarEdgeInsets;
-(void)setStatusBarEdgeInsets:(UIEdgeInsets)arg1 forLayoutLayer:(unsigned)arg2 ;
-(void)setStatusBarAlpha:(float)arg1 ;
-(void)removeActiveLayoutLayer:(unsigned)arg1 ;
-(void)addActiveLayoutLayer:(unsigned)arg1 ;
-(void)_addDisableAppStatusBarAlphaChangesAssertion:(id)arg1 ;
-(void)_removeDisableAppStatusBarAlphaChangesAssertion:(id)arg1 ;
-(void)_addDisableAppStatusBarUserInteractionChangesAssertion:(id)arg1 ;
-(void)_removeDisableAppStatusBarUserInteractionChangesAssertion:(id)arg1 ;
-(id)_descriptionForPropertyWithAssertions:(id)arg1 ;
-(void)_setStatusBarValueForPropertyWithAssertions:(id)arg1 setter:(/*^block*/id)arg2 ;
-(void)_updateWindowLevel;
-(void)_addAssertion:(id)arg1 toAssertions:(id)arg2 ;
-(void)_removeAssertion:(id)arg1 fromAssertions:(id)arg2 ;
-(void)_applyEdgeInsetsToStatusBar;
-(unsigned)topmostActiveLayoutLayer;
-(void)setStatusBarUserInteractionEnabled:(char)arg1 ;
-(char)isStatusBarUserInteractionEnabled;
-(void)setWindowLevel:(float)arg1 forOverrideReason:(id)arg2 ;
-(void)removeWindowLevelOverrideReason:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isStatusBarHidden;
-(void)setDefaultWindowLevel:(float)arg1 ;
-(void)showStatusBar;
@end
