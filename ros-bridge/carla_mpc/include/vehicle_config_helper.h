#include <string>
#include <fstream>

#include <fcntl.h>
#include <glob.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "ros/ros.h"
#include "google/protobuf/text_format.h"
#include "google/protobuf/io/zero_copy_stream_impl.h"
#include "proto/vehicle_config.pb.h"

bool GetProtoFromTXTFile(const std::string &file_name,
    google::protobuf::Message *message)
{
    using google::protobuf::TextFormat;
    using google::protobuf::io::FileInputStream;
    using google::protobuf::io::ZeroCopyInputStream;
    int file_descriptor = open(file_name.c_str(),O_RDONLY);
    if(file_descriptor < 0)
    {
        ROS_INFO("Failed to open file.");
        return false;
    }

    ZeroCopyInputStream *input = new FileInputStream(file_descriptor);
    bool success = TextFormat::Parse(input, message);
    if(!success){
        ROS_INFO("Failed to parse file.");
    }
    delete input;
    close(file_descriptor);
    return success;

}