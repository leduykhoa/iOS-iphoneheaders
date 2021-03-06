/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPathElement.h>

@interface OADVectorArcPathElement : OADPathElement {

	OADAdjustCoord mLeft;
	OADAdjustCoord mTop;
	OADAdjustCoord mRight;
	OADAdjustCoord mBottom;
	OADAdjustPoint mStartVector;
	OADAdjustPoint mEndVector;
	BOOL mClockwise;
	BOOL mConnectedToPrevious;

}
-(id)initWithLeft:(OADAdjustCoord)arg1 top:(OADAdjustCoord)arg2 right:(OADAdjustCoord)arg3 bottom:(OADAdjustCoord)arg4 startVector:(OADAdjustPoint)arg5 endVector:(OADAdjustPoint)arg6 clockwise:(BOOL)arg7 connectedToPrevious:(BOOL)arg8 ;
-(BOOL)connectedToPrevious;
-(OADAdjustPoint)startVector;
-(OADAdjustPoint)endVector;
-(BOOL)clockwise;
-(OADAdjustCoord)bottom;
-(OADAdjustCoord)left;
-(OADAdjustCoord)right;
-(OADAdjustCoord)top;
@end

