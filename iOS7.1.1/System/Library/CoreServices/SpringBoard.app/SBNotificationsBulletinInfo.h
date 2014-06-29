/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:02 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBBBBulletinInfo.h>

@class SBNotificationsSectionInfo, SBItemInfoLayoutCache, UIImage, UIColor;

@interface SBNotificationsBulletinInfo : SBBBBulletinInfo {

	SBNotificationsSectionInfo* _sectionInfo;
	SBItemInfoLayoutCache* _layoutCache;
	UIImage* _icon;
	UIImage* _attachmentImage;
	CGSize _attachmentImageSize;
	float _secondaryTextHeight;
	BOOL _suppressingMessageForPrivacy;
	BOOL _isCachedMessageSuppressionValid;
	UIColor* _secondaryTextColor;

}

@property (nonatomic,retain) SBNotificationsSectionInfo * sectionInfo;                                               //@synthesize sectionInfo=_sectionInfo - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                                                         //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) UIColor * secondaryTextColor;                                                         //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
@property (nonatomic,retain) UIImage * attachmentImage;                                                              //@synthesize attachmentImage=_attachmentImage - In the implementation block
@property (assign,nonatomic) CGSize attachmentImageSize;                                                             //@synthesize attachmentImageSize=_attachmentImageSize - In the implementation block
@property (getter=isSuppressingMessageForPrivacy,nonatomic,readonly) BOOL suppressingMessageForPrivacy;              //@synthesize suppressingMessageForPrivacy=_suppressingMessageForPrivacy - In the implementation block
-(id)_endDate;
-(void)setAttachmentImage:(id)arg1 ;
-(id)_relevanceDateLabel;
-(id)_eventDateLabel;
-(id)attachmentImage;
-(Class)reusableViewClass;
-(float)heightForReusableViewForBulletinViewController:(id)arg1 layoutMode:(int)arg2 ;
-(void)invalidateCachedLayoutData;
-(void)populateReusableView:(id)arg1 ;
-(BOOL)isSuppressingMessageForPrivacy;
-(void)setAttachmentImageSize:(CGSize)arg1 ;
-(id)_subtitleText;
-(SCD_Struct_SB40)_relevanceDateLabelDescription;
-(id)_relevanceDateTextColor;
-(id)_primaryText;
-(id)_subtitleTextToDisplay;
-(id)_secondaryTextToDisplay;
-(id)_eventDateLabelForDisplay;
-(CGSize)_effectiveAttachmentImageSize;
-(id)_primaryTextColor;
-(id)_secondaryTextColor;
-(void)_configureRelevanceDateLabel:(id)arg1 ;
-(void)_configureEventDateLabel:(id)arg1 ;
-(id)_attachmentImageToDisplay;
-(CGSize)attachmentImageSize;
-(id)_secondaryText;
-(id)sectionInfo;
-(id)_subtitleTextColor;
-(void)dealloc;
-(id)identifier;
-(void)setIcon:(id)arg1 ;
-(void)setSectionInfo:(id)arg1 ;
-(id)secondaryTextColor;
-(id)icon;
@end
