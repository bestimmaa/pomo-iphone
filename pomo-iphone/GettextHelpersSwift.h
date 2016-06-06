//
//  GettextHelpersSwift.h
//  gettext-ios
//
//  Created by Christoph Halang on 06.06.16.
//  Copyright © 2016 Klickrent GmbH. All rights reserved.
//

#import "GettextHelpers.h"

#ifndef GettextHelpersSwift_h
#define GettextHelpersSwift_h
/**
 *  Translate a string using provided text domain
 *
 *  @param singular an original string
 *  @param domain   a text domain
 *
 *  @return a translated string on success, otherwise original string
 */
static inline NSString* translate(NSString* singular, NSString* domain) OVERLOADABLE_FUNC {
return _(singular,domain);
};

/**
 *  Translate a string from default text domain
 *
 *  @param singular an original string
 *
 *  @return a translated string on success, otherwise original string
 */
static inline NSString* translate(NSString* singular) OVERLOADABLE_FUNC {
return _(singular);
};


#endif /* GettextHelpersSwift_h */
