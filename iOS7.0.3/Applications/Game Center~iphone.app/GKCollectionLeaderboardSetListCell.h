/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center~iphone/Game Center~iphone-Structs.h>
#import <GameCenterUI/GKCollectionViewCell.h>

@class NSDictionary, UIImageView, GKImageSource, UILabel;

@interface GKCollectionLeaderboardSetListCell : GKCollectionViewCell {

	NSDictionary* _metricsOverrides;
	UIImageView* _iconView;
	GKImageSource* _iconSource;
	UILabel* _nameLabel;
	UILabel* _leaderboardsLabel;

}

@property (nonatomic,retain) NSDictionary * metricsOverrides;              //@synthesize metricsOverrides=_metricsOverrides - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                       //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) GKImageSource * iconSource;                   //@synthesize iconSource=_iconSource - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                          //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * leaderboardsLabel;                  //@synthesize leaderboardsLabel=_leaderboardsLabel - In the implementation block
+(id)phoneMetrics;
+(id)padMetrics;
+(void)initialize;
+(float)defaultRowHeight;
-(void)_UIAppearance_setMetricsOverrides:(id)arg1 ;
-(id)leaderboardsLabel;
-(id)leaderboardSet;
-(void)setIconSource:(id)arg1 ;
-(void)setLeaderboardsLabel:(id)arg1 ;
-(void)setMetricsOverrides:(id)arg1 ;
-(id)iconView;
-(void)didUpdateModel;
-(id)nameLabel;
-(void)setNameLabel:(id)arg1 ;
-(void)setIconView:(id)arg1 ;
-(id)metricsOverrides;
-(id)iconSource;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
@end

