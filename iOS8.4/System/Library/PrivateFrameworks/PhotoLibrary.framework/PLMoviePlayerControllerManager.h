/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLMoviePlayerControllerManager : NSObject {

	NSMutableArray* _playerStack;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)moveControllerToTopOfStack:(id)arg1 ;
-(void)removeControllerFromStack:(id)arg1 ;
@end

