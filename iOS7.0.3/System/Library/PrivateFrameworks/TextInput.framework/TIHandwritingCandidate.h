/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidateSingle.h>

@interface TIHandwritingCandidate : TIKeyboardCandidateSingle {

	unsigned long long _uniqueID;
	unsigned long long _completionUniqueID;

}

@property (nonatomic,readonly) unsigned long long uniqueID;                        //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) unsigned long long completionUniqueID;              //@synthesize completionUniqueID=_completionUniqueID - In the implementation block
+(int)type;
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)isInlineCompletionCandidate;
-(unsigned long long)uniqueID;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(unsigned long long)completionUniqueID;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 uniqueID:(unsigned long long)arg3 completionUniqueID:(unsigned long long)arg4 ;
@end

