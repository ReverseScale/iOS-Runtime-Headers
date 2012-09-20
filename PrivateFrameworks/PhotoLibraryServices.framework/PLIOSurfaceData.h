/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLIOSurfaceData : NSData  {
    struct __IOSurface { } *_surface;
    const void *_bytes;
    unsigned int _length;
}

+ (id)dataWithIOSurface:(void*)arg1;

- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)length;
- (id)initWithIOSurface:(void*)arg1;
- (id)initWithIOSurface:(void*)arg1 length:(unsigned int)arg2;

@end