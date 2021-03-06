/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Podcasts/MTSSDownloadManagerDelegate.h>
#import <Podcasts/MTReachabilityObserver.h>

@protocol MTEpisodeButtonViewDelegate;
@class NSString, UITableView, MTEpisode, NSArray, UIButton;

@interface MTEpisodeButtonsView : UIView <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, MTSSDownloadManagerDelegate, MTReachabilityObserver> {

	NSString* _episodeUuid;
	id<MTEpisodeButtonViewDelegate> _delegate;
	UITableView* _tableView;
	MTEpisode* _episode;
	NSArray* _buttons;
	UIButton* _playEpisodeButton;
	UIButton* _markInfoButton;
	UIButton* _saveButton;
	UIButton* _otgInfoButton;
	UIButton* _deleteInfoButton;
	UIButton* _downloadInfoButton;

}

@property (nonatomic,retain) NSString * episodeUuid;                                       //@synthesize episodeUuid=_episodeUuid - In the implementation block
@property (assign,nonatomic,__weak) id<MTEpisodeButtonViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                      //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) MTEpisode * episode;                                          //@synthesize episode=_episode - In the implementation block
@property (nonatomic,retain) NSArray * buttons;                                            //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) UIButton * playEpisodeButton;                                 //@synthesize playEpisodeButton=_playEpisodeButton - In the implementation block
@property (nonatomic,retain) UIButton * markInfoButton;                                    //@synthesize markInfoButton=_markInfoButton - In the implementation block
@property (nonatomic,retain) UIButton * saveButton;                                        //@synthesize saveButton=_saveButton - In the implementation block
@property (nonatomic,retain) UIButton * otgInfoButton;                                     //@synthesize otgInfoButton=_otgInfoButton - In the implementation block
@property (nonatomic,retain) UIButton * deleteInfoButton;                                  //@synthesize deleteInfoButton=_deleteInfoButton - In the implementation block
@property (nonatomic,retain) UIButton * downloadInfoButton;                                //@synthesize downloadInfoButton=_downloadInfoButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)toggleSavedForEpisodeUuid:(id)arg1 ;
+(char)toggleWatchedState:(id)arg1 ;
+(char)setPlayed:(char)arg1 manually:(char)arg2 forEpisodeUuid:(id)arg3 ;
+(float)maximumHeight;
-(void)downloadManager:(id)arg1 willRemoveDownload:(id)arg2 ;
-(void)downloadManager:(id)arg1 didUpdateDownload:(id)arg2 ;
-(void)downloadManager:(id)arg1 didAddDownload:(id)arg2 ;
-(void)downloadManager:(id)arg1 didRemoveDownloads:(id)arg2 ;
-(void)updatePlayButtonEnabledState;
-(id)reloadEpisode;
-(UIButton *)playEpisodeButton;
-(NSString *)episodeUuid;
-(MTEpisode *)episode;
-(char)hasMarkAsUnplayedButton;
-(char)isEpisodeInOTG;
-(char)hasUnsaveButton;
-(char)hasSaveButton;
-(char)hasAddToOTGButton;
-(UIButton *)downloadInfoButton;
-(UIButton *)markInfoButton;
-(char)hasPlayEpisodeButton;
-(char)hasMarkAsPlayedButton;
-(id)markInfoButtonTitle;
-(char)hasRemoveFromOTGButton;
-(UIButton *)otgInfoButton;
-(id)otgInfoButtonTitle;
-(id)savedButtonTitle;
-(id)saveButtonColor;
-(char)hasDeleteButton;
-(UIButton *)deleteInfoButton;
-(char)hasDownloadButton;
-(id)playEpisodeButtonTitle;
-(void)playEpisode:(id)arg1 ;
-(void)markButtonTapped;
-(void)toggleOTG:(id)arg1 ;
-(void)toggleSaved;
-(id)downloadInfoButtonTitle;
-(void)downloadTapped:(id)arg1 ;
-(id)deleteInfoButtonTitle;
-(void)deleteLocalCopy:(id)arg1 ;
-(void)downloadEpisodeWithUuid:(id)arg1 ;
-(void)updateDelayed;
-(id)buttonForIndex:(unsigned)arg1 ;
-(void)reachabilityChangedFrom:(char)arg1 to:(char)arg2 ;
-(void)setEpisodeUuid:(NSString *)arg1 ;
-(id)buttonTitleForIndex:(unsigned)arg1 ;
-(id)buttonColorForIndex:(unsigned)arg1 ;
-(void)setEpisode:(MTEpisode *)arg1 ;
-(void)setPlayEpisodeButton:(UIButton *)arg1 ;
-(void)setMarkInfoButton:(UIButton *)arg1 ;
-(void)setOtgInfoButton:(UIButton *)arg1 ;
-(void)setDeleteInfoButton:(UIButton *)arg1 ;
-(void)setDownloadInfoButton:(UIButton *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MTEpisodeButtonViewDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<MTEpisodeButtonViewDelegate>)delegate;
-(void)setTableView:(UITableView *)arg1 ;
-(void)update;
-(UITableView *)tableView;
-(id)buttonTitles;
-(NSArray *)buttons;
-(UIButton *)saveButton;
-(void)setSaveButton:(UIButton *)arg1 ;
-(id)actionSheet;
-(void)setButtons:(NSArray *)arg1 ;
@end

