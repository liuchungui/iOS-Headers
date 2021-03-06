//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPUExtrasBorderedImageView;

@interface MPUExtrasZoomingImageTransitionContext : NSObject
{
    BOOL _interactive;
    MPUExtrasBorderedImageView *_zoomingImageView;
    unsigned int _itemIndex;
    unsigned int _appearState;
}

@property(nonatomic, getter=isInteractive) BOOL interactive; // @synthesize interactive=_interactive;
@property(nonatomic) unsigned int appearState; // @synthesize appearState=_appearState;
@property(nonatomic) unsigned int itemIndex; // @synthesize itemIndex=_itemIndex;
@property(retain, nonatomic) MPUExtrasBorderedImageView *zoomingImageView; // @synthesize zoomingImageView=_zoomingImageView;
- (void).cxx_destruct;
- (id)initWithZoomingImageView:(id)arg1 itemIndex:(unsigned int)arg2 appearState:(unsigned int)arg3 isInteractive:(BOOL)arg4;

@end

