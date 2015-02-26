/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class NSString, DOMDocument, DOMAbstractView;

@interface DOMHTMLFrameElement : DOMHTMLElement

@property (copy) NSString * frameBorder; 
@property (copy) NSString * longDesc; 
@property (copy) NSString * marginHeight; 
@property (copy) NSString * marginWidth; 
@property (copy) NSString * name; 
@property (assign) BOOL noResize; 
@property (copy) NSString * scrolling; 
@property (copy) NSString * src; 
@property (readonly) DOMDocument * contentDocument; 
@property (readonly) DOMAbstractView * contentWindow; 
@property (copy) NSString * location; 
@property (readonly) int width; 
@property (readonly) int height; 
-(id)contentFrame;
-(void)setName:(id)arg1 ;
-(id)name;
-(int)width;
-(int)height;
-(id)location;
-(int)structuralComplexityContribution;
-(id)src;
-(void)setSrc:(id)arg1 ;
-(id)frameBorder;
-(void)setFrameBorder:(id)arg1 ;
-(id)longDesc;
-(void)setLongDesc:(id)arg1 ;
-(id)marginHeight;
-(void)setMarginHeight:(id)arg1 ;
-(id)marginWidth;
-(void)setMarginWidth:(id)arg1 ;
-(BOOL)noResize;
-(void)setNoResize:(BOOL)arg1 ;
-(id)scrolling;
-(void)setScrolling:(id)arg1 ;
-(id)contentDocument;
-(id)contentWindow;
-(void)setLocation:(id)arg1 ;
@end
