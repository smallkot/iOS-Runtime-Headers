/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesTestDataGenerator : NSObject {
    NSMutableArray * _dataPoints;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _from;
    NSObject<OS_dispatch_queue> * _generationQueue;
    NSArray * _latOffsets;
    NSArray * _longOffsets;
    unsigned int  _max;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _to;
}

- (void).cxx_destruct;
- (unsigned int)generateDataPointsFromLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 toLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 longDir:(int)arg3 currentCount:(unsigned int)arg4;
- (id)generateOffsetArray:(double)arg1 insert:(BOOL)arg2;
- (void)generateTestImages:(unsigned int)arg1 fromLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 toLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg3 atEnd:(id /* block */)arg4;
- (id)init;

@end