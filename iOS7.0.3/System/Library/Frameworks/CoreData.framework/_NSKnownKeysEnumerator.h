/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@interface _NSKnownKeysEnumerator : NSEnumerator {

	id _target;
	const id* _list;
	const id* _referenceItems;
	NSRange _range;
	unsigned long _index;
	unsigned long _flags;

}
-(id)initWithArray:(const id*)arg1 forTarget:(id)arg2 withReferenceValues:(const id*)arg3 andRange:(NSRange)arg4 andCopyItems:(BOOL)arg5 ;
-(void)dealloc;
-(id)nextObject;
-(void)_invalidate;
@end
