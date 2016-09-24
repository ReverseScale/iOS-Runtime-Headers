/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRGameControllerPropertiesMessage : MRProtocolMessage {
    void * _properties;
}

@property (nonatomic, readonly) unsigned int controllerID;
@property (nonatomic, readonly) void*properties;

- (unsigned int)controllerID;
- (void)dealloc;
- (id)initWithGameControllerProperties:(void*)arg1 controllerID:(unsigned int)arg2;
- (void*)properties;
- (unsigned int)type;

@end