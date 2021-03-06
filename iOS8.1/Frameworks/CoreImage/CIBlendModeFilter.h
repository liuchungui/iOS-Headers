//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIBlendModeFilter : CIFilter
{
    CIImage *inputImage;
    CIImage *inputBackgroundImage;
}

+ (id)customAttributes;
+ (id)_kernel;
+ (id)_filter_display_name;
@property(retain, nonatomic) CIImage *inputBackgroundImage; // @synthesize inputBackgroundImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (BOOL)_needUnpremuls;
- (struct CGRect)_extent;

@end

