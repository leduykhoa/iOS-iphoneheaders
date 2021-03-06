/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:46 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface VOTElementGesturedTextInputAttributes : NSObject {

	BOOL _canDeleteCharacter;
	BOOL _shouldEchoCharacter;
	BOOL _acceptsRawInput;
	BOOL _shouldPlayKeyboardSecureClickSound;
	BOOL _acceptsContractedBraille;
	int _preferredCharacterSet;
	int _allowedCharacterSets;
	NSString* _language;

}

@property (assign,nonatomic) int preferredCharacterSet;                            //@synthesize preferredCharacterSet=_preferredCharacterSet - In the implementation block
@property (assign,nonatomic) int allowedCharacterSets;                             //@synthesize allowedCharacterSets=_allowedCharacterSets - In the implementation block
@property (assign,nonatomic) BOOL canDeleteCharacter;                              //@synthesize canDeleteCharacter=_canDeleteCharacter - In the implementation block
@property (assign,nonatomic) BOOL shouldEchoCharacter;                             //@synthesize shouldEchoCharacter=_shouldEchoCharacter - In the implementation block
@property (assign,nonatomic) BOOL acceptsRawInput;                                 //@synthesize acceptsRawInput=_acceptsRawInput - In the implementation block
@property (assign,nonatomic) BOOL shouldPlayKeyboardSecureClickSound;              //@synthesize shouldPlayKeyboardSecureClickSound=_shouldPlayKeyboardSecureClickSound - In the implementation block
@property (assign,nonatomic) BOOL acceptsContractedBraille;                        //@synthesize acceptsContractedBraille=_acceptsContractedBraille - In the implementation block
@property (nonatomic,retain) NSString * language;                                  //@synthesize language=_language - In the implementation block
-(BOOL)shouldPlayKeyboardSecureClickSound;
-(BOOL)acceptsRawInput;
-(BOOL)canDeleteCharacter;
-(void)setPreferredCharacterSet:(int)arg1 ;
-(void)setAllowedCharacterSets:(int)arg1 ;
-(void)setCanDeleteCharacter:(BOOL)arg1 ;
-(void)setShouldEchoCharacter:(BOOL)arg1 ;
-(void)setShouldPlayKeyboardSecureClickSound:(BOOL)arg1 ;
-(void)setAcceptsRawInput:(BOOL)arg1 ;
-(void)setAcceptsContractedBraille:(BOOL)arg1 ;
-(id)_descriptionForCharacterSets:(int)arg1 ;
-(int)allowedCharacterSets;
-(id)_descriptionForBool:(BOOL)arg1 ;
-(BOOL)shouldEchoCharacter;
-(BOOL)acceptsContractedBraille;
-(void)dealloc;
-(id)description;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(int)preferredCharacterSet;
-(id)initWithAttributes:(id)arg1 ;
@end

