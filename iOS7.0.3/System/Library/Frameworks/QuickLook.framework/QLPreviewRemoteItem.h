/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Message/QLPreviewItem.h>

@class NSURL, NSString, QLServicePreviewContentController, QLPreviewItemProxy;

@interface QLPreviewRemoteItem : NSObject <QLPreviewItem> {

	QLServicePreviewContentController* _contentController;
	int _index;
	QLPreviewItemProxy* _proxy;
	BOOL _resolving;
	/*^block*/ id _completionBlock;

}

@property (readonly) QLPreviewItemProxy * proxy; 
@property (readonly) NSURL * previewItemURL; 
@property (readonly) NSString * previewItemTitle; 
-(void)_clearCompletionBlock;
-(id)initWithContentController:(id)arg1 index:(int)arg2 ;
-(void)resolveWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)previewItemURL;
-(id)previewItemContentType;
-(id)previewItemURLForDisplay;
-(id)previewItemTitle;
-(id)proxy;
@end

