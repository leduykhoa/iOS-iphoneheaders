/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:15:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IKDOMInitializer : NSObject {

	NSMutableDictionary* _nodeDeregisterObservers;

}

@property (nonatomic,retain) NSMutableDictionary * nodeDeregisterObservers;              //@synthesize nodeDeregisterObservers=_nodeDeregisterObservers - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSMutableDictionary *)nodeDeregisterObservers;
-(void)addNodeDeregisterObserverWithName:(id)arg1 observer:(/*^block*/id)arg2 ;
-(void)removeNodeDeregisterObserverWithName:(id)arg1 ;
-(void)setNodeDeregisterObservers:(NSMutableDictionary *)arg1 ;
@end
