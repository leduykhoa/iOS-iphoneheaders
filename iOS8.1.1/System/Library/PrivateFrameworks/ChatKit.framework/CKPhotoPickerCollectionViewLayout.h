/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:56 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@interface CKPhotoPickerCollectionViewLayout : UICollectionViewFlowLayout {

	BOOL _hideSelectionBadges;

}

@property (assign,nonatomic) BOOL hideSelectionBadges;              //@synthesize hideSelectionBadges=_hideSelectionBadges - In the implementation block
-(CGRect)_floatingSelectionBadgeFrameForItemFrame:(CGRect)arg1 visibleItemFrame:(CGRect)arg2 atIndexPath:(id)arg3 ;
-(id)_badgeLayoutAttributesForItemLayoutAttributes:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)setHideSelectionBadges:(BOOL)arg1 ;
-(BOOL)hideSelectionBadges;
@end

