# Linux Graphics Stack

## Bring a Pixel Buffer onto the Display

### Applications draw pixels into pixels buffer

Application first draws pixels into some buffer so it's some memory and it puts them as RGN or nv12 so in some specified format describes the color of each pixels.

For example it may just go through the each line of this buffer and put the color once there.

### Pixel buffer must be sent to display controller

Then this pixcel buffer must be sent to the display controller which is responsible for drivin the display.

### Display must be configured for pixel buffer

And the display must be configred to correctly interpret the data for the display such as the color format the size and this drive which means how long are the lines of this buffer.

All of this has to be configured in the display ocntroller to correctly interpret the otherwise meaningless data.

## Display - Acronyms

- DRI - Direct Rendering Infrastructure
- DRM - Direct Renderring Manager
- KMS - Kernel Mode setting
- FB Frame Buffer
