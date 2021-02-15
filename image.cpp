#include <iostream>
#include <boost/gil/extension/io/jpeg_io.cpp>
namespace gil = boost::gil;
int main()
{
  gil::rgb8_image_t img;
  gil::jpeg_read_image("wafer_image_1.png", img);
  std::cout << "Read complete, got an image " << img.width()
            << " by " << img.height() << " pixels\n";
  gil::rgb8_pixel_t px = *const_view(img).at(5, 10);
  std::cout << "The pixel at 5,10 is "
            << (int)px[0] << ','
            << (int)px[1] << ',' << (int)px[2] << '\n';
  return 0;
}
