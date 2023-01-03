// bitmaps.h allows you change what is shown on the display during the startup of GP2040.
// The default image size is 128x64px.
// The default image type is 2 color monotone (black and white).
// Bitmap images can be converted using the Marlin Bitmap Converter (https://marlinfw.org/tools/u8glib/converter.html) choose `Marlin 2.x`, `invert` and `Binary`.
// Copy the output and replace the desired image below.
// `splashImageMain` is the default image.
// `bootLogoTop` is the default image that will scroll down from the top.
// `bootLogoBottom` is the default image that will scroll up from the bottom.
// `splashCustom` is a custom image that you can change as needed.
// If you plan to use a custom image through `splashCustom`, make sure to remove ` /*` from the top and bottom of the section 


// Hard coded default
const unsigned char splashImageMain[] = {
    // 'GP2040-CE Main', 128x64px
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x80,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xDF,0xC0,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xC1,0xFF,0xA0,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xCF,0xFE,0x80,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xE0,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xAB,0xC0,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2C,0x00,0x00,0xFB,0x83,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x01,0xFF,0x00,0x01,0xF3,0x07,0xFC,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x07,0xFF,0x00,0x03,0xE0,0x3F,0xF4,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x2C,0x38,0x0A,0xE7,0x80,0x03,0xC0,0x5F,0x80,0x00,
  0x00,0x00,0x00,0x20,0x07,0x81,0xFF,0x39,0xC3,0xC7,0x01,0xD7,0x80,0x3F,0x00,0x00,
  0x00,0x00,0x00,0xE0,0x1F,0xE7,0xFF,0x79,0xC7,0x87,0x9F,0xA7,0x80,0x6E,0x3C,0x00,
  0x00,0x00,0xA0,0xC0,0x3F,0xEA,0xE7,0xF3,0xEF,0x07,0x7F,0xC7,0x01,0xCF,0xFF,0x80,
  0x00,0x03,0x8F,0xFC,0x7F,0xC3,0xC7,0x7F,0xFE,0x0F,0x7E,0x8F,0x87,0xDF,0xFC,0x00,
  0x00,0x0F,0xFF,0xFF,0x73,0xC7,0x87,0xFF,0xDE,0x0E,0x50,0x07,0x1F,0x1F,0xD0,0x00,
  0x00,0x1F,0x57,0xFF,0xE7,0x8F,0x07,0xFF,0x1C,0x3E,0x00,0x0F,0xFF,0x7F,0x00,0x00,
  0x00,0x7E,0x0B,0x8F,0x8F,0x8E,0x0F,0xFF,0x9E,0x7C,0x00,0x07,0xFD,0xFC,0x00,0x00,
  0x00,0x7C,0x37,0x9F,0x1F,0x1E,0x0F,0x87,0x1E,0xF8,0x00,0x07,0xF0,0x30,0x00,0x00,
  0x00,0xF1,0xF7,0xFE,0x1E,0x1C,0x3E,0x0E,0x1F,0xF0,0x00,0x01,0x40,0x28,0x00,0x00,
  0x01,0xEF,0xE7,0xF8,0x3C,0x3E,0x7C,0x0F,0x1F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,
  0x03,0xFF,0x8F,0xF0,0x7F,0xFE,0xF8,0x0E,0x0F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
  0x03,0xFF,0xCF,0xC0,0xFF,0xFF,0xF0,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x07,0x8B,0xFF,0x01,0xFF,0x8F,0xC0,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x07,0x87,0xFE,0x01,0xFE,0x0F,0x80,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x07,0x1F,0xDE,0x03,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x07,0xBF,0x9E,0x01,0xC0,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x07,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x07,0xFB,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x03,0xE7,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x01,0x47,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x0E,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

// Image 01
const unsigned char splashImage01[] = {
    // 'GP2040 - Drifter', 128x64px
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x03,0xFF,0xFF,0xCF,0xFF,0xF3,0xFF,0xF3,0xFF,0xFC,0xF8,0x3E,0x03,0xFF,0xFE,
  0x00,0x03,0xFF,0xFF,0x9F,0xFF,0xE6,0x00,0x36,0x00,0x0C,0x90,0x24,0x06,0x00,0x04,
  0x00,0x07,0xFF,0xFF,0x9F,0xFF,0xE4,0x00,0x64,0x00,0x09,0xB0,0x6C,0x04,0x00,0x0C,
  0x00,0x07,0xFF,0xFF,0x3F,0xFF,0xCF,0xFE,0x4C,0x00,0x19,0x20,0x48,0x0C,0x00,0x08,
  0x00,0x0F,0xFF,0xFF,0x3C,0x07,0xC0,0x04,0xC9,0xFF,0x93,0x60,0xD8,0x09,0xFF,0x98,
  0x00,0x0F,0x80,0x3E,0x7C,0x07,0x80,0x04,0x9B,0x00,0xB2,0x40,0x90,0x1B,0x00,0x90,
  0x00,0x1F,0x00,0x7E,0x78,0x0F,0x80,0x0D,0x92,0x01,0xA6,0xC1,0xB0,0x12,0x01,0xB0,
  0x00,0x1F,0x00,0x00,0xF8,0x0F,0x00,0x09,0x36,0x03,0x64,0x81,0x20,0x36,0x01,0x20,
  0x00,0x3E,0x00,0x00,0xF0,0x1F,0x00,0x1B,0x24,0x02,0x4D,0x83,0x60,0x24,0x03,0x60,
  0x00,0x3E,0x00,0x01,0xF0,0x1E,0x00,0x12,0x6C,0x06,0xC9,0x02,0x40,0x6C,0x02,0x40,
  0x00,0x7C,0x00,0x01,0xF0,0x3E,0x00,0x36,0x48,0x04,0x99,0x06,0x40,0x48,0x06,0xC0,
  0x00,0x7C,0x00,0x03,0xFF,0xFC,0xFF,0xE4,0xD8,0x0D,0x91,0xFC,0x7E,0xD8,0x04,0x80,
  0x00,0xF8,0x7F,0xF3,0xFF,0xFC,0x80,0x0C,0x90,0x09,0x30,0x00,0x04,0x90,0x0D,0x80,
  0x00,0xF8,0x7F,0xE7,0xFF,0xF9,0x80,0x09,0xB0,0x1B,0x20,0x00,0x0D,0xB0,0x09,0x00,
  0x01,0xF0,0x3F,0xC7,0xFF,0xF9,0x3F,0xF9,0x20,0x12,0x7F,0xF3,0xF9,0x20,0x1B,0x00,
  0x01,0xF0,0x3F,0xCF,0x80,0x03,0x60,0x03,0x60,0x36,0x00,0x32,0x03,0x60,0x12,0x00,
  0x03,0xE0,0x0F,0x8F,0x80,0x02,0x40,0x02,0x40,0x24,0x00,0x26,0x02,0x40,0x36,0x00,
  0x03,0xE0,0x0F,0x9F,0x00,0x06,0xC0,0x06,0xC0,0x6C,0x00,0x64,0x06,0xC0,0x24,0x00,
  0x07,0xC0,0x0F,0x9F,0x00,0x04,0x80,0x04,0x80,0x48,0x00,0x4C,0x04,0x80,0x6C,0x00,
  0x07,0xC0,0x1F,0x3E,0x00,0x0D,0x80,0x0D,0x80,0xC8,0x00,0xC8,0x0D,0x80,0x48,0x00,
  0x0F,0x80,0x1E,0x3E,0x00,0x09,0x00,0x09,0x00,0x98,0x00,0x98,0x09,0x00,0xD8,0x00,
  0x0F,0x80,0x3E,0x7C,0x00,0x19,0x00,0x19,0x01,0xB0,0x01,0x90,0x19,0x00,0x90,0x00,
  0x1F,0xFF,0xFC,0x7C,0x00,0x11,0xFF,0x91,0xFF,0x20,0x01,0x30,0x11,0xFF,0xB0,0x00,
  0x1F,0xFF,0xFC,0xF8,0x00,0x30,0x01,0xB0,0x00,0x60,0x03,0x20,0x30,0x00,0x20,0x00,
  0x3F,0xFF,0xF8,0xF8,0x00,0x20,0x01,0x20,0x00,0x40,0x02,0x60,0x20,0x00,0x60,0x00,
  0x3F,0xFF,0xF9,0xF0,0x00,0x60,0x03,0x60,0x00,0xC0,0x06,0x40,0x60,0x00,0x40,0x00,
  0x7F,0xFF,0xF1,0xF0,0x00,0xFF,0xFE,0x7F,0xFF,0x80,0x07,0xC0,0xFF,0xFF,0xC0,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

// Image 02
const unsigned char splashImage02[] = {
    // 'GP2040-CE - JP', 128x64px
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x1F,0xFC,0xFF,0x80,0xF8,0x1F,0x00,0x30,0x7C,0x00,0x7F,0xE1,0xFF,0x80,0x01,0xE2,
  0x1F,0xFC,0xFF,0x80,0xF8,0x1F,0x00,0x30,0x7C,0x00,0x7F,0xE1,0xFF,0x88,0x41,0x10,
  0x60,0x00,0xC0,0x63,0x06,0x60,0xC0,0xF1,0x83,0x01,0x80,0x31,0x80,0x02,0x26,0x10,
  0x60,0x00,0xC0,0x63,0x0E,0x61,0xC1,0xF1,0x87,0x01,0x80,0x31,0xA0,0x00,0x18,0x10,
  0x60,0x00,0xC0,0x60,0x1C,0x61,0xC3,0xB1,0x87,0x01,0x88,0x01,0x81,0x00,0x60,0x1A,
  0x60,0x7C,0xFF,0x80,0x38,0x63,0xC7,0x31,0x8F,0x21,0x80,0x09,0xF8,0x25,0x81,0x90,
  0x60,0x7C,0xFF,0x80,0x70,0x6E,0xCE,0x31,0xBB,0x01,0x81,0x01,0xF8,0x82,0x0F,0x94,
  0x60,0x0C,0xC0,0x00,0xE0,0x6E,0xDC,0x31,0xBB,0x01,0x80,0x01,0x80,0x04,0x3F,0x91,
  0x60,0x0C,0xC0,0x01,0xC0,0x78,0xD8,0x31,0xE3,0x7D,0x84,0x05,0x80,0x18,0x7F,0x90,
  0x60,0x0C,0xC0,0x01,0x80,0x70,0xD8,0x31,0xC3,0x7D,0x80,0x81,0x84,0x88,0xE7,0x94,
  0x60,0x0C,0xC0,0x03,0x00,0x70,0xDF,0xFD,0xC3,0x01,0x80,0x31,0x80,0x09,0xE7,0x1C,
  0x60,0x0C,0xC0,0x03,0x00,0x60,0xDF,0xFD,0x83,0x01,0x80,0x31,0x80,0x09,0xC7,0x12,
  0x1F,0xF0,0xC0,0x03,0xFE,0x1F,0x00,0x30,0x7C,0x00,0x7F,0xE1,0xFF,0x99,0x8E,0x03,
  0x1F,0xF0,0xC0,0x03,0xFE,0x1F,0x00,0x30,0x7C,0x10,0x7F,0xE1,0xFF,0x89,0x0C,0x02,
  0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x18,0x46,
  0x00,0x00,0x00,0x20,0x00,0x01,0x04,0x20,0x02,0x80,0x03,0xF8,0x01,0x80,0x20,0xC7,
  0x00,0x00,0x02,0x00,0x00,0x80,0x00,0x02,0x90,0x13,0x1C,0x0E,0x46,0x00,0x03,0xC2,
  0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x00,0x40,0x30,0x03,0x38,0x3C,0x07,0xE3,
  0x00,0x00,0x20,0x09,0x28,0x20,0x08,0x10,0x01,0x02,0xC1,0xE0,0x90,0xFF,0x0F,0xE3,
  0x00,0x09,0x00,0x80,0x00,0x04,0x00,0x44,0x80,0x48,0x87,0xF8,0x53,0xFF,0xC9,0xE2,
  0x02,0x40,0x00,0x40,0x02,0x10,0x22,0x00,0x15,0x11,0x9F,0xFE,0x63,0xFF,0xC1,0xC5,
  0x00,0x00,0x04,0x08,0x80,0x04,0x11,0x41,0x4F,0xCD,0x1F,0xFE,0x27,0xFF,0xE7,0xC5,
  0x20,0x08,0x40,0x20,0x00,0x92,0x00,0x14,0x30,0x33,0x3F,0xFF,0x07,0xFF,0xE3,0x0E,
  0x00,0x21,0x00,0x82,0x50,0x00,0xA9,0x41,0xC0,0x0E,0x3F,0xFF,0x0F,0xFF,0xF0,0x17,
  0x02,0x00,0x24,0x00,0x02,0x92,0x02,0x0B,0x07,0x82,0x7F,0xFF,0x8F,0xFF,0xF0,0x39,
  0x00,0x08,0x00,0x28,0x90,0x08,0x92,0xA6,0x1F,0xE0,0x7F,0xFF,0x8F,0xFF,0xF3,0xDE,
  0x22,0x00,0x12,0x04,0x45,0x44,0x91,0x26,0x7F,0xF8,0x7F,0xFF,0x8F,0xFF,0xF2,0xA6,
  0x00,0x85,0x40,0x90,0x10,0x22,0x4A,0x94,0x7F,0xF8,0x7F,0xFF,0x87,0xFF,0xE3,0xD9,
  0x88,0x00,0x02,0x01,0x42,0x99,0x54,0x54,0xFF,0xFC,0x3F,0xFF,0x07,0xFF,0xE5,0x35,
  0x44,0x48,0x90,0x94,0x2A,0x05,0x4B,0x58,0xFF,0xFC,0x3F,0xFF,0x03,0xFF,0xC5,0x96,
  0x02,0x04,0x48,0x8A,0x83,0xA8,0x49,0x59,0xFF,0xFE,0x1F,0xFE,0x03,0xFF,0xCD,0x52,
  0x10,0x40,0x06,0x50,0x68,0x97,0xB5,0xA9,0xFF,0xFE,0x1F,0xFE,0x00,0xFF,0x08,0xAB,
  0x81,0x2A,0xB0,0x25,0x96,0x68,0x4E,0xB9,0xFF,0xFE,0x07,0xF8,0x00,0x3C,0x17,0x90,
  0x54,0x80,0x0A,0x94,0x52,0x97,0x73,0x59,0xFF,0xFE,0x01,0xE0,0x00,0x00,0x70,0x5A,
  0x00,0x6B,0x4A,0xA5,0x4A,0xD5,0x59,0xB8,0xFF,0xFC,0x00,0x00,0x00,0x01,0xAA,0x05,
  0x55,0x08,0xA5,0x56,0xB5,0x6A,0xAE,0x9C,0xFF,0xFC,0x00,0x00,0x01,0xE0,0x93,0x68,
  0x02,0xA5,0x28,0x49,0x5B,0x57,0x55,0xEC,0x7F,0xF8,0x0F,0x00,0x07,0xF8,0x64,0x00,
  0xD8,0x92,0x97,0x6D,0x4C,0xB9,0xDD,0x6A,0x7F,0xF8,0x3F,0xC0,0x1F,0xFE,0x52,0xAA,
  0x0C,0xD2,0xD1,0x25,0xEE,0xDE,0xEF,0x6A,0x1F,0xE0,0xFF,0xF0,0x1F,0xFE,0x22,0x00,
  0x52,0x2D,0x5E,0xFB,0x37,0x55,0xB5,0xBB,0x07,0x80,0xFF,0xF0,0x3F,0xFF,0x28,0x4A,
  0x55,0xD2,0xA5,0x8C,0xC9,0xBB,0x55,0x4D,0x80,0x01,0xFF,0xF8,0x3F,0xFF,0x10,0x00,
  0x95,0x3A,0xF6,0xEE,0xFD,0xDD,0xDD,0x76,0x00,0x01,0xFF,0xF8,0x7F,0xFF,0x95,0x48,
  0xD5,0x9B,0x35,0xB7,0x56,0x4C,0xD7,0x18,0x3C,0x03,0xFF,0xFC,0x7F,0xFF,0x90,0x02,
  0x56,0xD5,0xD6,0xDA,0xBB,0xF7,0x69,0xF0,0xFF,0x03,0xFF,0xFC,0x7F,0xFF,0x98,0x00,
  0xDA,0xAE,0x5D,0xB7,0xEA,0x94,0x96,0x13,0xFF,0xC3,0xFF,0xFC,0x7F,0xFF,0x91,0x48,
  0x2A,0xDB,0xD6,0xD4,0xAD,0x6B,0x6B,0x63,0xFF,0xC3,0xFF,0xFC,0x3F,0xFF,0x10,0x00,
  0xEF,0x6D,0x77,0x76,0xE5,0x59,0x29,0x67,0xFF,0xE1,0xFF,0xF8,0x3F,0xFF,0x20,0x40,
  0xBB,0xB7,0xB5,0x9A,0x9A,0xA4,0x92,0x47,0xFF,0xE1,0xFF,0xF9,0x1F,0xFE,0x29,0x08,
  0x54,0xD4,0xAA,0xD5,0x6D,0x56,0xA5,0xCF,0xFF,0xF0,0xFF,0xF1,0x9F,0xFE,0x40,0x00,
  0xDF,0x6E,0xBA,0xAD,0x25,0x52,0x90,0xCF,0xFF,0xF0,0xFF,0xF2,0x87,0xF8,0x40,0x00,
  0xD3,0x66,0x94,0xC5,0xA5,0x12,0xA4,0x4F,0xFF,0xF0,0x3F,0xC2,0x41,0xE0,0x90,0x00,
  0xAD,0xBB,0xAB,0x34,0x50,0xA8,0x12,0xCF,0xFF,0xF2,0x0F,0x04,0x70,0x03,0x01,0x08,
  0x5A,0xA4,0x54,0x52,0x8E,0x45,0x40,0x47,0xFF,0xE3,0x80,0x19,0x0C,0x0C,0x00,0x40,
  0xD5,0x5B,0x57,0x2A,0x61,0x20,0x29,0x27,0xFF,0xE5,0x60,0x68,0x13,0xF4,0x00,0x00,
  0xD5,0x4A,0xA1,0x92,0x14,0x15,0x04,0x23,0xFF,0xC4,0x9F,0x80,0x02,0x00,0x00,0x00,
  0x2A,0xA9,0x2C,0x49,0x21,0x40,0x90,0xB3,0xFF,0xC8,0x10,0x00,0x00,0x00,0x00,0x00,
  0xD5,0x4A,0x91,0x24,0x84,0x08,0x00,0x10,0xFF,0x08,0x00,0x01,0x00,0x00,0x00,0x00,
  0x52,0x60,0x44,0x84,0xA1,0x24,0x44,0x08,0x3C,0x11,0x04,0x40,0x00,0x04,0x40,0x00,
  0x52,0x1A,0x52,0x40,0x10,0x00,0x10,0x96,0x00,0x60,0x00,0x00,0x42,0x40,0x00,0x00,
  0x29,0x42,0x00,0x24,0x45,0x24,0x22,0x01,0x81,0x80,0x40,0x01,0x00,0x00,0x00,0x00,
  0x85,0x29,0x54,0x81,0x00,0x00,0x80,0x00,0x7E,0x08,0x00,0x00,0x00,0x00,0x00,0x00,
  0x50,0x08,0x00,0x10,0x10,0x04,0x00,0x04,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

// Image 03
const unsigned char splashImage03[] = {
    // 'GP2040-CE - Lucipher', 128x64px
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0xC3,0xF8,0x1F,0xF0,0x0F,0xC0,0x7E,0x00,0x3C,0x1F,0x80,0x7F,0x07,0xFF,0x3F,
  0x00,0x07,0xFC,0x1F,0xFC,0x3F,0xE0,0xFF,0x00,0x78,0x3F,0xC1,0xFF,0x87,0xFF,0x00,
  0xFF,0x8F,0xFE,0x1F,0xFC,0x7D,0xF1,0xEF,0x00,0xF8,0x7B,0xC1,0xFF,0x87,0xFF,0x3F,
  0x00,0x1E,0x0E,0x1C,0x1E,0x78,0xF1,0xC7,0x81,0xF8,0x71,0xE3,0xC3,0xC7,0x00,0x00,
  0xFE,0x3C,0x0E,0x3C,0x1E,0x70,0xF3,0x83,0x81,0xF8,0xE0,0xE7,0x81,0xCF,0x00,0x3F,
  0x20,0x3C,0x00,0x3C,0x1E,0x00,0xF3,0x83,0x83,0xF8,0xE0,0xE7,0x01,0xCF,0x00,0x04,
  0xD0,0x38,0x00,0x3C,0x1E,0x00,0xE3,0x83,0x87,0x70,0xE0,0xE7,0x00,0x0F,0x00,0x0B,
  0x08,0x78,0x00,0x38,0x3C,0x01,0xE7,0x87,0x8E,0x71,0xE1,0xEF,0x00,0x0F,0xFC,0x10,
  0xFC,0x78,0xFE,0x3F,0xFC,0x03,0xC7,0x87,0x9E,0x71,0xE1,0xEF,0x00,0x0F,0xFC,0x3F,
  0x08,0x78,0xFE,0x3F,0xF8,0x07,0x87,0x87,0x1C,0x71,0xE1,0xCF,0x00,0x0F,0xFC,0x10,
  0xD0,0x78,0xFE,0x7F,0xE0,0x0F,0x07,0x07,0x38,0xF1,0xC1,0xCF,0x00,0x1E,0x00,0x0B,
  0x20,0x78,0x1C,0x78,0x00,0x1E,0x07,0x07,0x7F,0xF9,0xC1,0xCF,0x03,0x9E,0x00,0x04,
  0xFE,0x78,0x1C,0x70,0x00,0x3C,0x07,0x0F,0x7F,0xF9,0xC3,0xCF,0x07,0x9C,0x00,0x7F,
  0x00,0x3C,0x1C,0x70,0x00,0xF8,0x07,0x0E,0x00,0xE1,0xC3,0x87,0x07,0x9C,0x00,0x00,
  0xFF,0x3F,0xFC,0x70,0x01,0xFF,0xE3,0xFE,0x00,0xE0,0xFF,0x87,0xFF,0x1F,0xFC,0x7F,
  0x00,0x1F,0xF8,0x70,0x01,0xFF,0xE3,0xFC,0x00,0xE0,0xFF,0x03,0xFE,0x1F,0xFC,0x00,
  0xFF,0x8F,0xF0,0xF0,0x01,0xFF,0xC1,0xF8,0x01,0xE0,0x7E,0x01,0xF8,0x3F,0xF8,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x8F,0x9E,0x1D,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDB,0x30,0x00,0x00,
  0x0C,0x63,0x30,0xA0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5E,0xC8,0x00,0x40,
  0x10,0x01,0xE0,0xA0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x50,0x08,0x01,0xA0,
  0x10,0x1E,0x00,0xA0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x50,0x04,0x02,0x10,
  0x20,0x37,0x00,0xA0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x50,0x02,0x0C,0x08,
  0x40,0x23,0x00,0xA0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x50,0x01,0x10,0x04,
  0x40,0x33,0x00,0x03,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x50,0x01,0x60,0x02,
  0x80,0x1E,0x00,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x50,0x00,0x80,0x01,
  0x00,0x0C,0x03,0xBF,0xF0,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x50,0x00,0x00,0x00,
  0x00,0x0C,0x03,0xE7,0x60,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x50,0x00,0x00,0x00,
  0x00,0x0C,0x3C,0xE7,0x01,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x50,0x00,0x00,0x00,
  0x00,0x0F,0xC7,0x30,0x02,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x50,0x00,0x00,0x00,
  0x00,0x7C,0x07,0x78,0x0D,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x03,0xFF,0x06,0x38,0x1A,0xB8,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xE0,0x00,0x00,
  0x3C,0x1E,0x00,0x00,0x25,0x78,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0xDF,0x00,0x00,
  0xC0,0x00,0x00,0x00,0xC2,0xBB,0xFF,0xFF,0xFF,0xFD,0xC0,0x03,0xF8,0x07,0xF0,0x00,
  0x00,0x00,0x00,0x01,0x81,0x78,0x00,0x00,0x00,0x01,0xE0,0x03,0x03,0x00,0x3F,0x80,
  0x00,0x00,0x00,0x02,0x00,0x3B,0xFF,0xFF,0xFF,0xFD,0xF0,0x00,0x1C,0x70,0x00,0xFC,
  0xFF,0xFF,0xFF,0xFE,0x00,0x30,0x00,0x00,0x00,0x00,0xFC,0x1F,0x83,0xFD,0xE0,0x07,
  0x00,0x00,0x00,0x02,0x00,0xC0,0x00,0x00,0x00,0x00,0x3A,0x13,0x00,0x00,0x00,0x00,
  0xFF,0xFF,0xFF,0xFE,0x01,0x80,0x00,0x00,0x00,0x00,0x0F,0x8C,0x01,0xF8,0x1F,0x80,
  0x00,0x00,0x00,0x02,0x03,0x00,0x00,0x00,0x00,0x00,0x06,0xC0,0x03,0x06,0x60,0x70,
  0x00,0x00,0x00,0x02,0x06,0x00,0x00,0x00,0x00,0x00,0x03,0x20,0x00,0xFC,0x1F,0x80,
  0x00,0x00,0x00,0x02,0x0C,0x00,0x00,0x00,0x00,0x00,0x01,0x1C,0x00,0x00,0x00,0x01,
  0x00,0x00,0x00,0x02,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x87,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x02,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x64,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x02,0xA0,0x00,0x00,0x00,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x00,
  0xFF,0xFF,0xFF,0xFF,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x02,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,
  0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFF,
  0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,
  0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,
  0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01
};

// Split up images for boot animation without a huge byte array.
const unsigned char bootLogoTop[] = {
    // 'gp2040logot', 43x39px
    0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x00, 0x01, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x07, 0xff, 0xfc, 
    0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xc0, 0x00, 0x0f, 0xff, 
    0xff, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x20, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 
    0x00, 0x00, 0x06, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x0f, 0x7f, 0xb0, 0x00, 0x00, 0x1c, 0x0f, 0x33, 
    0x78, 0x00, 0x00, 0x3e, 0x06, 0x60, 0x78, 0x00, 0x00, 0x3e, 0x00, 0xf6, 0x30, 0x00, 0x00, 0x1c, 
    0x06, 0xff, 0x60, 0x00, 0x00, 0x00, 0x0f, 0x6f, 0xf0, 0x00, 0x00, 0x00, 0x0f, 0x06, 0xf0, 0x00, 
    0x00, 0x00, 0x06, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 
    0x00, 0x20, 0x80, 0x00, 0x00, 0x00, 0x00, 0x20, 0x40, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x00, 
    0x00, 0x00, 0x00, 0xc0, 0x20, 0x00, 0x00, 0x00, 0x00, 0x80, 0x30, 0x00, 0x00, 0x00, 0x01, 0x80, 
    0x1f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x07, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x7f, 0xff, 0xff, 
    0xc0, 0x00, 0x00, 0x1f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x07, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x01, 
    0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00
};
const unsigned char bootLogoBottom[] = {
    // 'gp2040logotb', 80x21px
    0x7f, 0xf7, 0xff, 0x0f, 0xfc, 0x0f, 0x83, 0xc3, 0xc1, 0xf0, 0xff, 0xf7, 0xff, 0x9f, 0xfe, 0x3f, 
    0xe3, 0xc3, 0xc7, 0xfc, 0xff, 0xf7, 0xff, 0x9f, 0xfe, 0x7f, 0xf3, 0xc3, 0xcf, 0xfe, 0xff, 0xf7, 
    0xff, 0xdf, 0xfe, 0x7f, 0xf3, 0xc3, 0xcf, 0xfe, 0xf0, 0xf7, 0x87, 0xde, 0x1e, 0xf8, 0xf3, 0xc3, 
    0xcf, 0x1f, 0xf0, 0xf7, 0x87, 0xde, 0x1e, 0xf8, 0xfb, 0xc3, 0xdf, 0x0f, 0xf0, 0x07, 0x87, 0xde, 
    0x1e, 0xf0, 0x7b, 0xc3, 0xdf, 0x0f, 0xf0, 0x07, 0x87, 0xc0, 0x3e, 0xf0, 0x7b, 0xc3, 0xdf, 0x0f, 
    0xf3, 0xf7, 0xff, 0xc0, 0x7e, 0xf0, 0x7b, 0xff, 0xdf, 0x0f, 0xf3, 0xf7, 0xff, 0x81, 0xfc, 0xf0, 
    0x7b, 0xff, 0xdf, 0x0f, 0xf3, 0xf7, 0xff, 0x83, 0xf8, 0xf0, 0x7b, 0xff, 0xdf, 0x0f, 0xf3, 0xf7, 
    0xff, 0x0f, 0xe0, 0xf0, 0x79, 0xff, 0xdf, 0x0f, 0xf0, 0xf7, 0x80, 0x1f, 0xc0, 0xf0, 0x78, 0x03, 
    0xdf, 0x0f, 0xf0, 0xf7, 0x80, 0x1f, 0x80, 0xf0, 0x78, 0x03, 0xdf, 0x0f, 0xf0, 0xf7, 0x80, 0x1e, 
    0x1e, 0xf0, 0x78, 0x03, 0xdf, 0x0f, 0xf0, 0xf7, 0x80, 0x1e, 0x1e, 0xf8, 0xf8, 0x03, 0xdf, 0x1f, 
    0xf0, 0xf7, 0x80, 0x1f, 0xfe, 0x7f, 0xf0, 0x03, 0xcf, 0xfe, 0xff, 0xf7, 0x80, 0x1f, 0xfe, 0x7f, 
    0xf0, 0x03, 0xcf, 0xfe, 0xff, 0xf7, 0x80, 0x1f, 0xfe, 0x3f, 0xe0, 0x03, 0xc7, 0xfc, 0x7f, 0xe7, 
    0x80, 0x1f, 0xfe, 0x1f, 0xc0, 0x03, 0xc3, 0xf8, 0x3f, 0x87, 0x80, 0x1f, 0xfe, 0x0f, 0x80, 0x03, 
    0xc0, 0xf0
};

// Replicating user uploaded image. Uncomment to test.
const unsigned char splashCustom[] = {
    /*
    // 'im numbah 1', 128x64px
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0x67, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x86, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x2c, 0xcc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x2d, 0xbe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xf0, 0x03, 0x6d, 0xbf, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xc3, 0x08, 0x7d, 0xf7, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0x10, 0x02, 0x00, 0xfb, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xfc, 0x40, 0x00, 0x1e, 0x3b, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xf9, 0x00, 0x00, 0x1f, 0xbb, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 
    0xff, 0xff, 0xfc, 0x00, 0x00, 0x78, 0x1f, 0x8b, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x0f, 0xff, 
    0xff, 0xff, 0xc0, 0xc8, 0x01, 0xec, 0x1f, 0x37, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x0f, 0xff, 
    0xff, 0xff, 0x1f, 0x80, 0x03, 0xda, 0x0c, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xce, 0x0f, 0xff, 
    0xff, 0xfc, 0x7f, 0x00, 0x03, 0xfd, 0x0f, 0x7f, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xc6, 0x0f, 0xff, 
    0xff, 0xf1, 0xfe, 0x00, 0x03, 0xb7, 0x0f, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x0f, 0xff, 
    0xff, 0xe7, 0xc0, 0x00, 0x07, 0xe9, 0x0f, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xe3, 0xe3, 0x0f, 0xff, 
    0xff, 0xc8, 0x00, 0x00, 0x03, 0x6f, 0x0f, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xe3, 0x0f, 0xff, 
    0xff, 0x9b, 0x80, 0x00, 0x03, 0x5f, 0x13, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xe3, 0xc1, 0x8f, 0xff, 
    0xff, 0x7b, 0xc0, 0x00, 0x00, 0x1e, 0x17, 0xff, 0x7f, 0xff, 0xff, 0xf0, 0xe3, 0x00, 0xff, 0xff, 
    0xfe, 0xfb, 0xe0, 0x00, 0x00, 0x00, 0x17, 0xff, 0x7f, 0xff, 0xff, 0xe0, 0x32, 0x18, 0x67, 0xff, 
    0xfc, 0xfb, 0xf0, 0x00, 0x00, 0x00, 0x33, 0xfc, 0xff, 0xff, 0xff, 0xc7, 0x10, 0x7c, 0x47, 0xff, 
    0xf9, 0xfb, 0x78, 0x2e, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xe7, 0x8f, 0x98, 0xfe, 0x2f, 0xff, 
    0xfb, 0xf9, 0x78, 0x27, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xe3, 0x9f, 0x88, 0xff, 0x3f, 0xff, 
    0xf3, 0xfd, 0xb4, 0x77, 0x8f, 0x00, 0x00, 0x01, 0xff, 0xff, 0xe3, 0x9f, 0x04, 0x7f, 0xff, 0xff, 
    0xf0, 0x05, 0xc8, 0x5f, 0xcf, 0xc0, 0x00, 0x00, 0xff, 0xff, 0xf1, 0x9c, 0x06, 0x3f, 0xff, 0xff, 
    0xe0, 0x02, 0xc8, 0xdf, 0xcf, 0xe0, 0x00, 0x00, 0xff, 0xff, 0xf1, 0x98, 0x62, 0x3f, 0xff, 0xff, 
    0xe0, 0x00, 0xe8, 0x1f, 0xed, 0xe0, 0x00, 0x00, 0xff, 0xc7, 0xf8, 0x81, 0xf3, 0xff, 0xff, 0xff, 
    0xc0, 0x01, 0x70, 0x1e, 0x65, 0x9c, 0x5c, 0x00, 0xff, 0xc7, 0xf8, 0xc3, 0xff, 0xff, 0xff, 0xff, 
    0xc0, 0x01, 0x50, 0x36, 0x73, 0x33, 0xcc, 0x00, 0xff, 0xc7, 0xcc, 0x47, 0xff, 0xff, 0xff, 0xff, 
    0xc0, 0x00, 0xf0, 0x7d, 0xc2, 0x7b, 0xec, 0x00, 0xff, 0xc7, 0x84, 0x67, 0xff, 0xff, 0xff, 0xff, 
    0xc0, 0x00, 0xf0, 0xfb, 0xd8, 0x27, 0xac, 0x00, 0xff, 0xc3, 0x80, 0x67, 0xff, 0xff, 0xff, 0xff, 
    0x80, 0x00, 0x7a, 0x1f, 0xd7, 0x57, 0xec, 0x01, 0xff, 0xe3, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 
    0x80, 0x00, 0x76, 0x6f, 0xbb, 0xa7, 0xe4, 0x01, 0xff, 0xe1, 0x18, 0x7f, 0xff, 0xff, 0xff, 0xff, 
    0x80, 0x00, 0x36, 0x37, 0x7f, 0x97, 0x64, 0x01, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0x80, 0x00, 0x0e, 0x37, 0x7f, 0xc7, 0xf6, 0x01, 0xff, 0xf8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xb8, 0x00, 0x0c, 0x00, 0x3f, 0xfe, 0xf6, 0x01, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xb0, 0x00, 0x08, 0x00, 0x07, 0xfc, 0xf6, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xa0, 0x00, 0x18, 0x3f, 0x7b, 0xe0, 0x06, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xa0, 0x00, 0x18, 0x07, 0x8b, 0xe0, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0x80, 0x00, 0x16, 0x03, 0xf1, 0xe0, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0x80, 0x00, 0x17, 0x00, 0xfd, 0xc0, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xc0, 0x00, 0x17, 0xe0, 0x18, 0xc0, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xc0, 0x00, 0x1b, 0xf8, 0x00, 0xc0, 0x00, 0x03, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xc0, 0x00, 0x1c, 0x7c, 0x00, 0x00, 0x00, 0x03, 0xec, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xc0, 0x80, 0x0f, 0x87, 0x00, 0x00, 0x00, 0x07, 0xed, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xe0, 0xc0, 0x07, 0xf8, 0xe0, 0x00, 0x01, 0x8f, 0xed, 0x87, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xe1, 0xc0, 0x01, 0xff, 0x20, 0x1f, 0x9f, 0xff, 0xed, 0xb6, 0x3d, 0xdf, 0xff, 0xff, 0xff, 0xff, 
    0xf3, 0xc0, 0x01, 0xff, 0xcf, 0xff, 0xbf, 0xff, 0xed, 0xf6, 0xd5, 0xda, 0x61, 0xff, 0xff, 0xff, 
    0xf3, 0x80, 0x00, 0xf9, 0xe7, 0xff, 0x3f, 0xff, 0x85, 0xee, 0xd5, 0xd0, 0x5d, 0xef, 0xff, 0xff, 
    0xfb, 0x00, 0x00, 0xff, 0x8f, 0xff, 0x7f, 0xff, 0xff, 0xee, 0xd5, 0xad, 0x5d, 0x86, 0xef, 0xff, 
    0xf8, 0x00, 0x00, 0x7f, 0xbf, 0xfe, 0xff, 0xff, 0xff, 0xee, 0xc5, 0xab, 0x43, 0x35, 0xcf, 0xbf, 
    0xfc, 0x00, 0x00, 0x7f, 0xbf, 0xfc, 0xff, 0xff, 0xff, 0xfe, 0xec, 0x2b, 0x5d, 0x75, 0xdf, 0xbf, 
    0xfe, 0x00, 0x00, 0x3f, 0x9f, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x6f, 0x5d, 0x44, 0x1f, 0xbf, 
    0xff, 0x00, 0x00, 0xbf, 0x9f, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x41, 0x75, 0xdf, 0x3f, 
    0xff, 0x80, 0x01, 0xdf, 0x9f, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0x75, 0xdf, 0x7f, 
    0xff, 0xc0, 0x39, 0xdf, 0x9f, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0xde, 0x7f, 
    0xff, 0xe0, 0x1b, 0xef, 0xbf, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xde, 0xff, 
    0xff, 0xf0, 0x33, 0xf0, 0x3e, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 
    0xff, 0xfc, 0x27, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0x0f, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xe0, 0xfc, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xfc, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
    */
};

const unsigned char splashImageLegacy[] = {
    // 'canvas', 128x64px
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x9f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xdf, 0xec, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x03, 0xcc, 0xde, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x81, 0x98, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x3d, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x01, 0xbf, 0xd8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xdb, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc1, 0xbc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x7f, 0xf7, 0xff, 0x0f, 0xfc, 0x0f, 0x83, 0xc3, 0xc1, 0xf0, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xff, 0xf7, 0xff, 0x9f, 0xfe, 0x3f, 0xe3, 0xc3, 0xc7, 0xfc, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xff, 0xf7, 0xff, 0x9f, 0xfe, 0x7f, 0xf3, 0xc3, 0xcf, 0xfe, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xff, 0xf7, 0xff, 0xdf, 0xfe, 0x7f, 0xf3, 0xc3, 0xcf, 0xfe, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xf0, 0xf7, 0x87, 0xde, 0x1e, 0xf8, 0xf3, 0xc3, 0xcf, 0x1f, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xf0, 0xf7, 0x87, 0xde, 0x1e, 0xf8, 0xfb, 0xc3, 0xdf, 0x0f, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xf0, 0x07, 0x87, 0xde, 0x1e, 0xf0, 0x7b, 0xc3, 0xdf, 0x0f, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xf0, 0x07, 0x87, 0xc0, 0x3e, 0xf0, 0x7b, 0xc3, 0xdf, 0x0f, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xf3, 0xf7, 0xff, 0xc0, 0x7e, 0xf0, 0x7b, 0xff, 0xdf, 0x0f, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xf3, 0xf7, 0xff, 0x81, 0xfc, 0xf0, 0x7b, 0xff, 0xdf, 0x0f, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xf3, 0xf7, 0xff, 0x83, 0xf8, 0xf0, 0x7b, 0xff, 0xdf, 0x0f, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xf3, 0xf7, 0xff, 0x0f, 0xe0, 0xf0, 0x79, 0xff, 0xdf, 0x0f, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xf0, 0xf7, 0x80, 0x1f, 0xc0, 0xf0, 0x78, 0x03, 0xdf, 0x0f, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xf0, 0xf7, 0x80, 0x1f, 0x80, 0xf0, 0x78, 0x03, 0xdf, 0x0f, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xf0, 0xf7, 0x80, 0x1e, 0x1e, 0xf0, 0x78, 0x03, 0xdf, 0x0f, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xf0, 0xf7, 0x80, 0x1e, 0x1e, 0xf8, 0xf8, 0x03, 0xdf, 0x1f, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xf0, 0xf7, 0x80, 0x1f, 0xfe, 0x7f, 0xf0, 0x03, 0xcf, 0xfe, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xff, 0xf7, 0x80, 0x1f, 0xfe, 0x7f, 0xf0, 0x03, 0xcf, 0xfe, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xff, 0xf7, 0x80, 0x1f, 0xfe, 0x3f, 0xe0, 0x03, 0xc7, 0xfc, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x7f, 0xe7, 0x80, 0x1f, 0xfe, 0x1f, 0xc0, 0x03, 0xc3, 0xf8, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x3f, 0x87, 0x80, 0x1f, 0xfe, 0x0f, 0x80, 0x03, 0xc0, 0xf0, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};