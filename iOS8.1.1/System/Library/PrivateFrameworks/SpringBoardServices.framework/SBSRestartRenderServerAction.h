/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class NSURL;

@interface SBSRestartRenderServerAction : BSAction

@property (nonatomic,readonly) NSURL * targetURL; 
+(id)restartActionWithTargetRelaunchURL:(id)arg1 ;
-(NSURL *)targetURL;
@end

