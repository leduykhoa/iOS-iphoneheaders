/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:15:56 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <CoreSuggestions/SGObject.h>

@class NSString;

@interface SGLabeledObject : NSObject <SGObject> {

	NSString* _label;

}

@property (nonatomic,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
+(char)supportsSecureCoding;
-(id)localizedLabel;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(char)isEqualToSuggestion:(id)arg1 ;
-(id)initWithLabel:(id)arg1 ;
@end
