/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/SCATSimpleElement.h>

@protocol SCATGestureFingersElementDelegate;
@interface SCATGestureFingersElement : SCATSimpleElement {

	id<SCATGestureFingersElementDelegate> _delegate;

}

@property (assign,nonatomic) id<SCATGestureFingersElementDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(char)scatIndicatesOwnFocus;
-(void)scatDidBecomeFocused:(char)arg1 ;
-(id)scatSpeakableDescription;
-(char)scatPerformAction:(int)arg1 ;
-(void)setDelegate:(id<SCATGestureFingersElementDelegate>)arg1 ;
-(id<SCATGestureFingersElementDelegate>)delegate;
@end

