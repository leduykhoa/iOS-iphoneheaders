/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol StarkSearchBarViewDelegate;
@class UIView, StarkSearchField, UIButton, StarkFocusRingButton, NSString;

@interface StarkSearchBarView : UIView <UITextFieldDelegate> {

	char _editing;
	char _isRequiringVisibility;
	UIView* _backgroundView;
	StarkSearchField* _searchField;
	UIButton* _cancelButton;
	StarkFocusRingButton* _deleteButton;
	NSString* _searchTextBeforeEditingStarted;
	id<StarkSearchBarViewDelegate> _delegate;
	int _lightLevel;
	int _interactionModel;

}

@property (assign,nonatomic) int interactionModel;                                        //@synthesize interactionModel=_interactionModel - In the implementation block
@property (assign,nonatomic,__weak) id<StarkSearchBarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * searchText; 
@property (nonatomic,retain) UIButton * deleteButton;                                     //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,copy) NSString * searchTextBeforeEditingStarted;                     //@synthesize searchTextBeforeEditingStarted=_searchTextBeforeEditingStarted - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cancelAndEndEditingProgrammatically;
-(void)_moveViewsToFinalPosition;
-(void)_endEditingWithOutcome:(int)arg1 searchTextForCommitting:(id)arg2 ;
-(NSString *)searchTextBeforeEditingStarted;
-(void)_willChangeSearchTextToString:(id)arg1 ;
-(void)setSearchTextBeforeEditingStarted:(NSString *)arg1 ;
-(void)commitAndEndEditingWithSearchText:(id)arg1 ;
-(void)cancelAndEndEditing;
-(void)setSearchText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<StarkSearchBarViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<StarkSearchBarViewDelegate>)delegate;
-(char)isFirstResponder;
-(int)interactionModel;
-(void)beginEditing;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(NSString *)searchText;
-(UIButton *)deleteButton;
-(void)setDeleteButton:(UIButton *)arg1 ;
-(void)setInteractionModel:(int)arg1 ;
-(void)_deleteLastCharacter;
@end

