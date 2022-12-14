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
 * @file Quaternion.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_BASICTYPES_QUATERNION_H_
#define _FAST_DDS_GENERATED_BASICTYPES_QUATERNION_H_


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
#if defined(Quaternion_SOURCE)
#define Quaternion_DllAPI __declspec( dllexport )
#else
#define Quaternion_DllAPI __declspec( dllimport )
#endif // Quaternion_SOURCE
#else
#define Quaternion_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define Quaternion_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace BasicTypes {
    /*!
     * @brief This class represents the structure Quaternion defined by the user in the IDL file.
     * @ingroup QUATERNION
     */
    class Quaternion
    {
    public:

        /*!
         * @brief Default constructor.
         */
        eProsima_user_DllExport Quaternion();

        /*!
         * @brief Default destructor.
         */
        eProsima_user_DllExport ~Quaternion();

        /*!
         * @brief Copy constructor.
         * @param x Reference to the object BasicTypes::Quaternion that will be copied.
         */
        eProsima_user_DllExport Quaternion(
                const Quaternion& x);

        /*!
         * @brief Move constructor.
         * @param x Reference to the object BasicTypes::Quaternion that will be copied.
         */
        eProsima_user_DllExport Quaternion(
                Quaternion&& x);

        /*!
         * @brief Copy assignment.
         * @param x Reference to the object BasicTypes::Quaternion that will be copied.
         */
        eProsima_user_DllExport Quaternion& operator =(
                const Quaternion& x);

        /*!
         * @brief Move assignment.
         * @param x Reference to the object BasicTypes::Quaternion that will be copied.
         */
        eProsima_user_DllExport Quaternion& operator =(
                Quaternion&& x);

        /*!
         * @brief Comparison operator.
         * @param x BasicTypes::Quaternion object to compare.
         */
        eProsima_user_DllExport bool operator ==(
                const Quaternion& x) const;

        /*!
         * @brief Comparison operator.
         * @param x BasicTypes::Quaternion object to compare.
         */
        eProsima_user_DllExport bool operator !=(
                const Quaternion& x) const;

        /*!
         * @brief This function sets a value in member a
         * @param _a New value for member a
         */
        eProsima_user_DllExport void a(
                double _a);

        /*!
         * @brief This function returns the value of member a
         * @return Value of member a
         */
        eProsima_user_DllExport double a() const;

        /*!
         * @brief This function returns a reference to member a
         * @return Reference to member a
         */
        eProsima_user_DllExport double& a();

        /*!
         * @brief This function sets a value in member b
         * @param _b New value for member b
         */
        eProsima_user_DllExport void b(
                double _b);

        /*!
         * @brief This function returns the value of member b
         * @return Value of member b
         */
        eProsima_user_DllExport double b() const;

        /*!
         * @brief This function returns a reference to member b
         * @return Reference to member b
         */
        eProsima_user_DllExport double& b();

        /*!
         * @brief This function sets a value in member c
         * @param _c New value for member c
         */
        eProsima_user_DllExport void c(
                double _c);

        /*!
         * @brief This function returns the value of member c
         * @return Value of member c
         */
        eProsima_user_DllExport double c() const;

        /*!
         * @brief This function returns a reference to member c
         * @return Reference to member c
         */
        eProsima_user_DllExport double& c();

        /*!
         * @brief This function sets a value in member d
         * @param _d New value for member d
         */
        eProsima_user_DllExport void d(
                double _d);

        /*!
         * @brief This function returns the value of member d
         * @return Value of member d
         */
        eProsima_user_DllExport double d() const;

        /*!
         * @brief This function returns a reference to member d
         * @return Reference to member d
         */
        eProsima_user_DllExport double& d();


        /*!
         * @brief This function returns the maximum serialized size of an object
         * depending on the buffer alignment.
         * @param current_alignment Buffer alignment.
         * @return Maximum serialized size.
         */
        eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                size_t current_alignment = 0);

        /*!
         * @brief This function returns the serialized size of a data depending on the buffer alignment.
         * @param data Data which is calculated its serialized size.
         * @param current_alignment Buffer alignment.
         * @return Serialized size.
         */
        eProsima_user_DllExport static size_t getCdrSerializedSize(
                const BasicTypes::Quaternion& data,
                size_t current_alignment = 0);


        /*!
         * @brief This function serializes an object using CDR serialization.
         * @param cdr CDR serialization object.
         */
        eProsima_user_DllExport void serialize(
                eprosima::fastcdr::Cdr& cdr) const;

        /*!
         * @brief This function deserializes an object using CDR serialization.
         * @param cdr CDR serialization object.
         */
        eProsima_user_DllExport void deserialize(
                eprosima::fastcdr::Cdr& cdr);



        /*!
         * @brief This function returns the maximum serialized size of the Key of an object
         * depending on the buffer alignment.
         * @param current_alignment Buffer alignment.
         * @return Maximum serialized size.
         */
        eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                size_t current_alignment = 0);

        /*!
         * @brief This function tells you if the Key has been defined for this type
         */
        eProsima_user_DllExport static bool isKeyDefined();

        /*!
         * @brief This function serializes the key members of an object using CDR serialization.
         * @param cdr CDR serialization object.
         */
        eProsima_user_DllExport void serializeKey(
                eprosima::fastcdr::Cdr& cdr) const;

    private:

        double m_a;
        double m_b;
        double m_c;
        double m_d;
    };
} // namespace BasicTypes

#endif // _FAST_DDS_GENERATED_BASICTYPES_QUATERNION_H_