/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Wallpaper/Wallpaper-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol WallpaperMagicButtonActionHandler;
@class UIButton, UILabel;

@interface WallpaperMagicTableViewCell : UITableViewCell {

	UIButton* _dynamicButton;
	UIButton* _vrButton;
	UIButton* _panoramaButton;
	UILabel* _dynamicLabel;
	UILabel* _vrLabel;
	UILabel* _panoramaLabel;
	UIButton* _stillsButton;
	UILabel* _stillsLabel;
	<WallpaperMagicButtonActionHandler>* _selectionTarget;
	CGSize _buttonSize;

}

@property (nonatomic,retain) UIButton * dynamicButton;                                                  //@synthesize dynamicButton=_dynamicButton - In the implementation block
@property (nonatomic,retain) UIButton * vrButton;                                                       //@synthesize vrButton=_vrButton - In the implementation block
@property (nonatomic,retain) UIButton * panoramaButton;                                                 //@synthesize panoramaButton=_panoramaButton - In the implementation block
@property (nonatomic,retain) UILabel * dynamicLabel;                                                    //@synthesize dynamicLabel=_dynamicLabel - In the implementation block
@property (nonatomic,retain) UILabel * vrLabel;                                                         //@synthesize vrLabel=_vrLabel - In the implementation block
@property (nonatomic,retain) UILabel * panoramaLabel;                                                   //@synthesize panoramaLabel=_panoramaLabel - In the implementation block
@property (nonatomic,retain) UIButton * stillsButton;                                                   //@synthesize stillsButton=_stillsButton - In the implementation block
@property (nonatomic,retain) UILabel * stillsLabel;                                                     //@synthesize stillsLabel=_stillsLabel - In the implementation block
@property (assign,nonatomic) CGSize buttonSize;                                                         //@synthesize buttonSize=_buttonSize - In the implementation block
@property (assign,nonatomic,__weak) <WallpaperMagicButtonActionHandler> * selectionTarget;              //@synthesize selectionTarget=_selectionTarget - In the implementation block
-(void)layoutSubviews;
-(void)setSelectionTarget:(id)arg1 ;
-(id)selectionTarget;
-(id)vrButton;
-(id)panoramaButton;
-(id)dynamicButton;
-(id)stillsButton;
-(id)vrLabel;
-(id)panoramaLabel;
-(id)dynamicLabel;
-(id)stillsLabel;
-(CGRect)_rectForMagicWallpaperElement:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setDynamicButton:(id)arg1 ;
-(void)setVrButton:(id)arg1 ;
-(void)setPanoramaButton:(id)arg1 ;
-(void)setDynamicLabel:(id)arg1 ;
-(void)setVrLabel:(id)arg1 ;
-(void)setPanoramaLabel:(id)arg1 ;
-(void)setStillsButton:(id)arg1 ;
-(void)setStillsLabel:(id)arg1 ;
-(id)initWithSpec:(id)arg1 ;
-(void)setButtonSize:(CGSize)arg1 ;
-(CGSize)buttonSize;
-(void).cxx_destruct;
@end

