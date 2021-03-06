/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MapKit/MKShape.h>

#import "MKOverlay-Protocol.h"

@class NSString;

@interface MKCircle : MKShape <MKOverlay>
{
    CDStruct_2c43369c _coordinate;
    double _radius;
    CDStruct_02837cd9 _boundingMapRect;
}

+ (id)circleWithMapRect:(CDStruct_90e2a262)arg1;
+ (id)circleWithCenterCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;
@property(readonly, nonatomic) CDStruct_90e2a262 boundingMapRect; // @synthesize boundingMapRect=_boundingMapRect;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
- (BOOL)intersectsMapRect:(CDStruct_90e2a262)arg1;
- (id)_initWithCenterCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;

// Remaining properties
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;

@end

