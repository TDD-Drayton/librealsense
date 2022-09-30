// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2022 Intel Corporation. All Rights Reserved.

/*!
 * @file controlTypeObject.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include <realdds/topics/control/control.h>
#include "controlTypeObject.h"
#include <utility>
#include <sstream>
#include <fastrtps/rtps/common/SerializedPayload.h>
#include <fastrtps/utils/md5.h>
#include <fastrtps/types/TypeObjectFactory.h>
#include <fastrtps/types/TypeNamesGenerator.h>
#include <fastrtps/types/AnnotationParameterValue.h>
#include <fastcdr/FastBuffer.h>
#include <fastcdr/Cdr.h>

using namespace eprosima::fastrtps::rtps;

void registercontrolTypes()
{
    TypeObjectFactory *factory = TypeObjectFactory::get_instance();
    factory->add_type_object("librealsense::dds::topics::raw::device::control", librealsense::dds::topics::raw::device::GetcontrolIdentifier(true),
            librealsense::dds::topics::raw::device::GetcontrolObject(true));
    factory->add_type_object("librealsense::dds::topics::raw::device::control", librealsense::dds::topics::raw::device::GetcontrolIdentifier(false),
            librealsense::dds::topics::raw::device::GetcontrolObject(false));






}

namespace librealsense {
    namespace dds {
        namespace topics {
            namespace raw {
                namespace device {
                    const TypeIdentifier* GetcontrolIdentifier(bool complete)
                    {
                        const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("control", complete);
                        if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
                        {
                            return c_identifier;
                        }

                        GetcontrolObject(complete); // Generated inside
                        return TypeObjectFactory::get_instance()->get_type_identifier("control", complete);
                    }

                    const TypeObject* GetcontrolObject(bool complete)
                    {
                        const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("control", complete);
                        if (c_type_object != nullptr)
                        {
                            return c_type_object;
                        }
                        else if (complete)
                        {
                            return GetCompletecontrolObject();
                        }
                        //else
                        return GetMinimalcontrolObject();
                    }

                    const TypeObject* GetMinimalcontrolObject()
                    {
                        const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("control", false);
                        if (c_type_object != nullptr)
                        {
                            return c_type_object;
                        }

                        TypeObject *type_object = new TypeObject();
                        type_object->_d(EK_MINIMAL);
                        type_object->minimal()._d(TK_STRUCTURE);

                        type_object->minimal().struct_type().struct_flags().IS_FINAL(false);
                        type_object->minimal().struct_type().struct_flags().IS_APPENDABLE(false);
                        type_object->minimal().struct_type().struct_flags().IS_MUTABLE(false);
                        type_object->minimal().struct_type().struct_flags().IS_NESTED(false);
                        type_object->minimal().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

                        MemberId memberId = 0;
                        MinimalStructMember mst_id;
                        mst_id.common().member_id(memberId++);
                        mst_id.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
                        mst_id.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
                        mst_id.common().member_flags().IS_EXTERNAL(false); // Unsupported
                        mst_id.common().member_flags().IS_OPTIONAL(false);
                        mst_id.common().member_flags().IS_MUST_UNDERSTAND(false);
                        mst_id.common().member_flags().IS_KEY(false);
                        mst_id.common().member_flags().IS_DEFAULT(false); // Doesn't apply
                        mst_id.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint16_t", false));

                        MD5 id_hash("id");
                        for(int i = 0; i < 4; ++i)
                        {
                            mst_id.detail().name_hash()[i] = id_hash.digest[i];
                        }
                        type_object->minimal().struct_type().member_seq().emplace_back(mst_id);

                        MinimalStructMember mst_size;
                        mst_size.common().member_id(memberId++);
                        mst_size.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
                        mst_size.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
                        mst_size.common().member_flags().IS_EXTERNAL(false); // Unsupported
                        mst_size.common().member_flags().IS_OPTIONAL(false);
                        mst_size.common().member_flags().IS_MUST_UNDERSTAND(false);
                        mst_size.common().member_flags().IS_KEY(false);
                        mst_size.common().member_flags().IS_DEFAULT(false); // Doesn't apply
                        mst_size.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint32_t", false));

                        MD5 size_hash("size");
                        for(int i = 0; i < 4; ++i)
                        {
                            mst_size.detail().name_hash()[i] = size_hash.digest[i];
                        }
                        type_object->minimal().struct_type().member_seq().emplace_back(mst_size);

                        MinimalStructMember mst_data;
                        mst_data.common().member_id(memberId++);
                        mst_data.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
                        mst_data.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
                        mst_data.common().member_flags().IS_EXTERNAL(false); // Unsupported
                        mst_data.common().member_flags().IS_OPTIONAL(false);
                        mst_data.common().member_flags().IS_MUST_UNDERSTAND(false);
                        mst_data.common().member_flags().IS_KEY(false);
                        mst_data.common().member_flags().IS_DEFAULT(false); // Doesn't apply
                        mst_data.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint8_t", 0, false));


                        MD5 data_hash("data");
                        for(int i = 0; i < 4; ++i)
                        {
                            mst_data.detail().name_hash()[i] = data_hash.digest[i];
                        }
                        type_object->minimal().struct_type().member_seq().emplace_back(mst_data);


                        // Header
                        // TODO Inheritance
                        //type_object->minimal().struct_type().header().base_type()._d(EK_MINIMAL);
                        //type_object->minimal().struct_type().header().base_type().equivalence_hash()[0..13];

                        TypeIdentifier identifier;
                        identifier._d(EK_MINIMAL);

                        SerializedPayload_t payload(static_cast<uint32_t>(
                            MinimalStructType::getCdrSerializedSize(type_object->minimal().struct_type()) + 4));
                        eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
                        // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
                        eprosima::fastcdr::Cdr ser(
                            fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
                            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
                        payload.encapsulation = CDR_LE;

                        type_object->serialize(ser);
                        payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
                        MD5 objectHash;
                        objectHash.update((char*)payload.data, payload.length);
                        objectHash.finalize();
                        for(int i = 0; i < 14; ++i)
                        {
                            identifier.equivalence_hash()[i] = objectHash.digest[i];
                        }

                        TypeObjectFactory::get_instance()->add_type_object("control", &identifier, type_object);
                        delete type_object;
                        return TypeObjectFactory::get_instance()->get_type_object("control", false);
                    }

                    const TypeObject* GetCompletecontrolObject()
                    {
                        const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("control", true);
                        if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
                        {
                            return c_type_object;
                        }

                        TypeObject *type_object = new TypeObject();
                        type_object->_d(EK_COMPLETE);
                        type_object->complete()._d(TK_STRUCTURE);

                        type_object->complete().struct_type().struct_flags().IS_FINAL(false);
                        type_object->complete().struct_type().struct_flags().IS_APPENDABLE(false);
                        type_object->complete().struct_type().struct_flags().IS_MUTABLE(false);
                        type_object->complete().struct_type().struct_flags().IS_NESTED(false);
                        type_object->complete().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

                        MemberId memberId = 0;
                        CompleteStructMember cst_id;
                        cst_id.common().member_id(memberId++);
                        cst_id.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
                        cst_id.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
                        cst_id.common().member_flags().IS_EXTERNAL(false); // Unsupported
                        cst_id.common().member_flags().IS_OPTIONAL(false);
                        cst_id.common().member_flags().IS_MUST_UNDERSTAND(false);
                        cst_id.common().member_flags().IS_KEY(false);
                        cst_id.common().member_flags().IS_DEFAULT(false); // Doesn't apply
                        cst_id.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint16_t", false));

                        cst_id.detail().name("id");

                        type_object->complete().struct_type().member_seq().emplace_back(cst_id);

                        CompleteStructMember cst_size;
                        cst_size.common().member_id(memberId++);
                        cst_size.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
                        cst_size.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
                        cst_size.common().member_flags().IS_EXTERNAL(false); // Unsupported
                        cst_size.common().member_flags().IS_OPTIONAL(false);
                        cst_size.common().member_flags().IS_MUST_UNDERSTAND(false);
                        cst_size.common().member_flags().IS_KEY(false);
                        cst_size.common().member_flags().IS_DEFAULT(false); // Doesn't apply
                        cst_size.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint32_t", false));

                        cst_size.detail().name("size");

                        type_object->complete().struct_type().member_seq().emplace_back(cst_size);

                        CompleteStructMember cst_data;
                        cst_data.common().member_id(memberId++);
                        cst_data.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
                        cst_data.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
                        cst_data.common().member_flags().IS_EXTERNAL(false); // Unsupported
                        cst_data.common().member_flags().IS_OPTIONAL(false);
                        cst_data.common().member_flags().IS_MUST_UNDERSTAND(false);
                        cst_data.common().member_flags().IS_KEY(false);
                        cst_data.common().member_flags().IS_DEFAULT(false); // Doesn't apply
                        cst_data.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint8_t", 0, true));


                        cst_data.detail().name("data");

                        type_object->complete().struct_type().member_seq().emplace_back(cst_data);


                        // Header
                        type_object->complete().struct_type().header().detail().type_name("control");
                        // TODO inheritance


                        TypeIdentifier identifier;
                        identifier._d(EK_COMPLETE);

                        SerializedPayload_t payload(static_cast<uint32_t>(
                            CompleteStructType::getCdrSerializedSize(type_object->complete().struct_type()) + 4));
                        eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
                        // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
                        eprosima::fastcdr::Cdr ser(
                            fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
                            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
                        payload.encapsulation = CDR_LE;

                        type_object->serialize(ser);
                        payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
                        MD5 objectHash;
                        objectHash.update((char*)payload.data, payload.length);
                        objectHash.finalize();
                        for(int i = 0; i < 14; ++i)
                        {
                            identifier.equivalence_hash()[i] = objectHash.digest[i];
                        }

                        TypeObjectFactory::get_instance()->add_type_object("control", &identifier, type_object);
                        delete type_object;
                        return TypeObjectFactory::get_instance()->get_type_object("control", true);
                    }

                } // namespace device
            } // namespace raw
        } // namespace topics
    } // namespace dds
} // namespace librealsense