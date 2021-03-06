/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIScreen, NSMutableArray, NSString;

@interface SBStarkScreenFocusController : NSObject {

	UIScreen* _screen;
	NSMutableArray* _assertions;
	NSString* _displayID;

}
-(id)focusWindow;
-(void)_updateEventFocus;
-(void)_applyAssertion:(id)arg1 ;
-(void)takeWithPriority:(float)arg1 reason:(id)arg2 forWindow:(id)arg3 bundleIdentifier:(id)arg4 pid:(int)arg5 ;
-(void)dropReason:(id)arg1 ;
-(id)initWithScreen:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
@end

