/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:13:29 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CRCameraReaderDelegate <NSObject>
@optional
-(void)cameraReaderDidDisplayMessage:(id)arg1;
-(void)cameraReaderDidFindTarget:(id)arg1;
-(void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
-(void)cameraReaderDidFindTarget:(id)arg1 withCorners:(id)arg2;
-(void)cameraReader:(id)arg1 didRecognizedNewObjects:(id)arg2;

@required
-(void)cameraReaderDidCancel:(id)arg1;
-(void)cameraReaderDidEnd:(id)arg1;
-(void)cameraReader:(id)arg1 didFailWithError:(id)arg2;

@end
