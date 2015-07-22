/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogCore/PLAgent.h>

@class PLEntryNotificationOperatorComposition, NSString;

@interface PLBluetoothAgent : PLAgent {

	BOOL keepSessionAlive;
	BTSessionImplRef session;
	BTLocalDeviceImplRef localBluetoothDevice;
	PLEntryNotificationOperatorComposition* _batteryLevelChanged;
	NSString* _btHardwareChipset;

}

@property (retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;              //@synthesize batteryLevelChanged=_batteryLevelChanged - In the implementation block
@property (readonly) NSString * btHardwareChipset;                                            //@synthesize btHardwareChipset=_btHardwareChipset - In the implementation block
+(void)load;
+(id)defaults;
+(id)railDefinitions;
+(id)accountingGroupDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryAggregateDefinitions;
-(void)dealloc;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(void)setBatteryLevelChanged:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)batteryLevelChanged;
-(void)attachSession;
-(void)logwithBTOnCheck;
-(BTLocalDeviceImplRef)localBluetoothDevice;
-(void)sessionAttached:(BTSessionImplRef)arg1 withResult:(int)arg2 ;
-(void)sessionTerminated:(BTSessionImplRef)arg1 withResult:(int)arg2 ;
-(void)logEventForwardDeviceState;
-(void)logEventForwardPairedDevices;
-(void)logEventIntervalConnectedDevices;
-(BOOL)modulePowered;
-(void)logEventBackwardPowerProfileStats;
-(void)modelBluetoothOffPower;
-(BOOL)isDiscoverable;
-(BOOL)isConnectable;
-(BOOL)isConnected;
-(BOOL)nikePowered;
-(NSString *)btHardwareChipset;
-(void)modelBluetoothPower:(id)arg1 ;
-(id)btHardwareChipsetQuery;
-(BOOL)bluetoothPresent;
-(void)bluetoothSessionEvent:(int)arg1 onSession:(BTSessionImplRef)arg2 withResult:(int)arg3 ;
-(void)bluetoothDeviceEvent:(int)arg1 onDevice:(BTLocalDeviceImplRef)arg2 withResult:(int)arg3 ;
@end
