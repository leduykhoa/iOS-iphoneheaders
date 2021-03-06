/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptMessageCell.h>

@class CKBalloonView, UILabel, NSAttributedString;

@interface CKTranscriptBalloonCell : CKTranscriptMessageCell {

	CKBalloonView* _balloonView;
	float _transcriptDrawerWidth;
	float _drawerPercentRevealed;
	UILabel* _drawerLabel;

}

@property (nonatomic,retain) CKBalloonView * balloonView;                                          //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,retain) UIView<CKGradientReferenceView> * gradientReferenceView; 
@property (assign,nonatomic) float transcriptDrawerWidth;                                          //@synthesize transcriptDrawerWidth=_transcriptDrawerWidth - In the implementation block
@property (assign,nonatomic) float drawerPercentRevealed;                                          //@synthesize drawerPercentRevealed=_drawerPercentRevealed - In the implementation block
@property (nonatomic,copy) NSAttributedString * drawerAttributedText; 
@property (nonatomic,retain) UILabel * drawerLabel;                                                //@synthesize drawerLabel=_drawerLabel - In the implementation block
-(id)balloonView;
-(void)setBalloonView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setGradientReferenceView:(id)arg1 ;
-(void)configureForRow:(id)arg1 ;
-(id)gradientReferenceView;
-(void)setDrawerLabel:(id)arg1 ;
-(float)drawerPercentRevealed;
-(float)transcriptDrawerWidth;
-(id)drawerLabel;
-(void)setDrawerAttributedText:(id)arg1 ;
-(id)drawerAttributedText;
-(void)setDrawerPercentRevealed:(float)arg1 ;
-(void)setTranscriptDrawerWidth:(float)arg1 ;
-(void)configureForRowObject:(id)arg1 ;
@end

