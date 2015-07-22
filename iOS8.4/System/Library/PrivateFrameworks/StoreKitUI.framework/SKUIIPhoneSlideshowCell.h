/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UIImage;

@interface SKUIIPhoneSlideshowCell : UICollectionViewCell {

	UIImageView* _imageView;
	UIImageView* _playIcon;
	CGSize _imageSize;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) CGRect imageFrame; 
@property (assign,getter=isVideo,nonatomic) BOOL video; 
@property (assign,nonatomic) CGSize imageSize;                       //@synthesize imageSize=_imageSize - In the implementation block
-(CGRect)imageFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(UIImage *)image;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)imageSize;
-(void)prepareForReuse;
-(void)setVideo:(BOOL)arg1 ;
-(BOOL)isVideo;
-(void)setImageSize:(CGSize)arg1 ;
@end
