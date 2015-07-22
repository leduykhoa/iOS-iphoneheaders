/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:46 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MLEQPreset : NSObject {

	NSString* _name;
	NSString* _localizedName;
	int _builtInPresetType;

}
+(id)eqPresetForBuiltInPresetType:(int)arg1 ;
+(id)eqPresetForName:(id)arg1 ;
-(id)name;
-(id)localizedName;
-(id)initWithBuiltInPresetType:(int)arg1 ;
-(int)builtInPresetType;
-(int)typeForAVController;
@end
