/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIAlertControllerContaining.h>
#import <UIKit/_UIAlertControllerTextFieldViewControllerContaining.h>
#import <UIKit/UIAlertControllerVisualStyleProviding.h>

@protocol UIAlertControllerVisualStyleProviding;
@class NSString, NSAttributedString, NSMutableArray, NSSet, UIAlertAction, NSObject, UIViewController, _UIAlertControllerTextFieldViewController, UITapGestureRecognizer, UIPopoverController, NSArray, UIView;

@interface UIAlertController : UIViewController <UIAlertControllerContaining, _UIAlertControllerTextFieldViewControllerContaining, UIAlertControllerVisualStyleProviding> {

	NSString* _message;
	NSAttributedString* _attributedTitle;
	NSAttributedString* _attributedMessage;
	NSAttributedString* _attributedDetailMessage;
	NSMutableArray* _actions;
	NSMutableArray* _actionDelimiterIndices;
	NSSet* _linkedAlertControllers;
	UIAlertAction* _cancelAction;
	UIAlertAction* _defaultAction;
	long long _resolvedStyle;
	long long _preferredStyle;
	NSObject*<UIAlertControllerVisualStyleProviding> _styleProvider;
	UIViewController* _contentViewController;
	_UIAlertControllerTextFieldViewController* _textFieldViewController;
	BOOL _textFieldsHidden;
	UITapGestureRecognizer* _backButtonDismissGestureRecognizer;
	id _ownedTransitioningDelegate;
	BOOL _shouldEnsureContentControllerViewIsVisibleOnAppearance;
	BOOL _hidden;
	BOOL __shouldAllowNilParameters;
	BOOL _hasPreservedInputViews;
	BOOL __shouldFlipFrameForShimDismissal;
	UIPopoverController* __compatibilityPopoverController;

}

@property (assign,nonatomic) NSArray * actions; 
@property (nonatomic,readonly) NSArray * textFields; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
@property (assign,nonatomic) long long preferredStyle; 
@property (setter=_setAttributedTitle:,getter=_attributedTitle,nonatomic,copy) NSAttributedString * attributedTitle; 
@property (setter=_setAttributedMessage:,getter=_attributedMessage,nonatomic,copy) NSAttributedString * attributedMessage; 
@property (setter=_setAttributedDetailMessage:,getter=_attributedDetailMessage,nonatomic,copy) NSAttributedString * attributedDetailMessage; 
@property (nonatomic,retain) UIViewController * contentViewController; 
@property (setter=_setStyleProvider:,getter=_styleProvider,nonatomic,retain) NSObject*<UIAlertControllerVisualStyleProviding> styleProvider; 
@property (assign,setter=_setDefaultAlertAction:,nonatomic) UIAlertAction * _defaultAlertAction; 
@property (assign,setter=_setShouldEnsureContentControllerViewIsVisibleOnAppearance:,nonatomic) BOOL _shouldEnsureContentControllerViewIsVisibleOnAppearance;              //@synthesize shouldEnsureContentControllerViewIsVisibleOnAppearance=_shouldEnsureContentControllerViewIsVisibleOnAppearance - In the implementation block
@property (readonly) NSMutableArray * _actions;                                                                                                                            //@synthesize actions=_actions - In the implementation block
@property (readonly) UIAlertAction * _cancelAction;                                                                                                                        //@synthesize cancelAction=_cancelAction - In the implementation block
@property (readonly) NSArray * _actionDelimiterIndices;                                                                                                                    //@synthesize actionDelimiterIndices=_actionDelimiterIndices - In the implementation block
@property (readonly) UIView * _foregroundView; 
@property (readonly) UIView * _dimmingView; 
@property (readonly) long long _resolvedStyle;                                                                                                                             //@synthesize resolvedStyle=_resolvedStyle - In the implementation block
@property (readonly) BOOL _shouldProvideDimmingView; 
@property (readonly) BOOL _shouldAlignToKeyboard; 
@property (assign,setter=_setHidden:,getter=_isHidden,nonatomic) BOOL _hidden;                                                                                             //@synthesize hidden=_hidden - In the implementation block
@property (setter=_setShouldAllowNilParameters:) BOOL _shouldAllowNilParameters;                                                                                           //@synthesize _shouldAllowNilParameters=__shouldAllowNilParameters - In the implementation block
@property (assign,setter=_setCompatibilityPopoverController:,nonatomic) UIPopoverController * _compatibilityPopoverController;                                             //@synthesize _compatibilityPopoverController=__compatibilityPopoverController - In the implementation block
@property (setter=_setTextFieldsHidden:) BOOL _textFieldsHidden; 
@property (assign,setter=_setHasPreservedInputViews:,getter=_hasPreservedInputViews,nonatomic) BOOL hasPreservedInputViews;                                                //@synthesize hasPreservedInputViews=_hasPreservedInputViews - In the implementation block
@property (assign) BOOL _shouldFlipFrameForShimDismissal;                                                                                                                  //@synthesize _shouldFlipFrameForShimDismissal=__shouldFlipFrameForShimDismissal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)notifyMeConfirmationControllerWithHandler:(/*^block*/id)arg1 ;
+(BOOL)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+(id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3 ;
+(BOOL)_shouldUsePresentationController;
+(void)_setShouldUsePresentationController:(BOOL)arg1 ;
+(id)_alertControllerWithTitle:(id)arg1 message:(id)arg2 ;
-(void)_gkAddCancelButtonWithNoAction;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(UIView *)_foregroundView;
-(NSArray *)actions;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)viewDidLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(NSString *)message;
-(UIViewController *)contentViewController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_requiredNotificationsForRemoteServices;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(BOOL)_requiresCustomPresentationController;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI29*)arg1 ;
-(UIView *)_dimmingView;
-(void)setMessage:(NSString *)arg1 ;
-(BOOL)_shouldAlignToKeyboard;
-(double)_contentVerticalInsets;
-(id)_visualStyle;
-(BOOL)_canDismissWithGestureRecognizer;
-(id)_dismissGestureRecognizer;
-(id)_containedAlertController;
-(void)setPreferredStyle:(long long)arg1 ;
-(void)_addActionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 shouldDismissHandler:(/*^block*/id)arg4 ;
-(void)addAction:(id)arg1 ;
-(void)_updateModalPresentationStyle;
-(void)set_shouldFlipFrameForShimDismissal:(BOOL)arg1 ;
-(void)setCancelAction:(id)arg1 ;
-(id)_alertControllerView;
-(void)_updateProvidedStyle;
-(NSMutableArray *)_actions;
-(UIAlertAction *)_defaultAlertAction;
-(void)_dismissAnimated:(BOOL)arg1 triggeringAction:(id)arg2 ;
-(id)_textFieldViewController;
-(long long)preferredStyle;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)_updateShouldAlignToKeyboard;
-(NSArray *)textFields;
-(void)_handleReturn;
-(void)setTextFieldsCanBecomeFirstResponder:(BOOL)arg1 ;
-(void)_uninstallBackGestureRecognizer;
-(void)_clearActionHandlers;
-(void)_resolvedStyleChanged;
-(void)_installBackGestureRecognizer;
-(id)_attributedTitle;
-(void)_setAttributedTitle:(id)arg1 ;
-(id)_attributedMessage;
-(void)_setAttributedMessage:(id)arg1 ;
-(id)_attributedDetailMessage;
-(void)_setAttributedDetailMessage:(id)arg1 ;
-(void)_recomputePreferredContentSize;
-(long long)_resolvedStyle;
-(id)_currentDescriptor;
-(id)_styleProvider;
-(id)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(id)arg2 descriptor:(id)arg3 ;
-(UIAlertAction *)_cancelAction;
-(BOOL)_idiomSupportsBackGesture:(long long)arg1 ;
-(void)_dismissFromBackButton:(id)arg1 ;
-(long long)_buttonTypeForBackGestureForIdiom:(long long)arg1 ;
-(void)_reevaluateResolvedStyle;
-(void)_attemptAnimatedDismissWithGestureRecognizer:(id)arg1 ;
-(id)cancelAction;
-(void)_dismissAnimated:(BOOL)arg1 triggeringAction:(id)arg2 triggeredByPopoverDimmingView:(BOOL)arg3 ;
-(void)_fireOffActionOnTargetIfValidForAction:(id)arg1 ;
-(UIPopoverController *)_compatibilityPopoverController;
-(BOOL)_viewControllerIsPresentedInPopover:(id)arg1 ;
-(long long)_modalPresentationStyleForResolvedStyle;
-(BOOL)_shouldFlipFrameForShimDismissal;
-(id)_alertControllerContainer;
-(BOOL)_isPresentedAsPopover;
-(BOOL)_shouldProvideDimmingView;
-(void)_preserveInputViewsAnimated:(BOOL)arg1 ;
-(void)_becomeFirstResponderIfAppropriate;
-(BOOL)_shouldAllowNilParameters;
-(BOOL)_hasContentToDisplay;
-(void)_logBeingPresented;
-(void)_logBeingDismissed;
-(void)_restoreInputViewsAnimated:(BOOL)arg1 ;
-(BOOL)_shouldBecomeFirstResponder;
-(BOOL)_hasPreservedInputViews;
-(BOOL)_shouldPreserveInputViews;
-(void)_setHasPreservedInputViews:(BOOL)arg1 ;
-(CFStringRef)_powerLoggingEventName;
-(void)_returnKeyPressedInLastTextField;
-(void)_addActionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_addActionWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)_setActions:(id)arg1 ;
-(void)_setDefaultAlertAction:(id)arg1 ;
-(void)_addSectionDelimiter;
-(void)addTextFieldWithConfigurationHandler:(/*^block*/id)arg1 ;
-(void)_setTextFieldsHidden:(BOOL)arg1 ;
-(BOOL)_textFieldsHidden;
-(void)_setStyleProvider:(id)arg1 ;
-(void)_actionViewHighlightChanged:(id)arg1 ;
-(void)_actionViewTapped:(id)arg1 ;
-(BOOL)_shouldDismissAction:(id)arg1 ;
-(void)_dismissFromPopoverDimmingView;
-(void)linkAlertController:(id)arg1 ;
-(void)unlinkAlertController:(id)arg1 ;
-(id)linkedAlertControllers;
-(void)_updateViewFrameForLandscapePresentationInShimIfNecessary;
-(void)_flipFrameForShimDismissalIfNecessary;
-(BOOL)_shouldSizeToFillSuperview;
-(BOOL)_shouldFitWidthToContentViewControllerWidth;
-(void)_removeAllTextFields;
-(void)_setHidden:(BOOL)arg1 ;
-(NSArray *)_actionDelimiterIndices;
-(BOOL)_shouldEnsureContentControllerViewIsVisibleOnAppearance;
-(void)_setShouldEnsureContentControllerViewIsVisibleOnAppearance:(BOOL)arg1 ;
-(BOOL)_isHidden;
-(void)_setShouldAllowNilParameters:(BOOL)arg1 ;
-(void)_setCompatibilityPopoverController:(id)arg1 ;
@end

