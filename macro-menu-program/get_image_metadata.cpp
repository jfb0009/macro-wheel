#pragma once

#include "get_image_metadata.h"
//#include "macro_functions/exiv2-0.27.2-Source/include/exiv2/exiv2.hpp"

#include <string>
#include <iostream>
#include <iomanip>
#include <cassert>

//
//int get_metadata(int argc, char** argv)
//{
//    try
//    {
//        if (argc != 2)
//        {
//            std::cout << "Usage: " << argv[0] << " file\n";
//            return 1;
//        }
//
//        Exiv2::Image::AutoPtr image = Exiv2::ImageFactory::open(argv[1]);
//        assert(image.get() != 0);
//        image->readMetadata();
//
//        Exiv2::XmpData& xmpData = image->xmpData();
//        if (xmpData.empty()) {
//            std::string error(argv[1]);
//            error += ": No XMP data found in the file";
//            throw Exiv2::Error(Exiv2::kerErrorMessage, error);
//        }
//        if (xmpData.empty())
//        {
//            std::string error(argv[1]);
//            error += ": No XMP properties found in the XMP packet";
//            throw Exiv2::Error(Exiv2::kerErrorMessage, error);
//        }
//
//        for (Exiv2::XmpData::const_iterator md = xmpData.begin();
//            md != xmpData.end(); ++md)
//        {
//            std::cout << std::setfill(' ') << std::left
//                << std::setw(44)
//                << md->key() << " "
//                << std::setw(9) << std::setfill(' ') << std::left
//                << md->typeName() << " "
//                << std::dec << std::setw(3)
//                << std::setfill(' ') << std::right
//                << md->count() << "  "
//                << std::dec << md->value()
//                << std::endl;
//        }
//
//        Exiv2::XmpParser::terminate();
//
//        return 0;
//    }
//    catch (Exiv2::AnyError& e)
//    {
//        std::cout << "Caught Exiv2 exception '" << e << "'\n";
//        return -1;
//    }
//}
