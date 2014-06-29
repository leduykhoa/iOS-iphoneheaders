/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, SKUIArtwork, SKUILink;

@interface SKUIFlowcaseItem : NSObject {

	NSString* _accessibilityLabel;
	long long _flowcaseItemIdentifier;
	SKUIArtwork* _landscapeArtwork;
	SKUILink* _link;
	SKUIArtwork* _portraitArtwork;

}

@property (nonatomic,readonly) NSString * accessibilityLabel;                 //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,readonly) long long flowcaseItemIdentifier;              //@synthesize flowcaseItemIdentifier=_flowcaseItemIdentifier - In the implementation block
@property (nonatomic,readonly) SKUILink * link;                               //@synthesize link=_link - In the implementation block
@property (nonatomic,readonly) SKUIArtwork * portraitArtwork;                 //@synthesize portraitArtwork=_portraitArtwork - In the implementation block
@property (nonatomic,readonly) SKUIArtwork * landscapeArtwork;                //@synthesize landscapeArtwork=_landscapeArtwork - In the implementation block
-(id)description;
-(id)accessibilityLabel;
-(void).cxx_destruct;
-(id)link;
-(id)initWithComponentContext:(id)arg1 ;
-(void)_setLinkItem:(id)arg1 ;
-(long long)flowcaseItemIdentifier;
-(id)landscapeArtwork;
-(id)portraitArtwork;
@end
