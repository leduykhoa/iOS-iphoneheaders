/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center~iphone/Game Center~iphone-Structs.h>
#import <GameCenterUI/GKCollectionViewDataSource.h>

@class NSMutableOrderedSet, NSString, NSMutableIndexSet, GKPlayer;

@interface GKGamesDataSource : GKCollectionViewDataSource {

	unsigned _platformItemCounts[3];
	NSMutableOrderedSet* _games;
	NSString* _daemonSeed;
	NSMutableIndexSet* _loadedPages;
	GKPlayer* _player;

}

@property (nonatomic,retain) NSMutableOrderedSet * games;                  //@synthesize games=_games - In the implementation block
@property (nonatomic,copy) NSString * daemonSeed;                          //@synthesize daemonSeed=_daemonSeed - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * loadedPages;              //@synthesize loadedPages=_loadedPages - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                            //@synthesize player=_player - In the implementation block
+(id)gamesDataSourceForPlayer:(id)arg1 ;
+(id)gamesDataSourceForUniqueGamesOfPlayer:(id)arg1 ;
+(id)gamesDataSourceForSharedGamesWithPlayer:(id)arg1 ;
+(id)gamesDataSourceForComparingPointsWithPlayer:(id)arg1 ;
-(id)daemonSeed;
-(id)games;
-(BOOL)shouldRefreshForSeed:(id)arg1 ;
-(void)setDaemonSeed:(id)arg1 ;
-(void)setGames:(id)arg1 ;
-(void)loadGameDetailsForPlayer:(id)arg1 fromGames:(id)arg2 forPages:(NSRange)arg3 handler:(/*^block*/ id)arg4 ;
-(void)loadGamesListForPlayer:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(id)itemIndexSetForPageRange:(NSRange)arg1 items:(id)arg2 ;
-(unsigned char)platformForSection:(int)arg1 ;
-(int)numberOfItemsForPlatform:(unsigned char)arg1 ;
-(int)sectionForPlatform:(unsigned char)arg1 ;
-(void)configureCell:(id)arg1 withGameRecordAtIndex:(unsigned)arg2 ;
-(unsigned)pageForItemIndex:(unsigned)arg1 ;
-(Class)headerClass;
-(id)sectionTitleForPlatform:(unsigned char)arg1 ;
-(id)loadedPages;
-(void)setLoadedPages:(id)arg1 ;
-(Class)cellClass;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)removeItemAtIndexPath:(id)arg1 ;
-(id)indexPathsForItem:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(unsigned)indexForIndexPath:(id)arg1 ;
-(unsigned)pageSize;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end

