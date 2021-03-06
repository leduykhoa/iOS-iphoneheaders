/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <Foundation/NSSortDescriptor.h>
#import <CloudKit/NSSecureCoding.h>

@class CLLocation;

@interface CKLocationSortDescriptor : NSSortDescriptor <NSSecureCoding> {

	CLLocation* _relativeLocation;

}

@property (nonatomic,copy) CLLocation * relativeLocation;              //@synthesize relativeLocation=_relativeLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)CKDPQuerySort;
-(void)setRelativeLocation:(CLLocation *)arg1 ;
-(id)initWithKey:(id)arg1 relativeLocation:(id)arg2 ;
-(long long)compareObject:(id)arg1 toObject:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)CKPropertiesDescription;
-(CLLocation *)relativeLocation;
@end

