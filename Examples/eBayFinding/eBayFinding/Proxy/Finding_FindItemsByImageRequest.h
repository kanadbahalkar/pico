// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Finding_BestMatchFindingServiceRequest.h"


@class Finding_ItemFilter;
@class Finding_AspectFilter;
@class Finding_DomainFilter;

/**
 
 Find items based on the image similarity to the specified item.
 
 
 @ingroup FindingServicePortType
*/
@interface Finding_FindItemsByImageRequest : Finding_BestMatchFindingServiceRequest {

@private
    NSString *_itemId;
    NSMutableArray *_categoryId;
    NSMutableArray *_itemFilter;
    NSMutableArray *_aspectFilter;
    NSMutableArray *_domainFilter;
    NSMutableArray *_outputSelector;

}


/**
 
 Specifies the item that the customer wants to use for retrieving
 more listings with similar images. The item must active and it must
 be listed in a Clothing, Shoes & Accessories category (parent
 category ID 11450 on the eBay US site). In addition, the item ID you
 specify must exist on either the US, UK, or DE the sites.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemId;

/**
 
 Specifies the leaf category from which you want to retrieve item
 listings with similar images. If no category is specified, search
 results can come from any Clothing, Shoes & Accessories leaf
 category. This field can be repeated (up to 3 times) to include
 multiple categories.
 <br><br>
 Image similarity searches are only supported in Clothing, Shoes &
 Accessories leaf categories on the eBay US, UK, and Germany sites.
 <br><br>
 If a specified category ID doesn't match an existing category for the
 site, eBay returns an invalid-category error message. To determine
 valid leaf categories, use the Shopping API <b
 class="con">GetCategoryInfo</b> call.
 
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, retain) NSMutableArray *categoryId;

/**
 
 Reduce the number of items returned by a find request using item
 filters. Use <b class="con">itemFilter</b> to specify
 name/value pairs. You can include multiple item filters in a single
 request.
 
 
 entry type : class Finding_ItemFilter
*/

@property (nonatomic, retain) NSMutableArray *itemFilter;

/**
 
 Aspect filters refine (limit) the number of items returned by a find
 request. Obtain input values for aspectFilter fields from an
 aspectHistogramContainer returned in the response of a previous
 query.
 <br><br>
 By issuing a series of find queries, you can continually refine the
 items returned in your responses. Do this by repeating a query using
 the aspect values returned in one response as the input values to
 your next query.
 <br><br>
 For example, the aspectHistogramContainer in a response on Men's
 Shoes could contain an aspect of Size, along with "aspect values" for
 the different sizes currently available in Men's Shoes. By populating
 aspectFilter fields with the values returned in an
 aspectHistogramContainer, you can refine the item results returned by
 your new query.
 <br/><br/>
 <span class="tablenote">
 <strong>Note:</strong> If a call that specifies an 
 <strong>outputSelector</strong> value of 
 <strong>AspectHistogram</strong> returns 
 <strong>aspectHistogramContainer.domainName</strong>, this is a sign 
 that aspect histogram data might not be returned if you also specify an 
 <strong>aspectFilter</strong> in the next call. To ensure that 
 aspect histogram data is returned for the next call, add a <strong>
 domainFilter</strong> to the call as well.
 </span>
 
 
 entry type : class Finding_AspectFilter
*/

@property (nonatomic, retain) NSMutableArray *aspectFilter;

/**
 
 Restricts results to items listed within the specified domain.
 Domains are a buy-side grouping of items. such as shoes or digital
 cameras. A domain can span multiple eBay categories.
 
 
 entry type : class Finding_DomainFilter
*/

@property (nonatomic, retain) NSMutableArray *domainFilter;

/**
 
 Defines what data to return, in addition to the default set of data,
 in a response.
 <br><br>
 If you don't specify this field, eBay returns a default set of item
 fields. Use outputSelector to include more information in the
 response. The additional data is grouped into discrete nodes. You can
 specify multiple nodes by including this field multiple times, as
 needed, in the request.
 <br><br>
 If you specify this field, the additional fields returned can affect
 the call's response time (performance), including in the case with
 feedback data.
 
 
 entry type : string constant in Finding_OutputSelectorType.h
*/

@property (nonatomic, retain) NSMutableArray *outputSelector;


@end
