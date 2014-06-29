/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptNativeObject.h>
#import <iTunesStoreUI/SUScriptTextFieldDelegate.h>

@class SUScriptTextFieldDelegate, NSString;

@interface SUScriptTextFieldNativeObject : SUScriptNativeObject <SUScriptTextFieldDelegate> {

	SUScriptTextFieldDelegate* _textFieldDelegate;

}

@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long keyboardType; 
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,copy) NSString * value; 
@property (assign,nonatomic) double width; 
-(void)dealloc;
-(bool)resignFirstResponder;
-(bool)becomeFirstResponder;
-(void)setValue:(id)arg1 ;
-(id)value;
-(double)width;
-(long long)autocapitalizationType;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(long long)autocorrectionType;
-(void)setAutocorrectionType:(long long)arg1 ;
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setPlaceholder:(id)arg1 ;
-(bool)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)placeholder;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)setWidth:(double)arg1 ;
-(bool)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)destroyNativeObject;
-(void)setupNativeObject;
-(id)_nativeObjectDelegate;
-(void)_setNativeObjectDelegate:(id)arg1 ;
-(void)_textDidChange:(id)arg1 ;
-(void)_textDidEndEditingOnExit:(id)arg1 ;
-(void)_sendScriptDidChange;
@end
