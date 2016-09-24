/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBImageValue : PBCodable <NSCopying> {
    PBUnknownFields * _unknownFields;
    NSString * _uri;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, readonly) BOOL hasUri;
@property (nonatomic, readonly) BOOL hasValueMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *uri;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasUri;
- (BOOL)hasValueMetadata;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setUri:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)unknownFields;
- (id)uri;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end