/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HAPKeyStore, OS_dispatch_queue;
@class NSString, HAPAccessory, NSArray, NSHashTable, NSObject;

@interface HAPAccessoryServer : NSObject {

	BOOL _reachable;
	BOOL _paired;
	BOOL _unconnected;
	NSString* _identifier;
	NSString* _name;
	HAPAccessory* _primaryAccessory;
	NSArray* _accessories;
	NSString* _pairSetupPassword;
	NSString* _homeName;
	id<HAPKeyStore> _keyStore;
	NSHashTable* _internalDelegates;
	NSObject*<OS_dispatch_queue> _internalDelegateQueue;

}

@property (assign,getter=isReachable,nonatomic) BOOL reachable;                                 //@synthesize reachable=_reachable - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) HAPAccessory * primaryAccessory;                                   //@synthesize primaryAccessory=_primaryAccessory - In the implementation block
@property (nonatomic,copy) NSArray * accessories;                                               //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,readonly) long long linkType; 
@property (nonatomic,readonly) BOOL hasPairings; 
@property (nonatomic,copy) NSString * pairSetupPassword;                                        //@synthesize pairSetupPassword=_pairSetupPassword - In the implementation block
@property (nonatomic,copy) NSString * homeName;                                                 //@synthesize homeName=_homeName - In the implementation block
@property (getter=isPaired,nonatomic,readonly) BOOL paired;                                     //@synthesize paired=_paired - In the implementation block
@property (assign,getter=isUnconnected,nonatomic) BOOL unconnected;                             //@synthesize unconnected=_unconnected - In the implementation block
@property (assign,nonatomic,__weak) id<HAPKeyStore> keyStore;                                   //@synthesize keyStore=_keyStore - In the implementation block
@property (nonatomic,readonly) NSHashTable * internalDelegates;                                 //@synthesize internalDelegates=_internalDelegates - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalDelegateQueue;              //@synthesize internalDelegateQueue=_internalDelegateQueue - In the implementation block
+(BOOL)isAccessoryServerWithIdentifierPaired:(id)arg1 keyStore:(id)arg2 ;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setKeyStore:(id<HAPKeyStore>)arg1 ;
-(NSArray *)accessories;
-(BOOL)hasPairings;
-(BOOL)isPaired;
-(id)_serverIdentifier;
-(BOOL)isUnconnected;
-(id<HAPKeyStore>)keyStore;
-(void)enumerateInternalDelegatesUsingBlock:(/*^block*/id)arg1 ;
-(void)setUnconnected:(BOOL)arg1 ;
-(void)setAccessories:(NSArray *)arg1 ;
-(id)briefDescription;
-(id)_serverName;
-(HAPAccessory *)primaryAccessory;
-(long long)linkType;
-(void)discoverAccessories;
-(void)startPairing;
-(void)continuePairingAfterAuthPrompt;
-(BOOL)tryPairingPassword:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopPairingWithError:(id*)arg1 ;
-(void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)identifyWithCompletion:(/*^block*/id)arg1 ;
-(void)addInternalDelegate:(id)arg1 ;
-(void)setReachable:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalDelegateQueue;
-(NSHashTable *)internalDelegates;
-(void)discoverServices:(id)arg1 forAccessory:(id)arg2 ;
-(void)discoverCharacteristics:(id)arg1 forService:(id)arg2 ;
-(void)discoverDescriptorsForCharacteristic:(id)arg1 ;
-(void)readValueForDescriptor:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)pairAdditionalControllerWithName:(id)arg1 publicKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)removePairingForControllerWithName:(id)arg1 publicKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeInternalDelegate:(id)arg1 ;
-(BOOL)isReachable;
-(void)setPrimaryAccessory:(HAPAccessory *)arg1 ;
-(NSString *)pairSetupPassword;
-(void)setPairSetupPassword:(NSString *)arg1 ;
-(NSString *)homeName;
-(void)setHomeName:(NSString *)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
@end

