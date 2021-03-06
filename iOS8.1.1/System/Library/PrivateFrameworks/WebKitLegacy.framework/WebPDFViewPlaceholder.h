/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebCore/WAKView.h>
#import <WebKitLegacy/WebPDFDocumentView.h>
#import <WebKitLegacy/WebPDFDocumentRepresentation.h>

@protocol WebPDFViewPlaceholderDelegate;
@class NSString, NSArray, WebDataSource, NSObject;

@interface WebPDFViewPlaceholder : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation> {

	NSString* _title;
	NSArray* _pageRects;
	NSArray* _pageYOrigins;
	CGPDFDocumentRef _document;
	WebDataSource* _dataSource;
	NSObject*<WebPDFViewPlaceholderDelegate> _delegate;
	BOOL _didFinishLoadAndMemoryMap;
	CGSize _containerSize;
	BOOL _didCompleteLayout;

}

@property (assign) NSObject*<WebPDFViewPlaceholderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSArray * pageRects;                                            //@synthesize pageRects=_pageRects - In the implementation block
@property (retain) NSArray * pageYOrigins;                                         //@synthesize pageYOrigins=_pageYOrigins - In the implementation block
@property (readonly) CGPDFDocumentRef document;                                    //@synthesize document=_document - In the implementation block
@property (readonly) CGPDFDocumentRef doc; 
@property (readonly) unsigned long long totalPages; 
@property (retain) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (assign) CGSize containerSize;                                           //@synthesize containerSize=_containerSize - In the implementation block
@property (nonatomic,readonly) BOOL didCompleteLayout;                             //@synthesize didCompleteLayout=_didCompleteLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setAsPDFDocRepAndView;
+(Class)_representationClassForWebFrame:(id)arg1 ;
+(id)supportedMIMETypes;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(NSObject*<WebPDFViewPlaceholderDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSObject*<WebPDFViewPlaceholderDelegate>)delegate;
-(NSString *)title;
-(void)layout;
-(unsigned long long)totalPages;
-(CGRect)rectForPageNumber:(unsigned long long)arg1 ;
-(CGPDFDocumentRef)doc;
-(NSArray *)pageRects;
-(CGPDFDocumentRef)document;
-(void)setDocument:(CGPDFDocumentRef)arg1 ;
-(BOOL)didCompleteLayout;
-(void)setPageRects:(NSArray *)arg1 ;
-(void)didUnlockDocument;
-(void)clearDocument;
-(NSArray *)pageYOrigins;
-(void)setContainerSize:(CGSize)arg1 ;
-(void)simulateClickOnLinkToURL:(id)arg1 ;
-(CGSize)containerSize;
-(void)setPageYOrigins:(NSArray *)arg1 ;
-(void)dataSourceUpdated:(id)arg1 ;
-(void)_updateTitleForURL:(id)arg1 ;
-(void)_notifyDidCompleteLayout;
-(CGSize)_computePageRects:(CGPDFDocumentRef)arg1 ;
-(void)_doPostLoadOrUnlockTasks;
-(void)dataSourceMemoryMapped;
-(void)_updateTitleForDocumentIfAvailable;
-(void)_evaluateJSForDocument:(CGPDFDocumentRef)arg1 ;
-(CGRect)_getPDFPageBounds:(CGPDFPageRef)arg1 ;
-(void)viewWillMoveToHostWindow:(id)arg1 ;
-(void)viewDidMoveToHostWindow;
-(void)receivedData:(id)arg1 withDataSource:(id)arg2 ;
-(void)receivedError:(id)arg1 withDataSource:(id)arg2 ;
-(void)finishedLoadingWithDataSource:(id)arg1 ;
-(BOOL)canProvideDocumentSource;
-(id)documentSource;
-(void)dataSourceMemoryMapFailed;
@end

