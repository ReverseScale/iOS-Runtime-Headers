/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HULinkedApplicationRatingView : UIView {
    float  _rating;
    NSArray * _starViews;
}

@property (nonatomic) float rating;
@property (nonatomic, retain) NSArray *starViews;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)rating;
- (void)setRating:(float)arg1;
- (void)setStarViews:(id)arg1;
- (void)setupConstraints;
- (id)starViews;
- (void)updateStarViews;

@end
