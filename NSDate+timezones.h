//
//  NSDate+timezones.h
//

/*
Copyright (c) 2013 Niklas Berglund

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#import <Foundation/Foundation.h>

@interface NSDate (timezones)

/**
 * Create a new NSDate object with time converted between specified time zones.
 * 
 * @param toTimeZone Destination time zone
 * @param fromTimeZone The time zone this NSDate object's time is set in.
 *
 * @return New NSDate object with time adjusted to match specified timezone.
 */
- (NSDate *)dateToTimeZone:(NSTimeZone *)toTimeZone fromTimeZone:(NSTimeZone *)fromTimeZone;

/**
 * Create a new NSDate object with time converted from the device's local time zone to target time zone.
 *
 * @param toTimeZone Destination time zone
 *
 * @return New NSDate object with time adjusted for destination time zone.
 */
- (NSDate *)dateToTimeZone:(NSTimeZone *)toTimeZone;

@end
