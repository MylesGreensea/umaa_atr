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
 * @file ContactVisualClassificationStatusReportType.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_UMAA_SA_CONTACTVISUALCLASSIFICATIONSTATUS_CONTACTVISUALCLASSIFICATIONSTATUSREPORTTYPE_H_
#define _FAST_DDS_GENERATED_UMAA_SA_CONTACTVISUALCLASSIFICATIONSTATUS_CONTACTVISUALCLASSIFICATIONSTATUSREPORTTYPE_H_

#include "/home/mramey/umaa_atr/UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "/home/mramey/umaa_atr/UMAA/Common/Measurement/Measurements.h"

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
#if defined(ContactVisualClassificationStatusReportType_SOURCE)
#define ContactVisualClassificationStatusReportType_DllAPI __declspec( dllexport )
#else
#define ContactVisualClassificationStatusReportType_DllAPI __declspec( dllimport )
#endif // ContactVisualClassificationStatusReportType_SOURCE
#else
#define ContactVisualClassificationStatusReportType_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define ContactVisualClassificationStatusReportType_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace UMAA {
    namespace SA {
        namespace ContactVisualClassificationStatus {
            const std::string ContactVisualClassificationStatusReport_TOPIC = "UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationStatusReport";
            /*!
             * @brief This class represents the structure ContactVisualClassificationStatusReportType defined by the user in the IDL file.
             * @ingroup CONTACTVISUALCLASSIFICATIONSTATUSREPORTTYPE
             */
            class ContactVisualClassificationStatusReportType
            {
            public:

                /*!
                 * @brief Default constructor.
                 */
                eProsima_user_DllExport ContactVisualClassificationStatusReportType();

                /*!
                 * @brief Default destructor.
                 */
                eProsima_user_DllExport ~ContactVisualClassificationStatusReportType();

                /*!
                 * @brief Copy constructor.
                 * @param x Reference to the object UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationStatusReportType that will be copied.
                 */
                eProsima_user_DllExport ContactVisualClassificationStatusReportType(
                        const ContactVisualClassificationStatusReportType& x);

                /*!
                 * @brief Move constructor.
                 * @param x Reference to the object UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationStatusReportType that will be copied.
                 */
                eProsima_user_DllExport ContactVisualClassificationStatusReportType(
                        ContactVisualClassificationStatusReportType&& x);

                /*!
                 * @brief Copy assignment.
                 * @param x Reference to the object UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationStatusReportType that will be copied.
                 */
                eProsima_user_DllExport ContactVisualClassificationStatusReportType& operator =(
                        const ContactVisualClassificationStatusReportType& x);

                /*!
                 * @brief Move assignment.
                 * @param x Reference to the object UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationStatusReportType that will be copied.
                 */
                eProsima_user_DllExport ContactVisualClassificationStatusReportType& operator =(
                        ContactVisualClassificationStatusReportType&& x);

                /*!
                 * @brief Comparison operator.
                 * @param x UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationStatusReportType object to compare.
                 */
                eProsima_user_DllExport bool operator ==(
                        const ContactVisualClassificationStatusReportType& x) const;

                /*!
                 * @brief Comparison operator.
                 * @param x UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationStatusReportType object to compare.
                 */
                eProsima_user_DllExport bool operator !=(
                        const ContactVisualClassificationStatusReportType& x) const;

                /*!
                 * @brief This function sets a value in member confidence
                 * @param _confidence New value for member confidence
                 */
                eProsima_user_DllExport void confidence(
                        UMAA::Common::Measurement::Percent _confidence);

                /*!
                 * @brief This function returns the value of member confidence
                 * @return Value of member confidence
                 */
                eProsima_user_DllExport UMAA::Common::Measurement::Percent confidence() const;

                /*!
                 * @brief This function returns a reference to member confidence
                 * @return Reference to member confidence
                 */
                eProsima_user_DllExport UMAA::Common::Measurement::Percent& confidence();

                /*!
                 * @brief This function copies the value in member source
                 * @param _source New value to be copied in member source
                 */
                eProsima_user_DllExport void source(
                        const UMAA::Common::Measurement::NumericGUID& _source);

                /*!
                 * @brief This function moves the value in member source
                 * @param _source New value to be moved in member source
                 */
                eProsima_user_DllExport void source(
                        UMAA::Common::Measurement::NumericGUID&& _source);

                /*!
                 * @brief This function returns a constant reference to member source
                 * @return Constant reference to member source
                 */
                eProsima_user_DllExport const UMAA::Common::Measurement::NumericGUID& source() const;

                /*!
                 * @brief This function returns a reference to member source
                 * @return Reference to member source
                 */
                eProsima_user_DllExport UMAA::Common::Measurement::NumericGUID& source();
                /*!
                 * @brief This function copies the value in member timeStamp
                 * @param _timeStamp New value to be copied in member timeStamp
                 */
                eProsima_user_DllExport void timeStamp(
                        const UMAA::Common::Measurement::DateTime& _timeStamp);

                /*!
                 * @brief This function moves the value in member timeStamp
                 * @param _timeStamp New value to be moved in member timeStamp
                 */
                eProsima_user_DllExport void timeStamp(
                        UMAA::Common::Measurement::DateTime&& _timeStamp);

                /*!
                 * @brief This function returns a constant reference to member timeStamp
                 * @return Constant reference to member timeStamp
                 */
                eProsima_user_DllExport const UMAA::Common::Measurement::DateTime& timeStamp() const;

                /*!
                 * @brief This function returns a reference to member timeStamp
                 * @return Reference to member timeStamp
                 */
                eProsima_user_DllExport UMAA::Common::Measurement::DateTime& timeStamp();
                /*!
                 * @brief This function copies the value in member contactID
                 * @param _contactID New value to be copied in member contactID
                 */
                eProsima_user_DllExport void contactID(
                        const UMAA::Common::Measurement::NumericGUID& _contactID);

                /*!
                 * @brief This function moves the value in member contactID
                 * @param _contactID New value to be moved in member contactID
                 */
                eProsima_user_DllExport void contactID(
                        UMAA::Common::Measurement::NumericGUID&& _contactID);

                /*!
                 * @brief This function returns a constant reference to member contactID
                 * @return Constant reference to member contactID
                 */
                eProsima_user_DllExport const UMAA::Common::Measurement::NumericGUID& contactID() const;

                /*!
                 * @brief This function returns a reference to member contactID
                 * @return Reference to member contactID
                 */
                eProsima_user_DllExport UMAA::Common::Measurement::NumericGUID& contactID();
                /*!
                 * @brief This function sets a value in member visualClassification
                 * @param _visualClassification New value for member visualClassification
                 */
                eProsima_user_DllExport void visualClassification(
                        UMAA::Common::MaritimeEnumeration::VisualClassificationEnumType::VisualClassificationEnumType _visualClassification);

                /*!
                 * @brief This function returns the value of member visualClassification
                 * @return Value of member visualClassification
                 */
                eProsima_user_DllExport UMAA::Common::MaritimeEnumeration::VisualClassificationEnumType::VisualClassificationEnumType visualClassification() const;

                /*!
                 * @brief This function returns a reference to member visualClassification
                 * @return Reference to member visualClassification
                 */
                eProsima_user_DllExport UMAA::Common::MaritimeEnumeration::VisualClassificationEnumType::VisualClassificationEnumType& visualClassification();


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
                        const UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationStatusReportType& data,
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

                UMAA::Common::Measurement::Percent m_confidence;
                UMAA::Common::Measurement::NumericGUID m_source;
                UMAA::Common::Measurement::DateTime m_timeStamp;
                UMAA::Common::Measurement::NumericGUID m_contactID;
                UMAA::Common::MaritimeEnumeration::VisualClassificationEnumType::VisualClassificationEnumType m_visualClassification;
            };
        } // namespace ContactVisualClassificationStatus
    } // namespace SA
} // namespace UMAA

#endif // _FAST_DDS_GENERATED_UMAA_SA_CONTACTVISUALCLASSIFICATIONSTATUS_CONTACTVISUALCLASSIFICATIONSTATUSREPORTTYPE_H_