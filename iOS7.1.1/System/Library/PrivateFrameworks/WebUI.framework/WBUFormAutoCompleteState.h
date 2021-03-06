/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>

@class DOMHTMLInputElement, WebFrame, NSDictionary, NSArray, NSMutableDictionary;

@interface WBUFormAutoCompleteState : NSObject <UIActionSheetDelegate> {

	DOMHTMLInputElement* _textField;
	WebFrame* _webFrame;
	NSDictionary* _formMetadata;
	NSDictionary* _textFieldMetadata;
	unsigned long long _formType;
	long long _action;
	bool _gatheringFormValues;
	NSDictionary* _formValues;
	NSArray* _potentialCredentialMatches;
	bool _canAutoComplete;
	NSMutableDictionary* _matchesByCompletion;

}

@property (nonatomic,readonly) WebFrame * webFrame;              //@synthesize webFrame=_webFrame - In the implementation block
+(bool)_shouldSaveCredentialsInProtectionSpace:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(long long)_action;
-(void)acceptedAutoFillWord:(id)arg1 ;
-(bool)hasCurrentSuggestions;
-(id)webFrame;
-(void)_updateAutoFillButton;
-(void)autoFill;
-(bool)_textFieldLooksLikeCreditCardFormField;
-(bool)_canAutoFillCreditCardData;
-(bool)_shouldUsePasswordGenerationAssistanceForTextField;
-(long long)_passwordGenerationAssistanceAction;
-(void)_ensureFormMetadata;
-(void)_gatherFormValuesWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)_showDisallowedActionAlert;
-(void)_autoFillCreditCardData;
-(void)_generateAndSuggestPassword;
-(void)_offerToAutoFillFromPotentialCredentialMatches;
-(id)_matchesForPartialString:(id)arg1 ;
-(void)_autoFillFormWithCreditCardData:(id)arg1 ;
-(bool)_passwordGenerationAssistanceAutoFillButtonEnabled;
-(id)initWithTextField:(id)arg1 webFrame:(id)arg2 ;
-(id)titleOfAutoFillButton;
-(id)suggestionsForString:(id)arg1 ;
@end

