/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _UTTypeQueryWithIdentifier : _UTTypeQuery {
    bool  _dynamic;
    NSString * _identifier;
    bool  _valid;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_canResolveLocallyWithoutMappingDatabase;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (bool)getLocallyResolvedType:(id*)arg1 orErrorWithoutMappingDatabase:(id*)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
