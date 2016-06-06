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
static inline NSString* translate_(NSString* singular, NSString* domain) OVERLOADABLE_FUNC {
return _(singular,domain);
};

/**
 *  Translate a string from default text domain
 *
 *  @param singular an original string
 *
 *  @return a translated string on success, otherwise original string
 */
static inline NSString* translate_(NSString* singular) OVERLOADABLE_FUNC {
return _(singular);
};

/**
 *  Translate a string using provided text domain and context
 *
 *  @param singular an original string
 *  @param context  a context
 *  @param domain   a text domain
 *
 *  @return a translated string on success, otherwise original string
 */
static inline NSString* translate_x(NSString* singular, NSString* context, NSString* domain) OVERLOADABLE_FUNC {
return _x(singular, context, domain);
};

/**
 *  Translate a string using context and default text domain
 *
 *  @param singular an original string
 *  @param context  a context
 *
 *  @return a translated string on success, otherwise original string
 */
static inline NSString* translate_x(NSString* singular, NSString* context) OVERLOADABLE_FUNC {
return _x(singular, context, DEFAULT_TEXTDOMAIN);
};

/**
 *  Translate a string respecting provided number, using context and text domain
 *
 *  @param singular a singular string
 *  @param plural   a plural string
 *  @param n        a number used to lookup a translation with correct inflection
 *  @param context  a context
 *  @param domain   a text domain
 *
 *  @return a translated string on success, otherwise original string
 */
static inline NSString* translate_nx(NSString* singular, NSString* plural, NSInteger n, NSString* context, NSString* domain) OVERLOADABLE_FUNC {
return _nx(singular,plural,n,context,domain);
};

/**
 *  Translate a string respecting provided number, using context and default text domain
 *  @param singular a singular string
 *  @param plural   a plural string
 *  @param n        a number used to lookup a translation with correct inflection
 *  @param context  a context
 *
 *  @return a translated string on success, otherwise original string
 */
static inline NSString* translate_nx(NSString* singular, NSString* plural, NSInteger n, NSString* context) OVERLOADABLE_FUNC {
return _nx(singular, plural, n, context, DEFAULT_TEXTDOMAIN);
};

/**
 *  Translate a string respecting provided number, using default text domain
 *
 *  @param singular a singular string
 *  @param plural   a plural string
 *  @param n        a number used to lookup a translation with correct inflection
 *  @param domain   a text domain
 *
 *  @return a translated string on success, otherwise original string
 */
static inline NSString* translate_n(NSString* singular, NSString* plural, NSInteger n, NSString* domain) OVERLOADABLE_FUNC {
return _n(singular,plural,n,domain);
};

/**
 *  Translate a string respecting provided number, using default text domain
 *
 *  @param singular a singular string
 *  @param plural   a plural string
 *  @param n        a number used to lookup a translation with correct inflection
 *
 *  @return a translated string on success, otherwise original string
 */
static inline NSString* translate_n(NSString* singular, NSString* plural, NSInteger n) OVERLOADABLE_FUNC {
return _n(singular, plural, n, DEFAULT_TEXTDOMAIN);
};


#endif /* GettextHelpersSwift_h */
