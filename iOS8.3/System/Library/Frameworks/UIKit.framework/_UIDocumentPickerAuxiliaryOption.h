/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:54 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/NSSecureCoding.h>

@class NSString, UIImage;

@interface _UIDocumentPickerAuxiliaryOption : NSObject <NSSecureCoding> {

	char _newlyAdded;
	NSString* _title;
	UIImage* _image;
	NSString* _identifier;
	/*^block*/id _handler;
	unsigned _order;

}

@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * image;                                  //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id handler;                                         //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) unsigned order;                                   //@synthesize order=_order - In the implementation block
@property (assign,getter=isNewlyAdded,nonatomic) char newlyAdded;              //@synthesize newlyAdded=_newlyAdded - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(UIImage *)image;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(void)setOrder:(unsigned)arg1 ;
-(unsigned)order;
-(char)isNewlyAdded;
-(void)setNewlyAdded:(char)arg1 ;
@end

