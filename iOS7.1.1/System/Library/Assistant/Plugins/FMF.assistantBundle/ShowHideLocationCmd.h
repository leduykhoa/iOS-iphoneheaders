/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMF/FMFBaseCmd.h>

@class CLLocation;

@interface ShowHideLocationCmd : FMFBaseCmd {

	bool hideLocation;
	CLLocation* currentLocation;

}

@property (assign,nonatomic) bool hideLocation; 
@property (nonatomic,copy) CLLocation * currentLocation; 
-(bool)hideLocation;
-(id)currentLocationDictionary;
-(id)jsonBodyDictionary;
-(void)setHideLocation:(bool)arg1 ;
-(id)currentLocation;
-(void)setCurrentLocation:(id)arg1 ;
-(id)path;
-(void).cxx_destruct;
-(id)result;
@end
