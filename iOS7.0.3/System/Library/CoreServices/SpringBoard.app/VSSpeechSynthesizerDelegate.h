/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol VSSpeechSynthesizerDelegate <NSObject>
@optional
-(void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 withError:(id)arg4;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;
-(void)speechSynthesizer:(id)arg1 didPauseSpeakingRequest:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didContinueSpeakingRequest:(id)arg2;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2 forRequest:(id)arg3;
-(void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2 withError:(id)arg3;
-(void)speechSynthesizerDidStartSpeaking:(id)arg1;
-(void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2 phonemesSpoken:(id)arg3 withError:(id)arg4;
-(void)speechSynthesizerDidPauseSpeaking:(id)arg1;
-(void)speechSynthesizerDidContinueSpeaking:(id)arg1;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2;
@end

