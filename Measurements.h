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
 * @file Measurements.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_UMAA_COMMON_MEASUREMENT_MEASUREMENTS_H_
#define _FAST_DDS_GENERATED_UMAA_COMMON_MEASUREMENT_MEASUREMENTS_H_

#include "/home/mramey/umaa_atr/BasicTypes/Quaternion.h"
#include "/home/mramey/umaa_atr/UMAA/Common/MeasurementCoordinate/Engineering_Coordinate_Axes.h"
#include "/home/mramey/umaa_atr/UMAA/Common/MeasurementCoordinate/Geographic_Coordinate_Axes.h"

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
#if defined(Measurements_SOURCE)
#define Measurements_DllAPI __declspec( dllexport )
#else
#define Measurements_DllAPI __declspec( dllimport )
#endif // Measurements_SOURCE
#else
#define Measurements_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define Measurements_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace UMAA {
    namespace Common {
        namespace Measurement {
            typedef double AngleAcceleration;
            typedef double AnglePosition;
            typedef double Charge;
            typedef double Conductivity;
            typedef double DataTransferRate;
            typedef double Distance_ASF;
            typedef double Distance_BSL;
            typedef double Effort;
            typedef double Energy_Percent;
            typedef double FrameRateFPS;
            typedef double FrequencyRPM;
            typedef double Heading_CurrentDirection;
            typedef double Heading_MagneticNorth;
            typedef double Heading_WindDirection;
            typedef double Mass_MetricTon;
            typedef double MassFlowRate;
            typedef BasicTypes::Quaternion OrientationQuaternion;
            typedef double PositiveCount;
            typedef double Power_Percent;
            typedef double Pressure_Percent;
            typedef double Salinity;
            typedef int32_t SidesCount;
            typedef double Speed_BSL;
            typedef double Speed_LocalWaterMass;
            typedef double Volume_CubicMeter;
            typedef double Volume_Percent;
            typedef double VolumetricFlowRate;
        } // namespace Measurement
    } // namespace Common
} // namespace UMAA
namespace UMAA {
    namespace Common {
        namespace Measurement {
            typedef double AccelerationScalar;
            typedef double Angle;
            typedef double AngleRate;
            typedef double Azimuth_TrueNorth_PosAngle;
            typedef double BarometricPressure;
            typedef int32_t CommsRate_BitsPerSecond;
            typedef double CommsRate_MegabitsPerSecond;
            typedef double ContinuousSize;
            typedef int32_t Count;
            typedef double Course_TrueNorth;
            typedef double CovarOrientation;
            typedef double CovarPosPos;
            typedef double CovarPosVel;
            typedef double CovarVelVel;
            typedef int64_t DateTimeSeconds;
            typedef int32_t DateTimeNanoseconds;
            /*!
             * @brief This class represents the structure DateTime defined by the user in the IDL file.
             * @ingroup MEASUREMENTS
             */
            class DateTime
            {
            public:

                /*!
                 * @brief Default constructor.
                 */
                eProsima_user_DllExport DateTime();

                /*!
                 * @brief Default destructor.
                 */
                eProsima_user_DllExport ~DateTime();

                /*!
                 * @brief Copy constructor.
                 * @param x Reference to the object UMAA::Common::Measurement::DateTime that will be copied.
                 */
                eProsima_user_DllExport DateTime(
                        const DateTime& x);

                /*!
                 * @brief Move constructor.
                 * @param x Reference to the object UMAA::Common::Measurement::DateTime that will be copied.
                 */
                eProsima_user_DllExport DateTime(
                        DateTime&& x);

                /*!
                 * @brief Copy assignment.
                 * @param x Reference to the object UMAA::Common::Measurement::DateTime that will be copied.
                 */
                eProsima_user_DllExport DateTime& operator =(
                        const DateTime& x);

                /*!
                 * @brief Move assignment.
                 * @param x Reference to the object UMAA::Common::Measurement::DateTime that will be copied.
                 */
                eProsima_user_DllExport DateTime& operator =(
                        DateTime&& x);

                /*!
                 * @brief Comparison operator.
                 * @param x UMAA::Common::Measurement::DateTime object to compare.
                 */
                eProsima_user_DllExport bool operator ==(
                        const DateTime& x) const;

                /*!
                 * @brief Comparison operator.
                 * @param x UMAA::Common::Measurement::DateTime object to compare.
                 */
                eProsima_user_DllExport bool operator !=(
                        const DateTime& x) const;

                /*!
                 * @brief This function sets a value in member seconds
                 * @param _seconds New value for member seconds
                 */
                eProsima_user_DllExport void seconds(
                        UMAA::Common::Measurement::DateTimeSeconds _seconds);

                /*!
                 * @brief This function returns the value of member seconds
                 * @return Value of member seconds
                 */
                eProsima_user_DllExport UMAA::Common::Measurement::DateTimeSeconds seconds() const;

                /*!
                 * @brief This function returns a reference to member seconds
                 * @return Reference to member seconds
                 */
                eProsima_user_DllExport UMAA::Common::Measurement::DateTimeSeconds& seconds();

                /*!
                 * @brief This function sets a value in member nanoseconds
                 * @param _nanoseconds New value for member nanoseconds
                 */
                eProsima_user_DllExport void nanoseconds(
                        UMAA::Common::Measurement::DateTimeNanoseconds _nanoseconds);

                /*!
                 * @brief This function returns the value of member nanoseconds
                 * @return Value of member nanoseconds
                 */
                eProsima_user_DllExport UMAA::Common::Measurement::DateTimeNanoseconds nanoseconds() const;

                /*!
                 * @brief This function returns a reference to member nanoseconds
                 * @return Reference to member nanoseconds
                 */
                eProsima_user_DllExport UMAA::Common::Measurement::DateTimeNanoseconds& nanoseconds();


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
                        const UMAA::Common::Measurement::DateTime& data,
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

                UMAA::Common::Measurement::DateTimeSeconds m_seconds;
                UMAA::Common::Measurement::DateTimeNanoseconds m_nanoseconds;
            };
            typedef double Density;
            typedef double Distance;
            typedef double Distance_Precise;
            typedef double Duration_Hours;
            typedef double Duration_Seconds;
            typedef double ElectricalPower;
            typedef double EngineSpeed;
            typedef double FieldOfView_LineOfSightFocalPlane;
            typedef double FocusValue;
            typedef double Force;
            typedef double Frequency_Hertz;
            typedef double GroundSpeed;
            typedef double Heading_TrueNorth_Angle;
            typedef double IndicatedAirspeed;
            typedef int32_t IPPort_Counting;
            typedef double MagneticVariation;
            typedef double Mass;
            typedef std::array<uint8_t, 16> NumericGUID;
            typedef int32_t Order;
            typedef double Percent;
            typedef double Pitch_HalfAngle;
            typedef double PitchAcceleration;
            typedef double PitchRate;
            typedef double PowerBusCurrent;
            typedef double PowerBusVoltage;
            typedef double Pressure_KiloPascals;
            typedef double RadioFrequency_Hertz;
            typedef double RelativeAngle;
            typedef double RelativeHumidity;
            typedef double Roll_Angle;
            typedef double RollAcceleration;
            typedef double RollRate;
            typedef double Size_Numeral;
            typedef double Speed;
            typedef double Temperature;
            typedef double TurnRate;
            typedef double Yaw_PosAngle;
            typedef double YawAcceleration;
            typedef double YawRate;
        } // namespace Measurement
    } // namespace Common
} // namespace UMAA

#endif // _FAST_DDS_GENERATED_UMAA_COMMON_MEASUREMENT_MEASUREMENTS_H_