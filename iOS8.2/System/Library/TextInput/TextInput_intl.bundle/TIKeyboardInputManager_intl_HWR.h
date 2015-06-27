/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/TextInput/TextInput_intl.bundle/TextInput_intl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIKeyboardInputManager.h>

@class TIHandwritingStrokes, NSArray, CHRecognizer;

@interface TIKeyboardInputManager_intl_HWR : TIKeyboardInputManager {

	TIHandwritingStrokes* _userDrawing;
	NSArray* _candidates;

}

@property (nonatomic,readonly) CHRecognizer * recognizer; 
@property (nonatomic,retain) TIHandwritingStrokes * userDrawing;              //@synthesize userDrawing=_userDrawing - In the implementation block
@property (nonatomic,retain) NSArray * candidates;                            //@synthesize candidates=_candidates - In the implementation block
-(void)dealloc;
-(NSArray *)candidates;
-(id)keyboardBehaviors;
-(char)usesCandidateSelection;
-(id)candidateResultSet;
-(unsigned)initialSelectedIndex;
-(void)clearInput;
-(char)usesAutoDeleteWord;
-(unsigned)inputCount;
-(char)shouldExtendPriorWord;
-(char)suppliesCompletions;
-(id)defaultCandidate;
-(void)setCandidates:(NSArray *)arg1 ;
-(char)canHandleKeyHitTest;
-(char)needsKeyHitTestResults;
-(CHRecognizer *)recognizer;
-(id)recognitionResultsForStrokes:(id)arg1 context:(id)arg2 ;
-(id)addInputObject:(id)arg1 withContext:(id)arg2 ;
-(TIHandwritingStrokes *)userDrawing;
-(void)updateCandidates;
-(char)isDummyCandidate:(id)arg1 ;
-(void)setUserDrawing:(TIHandwritingStrokes *)arg1 ;
-(id)handleKeyboardInput:(id)arg1 ;
-(void)loadDictionaries;
-(void)inputLocationChanged;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)syncMarkedTextForKeyboardState:(id)arg1 afterContextChange:(char)arg2 ;
-(void)deleteFromInputWithContext:(id)arg1 ;
@end
