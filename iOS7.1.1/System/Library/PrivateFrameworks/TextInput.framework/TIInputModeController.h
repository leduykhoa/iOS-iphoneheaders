/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface TIInputModeController : NSObject {

	NSArray* _supportedInputModeIdentifiers;
	NSString* currentLocale;
	NSString* currentLanguage;
	NSArray* enabledInputModes;
	NSArray* defaultInputModes;

}

@property (readonly) NSArray * supportedInputModeIdentifiers; 
@property (readonly) NSArray * enabledInputModeIdentifiers; 
@property (nonatomic,copy) NSString * currentLocale; 
@property (nonatomic,copy) NSString * currentLanguage; 
@property (nonatomic,copy) NSArray * enabledInputModes; 
@property (nonatomic,copy) NSArray * defaultInputModes; 
+(id)sharedInputModeController;
+(id)_inputModesForLocale:(id)arg1 language:(id)arg2 modeFetcher:(/*^block*/ id)arg3 ;
-(void)dealloc;
-(id)currentLocale;
-(id)enabledInputModeIdentifiers;
-(void)setCurrentLocale:(id)arg1 ;
-(void)setCurrentLanguage:(id)arg1 ;
-(void)setEnabledInputModes:(id)arg1 ;
-(void)setDefaultInputModes:(id)arg1 ;
-(id)enabledInputModes;
-(id)defaultEnabledInputModesForCurrentLocale;
-(id)defaultInputModes;
-(id)currentLanguage;
-(id)supportedInputModeIdentifiers;
@end
