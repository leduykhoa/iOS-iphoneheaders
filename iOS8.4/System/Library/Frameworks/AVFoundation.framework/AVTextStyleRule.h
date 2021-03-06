/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:05 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/NSCopying.h>

@class AVTextStyleRuleInternal, NSDictionary, NSString;

@interface AVTextStyleRule : NSObject <NSCopying> {

	AVTextStyleRuleInternal* _textStyleRule;

}

@property (nonatomic,readonly) NSDictionary * textMarkupAttributes; 
@property (nonatomic,readonly) NSString * textSelector; 
+(id)propertyListForTextStyleRules:(id)arg1 ;
+(id)textStyleRuleWithTextMarkupAttributes:(id)arg1 textSelector:(id)arg2 ;
+(id)textStyleRulesFromPropertyList:(id)arg1 ;
+(id)textStyleRuleWithTextMarkupAttributes:(id)arg1 ;
-(NSString *)textSelector;
-(NSDictionary *)textMarkupAttributes;
-(id)_dictionaryPlistRepresentation;
-(id)initWithTextMarkupAttributes:(id)arg1 textSelector:(id)arg2 ;
-(id)initWithTextMarkupAttributes:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
@end

