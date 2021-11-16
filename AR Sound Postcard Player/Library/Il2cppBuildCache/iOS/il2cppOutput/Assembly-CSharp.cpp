#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t5DF84322FFE12A24465E48164961CD724D109521;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>
struct Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032;
// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct Dictionary_2_t1D971BA151CCF2A891990C13C7561FEC253BC7CF;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct Dictionary_2_tD95D4B180F0B4EEF3668344392936E58ECF7069E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GameObject>
struct KeyCollection_t8B43E8504381EBAE726A65E47CF5C58389CCDCD3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem>
struct List_1_t19D4B5E8CD4DAF90FBAC8A83E6F7E9C0939C7BE0;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>
struct List_1_t179969632C4CD7B25BEBAA7DA12BA4C8F82F69F2;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GameObject>
struct ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.GameObject>[]
struct EntryU5BU5D_t954984A7FAD7638C56E3980445C36F374F9CC3ED;
// UnityEngine.XR.ARFoundation.ARTrackedImage[]
struct ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Enemy[]
struct EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1;
// UnityEngine.XR.ARFoundation.ARTrackedImage
struct ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7;
// UnityEngine.XR.ARFoundation.ARTrackedImageManager
struct ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DisableScreenSleeping
struct DisableScreenSleeping_t721C4DDFE6A41229AABD432937B146D77CED2420;
// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627;
// FindClosest
struct FindClosest_t502181BF1D570545238207A41095AF8DCF41E819;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// ImageTracking
struct ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80;
// MakePostcard
struct MakePostcard_t663BEC5BFEE2931A863F54F589A34FBDE658FCFF;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MenuControl
struct MenuControl_tD6B61EA950F8DF6E5A76C458AAA2E71D25654778;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// TrackingState
struct TrackingState_tAA20CD18FC0884B91A2406448CC90080E8CDEFBD;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem
struct XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE;
// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary
struct XRReferenceImageLibrary_tC415743C1DDCE2331D5B0F159B2A1D72A70C44B2;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// TrackingState/<Start>d__3
struct U3CStartU3Ed__3_tF5669CDA1618D4AB9049200286394982CD0649A2;

IL2CPP_EXTERN_C RuntimeClass* ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeManager_t87723E19BD688665EF5E4375DDA0AC4C1762F48A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__3_tF5669CDA1618D4AB9049200286394982CD0649A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05F29CE2C3E06492FAFE36672D97EF781FABE332;
IL2CPP_EXTERN_C String_t* _stringLiteral116273CD5D8FA85B2B09F79802D1EDD0C11FFC66;
IL2CPP_EXTERN_C String_t* _stringLiteral23AF701FF440280F9BDD61B514BB41F48690A8DA;
IL2CPP_EXTERN_C String_t* _stringLiteral27FD14CFE32223C443750A097C6E310D28F90764;
IL2CPP_EXTERN_C String_t* _stringLiteral4772D75F86FF8033EF18BEB5A2555DE7B32A6367;
IL2CPP_EXTERN_C String_t* _stringLiteral509C084586320A910444D73ACF5386F77869E8FB;
IL2CPP_EXTERN_C String_t* _stringLiteral5A350421A6B211C96799ECB935A49263F4151989;
IL2CPP_EXTERN_C String_t* _stringLiteral75DC5674555374787C274EE541661679A3633A2A;
IL2CPP_EXTERN_C String_t* _stringLiteral76EEBE76F86A4AA251CB82FFE984B55CE979F8B0;
IL2CPP_EXTERN_C String_t* _stringLiteral97F6A0D5A49A9E5B5967996FDDA9C89F1DB3C249;
IL2CPP_EXTERN_C String_t* _stringLiteralAFD6B8CE125A895141C64EC9E3F8A30B4AC588B4;
IL2CPP_EXTERN_C String_t* _stringLiteralB15C3B1E5301A454B1F6EF3D4C8C3CA94F73285F;
IL2CPP_EXTERN_C String_t* _stringLiteralBE26ADEBA1E2A48086FCB0B8D271B53D826E6CD1;
IL2CPP_EXTERN_C String_t* _stringLiteralC3B453E9F0C07BDDAE29F036F419A22466145753;
IL2CPP_EXTERN_C String_t* _stringLiteralD0B41CA0013533DCFC7C034949701DA4C558A039;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A59EABF0C51AF863757F81CFC978C0C90E24B3;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DB1B6CF792E1BF1AED62392910B83816D9FC52;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m478435EC913232FA753676196AF119F5001564B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m6D23729A58240291FAD0B2A484D107C5D06B8A78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m627A706D7F24292D51368C749EB140EFE869376A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC4E467FB6129C74774CC33C4A8E3B1F00A73E15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mCE27229BD2853EB5DD18823A44CB838915891AF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m037FDB6FB9E61ECDB0D7F5AB2373A57E01AE500C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA7C5E1105681D1F3AEFE0B3D8F403231775794CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m89255A16DAE894CEA174A88A674162B09592C8C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCB1E114B7C949E2BE0521FAB1DCD32D836AA838E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8F54706BF35C304C986CE96C30148CF4911A9374_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD4B9742F53CF6579D470CB4824D954C4590A53B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMakePostcard_t663BEC5BFEE2931A863F54F589A34FBDE658FCFF_m0CB94270367E249EACBB0933F846EFF09FFEF5F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageTracking_ImageChanged_mF71CEAFEC17C56EA45ED003E88C0A51609B8105A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m364FE8EB7E663EEC71E574FD554BE600FD5A0D86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2_m660417E625FD0A66345200E2670A25DD17AA6A22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mAAE5765443D834ABFAA93E538F961D94D5E8340B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mA1495EFEECA7BF44DA43D9813F575C92968F0B4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__3_System_Collections_IEnumerator_Reset_m8E7D19A65210DCE4B77F291C0736EF58E854BC4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m4F21A422DA7CBC55B4596D04154835F270B15957_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t954984A7FAD7638C56E3980445C36F374F9CC3ED* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t8B43E8504381EBAE726A65E47CF5C58389CCDCD3 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___entries_1)); }
	inline EntryU5BU5D_t954984A7FAD7638C56E3980445C36F374F9CC3ED* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t954984A7FAD7638C56E3980445C36F374F9CC3ED** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t954984A7FAD7638C56E3980445C36F374F9CC3ED* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___keys_7)); }
	inline KeyCollection_t8B43E8504381EBAE726A65E47CF5C58389CCDCD3 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8B43E8504381EBAE726A65E47CF5C58389CCDCD3 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8B43E8504381EBAE726A65E47CF5C58389CCDCD3 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___values_8)); }
	inline ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F, ____items_1)); }
	inline ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142* get__items_1() const { return ____items_1; }
	inline ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F_StaticFields, ____emptyArray_5)); }
	inline ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GameObject>
struct ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59, ___dictionary_0)); }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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

// TrackingState/<Start>d__3
struct U3CStartU3Ed__3_tF5669CDA1618D4AB9049200286394982CD0649A2  : public RuntimeObject
{
public:
	// System.Int32 TrackingState/<Start>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TrackingState/<Start>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TrackingState TrackingState/<Start>d__3::<>4__this
	TrackingState_tAA20CD18FC0884B91A2406448CC90080E8CDEFBD * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__3_tF5669CDA1618D4AB9049200286394982CD0649A2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__3_tF5669CDA1618D4AB9049200286394982CD0649A2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__3_tF5669CDA1618D4AB9049200286394982CD0649A2, ___U3CU3E4__this_2)); }
	inline TrackingState_tAA20CD18FC0884B91A2406448CC90080E8CDEFBD * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TrackingState_tAA20CD18FC0884B91A2406448CC90080E8CDEFBD ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TrackingState_tAA20CD18FC0884B91A2406448CC90080E8CDEFBD * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4, ___list_0)); }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * get_list_0() const { return ___list_0; }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4, ___current_3)); }
	inline ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * get_current_3() const { return ___current_3; }
	inline ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GameObject>
struct Enumerator_t9330D3C8A357E733C46B4B643654B35F1B83DC56 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t9330D3C8A357E733C46B4B643654B35F1B83DC56, ___dictionary_0)); }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t9330D3C8A357E733C46B4B643654B35F1B83DC56, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t9330D3C8A357E733C46B4B643654B35F1B83DC56, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t9330D3C8A357E733C46B4B643654B35F1B83DC56, ___currentValue_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentValue_3() const { return ___currentValue_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<added>k__BackingField
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___U3CaddedU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<updated>k__BackingField
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___U3CupdatedU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<removed>k__BackingField
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___U3CremovedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CaddedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C, ___U3CaddedU3Ek__BackingField_0)); }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * get_U3CaddedU3Ek__BackingField_0() const { return ___U3CaddedU3Ek__BackingField_0; }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F ** get_address_of_U3CaddedU3Ek__BackingField_0() { return &___U3CaddedU3Ek__BackingField_0; }
	inline void set_U3CaddedU3Ek__BackingField_0(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * value)
	{
		___U3CaddedU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaddedU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CupdatedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C, ___U3CupdatedU3Ek__BackingField_1)); }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * get_U3CupdatedU3Ek__BackingField_1() const { return ___U3CupdatedU3Ek__BackingField_1; }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F ** get_address_of_U3CupdatedU3Ek__BackingField_1() { return &___U3CupdatedU3Ek__BackingField_1; }
	inline void set_U3CupdatedU3Ek__BackingField_1(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * value)
	{
		___U3CupdatedU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CupdatedU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CremovedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C, ___U3CremovedU3Ek__BackingField_2)); }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * get_U3CremovedU3Ek__BackingField_2() const { return ___U3CremovedU3Ek__BackingField_2; }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F ** get_address_of_U3CremovedU3Ek__BackingField_2() { return &___U3CremovedU3Ek__BackingField_2; }
	inline void set_U3CremovedU3Ek__BackingField_2(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * value)
	{
		___U3CremovedU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CremovedU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C_marshaled_pinvoke
{
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___U3CaddedU3Ek__BackingField_0;
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___U3CupdatedU3Ek__BackingField_1;
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C_marshaled_com
{
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___U3CaddedU3Ek__BackingField_0;
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___U3CupdatedU3Ek__BackingField_1;
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___U3CremovedU3Ek__BackingField_2;
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SerializableGuid
struct SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidLow
	uint64_t ___m_GuidLow_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidHigh
	uint64_t ___m_GuidHigh_2;

public:
	inline static int32_t get_offset_of_m_GuidLow_1() { return static_cast<int32_t>(offsetof(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC, ___m_GuidLow_1)); }
	inline uint64_t get_m_GuidLow_1() const { return ___m_GuidLow_1; }
	inline uint64_t* get_address_of_m_GuidLow_1() { return &___m_GuidLow_1; }
	inline void set_m_GuidLow_1(uint64_t value)
	{
		___m_GuidLow_1 = value;
	}

	inline static int32_t get_offset_of_m_GuidHigh_2() { return static_cast<int32_t>(offsetof(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC, ___m_GuidHigh_2)); }
	inline uint64_t get_m_GuidHigh_2() const { return ___m_GuidHigh_2; }
	inline uint64_t* get_address_of_m_GuidHigh_2() { return &___m_GuidHigh_2; }
	inline void set_m_GuidHigh_2(uint64_t value)
	{
		___m_GuidHigh_2 = value;
	}
};

struct SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.SerializableGuid::k_Empty
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___k_Empty_0;

public:
	inline static int32_t get_offset_of_k_Empty_0() { return static_cast<int32_t>(offsetof(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC_StaticFields, ___k_Empty_0)); }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  get_k_Empty_0() const { return ___k_Empty_0; }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC * get_address_of_k_Empty_0() { return &___k_Empty_0; }
	inline void set_k_Empty_0(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  value)
	{
		___k_Empty_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_1 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// UnityEngine.XR.ARFoundation.ARSessionState
struct ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.ARSessionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.Studio.Bus
struct Bus_t9C95DD5AFC1D463568500C31E5A5F883FD3CA75F 
{
public:
	// System.IntPtr FMOD.Studio.Bus::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(Bus_t9C95DD5AFC1D463568500C31E5A5F883FD3CA75F, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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

// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// FMOD.RESULT
struct RESULT_tA266F07EE553FBA39F31FBC2F1F424CD44ED3D21 
{
public:
	// System.Int32 FMOD.RESULT::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RESULT_tA266F07EE553FBA39F31FBC2F1F424CD44ED3D21, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.Studio.STOP_MODE
struct STOP_MODE_t0D345A0029CF35F2BB418BB366FBE26A3ED965D5 
{
public:
	// System.Int32 FMOD.Studio.STOP_MODE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(STOP_MODE_t0D345A0029CF35F2BB418BB366FBE26A3ED965D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SessionAvailability
struct SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARFoundation.TrackingMode
struct TrackingMode_t494215013DD008CD55735FEBB426C0F188B72646 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.TrackingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingMode_t494215013DD008CD55735FEBB426C0F188B72646, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467 
{
public:
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedGuid
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedGuid_0;
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedTextureGuid
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedTextureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SpecifySize
	bool ___m_SpecifySize_3;
	// System.String UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Name
	String_t* ___m_Name_4;
	// UnityEngine.Texture2D UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Texture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Texture_5;

public:
	inline static int32_t get_offset_of_m_SerializedGuid_0() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_SerializedGuid_0)); }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  get_m_SerializedGuid_0() const { return ___m_SerializedGuid_0; }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC * get_address_of_m_SerializedGuid_0() { return &___m_SerializedGuid_0; }
	inline void set_m_SerializedGuid_0(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  value)
	{
		___m_SerializedGuid_0 = value;
	}

	inline static int32_t get_offset_of_m_SerializedTextureGuid_1() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_SerializedTextureGuid_1)); }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  get_m_SerializedTextureGuid_1() const { return ___m_SerializedTextureGuid_1; }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC * get_address_of_m_SerializedTextureGuid_1() { return &___m_SerializedTextureGuid_1; }
	inline void set_m_SerializedTextureGuid_1(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  value)
	{
		___m_SerializedTextureGuid_1 = value;
	}

	inline static int32_t get_offset_of_m_Size_2() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_Size_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_2() const { return ___m_Size_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_2() { return &___m_Size_2; }
	inline void set_m_Size_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_2 = value;
	}

	inline static int32_t get_offset_of_m_SpecifySize_3() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_SpecifySize_3)); }
	inline bool get_m_SpecifySize_3() const { return ___m_SpecifySize_3; }
	inline bool* get_address_of_m_SpecifySize_3() { return &___m_SpecifySize_3; }
	inline void set_m_SpecifySize_3(bool value)
	{
		___m_SpecifySize_3 = value;
	}

	inline static int32_t get_offset_of_m_Name_4() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_Name_4)); }
	inline String_t* get_m_Name_4() const { return ___m_Name_4; }
	inline String_t** get_address_of_m_Name_4() { return &___m_Name_4; }
	inline void set_m_Name_4(String_t* value)
	{
		___m_Name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Texture_5() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_Texture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_Texture_5() const { return ___m_Texture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_Texture_5() { return &___m_Texture_5; }
	inline void set_m_Texture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_Texture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467_marshaled_pinvoke
{
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedGuid_0;
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedTextureGuid_1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	char* ___m_Name_4;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Texture_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467_marshaled_com
{
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedGuid_0;
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedTextureGuid_1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	Il2CppChar* ___m_Name_4;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Texture_5;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t  ___m_SourceImageId_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_5;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_6;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_SourceImageId_2() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_SourceImageId_2)); }
	inline Guid_t  get_m_SourceImageId_2() const { return ___m_SourceImageId_2; }
	inline Guid_t * get_address_of_m_SourceImageId_2() { return &___m_SourceImageId_2; }
	inline void set_m_SourceImageId_2(Guid_t  value)
	{
		___m_SourceImageId_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Pose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Size_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_5() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_TrackingState_5)); }
	inline int32_t get_m_TrackingState_5() const { return ___m_TrackingState_5; }
	inline int32_t* get_address_of_m_TrackingState_5() { return &___m_TrackingState_5; }
	inline void set_m_TrackingState_5(int32_t value)
	{
		___m_TrackingState_5 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_6() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_NativePtr_6)); }
	inline intptr_t get_m_NativePtr_6() const { return ___m_NativePtr_6; }
	inline intptr_t* get_address_of_m_NativePtr_6() { return &___m_NativePtr_6; }
	inline void set_m_NativePtr_6(intptr_t value)
	{
		___m_NativePtr_6 = value;
	}
};

struct XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRTrackedImage UnityEngine.XR.ARSubsystems.XRTrackedImage::s_Default
	XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_StaticFields, ___s_Default_0)); }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  get_s_Default_0() const { return ___s_Default_0; }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  value)
	{
		___s_Default_0 = value;
	}
};


// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>
struct Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7C1FB63AA7729DFE7395F05FEA49B5C2A2F8D750  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t7C1FB63AA7729DFE7395F05FEA49B5C2A2F8D750, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_t7C1FB63AA7729DFE7395F05FEA49B5C2A2F8D750_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t179969632C4CD7B25BEBAA7DA12BA4C8F82F69F2 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t19D4B5E8CD4DAF90FBAC8A83E6F7E9C0939C7BE0 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t7C1FB63AA7729DFE7395F05FEA49B5C2A2F8D750_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t179969632C4CD7B25BEBAA7DA12BA4C8F82F69F2 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t179969632C4CD7B25BEBAA7DA12BA4C8F82F69F2 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t179969632C4CD7B25BEBAA7DA12BA4C8F82F69F2 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t7C1FB63AA7729DFE7395F05FEA49B5C2A2F8D750_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t19D4B5E8CD4DAF90FBAC8A83E6F7E9C0939C7BE0 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t19D4B5E8CD4DAF90FBAC8A83E6F7E9C0939C7BE0 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t19D4B5E8CD4DAF90FBAC8A83E6F7E9C0939C7BE0 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// DisableScreenSleeping
struct DisableScreenSleeping_t721C4DDFE6A41229AABD432937B146D77CED2420  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// FindClosest
struct FindClosest_t502181BF1D570545238207A41095AF8DCF41E819  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ImageTracking
struct ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] ImageTracking::placeablePrefabs
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___placeablePrefabs_4;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> ImageTracking::spawnedPrefabs
	Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * ___spawnedPrefabs_5;
	// UnityEngine.XR.ARFoundation.ARTrackedImageManager ImageTracking::trackedImageManager
	ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 * ___trackedImageManager_6;

public:
	inline static int32_t get_offset_of_placeablePrefabs_4() { return static_cast<int32_t>(offsetof(ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80, ___placeablePrefabs_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_placeablePrefabs_4() const { return ___placeablePrefabs_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_placeablePrefabs_4() { return &___placeablePrefabs_4; }
	inline void set_placeablePrefabs_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___placeablePrefabs_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placeablePrefabs_4), (void*)value);
	}

	inline static int32_t get_offset_of_spawnedPrefabs_5() { return static_cast<int32_t>(offsetof(ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80, ___spawnedPrefabs_5)); }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * get_spawnedPrefabs_5() const { return ___spawnedPrefabs_5; }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C ** get_address_of_spawnedPrefabs_5() { return &___spawnedPrefabs_5; }
	inline void set_spawnedPrefabs_5(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * value)
	{
		___spawnedPrefabs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnedPrefabs_5), (void*)value);
	}

	inline static int32_t get_offset_of_trackedImageManager_6() { return static_cast<int32_t>(offsetof(ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80, ___trackedImageManager_6)); }
	inline ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 * get_trackedImageManager_6() const { return ___trackedImageManager_6; }
	inline ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 ** get_address_of_trackedImageManager_6() { return &___trackedImageManager_6; }
	inline void set_trackedImageManager_6(ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 * value)
	{
		___trackedImageManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackedImageManager_6), (void*)value);
	}
};


// MakePostcard
struct MakePostcard_t663BEC5BFEE2931A863F54F589A34FBDE658FCFF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String MakePostcard::PostcardName
	String_t* ___PostcardName_4;
	// System.String MakePostcard::PostcardDescription
	String_t* ___PostcardDescription_5;
	// System.String MakePostcard::PostcardLink
	String_t* ___PostcardLink_6;

public:
	inline static int32_t get_offset_of_PostcardName_4() { return static_cast<int32_t>(offsetof(MakePostcard_t663BEC5BFEE2931A863F54F589A34FBDE658FCFF, ___PostcardName_4)); }
	inline String_t* get_PostcardName_4() const { return ___PostcardName_4; }
	inline String_t** get_address_of_PostcardName_4() { return &___PostcardName_4; }
	inline void set_PostcardName_4(String_t* value)
	{
		___PostcardName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PostcardName_4), (void*)value);
	}

	inline static int32_t get_offset_of_PostcardDescription_5() { return static_cast<int32_t>(offsetof(MakePostcard_t663BEC5BFEE2931A863F54F589A34FBDE658FCFF, ___PostcardDescription_5)); }
	inline String_t* get_PostcardDescription_5() const { return ___PostcardDescription_5; }
	inline String_t** get_address_of_PostcardDescription_5() { return &___PostcardDescription_5; }
	inline void set_PostcardDescription_5(String_t* value)
	{
		___PostcardDescription_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PostcardDescription_5), (void*)value);
	}

	inline static int32_t get_offset_of_PostcardLink_6() { return static_cast<int32_t>(offsetof(MakePostcard_t663BEC5BFEE2931A863F54F589A34FBDE658FCFF, ___PostcardLink_6)); }
	inline String_t* get_PostcardLink_6() const { return ___PostcardLink_6; }
	inline String_t** get_address_of_PostcardLink_6() { return &___PostcardLink_6; }
	inline void set_PostcardLink_6(String_t* value)
	{
		___PostcardLink_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PostcardLink_6), (void*)value);
	}
};


// MenuControl
struct MenuControl_tD6B61EA950F8DF6E5A76C458AAA2E71D25654778  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SceneManagement.Scene MenuControl::activeScene
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___activeScene_4;
	// System.String MenuControl::sceneName
	String_t* ___sceneName_5;
	// FMOD.Studio.Bus MenuControl::masterBus
	Bus_t9C95DD5AFC1D463568500C31E5A5F883FD3CA75F  ___masterBus_6;
	// UnityEngine.GameObject[] MenuControl::objects
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___objects_7;
	// UnityEngine.GameObject[] MenuControl::audioInstances
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___audioInstances_8;

public:
	inline static int32_t get_offset_of_activeScene_4() { return static_cast<int32_t>(offsetof(MenuControl_tD6B61EA950F8DF6E5A76C458AAA2E71D25654778, ___activeScene_4)); }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  get_activeScene_4() const { return ___activeScene_4; }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * get_address_of_activeScene_4() { return &___activeScene_4; }
	inline void set_activeScene_4(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  value)
	{
		___activeScene_4 = value;
	}

	inline static int32_t get_offset_of_sceneName_5() { return static_cast<int32_t>(offsetof(MenuControl_tD6B61EA950F8DF6E5A76C458AAA2E71D25654778, ___sceneName_5)); }
	inline String_t* get_sceneName_5() const { return ___sceneName_5; }
	inline String_t** get_address_of_sceneName_5() { return &___sceneName_5; }
	inline void set_sceneName_5(String_t* value)
	{
		___sceneName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_5), (void*)value);
	}

	inline static int32_t get_offset_of_masterBus_6() { return static_cast<int32_t>(offsetof(MenuControl_tD6B61EA950F8DF6E5A76C458AAA2E71D25654778, ___masterBus_6)); }
	inline Bus_t9C95DD5AFC1D463568500C31E5A5F883FD3CA75F  get_masterBus_6() const { return ___masterBus_6; }
	inline Bus_t9C95DD5AFC1D463568500C31E5A5F883FD3CA75F * get_address_of_masterBus_6() { return &___masterBus_6; }
	inline void set_masterBus_6(Bus_t9C95DD5AFC1D463568500C31E5A5F883FD3CA75F  value)
	{
		___masterBus_6 = value;
	}

	inline static int32_t get_offset_of_objects_7() { return static_cast<int32_t>(offsetof(MenuControl_tD6B61EA950F8DF6E5A76C458AAA2E71D25654778, ___objects_7)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_objects_7() const { return ___objects_7; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_objects_7() { return &___objects_7; }
	inline void set_objects_7(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___objects_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objects_7), (void*)value);
	}

	inline static int32_t get_offset_of_audioInstances_8() { return static_cast<int32_t>(offsetof(MenuControl_tD6B61EA950F8DF6E5A76C458AAA2E71D25654778, ___audioInstances_8)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_audioInstances_8() const { return ___audioInstances_8; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_audioInstances_8() { return &___audioInstances_8; }
	inline void set_audioInstances_8(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___audioInstances_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioInstances_8), (void*)value);
	}
};


// TrackingState
struct TrackingState_tAA20CD18FC0884B91A2406448CC90080E8CDEFBD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.ARFoundation.ARSession TrackingState::m_Session
	ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * ___m_Session_4;
	// UnityEngine.UI.Text TrackingState::m_Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_Text_5;

public:
	inline static int32_t get_offset_of_m_Session_4() { return static_cast<int32_t>(offsetof(TrackingState_tAA20CD18FC0884B91A2406448CC90080E8CDEFBD, ___m_Session_4)); }
	inline ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * get_m_Session_4() const { return ___m_Session_4; }
	inline ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B ** get_address_of_m_Session_4() { return &___m_Session_4; }
	inline void set_m_Session_4(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * value)
	{
		___m_Session_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Session_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_5() { return static_cast<int32_t>(offsetof(TrackingState_tAA20CD18FC0884B91A2406448CC90080E8CDEFBD, ___m_Text_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_Text_5() const { return ___m_Text_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_Text_5() { return &___m_Text_5; }
	inline void set_m_Text_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_Text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_5), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A  : public SubsystemLifecycleManager_3_t7C1FB63AA7729DFE7395F05FEA49B5C2A2F8D750
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_tD95D4B180F0B4EEF3668344392936E58ECF7069E * ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_tD95D4B180F0B4EEF3668344392936E58ECF7069E * ___m_PendingAdds_10;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A, ___U3CsessionOriginU3Ek__BackingField_8)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_U3CsessionOriginU3Ek__BackingField_8() const { return ___U3CsessionOriginU3Ek__BackingField_8; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_U3CsessionOriginU3Ek__BackingField_8() { return &___U3CsessionOriginU3Ek__BackingField_8; }
	inline void set_U3CsessionOriginU3Ek__BackingField_8(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___U3CsessionOriginU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A, ___m_Trackables_9)); }
	inline Dictionary_2_tD95D4B180F0B4EEF3668344392936E58ECF7069E * get_m_Trackables_9() const { return ___m_Trackables_9; }
	inline Dictionary_2_tD95D4B180F0B4EEF3668344392936E58ECF7069E ** get_address_of_m_Trackables_9() { return &___m_Trackables_9; }
	inline void set_m_Trackables_9(Dictionary_2_tD95D4B180F0B4EEF3668344392936E58ECF7069E * value)
	{
		___m_Trackables_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A, ___m_PendingAdds_10)); }
	inline Dictionary_2_tD95D4B180F0B4EEF3668344392936E58ECF7069E * get_m_PendingAdds_10() const { return ___m_PendingAdds_10; }
	inline Dictionary_2_tD95D4B180F0B4EEF3668344392936E58ECF7069E ** get_address_of_m_PendingAdds_10() { return &___m_PendingAdds_10; }
	inline void set_m_PendingAdds_10(Dictionary_2_tD95D4B180F0B4EEF3668344392936E58ECF7069E * value)
	{
		___m_PendingAdds_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_10), (void*)value);
	}
};

struct ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A_StaticFields
{
public:
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A * ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___s_Removed_13;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A_StaticFields, ___U3CinstanceU3Ek__BackingField_7)); }
	inline ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A * get_U3CinstanceU3Ek__BackingField_7() const { return ___U3CinstanceU3Ek__BackingField_7; }
	inline ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A ** get_address_of_U3CinstanceU3Ek__BackingField_7() { return &___U3CinstanceU3Ek__BackingField_7; }
	inline void set_U3CinstanceU3Ek__BackingField_7(ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A * value)
	{
		___U3CinstanceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Added_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A_StaticFields, ___s_Added_11)); }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * get_s_Added_11() const { return ___s_Added_11; }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F ** get_address_of_s_Added_11() { return &___s_Added_11; }
	inline void set_s_Added_11(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * value)
	{
		___s_Added_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A_StaticFields, ___s_Updated_12)); }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * get_s_Updated_12() const { return ___s_Updated_12; }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F ** get_address_of_s_Updated_12() { return &___s_Updated_12; }
	inline void set_s_Updated_12(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * value)
	{
		___s_Updated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_13() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A_StaticFields, ___s_Removed_13)); }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * get_s_Removed_13() const { return ___s_Removed_13; }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F ** get_address_of_s_Removed_13() { return &___s_Removed_13; }
	inline void set_s_Removed_13(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * value)
	{
		___s_Removed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_13), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackable_2_tBE8960CB1D0030EBBEED67D06F8B1ADB69EB3CB1  : public ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_tBE8960CB1D0030EBBEED67D06F8B1ADB69EB3CB1, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_tBE8960CB1D0030EBBEED67D06F8B1ADB69EB3CB1, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_tBE8960CB1D0030EBBEED67D06F8B1ADB69EB3CB1, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B  : public SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;

public:
	inline static int32_t get_offset_of_m_AttemptUpdate_7() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_AttemptUpdate_7)); }
	inline bool get_m_AttemptUpdate_7() const { return ___m_AttemptUpdate_7; }
	inline bool* get_address_of_m_AttemptUpdate_7() { return &___m_AttemptUpdate_7; }
	inline void set_m_AttemptUpdate_7(bool value)
	{
		___m_AttemptUpdate_7 = value;
	}

	inline static int32_t get_offset_of_m_MatchFrameRate_8() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_MatchFrameRate_8)); }
	inline bool get_m_MatchFrameRate_8() const { return ___m_MatchFrameRate_8; }
	inline bool* get_address_of_m_MatchFrameRate_8() { return &___m_MatchFrameRate_8; }
	inline void set_m_MatchFrameRate_8(bool value)
	{
		___m_MatchFrameRate_8 = value;
	}

	inline static int32_t get_offset_of_m_TrackingMode_9() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_TrackingMode_9)); }
	inline int32_t get_m_TrackingMode_9() const { return ___m_TrackingMode_9; }
	inline int32_t* get_address_of_m_TrackingMode_9() { return &___m_TrackingMode_9; }
	inline void set_m_TrackingMode_9(int32_t value)
	{
		___m_TrackingMode_9 = value;
	}
};

struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields
{
public:
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_11;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_12;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_13;

public:
	inline static int32_t get_offset_of_stateChanged_10() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___stateChanged_10)); }
	inline Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * get_stateChanged_10() const { return ___stateChanged_10; }
	inline Action_1_t5DF84322FFE12A24465E48164961CD724D109521 ** get_address_of_stateChanged_10() { return &___stateChanged_10; }
	inline void set_stateChanged_10(Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * value)
	{
		___stateChanged_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateChanged_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_State_11() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_State_11)); }
	inline int32_t get_s_State_11() const { return ___s_State_11; }
	inline int32_t* get_address_of_s_State_11() { return &___s_State_11; }
	inline void set_s_State_11(int32_t value)
	{
		___s_State_11 = value;
	}

	inline static int32_t get_offset_of_s_NotTrackingReason_12() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_NotTrackingReason_12)); }
	inline int32_t get_s_NotTrackingReason_12() const { return ___s_NotTrackingReason_12; }
	inline int32_t* get_address_of_s_NotTrackingReason_12() { return &___s_NotTrackingReason_12; }
	inline void set_s_NotTrackingReason_12(int32_t value)
	{
		___s_NotTrackingReason_12 = value;
	}

	inline static int32_t get_offset_of_s_Availability_13() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_Availability_13)); }
	inline int32_t get_s_Availability_13() const { return ___s_Availability_13; }
	inline int32_t* get_address_of_s_Availability_13() { return &___s_Availability_13; }
	inline void set_s_Availability_13(int32_t value)
	{
		___s_Availability_13 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackedImage
struct ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7  : public ARTrackable_2_tBE8960CB1D0030EBBEED67D06F8B1ADB69EB3CB1
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferenceImage UnityEngine.XR.ARFoundation.ARTrackedImage::<referenceImage>k__BackingField
	XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  ___U3CreferenceImageU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CreferenceImageU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7, ___U3CreferenceImageU3Ek__BackingField_7)); }
	inline XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  get_U3CreferenceImageU3Ek__BackingField_7() const { return ___U3CreferenceImageU3Ek__BackingField_7; }
	inline XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467 * get_address_of_U3CreferenceImageU3Ek__BackingField_7() { return &___U3CreferenceImageU3Ek__BackingField_7; }
	inline void set_U3CreferenceImageU3Ek__BackingField_7(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  value)
	{
		___U3CreferenceImageU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CreferenceImageU3Ek__BackingField_7))->___m_Name_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CreferenceImageU3Ek__BackingField_7))->___m_Texture_5), (void*)NULL);
		#endif
	}
};


// UnityEngine.XR.ARFoundation.ARTrackedImageManager
struct ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2  : public ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_SerializedLibrary
	XRReferenceImageLibrary_tC415743C1DDCE2331D5B0F159B2A1D72A70C44B2 * ___m_SerializedLibrary_14;
	// System.Int32 UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_MaxNumberOfMovingImages
	int32_t ___m_MaxNumberOfMovingImages_15;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_TrackedImagePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_TrackedImagePrefab_16;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs> UnityEngine.XR.ARFoundation.ARTrackedImageManager::trackedImagesChanged
	Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 * ___trackedImagesChanged_17;
	// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage> UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_ReferenceImages
	Dictionary_2_t1D971BA151CCF2A891990C13C7561FEC253BC7CF * ___m_ReferenceImages_18;

public:
	inline static int32_t get_offset_of_m_SerializedLibrary_14() { return static_cast<int32_t>(offsetof(ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2, ___m_SerializedLibrary_14)); }
	inline XRReferenceImageLibrary_tC415743C1DDCE2331D5B0F159B2A1D72A70C44B2 * get_m_SerializedLibrary_14() const { return ___m_SerializedLibrary_14; }
	inline XRReferenceImageLibrary_tC415743C1DDCE2331D5B0F159B2A1D72A70C44B2 ** get_address_of_m_SerializedLibrary_14() { return &___m_SerializedLibrary_14; }
	inline void set_m_SerializedLibrary_14(XRReferenceImageLibrary_tC415743C1DDCE2331D5B0F159B2A1D72A70C44B2 * value)
	{
		___m_SerializedLibrary_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SerializedLibrary_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaxNumberOfMovingImages_15() { return static_cast<int32_t>(offsetof(ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2, ___m_MaxNumberOfMovingImages_15)); }
	inline int32_t get_m_MaxNumberOfMovingImages_15() const { return ___m_MaxNumberOfMovingImages_15; }
	inline int32_t* get_address_of_m_MaxNumberOfMovingImages_15() { return &___m_MaxNumberOfMovingImages_15; }
	inline void set_m_MaxNumberOfMovingImages_15(int32_t value)
	{
		___m_MaxNumberOfMovingImages_15 = value;
	}

	inline static int32_t get_offset_of_m_TrackedImagePrefab_16() { return static_cast<int32_t>(offsetof(ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2, ___m_TrackedImagePrefab_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_TrackedImagePrefab_16() const { return ___m_TrackedImagePrefab_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_TrackedImagePrefab_16() { return &___m_TrackedImagePrefab_16; }
	inline void set_m_TrackedImagePrefab_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_TrackedImagePrefab_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedImagePrefab_16), (void*)value);
	}

	inline static int32_t get_offset_of_trackedImagesChanged_17() { return static_cast<int32_t>(offsetof(ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2, ___trackedImagesChanged_17)); }
	inline Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 * get_trackedImagesChanged_17() const { return ___trackedImagesChanged_17; }
	inline Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 ** get_address_of_trackedImagesChanged_17() { return &___trackedImagesChanged_17; }
	inline void set_trackedImagesChanged_17(Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 * value)
	{
		___trackedImagesChanged_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackedImagesChanged_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_ReferenceImages_18() { return static_cast<int32_t>(offsetof(ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2, ___m_ReferenceImages_18)); }
	inline Dictionary_2_t1D971BA151CCF2A891990C13C7561FEC253BC7CF * get_m_ReferenceImages_18() const { return ___m_ReferenceImages_18; }
	inline Dictionary_2_t1D971BA151CCF2A891990C13C7561FEC253BC7CF ** get_address_of_m_ReferenceImages_18() { return &___m_ReferenceImages_18; }
	inline void set_m_ReferenceImages_18(Dictionary_2_t1D971BA151CCF2A891990C13C7561FEC253BC7CF * value)
	{
		___m_ReferenceImages_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReferenceImages_18), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Enemy[]
struct EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * m_Items[1];

public:
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m478435EC913232FA753676196AF119F5001564B3_gshared (Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * Dictionary_2_get_Values_mC8EC343FADAE6B9CB93639D7FBCDB19ACD807DB5_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2  ValueCollection_GetEnumerator_m401C0FF4E5F0194244B19D7B9EF4B173FB7E88C3_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m5EAB60888D4E661A01C7F32AD890D785F8B6225B_gshared_inline (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mAEC22D730EB290F4405C47EE9F330B3CD4E2DC68_gshared (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m20B0D06631B9715D2C26F9F0D0665BF0092FF7A6_gshared (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_mE9A766E696E76AC77EAADB4CA6412454577FCBB3 (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void FindClosest::FindClosestEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindClosest_FindClosestEnemy_m961EDEED3E1B3BE41F50E3151EED68F5087332C3 (FindClosest_t502181BF1D570545238207A41095AF8DCF41E819 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<Enemy>()
inline EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* Object_FindObjectsOfType_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mAAE5765443D834ABFAA93E538F961D94D5E8340B (const RuntimeMethod* method)
{
	return ((  EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<MakePostcard>()
inline MakePostcard_t663BEC5BFEE2931A863F54F589A34FBDE658FCFF * GameObject_GetComponent_TisMakePostcard_t663BEC5BFEE2931A863F54F589A34FBDE658FCFF_m0CB94270367E249EACBB0933F846EFF09FFEF5F6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MakePostcard_t663BEC5BFEE2931A863F54F589A34FBDE658FCFF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.XR.ARFoundation.ARTrackedImageManager>()
inline ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 * Object_FindObjectOfType_TisARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2_m660417E625FD0A66345200E2670A25DD17AA6A22 (const RuntimeMethod* method)
{
	return ((  ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Add(!0,!1)
inline void Dictionary_2_Add_m6D23729A58240291FAD0B2A484D107C5D06B8A78 (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * __this, String_t* ___key0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C *, String_t*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m478435EC913232FA753676196AF119F5001564B3 (Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m478435EC913232FA753676196AF119F5001564B3_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::add_trackedImagesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_add_trackedImagesChanged_m72C17C9ECEEFADD229EA80CD20ED1254336F3D76 (ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 * __this, Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::remove_trackedImagesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_remove_trackedImagesChanged_mE28AE7C3CD3F208C9891976125E8A0ED3641EDAF (ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 * __this, Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ARTrackedImagesChangedEventArgs_get_added_m0E81E3C161242C2508B90BCC73605F551AD53B4E_inline (ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>::GetEnumerator()
inline Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4  List_1_GetEnumerator_m364FE8EB7E663EEC71E574FD554BE600FD5A0D86 (List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4  (*) (List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::get_Current()
inline ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * Enumerator_get_Current_m8F54706BF35C304C986CE96C30148CF4911A9374_inline (Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 * __this, const RuntimeMethod* method)
{
	return ((  ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * (*) (Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void ImageTracking::UpdateImage(UnityEngine.XR.ARFoundation.ARTrackedImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_UpdateImage_m6EA667E6284B239584418E7AA908EE43D6403BE2 (ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80 * __this, ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * ___trackedImage0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::MoveNext()
inline bool Enumerator_MoveNext_m89255A16DAE894CEA174A88A674162B09592C8C7 (Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::Dispose()
inline void Enumerator_Dispose_m037FDB6FB9E61ECDB0D7F5AB2373A57E01AE500C (Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ARTrackedImagesChangedEventArgs_get_updated_mBEB295B97B6C25E4DC4447383F529C9E475E4041_inline (ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ARTrackedImagesChangedEventArgs_get_removed_mF4C9906743C7270B1AAD4B43E74CDB9CB5208E57_inline (ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.XRReferenceImage UnityEngine.XR.ARFoundation.ARTrackedImage::get_referenceImage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  ARTrackedImage_get_referenceImage_m6061DE2D46F8060065B64EF3860A0B0085B569E4_inline (ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRReferenceImage::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XRReferenceImage_get_name_mE8F3368C2587552333AB78EA72A02E5B73E355C7_inline (XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Item(!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Dictionary_2_get_Item_mC4E467FB6129C74774CC33C4A8E3B1F00A73E15A (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Values()
inline ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59 * Dictionary_2_get_Values_mCE27229BD2853EB5DD18823A44CB838915891AF5 (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59 * (*) (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C *, const RuntimeMethod*))Dictionary_2_get_Values_mC8EC343FADAE6B9CB93639D7FBCDB19ACD807DB5_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t9330D3C8A357E733C46B4B643654B35F1B83DC56  ValueCollection_GetEnumerator_m4F21A422DA7CBC55B4596D04154835F270B15957 (ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9330D3C8A357E733C46B4B643654B35F1B83DC56  (*) (ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59 *, const RuntimeMethod*))ValueCollection_GetEnumerator_m401C0FF4E5F0194244B19D7B9EF4B173FB7E88C3_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GameObject>::get_Current()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Enumerator_get_Current_mD4B9742F53CF6579D470CB4824D954C4590A53B0_inline (Enumerator_t9330D3C8A357E733C46B4B643654B35F1B83DC56 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Enumerator_t9330D3C8A357E733C46B4B643654B35F1B83DC56 *, const RuntimeMethod*))Enumerator_get_Current_m5EAB60888D4E661A01C7F32AD890D785F8B6225B_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_mCB1E114B7C949E2BE0521FAB1DCD32D836AA838E (Enumerator_t9330D3C8A357E733C46B4B643654B35F1B83DC56 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9330D3C8A357E733C46B4B643654B35F1B83DC56 *, const RuntimeMethod*))Enumerator_MoveNext_mAEC22D730EB290F4405C47EE9F330B3CD4E2DC68_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_mA7C5E1105681D1F3AEFE0B3D8F403231775794CC (Enumerator_t9330D3C8A357E733C46B4B643654B35F1B83DC56 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9330D3C8A357E733C46B4B643654B35F1B83DC56 *, const RuntimeMethod*))Enumerator_Dispose_m20B0D06631B9715D2C26F9F0D0665BF0092FF7A6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor()
inline void Dictionary_2__ctor_m627A706D7F24292D51368C749EB140EFE869376A (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// FMOD.Studio.Bus FMODUnity.RuntimeManager::GetBus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bus_t9C95DD5AFC1D463568500C31E5A5F883FD3CA75F  RuntimeManager_GetBus_mB8F90AC016A626B013743C59CCCAC9918ED79A2C (String_t* ___path0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.GameObject>()
inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* Object_FindObjectsOfType_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mA1495EFEECA7BF44DA43D9813F575C92968F0B4F (const RuntimeMethod* method)
{
	return ((  GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.Bus::stopAllEvents(FMOD.Studio.STOP_MODE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bus_stopAllEvents_mCCFEB7E04F9EC684896881E001E6B457FD5AE4BB (Bus_t9C95DD5AFC1D463568500C31E5A5F883FD3CA75F * __this, int32_t ___mode0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void TrackingState/<Start>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__3__ctor_m57C016DC249E940ECD9801A22FD4DE9E94442806 (U3CStartU3Ed__3_tF5669CDA1618D4AB9049200286394982CD0649A2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.XR.ARFoundation.ARSession::CheckAvailability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARSession_CheckAvailability_mCC906561CCCE269C11B69D2216C39120563F00FD (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
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
// System.Void DisableScreenSleeping::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableScreenSleeping_Start_mDA67E1D86AA25699A62152A1DDF9589BC7F5078A (DisableScreenSleeping_t721C4DDFE6A41229AABD432937B146D77CED2420 * __this, const RuntimeMethod* method)
{
	{
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_mE9A766E696E76AC77EAADB4CA6412454577FCBB3((-1), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DisableScreenSleeping::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableScreenSleeping_Update_m1F263B654B5CDA87F0A97AA9E4D85C007F646CEF (DisableScreenSleeping_t721C4DDFE6A41229AABD432937B146D77CED2420 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DisableScreenSleeping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableScreenSleeping__ctor_mF26D6447AB8BBBCEDE194DC7FA532C358FA38736 (DisableScreenSleeping_t721C4DDFE6A41229AABD432937B146D77CED2420 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m9FA35B427F2B9FDFD390E9812C2556775C62CB02 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_mA01EE7AF5D3B97687752E9D22BECB4A3E13F8FD2 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void FindClosest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindClosest_Start_mF954EF122834C0482B99F76BB64B0CBBF3BC9E3F (FindClosest_t502181BF1D570545238207A41095AF8DCF41E819 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void FindClosest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindClosest_Update_m04188BD3F62F95FF16814C7856DE8D9EDA763173 (FindClosest_t502181BF1D570545238207A41095AF8DCF41E819 * __this, const RuntimeMethod* method)
{
	{
		// FindClosestEnemy ();
		FindClosest_FindClosestEnemy_m961EDEED3E1B3BE41F50E3151EED68F5087332C3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FindClosest::FindClosestEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindClosest_FindClosestEnemy_m961EDEED3E1B3BE41F50E3151EED68F5087332C3 (FindClosest_t502181BF1D570545238207A41095AF8DCF41E819 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMakePostcard_t663BEC5BFEE2931A863F54F589A34FBDE658FCFF_m0CB94270367E249EACBB0933F846EFF09FFEF5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mAAE5765443D834ABFAA93E538F961D94D5E8340B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral116273CD5D8FA85B2B09F79802D1EDD0C11FFC66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27FD14CFE32223C443750A097C6E310D28F90764);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB15C3B1E5301A454B1F6EF3D4C8C3CA94F73285F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DB1B6CF792E1BF1AED62392910B83816D9FC52);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_4 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * V_5 = NULL;
	EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* V_6 = NULL;
	int32_t V_7 = 0;
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * V_8 = NULL;
	float V_9 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		// float distanceToClosestEnemy = Mathf.Infinity;
		V_0 = (std::numeric_limits<float>::infinity());
		// Enemy closestEnemy = null;
		V_1 = (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *)NULL;
		// Enemy[] allEnemies = GameObject.FindObjectsOfType<Enemy>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* L_0;
		L_0 = Object_FindObjectsOfType_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mAAE5765443D834ABFAA93E538F961D94D5E8340B(/*hidden argument*/Object_FindObjectsOfType_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mAAE5765443D834ABFAA93E538F961D94D5E8340B_RuntimeMethod_var);
		// GameObject arCamera = GameObject.Find("AR Camera");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralE3DB1B6CF792E1BF1AED62392910B83816D9FC52, /*hidden argument*/NULL);
		V_4 = L_1;
		// Text infoPanel = GameObject.Find("InfoText").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral27FD14CFE32223C443750A097C6E310D28F90764, /*hidden argument*/NULL);
		NullCheck(L_2);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3;
		L_3 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_2, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		V_5 = L_3;
		// foreach (Enemy currentEnemy in allEnemies) {
		V_6 = L_0;
		V_7 = 0;
		goto IL_0071;
	}

IL_0031:
	{
		// foreach (Enemy currentEnemy in allEnemies) {
		EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* L_4 = V_6;
		int32_t L_5 = V_7;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_8 = L_7;
		// float distanceToEnemy = (currentEnemy.transform.position - arCamera.transform.position).sqrMagnitude;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_8 = V_8;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_4;
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_10, L_13, /*hidden argument*/NULL);
		V_10 = L_14;
		float L_15;
		L_15 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_10), /*hidden argument*/NULL);
		V_9 = L_15;
		// if (distanceToEnemy < distanceToClosestEnemy) {
		float L_16 = V_9;
		float L_17 = V_0;
		if ((!(((float)L_16) < ((float)L_17))))
		{
			goto IL_006b;
		}
	}
	{
		// distanceToClosestEnemy = distanceToEnemy;
		float L_18 = V_9;
		V_0 = L_18;
		// closestEnemy = currentEnemy;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_19 = V_8;
		V_1 = L_19;
	}

IL_006b:
	{
		int32_t L_20 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0071:
	{
		// foreach (Enemy currentEnemy in allEnemies) {
		int32_t L_21 = V_7;
		EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* L_22 = V_6;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		// if (closestEnemy != null) {
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_23 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00c9;
		}
	}
	{
		// Debug.Log (closestEnemy.name);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_25 = V_1;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_26, /*hidden argument*/NULL);
		// postcardInfo = GameObject.Find(closestEnemy.name).GetComponent<MakePostcard>();
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_27 = V_1;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_27, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		MakePostcard_t663BEC5BFEE2931A863F54F589A34FBDE658FCFF * L_30;
		L_30 = GameObject_GetComponent_TisMakePostcard_t663BEC5BFEE2931A863F54F589A34FBDE658FCFF_m0CB94270367E249EACBB0933F846EFF09FFEF5F6(L_29, /*hidden argument*/GameObject_GetComponent_TisMakePostcard_t663BEC5BFEE2931A863F54F589A34FBDE658FCFF_m0CB94270367E249EACBB0933F846EFF09FFEF5F6_RuntimeMethod_var);
		// name = postcardInfo.PostcardName;
		MakePostcard_t663BEC5BFEE2931A863F54F589A34FBDE658FCFF * L_31 = L_30;
		NullCheck(L_31);
		String_t* L_32 = L_31->get_PostcardName_4();
		V_2 = L_32;
		// description = postcardInfo.PostcardDescription;
		MakePostcard_t663BEC5BFEE2931A863F54F589A34FBDE658FCFF * L_33 = L_31;
		NullCheck(L_33);
		String_t* L_34 = L_33->get_PostcardDescription_5();
		V_3 = L_34;
		// link = postcardInfo.PostcardLink;
		NullCheck(L_33);
		String_t* L_35 = L_33->get_PostcardLink_6();
		// infoPanel.text = "<b>" + name + "</b>" + "\n" + description;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_36 = V_5;
		String_t* L_37 = V_2;
		String_t* L_38 = V_3;
		String_t* L_39;
		L_39 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral116273CD5D8FA85B2B09F79802D1EDD0C11FFC66, L_37, _stringLiteralB15C3B1E5301A454B1F6EF3D4C8C3CA94F73285F, L_38, /*hidden argument*/NULL);
		NullCheck(L_36);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, L_39);
	}

IL_00c9:
	{
		// }
		return;
	}
}
// System.Void FindClosest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindClosest__ctor_m8C499E052A84E8DBDA319C9092E7E3E0684B631C (FindClosest_t502181BF1D570545238207A41095AF8DCF41E819 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ImageTracking::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_Awake_m7579999A12E8E8610888695D73FF7CF1071BE29E (ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m6D23729A58240291FAD0B2A484D107C5D06B8A78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2_m660417E625FD0A66345200E2670A25DD17AA6A22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	{
		// trackedImageManager = FindObjectOfType<ARTrackedImageManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 * L_0;
		L_0 = Object_FindObjectOfType_TisARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2_m660417E625FD0A66345200E2670A25DD17AA6A22(/*hidden argument*/Object_FindObjectOfType_TisARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2_m660417E625FD0A66345200E2670A25DD17AA6A22_RuntimeMethod_var);
		__this->set_trackedImageManager_6(L_0);
		// foreach(GameObject prefab in placeablePrefabs)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_placeablePrefabs_4();
		V_0 = L_1;
		V_1 = 0;
		goto IL_0054;
	}

IL_0016:
	{
		// foreach(GameObject prefab in placeablePrefabs)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// GameObject newPrefab = Instantiate(prefab, Vector3.zero, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_6, L_7, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		V_3 = L_9;
		// newPrefab.name = prefab.name;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_2;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_10, L_12, /*hidden argument*/NULL);
		// newPrefab.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_3;
		NullCheck(L_13);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)0, /*hidden argument*/NULL);
		// spawnedPrefabs.Add(prefab.name, newPrefab);
		Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * L_14 = __this->get_spawnedPrefabs_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = V_2;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_15, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_3;
		NullCheck(L_14);
		Dictionary_2_Add_m6D23729A58240291FAD0B2A484D107C5D06B8A78(L_14, L_16, L_17, /*hidden argument*/Dictionary_2_Add_m6D23729A58240291FAD0B2A484D107C5D06B8A78_RuntimeMethod_var);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0054:
	{
		// foreach(GameObject prefab in placeablePrefabs)
		int32_t L_19 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_20 = V_0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ImageTracking::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_OnEnable_mEB753A2871A1DF507D551E5A0682842D0504ED53 (ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m478435EC913232FA753676196AF119F5001564B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTracking_ImageChanged_mF71CEAFEC17C56EA45ED003E88C0A51609B8105A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trackedImageManager.trackedImagesChanged += ImageChanged;
		ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 * L_0 = __this->get_trackedImageManager_6();
		Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 * L_1 = (Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 *)il2cpp_codegen_object_new(Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032_il2cpp_TypeInfo_var);
		Action_1__ctor_m478435EC913232FA753676196AF119F5001564B3(L_1, __this, (intptr_t)((intptr_t)ImageTracking_ImageChanged_mF71CEAFEC17C56EA45ED003E88C0A51609B8105A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m478435EC913232FA753676196AF119F5001564B3_RuntimeMethod_var);
		NullCheck(L_0);
		ARTrackedImageManager_add_trackedImagesChanged_m72C17C9ECEEFADD229EA80CD20ED1254336F3D76(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ImageTracking::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_OnDisable_m640C232F4C65D8615D282F2923905C730937E07C (ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m478435EC913232FA753676196AF119F5001564B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTracking_ImageChanged_mF71CEAFEC17C56EA45ED003E88C0A51609B8105A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trackedImageManager.trackedImagesChanged -= ImageChanged;
		ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 * L_0 = __this->get_trackedImageManager_6();
		Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 * L_1 = (Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 *)il2cpp_codegen_object_new(Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032_il2cpp_TypeInfo_var);
		Action_1__ctor_m478435EC913232FA753676196AF119F5001564B3(L_1, __this, (intptr_t)((intptr_t)ImageTracking_ImageChanged_mF71CEAFEC17C56EA45ED003E88C0A51609B8105A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m478435EC913232FA753676196AF119F5001564B3_RuntimeMethod_var);
		NullCheck(L_0);
		ARTrackedImageManager_remove_trackedImagesChanged_mE28AE7C3CD3F208C9891976125E8A0ED3641EDAF(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ImageTracking::ImageChanged(UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_ImageChanged_mF71CEAFEC17C56EA45ED003E88C0A51609B8105A (ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80 * __this, ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C  ___eventArgs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m037FDB6FB9E61ECDB0D7F5AB2373A57E01AE500C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m89255A16DAE894CEA174A88A674162B09592C8C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8F54706BF35C304C986CE96C30148CF4911A9374_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m364FE8EB7E663EEC71E574FD554BE600FD5A0D86_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * V_1 = NULL;
	ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// foreach(ARTrackedImage trackedImage in eventArgs.added)
		List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * L_0;
		L_0 = ARTrackedImagesChangedEventArgs_get_added_m0E81E3C161242C2508B90BCC73605F551AD53B4E_inline((ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C *)(&___eventArgs0), /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4  L_1;
		L_1 = List_1_GetEnumerator_m364FE8EB7E663EEC71E574FD554BE600FD5A0D86(L_0, /*hidden argument*/List_1_GetEnumerator_m364FE8EB7E663EEC71E574FD554BE600FD5A0D86_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001e;
		}

IL_000f:
		{
			// foreach(ARTrackedImage trackedImage in eventArgs.added)
			ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * L_2;
			L_2 = Enumerator_get_Current_m8F54706BF35C304C986CE96C30148CF4911A9374_inline((Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m8F54706BF35C304C986CE96C30148CF4911A9374_RuntimeMethod_var);
			V_1 = L_2;
			// UpdateImage(trackedImage);
			ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * L_3 = V_1;
			ImageTracking_UpdateImage_m6EA667E6284B239584418E7AA908EE43D6403BE2(__this, L_3, /*hidden argument*/NULL);
		}

IL_001e:
		{
			// foreach(ARTrackedImage trackedImage in eventArgs.added)
			bool L_4;
			L_4 = Enumerator_MoveNext_m89255A16DAE894CEA174A88A674162B09592C8C7((Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m89255A16DAE894CEA174A88A674162B09592C8C7_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_000f;
			}
		}

IL_0027:
		{
			IL2CPP_LEAVE(0x37, FINALLY_0029);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m037FDB6FB9E61ECDB0D7F5AB2373A57E01AE500C((Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m037FDB6FB9E61ECDB0D7F5AB2373A57E01AE500C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(41)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x37, IL_0037)
	}

IL_0037:
	{
		// foreach(ARTrackedImage trackedImage in eventArgs.updated)
		List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * L_5;
		L_5 = ARTrackedImagesChangedEventArgs_get_updated_mBEB295B97B6C25E4DC4447383F529C9E475E4041_inline((ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C *)(&___eventArgs0), /*hidden argument*/NULL);
		NullCheck(L_5);
		Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4  L_6;
		L_6 = List_1_GetEnumerator_m364FE8EB7E663EEC71E574FD554BE600FD5A0D86(L_5, /*hidden argument*/List_1_GetEnumerator_m364FE8EB7E663EEC71E574FD554BE600FD5A0D86_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_0044:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0055;
		}

IL_0046:
		{
			// foreach(ARTrackedImage trackedImage in eventArgs.updated)
			ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * L_7;
			L_7 = Enumerator_get_Current_m8F54706BF35C304C986CE96C30148CF4911A9374_inline((Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m8F54706BF35C304C986CE96C30148CF4911A9374_RuntimeMethod_var);
			V_2 = L_7;
			// UpdateImage(trackedImage);
			ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * L_8 = V_2;
			ImageTracking_UpdateImage_m6EA667E6284B239584418E7AA908EE43D6403BE2(__this, L_8, /*hidden argument*/NULL);
		}

IL_0055:
		{
			// foreach(ARTrackedImage trackedImage in eventArgs.updated)
			bool L_9;
			L_9 = Enumerator_MoveNext_m89255A16DAE894CEA174A88A674162B09592C8C7((Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m89255A16DAE894CEA174A88A674162B09592C8C7_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0046;
			}
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0060);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m037FDB6FB9E61ECDB0D7F5AB2373A57E01AE500C((Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m037FDB6FB9E61ECDB0D7F5AB2373A57E01AE500C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(96)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
	}

IL_006e:
	{
		// foreach(ARTrackedImage trackedImage in eventArgs.removed)
		List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * L_10;
		L_10 = ARTrackedImagesChangedEventArgs_get_removed_mF4C9906743C7270B1AAD4B43E74CDB9CB5208E57_inline((ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C *)(&___eventArgs0), /*hidden argument*/NULL);
		NullCheck(L_10);
		Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4  L_11;
		L_11 = List_1_GetEnumerator_m364FE8EB7E663EEC71E574FD554BE600FD5A0D86(L_10, /*hidden argument*/List_1_GetEnumerator_m364FE8EB7E663EEC71E574FD554BE600FD5A0D86_RuntimeMethod_var);
		V_0 = L_11;
	}

IL_007b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0085;
		}

IL_007d:
		{
			// foreach(ARTrackedImage trackedImage in eventArgs.removed)
			ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * L_12;
			L_12 = Enumerator_get_Current_m8F54706BF35C304C986CE96C30148CF4911A9374_inline((Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m8F54706BF35C304C986CE96C30148CF4911A9374_RuntimeMethod_var);
		}

IL_0085:
		{
			// foreach(ARTrackedImage trackedImage in eventArgs.removed)
			bool L_13;
			L_13 = Enumerator_MoveNext_m89255A16DAE894CEA174A88A674162B09592C8C7((Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m89255A16DAE894CEA174A88A674162B09592C8C7_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_007d;
			}
		}

IL_008e:
		{
			IL2CPP_LEAVE(0x9E, FINALLY_0090);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0090;
	}

FINALLY_0090:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m037FDB6FB9E61ECDB0D7F5AB2373A57E01AE500C((Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m037FDB6FB9E61ECDB0D7F5AB2373A57E01AE500C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(144)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(144)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x9E, IL_009e)
	}

IL_009e:
	{
		// }
		return;
	}
}
// System.Void ImageTracking::UpdateImage(UnityEngine.XR.ARFoundation.ARTrackedImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_UpdateImage_m6EA667E6284B239584418E7AA908EE43D6403BE2 (ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80 * __this, ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * ___trackedImage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC4E467FB6129C74774CC33C4A8E3B1F00A73E15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mCE27229BD2853EB5DD18823A44CB838915891AF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA7C5E1105681D1F3AEFE0B3D8F403231775794CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCB1E114B7C949E2BE0521FAB1DCD32D836AA838E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD4B9742F53CF6579D470CB4824D954C4590A53B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m4F21A422DA7CBC55B4596D04154835F270B15957_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t9330D3C8A357E733C46B4B643654B35F1B83DC56  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// string name = trackedImage.referenceImage.name;
		ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * L_0 = ___trackedImage0;
		NullCheck(L_0);
		XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  L_1;
		L_1 = ARTrackedImage_get_referenceImage_m6061DE2D46F8060065B64EF3860A0B0085B569E4_inline(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		String_t* L_2;
		L_2 = XRReferenceImage_get_name_mE8F3368C2587552333AB78EA72A02E5B73E355C7_inline((XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467 *)(&V_2), /*hidden argument*/NULL);
		V_0 = L_2;
		// Vector3 position = trackedImage.transform.position;
		ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * L_3 = ___trackedImage0;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// GameObject prefab = spawnedPrefabs[name];
		Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * L_6 = __this->get_spawnedPrefabs_5();
		String_t* L_7 = V_0;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Dictionary_2_get_Item_mC4E467FB6129C74774CC33C4A8E3B1F00A73E15A(L_6, L_7, /*hidden argument*/Dictionary_2_get_Item_mC4E467FB6129C74774CC33C4A8E3B1F00A73E15A_RuntimeMethod_var);
		// prefab.transform.position = position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = L_8;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_1;
		NullCheck(L_10);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_11, /*hidden argument*/NULL);
		// prefab.SetActive(true);
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		// foreach(GameObject go in spawnedPrefabs.Values)
		Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * L_12 = __this->get_spawnedPrefabs_5();
		NullCheck(L_12);
		ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59 * L_13;
		L_13 = Dictionary_2_get_Values_mCE27229BD2853EB5DD18823A44CB838915891AF5(L_12, /*hidden argument*/Dictionary_2_get_Values_mCE27229BD2853EB5DD18823A44CB838915891AF5_RuntimeMethod_var);
		NullCheck(L_13);
		Enumerator_t9330D3C8A357E733C46B4B643654B35F1B83DC56  L_14;
		L_14 = ValueCollection_GetEnumerator_m4F21A422DA7CBC55B4596D04154835F270B15957(L_13, /*hidden argument*/ValueCollection_GetEnumerator_m4F21A422DA7CBC55B4596D04154835F270B15957_RuntimeMethod_var);
		V_3 = L_14;
	}

IL_004a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005f;
		}

IL_004c:
		{
			// foreach(GameObject go in spawnedPrefabs.Values)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
			L_15 = Enumerator_get_Current_mD4B9742F53CF6579D470CB4824D954C4590A53B0_inline((Enumerator_t9330D3C8A357E733C46B4B643654B35F1B83DC56 *)(&V_3), /*hidden argument*/Enumerator_get_Current_mD4B9742F53CF6579D470CB4824D954C4590A53B0_RuntimeMethod_var);
			// if(go.name != name) {
			NullCheck(L_15);
			String_t* L_16;
			L_16 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_15, /*hidden argument*/NULL);
			String_t* L_17 = V_0;
			bool L_18;
			L_18 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_16, L_17, /*hidden argument*/NULL);
		}

IL_005f:
		{
			// foreach(GameObject go in spawnedPrefabs.Values)
			bool L_19;
			L_19 = Enumerator_MoveNext_mCB1E114B7C949E2BE0521FAB1DCD32D836AA838E((Enumerator_t9330D3C8A357E733C46B4B643654B35F1B83DC56 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mCB1E114B7C949E2BE0521FAB1DCD32D836AA838E_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_004c;
			}
		}

IL_0068:
		{
			IL2CPP_LEAVE(0x78, FINALLY_006a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006a;
	}

FINALLY_006a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mA7C5E1105681D1F3AEFE0B3D8F403231775794CC((Enumerator_t9330D3C8A357E733C46B4B643654B35F1B83DC56 *)(&V_3), /*hidden argument*/Enumerator_Dispose_mA7C5E1105681D1F3AEFE0B3D8F403231775794CC_RuntimeMethod_var);
		IL2CPP_END_FINALLY(106)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(106)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x78, IL_0078)
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void ImageTracking::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking__ctor_m38B2704678FE908B59FA0336C39D8DBBA47EA1F2 (ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m627A706D7F24292D51368C749EB140EFE869376A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<string, GameObject> spawnedPrefabs = new Dictionary<string, GameObject>();
		Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * L_0 = (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C *)il2cpp_codegen_object_new(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m627A706D7F24292D51368C749EB140EFE869376A(L_0, /*hidden argument*/Dictionary_2__ctor_m627A706D7F24292D51368C749EB140EFE869376A_RuntimeMethod_var);
		__this->set_spawnedPrefabs_5(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MakePostcard::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MakePostcard_Start_m9CFAD0AA2BA96A8607EBF65D92280847B604878F (MakePostcard_t663BEC5BFEE2931A863F54F589A34FBDE658FCFF * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MakePostcard::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MakePostcard_Update_mE80927385F0C052709DC3D7DD363C42BE7E4B481 (MakePostcard_t663BEC5BFEE2931A863F54F589A34FBDE658FCFF * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MakePostcard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MakePostcard__ctor_mE7D49637F44B5773B79C978850FD5A31E7054741 (MakePostcard_t663BEC5BFEE2931A863F54F589A34FBDE658FCFF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MenuControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuControl_Start_m6EAD8C065DABD2EBBDF61DE842C9586F6D7AB8E6 (MenuControl_tD6B61EA950F8DF6E5A76C458AAA2E71D25654778 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mA1495EFEECA7BF44DA43D9813F575C92968F0B4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeManager_t87723E19BD688665EF5E4375DDA0AC4C1762F48A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A350421A6B211C96799ECB935A49263F4151989);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97F6A0D5A49A9E5B5967996FDDA9C89F1DB3C249);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeScene = SceneManager.GetActiveScene();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		__this->set_activeScene_4(L_0);
		// sceneName = activeScene.name;
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * L_1 = __this->get_address_of_activeScene_4();
		String_t* L_2;
		L_2 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)L_1, /*hidden argument*/NULL);
		__this->set_sceneName_5(L_2);
		// masterBus = FMODUnity.RuntimeManager.GetBus("Bus:/");
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeManager_t87723E19BD688665EF5E4375DDA0AC4C1762F48A_il2cpp_TypeInfo_var);
		Bus_t9C95DD5AFC1D463568500C31E5A5F883FD3CA75F  L_3;
		L_3 = RuntimeManager_GetBus_mB8F90AC016A626B013743C59CCCAC9918ED79A2C(_stringLiteral5A350421A6B211C96799ECB935A49263F4151989, /*hidden argument*/NULL);
		__this->set_masterBus_6(L_3);
		// objects = (FindObjectsOfType<GameObject>() as GameObject[]);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4;
		L_4 = Object_FindObjectsOfType_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mA1495EFEECA7BF44DA43D9813F575C92968F0B4F(/*hidden argument*/Object_FindObjectsOfType_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mA1495EFEECA7BF44DA43D9813F575C92968F0B4F_RuntimeMethod_var);
		__this->set_objects_7(L_4);
		// audioInstances = GameObject.FindGameObjectsWithTag("AudioInstance");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5;
		L_5 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral97F6A0D5A49A9E5B5967996FDDA9C89F1DB3C249, /*hidden argument*/NULL);
		__this->set_audioInstances_8(L_5);
		// }
		return;
	}
}
// System.Void MenuControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuControl_Update_mC9F17D162B8313983320471517C35AE914F5A59D (MenuControl_tD6B61EA950F8DF6E5A76C458AAA2E71D25654778 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MenuControl::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuControl_Play_m5EE93195576A6635BADA098D61B3224D84BA9543 (MenuControl_tD6B61EA950F8DF6E5A76C458AAA2E71D25654778 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFD6B8CE125A895141C64EC9E3F8A30B4AC588B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A59EABF0C51AF863757F81CFC978C0C90E24B3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (sceneName == "Intro") {
		String_t* L_0 = __this->get_sceneName_5();
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteralD7A59EABF0C51AF863757F81CFC978C0C90E24B3, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// SceneManager.LoadScene("ImageTracker");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralAFD6B8CE125A895141C64EC9E3F8A30B4AC588B4, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// if (sceneName == "ImageTracker") {
		String_t* L_2 = __this->get_sceneName_5();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralAFD6B8CE125A895141C64EC9E3F8A30B4AC588B4, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0065;
		}
	}
	{
		// for (int i = 0; i < audioInstances.Length; i++)
		V_0 = 0;
		goto IL_0043;
	}

IL_0032:
	{
		// Destroy(audioInstances[i]);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = __this->get_audioInstances_8();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_7, /*hidden argument*/NULL);
		// for (int i = 0; i < audioInstances.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = 0; i < audioInstances.Length; i++)
		int32_t L_9 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = __this->get_audioInstances_8();
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0032;
		}
	}
	{
		// masterBus.stopAllEvents(FMOD.Studio.STOP_MODE.ALLOWFADEOUT);
		Bus_t9C95DD5AFC1D463568500C31E5A5F883FD3CA75F * L_11 = __this->get_address_of_masterBus_6();
		int32_t L_12;
		L_12 = Bus_stopAllEvents_mCCFEB7E04F9EC684896881E001E6B457FD5AE4BB((Bus_t9C95DD5AFC1D463568500C31E5A5F883FD3CA75F *)L_11, 0, /*hidden argument*/NULL);
		// SceneManager.LoadScene("Intro");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralD7A59EABF0C51AF863757F81CFC978C0C90E24B3, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void MenuControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuControl__ctor_m41FDDED87EF02E950C6268EA0AD453CA34825398 (MenuControl_tD6B61EA950F8DF6E5A76C458AAA2E71D25654778 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TrackingState::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingState_Awake_m98CCC2FA02CC5EC82578845F06D65471B47FEEBD (TrackingState_tAA20CD18FC0884B91A2406448CC90080E8CDEFBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Session != null)
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_0 = __this->get_m_Session_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// m_Session.enabled = false;
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_2 = __this->get_m_Session_4();
		NullCheck(L_2);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)0, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// if (m_Text != null)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_m_Text_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// m_Text.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_m_Text_5();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TrackingState::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrackingState_Start_m4EADB8957B25128D4FDC306306051850276D1038 (TrackingState_tAA20CD18FC0884B91A2406448CC90080E8CDEFBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__3_tF5669CDA1618D4AB9049200286394982CD0649A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__3_tF5669CDA1618D4AB9049200286394982CD0649A2 * L_0 = (U3CStartU3Ed__3_tF5669CDA1618D4AB9049200286394982CD0649A2 *)il2cpp_codegen_object_new(U3CStartU3Ed__3_tF5669CDA1618D4AB9049200286394982CD0649A2_il2cpp_TypeInfo_var);
		U3CStartU3Ed__3__ctor_m57C016DC249E940ECD9801A22FD4DE9E94442806(L_0, 0, /*hidden argument*/NULL);
		U3CStartU3Ed__3_tF5669CDA1618D4AB9049200286394982CD0649A2 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void TrackingState::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingState_Update_mF0333B9EE0B1C5EB290049737CADFFF61DF2212B (TrackingState_tAA20CD18FC0884B91A2406448CC90080E8CDEFBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05F29CE2C3E06492FAFE36672D97EF781FABE332);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23AF701FF440280F9BDD61B514BB41F48690A8DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4772D75F86FF8033EF18BEB5A2555DE7B32A6367);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509C084586320A910444D73ACF5386F77869E8FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75DC5674555374787C274EE541661679A3633A2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76EEBE76F86A4AA251CB82FFE984B55CE979F8B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE26ADEBA1E2A48086FCB0B8D271B53D826E6CD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3B453E9F0C07BDDAE29F036F419A22466145753);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0B41CA0013533DCFC7C034949701DA4C558A039);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string text = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (m_Session == null)
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_0 = __this->get_m_Session_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// text = "ARSession not found on " + this.gameObject.name;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralC3B453E9F0C07BDDAE29F036F419A22466145753, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// }
		goto IL_0098;
	}

IL_002c:
	{
		// switch (ARSession.state)
		int32_t L_5;
		L_5 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		switch (L_6)
		{
			case 0:
			{
				goto IL_005a;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_006a;
			}
			case 3:
			{
				goto IL_0072;
			}
			case 4:
			{
				goto IL_007a;
			}
			case 5:
			{
				goto IL_0082;
			}
			case 6:
			{
				goto IL_008a;
			}
			case 7:
			{
				goto IL_0092;
			}
		}
	}
	{
		goto IL_0098;
	}

IL_005a:
	{
		// text = "Sorry, AR is not currently working on this device and we're not sure why.";
		V_0 = _stringLiteralD0B41CA0013533DCFC7C034949701DA4C558A039;
		// break;
		goto IL_0098;
	}

IL_0062:
	{
		// text = "Sorry, AR is not supported on this device.";
		V_0 = _stringLiteral509C084586320A910444D73ACF5386F77869E8FB;
		// break;
		goto IL_0098;
	}

IL_006a:
	{
		// text = "Checking the availability of AR on this device.";
		V_0 = _stringLiteral76EEBE76F86A4AA251CB82FFE984B55CE979F8B0;
		// break;
		goto IL_0098;
	}

IL_0072:
	{
		// text = "AR requires an additional install on this device.";
		V_0 = _stringLiteral05F29CE2C3E06492FAFE36672D97EF781FABE332;
		// break;
		goto IL_0098;
	}

IL_007a:
	{
		// text = "AR software is being installed";
		V_0 = _stringLiteralBE26ADEBA1E2A48086FCB0B8D271B53D826E6CD1;
		// break;
		goto IL_0098;
	}

IL_0082:
	{
		// text = "AR is supported and ready";
		V_0 = _stringLiteral75DC5674555374787C274EE541661679A3633A2A;
		// break;
		goto IL_0098;
	}

IL_008a:
	{
		// text = "Please do not obscure your device's camera and ensure area is well lit.";
		V_0 = _stringLiteral23AF701FF440280F9BDD61B514BB41F48690A8DA;
		// break;
		goto IL_0098;
	}

IL_0092:
	{
		// text = "Point your camera at your AR Sound Postcards to hear the exhibits.";
		V_0 = _stringLiteral4772D75F86FF8033EF18BEB5A2555DE7B32A6367;
	}

IL_0098:
	{
		// if (m_Text != null)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_m_Text_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00b2;
		}
	}
	{
		// m_Text.text = text;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_m_Text_5();
		String_t* L_10 = V_0;
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_10);
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void TrackingState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingState__ctor_m6359C53C8CF786D4DA5FC8869ED61272742ABBA3 (TrackingState_tAA20CD18FC0884B91A2406448CC90080E8CDEFBD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TrackingState/<Start>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__3__ctor_m57C016DC249E940ECD9801A22FD4DE9E94442806 (U3CStartU3Ed__3_tF5669CDA1618D4AB9049200286394982CD0649A2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TrackingState/<Start>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__3_System_IDisposable_Dispose_mE70C4379945C05E5D128FB55E63ED51A2567524C (U3CStartU3Ed__3_tF5669CDA1618D4AB9049200286394982CD0649A2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TrackingState/<Start>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__3_MoveNext_m1F1297DB06B5FAB2E18B994305973762B671B1A8 (U3CStartU3Ed__3_tF5669CDA1618D4AB9049200286394982CD0649A2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	TrackingState_tAA20CD18FC0884B91A2406448CC90080E8CDEFBD * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TrackingState_tAA20CD18FC0884B91A2406448CC90080E8CDEFBD * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if ((ARSession.state == ARSessionState.None) ||
		//     (ARSession.state == ARSessionState.CheckingAvailability))
		int32_t L_4;
		L_4 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_5;
		L_5 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0048;
		}
	}

IL_002d:
	{
		// yield return ARSession.CheckAvailability();
		RuntimeObject* L_6;
		L_6 = ARSession_CheckAvailability_mCC906561CCCE269C11B69D2216C39120563F00FD(/*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0041:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0048:
	{
		// if (ARSession.state == ARSessionState.Unsupported)
		int32_t L_7;
		L_7 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_005c;
		}
	}
	{
		// m_Session.enabled = true;
		TrackingState_tAA20CD18FC0884B91A2406448CC90080E8CDEFBD * L_8 = V_1;
		NullCheck(L_8);
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_9 = L_8->get_m_Session_4();
		NullCheck(L_9);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_9, (bool)1, /*hidden argument*/NULL);
	}

IL_005c:
	{
		// }
		return (bool)0;
	}
}
// System.Object TrackingState/<Start>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m07BE4678EF086AC2F8193921AFE507AE449083F2 (U3CStartU3Ed__3_tF5669CDA1618D4AB9049200286394982CD0649A2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TrackingState/<Start>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__3_System_Collections_IEnumerator_Reset_m8E7D19A65210DCE4B77F291C0736EF58E854BC4D (U3CStartU3Ed__3_tF5669CDA1618D4AB9049200286394982CD0649A2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__3_System_Collections_IEnumerator_Reset_m8E7D19A65210DCE4B77F291C0736EF58E854BC4D_RuntimeMethod_var)));
	}
}
// System.Object TrackingState/<Start>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__3_System_Collections_IEnumerator_get_Current_mE4CDFBB4133359E847660AF05B80588F1E5B4AFF (U3CStartU3Ed__3_tF5669CDA1618D4AB9049200286394982CD0649A2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ARTrackedImagesChangedEventArgs_get_added_m0E81E3C161242C2508B90BCC73605F551AD53B4E_inline (ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C * __this, const RuntimeMethod* method)
{
	{
		// public List<ARTrackedImage> added { get; private set; }
		List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * L_0 = __this->get_U3CaddedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ARTrackedImagesChangedEventArgs_get_updated_mBEB295B97B6C25E4DC4447383F529C9E475E4041_inline (ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C * __this, const RuntimeMethod* method)
{
	{
		// public List<ARTrackedImage> updated { get; private set; }
		List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * L_0 = __this->get_U3CupdatedU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ARTrackedImagesChangedEventArgs_get_removed_mF4C9906743C7270B1AAD4B43E74CDB9CB5208E57_inline (ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C * __this, const RuntimeMethod* method)
{
	{
		// public List<ARTrackedImage> removed { get; private set; }
		List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * L_0 = __this->get_U3CremovedU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  ARTrackedImage_get_referenceImage_m6061DE2D46F8060065B64EF3860A0B0085B569E4_inline (ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * __this, const RuntimeMethod* method)
{
	{
		// public XRReferenceImage referenceImage { get; internal set; }
		XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  L_0 = __this->get_U3CreferenceImageU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XRReferenceImage_get_name_mE8F3368C2587552333AB78EA72A02E5B73E355C7_inline (XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467 * __this, const RuntimeMethod* method)
{
	{
		// public string name => m_Name;
		String_t* L_0 = __this->get_m_Name_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => s_State;
		int32_t L_0 = ((ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_il2cpp_TypeInfo_var))->get_s_State_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m5EAB60888D4E661A01C7F32AD890D785F8B6225B_gshared_inline (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentValue_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
