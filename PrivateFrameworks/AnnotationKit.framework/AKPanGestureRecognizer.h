/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKPanGestureRecognizer : UIPanGestureRecognizer <AKPenDetectionGestureRecognizerProtocol> {
    NSMutableArray * _currentAccumulatedTouches;
    float  _currentMaxWeight;
    float  _currentWeight;
    struct CGPoint { 
        float x; 
        float y; 
    }  _locationOfFirstTouch;
    BOOL  _penGestureDetected;
}

@property (nonatomic, retain) NSMutableArray *currentAccumulatedTouches;
@property (nonatomic) float currentMaxWeight;
@property (nonatomic) float currentWeight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) struct CGPoint { float x1; float x2; } locationOfFirstTouch;
@property (nonatomic) BOOL penGestureDetected;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkTouchForStylus:(id)arg1;
- (id)accumulatedTouches;
- (id)currentAccumulatedTouches;
- (float)currentMaxWeight;
- (float)currentWeight;
- (struct CGPoint { float x1; float x2; })locationOfFirstTouch;
- (struct CGPoint { float x1; float x2; })locationOfFirstTouchInView:(id)arg1;
- (BOOL)penGestureDetected;
- (void)reset;
- (void)resetAccumulatedTouches;
- (void)setCurrentAccumulatedTouches:(id)arg1;
- (void)setCurrentMaxWeight:(float)arg1;
- (void)setCurrentWeight:(float)arg1;
- (void)setLocationOfFirstTouch:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPenGestureDetected:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end