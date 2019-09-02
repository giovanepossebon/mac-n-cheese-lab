/* Generated by RuntimeBrowser.
 */

@protocol GEOMapItem <NSObject>

@required

- (bool)_acceptsApplePay;
- (NSArray *)_additionalPlaceInfos;
- (int)_addressGeocodeAccuracy;
- (<GEOAnnotatedItemList> *)_annotatedItemList;
- (double)_areaInMeters;
- (GEOMapRegion *)_arrivalMapRegionForTransportType:(int)arg1;
- (GEOMapItemAdditionalPlaceInfo *)_asPlaceInfo;
- (GEOAssociatedApp *)_associatedApp;
- (GEOMapItemPlaceAttribution *)_attribution;
- (NSURL *)_bestAvatarBrandIconURLForSize:(struct CGSize { double x1; double x2; })arg1 allowSmaller:(bool)arg2;
- (NSURL *)_bestNavbarBrandIconURLForSize:(struct CGSize { double x1; double x2; })arg1 allowSmaller:(bool)arg2;
- (unsigned long long)_brandMUID;
- (NSArray *)_browseCategories;
- (GEOPDBusinessClaim *)_businessClaim;
- (NSArray *)_businessHours;
- (NSString *)_businessURL;
- (NSArray *)_childPlaces;
- (GEOMapItemClientAttributes *)_clientAttributes;
- (GEOMapItemContainedPlace *)_containedPlace;
- (unsigned long long)_customIconID;
- (NSString *)_disambiguationName;
- (<GEOEncyclopedicInfo> *)_encyclopedicInfo;
- (GEORestaurantFeaturesLink *)_featureLink;
- (GEOPDFlyover *)_flyover;
- (NSString *)_flyoverAnnouncementMessage;
- (bool)_goodForKids;
- (bool)_hasAcceptsApplePayAmenity;
- (bool)_hasAnyAmenities;
- (bool)_hasAreaInMeters;
- (bool)_hasBrandMUID;
- (bool)_hasBusinessClaim;
- (bool)_hasBusinessHours;
- (bool)_hasCurrentOperatingHours;
- (bool)_hasDelivery;
- (bool)_hasDeliveryAmenity;
- (bool)_hasEncyclopedicInfo;
- (bool)_hasFeatureLink;
- (bool)_hasFlyover;
- (bool)_hasGenderNeutralRestroom;
- (bool)_hasGenderNeutralRestroomAmenity;
- (bool)_hasGoodForKidsAmenity;
- (bool)_hasLinkedServices;
- (bool)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (bool)_hasMUID;
- (bool)_hasOperatingHours;
- (bool)_hasPriceRange;
- (bool)_hasResolvablePartialInformation;
- (bool)_hasResultProviderID;
- (bool)_hasTakesReservationsAmenity;
- (bool)_hasTelephone;
- (bool)_hasTransit;
- (bool)_hasUserRatingScore;
- (bool)_hasVenueFeatureType;
- (bool)_hasWifiFingerprintConfidence;
- (bool)_hasWifiFingerprintLabelStatusCode;
- (bool)_hasWifiFingerprintLabelType;
- (GEOMapItemIdentifier *)_identifier;
- (bool)_isInLinkedPlaceRelationship;
- (bool)_isStandaloneBrand;
- (bool)_isTransitDisplayFeature;
- (NSArray *)_linkedServices;
- (NSArray *)_localizedCategoryNamesForType:(unsigned int)arg1;
- (<GEOMapItem> *)_mapItemByStrippingOptionalData;
- (GEOMessageLink *)_messageLink;
- (unsigned long long)_muid;
- (bool)_needsAttribution;
- (float)_normalizedUserRatingScore;
- (unsigned long long)_openingHoursOptions;
- (bool)_optsOutOfTelephoneAds;
- (int)_parsecSectionType;
- (NSArray *)_photos;
- (GEOMapItemPhotosAttribution *)_photosAttribution;
- (GEOPlace *)_place;
- (GEOPDPlace *)_placeData;
- (NSData *)_placeDataAsData;
- (int)_placeDisplayStyle;
- (int)_placeDisplayType;
- (int)_placeType;
- (GEOPlacecardLayoutConfiguration *)_placecardLayoutConfiguration;
- (NSString *)_poiPinpointURLString;
- (NSString *)_poiSurveyURLString;
- (GEOPriceDescription *)_priceDescription;
- (unsigned int)_priceRange;
- (NSURL *)_providerURL;
- (NSArray *)_quickLinks;
- (bool)_responseStatusIsIncomplete;
- (int)_resultProviderID;
- (unsigned int)_resultSnippetDistanceDisplayThreshold;
- (NSString *)_resultSnippetLocationString;
- (NSArray *)_reviews;
- (GEOMapItemReviewsAttribution *)_reviewsAttribution;
- (NSArray *)_roadAccessPoints;
- (unsigned int)_sampleSizeForUserRatingScore;
- (NSString *)_spokenAddressForLocale:(NSString *)arg1;
- (GEOFeatureStyleAttributes *)_styleAttributes;
- (bool)_takesReservations;
- (NSString *)_telephone;
- (NSArray *)_tips;
- (<GEOTransitAttribution> *)_transitAttribution;
- (<GEOMapItemTransitInfo> *)_transitInfo;
- (NSString *)_vendorID;
- (int)_venueFeatureType;
- (<GEOMapItemVenueInfo> *)_venueInfo;
- (NSString *)_walletCategoryIdentifier;
- (NSString *)_walletCategoryLocalizedString;
- (NSString *)_walletCategoryLocalizedStringLocale;
- (GEOStyleAttributes *)_walletCategoryStyling;
- (NSString *)_walletMapsCategoryIdentifier;
- (NSString *)_walletPlaceLocalizedString;
- (NSString *)_walletPlaceLocalizedStringLocale;
- (GEOStyleAttributes *)_walletPlaceStyling;
- (NSURL *)_webURL;
- (unsigned int)_wifiFingerprintConfidence;
- (int)_wifiFingerprintLabelStatusCode;
- (int)_wifiFingerprintLabelType;
- (NSDictionary *)addressDictionary;
- (GEOAddressObject *)addressObject;
- (NSArray *)areasOfInterest;
- (struct { double x1; double x2; })centerCoordinate;
- (int)contactAddressType;
- (bool)contactIsMe;
- (NSString *)contactName;
- (NSString *)contactSpokenName;
- (struct { double x1; double x2; })coordinate;
- (GEOMapItemDetourInfo *)detourInfo;
- (GEOMapRegion *)displayMapRegion;
- (GEOMapRegion *)displayMapRegionOrNil;
- (float)displayMaxZoom;
- (float)displayMinZoom;
- (NSData *)encodedData;
- (NSDate *)eventDate;
- (NSString *)eventName;
- (NSData *)externalTransitStationCode;
- (GEOAddress *)geoAddress;
- (GEOMapRegion *)geoFenceMapRegion;
- (bool)hasDisplayMaxZoom;
- (bool)hasDisplayMinZoom;
- (bool)hasExpiredComponents;
- (bool)hasVenueCapacity;
- (bool)isDisputed;
- (bool)isEqualToMapItem:(id <GEOMapItem>)arg1;
- (bool)isEventAllDay;
- (bool)isValid;
- (NSString *)name;
- (int)referenceFrame;
- (NSString *)secondaryName;
- (NSString *)secondarySpokenName;
- (NSString *)shortAddress;
- (NSArray *)spatialMappedCategories;
- (NSArray *)spatialMappedPlaceCategories;
- (NSString *)spokenNameForLocale:(NSString *)arg1;
- (NSTimeZone *)timezone;
- (long long)venueCapacity;
- (NSString *)weatherDisplayName;

@optional

- (<GEOMapItem> *)_mapItemBySettingIsTransitDisplayFeature:(bool)arg1;

@end
