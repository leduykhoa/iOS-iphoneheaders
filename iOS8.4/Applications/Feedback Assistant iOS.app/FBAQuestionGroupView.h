/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@interface FBAQuestionGroupView : UIView
-(id)initWithGroup:(id)arg1 showsDivider:(char)arg2 ;
-(void)initializeWithGroup:(id)arg1 showsDivider:(char)arg2 ;
-(id)leadingTrailingContraintsForView:(id)arg1 ;
-(id)constraintPinningViewToTop:(id)arg1 constant:(float)arg2 ;
-(void)addHeightConstraintToView:(id)arg1 withHeight:(float)arg2 ;
-(id)constraintPinningView:(id)arg1 belowView:(id)arg2 constant:(float)arg3 ;
-(void)addFileAnswerViewsForQuestionGroup:(id)arg1 previousView:(id*)arg2 ;
-(void)addQuestionAnswerLabelsWithPreviousView:(id*)arg1 question:(id)arg2 answer:(id)arg3 inGroup:(id)arg4 ;
-(id)constraintPinningViewToBottom:(id)arg1 constant:(float)arg2 ;
-(id)satisfierForRequirement:(id)arg1 fromFilenames:(id)arg2 ;
-(void)appendView:(id)arg1 withPreviousView:(id*)arg2 spacing:(float)arg3 ;
@end
