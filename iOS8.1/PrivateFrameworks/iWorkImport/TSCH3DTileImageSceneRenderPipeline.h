//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DTileSceneRenderPipeline.h>

@class NSArray, TSCH3DSceneRenderPipeline;

__attribute__((visibility("hidden")))
@interface TSCH3DTileImageSceneRenderPipeline : TSCH3DTileSceneRenderPipeline
{
    unsigned int mTileSize;
    TSCH3DSceneRenderPipeline *mTargetPipeline;
    BOOL mSingleOutputImage;
    NSArray *mImages;
    unsigned int mTileSamples;
    unsigned int mTileOverlap;
    BOOL mFlipImages;
}

@property(readonly, nonatomic) NSArray *images; // @synthesize images=mImages;
@property(retain, nonatomic) TSCH3DSceneRenderPipeline *targetPipeline; // @synthesize targetPipeline=mTargetPipeline;
@property(nonatomic) unsigned int tileOverlap; // @synthesize tileOverlap=mTileOverlap;
@property(nonatomic) unsigned int tileSamples; // @synthesize tileSamples=mTileSamples;
@property(nonatomic) unsigned int tileSize; // @synthesize tileSize=mTileSize;
@property(nonatomic) BOOL flipImages; // @synthesize flipImages=mFlipImages;
@property(nonatomic) BOOL singleOutputImage; // @synthesize singleOutputImage=mSingleOutputImage;
- (BOOL)run;
- (BOOL)processTile:(id)arg1 generator:(id)arg2;
- (id)cloneTargetPipeline:(id)arg1;
- (void)dealloc;
- (id)init;

@end

