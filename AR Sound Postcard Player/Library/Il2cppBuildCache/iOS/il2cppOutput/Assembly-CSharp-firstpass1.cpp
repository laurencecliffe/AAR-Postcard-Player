#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.List`1<FMOD.StringHelper/ThreadSafeEncoding>
struct List_1_t3A62A49B80510BD0F357A67357AAE6EB5923D65A;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// FMOD.StringHelper/ThreadSafeEncoding[]
struct ThreadSafeEncodingU5BU5D_t214C0D63E77BF32A915683292CE39EBE90CB7BD7;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282;
// FMODUnity.VCANotFoundException
struct VCANotFoundException_t294A5E22A4AA5D9348C23644E2EB6B9DE651D0C9;
// FMOD.VERSION
struct VERSION_t06897B16D6420293FBA577CA967450D9A37DA2BE;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// FMODUnity.RuntimeManager/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_t08E47E58E1EA3593A96242D20DB3173180EDF555;
// FMODUnity.RuntimeManager/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_tC4C87941AAFB05F7243FA9D4016E9E79E3AF78A0;
// FMODUnity.RuntimeManager/AttachedInstance
struct AttachedInstance_t9819D0CB48BFFB66B6296680F5D20FEC4987931F;
// FMODUnity.RuntimeManager/GuidComparer
struct GuidComparer_t4598A5CCB84BF92C7B371CC251105EA67BB8E6F5;
// FMOD.StringHelper/ThreadSafeEncoding
struct ThreadSafeEncoding_tAED0160400BE1B02140DF95DD415C79C5D942C15;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringHelper_t26F6DE70D2323706FCA67A744AAB37F21B52FEE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E91B09D74330D84716D5CE30BB9B07E1C7A18FB;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<FMOD.StringHelper/ThreadSafeEncoding>
struct List_1_t3A62A49B80510BD0F357A67357AAE6EB5923D65A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ThreadSafeEncodingU5BU5D_t214C0D63E77BF32A915683292CE39EBE90CB7BD7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3A62A49B80510BD0F357A67357AAE6EB5923D65A, ____items_1)); }
	inline ThreadSafeEncodingU5BU5D_t214C0D63E77BF32A915683292CE39EBE90CB7BD7* get__items_1() const { return ____items_1; }
	inline ThreadSafeEncodingU5BU5D_t214C0D63E77BF32A915683292CE39EBE90CB7BD7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ThreadSafeEncodingU5BU5D_t214C0D63E77BF32A915683292CE39EBE90CB7BD7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3A62A49B80510BD0F357A67357AAE6EB5923D65A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3A62A49B80510BD0F357A67357AAE6EB5923D65A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3A62A49B80510BD0F357A67357AAE6EB5923D65A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3A62A49B80510BD0F357A67357AAE6EB5923D65A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ThreadSafeEncodingU5BU5D_t214C0D63E77BF32A915683292CE39EBE90CB7BD7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3A62A49B80510BD0F357A67357AAE6EB5923D65A_StaticFields, ____emptyArray_5)); }
	inline ThreadSafeEncodingU5BU5D_t214C0D63E77BF32A915683292CE39EBE90CB7BD7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ThreadSafeEncodingU5BU5D_t214C0D63E77BF32A915683292CE39EBE90CB7BD7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ThreadSafeEncodingU5BU5D_t214C0D63E77BF32A915683292CE39EBE90CB7BD7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// FMOD.StringHelper
struct StringHelper_t26F6DE70D2323706FCA67A744AAB37F21B52FEE2  : public RuntimeObject
{
public:

public:
};

struct StringHelper_t26F6DE70D2323706FCA67A744AAB37F21B52FEE2_StaticFields
{
public:
	// System.Collections.Generic.List`1<FMOD.StringHelper/ThreadSafeEncoding> FMOD.StringHelper::encoders
	List_1_t3A62A49B80510BD0F357A67357AAE6EB5923D65A * ___encoders_0;

public:
	inline static int32_t get_offset_of_encoders_0() { return static_cast<int32_t>(offsetof(StringHelper_t26F6DE70D2323706FCA67A744AAB37F21B52FEE2_StaticFields, ___encoders_0)); }
	inline List_1_t3A62A49B80510BD0F357A67357AAE6EB5923D65A * get_encoders_0() const { return ___encoders_0; }
	inline List_1_t3A62A49B80510BD0F357A67357AAE6EB5923D65A ** get_address_of_encoders_0() { return &___encoders_0; }
	inline void set_encoders_0(List_1_t3A62A49B80510BD0F357A67357AAE6EB5923D65A * value)
	{
		___encoders_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoders_0), (void*)value);
	}
};


// FMOD.VERSION
struct VERSION_t06897B16D6420293FBA577CA967450D9A37DA2BE  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// FMODUnity.RuntimeManager/GuidComparer
struct GuidComparer_t4598A5CCB84BF92C7B371CC251105EA67BB8E6F5  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitUTF8Identifier
	bool ___emitUTF8Identifier_16;
	// System.Boolean System.Text.UTF8Encoding::isThrowException
	bool ___isThrowException_17;

public:
	inline static int32_t get_offset_of_emitUTF8Identifier_16() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___emitUTF8Identifier_16)); }
	inline bool get_emitUTF8Identifier_16() const { return ___emitUTF8Identifier_16; }
	inline bool* get_address_of_emitUTF8Identifier_16() { return &___emitUTF8Identifier_16; }
	inline void set_emitUTF8Identifier_16(bool value)
	{
		___emitUTF8Identifier_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
	}
};


// FMOD.VECTOR
struct VECTOR_t8C7872B931C3EB28E0D26158CD5ED00E0AB73757 
{
public:
	// System.Single FMOD.VECTOR::x
	float ___x_0;
	// System.Single FMOD.VECTOR::y
	float ___y_1;
	// System.Single FMOD.VECTOR::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(VECTOR_t8C7872B931C3EB28E0D26158CD5ED00E0AB73757, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(VECTOR_t8C7872B931C3EB28E0D26158CD5ED00E0AB73757, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(VECTOR_t8C7872B931C3EB28E0D26158CD5ED00E0AB73757, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// FMOD.Studio.Bank
struct Bank_t03BBE00D2E7327EE715E13AFAB6827BC91612659 
{
public:
	// System.IntPtr FMOD.Studio.Bank::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(Bank_t03BBE00D2E7327EE715E13AFAB6827BC91612659, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// FMOD.Studio.EventInstance
struct EventInstance_t63794B50D8915EC36E9C164D6BF8E3B133503FC1 
{
public:
	// System.IntPtr FMOD.Studio.EventInstance::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(EventInstance_t63794B50D8915EC36E9C164D6BF8E3B133503FC1, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Runtime.InteropServices.GCHandleType
struct GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FmodResonanceAudioRoom/SurfaceMaterial
struct SurfaceMaterial_tAB5E8F7BBA15BBCDCD98B91434DC4F3662095A3B 
{
public:
	// System.Int32 FmodResonanceAudioRoom/SurfaceMaterial::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SurfaceMaterial_tAB5E8F7BBA15BBCDCD98B91434DC4F3662095A3B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.StringHelper/ThreadSafeEncoding
struct ThreadSafeEncoding_tAED0160400BE1B02140DF95DD415C79C5D942C15  : public RuntimeObject
{
public:
	// System.Text.UTF8Encoding FMOD.StringHelper/ThreadSafeEncoding::encoding
	UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * ___encoding_0;
	// System.Byte[] FMOD.StringHelper/ThreadSafeEncoding::encodedBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___encodedBuffer_1;
	// System.Char[] FMOD.StringHelper/ThreadSafeEncoding::decodedBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___decodedBuffer_2;
	// System.Boolean FMOD.StringHelper/ThreadSafeEncoding::inUse
	bool ___inUse_3;
	// System.Runtime.InteropServices.GCHandle FMOD.StringHelper/ThreadSafeEncoding::gcHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gcHandle_4;

public:
	inline static int32_t get_offset_of_encoding_0() { return static_cast<int32_t>(offsetof(ThreadSafeEncoding_tAED0160400BE1B02140DF95DD415C79C5D942C15, ___encoding_0)); }
	inline UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * get_encoding_0() const { return ___encoding_0; }
	inline UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 ** get_address_of_encoding_0() { return &___encoding_0; }
	inline void set_encoding_0(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * value)
	{
		___encoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_encodedBuffer_1() { return static_cast<int32_t>(offsetof(ThreadSafeEncoding_tAED0160400BE1B02140DF95DD415C79C5D942C15, ___encodedBuffer_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_encodedBuffer_1() const { return ___encodedBuffer_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_encodedBuffer_1() { return &___encodedBuffer_1; }
	inline void set_encodedBuffer_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___encodedBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodedBuffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_decodedBuffer_2() { return static_cast<int32_t>(offsetof(ThreadSafeEncoding_tAED0160400BE1B02140DF95DD415C79C5D942C15, ___decodedBuffer_2)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_decodedBuffer_2() const { return ___decodedBuffer_2; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_decodedBuffer_2() { return &___decodedBuffer_2; }
	inline void set_decodedBuffer_2(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___decodedBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decodedBuffer_2), (void*)value);
	}

	inline static int32_t get_offset_of_inUse_3() { return static_cast<int32_t>(offsetof(ThreadSafeEncoding_tAED0160400BE1B02140DF95DD415C79C5D942C15, ___inUse_3)); }
	inline bool get_inUse_3() const { return ___inUse_3; }
	inline bool* get_address_of_inUse_3() { return &___inUse_3; }
	inline void set_inUse_3(bool value)
	{
		___inUse_3 = value;
	}

	inline static int32_t get_offset_of_gcHandle_4() { return static_cast<int32_t>(offsetof(ThreadSafeEncoding_tAED0160400BE1B02140DF95DD415C79C5D942C15, ___gcHandle_4)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_gcHandle_4() const { return ___gcHandle_4; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_gcHandle_4() { return &___gcHandle_4; }
	inline void set_gcHandle_4(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___gcHandle_4 = value;
	}
};


// FMODUnity.VCANotFoundException
struct VCANotFoundException_t294A5E22A4AA5D9348C23644E2EB6B9DE651D0C9  : public Exception_t
{
public:
	// System.String FMODUnity.VCANotFoundException::Path
	String_t* ___Path_17;

public:
	inline static int32_t get_offset_of_Path_17() { return static_cast<int32_t>(offsetof(VCANotFoundException_t294A5E22A4AA5D9348C23644E2EB6B9DE651D0C9, ___Path_17)); }
	inline String_t* get_Path_17() const { return ___Path_17; }
	inline String_t** get_address_of_Path_17() { return &___Path_17; }
	inline void set_Path_17(String_t* value)
	{
		___Path_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Path_17), (void*)value);
	}
};


// FmodResonanceAudio/RoomProperties
struct RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE 
{
public:
	// System.Single FmodResonanceAudio/RoomProperties::positionX
	float ___positionX_0;
	// System.Single FmodResonanceAudio/RoomProperties::positionY
	float ___positionY_1;
	// System.Single FmodResonanceAudio/RoomProperties::positionZ
	float ___positionZ_2;
	// System.Single FmodResonanceAudio/RoomProperties::rotationX
	float ___rotationX_3;
	// System.Single FmodResonanceAudio/RoomProperties::rotationY
	float ___rotationY_4;
	// System.Single FmodResonanceAudio/RoomProperties::rotationZ
	float ___rotationZ_5;
	// System.Single FmodResonanceAudio/RoomProperties::rotationW
	float ___rotationW_6;
	// System.Single FmodResonanceAudio/RoomProperties::dimensionsX
	float ___dimensionsX_7;
	// System.Single FmodResonanceAudio/RoomProperties::dimensionsY
	float ___dimensionsY_8;
	// System.Single FmodResonanceAudio/RoomProperties::dimensionsZ
	float ___dimensionsZ_9;
	// FmodResonanceAudioRoom/SurfaceMaterial FmodResonanceAudio/RoomProperties::materialLeft
	int32_t ___materialLeft_10;
	// FmodResonanceAudioRoom/SurfaceMaterial FmodResonanceAudio/RoomProperties::materialRight
	int32_t ___materialRight_11;
	// FmodResonanceAudioRoom/SurfaceMaterial FmodResonanceAudio/RoomProperties::materialBottom
	int32_t ___materialBottom_12;
	// FmodResonanceAudioRoom/SurfaceMaterial FmodResonanceAudio/RoomProperties::materialTop
	int32_t ___materialTop_13;
	// FmodResonanceAudioRoom/SurfaceMaterial FmodResonanceAudio/RoomProperties::materialFront
	int32_t ___materialFront_14;
	// FmodResonanceAudioRoom/SurfaceMaterial FmodResonanceAudio/RoomProperties::materialBack
	int32_t ___materialBack_15;
	// System.Single FmodResonanceAudio/RoomProperties::reflectionScalar
	float ___reflectionScalar_16;
	// System.Single FmodResonanceAudio/RoomProperties::reverbGain
	float ___reverbGain_17;
	// System.Single FmodResonanceAudio/RoomProperties::reverbTime
	float ___reverbTime_18;
	// System.Single FmodResonanceAudio/RoomProperties::reverbBrightness
	float ___reverbBrightness_19;

public:
	inline static int32_t get_offset_of_positionX_0() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___positionX_0)); }
	inline float get_positionX_0() const { return ___positionX_0; }
	inline float* get_address_of_positionX_0() { return &___positionX_0; }
	inline void set_positionX_0(float value)
	{
		___positionX_0 = value;
	}

	inline static int32_t get_offset_of_positionY_1() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___positionY_1)); }
	inline float get_positionY_1() const { return ___positionY_1; }
	inline float* get_address_of_positionY_1() { return &___positionY_1; }
	inline void set_positionY_1(float value)
	{
		___positionY_1 = value;
	}

	inline static int32_t get_offset_of_positionZ_2() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___positionZ_2)); }
	inline float get_positionZ_2() const { return ___positionZ_2; }
	inline float* get_address_of_positionZ_2() { return &___positionZ_2; }
	inline void set_positionZ_2(float value)
	{
		___positionZ_2 = value;
	}

	inline static int32_t get_offset_of_rotationX_3() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___rotationX_3)); }
	inline float get_rotationX_3() const { return ___rotationX_3; }
	inline float* get_address_of_rotationX_3() { return &___rotationX_3; }
	inline void set_rotationX_3(float value)
	{
		___rotationX_3 = value;
	}

	inline static int32_t get_offset_of_rotationY_4() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___rotationY_4)); }
	inline float get_rotationY_4() const { return ___rotationY_4; }
	inline float* get_address_of_rotationY_4() { return &___rotationY_4; }
	inline void set_rotationY_4(float value)
	{
		___rotationY_4 = value;
	}

	inline static int32_t get_offset_of_rotationZ_5() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___rotationZ_5)); }
	inline float get_rotationZ_5() const { return ___rotationZ_5; }
	inline float* get_address_of_rotationZ_5() { return &___rotationZ_5; }
	inline void set_rotationZ_5(float value)
	{
		___rotationZ_5 = value;
	}

	inline static int32_t get_offset_of_rotationW_6() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___rotationW_6)); }
	inline float get_rotationW_6() const { return ___rotationW_6; }
	inline float* get_address_of_rotationW_6() { return &___rotationW_6; }
	inline void set_rotationW_6(float value)
	{
		___rotationW_6 = value;
	}

	inline static int32_t get_offset_of_dimensionsX_7() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___dimensionsX_7)); }
	inline float get_dimensionsX_7() const { return ___dimensionsX_7; }
	inline float* get_address_of_dimensionsX_7() { return &___dimensionsX_7; }
	inline void set_dimensionsX_7(float value)
	{
		___dimensionsX_7 = value;
	}

	inline static int32_t get_offset_of_dimensionsY_8() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___dimensionsY_8)); }
	inline float get_dimensionsY_8() const { return ___dimensionsY_8; }
	inline float* get_address_of_dimensionsY_8() { return &___dimensionsY_8; }
	inline void set_dimensionsY_8(float value)
	{
		___dimensionsY_8 = value;
	}

	inline static int32_t get_offset_of_dimensionsZ_9() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___dimensionsZ_9)); }
	inline float get_dimensionsZ_9() const { return ___dimensionsZ_9; }
	inline float* get_address_of_dimensionsZ_9() { return &___dimensionsZ_9; }
	inline void set_dimensionsZ_9(float value)
	{
		___dimensionsZ_9 = value;
	}

	inline static int32_t get_offset_of_materialLeft_10() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___materialLeft_10)); }
	inline int32_t get_materialLeft_10() const { return ___materialLeft_10; }
	inline int32_t* get_address_of_materialLeft_10() { return &___materialLeft_10; }
	inline void set_materialLeft_10(int32_t value)
	{
		___materialLeft_10 = value;
	}

	inline static int32_t get_offset_of_materialRight_11() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___materialRight_11)); }
	inline int32_t get_materialRight_11() const { return ___materialRight_11; }
	inline int32_t* get_address_of_materialRight_11() { return &___materialRight_11; }
	inline void set_materialRight_11(int32_t value)
	{
		___materialRight_11 = value;
	}

	inline static int32_t get_offset_of_materialBottom_12() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___materialBottom_12)); }
	inline int32_t get_materialBottom_12() const { return ___materialBottom_12; }
	inline int32_t* get_address_of_materialBottom_12() { return &___materialBottom_12; }
	inline void set_materialBottom_12(int32_t value)
	{
		___materialBottom_12 = value;
	}

	inline static int32_t get_offset_of_materialTop_13() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___materialTop_13)); }
	inline int32_t get_materialTop_13() const { return ___materialTop_13; }
	inline int32_t* get_address_of_materialTop_13() { return &___materialTop_13; }
	inline void set_materialTop_13(int32_t value)
	{
		___materialTop_13 = value;
	}

	inline static int32_t get_offset_of_materialFront_14() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___materialFront_14)); }
	inline int32_t get_materialFront_14() const { return ___materialFront_14; }
	inline int32_t* get_address_of_materialFront_14() { return &___materialFront_14; }
	inline void set_materialFront_14(int32_t value)
	{
		___materialFront_14 = value;
	}

	inline static int32_t get_offset_of_materialBack_15() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___materialBack_15)); }
	inline int32_t get_materialBack_15() const { return ___materialBack_15; }
	inline int32_t* get_address_of_materialBack_15() { return &___materialBack_15; }
	inline void set_materialBack_15(int32_t value)
	{
		___materialBack_15 = value;
	}

	inline static int32_t get_offset_of_reflectionScalar_16() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___reflectionScalar_16)); }
	inline float get_reflectionScalar_16() const { return ___reflectionScalar_16; }
	inline float* get_address_of_reflectionScalar_16() { return &___reflectionScalar_16; }
	inline void set_reflectionScalar_16(float value)
	{
		___reflectionScalar_16 = value;
	}

	inline static int32_t get_offset_of_reverbGain_17() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___reverbGain_17)); }
	inline float get_reverbGain_17() const { return ___reverbGain_17; }
	inline float* get_address_of_reverbGain_17() { return &___reverbGain_17; }
	inline void set_reverbGain_17(float value)
	{
		___reverbGain_17 = value;
	}

	inline static int32_t get_offset_of_reverbTime_18() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___reverbTime_18)); }
	inline float get_reverbTime_18() const { return ___reverbTime_18; }
	inline float* get_address_of_reverbTime_18() { return &___reverbTime_18; }
	inline void set_reverbTime_18(float value)
	{
		___reverbTime_18 = value;
	}

	inline static int32_t get_offset_of_reverbBrightness_19() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___reverbBrightness_19)); }
	inline float get_reverbBrightness_19() const { return ___reverbBrightness_19; }
	inline float* get_address_of_reverbBrightness_19() { return &___reverbBrightness_19; }
	inline void set_reverbBrightness_19(float value)
	{
		___reverbBrightness_19 = value;
	}
};


// FMODUnity.RuntimeManager/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_t08E47E58E1EA3593A96242D20DB3173180EDF555  : public RuntimeObject
{
public:
	// FMOD.Studio.EventInstance FMODUnity.RuntimeManager/<>c__DisplayClass27_0::instance
	EventInstance_t63794B50D8915EC36E9C164D6BF8E3B133503FC1  ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_0_t08E47E58E1EA3593A96242D20DB3173180EDF555, ___instance_0)); }
	inline EventInstance_t63794B50D8915EC36E9C164D6BF8E3B133503FC1  get_instance_0() const { return ___instance_0; }
	inline EventInstance_t63794B50D8915EC36E9C164D6BF8E3B133503FC1 * get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(EventInstance_t63794B50D8915EC36E9C164D6BF8E3B133503FC1  value)
	{
		___instance_0 = value;
	}
};


// FMODUnity.RuntimeManager/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_tC4C87941AAFB05F7243FA9D4016E9E79E3AF78A0  : public RuntimeObject
{
public:
	// FMOD.Studio.EventInstance FMODUnity.RuntimeManager/<>c__DisplayClass28_0::instance
	EventInstance_t63794B50D8915EC36E9C164D6BF8E3B133503FC1  ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_0_tC4C87941AAFB05F7243FA9D4016E9E79E3AF78A0, ___instance_0)); }
	inline EventInstance_t63794B50D8915EC36E9C164D6BF8E3B133503FC1  get_instance_0() const { return ___instance_0; }
	inline EventInstance_t63794B50D8915EC36E9C164D6BF8E3B133503FC1 * get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(EventInstance_t63794B50D8915EC36E9C164D6BF8E3B133503FC1  value)
	{
		___instance_0 = value;
	}
};


// FMODUnity.RuntimeManager/AttachedInstance
struct AttachedInstance_t9819D0CB48BFFB66B6296680F5D20FEC4987931F  : public RuntimeObject
{
public:
	// FMOD.Studio.EventInstance FMODUnity.RuntimeManager/AttachedInstance::instance
	EventInstance_t63794B50D8915EC36E9C164D6BF8E3B133503FC1  ___instance_0;
	// UnityEngine.Transform FMODUnity.RuntimeManager/AttachedInstance::transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_1;
	// UnityEngine.Rigidbody FMODUnity.RuntimeManager/AttachedInstance::rigidBody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rigidBody_2;
	// UnityEngine.Rigidbody2D FMODUnity.RuntimeManager/AttachedInstance::rigidBody2D
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rigidBody2D_3;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(AttachedInstance_t9819D0CB48BFFB66B6296680F5D20FEC4987931F, ___instance_0)); }
	inline EventInstance_t63794B50D8915EC36E9C164D6BF8E3B133503FC1  get_instance_0() const { return ___instance_0; }
	inline EventInstance_t63794B50D8915EC36E9C164D6BF8E3B133503FC1 * get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(EventInstance_t63794B50D8915EC36E9C164D6BF8E3B133503FC1  value)
	{
		___instance_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(AttachedInstance_t9819D0CB48BFFB66B6296680F5D20FEC4987931F, ___transform_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_transform_1() const { return ___transform_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___transform_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_1), (void*)value);
	}

	inline static int32_t get_offset_of_rigidBody_2() { return static_cast<int32_t>(offsetof(AttachedInstance_t9819D0CB48BFFB66B6296680F5D20FEC4987931F, ___rigidBody_2)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rigidBody_2() const { return ___rigidBody_2; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rigidBody_2() { return &___rigidBody_2; }
	inline void set_rigidBody_2(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rigidBody_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigidBody_2), (void*)value);
	}

	inline static int32_t get_offset_of_rigidBody2D_3() { return static_cast<int32_t>(offsetof(AttachedInstance_t9819D0CB48BFFB66B6296680F5D20FEC4987931F, ___rigidBody2D_3)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rigidBody2D_3() const { return ___rigidBody2D_3; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rigidBody2D_3() { return &___rigidBody2D_3; }
	inline void set_rigidBody2D_3(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rigidBody2D_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigidBody2D_3), (void*)value);
	}
};


// FMODUnity.RuntimeManager/LoadedBank
struct LoadedBank_t1057AE9927D0CD82C88F33B1CD5D847C8420F873 
{
public:
	// FMOD.Studio.Bank FMODUnity.RuntimeManager/LoadedBank::Bank
	Bank_t03BBE00D2E7327EE715E13AFAB6827BC91612659  ___Bank_0;
	// System.Int32 FMODUnity.RuntimeManager/LoadedBank::RefCount
	int32_t ___RefCount_1;

public:
	inline static int32_t get_offset_of_Bank_0() { return static_cast<int32_t>(offsetof(LoadedBank_t1057AE9927D0CD82C88F33B1CD5D847C8420F873, ___Bank_0)); }
	inline Bank_t03BBE00D2E7327EE715E13AFAB6827BC91612659  get_Bank_0() const { return ___Bank_0; }
	inline Bank_t03BBE00D2E7327EE715E13AFAB6827BC91612659 * get_address_of_Bank_0() { return &___Bank_0; }
	inline void set_Bank_0(Bank_t03BBE00D2E7327EE715E13AFAB6827BC91612659  value)
	{
		___Bank_0 = value;
	}

	inline static int32_t get_offset_of_RefCount_1() { return static_cast<int32_t>(offsetof(LoadedBank_t1057AE9927D0CD82C88F33B1CD5D847C8420F873, ___RefCount_1)); }
	inline int32_t get_RefCount_1() const { return ___RefCount_1; }
	inline int32_t* get_address_of_RefCount_1() { return &___RefCount_1; }
	inline void set_RefCount_1(int32_t value)
	{
		___RefCount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};



// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Boolean System.Guid::Equals(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_Equals_m602304DBC4842AB53670762A6DB52D30C3973258 (Guid_t * __this, Guid_t  ___g0, const RuntimeMethod* method);
// System.Int32 System.Guid::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_mD32F5054E937C98B3D082594B3849808F1E92AE7 (Guid_t * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Int32 FMOD.StringHelper/ThreadSafeEncoding::roundUpPowerTwo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreadSafeEncoding_roundUpPowerTwo_m5C55AB753CEDFD7618392C330A781E8602454344 (ThreadSafeEncoding_tAED0160400BE1B02140DF95DD415C79C5D942C15 * __this, int32_t ___number0, const RuntimeMethod* method);
// System.Byte[] FMOD.StringHelper/ThreadSafeEncoding::byteFromStringUTF8(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ThreadSafeEncoding_byteFromStringUTF8_m8269F2DB7B8C1EF2794A9BB5FCF3BB05F7E3D6A5 (ThreadSafeEncoding_tAED0160400BE1B02140DF95DD415C79C5D942C15 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Marshal_ReadByte_mA0E9E8CE64BFEEA553E2ADB92201A4187F3BCFCA (intptr_t ___ptr0, int32_t ___ofs1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m057A8067BF7212A361510EA26B24022990A07AC0 (intptr_t ___source0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Text.UTF8Encoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_mA3F21D41B65D155202345802A05761A4BC022888 (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FMODUnity.VCANotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCANotFoundException__ctor_m18BC42C4C690CA06359A5E1C463337D5644C771A (VCANotFoundException_t294A5E22A4AA5D9348C23644E2EB6B9DE651D0C9 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E91B09D74330D84716D5CE30BB9B07E1C7A18FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("[FMOD] VCA not found '" + path + "'")
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral1E91B09D74330D84716D5CE30BB9B07E1C7A18FB, L_0, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_1, /*hidden argument*/NULL);
		// Path = path;
		String_t* L_2 = ___path0;
		__this->set_Path_17(L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FMOD.VERSION::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VERSION__ctor_m01ECB28C7AD681C478E3E08BFF0707143A2B3529 (VERSION_t06897B16D6420293FBA577CA967450D9A37DA2BE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FMODUnity.RuntimeManager/<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_m4D37AD1C20A72E445D8CDB065C1F6E8184F19F42 (U3CU3Ec__DisplayClass27_0_t08E47E58E1EA3593A96242D20DB3173180EDF555 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean FMODUnity.RuntimeManager/<>c__DisplayClass27_0::<AttachInstanceToGameObject>b__0(FMODUnity.RuntimeManager/AttachedInstance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass27_0_U3CAttachInstanceToGameObjectU3Eb__0_m760515BDD809D9161A165CD3603D1426544E51C9 (U3CU3Ec__DisplayClass27_0_t08E47E58E1EA3593A96242D20DB3173180EDF555 * __this, AttachedInstance_t9819D0CB48BFFB66B6296680F5D20FEC4987931F * ___x0, const RuntimeMethod* method)
{
	{
		// AttachedInstance attachedInstance = Instance.attachedInstances.Find(x => x.instance.handle == instance.handle);
		AttachedInstance_t9819D0CB48BFFB66B6296680F5D20FEC4987931F * L_0 = ___x0;
		NullCheck(L_0);
		EventInstance_t63794B50D8915EC36E9C164D6BF8E3B133503FC1 * L_1 = L_0->get_address_of_instance_0();
		intptr_t L_2 = L_1->get_handle_0();
		EventInstance_t63794B50D8915EC36E9C164D6BF8E3B133503FC1 * L_3 = __this->get_address_of_instance_0();
		intptr_t L_4 = L_3->get_handle_0();
		bool L_5;
		L_5 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FMODUnity.RuntimeManager/<>c__DisplayClass28_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0__ctor_mBAEB42AD2F13F617A8F16DEA5B0F42836767BF73 (U3CU3Ec__DisplayClass28_0_tC4C87941AAFB05F7243FA9D4016E9E79E3AF78A0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean FMODUnity.RuntimeManager/<>c__DisplayClass28_0::<AttachInstanceToGameObject>b__0(FMODUnity.RuntimeManager/AttachedInstance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass28_0_U3CAttachInstanceToGameObjectU3Eb__0_m47A15CFFEDC7F1A5F3D556B905CFB383EEEEDA1C (U3CU3Ec__DisplayClass28_0_tC4C87941AAFB05F7243FA9D4016E9E79E3AF78A0 * __this, AttachedInstance_t9819D0CB48BFFB66B6296680F5D20FEC4987931F * ___x0, const RuntimeMethod* method)
{
	{
		// AttachedInstance attachedInstance = Instance.attachedInstances.Find(x => x.instance.handle == instance.handle);
		AttachedInstance_t9819D0CB48BFFB66B6296680F5D20FEC4987931F * L_0 = ___x0;
		NullCheck(L_0);
		EventInstance_t63794B50D8915EC36E9C164D6BF8E3B133503FC1 * L_1 = L_0->get_address_of_instance_0();
		intptr_t L_2 = L_1->get_handle_0();
		EventInstance_t63794B50D8915EC36E9C164D6BF8E3B133503FC1 * L_3 = __this->get_address_of_instance_0();
		intptr_t L_4 = L_3->get_handle_0();
		bool L_5;
		L_5 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FMODUnity.RuntimeManager/AttachedInstance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachedInstance__ctor_m92389FE6206F2848A425E1342D685AB9E37C4451 (AttachedInstance_t9819D0CB48BFFB66B6296680F5D20FEC4987931F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean FMODUnity.RuntimeManager/GuidComparer::System.Collections.Generic.IEqualityComparer<System.Guid>.Equals(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GuidComparer_System_Collections_Generic_IEqualityComparerU3CSystem_GuidU3E_Equals_m80888B59745816C46A700B6CCBF8FCAC8E8AB16D (GuidComparer_t4598A5CCB84BF92C7B371CC251105EA67BB8E6F5 * __this, Guid_t  ___x0, Guid_t  ___y1, const RuntimeMethod* method)
{
	{
		// return x.Equals(y);
		Guid_t  L_0 = ___y1;
		bool L_1;
		L_1 = Guid_Equals_m602304DBC4842AB53670762A6DB52D30C3973258((Guid_t *)(&___x0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 FMODUnity.RuntimeManager/GuidComparer::System.Collections.Generic.IEqualityComparer<System.Guid>.GetHashCode(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GuidComparer_System_Collections_Generic_IEqualityComparerU3CSystem_GuidU3E_GetHashCode_m7D6585AB7F68B02950B610C7886FFEFAD335713B (GuidComparer_t4598A5CCB84BF92C7B371CC251105EA67BB8E6F5 * __this, Guid_t  ___obj0, const RuntimeMethod* method)
{
	{
		// return obj.GetHashCode();
		int32_t L_0;
		L_0 = Guid_GetHashCode_mD32F5054E937C98B3D082594B3849808F1E92AE7((Guid_t *)(&___obj0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void FMODUnity.RuntimeManager/GuidComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GuidComparer__ctor_m58759ACD0E2A3C1AB3D94408D6722B5EFFE2C193 (GuidComparer_t4598A5CCB84BF92C7B371CC251105EA67BB8E6F5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean FMOD.StringHelper/ThreadSafeEncoding::InUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadSafeEncoding_InUse_mC0556FB642471573DF06A30443ACDF1A818DF479 (ThreadSafeEncoding_tAED0160400BE1B02140DF95DD415C79C5D942C15 * __this, const RuntimeMethod* method)
{
	{
		// public bool InUse()    { return inUse; }
		bool L_0 = __this->get_inUse_3();
		return L_0;
	}
}
// System.Void FMOD.StringHelper/ThreadSafeEncoding::SetInUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeEncoding_SetInUse_mB2A45FE254398B25D4ADA9888B2CE8D91A7B644F (ThreadSafeEncoding_tAED0160400BE1B02140DF95DD415C79C5D942C15 * __this, const RuntimeMethod* method)
{
	{
		// public void SetInUse() { inUse = true; }
		__this->set_inUse_3((bool)1);
		// public void SetInUse() { inUse = true; }
		return;
	}
}
// System.Int32 FMOD.StringHelper/ThreadSafeEncoding::roundUpPowerTwo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreadSafeEncoding_roundUpPowerTwo_m5C55AB753CEDFD7618392C330A781E8602454344 (ThreadSafeEncoding_tAED0160400BE1B02140DF95DD415C79C5D942C15 * __this, int32_t ___number0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int newNumber = 1;
		V_0 = 1;
		goto IL_0008;
	}

IL_0004:
	{
		// newNumber *= 2;
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)2));
	}

IL_0008:
	{
		// while (newNumber <= number)
		int32_t L_1 = V_0;
		int32_t L_2 = ___number0;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0004;
		}
	}
	{
		// return newNumber;
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] FMOD.StringHelper/ThreadSafeEncoding::byteFromStringUTF8(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ThreadSafeEncoding_byteFromStringUTF8_m8269F2DB7B8C1EF2794A9BB5FCF3BB05F7E3D6A5 (ThreadSafeEncoding_tAED0160400BE1B02140DF95DD415C79C5D942C15 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (s == null)
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
	}

IL_0005:
	{
		// int maximumLength = encoding.GetMaxByteCount(s.Length) + 1; // +1 for null terminator
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_1 = __this->get_encoding_0();
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_4;
		L_4 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(28 /* System.Int32 System.Text.Encoding::GetMaxByteCount(System.Int32) */, L_1, L_3);
		// if (maximumLength > encodedBuffer.Length)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get_encodedBuffer_1();
		NullCheck(L_5);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_004e;
		}
	}
	{
		// int encodedLength = encoding.GetByteCount(s) + 1; // +1 for null terminator
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_6 = __this->get_encoding_0();
		String_t* L_7 = ___s0;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = VirtFuncInvoker1< int32_t, String_t* >::Invoke(9 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_6, L_7);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		// if (encodedLength > encodedBuffer.Length)
		int32_t L_9 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = __this->get_encodedBuffer_1();
		NullCheck(L_10);
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_004e;
		}
	}
	{
		// encodedBuffer = new byte[roundUpPowerTwo(encodedLength)];
		int32_t L_11 = V_1;
		int32_t L_12;
		L_12 = ThreadSafeEncoding_roundUpPowerTwo_m5C55AB753CEDFD7618392C330A781E8602454344(__this, L_11, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_12);
		__this->set_encodedBuffer_1(L_13);
	}

IL_004e:
	{
		// int byteCount = encoding.GetBytes(s, 0, s.Length, encodedBuffer, 0);
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_14 = __this->get_encoding_0();
		String_t* L_15 = ___s0;
		String_t* L_16 = ___s0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_16, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = __this->get_encodedBuffer_1();
		NullCheck(L_14);
		int32_t L_19;
		L_19 = VirtFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(15 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_14, L_15, 0, L_17, L_18, 0);
		V_0 = L_19;
		// encodedBuffer[byteCount] = 0; // Apply null terminator
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = __this->get_encodedBuffer_1();
		int32_t L_21 = V_0;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint8_t)0);
		// return encodedBuffer;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = __this->get_encodedBuffer_1();
		return L_22;
	}
}
// System.IntPtr FMOD.StringHelper/ThreadSafeEncoding::intptrFromStringUTF8(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ThreadSafeEncoding_intptrFromStringUTF8_m04BCD3B88E04C80FEEB7CB9AE07F4479CE7D945F (ThreadSafeEncoding_tAED0160400BE1B02140DF95DD415C79C5D942C15 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s == null)
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}

IL_0009:
	{
		// gcHandle = GCHandle.Alloc(byteFromStringUTF8(s), GCHandleType.Pinned);
		String_t* L_1 = ___s0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = ThreadSafeEncoding_byteFromStringUTF8_m8269F2DB7B8C1EF2794A9BB5FCF3BB05F7E3D6A5(__this, L_1, /*hidden argument*/NULL);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_3;
		L_3 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC((RuntimeObject *)(RuntimeObject *)L_2, 3, /*hidden argument*/NULL);
		__this->set_gcHandle_4(L_3);
		// return gcHandle.AddrOfPinnedObject();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_4 = __this->get_address_of_gcHandle_4();
		intptr_t L_5;
		L_5 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_4, /*hidden argument*/NULL);
		return (intptr_t)L_5;
	}
}
// System.String FMOD.StringHelper/ThreadSafeEncoding::stringFromNative(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThreadSafeEncoding_stringFromNative_mE0140DC75CD4CA6BACB1EA87FBCEF5E4BEE2732E (ThreadSafeEncoding_tAED0160400BE1B02140DF95DD415C79C5D942C15 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (nativePtr == IntPtr.Zero)
		intptr_t L_0 = ___nativePtr0;
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0013:
	{
		// int nativeLen = 0;
		V_0 = 0;
		goto IL_001b;
	}

IL_0017:
	{
		// nativeLen++;
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_001b:
	{
		// while (Marshal.ReadByte(nativePtr, nativeLen) != 0)
		intptr_t L_3 = ___nativePtr0;
		int32_t L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		uint8_t L_5;
		L_5 = Marshal_ReadByte_mA0E9E8CE64BFEEA553E2ADB92201A4187F3BCFCA((intptr_t)L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0017;
		}
	}
	{
		// if (nativeLen == 0)
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_002d;
		}
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_002d:
	{
		// if (nativeLen > encodedBuffer.Length)
		int32_t L_7 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_encodedBuffer_1();
		NullCheck(L_8);
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_004a;
		}
	}
	{
		// encodedBuffer = new byte[roundUpPowerTwo(nativeLen)];
		int32_t L_9 = V_0;
		int32_t L_10;
		L_10 = ThreadSafeEncoding_roundUpPowerTwo_m5C55AB753CEDFD7618392C330A781E8602454344(__this, L_9, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->set_encodedBuffer_1(L_11);
	}

IL_004a:
	{
		// Marshal.Copy(nativePtr, encodedBuffer, 0, nativeLen);
		intptr_t L_12 = ___nativePtr0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = __this->get_encodedBuffer_1();
		int32_t L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m057A8067BF7212A361510EA26B24022990A07AC0((intptr_t)L_12, L_13, 0, L_14, /*hidden argument*/NULL);
		// int maximumLength = encoding.GetMaxCharCount(nativeLen);
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_15 = __this->get_encoding_0();
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17;
		L_17 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(29 /* System.Int32 System.Text.Encoding::GetMaxCharCount(System.Int32) */, L_15, L_16);
		// if (maximumLength > decodedBuffer.Length)
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_18 = __this->get_decodedBuffer_2();
		NullCheck(L_18);
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_009f;
		}
	}
	{
		// int decodedLength = encoding.GetCharCount(encodedBuffer, 0, nativeLen);
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_19 = __this->get_encoding_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = __this->get_encodedBuffer_1();
		int32_t L_21 = V_0;
		NullCheck(L_19);
		int32_t L_22;
		L_22 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(18 /* System.Int32 System.Text.Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32) */, L_19, L_20, 0, L_21);
		V_2 = L_22;
		// if (decodedLength > decodedBuffer.Length)
		int32_t L_23 = V_2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_24 = __this->get_decodedBuffer_2();
		NullCheck(L_24);
		if ((((int32_t)L_23) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_009f;
		}
	}
	{
		// decodedBuffer = new char[roundUpPowerTwo(decodedLength)];
		int32_t L_25 = V_2;
		int32_t L_26;
		L_26 = ThreadSafeEncoding_roundUpPowerTwo_m5C55AB753CEDFD7618392C330A781E8602454344(__this, L_25, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_27 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_26);
		__this->set_decodedBuffer_2(L_27);
	}

IL_009f:
	{
		// int charCount = encoding.GetChars(encodedBuffer, 0, nativeLen, decodedBuffer, 0);
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_28 = __this->get_encoding_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = __this->get_encodedBuffer_1();
		int32_t L_30 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_31 = __this->get_decodedBuffer_2();
		NullCheck(L_28);
		int32_t L_32;
		L_32 = VirtFuncInvoker5< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t >::Invoke(22 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_28, L_29, 0, L_30, L_31, 0);
		V_1 = L_32;
		// return new String(decodedBuffer, 0, charCount);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_33 = __this->get_decodedBuffer_2();
		int32_t L_34 = V_1;
		String_t* L_35;
		L_35 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_33, 0, L_34, /*hidden argument*/NULL);
		return L_35;
	}
}
// System.Void FMOD.StringHelper/ThreadSafeEncoding::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeEncoding_Dispose_m483F4654180EDD8EFB558197E2862369F8B995B2 (ThreadSafeEncoding_tAED0160400BE1B02140DF95DD415C79C5D942C15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringHelper_t26F6DE70D2323706FCA67A744AAB37F21B52FEE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3A62A49B80510BD0F357A67357AAE6EB5923D65A * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (gcHandle.IsAllocated)
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_0 = __this->get_address_of_gcHandle_4();
		bool L_1;
		L_1 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// gcHandle.Free();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_2 = __this->get_address_of_gcHandle_4();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// lock (encoders)
		IL2CPP_RUNTIME_CLASS_INIT(StringHelper_t26F6DE70D2323706FCA67A744AAB37F21B52FEE2_il2cpp_TypeInfo_var);
		List_1_t3A62A49B80510BD0F357A67357AAE6EB5923D65A * L_3 = ((StringHelper_t26F6DE70D2323706FCA67A744AAB37F21B52FEE2_StaticFields*)il2cpp_codegen_static_fields_for(StringHelper_t26F6DE70D2323706FCA67A744AAB37F21B52FEE2_il2cpp_TypeInfo_var))->get_encoders_0();
		V_0 = L_3;
		V_1 = (bool)0;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		List_1_t3A62A49B80510BD0F357A67357AAE6EB5923D65A * L_4 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_4, (bool*)(&V_1), /*hidden argument*/NULL);
		// inUse = false;
		__this->set_inUse_3((bool)0);
		// }
		IL2CPP_LEAVE(0x3B, FINALLY_0031);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_003a;
			}
		}

IL_0034:
		{
			List_1_t3A62A49B80510BD0F357A67357AAE6EB5923D65A * L_6 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		}

IL_003a:
		{
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void FMOD.StringHelper/ThreadSafeEncoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeEncoding__ctor_mDA8C0F2C35D58DEA28E204090C58C8ED1CC502FE (ThreadSafeEncoding_tAED0160400BE1B02140DF95DD415C79C5D942C15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UTF8Encoding encoding = new UTF8Encoding();
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_0 = (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 *)il2cpp_codegen_object_new(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_mA3F21D41B65D155202345802A05761A4BC022888(L_0, /*hidden argument*/NULL);
		__this->set_encoding_0(L_0);
		// byte[] encodedBuffer = new byte[128];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		__this->set_encodedBuffer_1(L_1);
		// char[] decodedBuffer = new char[128];
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		__this->set_decodedBuffer_2(L_2);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
