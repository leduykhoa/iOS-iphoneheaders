/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDCanvasDelegate.h>
#import <iWorkImport/TSDErrorPresenter.h>
#import <iWorkImport/TSDModalOperationPresenter.h>
#import <iWorkImport/TSKChangeSourceObserver.h>
#import <CoreFoundation/NSCoding.h>
#import <iWorkImport/TSKScrollViewDelegate.h>
#import <iWorkImport/TSDBackgroundLayoutAndRenderStateDelegate.h>
#import <iWorkImport/TSDRepTrackerDelegateCreation.h>

@protocol TSDInteractiveCanvasControllerDelegate, TSDCanvasLayerHosting, TSDCanvasEditor, TSDRulerController, TSDEditor, TSDImageHUDController, TSDAnnotationHosting, TSDAnnotationPopoverController;
@class TSDCanvas, CALayer, TSDEditorController, TSDGuideController, TSDUserDefinedGuideController, NSObject, NSFormatter, NSMutableArray, TSDCanvasAnimation, TSDTrackerManipulatorCoordinator, TSDDynamicOperationController, TSDBackgroundLayoutAndRenderState, NSArray, TSDTileStorage, TSKDocumentRoot, TSPObjectContext, TSKCommandController, TSKChangeNotifier, TSKAccessController, TSDContainerRep, TSDCanvasView, TSDCanvasLayer, TSDGuideStorage, TSDLayoutController;

@interface TSDInteractiveCanvasController : NSObject <TSDCanvasDelegate, TSDErrorPresenter, TSDModalOperationPresenter, TSKChangeSourceObserver, NSCoding, TSKScrollViewDelegate, TSDBackgroundLayoutAndRenderStateDelegate, TSDRepTrackerDelegateCreation> {

	<TSDInteractiveCanvasControllerDelegate>* mDelegate;
	TSDCanvas* mCanvas;
	<TSDCanvasLayerHosting>* mLayerHost;
	CFDictionaryRef mContainerLayersByRep;
	CFDictionaryRef mRepLayersByRep;
	CFDictionaryRef mRepsByRepLayer;
	CFDictionaryRef mRepsByContainerLayer;
	CALayer* mRepContainerLayer;
	TSDEditorController* mEditorController;
	TSDGuideController* mGuideController;
	TSDUserDefinedGuideController* mUserDefinedGuideController;
	NSObject<TSDCanvasEditor>* mCanvasEditor;
	BOOL mHasBeenTornDown;
	BOOL mHadLayerHost;
	BOOL mLayerHostHasBeenTornDown;
	NSFormatter* mUnitFormatter;
	BOOL mResizeCanvasOnLayout;
	BOOL mCreateRepsForOffscreenLayouts;
	BOOL mShouldAutoscrollToSelectionAfterLayout;
	BOOL mSuppressAutozoomToSelectionAfterLayout;
	BOOL mShouldAnimateAutoscroll;
	BOOL mShouldCenterSelectionWhenAutoscrolling;
	CALayer* mOverlayLayer;
	BOOL mOverlayLayerSuppressed;
	CALayer* mPopoutLayer;
	NSMutableArray* mDecorators;
	BOOL mShowGrayOverlay;
	BOOL mInDynamicOperation;
	int mDynamicOperationCounter;
	BOOL mInReadMode;
	BOOL mInVersionBrowsingMode;
	CGColorRef mSelectionHighlightColor;
	BOOL mShowInvisibleObjects;
	TSDCanvasAnimation* mCurrentAnimation;
	TSDTrackerManipulatorCoordinator* mTMCoordinator;
	TSDDynamicOperationController* mDynOpController;
	NSObject<TSDRulerController>* mRulerController;
	BOOL mInspectorModeEnabled;
	NSMutableArray* mInspectorGestureRecognizersToReenable;
	/*^block*/ id mInspectorSingleTapBlock;
	CGPoint mLastTapPoint;
	CGRect mVisibleBoundsRectForTiling;
	CGRect mVisibleUnscaledRect;
	CGRect mUnobscuredScrollViewFrame;
	TSDBackgroundLayoutAndRenderState* mBackgroundLayoutAndRenderState;
	BOOL mLayoutAndRenderOnThreadDuringScroll;
	BOOL mTemporarilyDisabledLayoutAndRenderOnThreadDuringScroll;
	BOOL mCurrentlyScrolling;
	BOOL mAnimatingScroll;
	BOOL mSuppressedAutozoom;
	BOOL mTextGesturesInFlight;
	<TSDEditor>* mSelectionChangeNotificationDeferredEditor;
	BOOL mShouldAutoscrollToSelectionAfterGestures;
	BOOL mSuspendedLowPriorityThreadDispatcher;
	BOOL mCurrentlyWaitingOnThreadedLayoutAndRender;
	int mDisableThreadedLayoutAndRender;
	NSMutableArray* mHiddenTopLevelLayers;
	BOOL mShouldSuppressRendering;
	BOOL mSupportsBackgroundTileRendering;
	NSArray* mLayersWithZoomFadeAnimation;
	BOOL mDynamicallyZooming;
	float mDynamicViewScale;
	BOOL mUsesAlternateDrawableSelectionHighlight;
	float mTargetPointSize;
	BOOL mAnimatingViewScale;
	BOOL mSuppressingKeyboard;
	NSObject<TSDImageHUDController>* mImageHUDController;
	long mImageHUDLock;
	NSObject<TSDImageHUDController>* mIAHUDController;
	long mIAHUDLock;
	TSDTileStorage* mTileStorage;
	CGPoint mZoomCenterInBounds;
	NSMutableArray* mBackgroundRenderingObjects;
	<TSDAnnotationHosting>* mDisplayedAnnotation;
	<TSDAnnotationPopoverController>* mAnnotationPopoverController;
	BOOL mShouldClipThemeContentToCanvas;
	BOOL mShowUserDefinedGuides;
	BOOL mPreventSettingNilEditorOnTextResponder;
	BOOL mShowsComments;

}

@property (nonatomic,readonly) TSDCanvas * canvas; 
@property (assign,nonatomic) <TSDCanvasLayerHosting> * layerHost; 
@property (assign,nonatomic) <TSDInteractiveCanvasControllerDelegate> * delegate; 
@property (nonatomic,readonly) TSKDocumentRoot * documentRoot; 
@property (nonatomic,readonly) <TSKDocumentRootProvider> * documentRootProvider; 
@property (nonatomic,readonly) TSPObjectContext * objectContext; 
@property (nonatomic,readonly) TSKCommandController * commandController; 
@property (nonatomic,readonly) TSKChangeNotifier * changeNotifier; 
@property (nonatomic,readonly) TSKAccessController * accessController; 
@property (assign,nonatomic) BOOL resizeCanvasOnLayout; 
@property (nonatomic,readonly) CGSize defaultMinimumUnscaledCanvasSize; 
@property (assign,nonatomic) NSObject<TSDRulerController> * rulerController; 
@property (nonatomic,readonly) TSDContainerRep * topLevelContainerRepForEditing; 
@property (nonatomic,readonly) BOOL inspectorModeEnabled; 
@property (nonatomic,readonly) BOOL animatingViewScale; 
@property (nonatomic,readonly) TSDEditorController * editorController; 
@property (assign,nonatomic) BOOL preventSettingNilEditorOnTextResponder; 
@property (nonatomic,retain) NSObject<TSDCanvasEditor> * canvasEditor; 
@property (assign,nonatomic) BOOL createRepsForOffscreenLayouts; 
@property (assign,nonatomic) BOOL layoutAndRenderOnThreadDuringScroll; 
@property (nonatomic,readonly) BOOL currentlyWaitingOnThreadedLayoutAndRender; 
@property (nonatomic,readonly) BOOL currentlyScrolling; 
@property (assign,nonatomic) BOOL shouldAutoscrollToSelectionAfterLayout; 
@property (assign,nonatomic) BOOL suppressAutozoomToSelectionAfterLayout; 
@property (assign,nonatomic) BOOL textGesturesInFlight; 
@property (assign,nonatomic) BOOL shouldSuppressRendering; 
@property (nonatomic,readonly) TSDCanvasView * canvasView; 
@property (nonatomic,readonly) TSDCanvasLayer * canvasLayer; 
@property (nonatomic,readonly) float defaultViewScale; 
@property (assign,nonatomic) float viewScale; 
@property (nonatomic,readonly) float currentViewScale; 
@property (nonatomic,readonly) float fitWidthViewScale; 
@property (nonatomic,readonly) CGSize canvasScrollingOutset; 
@property (assign,nonatomic) CGRect unobscuredScrollViewFrame; 
@property (nonatomic,readonly) CGSize sizeOfScrollViewEnclosingCanvas; 
@property (assign,nonatomic) BOOL shouldClipThemeContentToCanvas; 
@property (nonatomic,readonly) TSDGuideController * guideController; 
@property (nonatomic,readonly) TSDUserDefinedGuideController * userDefinedGuideController; 
@property (assign,nonatomic) BOOL shouldShowUserDefinedGuides; 
@property (nonatomic,readonly) TSDGuideStorage * guideStorage; 
@property (nonatomic,copy) NSArray * infosToDisplay; 
@property (assign,nonatomic) CGColorRef selectionHighlightColor; 
@property (nonatomic,readonly) CGRect visibleBoundsRect; 
@property (nonatomic,readonly) CGRect visibleBoundsRectForTiling; 
@property (nonatomic,readonly) CGRect visibleBoundsRectUsingSizeOfEnclosingScrollView; 
@property (nonatomic,readonly) CGRect visibleUnscaledRect; 
@property (nonatomic,readonly) CGRect visibleUnscaledRectForCanvasUI; 
@property (nonatomic,readonly) CGRect visibleUnscaledRectForAutoscroll; 
@property (nonatomic,readonly) CGRect visibleUnscaledRectValidWhileZooming; 
@property (nonatomic,readonly) CGRect visibleUnscaledRectForScrollingAutomatically; 
@property (nonatomic,readonly) TSDLayoutController * layoutController; 
@property (nonatomic,readonly) CALayer * repContainerLayer; 
@property (nonatomic,readonly) NSArray * additionalLayersUnderRepLayers; 
@property (assign,nonatomic) BOOL usesAlternateDrawableSelectionHighlight; 
@property (nonatomic,readonly) CALayer * overlayLayer; 
@property (assign,nonatomic) BOOL overlayLayerSuppressed; 
@property (assign,nonatomic) BOOL showGrayOverlay; 
@property (assign,nonatomic) BOOL showInvisibleObjects; 
@property (assign,nonatomic) BOOL showsComments; 
@property (nonatomic,readonly) <TSDAnnotationHosting> * displayedAnnotation; 
@property (nonatomic,readonly) BOOL displayedAnnotationPresentedPinned; 
@property (nonatomic,readonly) CGSize annotationPopoverSize; 
@property (nonatomic,readonly) int annotationPreferredRectEdge; 
@property (nonatomic,readonly) TSDDynamicOperationController * dynamicOperationController; 
@property (nonatomic,readonly) TSDTrackerManipulatorCoordinator * tmCoordinator; 
@property (assign,nonatomic) BOOL inReadMode; 
@property (assign,nonatomic) BOOL inVersionBrowsingMode; 
@property (assign,nonatomic) BOOL supportsBackgroundTileRendering; 
@property (assign,nonatomic) CGPoint lastTapPoint; 
@property (nonatomic,readonly) id canvasReferenceController; 
@property (assign) CGRect p_visibleBoundsRectForTiling; 
@property (assign) CGRect p_visibleUnscaledRect; 
+(BOOL)selectorIsActionMethod:(SEL)arg1 ;
+(float)smallRepOutsetForHitTesting;
+(id)keyPathsForValuesAffectingDocumentRoot;
+(id)keyPathsForValuesAffectingEditorController;
+(id)keyPathsForValuesAffectingViewScale;
+(id)keyPathsForValuesAffectingCurrentViewScale;
-(BOOL)isPrinting;
-(id)guideStorage;
-(id)changeNotifier;
-(id)accessController;
-(float)viewScale;
-(BOOL)isCanvasInteractive;
-(CGPoint)convertBoundsToUnscaledPoint:(CGPoint)arg1 ;
-(void)invalidateLayers;
-(CGRect)visibleBoundsRectUsingSizeOfEnclosingScrollView;
-(CGRect)convertBoundsToUnscaledRect:(CGRect)arg1 ;
-(id)layerForRep:(id)arg1 ;
-(CGRect)convertUnscaledToBoundsRect:(CGRect)arg1 ;
-(BOOL)currentlyScrolling;
-(id)editorController;
-(BOOL)currentlyWaitingOnThreadedLayoutAndRender;
-(id)canvasEditor;
-(void)layoutInvalidated;
-(id)hitRep:(CGPoint)arg1 ;
-(id)commandController;
-(CGRect)visibleBoundsRect;
-(id)canvasView;
-(id)layoutController;
-(CGPoint)convertUnscaledToBoundsPoint:(CGPoint)arg1 ;
-(void)discardRepForClassChange:(id)arg1 ;
-(BOOL)shouldLayoutTilingLayer:(id)arg1 ;
-(CGRect)visibleBoundsForTilingLayer:(id)arg1 ;
-(BOOL)isInDynamicOperation;
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(id)layoutForInfo:(id)arg1 ;
-(void)deselectAll:(id)arg1 ;
-(id)repForInfo:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)repsForInfo:(id)arg1 ;
-(id)layoutsForInfo:(id)arg1 ;
-(id)imageHUDController;
-(id)repForInfo:(id)arg1 ;
-(void)backgroundLayoutAndRenderState:(id)arg1 performWorkInBackgroundTilingOnly:(BOOL)arg2 ;
-(void)backgroundLayoutAndRenderStateDidPerformBackgroundWork:(id)arg1 ;
-(void)p_rulerUnitsDidChangeNotification:(id)arg1 ;
-(void)p_annotationAuthorNameDidChange:(id)arg1 ;
-(void)p_willEnterForeground:(id)arg1 ;
-(void)addCommonObservers;
-(void)setP_visibleBoundsRectForTiling:(CGRect)arg1 ;
-(void)setP_visibleUnscaledRect:(CGRect)arg1 ;
-(void)removeCommonObservers;
-(void)teardownBackgroundRendering;
-(void)teardownCanvasEditor;
-(id)layerHost;
-(id)canvasLayer;
-(BOOL)resizeCanvasOnLayout;
-(void)p_updateCanvasSizeFromLayouts;
-(void)p_updateLayersFromReps;
-(id)dynamicOperationController;
-(void)presentError:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)presentErrors:(id)arg1 withLocalizedDescription:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)beginModalOperationWithLocalizedMessage:(id)arg1 progress:(id)arg2 cancelHandler:(/*^block*/ id)arg3 ;
-(void)endModalOperation;
-(void)p_editorControllerDidChangeTextInputEditor:(id)arg1 ;
-(void)p_editorControllerDidChangeCurrentEditors:(id)arg1 ;
-(void)p_editorControllerSelectionDidChange:(id)arg1 ;
-(void)p_editorControllerSelectionDidChangeAndWantsKeyboard:(id)arg1 ;
-(id)newCanvasEditor;
-(void)p_layoutWithReadLock;
-(id)beginEditingRep:(id)arg1 ;
-(BOOL)p_endEditingToBeginEditingRep:(id)arg1 ;
-(id)beginEditingRep:(id)arg1 clearingSelection:(BOOL)arg2 withEditorProvider:(/*^block*/ id)arg3 ;
-(void)zoomWithAnimationToUnscaledRect:(CGRect)arg1 ;
-(CGRect)visibleUnscaledRect;
-(id)beginEditingRepForInfo:(id)arg1 ;
-(id)infoForModel:(id)arg1 withSelection:(id)arg2 ;
-(void)scrollToSelection:(id)arg1 onModel:(id)arg2 ;
-(void)p_scrollModelToVisible:(id)arg1 withSelection:(id)arg2 ;
-(id)infoToScrollToForModel:(id)arg1 withSelection:(id)arg2 ;
-(id)layoutForInfoNearestVisibleRect:(id)arg1 intersectingSelection:(id)arg2 ;
-(id)validatedLayoutForInfo:(id)arg1 ;
-(void)scrollRectToVisibleWithSelectionOutset:(CGRect)arg1 animated:(BOOL)arg2 ;
-(id)p_setSelection:(id)arg1 onInfo:(id)arg2 withFlags:(unsigned)arg3 ;
-(void)scrollToSelection:(id)arg1 onModel:(id)arg2 scrollImmediately:(BOOL)arg3 ;
-(CGRect)scrollFocusRectForModel:(id)arg1 withSelection:(id)arg2 ;
-(void)p_autoscrollToSelection:(id)arg1 withInfo:(id)arg2 isInitialSelection:(BOOL)arg3 focusRect:(CGRect)arg4 scrollImmediately:(BOOL)arg5 skipZoom:(BOOL)arg6 ;
-(void)p_scrollToPrimarySelectionForEditor:(id)arg1 skipZoom:(BOOL)arg2 ;
-(void)scrollToPrimarySelectionForEditor:(id)arg1 ;
-(void)p_syncWithLayoutThread;
-(void)invalidateReps;
-(void)invalidateVisibleBounds;
-(void)p_editorDidChangeSelection:(id)arg1 withSelectionFlags:(unsigned)arg2 ;
-(void)p_editorDoneChangingSelection:(id)arg1 withFlags:(unsigned)arg2 ;
-(void)p_editorDoneChangingSelection:(id)arg1 ;
-(BOOL)shouldResizeCanvasToScrollView;
-(CGPoint)clampedUnscaledContentOffset:(CGPoint)arg1 forViewScale:(float)arg2 ;
-(void)animateToViewScale:(float)arg1 contentOffset:(CGPoint)arg2 duration:(double)arg3 orientation:(int)arg4 ;
-(CGRect)unobscuredScrollViewFrame;
-(void)setViewScale:(float)arg1 andScrollViewFrame:(CGRect)arg2 maintainPosition:(BOOL)arg3 animated:(BOOL)arg4 ;
-(id)displayedAnnotation;
-(CGRect)annotationRectInParentView;
-(CGRect)unobscuredFrameOfView:(id)arg1 ;
-(void)setUnobscuredScrollViewFrame:(CGRect)arg1 ;
-(CGRect)visibleUnscaledRectForScrollingAutomatically;
-(CGRect)p_outsetSelectionRect:(CGRect)arg1 ;
-(CGSize)sizeOfScrollViewEnclosingCanvas;
-(CGColorRef)newDefaultSelectionHighlightColor;
-(void)i_invalidateSelectionHighlightLayers;
-(id)rulerController;
-(BOOL)spellCheckingSupported;
-(BOOL)spellCheckingSuppressed;
-(BOOL)isPrintingCanvas;
-(BOOL)shouldShowTextOverflowGlyphs;
-(BOOL)shouldShowInstructionalText;
-(id)userDefinedGuideController;
-(BOOL)shouldShowUserDefinedGuides;
-(void)setShouldShowUserDefinedGuides:(BOOL)arg1 ;
-(id)infosToDisplay;
-(BOOL)p_shouldLayoutAndRenderOnThread;
-(void)p_accquireLockAndPerformAction:(/*^block*/ id)arg1 ;
-(id)p_backgroundLayoutAndRenderState;
-(id)repForLayout:(id)arg1 ;
-(void)i_layout;
-(id)p_repForLayout:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)recreateAllLayoutsAndReps;
-(CGRect)p_visibleBoundsRectUsingSizeOfEnclosingScrollView:(BOOL)arg1 ;
-(CGRect)p_visibleBoundsRectForTiling;
-(CGRect)p_calculateVisibleBoundsRectForTiling;
-(CGRect)p_visibleUnscaledRect;
-(CGRect)p_calculateVisibleUnscaledRect;
-(id)unitFormatter;
-(id)unitStringForAngle:(float)arg1 ;
-(id)topLevelRepsForHitTesting;
-(id)topLevelContainerRepForEditing;
-(id)hitRep:(CGPoint)arg1 passingTest:(/*^block*/ id)arg2 ;
-(void)p_recursiveHitKnobAtPoint:(CGPoint)arg1 inRep:(id)arg2 minDistance:(float*)arg3 hitKnob:(id*)arg4 hitRep:(id*)arg5 ;
-(id)layoutsForModel:(id)arg1 withSelection:(id)arg2 ;
-(id)layoutsForInfo:(id)arg1 intersectingSelection:(id)arg2 ;
-(BOOL)shouldPopKnobsOutsideEnclosingScrollView;
-(id)objectContext;
-(void)invalidateComments;
-(BOOL)showsComments;
-(void)setShowsComments:(BOOL)arg1 ;
-(BOOL)i_inPrintPreviewMode;
-(void)hideDisplayedAnnotation;
-(BOOL)displayedAnnotationPresentedPinned;
-(CGSize)annotationPopoverSize;
-(BOOL)selectionContainsOnlyInfosOnCanvas:(id)arg1 model:(id)arg2 ;
-(void)showAnnotation:(id)arg1 model:(id)arg2 selection:(id)arg3 beginEditing:(BOOL)arg4 pinned:(BOOL)arg5 ;
-(void)nextAnnotation:(id)arg1 ;
-(void)previousAnnotation:(id)arg1 ;
-(id)p_decorators;
-(void)updateSelectionForTapOnSelectedRep:(id)arg1 ;
-(BOOL)handleSingleTapAtPoint:(CGPoint)arg1 ;
-(void)updateSelectionForTapAtPoint:(CGPoint)arg1 extendingSelection:(BOOL)arg2 ;
-(BOOL)handleDoubleTapAtPoint:(CGPoint)arg1 ;
-(void)p_drawLayerWithReadLock:(id)arg1 ;
-(CGRect)visibleBoundsRectForTiling;
-(BOOL)supportsBackgroundTileRendering;
-(BOOL)canDrawTilingLayerInBackground:(id)arg1 ;
-(void)i_viewScrollDidChange;
-(void)p_viewScrollingEnded;
-(void)beginScrollingOperation;
-(void)makeEditorPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setAnimation:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3 ;
-(void)p_beginZoomingOperation;
-(void)p_endZoomingOperation;
-(void)endScrollingOperation;
-(void)p_setTargetPointSize:(float)arg1 ;
-(void)setNeedsDisplayOnLayer:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 onLayer:(id)arg2 ;
-(CGSize)defaultMinimumUnscaledCanvasSize;
-(CGSize)canvasScrollingOutset;
-(id)additionalLayersUnderRepLayers;
-(void)p_recursivelyUpdateLayerForRep:(id)arg1 accumulatingLayers:(id)arg2 andReps:(id)arg3 ;
-(BOOL)shouldClipThemeContentToCanvas;
-(void)p_discardLayer:(id)arg1 forRep:(id)arg2 ;
-(void)p_setupPopoutLayerForReps:(id)arg1 ;
-(BOOL)overlayLayerSuppressed;
-(id)p_overlayLayerForReps:(id)arg1 ;
-(void)i_drawRepWithReadLock:(id)arg1 inContext:(CGContextRef)arg2 forLayer:(id)arg3 ;
-(void)i_viewScrollingEnded;
-(void)scrollToPrimarySelection;
-(BOOL)p_shouldSuppressAutozoomForEditor:(id)arg1 ;
-(id)layoutForInfoNearestVisibleRect:(id)arg1 ;
-(BOOL)shouldZoomOnSelectionChange;
-(float)p_targetPointSize;
-(float)fitWidthViewScale;
-(CGRect)visibleUnscaledRectForAutoscroll;
-(BOOL)p_centerOnInitialSelection;
-(void)setViewScale:(float)arg1 contentOffset:(CGPoint)arg2 animated:(BOOL)arg3 ;
-(void)scrollRectToVisibleCenter:(CGRect)arg1 animated:(BOOL)arg2 onlyScrollNecessaryAxes:(BOOL)arg3 ;
-(void)i_viewWillBeginZooming;
-(void)viewDidEndZooming;
-(void)doubleTappedCanvasBackgroundAtPoint:(CGPoint)arg1 ;
-(id)repContainerLayer;
-(void)canvasLayoutInvalidated:(id)arg1 ;
-(void)canvasWillLayout:(id)arg1 ;
-(void)canvasDidValidateLayouts:(id)arg1 ;
-(void)canvasDidLayout:(id)arg1 ;
-(void)canvasDidValidateLayoutsWithDependencies:(id)arg1 ;
-(void)canvasDidUpdateVisibleBounds:(id)arg1 ;
-(void)canvasWillUpdateRepsFromLayouts:(id)arg1 ;
-(void)canvasDidUpdateRepsFromLayouts:(id)arg1 ;
-(CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1 ;
-(id)additionalVisibleInfosForCanvas:(id)arg1 ;
-(void)canvas:(id)arg1 createdRep:(id)arg2 ;
-(void)syncProcessChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(void)i_layerHostHasBeenTornDown;
-(void)setLayerHost:(id)arg1 ;
-(void)addBackgroundRenderingObject:(id)arg1 ;
-(void)removeBackgroundRenderingObject:(id)arg1 ;
-(id)documentRootProvider;
-(BOOL)canZoomToCurrentSelection;
-(CGPoint)smartZoomCenterForNoSelection;
-(void)zoomToCurrentSelection;
-(void)scrollCurrentSelectionToVisible;
-(void)scrollSearchReferenceToVisible:(id)arg1 ;
-(void)setSelection:(id)arg1 onModel:(id)arg2 withFlags:(unsigned)arg3 ;
-(void)setShouldSuppressRendering:(BOOL)arg1 ;
-(void)setLayoutAndRenderOnThreadDuringScroll:(BOOL)arg1 ;
-(void)resumeEditing;
-(float)defaultViewScale;
-(float)currentViewScale;
-(void)setViewScale:(float)arg1 andScrollViewFrame:(CGRect)arg2 animated:(BOOL)arg3 ;
-(void)unobscuredFrameDidChange;
-(void)displayRulerWithSlowFade:(BOOL)arg1 ;
-(void)displayRulerForRect:(CGRect)arg1 ;
-(void)hideRuler;
-(id)replaceImageController;
-(CGRect)visibleUnscaledRectForCanvasUI;
-(void)toggleShouldShowUserDefinedGuides;
-(void)makeUserDefinedGuidesVisible;
-(id)guideController;
-(id)infosForGuides;
-(CGRect)boundingRectForActiveGuidesForRect:(CGRect)arg1 ;
-(id)provideDynamicGuides;
-(id)provideUserDefinedGuides;
-(id)localizedPercentStringForAlignmentGuide:(id)arg1 ;
-(void)setInfosToDisplay:(id)arg1 ;
-(id)topLevelZOrderedSiblingsOfInfos:(id)arg1 ;
-(CGRect)visibleUnscaledRectValidWhileZooming;
-(BOOL)allowAutoscroll;
-(BOOL)allowNegativeAutoscroll;
-(CGSize)convertUnscaledToBoundsSize:(CGSize)arg1 ;
-(CGSize)convertBoundsToUnscaledSize:(CGSize)arg1 ;
-(CGSize)growUnscaledCanvasLayerSize:(CGSize)arg1 ;
-(id)unitStringForPoint:(CGPoint)arg1 ;
-(id)unitStringForSize:(CGSize)arg1 ;
-(id)unitStringForNumber:(float)arg1 ;
-(id)unitStringForAngle:(float)arg1 andLength:(float)arg2 ;
-(id)topLevelRepsForDragSelecting;
-(id)hitRepsAtPoint:(CGPoint)arg1 withSlop:(CGSize)arg2 ;
-(id)hitKnobAtPoint:(CGPoint)arg1 returningRep:(id*)arg2 ;
-(id)layoutForModel:(id)arg1 withSelection:(id)arg2 ;
-(BOOL)shouldEverShowPathHighlightOnInvisibleShapes;
-(BOOL)shouldShowPathHighlightOnUnselectedInvisibleShapes;
-(int)defaultKnobTypeForRep:(id)arg1 ;
-(BOOL)shouldShowOnRepHyperlinkUI;
-(id)actionGhostKnobForRep:(id)arg1 ;
-(void)setOverlayLayerSuppressed:(BOOL)arg1 ;
-(void)closeOverlays;
-(void)addDecorator:(id)arg1 ;
-(void)removeDecorator:(id)arg1 ;
-(void)getCurrentAnnotationAuthorCreatingIfNecessaryWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)getCurrentAnnotationAuthor:(id*)arg1 commandToCreateIfNecessary:(id*)arg2 ;
-(void)showOrHideComments:(id)arg1 ;
-(BOOL)shouldDisplayCommentUIForInfo:(id)arg1 ;
-(void)setAnnotationAuthorColor:(id)arg1 ;
-(int)annotationPreferredRectEdge;
-(void)annotationChanged:(id)arg1 model:(id)arg2 selection:(id)arg3 beginEditing:(BOOL)arg4 ;
-(void)toggleAnnotationVisibility:(id)arg1 model:(id)arg2 selection:(id)arg3 beginEditing:(BOOL)arg4 ;
-(BOOL)attachedCommentsAllowedForDrawable:(id)arg1 ;
-(void)toggleHyperlinkUIForRep:(id)arg1 ;
-(void)actionGhostKnobHitForRep:(id)arg1 ;
-(void)beginPossiblyParallelInspectorDynamicOperation;
-(void)endPossiblyParallelInspectorDynamicOperation;
-(BOOL)isInInspectorDynamicOperation;
-(void)setInReadMode:(BOOL)arg1 ;
-(BOOL)usesAlternateDrawableSelectionHighlight;
-(void)setUsesAlternateDrawableSelectionHighlight:(BOOL)arg1 ;
-(void)setShowInvisibleObjects:(BOOL)arg1 ;
-(id)tmCoordinator;
-(id)hitRepChromeAtUnscaledPoint:(CGPoint)arg1 ;
-(void)tappedCanvasBackgroundAtPoint:(CGPoint)arg1 ;
-(BOOL)shouldBeginDrawingTilingLayerInBackground:(id)arg1 returningToken:(id*)arg2 andQueue:(id*)arg3 ;
-(void)didEndDrawingTilingLayerInBackground:(id)arg1 withToken:(id)arg2 ;
-(BOOL)mustDrawTilingLayerOnMainThread:(id)arg1 ;
-(id)queueForDrawingTilingLayerInBackground:(id)arg1 ;
-(id)iaHUDController;
-(BOOL)canPerformInteractiveAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setAnimationCompletionBlock:(/*^block*/ id)arg1 ;
-(void)i_layoutRegistered:(id)arg1 ;
-(void)i_layoutUnregistered:(id)arg1 ;
-(void)i_viewIsZoomingAtPoint:(CGPoint)arg1 ;
-(void)i_viewDidZoomToViewScale:(float)arg1 ;
-(void)i_canvasContentsScaleDidChange;
-(void)i_viewScaleDidChange;
-(float)i_viewScaleForProposedViewScale:(float)arg1 originalViewScale:(float)arg2 ;
-(CGSize)i_canvasCenterOffsetForProposedViewScale:(float)arg1 originalViewScale:(float)arg2 ;
-(float)i_nextCanvasViewScaleDetentForProposedViewScale:(float)arg1 greater:(BOOL)arg2 ;
-(void)i_recordUserViewScale;
-(void)i_repNeedsDisplay:(id)arg1 ;
-(void)i_repNeedsDisplay:(id)arg1 inRect:(CGRect)arg2 ;
-(id)i_tileStorage;
-(id)i_currentAnimation;
-(id)i_descriptionForViewScale:(float)arg1 ;
-(void)i_disableThreadedLayoutAndRender;
-(void)i_enableThreadedLayoutAndRender;
-(BOOL)i_temporarilyDisabledLayoutAndRenderOnThreadDuringScroll;
-(void)p_textGesturesWillBeginNotification:(id)arg1 ;
-(void)p_textGesturesDidEndNotification:(id)arg1 ;
-(void)p_autoscrollToSelection:(id)arg1 withInfo:(id)arg2 isInitialSelection:(BOOL)arg3 focusRect:(CGRect)arg4 ;
-(id)viewWithTransferredLayers;
-(CGPoint)lastTapPoint;
-(id)canvasReferenceController;
-(void)setLastTapPoint:(CGPoint)arg1 ;
-(BOOL)inspectorModeEnabled;
-(BOOL)shouldSuppressRendering;
-(BOOL)animatingViewScale;
-(BOOL)textGesturesInFlight;
-(void)setTextGesturesInFlight:(BOOL)arg1 ;
-(void)setRulerController:(id)arg1 ;
-(void)setResizeCanvasOnLayout:(BOOL)arg1 ;
-(void)setCanvasEditor:(id)arg1 ;
-(BOOL)preventSettingNilEditorOnTextResponder;
-(void)setPreventSettingNilEditorOnTextResponder:(BOOL)arg1 ;
-(BOOL)createRepsForOffscreenLayouts;
-(void)setCreateRepsForOffscreenLayouts:(BOOL)arg1 ;
-(BOOL)layoutAndRenderOnThreadDuringScroll;
-(BOOL)shouldAutoscrollToSelectionAfterLayout;
-(void)setShouldAutoscrollToSelectionAfterLayout:(BOOL)arg1 ;
-(BOOL)suppressAutozoomToSelectionAfterLayout;
-(void)setSuppressAutozoomToSelectionAfterLayout:(BOOL)arg1 ;
-(void)setShouldClipThemeContentToCanvas:(BOOL)arg1 ;
-(BOOL)showGrayOverlay;
-(void)setShowGrayOverlay:(BOOL)arg1 ;
-(BOOL)inVersionBrowsingMode;
-(void)setInVersionBrowsingMode:(BOOL)arg1 ;
-(BOOL)inReadMode;
-(BOOL)showInvisibleObjects;
-(void)setSupportsBackgroundTileRendering:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)delegate;
-(void)setAnimationDuration:(double)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setAnimationDelay:(double)arg1 ;
-(void)beginAnimations:(id)arg1 context:(void*)arg2 ;
-(void)setAnimationDidStopSelector:(SEL)arg1 ;
-(void)setAnimationDelegate:(id)arg1 ;
-(void)layoutIfNeeded;
-(void)setAnimationRepeatAutoreverses:(BOOL)arg1 ;
-(void)commitAnimations;
-(void)setAnimationStartDate:(id)arg1 ;
-(void)setAnimationRepeatCount:(float)arg1 ;
-(void)setAnimationWillStartSelector:(SEL)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)endEditing;
-(void)forwardInvocation:(id)arg1 ;
-(CGColorRef)selectionHighlightColor;
-(void)setSelectionHighlightColor:(CGColorRef)arg1 ;
-(void)setAnimationTimingFunction:(id)arg1 ;
-(id)annotationController;
-(void)teardown;
-(id)documentRoot;
-(BOOL)hasAnnotations;
-(void)p_commonInit;
-(id)canvas;
-(id)overlayLayer;
-(void)setViewScale:(float)arg1 ;
@end

