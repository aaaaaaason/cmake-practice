#ifndef CMAKE_PRACTICE_SRC_MAIN_HPP
#define CMAKE_PRACTICE_SRC_MAIN_HPP

#include "Poco/MD5Engine.h"
#include "Poco/DigestStream.h"

std::string hexDigest()
{
    Poco::MD5Engine md5;
    Poco::DigestOutputStream ds(md5);
    ds << "abcdefghijklmnopqrstuvwxyz";
    ds.close();
    return Poco::DigestEngine::digestToHex(md5.digest());
}

#endif