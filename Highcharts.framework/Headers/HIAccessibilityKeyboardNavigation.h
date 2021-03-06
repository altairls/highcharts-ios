/**
* (c) 2009-2017 Highsoft AS
*
* License: www.highcharts.com/license
* For commercial usage, a valid license is required. To purchase a license for Highcharts iOS, please see our website: https://shop.highsoft.com/
* In case of questions, please contact sales@highsoft.com
*/

#import "HIChartsJSONSerializable.h"


/**
* description: Options for keyboard navigation.
*/
@interface HIAccessibilityKeyboardNavigation: HIChartsJSONSerializable

/**
* description: Skip null points when navigating through points with the keyboard.
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/accessibility/advanced-accessible/ : Accessible complex chart
* default: false
*/
@property(nonatomic, readwrite) NSNumber /* Bool */ *skipNullPoints;
/**
* description: Enable keyboard navigation for the chart.
* default: true
*/
@property(nonatomic, readwrite) NSNumber /* Bool */ *enabled;

-(NSDictionary *)getParams;

@end
