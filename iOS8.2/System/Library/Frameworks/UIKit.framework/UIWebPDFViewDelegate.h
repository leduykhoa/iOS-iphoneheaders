/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIWebPDFViewDelegate
@optional
-(id)passwordForPDFView:(id)arg1;
-(void)didDetermineDocumentBounds:(id)arg1;
-(void)pdfView:(id)arg1 zoomToRect:(CGRect)arg2 forPoint:(CGPoint)arg3 considerHeight:(char)arg4;
-(void)resetZoom:(id)arg1;
-(void)handleLinkClick:(id)arg1 inRect:(CGRect)arg2;
-(void)handleLongPressOnLink:(id)arg1 atPoint:(CGPoint)arg2 inRect:(CGRect)arg3 contentRect:(CGRect)arg4;

@end
