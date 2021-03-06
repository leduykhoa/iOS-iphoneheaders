/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UICollectionViewLayoutAttributes, NSString, UICollectionView;

@interface UICollectionReusableView : UIView {

	UICollectionViewLayoutAttributes* _layoutAttributes;
	NSString* _reuseIdentifier;
	UICollectionView* _collectionView;
	long long _updateAnimationCount;
	struct {
		unsigned wasDequeued : 1;
	}  _reusableViewFlags;

}

@property (nonatomic,copy) NSString * reuseIdentifier;                                                                                             //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (setter=_setLayoutAttributes:,getter=_layoutAttributes,nonatomic,copy) UICollectionViewLayoutAttributes * layoutAttributes; 
@property (assign,setter=_setCollectionView:,getter=_collectionView,nonatomic) UICollectionView * collectionView; 
@property (getter=_isInUpdateAnimation,nonatomic,readonly) BOOL inUpdateAnimation; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)reuseIdentifier;
-(void)prepareForReuse;
-(void)applyLayoutAttributes:(id)arg1 ;
-(id)_collectionView;
-(void)_setBaseLayoutAttributes:(id)arg1 ;
-(BOOL)_disableRasterizeInAnimations;
-(void)_setLayoutAttributes:(id)arg1 ;
-(void)_setCollectionView:(id)arg1 ;
-(BOOL)_isInUpdateAnimation;
-(id)_layoutAttributes;
-(BOOL)_wasDequeued;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)_markAsDequeued;
-(void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(void)_addUpdateAnimation;
-(void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(void)_clearUpdateAnimation;
-(void)_setReuseIdentifier:(id)arg1 ;
@end

