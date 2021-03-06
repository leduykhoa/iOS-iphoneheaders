/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:05 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView, NSString;

@interface CAMEffectPreviewView : UICollectionViewCell {

	UILabel* _nameLabel;
	UIView* _thumbnailView;
	UIView* _dimmingView;
	CGSize _thumbnailSize;

}

@property (assign,nonatomic) CGSize thumbnailSize;                //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,retain) UIView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,copy) NSString * text; 
+(CGSize)thumbnailSizeForImageSize:(CGSize)arg1 ;
+(CGSize)sizeForImageSize:(CGSize)arg1 ;
+(double)defaultSpacing;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(void)setThumbnailView:(UIView *)arg1 ;
-(UIView *)thumbnailView;
-(CGSize)thumbnailSize;
-(void)_updateAppearance;
-(void)setThumbnailSize:(CGSize)arg1 ;
@end

