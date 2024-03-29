/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIVector : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _count;
    union { 
        double vec[4]; 
        double *ptr; 
    }  _u;
}

@property (readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } CGAffineTransformValue;
@property (readonly) struct CGPoint { double x1; double x2; } CGPointValue;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } CGRectValue;
@property (readonly) double W;
@property (readonly) double X;
@property (readonly) double Y;
@property (readonly) double Z;
@property (readonly) double*_values;
@property (readonly) unsigned long long count;
@property (readonly) NSString *stringRepresentation;

+ (bool)supportsSecureCoding;
+ (id)vectorWithCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (id)vectorWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)vectorWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)vectorWithString:(id)arg1;
+ (id)vectorWithValues:(const double*)arg1 count:(unsigned long long)arg2;
+ (id)vectorWithX:(double)arg1;
+ (id)vectorWithX:(double)arg1 Y:(double)arg2;
+ (id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
+ (id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })CGAffineTransformValue;
- (struct CGPoint { double x1; double x2; })CGPointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })CGRectValue;
- (double)W;
- (double)X;
- (double)Y;
- (double)Z;
- (float)_dot:(id)arg1;
- (float)_norm;
- (id)_orthonormalizeTo:(id)arg1;
- (double*)_values;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)initWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithValues:(const double*)arg1 count:(unsigned long long)arg2;
- (id)initWithX:(double)arg1;
- (id)initWithX:(double)arg1 Y:(double)arg2;
- (id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
- (id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4;
- (bool)isEqual:(id)arg1;
- (id)stringRepresentation;
- (double)valueAtIndex:(unsigned long long)arg1;

@end
