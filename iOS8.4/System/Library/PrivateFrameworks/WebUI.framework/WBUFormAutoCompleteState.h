/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:52 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>
#import <WebUI/WBUCreditCardCaptureViewControllerDelegate.h>

@class NSDictionary, NSArray, NSMutableDictionary, WBUFormDataController, NSString;

@interface WBUFormAutoCompleteState : NSObject <UIActionSheetDelegate, WBUCreditCardCaptureViewControllerDelegate> {

	/*^block*/id _creditCardCaptureCompletionHandler;
	NSDictionary* _formMetadata;
	NSDictionary* _textFieldMetadata;
	unsigned long long _formType;
	long long _action;
	BOOL _gatheringFormValues;
	NSDictionary* _formValues;
	NSArray* _potentialCredentialMatches;
	BOOL _canAutoComplete;
	NSMutableDictionary* _matchesByCompletion;
	WBUFormDataController* _dataController;

}

@property (nonatomic,readonly) NSString * textFieldValue; 
@property (nonatomic,readonly) UIView*<WBUFormAutoFillWebView> webView; 
@property (nonatomic,readonly) id<WBUFormAutoFillFrameHandle> frame; 
@property (assign,nonatomic,__weak) WBUFormDataController * dataController;              //@synthesize dataController=_dataController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldSaveCredentialsInProtectionSpace:(id)arg1 ;
-(void)dealloc;
-(id<WBUFormAutoFillFrameHandle>)frame;
-(void)invalidate;
-(long long)_action;
-(UIView*<WBUFormAutoFillWebView>)webView;
-(void)acceptedAutoFillWord:(id)arg1 ;
-(BOOL)hasCurrentSuggestions;
-(void)_updateAutoFillButton;
-(void)autoFill;
-(id)initWithFormDataController:(id)arg1 ;
-(void)setAutoFillButtonTitle:(id)arg1 ;
-(void)getTextFieldMetadata:(id*)arg1 formMetadata:(id*)arg2 ;
-(void)fetchFormMetadataWithCompletion:(/*^block*/id)arg1 ;
-(void)autoFillValues:(id)arg1 andFocusField:(id)arg2 ;
-(void)autoFillGeneratedPassword:(id)arg1 inForm:(double)arg2 ;
-(void)creditCardCaptureViewControllerDidCancel:(id)arg1 ;
-(void)creditCardCaptureViewController:(id)arg1 didCaptureCreditCard:(id)arg2 ;
-(BOOL)_textFieldLooksLikeCreditCardFormField;
-(BOOL)_canAutoFillCreditCardData;
-(BOOL)_shouldUsePasswordGenerationAssistanceForTextField;
-(long long)_passwordGenerationAssistanceAction;
-(void)_ensureFormMetadata;
-(void)_gatherFormValuesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_autoFillCreditCardData;
-(void)_captureCreditCardDataWithCameraAndFill;
-(void)_generateAndSuggestPassword;
-(void)_offerToAutoFillFromPotentialCredentialMatches;
-(void)_autoFillValues:(id)arg1 ;
-(id)_matchesForPartialString:(id)arg1 ;
-(void)_autoFillFormWithCreditCardData:(id)arg1 ;
-(BOOL)_passwordGenerationAssistanceAutoFillButtonEnabled;
-(id)titleOfAutoFillButton;
-(id)suggestionsForString:(id)arg1 ;
-(WBUFormDataController *)dataController;
-(void)setDataController:(WBUFormDataController *)arg1 ;
-(NSString *)textFieldValue;
@end
