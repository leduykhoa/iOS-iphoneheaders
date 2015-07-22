/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/MessageStatusIndicatorManager.h>

@class NSMutableArray, NSArray;

@interface MessageListStatusIndicatorManager : MessageStatusIndicatorManager {

	NSMutableArray* _statusIndicatorViews;

}

@property (nonatomic,readonly) NSArray * statusIndicatorViews; 
-(NSArray *)statusIndicatorViews;
-(unsigned)tierForIndicator:(unsigned)arg1 ;
-(id)primaryStatusIndicatorImage;
-(void)layoutStatusIndicatorViewsInRect:(CGRect)arg1 ;
-(void)_setUpIndicatorViews;
-(void)dealloc;
@end
