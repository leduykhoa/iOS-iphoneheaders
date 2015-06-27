/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:26:39 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AXHearingAidSupport/AXHADeviceProtocol.h>

@protocol AXHARemoteUpdateProtocol;
@class NSString, NSDate, NSArray, AXHearingAidMode, AXHATimer;

@interface AXRemoteHearingAidDevice : NSObject <AXHADeviceProtocol> {

	AXHATimer* _propertyWriteTimer;
	char _keepInSync;
	char _isBluetoothPaired;
	char _isPaired;
	char _isConnecting;
	char _leftConnected;
	char _rightConnected;
	float _rightMicrophoneVolume;
	float _leftMicrophoneVolume;
	float _rightStreamVolume;
	float _leftStreamVolume;
	int availableEars;
	id<AXHARemoteUpdateProtocol> _updateDelegate;
	NSString* _name;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _leftFirmwareVersion;
	NSString* _rightFirmwareVersion;
	NSString* _leftHardwareVersion;
	NSString* _rightHardwareVersion;
	NSString* _rightUUID;
	NSString* _leftUUID;
	NSString* _leftPeripheralUUID;
	NSString* _rightPeripheralUUID;
	float _rightBatteryLevel;
	float _leftBatteryLevel;
	NSDate* _leftBatteryLowDate;
	NSDate* _rightBatteryLowDate;
	NSArray* _rightPrograms;
	NSArray* _leftPrograms;
	AXHearingAidMode* _leftSelectedProgram;
	AXHearingAidMode* _rightSelectedProgram;
	NSString* _deviceUUID;
	int _loadedProperties;
	int _pendingPropertyWrites;

}

@property (assign,nonatomic) id<AXHARemoteUpdateProtocol> updateDelegate;              //@synthesize updateDelegate=_updateDelegate - In the implementation block
@property (assign,nonatomic) char isBluetoothPaired;                                   //@synthesize isBluetoothPaired=_isBluetoothPaired - In the implementation block
@property (assign,nonatomic) char isPaired;                                            //@synthesize isPaired=_isPaired - In the implementation block
@property (assign,nonatomic) char isConnecting;                                        //@synthesize isConnecting=_isConnecting - In the implementation block
@property (assign,nonatomic) char leftConnected;                                       //@synthesize leftConnected=_leftConnected - In the implementation block
@property (assign,nonatomic) char rightConnected;                                      //@synthesize rightConnected=_rightConnected - In the implementation block
@property (nonatomic,retain) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * manufacturer;                                  //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,retain) NSString * model;                                         //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSString * leftFirmwareVersion;                           //@synthesize leftFirmwareVersion=_leftFirmwareVersion - In the implementation block
@property (nonatomic,retain) NSString * rightFirmwareVersion;                          //@synthesize rightFirmwareVersion=_rightFirmwareVersion - In the implementation block
@property (nonatomic,retain) NSString * leftHardwareVersion;                           //@synthesize leftHardwareVersion=_leftHardwareVersion - In the implementation block
@property (nonatomic,retain) NSString * rightHardwareVersion;                          //@synthesize rightHardwareVersion=_rightHardwareVersion - In the implementation block
@property (nonatomic,retain) NSString * rightUUID;                                     //@synthesize rightUUID=_rightUUID - In the implementation block
@property (nonatomic,retain) NSString * leftUUID;                                      //@synthesize leftUUID=_leftUUID - In the implementation block
@property (nonatomic,retain) NSString * leftPeripheralUUID;                            //@synthesize leftPeripheralUUID=_leftPeripheralUUID - In the implementation block
@property (nonatomic,retain) NSString * rightPeripheralUUID;                           //@synthesize rightPeripheralUUID=_rightPeripheralUUID - In the implementation block
@property (assign,nonatomic) float rightBatteryLevel;                                  //@synthesize rightBatteryLevel=_rightBatteryLevel - In the implementation block
@property (assign,nonatomic) float leftBatteryLevel;                                   //@synthesize leftBatteryLevel=_leftBatteryLevel - In the implementation block
@property (nonatomic,retain) NSDate * leftBatteryLowDate;                              //@synthesize leftBatteryLowDate=_leftBatteryLowDate - In the implementation block
@property (nonatomic,retain) NSDate * rightBatteryLowDate;                             //@synthesize rightBatteryLowDate=_rightBatteryLowDate - In the implementation block
@property (nonatomic,copy) NSArray * rightPrograms;                                    //@synthesize rightPrograms=_rightPrograms - In the implementation block
@property (nonatomic,copy) NSArray * leftPrograms;                                     //@synthesize leftPrograms=_leftPrograms - In the implementation block
@property (nonatomic,retain) AXHearingAidMode * leftSelectedProgram;                   //@synthesize leftSelectedProgram=_leftSelectedProgram - In the implementation block
@property (nonatomic,retain) AXHearingAidMode * rightSelectedProgram;                  //@synthesize rightSelectedProgram=_rightSelectedProgram - In the implementation block
@property (nonatomic,retain) NSString * deviceUUID;                                    //@synthesize deviceUUID=_deviceUUID - In the implementation block
@property (assign,nonatomic) int loadedProperties;                                     //@synthesize loadedProperties=_loadedProperties - In the implementation block
@property (assign,nonatomic) int pendingPropertyWrites;                                //@synthesize pendingPropertyWrites=_pendingPropertyWrites - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char keepInSync;                                          //@synthesize keepInSync=_keepInSync - In the implementation block
@property (assign,nonatomic) int availableEars; 
@property (assign,nonatomic) float rightMicrophoneVolume;                              //@synthesize rightMicrophoneVolume=_rightMicrophoneVolume - In the implementation block
@property (assign,nonatomic) float leftMicrophoneVolume;                               //@synthesize leftMicrophoneVolume=_leftMicrophoneVolume - In the implementation block
@property (assign,nonatomic) float rightStreamVolume;                                  //@synthesize rightStreamVolume=_rightStreamVolume - In the implementation block
@property (assign,nonatomic) float leftStreamVolume;                                   //@synthesize leftStreamVolume=_leftStreamVolume - In the implementation block
-(id<AXHARemoteUpdateProtocol>)updateDelegate;
-(void)setUpdateDelegate:(id<AXHARemoteUpdateProtocol>)arg1 ;
-(int)loadedProperties;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)model;
-(id)_valueForProperty:(int)arg1 ;
-(void)connect;
-(id)valueForProperty:(int)arg1 ;
-(void)disconnect;
-(void)setModel:(NSString *)arg1 ;
-(char)leftAvailable;
-(char)rightAvailable;
-(float)leftBatteryLevel;
-(float)rightBatteryLevel;
-(void)setLeftPrograms:(NSArray *)arg1 ;
-(void)setRightPrograms:(NSArray *)arg1 ;
-(void)setDeviceUUID:(NSString *)arg1 ;
-(void)setAvailableEars:(int)arg1 ;
-(void)setLeftPeripheralUUID:(NSString *)arg1 ;
-(void)setLeftUUID:(NSString *)arg1 ;
-(void)setRightUUID:(NSString *)arg1 ;
-(void)setRightPeripheralUUID:(NSString *)arg1 ;
-(NSString *)leftUUID;
-(NSString *)rightUUID;
-(void)setIsPaired:(char)arg1 ;
-(void)setLeftFirmwareVersion:(NSString *)arg1 ;
-(void)setRightFirmwareVersion:(NSString *)arg1 ;
-(void)setLeftHardwareVersion:(NSString *)arg1 ;
-(void)setRightHardwareVersion:(NSString *)arg1 ;
-(NSString *)deviceUUID;
-(int)availableEars;
-(char)leftConnected;
-(char)rightConnected;
-(char)didLoadProperty:(int)arg1 ;
-(int)pendingPropertyWrites;
-(void)setPendingPropertyWrites:(int)arg1 ;
-(void)_delayWriteProperties;
-(void)writeVolumesForProperty:(int)arg1 ;
-(NSArray *)leftPrograms;
-(NSArray *)rightPrograms;
-(id)programs;
-(void)setLeftSelectedProgram:(AXHearingAidMode *)arg1 ;
-(void)setRightSelectedProgram:(AXHearingAidMode *)arg1 ;
-(AXHearingAidMode *)leftSelectedProgram;
-(AXHearingAidMode *)rightSelectedProgram;
-(char)didLoadRequiredProperties;
-(void)loadRequiredProperties;
-(void)setLeftBatteryLevel:(float)arg1 ;
-(void)setRightBatteryLevel:(float)arg1 ;
-(void)setLoadedProperties:(int)arg1 ;
-(void)setLeftConnected:(char)arg1 ;
-(void)setRightConnected:(char)arg1 ;
-(void)setLeftBatteryLowDate:(NSDate *)arg1 ;
-(void)setRightBatteryLowDate:(NSDate *)arg1 ;
-(void)setIsBluetoothPaired:(char)arg1 ;
-(float)leftMicrophoneVolume;
-(float)rightMicrophoneVolume;
-(float)leftStreamVolume;
-(float)rightStreamVolume;
-(NSString *)leftFirmwareVersion;
-(NSString *)rightFirmwareVersion;
-(NSString *)leftHardwareVersion;
-(NSString *)rightHardwareVersion;
-(NSDate *)leftBatteryLowDate;
-(NSDate *)rightBatteryLowDate;
-(char)isBluetoothPaired;
-(id)initWithPersistentRepresentation:(id)arg1 ;
-(char)hasConnection;
-(char)containsPeripheralWithUUID:(id)arg1 ;
-(char)didLoadBasicProperties;
-(void)selectProgram:(id)arg1 ;
-(id)selectedPrograms;
-(id)selectedProgramIndexes;
-(char)keepInSync;
-(void)setKeepInSync:(char)arg1 ;
-(NSString *)leftPeripheralUUID;
-(NSString *)rightPeripheralUUID;
-(void)setRightMicrophoneVolume:(float)arg1 ;
-(void)setLeftMicrophoneVolume:(float)arg1 ;
-(void)setRightStreamVolume:(float)arg1 ;
-(void)setLeftStreamVolume:(float)arg1 ;
-(id)initWithRemoteRepresentation:(id)arg1 andDeviceID:(id)arg2 ;
-(char)isLeftConnected;
-(char)isRightConnected;
-(void)setIsConnecting:(char)arg1 ;
-(char)isPaired;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setValue:(id)arg1 forProperty:(int)arg2 ;
-(char)isConnecting;
-(char)isConnected;
@end
