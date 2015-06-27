/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:46:18 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EKObject, NSString;

@interface EKObjectRelation : NSObject {

	EKObject* _owner;
	NSString* _relationName;
	char _dirty;
	char _loaded;
	NSString* _inverseName;

}

@property (nonatomic,readonly) EKObject * owner;                     //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) NSString * relationName;              //@synthesize relationName=_relationName - In the implementation block
@property (nonatomic,readonly) NSString * inverseName;               //@synthesize inverseName=_inverseName - In the implementation block
-(void)refresh;
-(void)didCommit;
-(id)initWithOwner:(id)arg1 relationName:(id)arg2 inverseRelationName:(id)arg3 ;
-(void)updatePersistentObject;
-(id)committedValue;
-(void)relatedObjectDidChange;
-(NSString *)inverseName;
-(char)isWeak;
-(void)_addRelatedObject:(id)arg1 setInverse:(char)arg2 dirty:(char)arg3 ;
-(void)_removeRelatedObject:(id)arg1 setInverse:(char)arg2 dirty:(char)arg3 ;
-(NSString *)relationName;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)reset;
-(EKObject *)owner;
-(char)validate:(id*)arg1 ;
-(void)rollback;
-(char)isDirty;
@end
