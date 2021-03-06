/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UIImage;

@interface RAPPhotoTableViewCell : UITableViewCell {

	int _appearance;
	UIButton* _addAPhotoButton;
	UIImageView* _cameraGlyphImageView;
	UIImageView* _imageView;
	UIImage* _photo;

}

@property (nonatomic,retain) UIImage * photo;              //@synthesize photo=_photo - In the implementation block
+(float)preferredHeightForAppearance:(int)arg1 photo:(id)arg2 ;
-(id)initWithAppearance:(int)arg1 reuseIdentifier:(id)arg2 ;
-(UIImage *)photo;
-(void)tintColorDidChange;
-(void)setPhoto:(UIImage *)arg1 ;
@end

