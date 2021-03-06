/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Bridge/COSSetupPageViewController.h>
#import <Bridge/COSBuddyController.h>

@class UILabel, COSPhoneView, COSWatchView, UIButton, NSString;

@interface COSUnlockConfirmationViewController : COSSetupPageViewController <COSBuddyController> {

	UILabel* _titleLabel;
	COSPhoneView* _phoneView;
	COSWatchView* _watchView;
	UILabel* _subtitleLabel;
	UILabel* _detailLabel;
	UILabel* _subDetailLabel;
	UIButton* _confirmButton;
	char _mandatory;
	char _completed;

}

@property (assign,getter=isMandatory,nonatomic) char mandatory;                           //@synthesize mandatory=_mandatory - In the implementation block
@property (assign,nonatomic,__weak) id<COSBuddyControllerDelegate> delegate; 
@property (assign,nonatomic) char completed;                                              //@synthesize completed=_completed - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_fakeBackButtonItemForTarget:(id)arg1 withAction:(SEL)arg2 ;
-(void)unlockPairingComplete:(id)arg1 ;
-(void)confirmed;
-(void)removeFromNavHierarchyOf:(id)arg1 ;
-(void)setMandatory:(char)arg1 ;
-(char)isMandatory;
-(char)completed;
-(void)setCompleted:(char)arg1 ;
-(void)_updateLayout;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(id)titleString;
-(void)back:(id)arg1 ;
@end

