/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLAbstractObject.h>

@class CPLPlatformObject, CPLEngineStore, NSString;

@interface CPLEngineStorage : NSObject <CPLAbstractObject> {

	BOOL _superWasCalled;
	CPLPlatformObject* _platformObject;
	CPLEngineStore* _engineStore;
	NSString* _name;

}

@property (nonatomic,readonly) CPLEngineStore * engineStore;                    //@synthesize engineStore=_engineStore - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;              //@synthesize platformObject=_platformObject - In the implementation block
+(id)platformImplementationProtocol;
-(NSString *)description;
-(NSString *)name;
-(id)status;
-(BOOL)closeWithError:(id*)arg1 ;
-(BOOL)openWithError:(id*)arg1 ;
-(id)initWithEngineStore:(id)arg1 name:(id)arg2 ;
-(CPLPlatformObject *)platformObject;
-(CPLEngineStore *)engineStore;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(BOOL)_checkSuperWasCalled;
-(id)statusDictionary;
@end

