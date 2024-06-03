#ifdef __cplusplus
#import "react-native-social-components-rn.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNSocialComponentsRnSpec.h"

@interface SocialComponentsRn : NSObject <NativeSocialComponentsRnSpec>
#else
#import <React/RCTBridgeModule.h>

@interface SocialComponentsRn : NSObject <RCTBridgeModule>
#endif

@end
