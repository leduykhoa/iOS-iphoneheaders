/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSListController.h>

@class NSString;

@interface TCCAccessController : PSListController {

	CFStringRef _serviceKey;
	NSString* _footer;
	NSString* _header;
	NSString* _explanation;

}

@property (nonatomic,copy) NSString * footer;                   //@synthesize footer=_footer - In the implementation block
@property (nonatomic,copy) NSString * header;                   //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSString * explanation;              //@synthesize explanation=_explanation - In the implementation block
+(BOOL)isServiceRestricted:(id)arg1 ;
-(void)updateSpecifiersForImposedSettings;
-(void)setExplanation:(id)arg1 ;
-(void)setAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)accesssForSpecifier:(id)arg1 ;
-(id)explanation;
-(void)setSpecifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)header;
-(void)setHeader:(id)arg1 ;
-(id)footer;
-(void)setFooter:(id)arg1 ;
-(id)specifiers;
@end
