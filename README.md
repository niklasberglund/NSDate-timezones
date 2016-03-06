NSDate-timezones
================

NSDate category adding methods for converting between time zones

# Install
Either manually add the files to your project or install using CocoaPods. Add NSDate+timezones to your Podfile like so:
```
pod 'NSDate+timezones'
```

# Usage
Convert between timezones using the methods:
```
- (NSDate *)dateToTimeZone:(NSTimeZone *)toTimeZone fromTimeZone:(NSTimeZone *)fromTimeZone
```

and

```
- (NSDate *)dateToTimeZone:(NSTimeZone *)toTimeZone
```

More information in the method documentation.
