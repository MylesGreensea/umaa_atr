// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file Engineering_Coordinate_Axes.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_ENGINEERING_COORDINATE_AXES_H_
#define _FAST_DDS_GENERATED_ENGINEERING_COORDINATE_AXES_H_

#include "/home/mramey/umaa_atr/BasicTypes/Quaternion.h"

#include <fastrtps/utils/fixed_size_string.hpp>

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(Engineering_Coordinate_Axes_SOURCE)
#define Engineering_Coordinate_Axes_DllAPI __declspec( dllexport )
#else
#define Engineering_Coordinate_Axes_DllAPI __declspec( dllimport )
#endif // Engineering_Coordinate_Axes_SOURCE
#else
#define Engineering_Coordinate_Axes_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define Engineering_Coordinate_Axes_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace UMAA {
    namespace Common {
        namespace MeasurementCoordinate {
            typedef double DateTime;
            typedef double Down;
            typedef double DownSpeed;
            typedef double EastSpeed;
            typedef double Forward;
            typedef double ForwardSpeed;
            typedef double NorthSpeed;
            typedef double RadarHeight;
            typedef double Right;
            typedef double RightSpeed;
        } // namespace MeasurementCoordinate
    } // namespace Common
} // namespace UMAA

#endif // _FAST_DDS_GENERATED_ENGINEERING_COORDINATE_AXES_H_