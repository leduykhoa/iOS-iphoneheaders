/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSLocale.h>

@class NSLocale;

@interface NSAutoLocale : NSLocale {

	NSLocale* loc;

}
+(BOOL)supportsSecureCoding;
-(id)_prefs;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)_init;
-(id)objectForKey:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(Class)classForCoder;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(id)displayNameForKey:(id)arg1 value:(id)arg2 ;
-(void)_update:(id)arg1 ;
@end

