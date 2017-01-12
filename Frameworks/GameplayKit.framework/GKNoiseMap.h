/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKNoiseMap : NSObject {
    NSDictionary * _gradientColors;
    struct NoiseMap { 
        float m_borderValue; 
        int m_height; 
        unsigned int m_memUsed; 
        float *m_pNoiseMap; 
        int m_stride; 
        int m_width; 
    }  _map;
    void _origin;
    void _sampleCount;
    BOOL  _seamless;
    void _size;
}

@property (nonatomic, readonly, copy) NSDictionary *gradientColors;
@property (nonatomic, readonly) void origin;
@property (nonatomic, readonly) void sampleCount;
@property (getter=isSeamless, nonatomic, readonly) BOOL seamless;
@property (nonatomic, readonly) void size;

+ (id)noiseMapWithNoise:(id)arg1;
+ (id)noiseMapWithNoise:(void *)arg1 size:(void *)arg2 origin:(void *)arg3 sampleCount:(void *)arg4 seamless:(void *)arg5; // needs 5 arg types, found 2: id, BOOL

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)__colorData;
- (id)gradientColors;
- (id)init;
- (id)initWithNoise:(id)arg1;
- (id)initWithNoise:(void *)arg1 size:(void *)arg2 origin:(void *)arg3 sampleCount:(void *)arg4 seamless:(void *)arg5; // needs 5 arg types, found 2: id, BOOL
- (float)interpolatedValueAtPosition;
- (BOOL)isSeamless;
- (void)origin;
- (void)sampleCount;
- (void)setValue:(void *)arg1 atPosition:(void *)arg2; // needs 2 arg types, found 1: float
- (void)size;
- (float)valueAtPosition;

@end