/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant iOS/FBAManagedFeedbackObject.h>

@class NSSet;

@interface FBAFilePredicate : FBAManagedFeedbackObject

@property (assign) char alwaysRequired; 
@property (retain) NSSet * conditions; 
@property (retain) NSSet * matchers; 
+(id)entityName;
-(void)setPropertiesFromJSONObject:(id)arg1 ;
-(char)satisfiedBy:(id)arg1 ;
@end

