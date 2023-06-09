//
//  ZSWStringParser.h
//  Pods
//
//  Created by Zachary West on 2015-02-21.
//
//

/*!
 * @private
 */

#import "ZSWTaggedString.h"
#import "ZSWTaggedStringOptions.h"
#import "ZSWTaggedStringAttribute.h"

#define ZSWSelector(selectorName) (NSStringFromSelector(@selector(selectorName)))

NS_ASSUME_NONNULL_BEGIN

@interface ZSWStringParser : NSObject

+ (nullable id)stringWithTaggedString:(ZSWTaggedString *)taggedString
                              options:(ZSWTaggedStringOptions *)options
                          returnClass:(Class)returnClass
                                error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
