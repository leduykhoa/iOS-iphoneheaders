/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface BuddyADKeysController : NSObject {

	NSString* _activationADKey;
	NSString* _appleIDADKey;

}

@property (nonatomic,retain) NSString * activationADKey;              //@synthesize activationADKey=_activationADKey - In the implementation block
@property (nonatomic,retain) NSString * appleIDADKey;                 //@synthesize appleIDADKey=_appleIDADKey - In the implementation block
+(id)sharedController;
-(void)writeADKeys;
-(void)setActivationADKey:(NSString *)arg1 ;
-(void)setAppleIDADKey:(NSString *)arg1 ;
-(NSString *)activationADKey;
-(NSString *)appleIDADKey;
@end

