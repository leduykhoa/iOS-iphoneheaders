/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSHashTable, NSMapTable;

@interface SBScreenManager : NSObject {

	NSHashTable* _handlers;
	NSMapTable* _screenIDToHandlerMap;
	NSMapTable* _screenIDToObserversMap;
	NSMapTable* _screenIDToSuppressionReasonsMap;
	NSMapTable* _screenIDToMainWindowMap;
	NSMapTable* _screenIDToScreenMap;
	NSHashTable* _connectedScreenIDs;

}
+(id)sharedInstance;
-(void)addConnectionHandler:(id)arg1 ;
-(void)setMainWindow:(id)arg1 forScreen:(id)arg2 ;
-(void)removeScreenObserver:(id)arg1 forScreen:(id)arg2 ;
-(BOOL)isScreenConnected:(id)arg1 ;
-(void)addScreenObserver:(id)arg1 forScreen:(id)arg2 ;
-(id)mainWindowForScreen:(id)arg1 ;
-(BOOL)isScreenSuppressed:(id)arg1 ;
-(id)screenWithID:(unsigned)arg1 ;
-(void)requestScreenWithId:(unsigned)arg1 minimumSeed:(unsigned)arg2 completion:(/*^block*/ id)arg3 ;
-(void)_updateHandlerForConnectionToScreen:(id)arg1 ;
-(void)addSuppressionReason:(id)arg1 forScreen:(id)arg2 ;
-(void)removeSuppressionReason:(id)arg1 forScreen:(id)arg2 ;
-(void)_screenDidConnect:(id)arg1 ;
-(void)_screenDidDisconnect:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

