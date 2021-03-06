/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:56:43 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPassLibraryDelegate.h>

@protocol PKGroupsControllerDelegate;
@class PKPassLibrary, NSMutableArray, NSMutableDictionary, PKCatalog, NSArray, NSString;

@interface PKGroupsController : NSObject <PKPassLibraryDelegate> {

	PKPassLibrary* _passLibrary;
	unsigned _passTypeMask;
	NSMutableArray* _groups;
	NSMutableDictionary* _passesByUniqueID;
	NSMutableDictionary* _groupsByGroupID;
	NSMutableDictionary* _indicesByGroupID;
	NSMutableDictionary* _groupIDsByPassUniqueID;
	char _suppressRemoteUpdates;
	char _enqueueRemoteUpdates;
	PKCatalog* _catalogBeforeReordering;
	NSMutableArray* _enqueuedUpdates;
	NSArray* _localPasses;
	char _limitedMode;
	char _activePassesOnly;
	char _reorderingEnabled;
	char _shouldSeparatePaymentPasses;
	id<PKGroupsControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<PKGroupsControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (getter=isReorderingEnabled,nonatomic,readonly) char reorderingEnabled;              //@synthesize reorderingEnabled=_reorderingEnabled - In the implementation block
@property (assign,nonatomic) char shouldSeparatePaymentPasses;                                 //@synthesize shouldSeparatePaymentPasses=_shouldSeparatePaymentPasses - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)indexOfGroup:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<PKGroupsControllerDelegate>)arg1 ;
-(id)init;
-(id<PKGroupsControllerDelegate>)delegate;
-(id)groupAtIndex:(unsigned)arg1 ;
-(void)passLibrary:(id)arg1 receivedUpdatedCatalog:(id)arg2 passes:(id)arg3 ;
-(void)handleUserPassDelete:(id)arg1 ;
-(void)loadGroupsSynchronously;
-(unsigned)groupCount;
-(void)_updateStateWithCatalog:(id)arg1 passes:(id)arg2 notify:(char)arg3 ;
-(void)_getPassesAndCatalogWithHandler:(/*^block*/id)arg1 ;
-(void)reloadGroupsWithCompletion:(/*^block*/id)arg1 ;
-(unsigned)_indexOfGroupID:(id)arg1 ;
-(void)_removeGroup:(id)arg1 notify:(char)arg2 ;
-(id)_copyRemoteCatalog;
-(void)_moveGroup:(id)arg1 fromIndex:(unsigned)arg2 toIndex:(unsigned)arg3 notify:(char)arg4 ;
-(void)_performEnqueuedUpdates;
-(void)_insertGroup:(id)arg1 atIndex:(unsigned)arg2 notify:(char)arg3 ;
-(void)reloadGroupsAndNotify:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performOrEnqueueUpdate:(/*^block*/id)arg1 ;
-(void)_fixIndex:(unsigned)arg1 ;
-(id)_passesDictionaryFromSet:(id)arg1 ;
-(void)_insertLocalGroupsIntoCatalog:(id)arg1 withPassesByUniqueID:(id)arg2 ;
-(id)_updateAndCreateGroupsWithCatalog:(id)arg1 passesByUniqueID:(id)arg2 notify:(char)arg3 ;
-(char)_groupIDIsNew:(id)arg1 ;
-(void)_placeGroup:(id)arg1 atIndex:(unsigned)arg2 notify:(char)arg3 ;
-(unsigned)_destinationIndexForGroupID:(id)arg1 catalogGroups:(id)arg2 skippingNewGroupsAfterIndex:(unsigned)arg3 ;
-(void)_fixIndicesFrom:(unsigned)arg1 ;
-(void)_fixIndicesFrom:(unsigned)arg1 through:(unsigned)arg2 ;
-(id)initWithPassTypeMask:(unsigned)arg1 ;
-(id)initLimited;
-(void)preloadGroupsAndFrontFaceImages;
-(void)loadGroupsWithCompletion:(/*^block*/id)arg1 ;
-(void)reloadGroups;
-(unsigned)groupIndexForPassUniqueID:(id)arg1 ;
-(unsigned)indexOfSeparationGroup;
-(void)handleUserPassIngestionWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)suppressRemoteUpdates:(char)arg1 ;
-(void)moveGroupAtIndex:(unsigned)arg1 toIndex:(unsigned)arg2 ;
-(void)enableRemoteUpdates;
-(void)addLocalPasses:(id)arg1 ;
-(char)isReorderingEnabled;
-(char)shouldSeparatePaymentPasses;
-(void)setShouldSeparatePaymentPasses:(char)arg1 ;
@end

