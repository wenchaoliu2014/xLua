#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`2<System.IntPtr,System.Byte>
struct Action_2_t47DAFF10A3FC3F94C0C04F4CC97AA9C6F4A7880B;
// System.Action`2<System.IntPtr,System.Char>
struct Action_2_tB103A5B89C533616E7BAE3BF21268DCBF3B4B0E9;
// System.Action`2<System.IntPtr,System.Int16>
struct Action_2_tD7414809C0B101881ADA6D1AF72A2CFF3E6FFCBC;
// System.Action`2<System.IntPtr,System.Int32Enum>
struct Action_2_t9F54A6B2BACD03E76E99C3EE9E302C0EF9ADC069;
// System.Action`2<System.IntPtr,System.Object>
struct Action_2_t5A40AC088AB1ABA90B50A631CFDC1F9303EEE8C8;
// System.Action`2<System.IntPtr,System.SByte>
struct Action_2_tEE8B744C1570382AE5A07EF90BD35371A92A6ABD;
// System.Action`2<System.IntPtr,System.Single>
struct Action_2_t5F1D99DD5CF5EC863BC3EA841EB2089C653449F7;
// System.Action`2<System.IntPtr,System.UInt16>
struct Action_2_t0A1E2D4561A38844F417855AFC7CBF18E85D9312;
// System.Action`2<System.IntPtr,UnityEngine.Bounds>
struct Action_2_t27EAD6315F76BD644F93F64978C6EABEA42438F2;
// System.Action`2<System.IntPtr,UnityEngine.Color>
struct Action_2_t0C5870DB977491CE7293F07318380FF7E057AD43;
// System.Action`2<System.IntPtr,UnityEngine.Quaternion>
struct Action_2_t3D4CC218ED0628456909A6713D84D78B5D7FDAE9;
// System.Action`2<System.IntPtr,UnityEngine.Ray2D>
struct Action_2_tB0F6A41C750D318EB24116F6A024A227A01CD13F;
// System.Action`2<System.IntPtr,UnityEngine.Ray>
struct Action_2_tF0FBD665B5F9E08472DA4D98650743D5044D6E68;
// System.Action`2<System.IntPtr,UnityEngine.Vector2>
struct Action_2_t233200B21199895FBBCBB82D897D620F802281F7;
// System.Action`2<System.IntPtr,UnityEngine.Vector3>
struct Action_2_tE0955B102ADC5D3E46F3C328B88EF8B40CFE65B3;
// System.Action`2<System.IntPtr,UnityEngine.Vector4>
struct Action_2_tB62086CD34EEB19B5724471C57CC42C3B7BF3CE8;
// System.Action`2<System.IntPtr,XLuaTest.MyStruct>
struct Action_2_t5E5E60BF2750CAB791145987CC37987DC8CAA1B1;
// System.Action`2<System.IntPtr,XLuaTest.Pedding>
struct Action_2_t578CA6FF8AFCFB94EFCDC4B01AA893036190D50F;
// System.Action`2<System.IntPtr,XLuaTest.PushAsTableStruct>
struct Action_2_tAFAEFC7F0F8B3CB8A8E1F036B3F33B0283B3AD52;
// System.Action`3<System.IntPtr,System.Int32,System.Int32Enum>
struct Action_3_t56CDB294E28A405ACCBC1158BB8FF1615F1C37E0;
// System.Action`3<System.IntPtr,System.Int32,System.Object>
struct Action_3_tAC968214AD437FC0E87E269AE429783BE9D8C535;
// System.Action`3<System.IntPtr,System.Int32,UnityEngine.Bounds>
struct Action_3_t6182E07E06417E65CE24B630289316E3D1D6836E;
// System.Action`3<System.IntPtr,System.Int32,UnityEngine.Color>
struct Action_3_t0740C38E1582A75EE3330074884C2F4208BF551C;
// System.Action`3<System.IntPtr,System.Int32,UnityEngine.Quaternion>
struct Action_3_t22F9E084364A14EE229E12294036E35D21D8A0F6;
// System.Action`3<System.IntPtr,System.Int32,UnityEngine.Ray2D>
struct Action_3_t215960DC3656F52FACEA1836DC43C2FB808CDB3E;
// System.Action`3<System.IntPtr,System.Int32,UnityEngine.Ray>
struct Action_3_t4E6E89250D2B4BD33FADA252589ED4C9A1814489;
// System.Action`3<System.IntPtr,System.Int32,UnityEngine.Vector2>
struct Action_3_t88F5650816F3F8316496581E84FF8215FAC0D7F0;
// System.Action`3<System.IntPtr,System.Int32,UnityEngine.Vector3>
struct Action_3_t7C15729E8D25F204E5600DD58CB5C13AA09F0D77;
// System.Action`3<System.IntPtr,System.Int32,UnityEngine.Vector4>
struct Action_3_t246223420BE1031546149482564E0B8ECC791FA0;
// System.Action`3<System.IntPtr,System.Int32,XLuaTest.MyStruct>
struct Action_3_tA7F9F909F7344FE8616B5830B523C2FD7935C4E4;
// System.Action`3<System.IntPtr,System.Int32,XLuaTest.Pedding>
struct Action_3_tA24D2E42FEF24046BACE285F7BAE9A134D93C232;
// System.Action`3<System.IntPtr,System.Int32,XLuaTest.PushAsTableStruct>
struct Action_3_tE5BE52CCB50C09543DBAD024C9F9E8FD81058E4A;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Type,System.Delegate>
struct Dictionary_2_tFD7B82A4280C7CBF8A6107F86168530E1EF37225;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t7C4BBD98911741434BD5D2CC3B1FA31A32EF1819;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Func`3<System.IntPtr,System.Int32,System.Byte>
struct Func_3_t95B4F4601DFC140B1159CAD435897E6F06C5C015;
// System.Func`3<System.IntPtr,System.Int32,System.Char>
struct Func_3_tB0EB9B7DBE1A31CD3863EC23DD9FFF90C3A02B40;
// System.Func`3<System.IntPtr,System.Int32,System.Int16>
struct Func_3_tFCF18A0535245ACCCF4C876276BFE93721C1693F;
// System.Func`3<System.IntPtr,System.Int32,System.SByte>
struct Func_3_t28DA98256F75D877F4818AA5F430A34BE4168280;
// System.Func`3<System.IntPtr,System.Int32,System.Single>
struct Func_3_t2ACE6317709388584F1C618B2800A53ADF1B55F6;
// System.Func`3<System.IntPtr,System.Int32,System.UInt16>
struct Func_3_tB0F146295E114CBD8BD0C59DBAAC3459324DB447;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// XLua.DelegateBridge
struct DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8;
// XLua.DelegateBridge[]
struct DelegateBridgeU5BU5D_t398C78192C022FFC2DCD9C08101EF6F87B8B7AB5;
// XLua.LuaEnv
struct LuaEnv_t4CCC7DCC820EABA057CA9033595045544878BA36;
// XLua.ObjectTranslator/<>c__155`1<System.Object>
struct U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA;
// XLua.ObjectTranslator/<>c__157`1<System.Object>
struct U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22;
// XLua.ObjectTranslator/<>c__DisplayClass159_0`1<System.Int32Enum>
struct U3CU3Ec__DisplayClass159_0_1_t6BC500AED16F3B515D133892F73B27F06D03BE7B;
// XLua.ObjectTranslator/<>c__DisplayClass159_0`1<System.Object>
struct U3CU3Ec__DisplayClass159_0_1_tC5C39851A0FB7A22E0C730A0AD41139CC51DBC4B;
// XLua.ObjectTranslator/<>c__DisplayClass159_0`1<UnityEngine.Bounds>
struct U3CU3Ec__DisplayClass159_0_1_t92559D5E6A753E8253188EC2493431A739F95543;
// XLua.ObjectTranslator/<>c__DisplayClass159_0`1<UnityEngine.Color>
struct U3CU3Ec__DisplayClass159_0_1_t227DCCC68410156943096285F45422E520570BAF;
// XLua.ObjectTranslator/<>c__DisplayClass159_0`1<UnityEngine.Quaternion>
struct U3CU3Ec__DisplayClass159_0_1_t78363EB2A97BFB751551E79E125D08E2DA40DC5F;
// XLua.ObjectTranslator/<>c__DisplayClass159_0`1<UnityEngine.Ray2D>
struct U3CU3Ec__DisplayClass159_0_1_tB43828FB0F6D95D62DBF8CCD10A1C21410C7B5B6;
// XLua.ObjectTranslator/<>c__DisplayClass159_0`1<UnityEngine.Ray>
struct U3CU3Ec__DisplayClass159_0_1_tB482FF3F21B3640564976032903783C313B74A62;
// XLua.ObjectTranslator/<>c__DisplayClass159_0`1<UnityEngine.Vector2>
struct U3CU3Ec__DisplayClass159_0_1_t2DF7782FAA4D2D93BDBEAD192249CEF0C0FA778B;
// XLua.ObjectTranslator/<>c__DisplayClass159_0`1<UnityEngine.Vector3>
struct U3CU3Ec__DisplayClass159_0_1_tD11DDA3EE71C82ABEDCBA64C69E36772ACEE3817;
// XLua.ObjectTranslator/<>c__DisplayClass159_0`1<UnityEngine.Vector4>
struct U3CU3Ec__DisplayClass159_0_1_t04748D678F1496508249F5C20C0B4979CD22CC80;
// XLua.ObjectTranslator/<>c__DisplayClass159_0`1<XLuaTest.MyStruct>
struct U3CU3Ec__DisplayClass159_0_1_tA4F7350684AF2552FA138199FA902C4A36513117;
// XLua.ObjectTranslator/<>c__DisplayClass159_0`1<XLuaTest.Pedding>
struct U3CU3Ec__DisplayClass159_0_1_t83CD2C7A31101DBE8661CC7C57D9EBA9C960A54B;
// XLua.ObjectTranslator/<>c__DisplayClass159_0`1<XLuaTest.PushAsTableStruct>
struct U3CU3Ec__DisplayClass159_0_1_tAEFF1A8DB36DA982BC77094BB4E267DE88A7437F;
// XLua.ObjectTranslator/<>c__DisplayClass160_0`1<System.Object>
struct U3CU3Ec__DisplayClass160_0_1_tA819D2EAC260B82B84EB22E6348FB0221F744E79;
// XLua.ObjectTranslator/GetFunc`1<System.Int32Enum>
struct GetFunc_1_tF7F38012D311FDC3137218FE4196109C09449E2B;
// XLua.ObjectTranslator/GetFunc`1<System.Object>
struct GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5;
// XLua.ObjectTranslator/GetFunc`1<UnityEngine.Bounds>
struct GetFunc_1_tCA125211118C818F1A29D887F434C3928963D04A;
// XLua.ObjectTranslator/GetFunc`1<UnityEngine.Color>
struct GetFunc_1_t153D598E77A07B849A79ECA27732D38FBE9476CF;
// XLua.ObjectTranslator/GetFunc`1<UnityEngine.Quaternion>
struct GetFunc_1_tCFFF67F8370DE88E22729E229DA1876C1F8855C6;
// XLua.ObjectTranslator/GetFunc`1<UnityEngine.Ray2D>
struct GetFunc_1_t4203D08418182984A6E80F74751D65862EA2075C;
// XLua.ObjectTranslator/GetFunc`1<UnityEngine.Ray>
struct GetFunc_1_t65EE73BA79CC7396519573C386E16365B57DA9D5;
// XLua.ObjectTranslator/GetFunc`1<UnityEngine.Vector2>
struct GetFunc_1_t02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216;
// XLua.ObjectTranslator/GetFunc`1<UnityEngine.Vector3>
struct GetFunc_1_t98C5E9EAF0ABD030E19D74EDE569B8C51C089910;
// XLua.ObjectTranslator/GetFunc`1<UnityEngine.Vector4>
struct GetFunc_1_tDB38D100E435F97CD7E766BAC0AFCE9392F890C2;
// XLua.ObjectTranslator/GetFunc`1<XLuaTest.MyStruct>
struct GetFunc_1_t74C2FED57C42BC99DAD9FD148C145CB2C9A120C0;
// XLua.ObjectTranslator/GetFunc`1<XLuaTest.Pedding>
struct GetFunc_1_t5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35;
// XLua.ObjectTranslator/GetFunc`1<XLuaTest.PushAsTableStruct>
struct GetFunc_1_t066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC;
// XLuaTest.BaseTestBase`1<System.Object>
struct BaseTestBase_1_t2F497E566CC34D7842A1E1B67290C160DDE78041;
// XLuaTest.BaseTestHelper
struct BaseTestHelper_t794E250C7F0652F308490859319BC8681298B927;
// XLuaTest.GenericClass`1<System.Double>
struct GenericClass_1_t3CABC5EB16D1C28F73C28384FCF1E2DFF7B5223B;
// XLuaTest.GenericClass`1<System.Object>
struct GenericClass_1_tF66DEB2180060692D3A5F115E8D9108F81243CA6;

extern RuntimeClass* Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890_il2cpp_TypeInfo_var;
extern RuntimeClass* Color_t119BCA590009762C7223FDD3AF9706653AC84ED2_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89_il2cpp_TypeInfo_var;
extern RuntimeClass* Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B_il2cpp_TypeInfo_var;
extern RuntimeClass* PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
extern RuntimeClass* Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614_il2cpp_TypeInfo_var;
extern RuntimeClass* Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral30042AAB716211A15FF4E0C635B9F7EAEF2ABBF4;
extern String_t* _stringLiteral6F9C447D071959B133DDD89681640464758FD707;
extern const RuntimeMethod* DelegateBridge_InParam_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m2BE571F94915B5BFC55E216237C19497F87C8B52_RuntimeMethod_var;
extern const uint32_t BaseTestBase_1_Foo_m81BC384E8BEBBF14351BBEB86E02D82C1AF18D84_MetadataUsageId;
extern const uint32_t GenericClass_1_Func1_m30D7CFF6E180D1B0F10FEDF23FD66CFF1070CAE9_MetadataUsageId;
extern const uint32_t GenericClass_1_Func1_mD34921F7A3002289F530FBC8C91AA3BB564BB402_MetadataUsageId;
extern const uint32_t GenericStruct_1_GetA_m1E42C9175CECBAADF4BCF0944CD012F4FA00969C_MetadataUsageId;
extern const uint32_t GenericStruct_1_GetA_mD98B6CC243403A72642A25FC600AE4903708D624_MetadataUsageId;
extern const uint32_t GetFunc_1_BeginInvoke_m0F7FD3B0D57F5D8A41C3B192B976BA7B79D596F9_MetadataUsageId;
extern const uint32_t GetFunc_1_BeginInvoke_m167075F5233E73C47471BA4C4EDA92BBADCF1161_MetadataUsageId;
extern const uint32_t GetFunc_1_BeginInvoke_m270B3D4EC1AB62C2B304855F65D8EF220AC0BDCE_MetadataUsageId;
extern const uint32_t GetFunc_1_BeginInvoke_m27F1B0E2D060BC7FF0B959918F2BF499D9A6386F_MetadataUsageId;
extern const uint32_t GetFunc_1_BeginInvoke_m518FECDEEC263011A7BF91F16EAAC742816B8483_MetadataUsageId;
extern const uint32_t GetFunc_1_BeginInvoke_m62514B27E9ED94E977059ABADCC344F7CB309F6D_MetadataUsageId;
extern const uint32_t GetFunc_1_BeginInvoke_m6344747031F02DA5F6D2BA89AB18B948E2C4AA31_MetadataUsageId;
extern const uint32_t GetFunc_1_BeginInvoke_m726582C0D405E4CEC3655A7DDC536141BA951389_MetadataUsageId;
extern const uint32_t GetFunc_1_BeginInvoke_mA028B298AF7008D8F917FBB0CEFA72081127568F_MetadataUsageId;
extern const uint32_t GetFunc_1_BeginInvoke_mB4FFFB0BCF3B17BB02C43DCA665DA3F8E1DB18E8_MetadataUsageId;
extern const uint32_t GetFunc_1_BeginInvoke_mF0719F89E1DB3F059BCDEBCB03B9407C339BE4DF_MetadataUsageId;
extern const uint32_t GetFunc_1_BeginInvoke_mF2A9B7FF6AB8EEABE996C60CCDB6D847507F716A_MetadataUsageId;
extern const uint32_t GetFunc_1_BeginInvoke_mF357E4EEB886A9F200074F7356D77EB9FDF59F5B_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef LUABASE_TACD72C0CA801153BA4BFCAE24E3B0631A11EBAD4_H
#define LUABASE_TACD72C0CA801153BA4BFCAE24E3B0631A11EBAD4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.LuaBase
struct  LuaBase_tACD72C0CA801153BA4BFCAE24E3B0631A11EBAD4  : public RuntimeObject
{
public:
	// System.Boolean XLua.LuaBase::disposed
	bool ___disposed_0;
	// System.Int32 XLua.LuaBase::luaReference
	int32_t ___luaReference_1;
	// XLua.LuaEnv XLua.LuaBase::luaEnv
	LuaEnv_t4CCC7DCC820EABA057CA9033595045544878BA36 * ___luaEnv_2;

public:
	inline static int32_t get_offset_of_disposed_0() { return static_cast<int32_t>(offsetof(LuaBase_tACD72C0CA801153BA4BFCAE24E3B0631A11EBAD4, ___disposed_0)); }
	inline bool get_disposed_0() const { return ___disposed_0; }
	inline bool* get_address_of_disposed_0() { return &___disposed_0; }
	inline void set_disposed_0(bool value)
	{
		___disposed_0 = value;
	}

	inline static int32_t get_offset_of_luaReference_1() { return static_cast<int32_t>(offsetof(LuaBase_tACD72C0CA801153BA4BFCAE24E3B0631A11EBAD4, ___luaReference_1)); }
	inline int32_t get_luaReference_1() const { return ___luaReference_1; }
	inline int32_t* get_address_of_luaReference_1() { return &___luaReference_1; }
	inline void set_luaReference_1(int32_t value)
	{
		___luaReference_1 = value;
	}

	inline static int32_t get_offset_of_luaEnv_2() { return static_cast<int32_t>(offsetof(LuaBase_tACD72C0CA801153BA4BFCAE24E3B0631A11EBAD4, ___luaEnv_2)); }
	inline LuaEnv_t4CCC7DCC820EABA057CA9033595045544878BA36 * get_luaEnv_2() const { return ___luaEnv_2; }
	inline LuaEnv_t4CCC7DCC820EABA057CA9033595045544878BA36 ** get_address_of_luaEnv_2() { return &___luaEnv_2; }
	inline void set_luaEnv_2(LuaEnv_t4CCC7DCC820EABA057CA9033595045544878BA36 * value)
	{
		___luaEnv_2 = value;
		Il2CppCodeGenWriteBarrier((&___luaEnv_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LUABASE_TACD72C0CA801153BA4BFCAE24E3B0631A11EBAD4_H
#ifndef U3CU3EC__155_1_T53A5B5EE1F8A960515D5162268D55738B938B0CA_H
#define U3CU3EC__155_1_T53A5B5EE1F8A960515D5162268D55738B938B0CA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_<>c__155`1<System.Object>
struct  U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA_StaticFields
{
public:
	// XLua.ObjectTranslator_<>c__155`1<T> XLua.ObjectTranslator_<>c__155`1::<>9
	U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA * ___U3CU3E9_0;
	// System.Action`2<System.IntPtr,System.Byte> XLua.ObjectTranslator_<>c__155`1::<>9__155_0
	Action_2_t47DAFF10A3FC3F94C0C04F4CC97AA9C6F4A7880B * ___U3CU3E9__155_0_1;
	// System.Action`2<System.IntPtr,System.SByte> XLua.ObjectTranslator_<>c__155`1::<>9__155_1
	Action_2_tEE8B744C1570382AE5A07EF90BD35371A92A6ABD * ___U3CU3E9__155_1_2;
	// System.Action`2<System.IntPtr,System.Char> XLua.ObjectTranslator_<>c__155`1::<>9__155_2
	Action_2_tB103A5B89C533616E7BAE3BF21268DCBF3B4B0E9 * ___U3CU3E9__155_2_3;
	// System.Action`2<System.IntPtr,System.Int16> XLua.ObjectTranslator_<>c__155`1::<>9__155_3
	Action_2_tD7414809C0B101881ADA6D1AF72A2CFF3E6FFCBC * ___U3CU3E9__155_3_4;
	// System.Action`2<System.IntPtr,System.UInt16> XLua.ObjectTranslator_<>c__155`1::<>9__155_4
	Action_2_t0A1E2D4561A38844F417855AFC7CBF18E85D9312 * ___U3CU3E9__155_4_5;
	// System.Action`2<System.IntPtr,System.Single> XLua.ObjectTranslator_<>c__155`1::<>9__155_5
	Action_2_t5F1D99DD5CF5EC863BC3EA841EB2089C653449F7 * ___U3CU3E9__155_5_6;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__155_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA_StaticFields, ___U3CU3E9__155_0_1)); }
	inline Action_2_t47DAFF10A3FC3F94C0C04F4CC97AA9C6F4A7880B * get_U3CU3E9__155_0_1() const { return ___U3CU3E9__155_0_1; }
	inline Action_2_t47DAFF10A3FC3F94C0C04F4CC97AA9C6F4A7880B ** get_address_of_U3CU3E9__155_0_1() { return &___U3CU3E9__155_0_1; }
	inline void set_U3CU3E9__155_0_1(Action_2_t47DAFF10A3FC3F94C0C04F4CC97AA9C6F4A7880B * value)
	{
		___U3CU3E9__155_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__155_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__155_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA_StaticFields, ___U3CU3E9__155_1_2)); }
	inline Action_2_tEE8B744C1570382AE5A07EF90BD35371A92A6ABD * get_U3CU3E9__155_1_2() const { return ___U3CU3E9__155_1_2; }
	inline Action_2_tEE8B744C1570382AE5A07EF90BD35371A92A6ABD ** get_address_of_U3CU3E9__155_1_2() { return &___U3CU3E9__155_1_2; }
	inline void set_U3CU3E9__155_1_2(Action_2_tEE8B744C1570382AE5A07EF90BD35371A92A6ABD * value)
	{
		___U3CU3E9__155_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__155_1_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__155_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA_StaticFields, ___U3CU3E9__155_2_3)); }
	inline Action_2_tB103A5B89C533616E7BAE3BF21268DCBF3B4B0E9 * get_U3CU3E9__155_2_3() const { return ___U3CU3E9__155_2_3; }
	inline Action_2_tB103A5B89C533616E7BAE3BF21268DCBF3B4B0E9 ** get_address_of_U3CU3E9__155_2_3() { return &___U3CU3E9__155_2_3; }
	inline void set_U3CU3E9__155_2_3(Action_2_tB103A5B89C533616E7BAE3BF21268DCBF3B4B0E9 * value)
	{
		___U3CU3E9__155_2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__155_2_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__155_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA_StaticFields, ___U3CU3E9__155_3_4)); }
	inline Action_2_tD7414809C0B101881ADA6D1AF72A2CFF3E6FFCBC * get_U3CU3E9__155_3_4() const { return ___U3CU3E9__155_3_4; }
	inline Action_2_tD7414809C0B101881ADA6D1AF72A2CFF3E6FFCBC ** get_address_of_U3CU3E9__155_3_4() { return &___U3CU3E9__155_3_4; }
	inline void set_U3CU3E9__155_3_4(Action_2_tD7414809C0B101881ADA6D1AF72A2CFF3E6FFCBC * value)
	{
		___U3CU3E9__155_3_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__155_3_4), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__155_4_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA_StaticFields, ___U3CU3E9__155_4_5)); }
	inline Action_2_t0A1E2D4561A38844F417855AFC7CBF18E85D9312 * get_U3CU3E9__155_4_5() const { return ___U3CU3E9__155_4_5; }
	inline Action_2_t0A1E2D4561A38844F417855AFC7CBF18E85D9312 ** get_address_of_U3CU3E9__155_4_5() { return &___U3CU3E9__155_4_5; }
	inline void set_U3CU3E9__155_4_5(Action_2_t0A1E2D4561A38844F417855AFC7CBF18E85D9312 * value)
	{
		___U3CU3E9__155_4_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__155_4_5), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__155_5_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA_StaticFields, ___U3CU3E9__155_5_6)); }
	inline Action_2_t5F1D99DD5CF5EC863BC3EA841EB2089C653449F7 * get_U3CU3E9__155_5_6() const { return ___U3CU3E9__155_5_6; }
	inline Action_2_t5F1D99DD5CF5EC863BC3EA841EB2089C653449F7 ** get_address_of_U3CU3E9__155_5_6() { return &___U3CU3E9__155_5_6; }
	inline void set_U3CU3E9__155_5_6(Action_2_t5F1D99DD5CF5EC863BC3EA841EB2089C653449F7 * value)
	{
		___U3CU3E9__155_5_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__155_5_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__155_1_T53A5B5EE1F8A960515D5162268D55738B938B0CA_H
#ifndef U3CU3EC__157_1_T4AF15B74E3C78181170AE1FE47EE0F405F516D22_H
#define U3CU3EC__157_1_T4AF15B74E3C78181170AE1FE47EE0F405F516D22_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_<>c__157`1<System.Object>
struct  U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22_StaticFields
{
public:
	// XLua.ObjectTranslator_<>c__157`1<T> XLua.ObjectTranslator_<>c__157`1::<>9
	U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22 * ___U3CU3E9_0;
	// System.Func`3<System.IntPtr,System.Int32,System.Byte> XLua.ObjectTranslator_<>c__157`1::<>9__157_1
	Func_3_t95B4F4601DFC140B1159CAD435897E6F06C5C015 * ___U3CU3E9__157_1_1;
	// System.Func`3<System.IntPtr,System.Int32,System.SByte> XLua.ObjectTranslator_<>c__157`1::<>9__157_2
	Func_3_t28DA98256F75D877F4818AA5F430A34BE4168280 * ___U3CU3E9__157_2_2;
	// System.Func`3<System.IntPtr,System.Int32,System.Char> XLua.ObjectTranslator_<>c__157`1::<>9__157_3
	Func_3_tB0EB9B7DBE1A31CD3863EC23DD9FFF90C3A02B40 * ___U3CU3E9__157_3_3;
	// System.Func`3<System.IntPtr,System.Int32,System.Int16> XLua.ObjectTranslator_<>c__157`1::<>9__157_4
	Func_3_tFCF18A0535245ACCCF4C876276BFE93721C1693F * ___U3CU3E9__157_4_4;
	// System.Func`3<System.IntPtr,System.Int32,System.UInt16> XLua.ObjectTranslator_<>c__157`1::<>9__157_5
	Func_3_tB0F146295E114CBD8BD0C59DBAAC3459324DB447 * ___U3CU3E9__157_5_5;
	// System.Func`3<System.IntPtr,System.Int32,System.Single> XLua.ObjectTranslator_<>c__157`1::<>9__157_6
	Func_3_t2ACE6317709388584F1C618B2800A53ADF1B55F6 * ___U3CU3E9__157_6_6;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__157_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22_StaticFields, ___U3CU3E9__157_1_1)); }
	inline Func_3_t95B4F4601DFC140B1159CAD435897E6F06C5C015 * get_U3CU3E9__157_1_1() const { return ___U3CU3E9__157_1_1; }
	inline Func_3_t95B4F4601DFC140B1159CAD435897E6F06C5C015 ** get_address_of_U3CU3E9__157_1_1() { return &___U3CU3E9__157_1_1; }
	inline void set_U3CU3E9__157_1_1(Func_3_t95B4F4601DFC140B1159CAD435897E6F06C5C015 * value)
	{
		___U3CU3E9__157_1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__157_1_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__157_2_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22_StaticFields, ___U3CU3E9__157_2_2)); }
	inline Func_3_t28DA98256F75D877F4818AA5F430A34BE4168280 * get_U3CU3E9__157_2_2() const { return ___U3CU3E9__157_2_2; }
	inline Func_3_t28DA98256F75D877F4818AA5F430A34BE4168280 ** get_address_of_U3CU3E9__157_2_2() { return &___U3CU3E9__157_2_2; }
	inline void set_U3CU3E9__157_2_2(Func_3_t28DA98256F75D877F4818AA5F430A34BE4168280 * value)
	{
		___U3CU3E9__157_2_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__157_2_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__157_3_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22_StaticFields, ___U3CU3E9__157_3_3)); }
	inline Func_3_tB0EB9B7DBE1A31CD3863EC23DD9FFF90C3A02B40 * get_U3CU3E9__157_3_3() const { return ___U3CU3E9__157_3_3; }
	inline Func_3_tB0EB9B7DBE1A31CD3863EC23DD9FFF90C3A02B40 ** get_address_of_U3CU3E9__157_3_3() { return &___U3CU3E9__157_3_3; }
	inline void set_U3CU3E9__157_3_3(Func_3_tB0EB9B7DBE1A31CD3863EC23DD9FFF90C3A02B40 * value)
	{
		___U3CU3E9__157_3_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__157_3_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__157_4_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22_StaticFields, ___U3CU3E9__157_4_4)); }
	inline Func_3_tFCF18A0535245ACCCF4C876276BFE93721C1693F * get_U3CU3E9__157_4_4() const { return ___U3CU3E9__157_4_4; }
	inline Func_3_tFCF18A0535245ACCCF4C876276BFE93721C1693F ** get_address_of_U3CU3E9__157_4_4() { return &___U3CU3E9__157_4_4; }
	inline void set_U3CU3E9__157_4_4(Func_3_tFCF18A0535245ACCCF4C876276BFE93721C1693F * value)
	{
		___U3CU3E9__157_4_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__157_4_4), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__157_5_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22_StaticFields, ___U3CU3E9__157_5_5)); }
	inline Func_3_tB0F146295E114CBD8BD0C59DBAAC3459324DB447 * get_U3CU3E9__157_5_5() const { return ___U3CU3E9__157_5_5; }
	inline Func_3_tB0F146295E114CBD8BD0C59DBAAC3459324DB447 ** get_address_of_U3CU3E9__157_5_5() { return &___U3CU3E9__157_5_5; }
	inline void set_U3CU3E9__157_5_5(Func_3_tB0F146295E114CBD8BD0C59DBAAC3459324DB447 * value)
	{
		___U3CU3E9__157_5_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__157_5_5), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__157_6_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22_StaticFields, ___U3CU3E9__157_6_6)); }
	inline Func_3_t2ACE6317709388584F1C618B2800A53ADF1B55F6 * get_U3CU3E9__157_6_6() const { return ___U3CU3E9__157_6_6; }
	inline Func_3_t2ACE6317709388584F1C618B2800A53ADF1B55F6 ** get_address_of_U3CU3E9__157_6_6() { return &___U3CU3E9__157_6_6; }
	inline void set_U3CU3E9__157_6_6(Func_3_t2ACE6317709388584F1C618B2800A53ADF1B55F6 * value)
	{
		___U3CU3E9__157_6_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__157_6_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__157_1_T4AF15B74E3C78181170AE1FE47EE0F405F516D22_H
#ifndef U3CU3EC__DISPLAYCLASS159_0_1_T6BC500AED16F3B515D133892F73B27F06D03BE7B_H
#define U3CU3EC__DISPLAYCLASS159_0_1_T6BC500AED16F3B515D133892F73B27F06D03BE7B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_<>c__DisplayClass159_0`1<System.Int32Enum>
struct  U3CU3Ec__DisplayClass159_0_1_t6BC500AED16F3B515D133892F73B27F06D03BE7B  : public RuntimeObject
{
public:
	// XLua.ObjectTranslator_GetFunc`1<T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::get
	GetFunc_1_tF7F38012D311FDC3137218FE4196109C09449E2B * ___get_0;
	// System.Action`2<System.IntPtr,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::push
	Action_2_t9F54A6B2BACD03E76E99C3EE9E302C0EF9ADC069 * ___push_1;
	// System.Action`3<System.IntPtr,System.Int32,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::update
	Action_3_t56CDB294E28A405ACCBC1158BB8FF1615F1C37E0 * ___update_2;

public:
	inline static int32_t get_offset_of_get_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_t6BC500AED16F3B515D133892F73B27F06D03BE7B, ___get_0)); }
	inline GetFunc_1_tF7F38012D311FDC3137218FE4196109C09449E2B * get_get_0() const { return ___get_0; }
	inline GetFunc_1_tF7F38012D311FDC3137218FE4196109C09449E2B ** get_address_of_get_0() { return &___get_0; }
	inline void set_get_0(GetFunc_1_tF7F38012D311FDC3137218FE4196109C09449E2B * value)
	{
		___get_0 = value;
		Il2CppCodeGenWriteBarrier((&___get_0), value);
	}

	inline static int32_t get_offset_of_push_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_t6BC500AED16F3B515D133892F73B27F06D03BE7B, ___push_1)); }
	inline Action_2_t9F54A6B2BACD03E76E99C3EE9E302C0EF9ADC069 * get_push_1() const { return ___push_1; }
	inline Action_2_t9F54A6B2BACD03E76E99C3EE9E302C0EF9ADC069 ** get_address_of_push_1() { return &___push_1; }
	inline void set_push_1(Action_2_t9F54A6B2BACD03E76E99C3EE9E302C0EF9ADC069 * value)
	{
		___push_1 = value;
		Il2CppCodeGenWriteBarrier((&___push_1), value);
	}

	inline static int32_t get_offset_of_update_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_t6BC500AED16F3B515D133892F73B27F06D03BE7B, ___update_2)); }
	inline Action_3_t56CDB294E28A405ACCBC1158BB8FF1615F1C37E0 * get_update_2() const { return ___update_2; }
	inline Action_3_t56CDB294E28A405ACCBC1158BB8FF1615F1C37E0 ** get_address_of_update_2() { return &___update_2; }
	inline void set_update_2(Action_3_t56CDB294E28A405ACCBC1158BB8FF1615F1C37E0 * value)
	{
		___update_2 = value;
		Il2CppCodeGenWriteBarrier((&___update_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS159_0_1_T6BC500AED16F3B515D133892F73B27F06D03BE7B_H
#ifndef U3CU3EC__DISPLAYCLASS159_0_1_TC5C39851A0FB7A22E0C730A0AD41139CC51DBC4B_H
#define U3CU3EC__DISPLAYCLASS159_0_1_TC5C39851A0FB7A22E0C730A0AD41139CC51DBC4B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_<>c__DisplayClass159_0`1<System.Object>
struct  U3CU3Ec__DisplayClass159_0_1_tC5C39851A0FB7A22E0C730A0AD41139CC51DBC4B  : public RuntimeObject
{
public:
	// XLua.ObjectTranslator_GetFunc`1<T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::get
	GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 * ___get_0;
	// System.Action`2<System.IntPtr,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::push
	Action_2_t5A40AC088AB1ABA90B50A631CFDC1F9303EEE8C8 * ___push_1;
	// System.Action`3<System.IntPtr,System.Int32,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::update
	Action_3_tAC968214AD437FC0E87E269AE429783BE9D8C535 * ___update_2;

public:
	inline static int32_t get_offset_of_get_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_tC5C39851A0FB7A22E0C730A0AD41139CC51DBC4B, ___get_0)); }
	inline GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 * get_get_0() const { return ___get_0; }
	inline GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 ** get_address_of_get_0() { return &___get_0; }
	inline void set_get_0(GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 * value)
	{
		___get_0 = value;
		Il2CppCodeGenWriteBarrier((&___get_0), value);
	}

	inline static int32_t get_offset_of_push_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_tC5C39851A0FB7A22E0C730A0AD41139CC51DBC4B, ___push_1)); }
	inline Action_2_t5A40AC088AB1ABA90B50A631CFDC1F9303EEE8C8 * get_push_1() const { return ___push_1; }
	inline Action_2_t5A40AC088AB1ABA90B50A631CFDC1F9303EEE8C8 ** get_address_of_push_1() { return &___push_1; }
	inline void set_push_1(Action_2_t5A40AC088AB1ABA90B50A631CFDC1F9303EEE8C8 * value)
	{
		___push_1 = value;
		Il2CppCodeGenWriteBarrier((&___push_1), value);
	}

	inline static int32_t get_offset_of_update_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_tC5C39851A0FB7A22E0C730A0AD41139CC51DBC4B, ___update_2)); }
	inline Action_3_tAC968214AD437FC0E87E269AE429783BE9D8C535 * get_update_2() const { return ___update_2; }
	inline Action_3_tAC968214AD437FC0E87E269AE429783BE9D8C535 ** get_address_of_update_2() { return &___update_2; }
	inline void set_update_2(Action_3_tAC968214AD437FC0E87E269AE429783BE9D8C535 * value)
	{
		___update_2 = value;
		Il2CppCodeGenWriteBarrier((&___update_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS159_0_1_TC5C39851A0FB7A22E0C730A0AD41139CC51DBC4B_H
#ifndef U3CU3EC__DISPLAYCLASS159_0_1_T92559D5E6A753E8253188EC2493431A739F95543_H
#define U3CU3EC__DISPLAYCLASS159_0_1_T92559D5E6A753E8253188EC2493431A739F95543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Bounds>
struct  U3CU3Ec__DisplayClass159_0_1_t92559D5E6A753E8253188EC2493431A739F95543  : public RuntimeObject
{
public:
	// XLua.ObjectTranslator_GetFunc`1<T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::get
	GetFunc_1_tCA125211118C818F1A29D887F434C3928963D04A * ___get_0;
	// System.Action`2<System.IntPtr,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::push
	Action_2_t27EAD6315F76BD644F93F64978C6EABEA42438F2 * ___push_1;
	// System.Action`3<System.IntPtr,System.Int32,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::update
	Action_3_t6182E07E06417E65CE24B630289316E3D1D6836E * ___update_2;

public:
	inline static int32_t get_offset_of_get_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_t92559D5E6A753E8253188EC2493431A739F95543, ___get_0)); }
	inline GetFunc_1_tCA125211118C818F1A29D887F434C3928963D04A * get_get_0() const { return ___get_0; }
	inline GetFunc_1_tCA125211118C818F1A29D887F434C3928963D04A ** get_address_of_get_0() { return &___get_0; }
	inline void set_get_0(GetFunc_1_tCA125211118C818F1A29D887F434C3928963D04A * value)
	{
		___get_0 = value;
		Il2CppCodeGenWriteBarrier((&___get_0), value);
	}

	inline static int32_t get_offset_of_push_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_t92559D5E6A753E8253188EC2493431A739F95543, ___push_1)); }
	inline Action_2_t27EAD6315F76BD644F93F64978C6EABEA42438F2 * get_push_1() const { return ___push_1; }
	inline Action_2_t27EAD6315F76BD644F93F64978C6EABEA42438F2 ** get_address_of_push_1() { return &___push_1; }
	inline void set_push_1(Action_2_t27EAD6315F76BD644F93F64978C6EABEA42438F2 * value)
	{
		___push_1 = value;
		Il2CppCodeGenWriteBarrier((&___push_1), value);
	}

	inline static int32_t get_offset_of_update_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_t92559D5E6A753E8253188EC2493431A739F95543, ___update_2)); }
	inline Action_3_t6182E07E06417E65CE24B630289316E3D1D6836E * get_update_2() const { return ___update_2; }
	inline Action_3_t6182E07E06417E65CE24B630289316E3D1D6836E ** get_address_of_update_2() { return &___update_2; }
	inline void set_update_2(Action_3_t6182E07E06417E65CE24B630289316E3D1D6836E * value)
	{
		___update_2 = value;
		Il2CppCodeGenWriteBarrier((&___update_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS159_0_1_T92559D5E6A753E8253188EC2493431A739F95543_H
#ifndef U3CU3EC__DISPLAYCLASS159_0_1_T227DCCC68410156943096285F45422E520570BAF_H
#define U3CU3EC__DISPLAYCLASS159_0_1_T227DCCC68410156943096285F45422E520570BAF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Color>
struct  U3CU3Ec__DisplayClass159_0_1_t227DCCC68410156943096285F45422E520570BAF  : public RuntimeObject
{
public:
	// XLua.ObjectTranslator_GetFunc`1<T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::get
	GetFunc_1_t153D598E77A07B849A79ECA27732D38FBE9476CF * ___get_0;
	// System.Action`2<System.IntPtr,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::push
	Action_2_t0C5870DB977491CE7293F07318380FF7E057AD43 * ___push_1;
	// System.Action`3<System.IntPtr,System.Int32,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::update
	Action_3_t0740C38E1582A75EE3330074884C2F4208BF551C * ___update_2;

public:
	inline static int32_t get_offset_of_get_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_t227DCCC68410156943096285F45422E520570BAF, ___get_0)); }
	inline GetFunc_1_t153D598E77A07B849A79ECA27732D38FBE9476CF * get_get_0() const { return ___get_0; }
	inline GetFunc_1_t153D598E77A07B849A79ECA27732D38FBE9476CF ** get_address_of_get_0() { return &___get_0; }
	inline void set_get_0(GetFunc_1_t153D598E77A07B849A79ECA27732D38FBE9476CF * value)
	{
		___get_0 = value;
		Il2CppCodeGenWriteBarrier((&___get_0), value);
	}

	inline static int32_t get_offset_of_push_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_t227DCCC68410156943096285F45422E520570BAF, ___push_1)); }
	inline Action_2_t0C5870DB977491CE7293F07318380FF7E057AD43 * get_push_1() const { return ___push_1; }
	inline Action_2_t0C5870DB977491CE7293F07318380FF7E057AD43 ** get_address_of_push_1() { return &___push_1; }
	inline void set_push_1(Action_2_t0C5870DB977491CE7293F07318380FF7E057AD43 * value)
	{
		___push_1 = value;
		Il2CppCodeGenWriteBarrier((&___push_1), value);
	}

	inline static int32_t get_offset_of_update_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_t227DCCC68410156943096285F45422E520570BAF, ___update_2)); }
	inline Action_3_t0740C38E1582A75EE3330074884C2F4208BF551C * get_update_2() const { return ___update_2; }
	inline Action_3_t0740C38E1582A75EE3330074884C2F4208BF551C ** get_address_of_update_2() { return &___update_2; }
	inline void set_update_2(Action_3_t0740C38E1582A75EE3330074884C2F4208BF551C * value)
	{
		___update_2 = value;
		Il2CppCodeGenWriteBarrier((&___update_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS159_0_1_T227DCCC68410156943096285F45422E520570BAF_H
#ifndef U3CU3EC__DISPLAYCLASS159_0_1_T78363EB2A97BFB751551E79E125D08E2DA40DC5F_H
#define U3CU3EC__DISPLAYCLASS159_0_1_T78363EB2A97BFB751551E79E125D08E2DA40DC5F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Quaternion>
struct  U3CU3Ec__DisplayClass159_0_1_t78363EB2A97BFB751551E79E125D08E2DA40DC5F  : public RuntimeObject
{
public:
	// XLua.ObjectTranslator_GetFunc`1<T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::get
	GetFunc_1_tCFFF67F8370DE88E22729E229DA1876C1F8855C6 * ___get_0;
	// System.Action`2<System.IntPtr,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::push
	Action_2_t3D4CC218ED0628456909A6713D84D78B5D7FDAE9 * ___push_1;
	// System.Action`3<System.IntPtr,System.Int32,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::update
	Action_3_t22F9E084364A14EE229E12294036E35D21D8A0F6 * ___update_2;

public:
	inline static int32_t get_offset_of_get_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_t78363EB2A97BFB751551E79E125D08E2DA40DC5F, ___get_0)); }
	inline GetFunc_1_tCFFF67F8370DE88E22729E229DA1876C1F8855C6 * get_get_0() const { return ___get_0; }
	inline GetFunc_1_tCFFF67F8370DE88E22729E229DA1876C1F8855C6 ** get_address_of_get_0() { return &___get_0; }
	inline void set_get_0(GetFunc_1_tCFFF67F8370DE88E22729E229DA1876C1F8855C6 * value)
	{
		___get_0 = value;
		Il2CppCodeGenWriteBarrier((&___get_0), value);
	}

	inline static int32_t get_offset_of_push_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_t78363EB2A97BFB751551E79E125D08E2DA40DC5F, ___push_1)); }
	inline Action_2_t3D4CC218ED0628456909A6713D84D78B5D7FDAE9 * get_push_1() const { return ___push_1; }
	inline Action_2_t3D4CC218ED0628456909A6713D84D78B5D7FDAE9 ** get_address_of_push_1() { return &___push_1; }
	inline void set_push_1(Action_2_t3D4CC218ED0628456909A6713D84D78B5D7FDAE9 * value)
	{
		___push_1 = value;
		Il2CppCodeGenWriteBarrier((&___push_1), value);
	}

	inline static int32_t get_offset_of_update_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_t78363EB2A97BFB751551E79E125D08E2DA40DC5F, ___update_2)); }
	inline Action_3_t22F9E084364A14EE229E12294036E35D21D8A0F6 * get_update_2() const { return ___update_2; }
	inline Action_3_t22F9E084364A14EE229E12294036E35D21D8A0F6 ** get_address_of_update_2() { return &___update_2; }
	inline void set_update_2(Action_3_t22F9E084364A14EE229E12294036E35D21D8A0F6 * value)
	{
		___update_2 = value;
		Il2CppCodeGenWriteBarrier((&___update_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS159_0_1_T78363EB2A97BFB751551E79E125D08E2DA40DC5F_H
#ifndef U3CU3EC__DISPLAYCLASS159_0_1_TB43828FB0F6D95D62DBF8CCD10A1C21410C7B5B6_H
#define U3CU3EC__DISPLAYCLASS159_0_1_TB43828FB0F6D95D62DBF8CCD10A1C21410C7B5B6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Ray2D>
struct  U3CU3Ec__DisplayClass159_0_1_tB43828FB0F6D95D62DBF8CCD10A1C21410C7B5B6  : public RuntimeObject
{
public:
	// XLua.ObjectTranslator_GetFunc`1<T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::get
	GetFunc_1_t4203D08418182984A6E80F74751D65862EA2075C * ___get_0;
	// System.Action`2<System.IntPtr,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::push
	Action_2_tB0F6A41C750D318EB24116F6A024A227A01CD13F * ___push_1;
	// System.Action`3<System.IntPtr,System.Int32,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::update
	Action_3_t215960DC3656F52FACEA1836DC43C2FB808CDB3E * ___update_2;

public:
	inline static int32_t get_offset_of_get_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_tB43828FB0F6D95D62DBF8CCD10A1C21410C7B5B6, ___get_0)); }
	inline GetFunc_1_t4203D08418182984A6E80F74751D65862EA2075C * get_get_0() const { return ___get_0; }
	inline GetFunc_1_t4203D08418182984A6E80F74751D65862EA2075C ** get_address_of_get_0() { return &___get_0; }
	inline void set_get_0(GetFunc_1_t4203D08418182984A6E80F74751D65862EA2075C * value)
	{
		___get_0 = value;
		Il2CppCodeGenWriteBarrier((&___get_0), value);
	}

	inline static int32_t get_offset_of_push_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_tB43828FB0F6D95D62DBF8CCD10A1C21410C7B5B6, ___push_1)); }
	inline Action_2_tB0F6A41C750D318EB24116F6A024A227A01CD13F * get_push_1() const { return ___push_1; }
	inline Action_2_tB0F6A41C750D318EB24116F6A024A227A01CD13F ** get_address_of_push_1() { return &___push_1; }
	inline void set_push_1(Action_2_tB0F6A41C750D318EB24116F6A024A227A01CD13F * value)
	{
		___push_1 = value;
		Il2CppCodeGenWriteBarrier((&___push_1), value);
	}

	inline static int32_t get_offset_of_update_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_tB43828FB0F6D95D62DBF8CCD10A1C21410C7B5B6, ___update_2)); }
	inline Action_3_t215960DC3656F52FACEA1836DC43C2FB808CDB3E * get_update_2() const { return ___update_2; }
	inline Action_3_t215960DC3656F52FACEA1836DC43C2FB808CDB3E ** get_address_of_update_2() { return &___update_2; }
	inline void set_update_2(Action_3_t215960DC3656F52FACEA1836DC43C2FB808CDB3E * value)
	{
		___update_2 = value;
		Il2CppCodeGenWriteBarrier((&___update_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS159_0_1_TB43828FB0F6D95D62DBF8CCD10A1C21410C7B5B6_H
#ifndef U3CU3EC__DISPLAYCLASS159_0_1_TB482FF3F21B3640564976032903783C313B74A62_H
#define U3CU3EC__DISPLAYCLASS159_0_1_TB482FF3F21B3640564976032903783C313B74A62_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Ray>
struct  U3CU3Ec__DisplayClass159_0_1_tB482FF3F21B3640564976032903783C313B74A62  : public RuntimeObject
{
public:
	// XLua.ObjectTranslator_GetFunc`1<T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::get
	GetFunc_1_t65EE73BA79CC7396519573C386E16365B57DA9D5 * ___get_0;
	// System.Action`2<System.IntPtr,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::push
	Action_2_tF0FBD665B5F9E08472DA4D98650743D5044D6E68 * ___push_1;
	// System.Action`3<System.IntPtr,System.Int32,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::update
	Action_3_t4E6E89250D2B4BD33FADA252589ED4C9A1814489 * ___update_2;

public:
	inline static int32_t get_offset_of_get_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_tB482FF3F21B3640564976032903783C313B74A62, ___get_0)); }
	inline GetFunc_1_t65EE73BA79CC7396519573C386E16365B57DA9D5 * get_get_0() const { return ___get_0; }
	inline GetFunc_1_t65EE73BA79CC7396519573C386E16365B57DA9D5 ** get_address_of_get_0() { return &___get_0; }
	inline void set_get_0(GetFunc_1_t65EE73BA79CC7396519573C386E16365B57DA9D5 * value)
	{
		___get_0 = value;
		Il2CppCodeGenWriteBarrier((&___get_0), value);
	}

	inline static int32_t get_offset_of_push_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_tB482FF3F21B3640564976032903783C313B74A62, ___push_1)); }
	inline Action_2_tF0FBD665B5F9E08472DA4D98650743D5044D6E68 * get_push_1() const { return ___push_1; }
	inline Action_2_tF0FBD665B5F9E08472DA4D98650743D5044D6E68 ** get_address_of_push_1() { return &___push_1; }
	inline void set_push_1(Action_2_tF0FBD665B5F9E08472DA4D98650743D5044D6E68 * value)
	{
		___push_1 = value;
		Il2CppCodeGenWriteBarrier((&___push_1), value);
	}

	inline static int32_t get_offset_of_update_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_tB482FF3F21B3640564976032903783C313B74A62, ___update_2)); }
	inline Action_3_t4E6E89250D2B4BD33FADA252589ED4C9A1814489 * get_update_2() const { return ___update_2; }
	inline Action_3_t4E6E89250D2B4BD33FADA252589ED4C9A1814489 ** get_address_of_update_2() { return &___update_2; }
	inline void set_update_2(Action_3_t4E6E89250D2B4BD33FADA252589ED4C9A1814489 * value)
	{
		___update_2 = value;
		Il2CppCodeGenWriteBarrier((&___update_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS159_0_1_TB482FF3F21B3640564976032903783C313B74A62_H
#ifndef U3CU3EC__DISPLAYCLASS159_0_1_T2DF7782FAA4D2D93BDBEAD192249CEF0C0FA778B_H
#define U3CU3EC__DISPLAYCLASS159_0_1_T2DF7782FAA4D2D93BDBEAD192249CEF0C0FA778B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Vector2>
struct  U3CU3Ec__DisplayClass159_0_1_t2DF7782FAA4D2D93BDBEAD192249CEF0C0FA778B  : public RuntimeObject
{
public:
	// XLua.ObjectTranslator_GetFunc`1<T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::get
	GetFunc_1_t02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216 * ___get_0;
	// System.Action`2<System.IntPtr,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::push
	Action_2_t233200B21199895FBBCBB82D897D620F802281F7 * ___push_1;
	// System.Action`3<System.IntPtr,System.Int32,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::update
	Action_3_t88F5650816F3F8316496581E84FF8215FAC0D7F0 * ___update_2;

public:
	inline static int32_t get_offset_of_get_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_t2DF7782FAA4D2D93BDBEAD192249CEF0C0FA778B, ___get_0)); }
	inline GetFunc_1_t02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216 * get_get_0() const { return ___get_0; }
	inline GetFunc_1_t02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216 ** get_address_of_get_0() { return &___get_0; }
	inline void set_get_0(GetFunc_1_t02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216 * value)
	{
		___get_0 = value;
		Il2CppCodeGenWriteBarrier((&___get_0), value);
	}

	inline static int32_t get_offset_of_push_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_t2DF7782FAA4D2D93BDBEAD192249CEF0C0FA778B, ___push_1)); }
	inline Action_2_t233200B21199895FBBCBB82D897D620F802281F7 * get_push_1() const { return ___push_1; }
	inline Action_2_t233200B21199895FBBCBB82D897D620F802281F7 ** get_address_of_push_1() { return &___push_1; }
	inline void set_push_1(Action_2_t233200B21199895FBBCBB82D897D620F802281F7 * value)
	{
		___push_1 = value;
		Il2CppCodeGenWriteBarrier((&___push_1), value);
	}

	inline static int32_t get_offset_of_update_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_t2DF7782FAA4D2D93BDBEAD192249CEF0C0FA778B, ___update_2)); }
	inline Action_3_t88F5650816F3F8316496581E84FF8215FAC0D7F0 * get_update_2() const { return ___update_2; }
	inline Action_3_t88F5650816F3F8316496581E84FF8215FAC0D7F0 ** get_address_of_update_2() { return &___update_2; }
	inline void set_update_2(Action_3_t88F5650816F3F8316496581E84FF8215FAC0D7F0 * value)
	{
		___update_2 = value;
		Il2CppCodeGenWriteBarrier((&___update_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS159_0_1_T2DF7782FAA4D2D93BDBEAD192249CEF0C0FA778B_H
#ifndef U3CU3EC__DISPLAYCLASS159_0_1_TD11DDA3EE71C82ABEDCBA64C69E36772ACEE3817_H
#define U3CU3EC__DISPLAYCLASS159_0_1_TD11DDA3EE71C82ABEDCBA64C69E36772ACEE3817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Vector3>
struct  U3CU3Ec__DisplayClass159_0_1_tD11DDA3EE71C82ABEDCBA64C69E36772ACEE3817  : public RuntimeObject
{
public:
	// XLua.ObjectTranslator_GetFunc`1<T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::get
	GetFunc_1_t98C5E9EAF0ABD030E19D74EDE569B8C51C089910 * ___get_0;
	// System.Action`2<System.IntPtr,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::push
	Action_2_tE0955B102ADC5D3E46F3C328B88EF8B40CFE65B3 * ___push_1;
	// System.Action`3<System.IntPtr,System.Int32,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::update
	Action_3_t7C15729E8D25F204E5600DD58CB5C13AA09F0D77 * ___update_2;

public:
	inline static int32_t get_offset_of_get_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_tD11DDA3EE71C82ABEDCBA64C69E36772ACEE3817, ___get_0)); }
	inline GetFunc_1_t98C5E9EAF0ABD030E19D74EDE569B8C51C089910 * get_get_0() const { return ___get_0; }
	inline GetFunc_1_t98C5E9EAF0ABD030E19D74EDE569B8C51C089910 ** get_address_of_get_0() { return &___get_0; }
	inline void set_get_0(GetFunc_1_t98C5E9EAF0ABD030E19D74EDE569B8C51C089910 * value)
	{
		___get_0 = value;
		Il2CppCodeGenWriteBarrier((&___get_0), value);
	}

	inline static int32_t get_offset_of_push_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_tD11DDA3EE71C82ABEDCBA64C69E36772ACEE3817, ___push_1)); }
	inline Action_2_tE0955B102ADC5D3E46F3C328B88EF8B40CFE65B3 * get_push_1() const { return ___push_1; }
	inline Action_2_tE0955B102ADC5D3E46F3C328B88EF8B40CFE65B3 ** get_address_of_push_1() { return &___push_1; }
	inline void set_push_1(Action_2_tE0955B102ADC5D3E46F3C328B88EF8B40CFE65B3 * value)
	{
		___push_1 = value;
		Il2CppCodeGenWriteBarrier((&___push_1), value);
	}

	inline static int32_t get_offset_of_update_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_tD11DDA3EE71C82ABEDCBA64C69E36772ACEE3817, ___update_2)); }
	inline Action_3_t7C15729E8D25F204E5600DD58CB5C13AA09F0D77 * get_update_2() const { return ___update_2; }
	inline Action_3_t7C15729E8D25F204E5600DD58CB5C13AA09F0D77 ** get_address_of_update_2() { return &___update_2; }
	inline void set_update_2(Action_3_t7C15729E8D25F204E5600DD58CB5C13AA09F0D77 * value)
	{
		___update_2 = value;
		Il2CppCodeGenWriteBarrier((&___update_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS159_0_1_TD11DDA3EE71C82ABEDCBA64C69E36772ACEE3817_H
#ifndef U3CU3EC__DISPLAYCLASS159_0_1_T04748D678F1496508249F5C20C0B4979CD22CC80_H
#define U3CU3EC__DISPLAYCLASS159_0_1_T04748D678F1496508249F5C20C0B4979CD22CC80_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Vector4>
struct  U3CU3Ec__DisplayClass159_0_1_t04748D678F1496508249F5C20C0B4979CD22CC80  : public RuntimeObject
{
public:
	// XLua.ObjectTranslator_GetFunc`1<T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::get
	GetFunc_1_tDB38D100E435F97CD7E766BAC0AFCE9392F890C2 * ___get_0;
	// System.Action`2<System.IntPtr,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::push
	Action_2_tB62086CD34EEB19B5724471C57CC42C3B7BF3CE8 * ___push_1;
	// System.Action`3<System.IntPtr,System.Int32,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::update
	Action_3_t246223420BE1031546149482564E0B8ECC791FA0 * ___update_2;

public:
	inline static int32_t get_offset_of_get_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_t04748D678F1496508249F5C20C0B4979CD22CC80, ___get_0)); }
	inline GetFunc_1_tDB38D100E435F97CD7E766BAC0AFCE9392F890C2 * get_get_0() const { return ___get_0; }
	inline GetFunc_1_tDB38D100E435F97CD7E766BAC0AFCE9392F890C2 ** get_address_of_get_0() { return &___get_0; }
	inline void set_get_0(GetFunc_1_tDB38D100E435F97CD7E766BAC0AFCE9392F890C2 * value)
	{
		___get_0 = value;
		Il2CppCodeGenWriteBarrier((&___get_0), value);
	}

	inline static int32_t get_offset_of_push_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_t04748D678F1496508249F5C20C0B4979CD22CC80, ___push_1)); }
	inline Action_2_tB62086CD34EEB19B5724471C57CC42C3B7BF3CE8 * get_push_1() const { return ___push_1; }
	inline Action_2_tB62086CD34EEB19B5724471C57CC42C3B7BF3CE8 ** get_address_of_push_1() { return &___push_1; }
	inline void set_push_1(Action_2_tB62086CD34EEB19B5724471C57CC42C3B7BF3CE8 * value)
	{
		___push_1 = value;
		Il2CppCodeGenWriteBarrier((&___push_1), value);
	}

	inline static int32_t get_offset_of_update_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_t04748D678F1496508249F5C20C0B4979CD22CC80, ___update_2)); }
	inline Action_3_t246223420BE1031546149482564E0B8ECC791FA0 * get_update_2() const { return ___update_2; }
	inline Action_3_t246223420BE1031546149482564E0B8ECC791FA0 ** get_address_of_update_2() { return &___update_2; }
	inline void set_update_2(Action_3_t246223420BE1031546149482564E0B8ECC791FA0 * value)
	{
		___update_2 = value;
		Il2CppCodeGenWriteBarrier((&___update_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS159_0_1_T04748D678F1496508249F5C20C0B4979CD22CC80_H
#ifndef U3CU3EC__DISPLAYCLASS159_0_1_TA4F7350684AF2552FA138199FA902C4A36513117_H
#define U3CU3EC__DISPLAYCLASS159_0_1_TA4F7350684AF2552FA138199FA902C4A36513117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_<>c__DisplayClass159_0`1<XLuaTest.MyStruct>
struct  U3CU3Ec__DisplayClass159_0_1_tA4F7350684AF2552FA138199FA902C4A36513117  : public RuntimeObject
{
public:
	// XLua.ObjectTranslator_GetFunc`1<T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::get
	GetFunc_1_t74C2FED57C42BC99DAD9FD148C145CB2C9A120C0 * ___get_0;
	// System.Action`2<System.IntPtr,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::push
	Action_2_t5E5E60BF2750CAB791145987CC37987DC8CAA1B1 * ___push_1;
	// System.Action`3<System.IntPtr,System.Int32,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::update
	Action_3_tA7F9F909F7344FE8616B5830B523C2FD7935C4E4 * ___update_2;

public:
	inline static int32_t get_offset_of_get_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_tA4F7350684AF2552FA138199FA902C4A36513117, ___get_0)); }
	inline GetFunc_1_t74C2FED57C42BC99DAD9FD148C145CB2C9A120C0 * get_get_0() const { return ___get_0; }
	inline GetFunc_1_t74C2FED57C42BC99DAD9FD148C145CB2C9A120C0 ** get_address_of_get_0() { return &___get_0; }
	inline void set_get_0(GetFunc_1_t74C2FED57C42BC99DAD9FD148C145CB2C9A120C0 * value)
	{
		___get_0 = value;
		Il2CppCodeGenWriteBarrier((&___get_0), value);
	}

	inline static int32_t get_offset_of_push_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_tA4F7350684AF2552FA138199FA902C4A36513117, ___push_1)); }
	inline Action_2_t5E5E60BF2750CAB791145987CC37987DC8CAA1B1 * get_push_1() const { return ___push_1; }
	inline Action_2_t5E5E60BF2750CAB791145987CC37987DC8CAA1B1 ** get_address_of_push_1() { return &___push_1; }
	inline void set_push_1(Action_2_t5E5E60BF2750CAB791145987CC37987DC8CAA1B1 * value)
	{
		___push_1 = value;
		Il2CppCodeGenWriteBarrier((&___push_1), value);
	}

	inline static int32_t get_offset_of_update_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_tA4F7350684AF2552FA138199FA902C4A36513117, ___update_2)); }
	inline Action_3_tA7F9F909F7344FE8616B5830B523C2FD7935C4E4 * get_update_2() const { return ___update_2; }
	inline Action_3_tA7F9F909F7344FE8616B5830B523C2FD7935C4E4 ** get_address_of_update_2() { return &___update_2; }
	inline void set_update_2(Action_3_tA7F9F909F7344FE8616B5830B523C2FD7935C4E4 * value)
	{
		___update_2 = value;
		Il2CppCodeGenWriteBarrier((&___update_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS159_0_1_TA4F7350684AF2552FA138199FA902C4A36513117_H
#ifndef U3CU3EC__DISPLAYCLASS159_0_1_T83CD2C7A31101DBE8661CC7C57D9EBA9C960A54B_H
#define U3CU3EC__DISPLAYCLASS159_0_1_T83CD2C7A31101DBE8661CC7C57D9EBA9C960A54B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_<>c__DisplayClass159_0`1<XLuaTest.Pedding>
struct  U3CU3Ec__DisplayClass159_0_1_t83CD2C7A31101DBE8661CC7C57D9EBA9C960A54B  : public RuntimeObject
{
public:
	// XLua.ObjectTranslator_GetFunc`1<T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::get
	GetFunc_1_t5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35 * ___get_0;
	// System.Action`2<System.IntPtr,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::push
	Action_2_t578CA6FF8AFCFB94EFCDC4B01AA893036190D50F * ___push_1;
	// System.Action`3<System.IntPtr,System.Int32,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::update
	Action_3_tA24D2E42FEF24046BACE285F7BAE9A134D93C232 * ___update_2;

public:
	inline static int32_t get_offset_of_get_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_t83CD2C7A31101DBE8661CC7C57D9EBA9C960A54B, ___get_0)); }
	inline GetFunc_1_t5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35 * get_get_0() const { return ___get_0; }
	inline GetFunc_1_t5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35 ** get_address_of_get_0() { return &___get_0; }
	inline void set_get_0(GetFunc_1_t5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35 * value)
	{
		___get_0 = value;
		Il2CppCodeGenWriteBarrier((&___get_0), value);
	}

	inline static int32_t get_offset_of_push_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_t83CD2C7A31101DBE8661CC7C57D9EBA9C960A54B, ___push_1)); }
	inline Action_2_t578CA6FF8AFCFB94EFCDC4B01AA893036190D50F * get_push_1() const { return ___push_1; }
	inline Action_2_t578CA6FF8AFCFB94EFCDC4B01AA893036190D50F ** get_address_of_push_1() { return &___push_1; }
	inline void set_push_1(Action_2_t578CA6FF8AFCFB94EFCDC4B01AA893036190D50F * value)
	{
		___push_1 = value;
		Il2CppCodeGenWriteBarrier((&___push_1), value);
	}

	inline static int32_t get_offset_of_update_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_t83CD2C7A31101DBE8661CC7C57D9EBA9C960A54B, ___update_2)); }
	inline Action_3_tA24D2E42FEF24046BACE285F7BAE9A134D93C232 * get_update_2() const { return ___update_2; }
	inline Action_3_tA24D2E42FEF24046BACE285F7BAE9A134D93C232 ** get_address_of_update_2() { return &___update_2; }
	inline void set_update_2(Action_3_tA24D2E42FEF24046BACE285F7BAE9A134D93C232 * value)
	{
		___update_2 = value;
		Il2CppCodeGenWriteBarrier((&___update_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS159_0_1_T83CD2C7A31101DBE8661CC7C57D9EBA9C960A54B_H
#ifndef U3CU3EC__DISPLAYCLASS159_0_1_TAEFF1A8DB36DA982BC77094BB4E267DE88A7437F_H
#define U3CU3EC__DISPLAYCLASS159_0_1_TAEFF1A8DB36DA982BC77094BB4E267DE88A7437F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_<>c__DisplayClass159_0`1<XLuaTest.PushAsTableStruct>
struct  U3CU3Ec__DisplayClass159_0_1_tAEFF1A8DB36DA982BC77094BB4E267DE88A7437F  : public RuntimeObject
{
public:
	// XLua.ObjectTranslator_GetFunc`1<T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::get
	GetFunc_1_t066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC * ___get_0;
	// System.Action`2<System.IntPtr,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::push
	Action_2_tAFAEFC7F0F8B3CB8A8E1F036B3F33B0283B3AD52 * ___push_1;
	// System.Action`3<System.IntPtr,System.Int32,T> XLua.ObjectTranslator_<>c__DisplayClass159_0`1::update
	Action_3_tE5BE52CCB50C09543DBAD024C9F9E8FD81058E4A * ___update_2;

public:
	inline static int32_t get_offset_of_get_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_tAEFF1A8DB36DA982BC77094BB4E267DE88A7437F, ___get_0)); }
	inline GetFunc_1_t066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC * get_get_0() const { return ___get_0; }
	inline GetFunc_1_t066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC ** get_address_of_get_0() { return &___get_0; }
	inline void set_get_0(GetFunc_1_t066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC * value)
	{
		___get_0 = value;
		Il2CppCodeGenWriteBarrier((&___get_0), value);
	}

	inline static int32_t get_offset_of_push_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_tAEFF1A8DB36DA982BC77094BB4E267DE88A7437F, ___push_1)); }
	inline Action_2_tAFAEFC7F0F8B3CB8A8E1F036B3F33B0283B3AD52 * get_push_1() const { return ___push_1; }
	inline Action_2_tAFAEFC7F0F8B3CB8A8E1F036B3F33B0283B3AD52 ** get_address_of_push_1() { return &___push_1; }
	inline void set_push_1(Action_2_tAFAEFC7F0F8B3CB8A8E1F036B3F33B0283B3AD52 * value)
	{
		___push_1 = value;
		Il2CppCodeGenWriteBarrier((&___push_1), value);
	}

	inline static int32_t get_offset_of_update_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass159_0_1_tAEFF1A8DB36DA982BC77094BB4E267DE88A7437F, ___update_2)); }
	inline Action_3_tE5BE52CCB50C09543DBAD024C9F9E8FD81058E4A * get_update_2() const { return ___update_2; }
	inline Action_3_tE5BE52CCB50C09543DBAD024C9F9E8FD81058E4A ** get_address_of_update_2() { return &___update_2; }
	inline void set_update_2(Action_3_tE5BE52CCB50C09543DBAD024C9F9E8FD81058E4A * value)
	{
		___update_2 = value;
		Il2CppCodeGenWriteBarrier((&___update_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS159_0_1_TAEFF1A8DB36DA982BC77094BB4E267DE88A7437F_H
#ifndef U3CU3EC__DISPLAYCLASS160_0_1_TA819D2EAC260B82B84EB22E6348FB0221F744E79_H
#define U3CU3EC__DISPLAYCLASS160_0_1_TA819D2EAC260B82B84EB22E6348FB0221F744E79_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_<>c__DisplayClass160_0`1<System.Object>
struct  U3CU3Ec__DisplayClass160_0_1_tA819D2EAC260B82B84EB22E6348FB0221F744E79  : public RuntimeObject
{
public:
	// XLua.ObjectTranslator_GetFunc`1<T> XLua.ObjectTranslator_<>c__DisplayClass160_0`1::get
	GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 * ___get_0;

public:
	inline static int32_t get_offset_of_get_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass160_0_1_tA819D2EAC260B82B84EB22E6348FB0221F744E79, ___get_0)); }
	inline GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 * get_get_0() const { return ___get_0; }
	inline GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 ** get_address_of_get_0() { return &___get_0; }
	inline void set_get_0(GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 * value)
	{
		___get_0 = value;
		Il2CppCodeGenWriteBarrier((&___get_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS160_0_1_TA819D2EAC260B82B84EB22E6348FB0221F744E79_H
#ifndef BASETESTHELPER_T794E250C7F0652F308490859319BC8681298B927_H
#define BASETESTHELPER_T794E250C7F0652F308490859319BC8681298B927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLuaTest.BaseTestHelper
struct  BaseTestHelper_t794E250C7F0652F308490859319BC8681298B927  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASETESTHELPER_T794E250C7F0652F308490859319BC8681298B927_H
#ifndef GENERICCLASS_1_T3CABC5EB16D1C28F73C28384FCF1E2DFF7B5223B_H
#define GENERICCLASS_1_T3CABC5EB16D1C28F73C28384FCF1E2DFF7B5223B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLuaTest.GenericClass`1<System.Double>
struct  GenericClass_1_t3CABC5EB16D1C28F73C28384FCF1E2DFF7B5223B  : public RuntimeObject
{
public:
	// T XLuaTest.GenericClass`1::a
	double ___a_0;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(GenericClass_1_t3CABC5EB16D1C28F73C28384FCF1E2DFF7B5223B, ___a_0)); }
	inline double get_a_0() const { return ___a_0; }
	inline double* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(double value)
	{
		___a_0 = value;
	}
};

struct GenericClass_1_t3CABC5EB16D1C28F73C28384FCF1E2DFF7B5223B_StaticFields
{
public:
	// XLua.DelegateBridge XLuaTest.GenericClass`1::_c__Hotfix0_ctor
	DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * ____c__Hotfix0_ctor_1;
	// XLua.DelegateBridge XLuaTest.GenericClass`1::__Hotfix0_Func1
	DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * _____Hotfix0_Func1_2;
	// XLua.DelegateBridge XLuaTest.GenericClass`1::__Hotfix0_Func2
	DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * _____Hotfix0_Func2_3;

public:
	inline static int32_t get_offset_of__c__Hotfix0_ctor_1() { return static_cast<int32_t>(offsetof(GenericClass_1_t3CABC5EB16D1C28F73C28384FCF1E2DFF7B5223B_StaticFields, ____c__Hotfix0_ctor_1)); }
	inline DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * get__c__Hotfix0_ctor_1() const { return ____c__Hotfix0_ctor_1; }
	inline DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 ** get_address_of__c__Hotfix0_ctor_1() { return &____c__Hotfix0_ctor_1; }
	inline void set__c__Hotfix0_ctor_1(DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * value)
	{
		____c__Hotfix0_ctor_1 = value;
		Il2CppCodeGenWriteBarrier((&____c__Hotfix0_ctor_1), value);
	}

	inline static int32_t get_offset_of___Hotfix0_Func1_2() { return static_cast<int32_t>(offsetof(GenericClass_1_t3CABC5EB16D1C28F73C28384FCF1E2DFF7B5223B_StaticFields, _____Hotfix0_Func1_2)); }
	inline DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * get___Hotfix0_Func1_2() const { return _____Hotfix0_Func1_2; }
	inline DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 ** get_address_of___Hotfix0_Func1_2() { return &_____Hotfix0_Func1_2; }
	inline void set___Hotfix0_Func1_2(DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * value)
	{
		_____Hotfix0_Func1_2 = value;
		Il2CppCodeGenWriteBarrier((&_____Hotfix0_Func1_2), value);
	}

	inline static int32_t get_offset_of___Hotfix0_Func2_3() { return static_cast<int32_t>(offsetof(GenericClass_1_t3CABC5EB16D1C28F73C28384FCF1E2DFF7B5223B_StaticFields, _____Hotfix0_Func2_3)); }
	inline DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * get___Hotfix0_Func2_3() const { return _____Hotfix0_Func2_3; }
	inline DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 ** get_address_of___Hotfix0_Func2_3() { return &_____Hotfix0_Func2_3; }
	inline void set___Hotfix0_Func2_3(DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * value)
	{
		_____Hotfix0_Func2_3 = value;
		Il2CppCodeGenWriteBarrier((&_____Hotfix0_Func2_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICCLASS_1_T3CABC5EB16D1C28F73C28384FCF1E2DFF7B5223B_H
#ifndef GENERICCLASS_1_TF66DEB2180060692D3A5F115E8D9108F81243CA6_H
#define GENERICCLASS_1_TF66DEB2180060692D3A5F115E8D9108F81243CA6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLuaTest.GenericClass`1<System.Object>
struct  GenericClass_1_tF66DEB2180060692D3A5F115E8D9108F81243CA6  : public RuntimeObject
{
public:
	// T XLuaTest.GenericClass`1::a
	RuntimeObject * ___a_0;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(GenericClass_1_tF66DEB2180060692D3A5F115E8D9108F81243CA6, ___a_0)); }
	inline RuntimeObject * get_a_0() const { return ___a_0; }
	inline RuntimeObject ** get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(RuntimeObject * value)
	{
		___a_0 = value;
		Il2CppCodeGenWriteBarrier((&___a_0), value);
	}
};

struct GenericClass_1_tF66DEB2180060692D3A5F115E8D9108F81243CA6_StaticFields
{
public:
	// XLua.DelegateBridge XLuaTest.GenericClass`1::_c__Hotfix0_ctor
	DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * ____c__Hotfix0_ctor_1;
	// XLua.DelegateBridge XLuaTest.GenericClass`1::__Hotfix0_Func1
	DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * _____Hotfix0_Func1_2;
	// XLua.DelegateBridge XLuaTest.GenericClass`1::__Hotfix0_Func2
	DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * _____Hotfix0_Func2_3;

public:
	inline static int32_t get_offset_of__c__Hotfix0_ctor_1() { return static_cast<int32_t>(offsetof(GenericClass_1_tF66DEB2180060692D3A5F115E8D9108F81243CA6_StaticFields, ____c__Hotfix0_ctor_1)); }
	inline DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * get__c__Hotfix0_ctor_1() const { return ____c__Hotfix0_ctor_1; }
	inline DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 ** get_address_of__c__Hotfix0_ctor_1() { return &____c__Hotfix0_ctor_1; }
	inline void set__c__Hotfix0_ctor_1(DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * value)
	{
		____c__Hotfix0_ctor_1 = value;
		Il2CppCodeGenWriteBarrier((&____c__Hotfix0_ctor_1), value);
	}

	inline static int32_t get_offset_of___Hotfix0_Func1_2() { return static_cast<int32_t>(offsetof(GenericClass_1_tF66DEB2180060692D3A5F115E8D9108F81243CA6_StaticFields, _____Hotfix0_Func1_2)); }
	inline DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * get___Hotfix0_Func1_2() const { return _____Hotfix0_Func1_2; }
	inline DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 ** get_address_of___Hotfix0_Func1_2() { return &_____Hotfix0_Func1_2; }
	inline void set___Hotfix0_Func1_2(DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * value)
	{
		_____Hotfix0_Func1_2 = value;
		Il2CppCodeGenWriteBarrier((&_____Hotfix0_Func1_2), value);
	}

	inline static int32_t get_offset_of___Hotfix0_Func2_3() { return static_cast<int32_t>(offsetof(GenericClass_1_tF66DEB2180060692D3A5F115E8D9108F81243CA6_StaticFields, _____Hotfix0_Func2_3)); }
	inline DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * get___Hotfix0_Func2_3() const { return _____Hotfix0_Func2_3; }
	inline DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 ** get_address_of___Hotfix0_Func2_3() { return &_____Hotfix0_Func2_3; }
	inline void set___Hotfix0_Func2_3(DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * value)
	{
		_____Hotfix0_Func2_3 = value;
		Il2CppCodeGenWriteBarrier((&_____Hotfix0_Func2_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICCLASS_1_TF66DEB2180060692D3A5F115E8D9108F81243CA6_H
#ifndef BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#define BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifndef CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#define CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifndef DECIMAL_T44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_H
#define DECIMAL_T44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((&___Powers10_6), value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_H
#ifndef DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#define DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#define INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SBYTE_T9070AEA2966184235653CB9B4D33B149CDA831DF_H
#define SBYTE_T9070AEA2966184235653CB9B4D33B149CDA831DF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T9070AEA2966184235653CB9B4D33B149CDA831DF_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#define UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#define VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifndef DELEGATEBRIDGEBASE_TEFF6BA3F840FCEFF7B788D2D9572E1D410A25413_H
#define DELEGATEBRIDGEBASE_TEFF6BA3F840FCEFF7B788D2D9572E1D410A25413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.DelegateBridgeBase
struct  DelegateBridgeBase_tEFF6BA3F840FCEFF7B788D2D9572E1D410A25413  : public LuaBase_tACD72C0CA801153BA4BFCAE24E3B0631A11EBAD4
{
public:
	// System.Type XLua.DelegateBridgeBase::firstKey
	Type_t * ___firstKey_3;
	// System.Delegate XLua.DelegateBridgeBase::firstValue
	Delegate_t * ___firstValue_4;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Delegate> XLua.DelegateBridgeBase::bindTo
	Dictionary_2_tFD7B82A4280C7CBF8A6107F86168530E1EF37225 * ___bindTo_5;
	// System.Int32 XLua.DelegateBridgeBase::errorFuncRef
	int32_t ___errorFuncRef_6;

public:
	inline static int32_t get_offset_of_firstKey_3() { return static_cast<int32_t>(offsetof(DelegateBridgeBase_tEFF6BA3F840FCEFF7B788D2D9572E1D410A25413, ___firstKey_3)); }
	inline Type_t * get_firstKey_3() const { return ___firstKey_3; }
	inline Type_t ** get_address_of_firstKey_3() { return &___firstKey_3; }
	inline void set_firstKey_3(Type_t * value)
	{
		___firstKey_3 = value;
		Il2CppCodeGenWriteBarrier((&___firstKey_3), value);
	}

	inline static int32_t get_offset_of_firstValue_4() { return static_cast<int32_t>(offsetof(DelegateBridgeBase_tEFF6BA3F840FCEFF7B788D2D9572E1D410A25413, ___firstValue_4)); }
	inline Delegate_t * get_firstValue_4() const { return ___firstValue_4; }
	inline Delegate_t ** get_address_of_firstValue_4() { return &___firstValue_4; }
	inline void set_firstValue_4(Delegate_t * value)
	{
		___firstValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___firstValue_4), value);
	}

	inline static int32_t get_offset_of_bindTo_5() { return static_cast<int32_t>(offsetof(DelegateBridgeBase_tEFF6BA3F840FCEFF7B788D2D9572E1D410A25413, ___bindTo_5)); }
	inline Dictionary_2_tFD7B82A4280C7CBF8A6107F86168530E1EF37225 * get_bindTo_5() const { return ___bindTo_5; }
	inline Dictionary_2_tFD7B82A4280C7CBF8A6107F86168530E1EF37225 ** get_address_of_bindTo_5() { return &___bindTo_5; }
	inline void set_bindTo_5(Dictionary_2_tFD7B82A4280C7CBF8A6107F86168530E1EF37225 * value)
	{
		___bindTo_5 = value;
		Il2CppCodeGenWriteBarrier((&___bindTo_5), value);
	}

	inline static int32_t get_offset_of_errorFuncRef_6() { return static_cast<int32_t>(offsetof(DelegateBridgeBase_tEFF6BA3F840FCEFF7B788D2D9572E1D410A25413, ___errorFuncRef_6)); }
	inline int32_t get_errorFuncRef_6() const { return ___errorFuncRef_6; }
	inline int32_t* get_address_of_errorFuncRef_6() { return &___errorFuncRef_6; }
	inline void set_errorFuncRef_6(int32_t value)
	{
		___errorFuncRef_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATEBRIDGEBASE_TEFF6BA3F840FCEFF7B788D2D9572E1D410A25413_H
#ifndef BASETESTBASE_1_T2F497E566CC34D7842A1E1B67290C160DDE78041_H
#define BASETESTBASE_1_T2F497E566CC34D7842A1E1B67290C160DDE78041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLuaTest.BaseTestBase`1<System.Object>
struct  BaseTestBase_1_t2F497E566CC34D7842A1E1B67290C160DDE78041  : public BaseTestHelper_t794E250C7F0652F308490859319BC8681298B927
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASETESTBASE_1_T2F497E566CC34D7842A1E1B67290C160DDE78041_H
#ifndef GENERICSTRUCT_1_T9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789_H
#define GENERICSTRUCT_1_T9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLuaTest.GenericStruct`1<System.Int32>
struct  GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789 
{
public:
	// T XLuaTest.GenericStruct`1::a
	int32_t ___a_0;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789, ___a_0)); }
	inline int32_t get_a_0() const { return ___a_0; }
	inline int32_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int32_t value)
	{
		___a_0 = value;
	}
};

struct GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789_StaticFields
{
public:
	// XLua.DelegateBridge XLuaTest.GenericStruct`1::_c__Hotfix0_ctor
	DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * ____c__Hotfix0_ctor_1;
	// XLua.DelegateBridge XLuaTest.GenericStruct`1::__Hotfix0_GetA
	DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * _____Hotfix0_GetA_2;

public:
	inline static int32_t get_offset_of__c__Hotfix0_ctor_1() { return static_cast<int32_t>(offsetof(GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789_StaticFields, ____c__Hotfix0_ctor_1)); }
	inline DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * get__c__Hotfix0_ctor_1() const { return ____c__Hotfix0_ctor_1; }
	inline DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 ** get_address_of__c__Hotfix0_ctor_1() { return &____c__Hotfix0_ctor_1; }
	inline void set__c__Hotfix0_ctor_1(DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * value)
	{
		____c__Hotfix0_ctor_1 = value;
		Il2CppCodeGenWriteBarrier((&____c__Hotfix0_ctor_1), value);
	}

	inline static int32_t get_offset_of___Hotfix0_GetA_2() { return static_cast<int32_t>(offsetof(GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789_StaticFields, _____Hotfix0_GetA_2)); }
	inline DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * get___Hotfix0_GetA_2() const { return _____Hotfix0_GetA_2; }
	inline DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 ** get_address_of___Hotfix0_GetA_2() { return &_____Hotfix0_GetA_2; }
	inline void set___Hotfix0_GetA_2(DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * value)
	{
		_____Hotfix0_GetA_2 = value;
		Il2CppCodeGenWriteBarrier((&_____Hotfix0_GetA_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICSTRUCT_1_T9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789_H
#ifndef GENERICSTRUCT_1_TDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E_H
#define GENERICSTRUCT_1_TDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLuaTest.GenericStruct`1<System.Object>
struct  GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E 
{
public:
	// T XLuaTest.GenericStruct`1::a
	RuntimeObject * ___a_0;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E, ___a_0)); }
	inline RuntimeObject * get_a_0() const { return ___a_0; }
	inline RuntimeObject ** get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(RuntimeObject * value)
	{
		___a_0 = value;
		Il2CppCodeGenWriteBarrier((&___a_0), value);
	}
};

struct GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E_StaticFields
{
public:
	// XLua.DelegateBridge XLuaTest.GenericStruct`1::_c__Hotfix0_ctor
	DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * ____c__Hotfix0_ctor_1;
	// XLua.DelegateBridge XLuaTest.GenericStruct`1::__Hotfix0_GetA
	DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * _____Hotfix0_GetA_2;

public:
	inline static int32_t get_offset_of__c__Hotfix0_ctor_1() { return static_cast<int32_t>(offsetof(GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E_StaticFields, ____c__Hotfix0_ctor_1)); }
	inline DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * get__c__Hotfix0_ctor_1() const { return ____c__Hotfix0_ctor_1; }
	inline DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 ** get_address_of__c__Hotfix0_ctor_1() { return &____c__Hotfix0_ctor_1; }
	inline void set__c__Hotfix0_ctor_1(DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * value)
	{
		____c__Hotfix0_ctor_1 = value;
		Il2CppCodeGenWriteBarrier((&____c__Hotfix0_ctor_1), value);
	}

	inline static int32_t get_offset_of___Hotfix0_GetA_2() { return static_cast<int32_t>(offsetof(GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E_StaticFields, _____Hotfix0_GetA_2)); }
	inline DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * get___Hotfix0_GetA_2() const { return _____Hotfix0_GetA_2; }
	inline DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 ** get_address_of___Hotfix0_GetA_2() { return &_____Hotfix0_GetA_2; }
	inline void set___Hotfix0_GetA_2(DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * value)
	{
		_____Hotfix0_GetA_2 = value;
		Il2CppCodeGenWriteBarrier((&_____Hotfix0_GetA_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICSTRUCT_1_TDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E_H
#ifndef PEDDING_T03B5006DDAB916787542F6B6620342B87D740B8B_H
#define PEDDING_T03B5006DDAB916787542F6B6620342B87D740B8B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLuaTest.Pedding
struct  Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B 
{
public:
	// System.Byte XLuaTest.Pedding::c
	uint8_t ___c_0;

public:
	inline static int32_t get_offset_of_c_0() { return static_cast<int32_t>(offsetof(Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B, ___c_0)); }
	inline uint8_t get_c_0() const { return ___c_0; }
	inline uint8_t* get_address_of_c_0() { return &___c_0; }
	inline void set_c_0(uint8_t value)
	{
		___c_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PEDDING_T03B5006DDAB916787542F6B6620342B87D740B8B_H
#ifndef PUSHASTABLESTRUCT_T2DB10DF5320F7FD35E14405CFBD350FEF15C15AB_H
#define PUSHASTABLESTRUCT_T2DB10DF5320F7FD35E14405CFBD350FEF15C15AB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLuaTest.PushAsTableStruct
struct  PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB 
{
public:
	// System.Int32 XLuaTest.PushAsTableStruct::x
	int32_t ___x_0;
	// System.Int32 XLuaTest.PushAsTableStruct::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUSHASTABLESTRUCT_T2DB10DF5320F7FD35E14405CFBD350FEF15C15AB_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
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
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#define INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#ifndef BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#define BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#ifndef RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#define RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#ifndef RAY2D_T2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614_H
#define RAY2D_T2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray2D
struct  Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 
{
public:
	// UnityEngine.Vector2 UnityEngine.Ray2D::m_Origin
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Origin_0;
	// UnityEngine.Vector2 UnityEngine.Ray2D::m_Direction
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614, ___m_Origin_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614, ___m_Direction_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY2D_T2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614_H
#ifndef DELEGATEBRIDGE_TE3E60EC46AA64E8F784FCB860638E784936620C8_H
#define DELEGATEBRIDGE_TE3E60EC46AA64E8F784FCB860638E784936620C8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.DelegateBridge
struct  DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8  : public DelegateBridgeBase_tEFF6BA3F840FCEFF7B788D2D9572E1D410A25413
{
public:
	// System.Int32 XLua.DelegateBridge::_oldTop
	int32_t ____oldTop_9;
	// System.Collections.Generic.Stack`1<System.Int32> XLua.DelegateBridge::_stack
	Stack_1_t7C4BBD98911741434BD5D2CC3B1FA31A32EF1819 * ____stack_10;

public:
	inline static int32_t get_offset_of__oldTop_9() { return static_cast<int32_t>(offsetof(DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8, ____oldTop_9)); }
	inline int32_t get__oldTop_9() const { return ____oldTop_9; }
	inline int32_t* get_address_of__oldTop_9() { return &____oldTop_9; }
	inline void set__oldTop_9(int32_t value)
	{
		____oldTop_9 = value;
	}

	inline static int32_t get_offset_of__stack_10() { return static_cast<int32_t>(offsetof(DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8, ____stack_10)); }
	inline Stack_1_t7C4BBD98911741434BD5D2CC3B1FA31A32EF1819 * get__stack_10() const { return ____stack_10; }
	inline Stack_1_t7C4BBD98911741434BD5D2CC3B1FA31A32EF1819 ** get_address_of__stack_10() { return &____stack_10; }
	inline void set__stack_10(Stack_1_t7C4BBD98911741434BD5D2CC3B1FA31A32EF1819 * value)
	{
		____stack_10 = value;
		Il2CppCodeGenWriteBarrier((&____stack_10), value);
	}
};

struct DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8_StaticFields
{
public:
	// XLua.DelegateBridge[] XLua.DelegateBridge::DelegateBridgeList
	DelegateBridgeU5BU5D_t398C78192C022FFC2DCD9C08101EF6F87B8B7AB5* ___DelegateBridgeList_7;
	// System.Boolean XLua.DelegateBridge::Gen_Flag
	bool ___Gen_Flag_8;

public:
	inline static int32_t get_offset_of_DelegateBridgeList_7() { return static_cast<int32_t>(offsetof(DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8_StaticFields, ___DelegateBridgeList_7)); }
	inline DelegateBridgeU5BU5D_t398C78192C022FFC2DCD9C08101EF6F87B8B7AB5* get_DelegateBridgeList_7() const { return ___DelegateBridgeList_7; }
	inline DelegateBridgeU5BU5D_t398C78192C022FFC2DCD9C08101EF6F87B8B7AB5** get_address_of_DelegateBridgeList_7() { return &___DelegateBridgeList_7; }
	inline void set_DelegateBridgeList_7(DelegateBridgeU5BU5D_t398C78192C022FFC2DCD9C08101EF6F87B8B7AB5* value)
	{
		___DelegateBridgeList_7 = value;
		Il2CppCodeGenWriteBarrier((&___DelegateBridgeList_7), value);
	}

	inline static int32_t get_offset_of_Gen_Flag_8() { return static_cast<int32_t>(offsetof(DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8_StaticFields, ___Gen_Flag_8)); }
	inline bool get_Gen_Flag_8() const { return ___Gen_Flag_8; }
	inline bool* get_address_of_Gen_Flag_8() { return &___Gen_Flag_8; }
	inline void set_Gen_Flag_8(bool value)
	{
		___Gen_Flag_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATEBRIDGE_TE3E60EC46AA64E8F784FCB860638E784936620C8_H
#ifndef MYSTRUCT_T6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89_H
#define MYSTRUCT_T6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLuaTest.MyStruct
struct  MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 
{
public:
	// System.Int32 XLuaTest.MyStruct::a
	int32_t ___a_0;
	// System.Int32 XLuaTest.MyStruct::b
	int32_t ___b_1;
	// System.Decimal XLuaTest.MyStruct::c
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___c_2;
	// XLuaTest.Pedding XLuaTest.MyStruct::e
	Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B  ___e_3;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89, ___a_0)); }
	inline int32_t get_a_0() const { return ___a_0; }
	inline int32_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int32_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89, ___b_1)); }
	inline int32_t get_b_1() const { return ___b_1; }
	inline int32_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int32_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89, ___c_2)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_c_2() const { return ___c_2; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___c_2 = value;
	}

	inline static int32_t get_offset_of_e_3() { return static_cast<int32_t>(offsetof(MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89, ___e_3)); }
	inline Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B  get_e_3() const { return ___e_3; }
	inline Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B * get_address_of_e_3() { return &___e_3; }
	inline void set_e_3(Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B  value)
	{
		___e_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MYSTRUCT_T6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#endif // MULTICASTDELEGATE_T_H
#ifndef ACTION_2_T9F54A6B2BACD03E76E99C3EE9E302C0EF9ADC069_H
#define ACTION_2_T9F54A6B2BACD03E76E99C3EE9E302C0EF9ADC069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.IntPtr,System.Int32Enum>
struct  Action_2_t9F54A6B2BACD03E76E99C3EE9E302C0EF9ADC069  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T9F54A6B2BACD03E76E99C3EE9E302C0EF9ADC069_H
#ifndef ACTION_2_T5A40AC088AB1ABA90B50A631CFDC1F9303EEE8C8_H
#define ACTION_2_T5A40AC088AB1ABA90B50A631CFDC1F9303EEE8C8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.IntPtr,System.Object>
struct  Action_2_t5A40AC088AB1ABA90B50A631CFDC1F9303EEE8C8  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T5A40AC088AB1ABA90B50A631CFDC1F9303EEE8C8_H
#ifndef ACTION_2_T27EAD6315F76BD644F93F64978C6EABEA42438F2_H
#define ACTION_2_T27EAD6315F76BD644F93F64978C6EABEA42438F2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.IntPtr,UnityEngine.Bounds>
struct  Action_2_t27EAD6315F76BD644F93F64978C6EABEA42438F2  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T27EAD6315F76BD644F93F64978C6EABEA42438F2_H
#ifndef ACTION_2_T0C5870DB977491CE7293F07318380FF7E057AD43_H
#define ACTION_2_T0C5870DB977491CE7293F07318380FF7E057AD43_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.IntPtr,UnityEngine.Color>
struct  Action_2_t0C5870DB977491CE7293F07318380FF7E057AD43  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T0C5870DB977491CE7293F07318380FF7E057AD43_H
#ifndef ACTION_2_T3D4CC218ED0628456909A6713D84D78B5D7FDAE9_H
#define ACTION_2_T3D4CC218ED0628456909A6713D84D78B5D7FDAE9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.IntPtr,UnityEngine.Quaternion>
struct  Action_2_t3D4CC218ED0628456909A6713D84D78B5D7FDAE9  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T3D4CC218ED0628456909A6713D84D78B5D7FDAE9_H
#ifndef ACTION_2_TB0F6A41C750D318EB24116F6A024A227A01CD13F_H
#define ACTION_2_TB0F6A41C750D318EB24116F6A024A227A01CD13F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.IntPtr,UnityEngine.Ray2D>
struct  Action_2_tB0F6A41C750D318EB24116F6A024A227A01CD13F  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_TB0F6A41C750D318EB24116F6A024A227A01CD13F_H
#ifndef ACTION_2_TF0FBD665B5F9E08472DA4D98650743D5044D6E68_H
#define ACTION_2_TF0FBD665B5F9E08472DA4D98650743D5044D6E68_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.IntPtr,UnityEngine.Ray>
struct  Action_2_tF0FBD665B5F9E08472DA4D98650743D5044D6E68  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_TF0FBD665B5F9E08472DA4D98650743D5044D6E68_H
#ifndef ACTION_2_T233200B21199895FBBCBB82D897D620F802281F7_H
#define ACTION_2_T233200B21199895FBBCBB82D897D620F802281F7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.IntPtr,UnityEngine.Vector2>
struct  Action_2_t233200B21199895FBBCBB82D897D620F802281F7  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T233200B21199895FBBCBB82D897D620F802281F7_H
#ifndef ACTION_2_TE0955B102ADC5D3E46F3C328B88EF8B40CFE65B3_H
#define ACTION_2_TE0955B102ADC5D3E46F3C328B88EF8B40CFE65B3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.IntPtr,UnityEngine.Vector3>
struct  Action_2_tE0955B102ADC5D3E46F3C328B88EF8B40CFE65B3  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_TE0955B102ADC5D3E46F3C328B88EF8B40CFE65B3_H
#ifndef ACTION_2_TB62086CD34EEB19B5724471C57CC42C3B7BF3CE8_H
#define ACTION_2_TB62086CD34EEB19B5724471C57CC42C3B7BF3CE8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.IntPtr,UnityEngine.Vector4>
struct  Action_2_tB62086CD34EEB19B5724471C57CC42C3B7BF3CE8  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_TB62086CD34EEB19B5724471C57CC42C3B7BF3CE8_H
#ifndef ACTION_2_T5E5E60BF2750CAB791145987CC37987DC8CAA1B1_H
#define ACTION_2_T5E5E60BF2750CAB791145987CC37987DC8CAA1B1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.IntPtr,XLuaTest.MyStruct>
struct  Action_2_t5E5E60BF2750CAB791145987CC37987DC8CAA1B1  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T5E5E60BF2750CAB791145987CC37987DC8CAA1B1_H
#ifndef ACTION_2_T578CA6FF8AFCFB94EFCDC4B01AA893036190D50F_H
#define ACTION_2_T578CA6FF8AFCFB94EFCDC4B01AA893036190D50F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.IntPtr,XLuaTest.Pedding>
struct  Action_2_t578CA6FF8AFCFB94EFCDC4B01AA893036190D50F  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T578CA6FF8AFCFB94EFCDC4B01AA893036190D50F_H
#ifndef ACTION_2_TAFAEFC7F0F8B3CB8A8E1F036B3F33B0283B3AD52_H
#define ACTION_2_TAFAEFC7F0F8B3CB8A8E1F036B3F33B0283B3AD52_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.IntPtr,XLuaTest.PushAsTableStruct>
struct  Action_2_tAFAEFC7F0F8B3CB8A8E1F036B3F33B0283B3AD52  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_TAFAEFC7F0F8B3CB8A8E1F036B3F33B0283B3AD52_H
#ifndef ACTION_3_T56CDB294E28A405ACCBC1158BB8FF1615F1C37E0_H
#define ACTION_3_T56CDB294E28A405ACCBC1158BB8FF1615F1C37E0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<System.IntPtr,System.Int32,System.Int32Enum>
struct  Action_3_t56CDB294E28A405ACCBC1158BB8FF1615F1C37E0  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_T56CDB294E28A405ACCBC1158BB8FF1615F1C37E0_H
#ifndef ACTION_3_TAC968214AD437FC0E87E269AE429783BE9D8C535_H
#define ACTION_3_TAC968214AD437FC0E87E269AE429783BE9D8C535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<System.IntPtr,System.Int32,System.Object>
struct  Action_3_tAC968214AD437FC0E87E269AE429783BE9D8C535  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_TAC968214AD437FC0E87E269AE429783BE9D8C535_H
#ifndef ACTION_3_T6182E07E06417E65CE24B630289316E3D1D6836E_H
#define ACTION_3_T6182E07E06417E65CE24B630289316E3D1D6836E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<System.IntPtr,System.Int32,UnityEngine.Bounds>
struct  Action_3_t6182E07E06417E65CE24B630289316E3D1D6836E  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_T6182E07E06417E65CE24B630289316E3D1D6836E_H
#ifndef ACTION_3_T0740C38E1582A75EE3330074884C2F4208BF551C_H
#define ACTION_3_T0740C38E1582A75EE3330074884C2F4208BF551C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<System.IntPtr,System.Int32,UnityEngine.Color>
struct  Action_3_t0740C38E1582A75EE3330074884C2F4208BF551C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_T0740C38E1582A75EE3330074884C2F4208BF551C_H
#ifndef ACTION_3_T22F9E084364A14EE229E12294036E35D21D8A0F6_H
#define ACTION_3_T22F9E084364A14EE229E12294036E35D21D8A0F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<System.IntPtr,System.Int32,UnityEngine.Quaternion>
struct  Action_3_t22F9E084364A14EE229E12294036E35D21D8A0F6  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_T22F9E084364A14EE229E12294036E35D21D8A0F6_H
#ifndef ACTION_3_T215960DC3656F52FACEA1836DC43C2FB808CDB3E_H
#define ACTION_3_T215960DC3656F52FACEA1836DC43C2FB808CDB3E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<System.IntPtr,System.Int32,UnityEngine.Ray2D>
struct  Action_3_t215960DC3656F52FACEA1836DC43C2FB808CDB3E  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_T215960DC3656F52FACEA1836DC43C2FB808CDB3E_H
#ifndef ACTION_3_T4E6E89250D2B4BD33FADA252589ED4C9A1814489_H
#define ACTION_3_T4E6E89250D2B4BD33FADA252589ED4C9A1814489_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<System.IntPtr,System.Int32,UnityEngine.Ray>
struct  Action_3_t4E6E89250D2B4BD33FADA252589ED4C9A1814489  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_T4E6E89250D2B4BD33FADA252589ED4C9A1814489_H
#ifndef ACTION_3_T88F5650816F3F8316496581E84FF8215FAC0D7F0_H
#define ACTION_3_T88F5650816F3F8316496581E84FF8215FAC0D7F0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<System.IntPtr,System.Int32,UnityEngine.Vector2>
struct  Action_3_t88F5650816F3F8316496581E84FF8215FAC0D7F0  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_T88F5650816F3F8316496581E84FF8215FAC0D7F0_H
#ifndef ACTION_3_T7C15729E8D25F204E5600DD58CB5C13AA09F0D77_H
#define ACTION_3_T7C15729E8D25F204E5600DD58CB5C13AA09F0D77_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<System.IntPtr,System.Int32,UnityEngine.Vector3>
struct  Action_3_t7C15729E8D25F204E5600DD58CB5C13AA09F0D77  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_T7C15729E8D25F204E5600DD58CB5C13AA09F0D77_H
#ifndef ACTION_3_T246223420BE1031546149482564E0B8ECC791FA0_H
#define ACTION_3_T246223420BE1031546149482564E0B8ECC791FA0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<System.IntPtr,System.Int32,UnityEngine.Vector4>
struct  Action_3_t246223420BE1031546149482564E0B8ECC791FA0  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_T246223420BE1031546149482564E0B8ECC791FA0_H
#ifndef ACTION_3_TA7F9F909F7344FE8616B5830B523C2FD7935C4E4_H
#define ACTION_3_TA7F9F909F7344FE8616B5830B523C2FD7935C4E4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<System.IntPtr,System.Int32,XLuaTest.MyStruct>
struct  Action_3_tA7F9F909F7344FE8616B5830B523C2FD7935C4E4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_TA7F9F909F7344FE8616B5830B523C2FD7935C4E4_H
#ifndef ACTION_3_TA24D2E42FEF24046BACE285F7BAE9A134D93C232_H
#define ACTION_3_TA24D2E42FEF24046BACE285F7BAE9A134D93C232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<System.IntPtr,System.Int32,XLuaTest.Pedding>
struct  Action_3_tA24D2E42FEF24046BACE285F7BAE9A134D93C232  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_TA24D2E42FEF24046BACE285F7BAE9A134D93C232_H
#ifndef ACTION_3_TE5BE52CCB50C09543DBAD024C9F9E8FD81058E4A_H
#define ACTION_3_TE5BE52CCB50C09543DBAD024C9F9E8FD81058E4A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<System.IntPtr,System.Int32,XLuaTest.PushAsTableStruct>
struct  Action_3_tE5BE52CCB50C09543DBAD024C9F9E8FD81058E4A  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_TE5BE52CCB50C09543DBAD024C9F9E8FD81058E4A_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifndef GETFUNC_1_TF7F38012D311FDC3137218FE4196109C09449E2B_H
#define GETFUNC_1_TF7F38012D311FDC3137218FE4196109C09449E2B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_GetFunc`1<System.Int32Enum>
struct  GetFunc_1_tF7F38012D311FDC3137218FE4196109C09449E2B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETFUNC_1_TF7F38012D311FDC3137218FE4196109C09449E2B_H
#ifndef GETFUNC_1_T96991E0F42AFE4D0E82A63460A95454607543DC5_H
#define GETFUNC_1_T96991E0F42AFE4D0E82A63460A95454607543DC5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_GetFunc`1<System.Object>
struct  GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETFUNC_1_T96991E0F42AFE4D0E82A63460A95454607543DC5_H
#ifndef GETFUNC_1_TCA125211118C818F1A29D887F434C3928963D04A_H
#define GETFUNC_1_TCA125211118C818F1A29D887F434C3928963D04A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_GetFunc`1<UnityEngine.Bounds>
struct  GetFunc_1_tCA125211118C818F1A29D887F434C3928963D04A  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETFUNC_1_TCA125211118C818F1A29D887F434C3928963D04A_H
#ifndef GETFUNC_1_T153D598E77A07B849A79ECA27732D38FBE9476CF_H
#define GETFUNC_1_T153D598E77A07B849A79ECA27732D38FBE9476CF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_GetFunc`1<UnityEngine.Color>
struct  GetFunc_1_t153D598E77A07B849A79ECA27732D38FBE9476CF  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETFUNC_1_T153D598E77A07B849A79ECA27732D38FBE9476CF_H
#ifndef GETFUNC_1_TCFFF67F8370DE88E22729E229DA1876C1F8855C6_H
#define GETFUNC_1_TCFFF67F8370DE88E22729E229DA1876C1F8855C6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_GetFunc`1<UnityEngine.Quaternion>
struct  GetFunc_1_tCFFF67F8370DE88E22729E229DA1876C1F8855C6  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETFUNC_1_TCFFF67F8370DE88E22729E229DA1876C1F8855C6_H
#ifndef GETFUNC_1_T4203D08418182984A6E80F74751D65862EA2075C_H
#define GETFUNC_1_T4203D08418182984A6E80F74751D65862EA2075C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_GetFunc`1<UnityEngine.Ray2D>
struct  GetFunc_1_t4203D08418182984A6E80F74751D65862EA2075C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETFUNC_1_T4203D08418182984A6E80F74751D65862EA2075C_H
#ifndef GETFUNC_1_T65EE73BA79CC7396519573C386E16365B57DA9D5_H
#define GETFUNC_1_T65EE73BA79CC7396519573C386E16365B57DA9D5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_GetFunc`1<UnityEngine.Ray>
struct  GetFunc_1_t65EE73BA79CC7396519573C386E16365B57DA9D5  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETFUNC_1_T65EE73BA79CC7396519573C386E16365B57DA9D5_H
#ifndef GETFUNC_1_T02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216_H
#define GETFUNC_1_T02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_GetFunc`1<UnityEngine.Vector2>
struct  GetFunc_1_t02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETFUNC_1_T02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216_H
#ifndef GETFUNC_1_T98C5E9EAF0ABD030E19D74EDE569B8C51C089910_H
#define GETFUNC_1_T98C5E9EAF0ABD030E19D74EDE569B8C51C089910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_GetFunc`1<UnityEngine.Vector3>
struct  GetFunc_1_t98C5E9EAF0ABD030E19D74EDE569B8C51C089910  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETFUNC_1_T98C5E9EAF0ABD030E19D74EDE569B8C51C089910_H
#ifndef GETFUNC_1_TDB38D100E435F97CD7E766BAC0AFCE9392F890C2_H
#define GETFUNC_1_TDB38D100E435F97CD7E766BAC0AFCE9392F890C2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_GetFunc`1<UnityEngine.Vector4>
struct  GetFunc_1_tDB38D100E435F97CD7E766BAC0AFCE9392F890C2  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETFUNC_1_TDB38D100E435F97CD7E766BAC0AFCE9392F890C2_H
#ifndef GETFUNC_1_T74C2FED57C42BC99DAD9FD148C145CB2C9A120C0_H
#define GETFUNC_1_T74C2FED57C42BC99DAD9FD148C145CB2C9A120C0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_GetFunc`1<XLuaTest.MyStruct>
struct  GetFunc_1_t74C2FED57C42BC99DAD9FD148C145CB2C9A120C0  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETFUNC_1_T74C2FED57C42BC99DAD9FD148C145CB2C9A120C0_H
#ifndef GETFUNC_1_T5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35_H
#define GETFUNC_1_T5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_GetFunc`1<XLuaTest.Pedding>
struct  GetFunc_1_t5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETFUNC_1_T5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35_H
#ifndef GETFUNC_1_T066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC_H
#define GETFUNC_1_T066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.ObjectTranslator_GetFunc`1<XLuaTest.PushAsTableStruct>
struct  GetFunc_1_t066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETFUNC_1_T066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC_H
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void XLuaTest.GenericStruct`1<System.Int32>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void GenericStruct_1__ctor_m983C583BA7959340F748A7B7EA1D541B85C32B39_gshared (GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789 * __this, int32_t ___a0, const RuntimeMethod* method);
// System.Void XLua.DelegateBridge::InParam<System.Int32>(T)
extern "C" IL2CPP_METHOD_ATTR void DelegateBridge_InParam_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m2BE571F94915B5BFC55E216237C19497F87C8B52_gshared (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * __this, int32_t ___p0, const RuntimeMethod* method);
// T XLuaTest.GenericStruct`1<System.Int32>::GetA(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t GenericStruct_1_GetA_mD98B6CC243403A72642A25FC600AE4903708D624_gshared (GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789 * __this, int32_t ___p0, const RuntimeMethod* method);
// System.Void XLuaTest.GenericStruct`1<System.Object>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void GenericStruct_1__ctor_m52552182598E082BE70B5711F34DE6789EF5770A_gshared (GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E * __this, RuntimeObject * ___a0, const RuntimeMethod* method);
// T XLuaTest.GenericStruct`1<System.Object>::GetA(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GenericStruct_1_GetA_m1E42C9175CECBAADF4BCF0944CD012F4FA00969C_gshared (GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E * __this, int32_t ___p0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void XLua.LuaDLL.Lua::xlua_pushinteger(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Lua_xlua_pushinteger_m51FCBE18861795DA89F00E386715472312BE5117 (intptr_t ___L0, int32_t ___value1, const RuntimeMethod* method);
// System.Void XLua.LuaDLL.Lua::lua_pushnumber(System.IntPtr,System.Double)
extern "C" IL2CPP_METHOD_ATTR void Lua_lua_pushnumber_m08C05DCF159B2D95424D7CE58521FC525608836E (intptr_t ___L0, double ___number1, const RuntimeMethod* method);
// System.Int32 XLua.LuaDLL.Lua::xlua_tointeger(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Lua_xlua_tointeger_m795EEB652955F86FF89C39BACB06316754CB5631 (intptr_t ___L0, int32_t ___index1, const RuntimeMethod* method);
// System.Double XLua.LuaDLL.Lua::lua_tonumber(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR double Lua_lua_tonumber_m7FA1ABB987D3534A4850C2287E4F698D494C3D3F (intptr_t ___L0, int32_t ___index1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void XLuaTest.BaseTestHelper::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseTestHelper__ctor_mC47434A2BEFCFB584A08227569E5437B27381928 (BaseTestHelper_t794E250C7F0652F308490859319BC8681298B927 * __this, const RuntimeMethod* method);
// System.Void XLua.DelegateBridge::InvokeSessionStart()
extern "C" IL2CPP_METHOD_ATTR void DelegateBridge_InvokeSessionStart_mB01D5A166A3F2CFC801C608C5C05D0048FF23D50 (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * __this, const RuntimeMethod* method);
// System.Void XLua.DelegateBridge::Invoke(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DelegateBridge_Invoke_m8EB2A558888137BF9084126F09A3821BB5C62D66 (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * __this, int32_t ___nRet0, const RuntimeMethod* method);
// System.Void XLua.DelegateBridge::InvokeSessionEnd()
extern "C" IL2CPP_METHOD_ATTR void DelegateBridge_InvokeSessionEnd_mB0B7DC120401CBB4914CFE3DEFC3A9859E8AF2B1 (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * __this, const RuntimeMethod* method);
// System.Void XLuaTest.GenericStruct`1<System.Int32>::.ctor(T)
inline void GenericStruct_1__ctor_m983C583BA7959340F748A7B7EA1D541B85C32B39 (GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789 * __this, int32_t ___a0, const RuntimeMethod* method)
{
	((  void (*) (GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789 *, int32_t, const RuntimeMethod*))GenericStruct_1__ctor_m983C583BA7959340F748A7B7EA1D541B85C32B39_gshared)(__this, ___a0, method);
}
// System.Void XLua.DelegateBridge::InParam<System.Int32>(T)
inline void DelegateBridge_InParam_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m2BE571F94915B5BFC55E216237C19497F87C8B52 (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * __this, int32_t ___p0, const RuntimeMethod* method)
{
	((  void (*) (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *, int32_t, const RuntimeMethod*))DelegateBridge_InParam_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m2BE571F94915B5BFC55E216237C19497F87C8B52_gshared)(__this, ___p0, method);
}
// T XLuaTest.GenericStruct`1<System.Int32>::GetA(System.Int32)
inline int32_t GenericStruct_1_GetA_mD98B6CC243403A72642A25FC600AE4903708D624 (GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789 * __this, int32_t ___p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789 *, int32_t, const RuntimeMethod*))GenericStruct_1_GetA_mD98B6CC243403A72642A25FC600AE4903708D624_gshared)(__this, ___p0, method);
}
// System.Void XLuaTest.GenericStruct`1<System.Object>::.ctor(T)
inline void GenericStruct_1__ctor_m52552182598E082BE70B5711F34DE6789EF5770A (GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E * __this, RuntimeObject * ___a0, const RuntimeMethod* method)
{
	((  void (*) (GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E *, RuntimeObject *, const RuntimeMethod*))GenericStruct_1__ctor_m52552182598E082BE70B5711F34DE6789EF5770A_gshared)(__this, ___a0, method);
}
// T XLuaTest.GenericStruct`1<System.Object>::GetA(System.Int32)
inline RuntimeObject * GenericStruct_1_GetA_m1E42C9175CECBAADF4BCF0944CD012F4FA00969C (GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E * __this, int32_t ___p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E *, int32_t, const RuntimeMethod*))GenericStruct_1_GetA_m1E42C9175CECBAADF4BCF0944CD012F4FA00969C_gshared)(__this, ___p0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void XLua.ObjectTranslator_<>c__155`1<System.Object>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__155_1__cctor_mCAD793E391925EA813B81113038B35AFCCEA0D02_gshared (const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA * L_0 = (U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void XLua.ObjectTranslator_<>c__155`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__155_1__ctor_mF440CBFA936644DCFE033C8B2895CB3FCCD217C3_gshared (U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA * __this, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void XLua.ObjectTranslator_<>c__155`1<System.Object>::<tryGetPushFuncByType>b__155_0(System.IntPtr,System.Byte)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__155_1_U3CtryGetPushFuncByTypeU3Eb__155_0_m4D2A2F0F8CE1D3D11073E541020DF3D877D4C6A7_gshared (U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA * __this, intptr_t ___L0, uint8_t ___v1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		intptr_t L_0 = ___L0;
		uint8_t L_1 = ___v1;
		Lua_xlua_pushinteger_m51FCBE18861795DA89F00E386715472312BE5117((intptr_t)L_0, (int32_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void XLua.ObjectTranslator_<>c__155`1<System.Object>::<tryGetPushFuncByType>b__155_1(System.IntPtr,System.SByte)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__155_1_U3CtryGetPushFuncByTypeU3Eb__155_1_m83406F47F7921B946249DA52BC1C52DF50D96647_gshared (U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA * __this, intptr_t ___L0, int8_t ___v1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		intptr_t L_0 = ___L0;
		int8_t L_1 = ___v1;
		Lua_xlua_pushinteger_m51FCBE18861795DA89F00E386715472312BE5117((intptr_t)L_0, (int32_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void XLua.ObjectTranslator_<>c__155`1<System.Object>::<tryGetPushFuncByType>b__155_2(System.IntPtr,System.Char)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__155_1_U3CtryGetPushFuncByTypeU3Eb__155_2_m0D181494185B2AA7C978F1E9866933BF7432ACCB_gshared (U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA * __this, intptr_t ___L0, Il2CppChar ___v1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		intptr_t L_0 = ___L0;
		Il2CppChar L_1 = ___v1;
		Lua_xlua_pushinteger_m51FCBE18861795DA89F00E386715472312BE5117((intptr_t)L_0, (int32_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void XLua.ObjectTranslator_<>c__155`1<System.Object>::<tryGetPushFuncByType>b__155_3(System.IntPtr,System.Int16)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__155_1_U3CtryGetPushFuncByTypeU3Eb__155_3_m357941EBAF9FBE86D042BE6DDA4A3FAC90F981ED_gshared (U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA * __this, intptr_t ___L0, int16_t ___v1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		intptr_t L_0 = ___L0;
		int16_t L_1 = ___v1;
		Lua_xlua_pushinteger_m51FCBE18861795DA89F00E386715472312BE5117((intptr_t)L_0, (int32_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void XLua.ObjectTranslator_<>c__155`1<System.Object>::<tryGetPushFuncByType>b__155_4(System.IntPtr,System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__155_1_U3CtryGetPushFuncByTypeU3Eb__155_4_mEB52F752A6935AABFCF6BCCE4F64F0F7DB2FD248_gshared (U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA * __this, intptr_t ___L0, uint16_t ___v1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		intptr_t L_0 = ___L0;
		uint16_t L_1 = ___v1;
		Lua_xlua_pushinteger_m51FCBE18861795DA89F00E386715472312BE5117((intptr_t)L_0, (int32_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void XLua.ObjectTranslator_<>c__155`1<System.Object>::<tryGetPushFuncByType>b__155_5(System.IntPtr,System.Single)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__155_1_U3CtryGetPushFuncByTypeU3Eb__155_5_mFE9E774797E45645A64D68D3A0C5E4144EC1D8D7_gshared (U3CU3Ec__155_1_t53A5B5EE1F8A960515D5162268D55738B938B0CA * __this, intptr_t ___L0, float ___v1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		intptr_t L_0 = ___L0;
		float L_1 = ___v1;
		Lua_lua_pushnumber_m08C05DCF159B2D95424D7CE58521FC525608836E((intptr_t)L_0, (double)(((double)((double)L_1))), /*hidden argument*/NULL);
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
// System.Void XLua.ObjectTranslator_<>c__157`1<System.Object>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__157_1__cctor_m4B10274F9512A61C8F49F1C8CBF5CD71617260D2_gshared (const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22 * L_0 = (U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void XLua.ObjectTranslator_<>c__157`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__157_1__ctor_m280E9EE2ED05E0FDE285C658F30DEA9CB7D04B38_gshared (U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22 * __this, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte XLua.ObjectTranslator_<>c__157`1<System.Object>::<tryGetGetFuncByType>b__157_1(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint8_t U3CU3Ec__157_1_U3CtryGetGetFuncByTypeU3Eb__157_1_mEF0D6A2047FE6BDAC0BAC2FC9B32AAA03CF7F5FC_gshared (U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22 * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		intptr_t L_0 = ___L0;
		int32_t L_1 = ___idx1;
		int32_t L_2 = Lua_xlua_tointeger_m795EEB652955F86FF89C39BACB06316754CB5631((intptr_t)L_0, (int32_t)L_1, /*hidden argument*/NULL);
		return (uint8_t)(((int32_t)((uint8_t)L_2)));
	}
}
// System.SByte XLua.ObjectTranslator_<>c__157`1<System.Object>::<tryGetGetFuncByType>b__157_2(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int8_t U3CU3Ec__157_1_U3CtryGetGetFuncByTypeU3Eb__157_2_m6346D10830182A71FAA35DA46675344B04BB354E_gshared (U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22 * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		intptr_t L_0 = ___L0;
		int32_t L_1 = ___idx1;
		int32_t L_2 = Lua_xlua_tointeger_m795EEB652955F86FF89C39BACB06316754CB5631((intptr_t)L_0, (int32_t)L_1, /*hidden argument*/NULL);
		return (((int8_t)((int8_t)L_2)));
	}
}
// System.Char XLua.ObjectTranslator_<>c__157`1<System.Object>::<tryGetGetFuncByType>b__157_3(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar U3CU3Ec__157_1_U3CtryGetGetFuncByTypeU3Eb__157_3_mC439358679C5C43B48CD22E7A3A9404D7FC7EC77_gshared (U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22 * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		intptr_t L_0 = ___L0;
		int32_t L_1 = ___idx1;
		int32_t L_2 = Lua_xlua_tointeger_m795EEB652955F86FF89C39BACB06316754CB5631((intptr_t)L_0, (int32_t)L_1, /*hidden argument*/NULL);
		return (((int32_t)((uint16_t)L_2)));
	}
}
// System.Int16 XLua.ObjectTranslator_<>c__157`1<System.Object>::<tryGetGetFuncByType>b__157_4(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int16_t U3CU3Ec__157_1_U3CtryGetGetFuncByTypeU3Eb__157_4_mB771122A3BEBB236DBF4A8F5BE74F54EF397A6D5_gshared (U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22 * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		intptr_t L_0 = ___L0;
		int32_t L_1 = ___idx1;
		int32_t L_2 = Lua_xlua_tointeger_m795EEB652955F86FF89C39BACB06316754CB5631((intptr_t)L_0, (int32_t)L_1, /*hidden argument*/NULL);
		return (((int16_t)((int16_t)L_2)));
	}
}
// System.UInt16 XLua.ObjectTranslator_<>c__157`1<System.Object>::<tryGetGetFuncByType>b__157_5(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint16_t U3CU3Ec__157_1_U3CtryGetGetFuncByTypeU3Eb__157_5_mEA994A559038FE810BD21BF6176653CD5D3E4245_gshared (U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22 * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		intptr_t L_0 = ___L0;
		int32_t L_1 = ___idx1;
		int32_t L_2 = Lua_xlua_tointeger_m795EEB652955F86FF89C39BACB06316754CB5631((intptr_t)L_0, (int32_t)L_1, /*hidden argument*/NULL);
		return (uint16_t)(((int32_t)((uint16_t)L_2)));
	}
}
// System.Single XLua.ObjectTranslator_<>c__157`1<System.Object>::<tryGetGetFuncByType>b__157_6(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR float U3CU3Ec__157_1_U3CtryGetGetFuncByTypeU3Eb__157_6_m87E4D04A2850A805E418335712BD81D5679E068F_gshared (U3CU3Ec__157_1_t4AF15B74E3C78181170AE1FE47EE0F405F516D22 * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		intptr_t L_0 = ___L0;
		int32_t L_1 = ___idx1;
		double L_2 = Lua_lua_tonumber_m7FA1ABB987D3534A4850C2287E4F698D494C3D3F((intptr_t)L_0, (int32_t)L_1, /*hidden argument*/NULL);
		return (((float)((float)L_2)));
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
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<System.Int32Enum>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1__ctor_m36B5613C5F6DC7B8949963C6592D6ED367016C9D_gshared (U3CU3Ec__DisplayClass159_0_1_t6BC500AED16F3B515D133892F73B27F06D03BE7B * __this, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T XLua.ObjectTranslator_<>c__DisplayClass159_0`1<System.Int32Enum>::<RegisterPushAndGetAndUpdate>b__0(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__0_mE108DF1CB2D09CC52AAAFC7AE9A92EF8811D98A1_gshared (U3CU3Ec__DisplayClass159_0_1_t6BC500AED16F3B515D133892F73B27F06D03BE7B * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_tF7F38012D311FDC3137218FE4196109C09449E2B * L_0 = (GetFunc_1_tF7F38012D311FDC3137218FE4196109C09449E2B *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_tF7F38012D311FDC3137218FE4196109C09449E2B *)L_0);
		((  void (*) (GetFunc_1_tF7F38012D311FDC3137218FE4196109C09449E2B *, intptr_t, int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_tF7F38012D311FDC3137218FE4196109C09449E2B *)L_0, (intptr_t)L_1, (int32_t)L_2, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		int32_t L_3 = V_0;
		V_1 = (int32_t)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<System.Int32Enum>::<RegisterPushAndGetAndUpdate>b__1(System.IntPtr,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__1_m59176B8A1C0F9FD780B5AE73B72FC48F783EF1D8_gshared (U3CU3Ec__DisplayClass159_0_1_t6BC500AED16F3B515D133892F73B27F06D03BE7B * __this, intptr_t ___L0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_2_t9F54A6B2BACD03E76E99C3EE9E302C0EF9ADC069 * L_0 = (Action_2_t9F54A6B2BACD03E76E99C3EE9E302C0EF9ADC069 *)__this->get_push_1();
		intptr_t L_1 = ___L0;
		RuntimeObject * L_2 = ___obj1;
		NullCheck((Action_2_t9F54A6B2BACD03E76E99C3EE9E302C0EF9ADC069 *)L_0);
		((  void (*) (Action_2_t9F54A6B2BACD03E76E99C3EE9E302C0EF9ADC069 *, intptr_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Action_2_t9F54A6B2BACD03E76E99C3EE9E302C0EF9ADC069 *)L_0, (intptr_t)L_1, (int32_t)((*(int32_t*)((int32_t*)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Object XLua.ObjectTranslator_<>c__DisplayClass159_0`1<System.Int32Enum>::<RegisterPushAndGetAndUpdate>b__2(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__2_m9E5B8F256C04FAA9C055EB1DD9C1A5E7F33B61AE_gshared (U3CU3Ec__DisplayClass159_0_1_t6BC500AED16F3B515D133892F73B27F06D03BE7B * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_tF7F38012D311FDC3137218FE4196109C09449E2B * L_0 = (GetFunc_1_tF7F38012D311FDC3137218FE4196109C09449E2B *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_tF7F38012D311FDC3137218FE4196109C09449E2B *)L_0);
		((  void (*) (GetFunc_1_tF7F38012D311FDC3137218FE4196109C09449E2B *, intptr_t, int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_tF7F38012D311FDC3137218FE4196109C09449E2B *)L_0, (intptr_t)L_1, (int32_t)L_2, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), &L_4);
		V_1 = (RuntimeObject *)L_5;
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<System.Int32Enum>::<RegisterPushAndGetAndUpdate>b__3(System.IntPtr,System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__3_m02E029A001A66208BD1E82DA3E56CCAD49B5E9B5_gshared (U3CU3Ec__DisplayClass159_0_1_t6BC500AED16F3B515D133892F73B27F06D03BE7B * __this, intptr_t ___L0, int32_t ___idx1, RuntimeObject * ___obj2, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_3_t56CDB294E28A405ACCBC1158BB8FF1615F1C37E0 * L_0 = (Action_3_t56CDB294E28A405ACCBC1158BB8FF1615F1C37E0 *)__this->get_update_2();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		RuntimeObject * L_3 = ___obj2;
		NullCheck((Action_3_t56CDB294E28A405ACCBC1158BB8FF1615F1C37E0 *)L_0);
		((  void (*) (Action_3_t56CDB294E28A405ACCBC1158BB8FF1615F1C37E0 *, intptr_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Action_3_t56CDB294E28A405ACCBC1158BB8FF1615F1C37E0 *)L_0, (intptr_t)L_1, (int32_t)L_2, (int32_t)((*(int32_t*)((int32_t*)UnBox(L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1__ctor_mA7A6D12B0FF7B351F3EE8C3A7E0DC2AA991BA343_gshared (U3CU3Ec__DisplayClass159_0_1_tC5C39851A0FB7A22E0C730A0AD41139CC51DBC4B * __this, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T XLua.ObjectTranslator_<>c__DisplayClass159_0`1<System.Object>::<RegisterPushAndGetAndUpdate>b__0(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__0_mF59E2879A25F273CCD8089E5C7926B2436B2001F_gshared (U3CU3Ec__DisplayClass159_0_1_tC5C39851A0FB7A22E0C730A0AD41139CC51DBC4B * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 * L_0 = (GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 *)L_0);
		((  void (*) (GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 *, intptr_t, int32_t, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 *)L_0, (intptr_t)L_1, (int32_t)L_2, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject * L_3 = V_0;
		V_1 = (RuntimeObject *)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject * L_4 = V_1;
		return L_4;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<System.Object>::<RegisterPushAndGetAndUpdate>b__1(System.IntPtr,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__1_m62DABCCAAB93E1C59C5518E7E28B4CE3BE4E9BE2_gshared (U3CU3Ec__DisplayClass159_0_1_tC5C39851A0FB7A22E0C730A0AD41139CC51DBC4B * __this, intptr_t ___L0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_2_t5A40AC088AB1ABA90B50A631CFDC1F9303EEE8C8 * L_0 = (Action_2_t5A40AC088AB1ABA90B50A631CFDC1F9303EEE8C8 *)__this->get_push_1();
		intptr_t L_1 = ___L0;
		RuntimeObject * L_2 = ___obj1;
		NullCheck((Action_2_t5A40AC088AB1ABA90B50A631CFDC1F9303EEE8C8 *)L_0);
		((  void (*) (Action_2_t5A40AC088AB1ABA90B50A631CFDC1F9303EEE8C8 *, intptr_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Action_2_t5A40AC088AB1ABA90B50A631CFDC1F9303EEE8C8 *)L_0, (intptr_t)L_1, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Object XLua.ObjectTranslator_<>c__DisplayClass159_0`1<System.Object>::<RegisterPushAndGetAndUpdate>b__2(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__2_m0F0011A6715F429D0744BAA094F73A24FE46B9BD_gshared (U3CU3Ec__DisplayClass159_0_1_tC5C39851A0FB7A22E0C730A0AD41139CC51DBC4B * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 * L_0 = (GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 *)L_0);
		((  void (*) (GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 *, intptr_t, int32_t, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 *)L_0, (intptr_t)L_1, (int32_t)L_2, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject * L_3 = V_0;
		V_1 = (RuntimeObject *)L_3;
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject * L_4 = V_1;
		return L_4;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<System.Object>::<RegisterPushAndGetAndUpdate>b__3(System.IntPtr,System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__3_mE717642E93EB82D2B58A88B1CDEEE84B6BB126E1_gshared (U3CU3Ec__DisplayClass159_0_1_tC5C39851A0FB7A22E0C730A0AD41139CC51DBC4B * __this, intptr_t ___L0, int32_t ___idx1, RuntimeObject * ___obj2, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_3_tAC968214AD437FC0E87E269AE429783BE9D8C535 * L_0 = (Action_3_tAC968214AD437FC0E87E269AE429783BE9D8C535 *)__this->get_update_2();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		RuntimeObject * L_3 = ___obj2;
		NullCheck((Action_3_tAC968214AD437FC0E87E269AE429783BE9D8C535 *)L_0);
		((  void (*) (Action_3_tAC968214AD437FC0E87E269AE429783BE9D8C535 *, intptr_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Action_3_tAC968214AD437FC0E87E269AE429783BE9D8C535 *)L_0, (intptr_t)L_1, (int32_t)L_2, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Bounds>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1__ctor_m4A732B434A041592F9FC21446809AED792B840D4_gshared (U3CU3Ec__DisplayClass159_0_1_t92559D5E6A753E8253188EC2493431A739F95543 * __this, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Bounds>::<RegisterPushAndGetAndUpdate>b__0(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__0_m48448D4348E52B223320A6A01F3981DF965FAB51_gshared (U3CU3Ec__DisplayClass159_0_1_t92559D5E6A753E8253188EC2493431A739F95543 * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_1;
	memset(&V_1, 0, sizeof(V_1));
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_tCA125211118C818F1A29D887F434C3928963D04A * L_0 = (GetFunc_1_tCA125211118C818F1A29D887F434C3928963D04A *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_tCA125211118C818F1A29D887F434C3928963D04A *)L_0);
		((  void (*) (GetFunc_1_tCA125211118C818F1A29D887F434C3928963D04A *, intptr_t, int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_tCA125211118C818F1A29D887F434C3928963D04A *)L_0, (intptr_t)L_1, (int32_t)L_2, (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_3 = V_0;
		V_1 = (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 )L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_4 = V_1;
		return L_4;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Bounds>::<RegisterPushAndGetAndUpdate>b__1(System.IntPtr,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__1_m8E2A1FDA8E4F1D91477F7A7A87ECD809C0888E96_gshared (U3CU3Ec__DisplayClass159_0_1_t92559D5E6A753E8253188EC2493431A739F95543 * __this, intptr_t ___L0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_2_t27EAD6315F76BD644F93F64978C6EABEA42438F2 * L_0 = (Action_2_t27EAD6315F76BD644F93F64978C6EABEA42438F2 *)__this->get_push_1();
		intptr_t L_1 = ___L0;
		RuntimeObject * L_2 = ___obj1;
		NullCheck((Action_2_t27EAD6315F76BD644F93F64978C6EABEA42438F2 *)L_0);
		((  void (*) (Action_2_t27EAD6315F76BD644F93F64978C6EABEA42438F2 *, intptr_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Action_2_t27EAD6315F76BD644F93F64978C6EABEA42438F2 *)L_0, (intptr_t)L_1, (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 )((*(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Object XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Bounds>::<RegisterPushAndGetAndUpdate>b__2(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__2_m5440DF63CF33AF25432D55542CD2E3CC96192BE7_gshared (U3CU3Ec__DisplayClass159_0_1_t92559D5E6A753E8253188EC2493431A739F95543 * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_tCA125211118C818F1A29D887F434C3928963D04A * L_0 = (GetFunc_1_tCA125211118C818F1A29D887F434C3928963D04A *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_tCA125211118C818F1A29D887F434C3928963D04A *)L_0);
		((  void (*) (GetFunc_1_tCA125211118C818F1A29D887F434C3928963D04A *, intptr_t, int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_tCA125211118C818F1A29D887F434C3928963D04A *)L_0, (intptr_t)L_1, (int32_t)L_2, (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_3 = V_0;
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_4 = L_3;
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), &L_4);
		V_1 = (RuntimeObject *)L_5;
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Bounds>::<RegisterPushAndGetAndUpdate>b__3(System.IntPtr,System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__3_mA2C4932FA3A889453A0CADB212641A977054977F_gshared (U3CU3Ec__DisplayClass159_0_1_t92559D5E6A753E8253188EC2493431A739F95543 * __this, intptr_t ___L0, int32_t ___idx1, RuntimeObject * ___obj2, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_3_t6182E07E06417E65CE24B630289316E3D1D6836E * L_0 = (Action_3_t6182E07E06417E65CE24B630289316E3D1D6836E *)__this->get_update_2();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		RuntimeObject * L_3 = ___obj2;
		NullCheck((Action_3_t6182E07E06417E65CE24B630289316E3D1D6836E *)L_0);
		((  void (*) (Action_3_t6182E07E06417E65CE24B630289316E3D1D6836E *, intptr_t, int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Action_3_t6182E07E06417E65CE24B630289316E3D1D6836E *)L_0, (intptr_t)L_1, (int32_t)L_2, (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 )((*(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Color>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1__ctor_mEC3B45D1B01CAC728515E463E2FCFDB3FBCD1D68_gshared (U3CU3Ec__DisplayClass159_0_1_t227DCCC68410156943096285F45422E520570BAF * __this, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Color>::<RegisterPushAndGetAndUpdate>b__0(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__0_mE76A77B18F591E51482103338175900EF47000D2_gshared (U3CU3Ec__DisplayClass159_0_1_t227DCCC68410156943096285F45422E520570BAF * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  V_1;
	memset(&V_1, 0, sizeof(V_1));
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_t153D598E77A07B849A79ECA27732D38FBE9476CF * L_0 = (GetFunc_1_t153D598E77A07B849A79ECA27732D38FBE9476CF *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_t153D598E77A07B849A79ECA27732D38FBE9476CF *)L_0);
		((  void (*) (GetFunc_1_t153D598E77A07B849A79ECA27732D38FBE9476CF *, intptr_t, int32_t, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_t153D598E77A07B849A79ECA27732D38FBE9476CF *)L_0, (intptr_t)L_1, (int32_t)L_2, (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *)(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3 = V_0;
		V_1 = (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 )L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4 = V_1;
		return L_4;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Color>::<RegisterPushAndGetAndUpdate>b__1(System.IntPtr,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__1_mF84A4325A320FF0DB6DFA91C8A162817A0AAE7F1_gshared (U3CU3Ec__DisplayClass159_0_1_t227DCCC68410156943096285F45422E520570BAF * __this, intptr_t ___L0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_2_t0C5870DB977491CE7293F07318380FF7E057AD43 * L_0 = (Action_2_t0C5870DB977491CE7293F07318380FF7E057AD43 *)__this->get_push_1();
		intptr_t L_1 = ___L0;
		RuntimeObject * L_2 = ___obj1;
		NullCheck((Action_2_t0C5870DB977491CE7293F07318380FF7E057AD43 *)L_0);
		((  void (*) (Action_2_t0C5870DB977491CE7293F07318380FF7E057AD43 *, intptr_t, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Action_2_t0C5870DB977491CE7293F07318380FF7E057AD43 *)L_0, (intptr_t)L_1, (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 )((*(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *)((Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Object XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Color>::<RegisterPushAndGetAndUpdate>b__2(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__2_mA0EAF5FD0CBC7C8ECEA587E5FBDFF3204C8F569C_gshared (U3CU3Ec__DisplayClass159_0_1_t227DCCC68410156943096285F45422E520570BAF * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_t153D598E77A07B849A79ECA27732D38FBE9476CF * L_0 = (GetFunc_1_t153D598E77A07B849A79ECA27732D38FBE9476CF *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_t153D598E77A07B849A79ECA27732D38FBE9476CF *)L_0);
		((  void (*) (GetFunc_1_t153D598E77A07B849A79ECA27732D38FBE9476CF *, intptr_t, int32_t, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_t153D598E77A07B849A79ECA27732D38FBE9476CF *)L_0, (intptr_t)L_1, (int32_t)L_2, (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *)(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3 = V_0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4 = L_3;
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), &L_4);
		V_1 = (RuntimeObject *)L_5;
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Color>::<RegisterPushAndGetAndUpdate>b__3(System.IntPtr,System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__3_m5F2A1D20A4816306C457B877F850531DF404607D_gshared (U3CU3Ec__DisplayClass159_0_1_t227DCCC68410156943096285F45422E520570BAF * __this, intptr_t ___L0, int32_t ___idx1, RuntimeObject * ___obj2, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_3_t0740C38E1582A75EE3330074884C2F4208BF551C * L_0 = (Action_3_t0740C38E1582A75EE3330074884C2F4208BF551C *)__this->get_update_2();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		RuntimeObject * L_3 = ___obj2;
		NullCheck((Action_3_t0740C38E1582A75EE3330074884C2F4208BF551C *)L_0);
		((  void (*) (Action_3_t0740C38E1582A75EE3330074884C2F4208BF551C *, intptr_t, int32_t, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Action_3_t0740C38E1582A75EE3330074884C2F4208BF551C *)L_0, (intptr_t)L_1, (int32_t)L_2, (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 )((*(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *)((Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Quaternion>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1__ctor_m015745FBDB1E4ED08B6185DD6B42334A6DC25C10_gshared (U3CU3Ec__DisplayClass159_0_1_t78363EB2A97BFB751551E79E125D08E2DA40DC5F * __this, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Quaternion>::<RegisterPushAndGetAndUpdate>b__0(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__0_m05950978E271FB57E4A7CA655B580FE726A50151_gshared (U3CU3Ec__DisplayClass159_0_1_t78363EB2A97BFB751551E79E125D08E2DA40DC5F * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset(&V_1, 0, sizeof(V_1));
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_tCFFF67F8370DE88E22729E229DA1876C1F8855C6 * L_0 = (GetFunc_1_tCFFF67F8370DE88E22729E229DA1876C1F8855C6 *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_tCFFF67F8370DE88E22729E229DA1876C1F8855C6 *)L_0);
		((  void (*) (GetFunc_1_tCFFF67F8370DE88E22729E229DA1876C1F8855C6 *, intptr_t, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_tCFFF67F8370DE88E22729E229DA1876C1F8855C6 *)L_0, (intptr_t)L_1, (int32_t)L_2, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = V_0;
		V_1 = (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = V_1;
		return L_4;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Quaternion>::<RegisterPushAndGetAndUpdate>b__1(System.IntPtr,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__1_m29DFB20EE025660B3550892E23560FAF473782A7_gshared (U3CU3Ec__DisplayClass159_0_1_t78363EB2A97BFB751551E79E125D08E2DA40DC5F * __this, intptr_t ___L0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_2_t3D4CC218ED0628456909A6713D84D78B5D7FDAE9 * L_0 = (Action_2_t3D4CC218ED0628456909A6713D84D78B5D7FDAE9 *)__this->get_push_1();
		intptr_t L_1 = ___L0;
		RuntimeObject * L_2 = ___obj1;
		NullCheck((Action_2_t3D4CC218ED0628456909A6713D84D78B5D7FDAE9 *)L_0);
		((  void (*) (Action_2_t3D4CC218ED0628456909A6713D84D78B5D7FDAE9 *, intptr_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Action_2_t3D4CC218ED0628456909A6713D84D78B5D7FDAE9 *)L_0, (intptr_t)L_1, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )((*(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Object XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Quaternion>::<RegisterPushAndGetAndUpdate>b__2(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__2_m770FCC1A23E01460B5A64B41B691A261549F2257_gshared (U3CU3Ec__DisplayClass159_0_1_t78363EB2A97BFB751551E79E125D08E2DA40DC5F * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_tCFFF67F8370DE88E22729E229DA1876C1F8855C6 * L_0 = (GetFunc_1_tCFFF67F8370DE88E22729E229DA1876C1F8855C6 *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_tCFFF67F8370DE88E22729E229DA1876C1F8855C6 *)L_0);
		((  void (*) (GetFunc_1_tCFFF67F8370DE88E22729E229DA1876C1F8855C6 *, intptr_t, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_tCFFF67F8370DE88E22729E229DA1876C1F8855C6 *)L_0, (intptr_t)L_1, (int32_t)L_2, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = L_3;
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), &L_4);
		V_1 = (RuntimeObject *)L_5;
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Quaternion>::<RegisterPushAndGetAndUpdate>b__3(System.IntPtr,System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__3_m874FAEE9E15E0A5A5DA03ED0D9690E7E16A74127_gshared (U3CU3Ec__DisplayClass159_0_1_t78363EB2A97BFB751551E79E125D08E2DA40DC5F * __this, intptr_t ___L0, int32_t ___idx1, RuntimeObject * ___obj2, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_3_t22F9E084364A14EE229E12294036E35D21D8A0F6 * L_0 = (Action_3_t22F9E084364A14EE229E12294036E35D21D8A0F6 *)__this->get_update_2();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		RuntimeObject * L_3 = ___obj2;
		NullCheck((Action_3_t22F9E084364A14EE229E12294036E35D21D8A0F6 *)L_0);
		((  void (*) (Action_3_t22F9E084364A14EE229E12294036E35D21D8A0F6 *, intptr_t, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Action_3_t22F9E084364A14EE229E12294036E35D21D8A0F6 *)L_0, (intptr_t)L_1, (int32_t)L_2, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )((*(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Ray2D>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1__ctor_m8905C46E2BDD4DE73E8AF9C3D0984F2001861C41_gshared (U3CU3Ec__DisplayClass159_0_1_tB43828FB0F6D95D62DBF8CCD10A1C21410C7B5B6 * __this, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Ray2D>::<RegisterPushAndGetAndUpdate>b__0(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614  U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__0_m7D268FBF790CD5C2C9B900C08BCC2EF538581E70_gshared (U3CU3Ec__DisplayClass159_0_1_tB43828FB0F6D95D62DBF8CCD10A1C21410C7B5B6 * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614  V_1;
	memset(&V_1, 0, sizeof(V_1));
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_t4203D08418182984A6E80F74751D65862EA2075C * L_0 = (GetFunc_1_t4203D08418182984A6E80F74751D65862EA2075C *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_t4203D08418182984A6E80F74751D65862EA2075C *)L_0);
		((  void (*) (GetFunc_1_t4203D08418182984A6E80F74751D65862EA2075C *, intptr_t, int32_t, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_t4203D08418182984A6E80F74751D65862EA2075C *)L_0, (intptr_t)L_1, (int32_t)L_2, (Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 *)(Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614  L_3 = V_0;
		V_1 = (Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 )L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614  L_4 = V_1;
		return L_4;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Ray2D>::<RegisterPushAndGetAndUpdate>b__1(System.IntPtr,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__1_m48320CEAF73C9AFB15C38EE54DDA3ADBC369B43B_gshared (U3CU3Ec__DisplayClass159_0_1_tB43828FB0F6D95D62DBF8CCD10A1C21410C7B5B6 * __this, intptr_t ___L0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_2_tB0F6A41C750D318EB24116F6A024A227A01CD13F * L_0 = (Action_2_tB0F6A41C750D318EB24116F6A024A227A01CD13F *)__this->get_push_1();
		intptr_t L_1 = ___L0;
		RuntimeObject * L_2 = ___obj1;
		NullCheck((Action_2_tB0F6A41C750D318EB24116F6A024A227A01CD13F *)L_0);
		((  void (*) (Action_2_tB0F6A41C750D318EB24116F6A024A227A01CD13F *, intptr_t, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Action_2_tB0F6A41C750D318EB24116F6A024A227A01CD13F *)L_0, (intptr_t)L_1, (Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 )((*(Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 *)((Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Object XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Ray2D>::<RegisterPushAndGetAndUpdate>b__2(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__2_m41CB7DFDACE659FA5FF7C5A2520EB18DD0BD2501_gshared (U3CU3Ec__DisplayClass159_0_1_tB43828FB0F6D95D62DBF8CCD10A1C21410C7B5B6 * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_t4203D08418182984A6E80F74751D65862EA2075C * L_0 = (GetFunc_1_t4203D08418182984A6E80F74751D65862EA2075C *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_t4203D08418182984A6E80F74751D65862EA2075C *)L_0);
		((  void (*) (GetFunc_1_t4203D08418182984A6E80F74751D65862EA2075C *, intptr_t, int32_t, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_t4203D08418182984A6E80F74751D65862EA2075C *)L_0, (intptr_t)L_1, (int32_t)L_2, (Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 *)(Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614  L_3 = V_0;
		Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614  L_4 = L_3;
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), &L_4);
		V_1 = (RuntimeObject *)L_5;
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Ray2D>::<RegisterPushAndGetAndUpdate>b__3(System.IntPtr,System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__3_m69957F5EC05902E431F15F1EC84DC1749F7549BC_gshared (U3CU3Ec__DisplayClass159_0_1_tB43828FB0F6D95D62DBF8CCD10A1C21410C7B5B6 * __this, intptr_t ___L0, int32_t ___idx1, RuntimeObject * ___obj2, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_3_t215960DC3656F52FACEA1836DC43C2FB808CDB3E * L_0 = (Action_3_t215960DC3656F52FACEA1836DC43C2FB808CDB3E *)__this->get_update_2();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		RuntimeObject * L_3 = ___obj2;
		NullCheck((Action_3_t215960DC3656F52FACEA1836DC43C2FB808CDB3E *)L_0);
		((  void (*) (Action_3_t215960DC3656F52FACEA1836DC43C2FB808CDB3E *, intptr_t, int32_t, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Action_3_t215960DC3656F52FACEA1836DC43C2FB808CDB3E *)L_0, (intptr_t)L_1, (int32_t)L_2, (Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 )((*(Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 *)((Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Ray>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1__ctor_m8214A6B7EFCE078751EFD4F38D9BA05928FACFD5_gshared (U3CU3Ec__DisplayClass159_0_1_tB482FF3F21B3640564976032903783C313B74A62 * __this, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Ray>::<RegisterPushAndGetAndUpdate>b__0(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__0_mF2AFBD764D9510BCAD6CE42888331A96FBB1B011_gshared (U3CU3Ec__DisplayClass159_0_1_tB482FF3F21B3640564976032903783C313B74A62 * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  V_1;
	memset(&V_1, 0, sizeof(V_1));
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_t65EE73BA79CC7396519573C386E16365B57DA9D5 * L_0 = (GetFunc_1_t65EE73BA79CC7396519573C386E16365B57DA9D5 *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_t65EE73BA79CC7396519573C386E16365B57DA9D5 *)L_0);
		((  void (*) (GetFunc_1_t65EE73BA79CC7396519573C386E16365B57DA9D5 *, intptr_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_t65EE73BA79CC7396519573C386E16365B57DA9D5 *)L_0, (intptr_t)L_1, (int32_t)L_2, (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_3 = V_0;
		V_1 = (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 )L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_4 = V_1;
		return L_4;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Ray>::<RegisterPushAndGetAndUpdate>b__1(System.IntPtr,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__1_m2A6E8A17553D26F8731B8063F361F2F3ACAD8A6E_gshared (U3CU3Ec__DisplayClass159_0_1_tB482FF3F21B3640564976032903783C313B74A62 * __this, intptr_t ___L0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_2_tF0FBD665B5F9E08472DA4D98650743D5044D6E68 * L_0 = (Action_2_tF0FBD665B5F9E08472DA4D98650743D5044D6E68 *)__this->get_push_1();
		intptr_t L_1 = ___L0;
		RuntimeObject * L_2 = ___obj1;
		NullCheck((Action_2_tF0FBD665B5F9E08472DA4D98650743D5044D6E68 *)L_0);
		((  void (*) (Action_2_tF0FBD665B5F9E08472DA4D98650743D5044D6E68 *, intptr_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Action_2_tF0FBD665B5F9E08472DA4D98650743D5044D6E68 *)L_0, (intptr_t)L_1, (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 )((*(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Object XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Ray>::<RegisterPushAndGetAndUpdate>b__2(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__2_m256DADE60D233A722435742C2E58AB810048CD8E_gshared (U3CU3Ec__DisplayClass159_0_1_tB482FF3F21B3640564976032903783C313B74A62 * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_t65EE73BA79CC7396519573C386E16365B57DA9D5 * L_0 = (GetFunc_1_t65EE73BA79CC7396519573C386E16365B57DA9D5 *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_t65EE73BA79CC7396519573C386E16365B57DA9D5 *)L_0);
		((  void (*) (GetFunc_1_t65EE73BA79CC7396519573C386E16365B57DA9D5 *, intptr_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_t65EE73BA79CC7396519573C386E16365B57DA9D5 *)L_0, (intptr_t)L_1, (int32_t)L_2, (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_3 = V_0;
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_4 = L_3;
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), &L_4);
		V_1 = (RuntimeObject *)L_5;
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Ray>::<RegisterPushAndGetAndUpdate>b__3(System.IntPtr,System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__3_m52306BA77FF5018B4EF137293B6BF9000925F522_gshared (U3CU3Ec__DisplayClass159_0_1_tB482FF3F21B3640564976032903783C313B74A62 * __this, intptr_t ___L0, int32_t ___idx1, RuntimeObject * ___obj2, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_3_t4E6E89250D2B4BD33FADA252589ED4C9A1814489 * L_0 = (Action_3_t4E6E89250D2B4BD33FADA252589ED4C9A1814489 *)__this->get_update_2();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		RuntimeObject * L_3 = ___obj2;
		NullCheck((Action_3_t4E6E89250D2B4BD33FADA252589ED4C9A1814489 *)L_0);
		((  void (*) (Action_3_t4E6E89250D2B4BD33FADA252589ED4C9A1814489 *, intptr_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Action_3_t4E6E89250D2B4BD33FADA252589ED4C9A1814489 *)L_0, (intptr_t)L_1, (int32_t)L_2, (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 )((*(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Vector2>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1__ctor_m42C7E2F02C138F61E68306189E83715279EB9908_gshared (U3CU3Ec__DisplayClass159_0_1_t2DF7782FAA4D2D93BDBEAD192249CEF0C0FA778B * __this, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Vector2>::<RegisterPushAndGetAndUpdate>b__0(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__0_mF3AA791B21EDDE729CD6152967ACD9AE749B5535_gshared (U3CU3Ec__DisplayClass159_0_1_t2DF7782FAA4D2D93BDBEAD192249CEF0C0FA778B * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset(&V_1, 0, sizeof(V_1));
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_t02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216 * L_0 = (GetFunc_1_t02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216 *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_t02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216 *)L_0);
		((  void (*) (GetFunc_1_t02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216 *, intptr_t, int32_t, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_t02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216 *)L_0, (intptr_t)L_1, (int32_t)L_2, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = V_0;
		V_1 = (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = V_1;
		return L_4;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Vector2>::<RegisterPushAndGetAndUpdate>b__1(System.IntPtr,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__1_m87A99C28800BEF567504C107A647E4D53022030E_gshared (U3CU3Ec__DisplayClass159_0_1_t2DF7782FAA4D2D93BDBEAD192249CEF0C0FA778B * __this, intptr_t ___L0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_2_t233200B21199895FBBCBB82D897D620F802281F7 * L_0 = (Action_2_t233200B21199895FBBCBB82D897D620F802281F7 *)__this->get_push_1();
		intptr_t L_1 = ___L0;
		RuntimeObject * L_2 = ___obj1;
		NullCheck((Action_2_t233200B21199895FBBCBB82D897D620F802281F7 *)L_0);
		((  void (*) (Action_2_t233200B21199895FBBCBB82D897D620F802281F7 *, intptr_t, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Action_2_t233200B21199895FBBCBB82D897D620F802281F7 *)L_0, (intptr_t)L_1, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )((*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Object XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Vector2>::<RegisterPushAndGetAndUpdate>b__2(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__2_m546F8E51F9F760769476DBA6FF2D821A6E5209CA_gshared (U3CU3Ec__DisplayClass159_0_1_t2DF7782FAA4D2D93BDBEAD192249CEF0C0FA778B * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_t02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216 * L_0 = (GetFunc_1_t02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216 *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_t02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216 *)L_0);
		((  void (*) (GetFunc_1_t02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216 *, intptr_t, int32_t, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_t02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216 *)L_0, (intptr_t)L_1, (int32_t)L_2, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = L_3;
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), &L_4);
		V_1 = (RuntimeObject *)L_5;
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Vector2>::<RegisterPushAndGetAndUpdate>b__3(System.IntPtr,System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__3_mE64D790382B497F476B708E4F2A2C18356A8DA8E_gshared (U3CU3Ec__DisplayClass159_0_1_t2DF7782FAA4D2D93BDBEAD192249CEF0C0FA778B * __this, intptr_t ___L0, int32_t ___idx1, RuntimeObject * ___obj2, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_3_t88F5650816F3F8316496581E84FF8215FAC0D7F0 * L_0 = (Action_3_t88F5650816F3F8316496581E84FF8215FAC0D7F0 *)__this->get_update_2();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		RuntimeObject * L_3 = ___obj2;
		NullCheck((Action_3_t88F5650816F3F8316496581E84FF8215FAC0D7F0 *)L_0);
		((  void (*) (Action_3_t88F5650816F3F8316496581E84FF8215FAC0D7F0 *, intptr_t, int32_t, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Action_3_t88F5650816F3F8316496581E84FF8215FAC0D7F0 *)L_0, (intptr_t)L_1, (int32_t)L_2, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )((*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Vector3>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1__ctor_mC8934F52CE603C5BB67E6156F99E94148C3D62FE_gshared (U3CU3Ec__DisplayClass159_0_1_tD11DDA3EE71C82ABEDCBA64C69E36772ACEE3817 * __this, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Vector3>::<RegisterPushAndGetAndUpdate>b__0(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__0_mA4F05B682A88BCB684B245E22F492E0BCD7C2CAE_gshared (U3CU3Ec__DisplayClass159_0_1_tD11DDA3EE71C82ABEDCBA64C69E36772ACEE3817 * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_t98C5E9EAF0ABD030E19D74EDE569B8C51C089910 * L_0 = (GetFunc_1_t98C5E9EAF0ABD030E19D74EDE569B8C51C089910 *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_t98C5E9EAF0ABD030E19D74EDE569B8C51C089910 *)L_0);
		((  void (*) (GetFunc_1_t98C5E9EAF0ABD030E19D74EDE569B8C51C089910 *, intptr_t, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_t98C5E9EAF0ABD030E19D74EDE569B8C51C089910 *)L_0, (intptr_t)L_1, (int32_t)L_2, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		V_1 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_1;
		return L_4;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Vector3>::<RegisterPushAndGetAndUpdate>b__1(System.IntPtr,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__1_m1835D938C56A01E7D3A8A9EA6F2115FE836B68E0_gshared (U3CU3Ec__DisplayClass159_0_1_tD11DDA3EE71C82ABEDCBA64C69E36772ACEE3817 * __this, intptr_t ___L0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_2_tE0955B102ADC5D3E46F3C328B88EF8B40CFE65B3 * L_0 = (Action_2_tE0955B102ADC5D3E46F3C328B88EF8B40CFE65B3 *)__this->get_push_1();
		intptr_t L_1 = ___L0;
		RuntimeObject * L_2 = ___obj1;
		NullCheck((Action_2_tE0955B102ADC5D3E46F3C328B88EF8B40CFE65B3 *)L_0);
		((  void (*) (Action_2_tE0955B102ADC5D3E46F3C328B88EF8B40CFE65B3 *, intptr_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Action_2_tE0955B102ADC5D3E46F3C328B88EF8B40CFE65B3 *)L_0, (intptr_t)L_1, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )((*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Object XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Vector3>::<RegisterPushAndGetAndUpdate>b__2(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__2_m417972901D79AD1E6D30647BCB8081BF03166ACC_gshared (U3CU3Ec__DisplayClass159_0_1_tD11DDA3EE71C82ABEDCBA64C69E36772ACEE3817 * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_t98C5E9EAF0ABD030E19D74EDE569B8C51C089910 * L_0 = (GetFunc_1_t98C5E9EAF0ABD030E19D74EDE569B8C51C089910 *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_t98C5E9EAF0ABD030E19D74EDE569B8C51C089910 *)L_0);
		((  void (*) (GetFunc_1_t98C5E9EAF0ABD030E19D74EDE569B8C51C089910 *, intptr_t, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_t98C5E9EAF0ABD030E19D74EDE569B8C51C089910 *)L_0, (intptr_t)L_1, (int32_t)L_2, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = L_3;
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), &L_4);
		V_1 = (RuntimeObject *)L_5;
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Vector3>::<RegisterPushAndGetAndUpdate>b__3(System.IntPtr,System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__3_mB93E97FE76A1B585D2C8FBF29F2ABC21FB1E0710_gshared (U3CU3Ec__DisplayClass159_0_1_tD11DDA3EE71C82ABEDCBA64C69E36772ACEE3817 * __this, intptr_t ___L0, int32_t ___idx1, RuntimeObject * ___obj2, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_3_t7C15729E8D25F204E5600DD58CB5C13AA09F0D77 * L_0 = (Action_3_t7C15729E8D25F204E5600DD58CB5C13AA09F0D77 *)__this->get_update_2();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		RuntimeObject * L_3 = ___obj2;
		NullCheck((Action_3_t7C15729E8D25F204E5600DD58CB5C13AA09F0D77 *)L_0);
		((  void (*) (Action_3_t7C15729E8D25F204E5600DD58CB5C13AA09F0D77 *, intptr_t, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Action_3_t7C15729E8D25F204E5600DD58CB5C13AA09F0D77 *)L_0, (intptr_t)L_1, (int32_t)L_2, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )((*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Vector4>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1__ctor_mC2EE9807399E05FAFAE2EDC70E8EC4E87F1ADA7D_gshared (U3CU3Ec__DisplayClass159_0_1_t04748D678F1496508249F5C20C0B4979CD22CC80 * __this, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Vector4>::<RegisterPushAndGetAndUpdate>b__0(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__0_mFEC501DD32B96FF76DCC7E56E8910269AF23B765_gshared (U3CU3Ec__DisplayClass159_0_1_t04748D678F1496508249F5C20C0B4979CD22CC80 * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_1;
	memset(&V_1, 0, sizeof(V_1));
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_tDB38D100E435F97CD7E766BAC0AFCE9392F890C2 * L_0 = (GetFunc_1_tDB38D100E435F97CD7E766BAC0AFCE9392F890C2 *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_tDB38D100E435F97CD7E766BAC0AFCE9392F890C2 *)L_0);
		((  void (*) (GetFunc_1_tDB38D100E435F97CD7E766BAC0AFCE9392F890C2 *, intptr_t, int32_t, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_tDB38D100E435F97CD7E766BAC0AFCE9392F890C2 *)L_0, (intptr_t)L_1, (int32_t)L_2, (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_3 = V_0;
		V_1 = (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = V_1;
		return L_4;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Vector4>::<RegisterPushAndGetAndUpdate>b__1(System.IntPtr,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__1_m92A999F91A2E9F543D0FD8540181542675E571E0_gshared (U3CU3Ec__DisplayClass159_0_1_t04748D678F1496508249F5C20C0B4979CD22CC80 * __this, intptr_t ___L0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_2_tB62086CD34EEB19B5724471C57CC42C3B7BF3CE8 * L_0 = (Action_2_tB62086CD34EEB19B5724471C57CC42C3B7BF3CE8 *)__this->get_push_1();
		intptr_t L_1 = ___L0;
		RuntimeObject * L_2 = ___obj1;
		NullCheck((Action_2_tB62086CD34EEB19B5724471C57CC42C3B7BF3CE8 *)L_0);
		((  void (*) (Action_2_tB62086CD34EEB19B5724471C57CC42C3B7BF3CE8 *, intptr_t, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Action_2_tB62086CD34EEB19B5724471C57CC42C3B7BF3CE8 *)L_0, (intptr_t)L_1, (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )((*(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Object XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Vector4>::<RegisterPushAndGetAndUpdate>b__2(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__2_mA7A0D2404B17A1BA71025489536DFF65A6A0440A_gshared (U3CU3Ec__DisplayClass159_0_1_t04748D678F1496508249F5C20C0B4979CD22CC80 * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_tDB38D100E435F97CD7E766BAC0AFCE9392F890C2 * L_0 = (GetFunc_1_tDB38D100E435F97CD7E766BAC0AFCE9392F890C2 *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_tDB38D100E435F97CD7E766BAC0AFCE9392F890C2 *)L_0);
		((  void (*) (GetFunc_1_tDB38D100E435F97CD7E766BAC0AFCE9392F890C2 *, intptr_t, int32_t, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_tDB38D100E435F97CD7E766BAC0AFCE9392F890C2 *)L_0, (intptr_t)L_1, (int32_t)L_2, (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_3 = V_0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = L_3;
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), &L_4);
		V_1 = (RuntimeObject *)L_5;
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<UnityEngine.Vector4>::<RegisterPushAndGetAndUpdate>b__3(System.IntPtr,System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__3_m054FA369C7A320758E5E811D3B98566CB9380B44_gshared (U3CU3Ec__DisplayClass159_0_1_t04748D678F1496508249F5C20C0B4979CD22CC80 * __this, intptr_t ___L0, int32_t ___idx1, RuntimeObject * ___obj2, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_3_t246223420BE1031546149482564E0B8ECC791FA0 * L_0 = (Action_3_t246223420BE1031546149482564E0B8ECC791FA0 *)__this->get_update_2();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		RuntimeObject * L_3 = ___obj2;
		NullCheck((Action_3_t246223420BE1031546149482564E0B8ECC791FA0 *)L_0);
		((  void (*) (Action_3_t246223420BE1031546149482564E0B8ECC791FA0 *, intptr_t, int32_t, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Action_3_t246223420BE1031546149482564E0B8ECC791FA0 *)L_0, (intptr_t)L_1, (int32_t)L_2, (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )((*(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<XLuaTest.MyStruct>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1__ctor_mFC0A35B81C73C587EB24400C6323A64EDAFE4BBB_gshared (U3CU3Ec__DisplayClass159_0_1_tA4F7350684AF2552FA138199FA902C4A36513117 * __this, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T XLua.ObjectTranslator_<>c__DisplayClass159_0`1<XLuaTest.MyStruct>::<RegisterPushAndGetAndUpdate>b__0(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89  U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__0_m6BE33648D66D693DBC90C6E200B723F173133B19_gshared (U3CU3Ec__DisplayClass159_0_1_tA4F7350684AF2552FA138199FA902C4A36513117 * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89  V_0;
	memset(&V_0, 0, sizeof(V_0));
	MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89  V_1;
	memset(&V_1, 0, sizeof(V_1));
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_t74C2FED57C42BC99DAD9FD148C145CB2C9A120C0 * L_0 = (GetFunc_1_t74C2FED57C42BC99DAD9FD148C145CB2C9A120C0 *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_t74C2FED57C42BC99DAD9FD148C145CB2C9A120C0 *)L_0);
		((  void (*) (GetFunc_1_t74C2FED57C42BC99DAD9FD148C145CB2C9A120C0 *, intptr_t, int32_t, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_t74C2FED57C42BC99DAD9FD148C145CB2C9A120C0 *)L_0, (intptr_t)L_1, (int32_t)L_2, (MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 *)(MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89  L_3 = V_0;
		V_1 = (MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 )L_3;
		goto IL_0015;
	}

IL_0015:
	{
		MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89  L_4 = V_1;
		return L_4;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<XLuaTest.MyStruct>::<RegisterPushAndGetAndUpdate>b__1(System.IntPtr,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__1_m8AD6E150226AE6F8BA5F2AD2F3F7C6EEE9FC7D50_gshared (U3CU3Ec__DisplayClass159_0_1_tA4F7350684AF2552FA138199FA902C4A36513117 * __this, intptr_t ___L0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_2_t5E5E60BF2750CAB791145987CC37987DC8CAA1B1 * L_0 = (Action_2_t5E5E60BF2750CAB791145987CC37987DC8CAA1B1 *)__this->get_push_1();
		intptr_t L_1 = ___L0;
		RuntimeObject * L_2 = ___obj1;
		NullCheck((Action_2_t5E5E60BF2750CAB791145987CC37987DC8CAA1B1 *)L_0);
		((  void (*) (Action_2_t5E5E60BF2750CAB791145987CC37987DC8CAA1B1 *, intptr_t, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Action_2_t5E5E60BF2750CAB791145987CC37987DC8CAA1B1 *)L_0, (intptr_t)L_1, (MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 )((*(MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 *)((MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Object XLua.ObjectTranslator_<>c__DisplayClass159_0`1<XLuaTest.MyStruct>::<RegisterPushAndGetAndUpdate>b__2(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__2_m0271A136353C164BC8BB3C7EF44250E98FB75062_gshared (U3CU3Ec__DisplayClass159_0_1_tA4F7350684AF2552FA138199FA902C4A36513117 * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_t74C2FED57C42BC99DAD9FD148C145CB2C9A120C0 * L_0 = (GetFunc_1_t74C2FED57C42BC99DAD9FD148C145CB2C9A120C0 *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_t74C2FED57C42BC99DAD9FD148C145CB2C9A120C0 *)L_0);
		((  void (*) (GetFunc_1_t74C2FED57C42BC99DAD9FD148C145CB2C9A120C0 *, intptr_t, int32_t, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_t74C2FED57C42BC99DAD9FD148C145CB2C9A120C0 *)L_0, (intptr_t)L_1, (int32_t)L_2, (MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 *)(MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89  L_3 = V_0;
		MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89  L_4 = L_3;
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), &L_4);
		V_1 = (RuntimeObject *)L_5;
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<XLuaTest.MyStruct>::<RegisterPushAndGetAndUpdate>b__3(System.IntPtr,System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__3_m848EB0C3790BC690954B04C7129E85A8CF1AC75A_gshared (U3CU3Ec__DisplayClass159_0_1_tA4F7350684AF2552FA138199FA902C4A36513117 * __this, intptr_t ___L0, int32_t ___idx1, RuntimeObject * ___obj2, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_3_tA7F9F909F7344FE8616B5830B523C2FD7935C4E4 * L_0 = (Action_3_tA7F9F909F7344FE8616B5830B523C2FD7935C4E4 *)__this->get_update_2();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		RuntimeObject * L_3 = ___obj2;
		NullCheck((Action_3_tA7F9F909F7344FE8616B5830B523C2FD7935C4E4 *)L_0);
		((  void (*) (Action_3_tA7F9F909F7344FE8616B5830B523C2FD7935C4E4 *, intptr_t, int32_t, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Action_3_tA7F9F909F7344FE8616B5830B523C2FD7935C4E4 *)L_0, (intptr_t)L_1, (int32_t)L_2, (MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 )((*(MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 *)((MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<XLuaTest.Pedding>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1__ctor_mB4D978AF13B226D21C593ED2C1FAE7C4D9E79A93_gshared (U3CU3Ec__DisplayClass159_0_1_t83CD2C7A31101DBE8661CC7C57D9EBA9C960A54B * __this, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T XLua.ObjectTranslator_<>c__DisplayClass159_0`1<XLuaTest.Pedding>::<RegisterPushAndGetAndUpdate>b__0(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B  U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__0_mCCC74BBE904D81806DACB73EA8A62B897AB443FF_gshared (U3CU3Ec__DisplayClass159_0_1_t83CD2C7A31101DBE8661CC7C57D9EBA9C960A54B * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B  V_1;
	memset(&V_1, 0, sizeof(V_1));
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_t5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35 * L_0 = (GetFunc_1_t5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35 *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_t5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35 *)L_0);
		((  void (*) (GetFunc_1_t5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35 *, intptr_t, int32_t, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_t5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35 *)L_0, (intptr_t)L_1, (int32_t)L_2, (Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B *)(Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B  L_3 = V_0;
		V_1 = (Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B )L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B  L_4 = V_1;
		return L_4;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<XLuaTest.Pedding>::<RegisterPushAndGetAndUpdate>b__1(System.IntPtr,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__1_m3C96CC22521BA0944C829D4B6C549822F3FDFBF6_gshared (U3CU3Ec__DisplayClass159_0_1_t83CD2C7A31101DBE8661CC7C57D9EBA9C960A54B * __this, intptr_t ___L0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_2_t578CA6FF8AFCFB94EFCDC4B01AA893036190D50F * L_0 = (Action_2_t578CA6FF8AFCFB94EFCDC4B01AA893036190D50F *)__this->get_push_1();
		intptr_t L_1 = ___L0;
		RuntimeObject * L_2 = ___obj1;
		NullCheck((Action_2_t578CA6FF8AFCFB94EFCDC4B01AA893036190D50F *)L_0);
		((  void (*) (Action_2_t578CA6FF8AFCFB94EFCDC4B01AA893036190D50F *, intptr_t, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Action_2_t578CA6FF8AFCFB94EFCDC4B01AA893036190D50F *)L_0, (intptr_t)L_1, (Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B )((*(Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B *)((Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Object XLua.ObjectTranslator_<>c__DisplayClass159_0`1<XLuaTest.Pedding>::<RegisterPushAndGetAndUpdate>b__2(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__2_m99632577AAA5A72D355DBF205D528E5863B237D7_gshared (U3CU3Ec__DisplayClass159_0_1_t83CD2C7A31101DBE8661CC7C57D9EBA9C960A54B * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_t5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35 * L_0 = (GetFunc_1_t5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35 *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_t5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35 *)L_0);
		((  void (*) (GetFunc_1_t5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35 *, intptr_t, int32_t, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_t5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35 *)L_0, (intptr_t)L_1, (int32_t)L_2, (Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B *)(Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B  L_3 = V_0;
		Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B  L_4 = L_3;
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), &L_4);
		V_1 = (RuntimeObject *)L_5;
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<XLuaTest.Pedding>::<RegisterPushAndGetAndUpdate>b__3(System.IntPtr,System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__3_m78FEA9C873BC4AC75046DCBCC399512FFBD5E108_gshared (U3CU3Ec__DisplayClass159_0_1_t83CD2C7A31101DBE8661CC7C57D9EBA9C960A54B * __this, intptr_t ___L0, int32_t ___idx1, RuntimeObject * ___obj2, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_3_tA24D2E42FEF24046BACE285F7BAE9A134D93C232 * L_0 = (Action_3_tA24D2E42FEF24046BACE285F7BAE9A134D93C232 *)__this->get_update_2();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		RuntimeObject * L_3 = ___obj2;
		NullCheck((Action_3_tA24D2E42FEF24046BACE285F7BAE9A134D93C232 *)L_0);
		((  void (*) (Action_3_tA24D2E42FEF24046BACE285F7BAE9A134D93C232 *, intptr_t, int32_t, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Action_3_tA24D2E42FEF24046BACE285F7BAE9A134D93C232 *)L_0, (intptr_t)L_1, (int32_t)L_2, (Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B )((*(Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B *)((Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<XLuaTest.PushAsTableStruct>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1__ctor_m4D082F3F715BBFF97F50E2B0A046EB69EE56B5AD_gshared (U3CU3Ec__DisplayClass159_0_1_tAEFF1A8DB36DA982BC77094BB4E267DE88A7437F * __this, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T XLua.ObjectTranslator_<>c__DisplayClass159_0`1<XLuaTest.PushAsTableStruct>::<RegisterPushAndGetAndUpdate>b__0(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB  U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__0_m70182437F8ADCC7C83D781E8AE5D3F59F2833184_gshared (U3CU3Ec__DisplayClass159_0_1_tAEFF1A8DB36DA982BC77094BB4E267DE88A7437F * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB  V_1;
	memset(&V_1, 0, sizeof(V_1));
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_t066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC * L_0 = (GetFunc_1_t066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_t066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC *)L_0);
		((  void (*) (GetFunc_1_t066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC *, intptr_t, int32_t, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_t066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC *)L_0, (intptr_t)L_1, (int32_t)L_2, (PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB *)(PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB  L_3 = V_0;
		V_1 = (PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB )L_3;
		goto IL_0015;
	}

IL_0015:
	{
		PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB  L_4 = V_1;
		return L_4;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<XLuaTest.PushAsTableStruct>::<RegisterPushAndGetAndUpdate>b__1(System.IntPtr,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__1_mD09062566708105B0411B0F04393459A034688C6_gshared (U3CU3Ec__DisplayClass159_0_1_tAEFF1A8DB36DA982BC77094BB4E267DE88A7437F * __this, intptr_t ___L0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_2_tAFAEFC7F0F8B3CB8A8E1F036B3F33B0283B3AD52 * L_0 = (Action_2_tAFAEFC7F0F8B3CB8A8E1F036B3F33B0283B3AD52 *)__this->get_push_1();
		intptr_t L_1 = ___L0;
		RuntimeObject * L_2 = ___obj1;
		NullCheck((Action_2_tAFAEFC7F0F8B3CB8A8E1F036B3F33B0283B3AD52 *)L_0);
		((  void (*) (Action_2_tAFAEFC7F0F8B3CB8A8E1F036B3F33B0283B3AD52 *, intptr_t, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Action_2_tAFAEFC7F0F8B3CB8A8E1F036B3F33B0283B3AD52 *)L_0, (intptr_t)L_1, (PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB )((*(PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB *)((PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Object XLua.ObjectTranslator_<>c__DisplayClass159_0`1<XLuaTest.PushAsTableStruct>::<RegisterPushAndGetAndUpdate>b__2(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__2_m53A748987F0FE69AE4CC591B6BC7A7C0BC595D03_gshared (U3CU3Ec__DisplayClass159_0_1_tAEFF1A8DB36DA982BC77094BB4E267DE88A7437F * __this, intptr_t ___L0, int32_t ___idx1, const RuntimeMethod* method)
{
	PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_t066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC * L_0 = (GetFunc_1_t066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_t066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC *)L_0);
		((  void (*) (GetFunc_1_t066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC *, intptr_t, int32_t, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_t066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC *)L_0, (intptr_t)L_1, (int32_t)L_2, (PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB *)(PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB  L_3 = V_0;
		PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB  L_4 = L_3;
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), &L_4);
		V_1 = (RuntimeObject *)L_5;
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void XLua.ObjectTranslator_<>c__DisplayClass159_0`1<XLuaTest.PushAsTableStruct>::<RegisterPushAndGetAndUpdate>b__3(System.IntPtr,System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass159_0_1_U3CRegisterPushAndGetAndUpdateU3Eb__3_m0420EBDF2981670579ADF0604A9D4F2463914086_gshared (U3CU3Ec__DisplayClass159_0_1_tAEFF1A8DB36DA982BC77094BB4E267DE88A7437F * __this, intptr_t ___L0, int32_t ___idx1, RuntimeObject * ___obj2, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		Action_3_tE5BE52CCB50C09543DBAD024C9F9E8FD81058E4A * L_0 = (Action_3_tE5BE52CCB50C09543DBAD024C9F9E8FD81058E4A *)__this->get_update_2();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		RuntimeObject * L_3 = ___obj2;
		NullCheck((Action_3_tE5BE52CCB50C09543DBAD024C9F9E8FD81058E4A *)L_0);
		((  void (*) (Action_3_tE5BE52CCB50C09543DBAD024C9F9E8FD81058E4A *, intptr_t, int32_t, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Action_3_tE5BE52CCB50C09543DBAD024C9F9E8FD81058E4A *)L_0, (intptr_t)L_1, (int32_t)L_2, (PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB )((*(PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB *)((PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void XLua.ObjectTranslator_<>c__DisplayClass160_0`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass160_0_1__ctor_mD2F3E26DF90D0DFCF6929B556641B10C7C4DB224_gshared (U3CU3Ec__DisplayClass160_0_1_tA819D2EAC260B82B84EB22E6348FB0221F744E79 * __this, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object XLua.ObjectTranslator_<>c__DisplayClass160_0`1<System.Object>::<RegisterCaster>b__0(System.IntPtr,System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass160_0_1_U3CRegisterCasterU3Eb__0_m5C1CD4E4A6B13CDF2E1E18B2F17C05D6E8B905E1_gshared (U3CU3Ec__DisplayClass160_0_1_tA819D2EAC260B82B84EB22E6348FB0221F744E79 * __this, intptr_t ___L0, int32_t ___idx1, RuntimeObject * ___o2, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	CHECK_PAUSE_POINT;
	{
		GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 * L_0 = (GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 *)__this->get_get_0();
		intptr_t L_1 = ___L0;
		int32_t L_2 = ___idx1;
		NullCheck((GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 *)L_0);
		((  void (*) (GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 *, intptr_t, int32_t, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 *)L_0, (intptr_t)L_1, (int32_t)L_2, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject * L_3 = V_0;
		V_1 = (RuntimeObject *)L_3;
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject * L_4 = V_1;
		return L_4;
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
// System.Void XLua.ObjectTranslator_GetFunc`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1__ctor_m36816E6F4A4FEA3CAA3F40CE977D8B7D96818D9B_gshared (GetFunc_1_tF7F38012D311FDC3137218FE4196109C09449E2B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<System.Int32Enum>::Invoke(System.IntPtr,System.Int32,TU26)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_Invoke_m087AA08363C1F67FBD393B3CDA828A066C406C81_gshared (GetFunc_1_tF7F38012D311FDC3137218FE4196109C09449E2B * __this, intptr_t ___L0, int32_t ___idx1, int32_t* ___val2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (intptr_t, int32_t, int32_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, int32_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (intptr_t, int32_t, int32_t*, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< intptr_t, int32_t, int32_t* >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
							else
								GenericVirtActionInvoker3< intptr_t, int32_t, int32_t* >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< intptr_t, int32_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
							else
								VirtActionInvoker3< intptr_t, int32_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, int32_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (intptr_t, int32_t, int32_t*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< intptr_t, int32_t, int32_t* >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						else
							GenericVirtActionInvoker3< intptr_t, int32_t, int32_t* >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< intptr_t, int32_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						else
							VirtActionInvoker3< intptr_t, int32_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult XLua.ObjectTranslator_GetFunc`1<System.Int32Enum>::BeginInvoke(System.IntPtr,System.Int32,TU26,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetFunc_1_BeginInvoke_mF357E4EEB886A9F200074F7356D77EB9FDF59F5B_gshared (GetFunc_1_tF7F38012D311FDC3137218FE4196109C09449E2B * __this, intptr_t ___L0, int32_t ___idx1, int32_t* ___val2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetFunc_1_BeginInvoke_mF357E4EEB886A9F200074F7356D77EB9FDF59F5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___L0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___idx1);
	__d_args[2] = Box(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_il2cpp_TypeInfo_var, &*___val2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<System.Int32Enum>::EndInvoke(TU26,System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_EndInvoke_mF343848B27F60E9CF0D79C50E9896D1F774351DF_gshared (GetFunc_1_tF7F38012D311FDC3137218FE4196109C09449E2B * __this, int32_t* ___val0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___val0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void XLua.ObjectTranslator_GetFunc`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1__ctor_mD9E6344BA3C153124CA81BFE74C01D0D75719609_gshared (GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<System.Object>::Invoke(System.IntPtr,System.Int32,TU26)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_Invoke_mDFFE786263B5B8A8D312CF20E70A0411AC24176C_gshared (GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 * __this, intptr_t ___L0, int32_t ___idx1, RuntimeObject ** ___val2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (intptr_t, int32_t, RuntimeObject **, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, RuntimeObject **, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (intptr_t, int32_t, RuntimeObject **, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< intptr_t, int32_t, RuntimeObject ** >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
							else
								GenericVirtActionInvoker3< intptr_t, int32_t, RuntimeObject ** >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< intptr_t, int32_t, RuntimeObject ** >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
							else
								VirtActionInvoker3< intptr_t, int32_t, RuntimeObject ** >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, RuntimeObject **, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, RuntimeObject **, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, RuntimeObject **, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (intptr_t, int32_t, RuntimeObject **, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< intptr_t, int32_t, RuntimeObject ** >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						else
							GenericVirtActionInvoker3< intptr_t, int32_t, RuntimeObject ** >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< intptr_t, int32_t, RuntimeObject ** >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						else
							VirtActionInvoker3< intptr_t, int32_t, RuntimeObject ** >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, RuntimeObject **, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult XLua.ObjectTranslator_GetFunc`1<System.Object>::BeginInvoke(System.IntPtr,System.Int32,TU26,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetFunc_1_BeginInvoke_m0F7FD3B0D57F5D8A41C3B192B976BA7B79D596F9_gshared (GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 * __this, intptr_t ___L0, int32_t ___idx1, RuntimeObject ** ___val2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetFunc_1_BeginInvoke_m0F7FD3B0D57F5D8A41C3B192B976BA7B79D596F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___L0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___idx1);
	__d_args[2] = *___val2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<System.Object>::EndInvoke(TU26,System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_EndInvoke_mACE4C7A4A911BEC19C496ACEF3E9F4E2BE3BF43E_gshared (GetFunc_1_t96991E0F42AFE4D0E82A63460A95454607543DC5 * __this, RuntimeObject ** ___val0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___val0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Bounds>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1__ctor_m4B90663B5F398166DA857E04ED224F6B2586712D_gshared (GetFunc_1_tCA125211118C818F1A29D887F434C3928963D04A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Bounds>::Invoke(System.IntPtr,System.Int32,TU26)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_Invoke_m434BD5FB9D05256847440594267B95DA57AB10FC_gshared (GetFunc_1_tCA125211118C818F1A29D887F434C3928963D04A * __this, intptr_t ___L0, int32_t ___idx1, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * ___val2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (intptr_t, int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (intptr_t, int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< intptr_t, int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
							else
								GenericVirtActionInvoker3< intptr_t, int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< intptr_t, int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
							else
								VirtActionInvoker3< intptr_t, int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (intptr_t, int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< intptr_t, int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						else
							GenericVirtActionInvoker3< intptr_t, int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< intptr_t, int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						else
							VirtActionInvoker3< intptr_t, int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult XLua.ObjectTranslator_GetFunc`1<UnityEngine.Bounds>::BeginInvoke(System.IntPtr,System.Int32,TU26,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetFunc_1_BeginInvoke_mF2A9B7FF6AB8EEABE996C60CCDB6D847507F716A_gshared (GetFunc_1_tCA125211118C818F1A29D887F434C3928963D04A * __this, intptr_t ___L0, int32_t ___idx1, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * ___val2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetFunc_1_BeginInvoke_mF2A9B7FF6AB8EEABE996C60CCDB6D847507F716A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___L0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___idx1);
	__d_args[2] = Box(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890_il2cpp_TypeInfo_var, &*___val2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Bounds>::EndInvoke(TU26,System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_EndInvoke_m0AB6D42B05574C4F86BD57E8300A607DD834E609_gshared (GetFunc_1_tCA125211118C818F1A29D887F434C3928963D04A * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * ___val0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___val0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1__ctor_m0235828499C9AEB495B6C02691DBD5DD4C37806A_gshared (GetFunc_1_t153D598E77A07B849A79ECA27732D38FBE9476CF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Color>::Invoke(System.IntPtr,System.Int32,TU26)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_Invoke_m2F7FFDB532F0EEA5FCB0B4EF1D8D2AA650E57F8A_gshared (GetFunc_1_t153D598E77A07B849A79ECA27732D38FBE9476CF * __this, intptr_t ___L0, int32_t ___idx1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * ___val2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (intptr_t, int32_t, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (intptr_t, int32_t, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< intptr_t, int32_t, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
							else
								GenericVirtActionInvoker3< intptr_t, int32_t, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< intptr_t, int32_t, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
							else
								VirtActionInvoker3< intptr_t, int32_t, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (intptr_t, int32_t, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< intptr_t, int32_t, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						else
							GenericVirtActionInvoker3< intptr_t, int32_t, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< intptr_t, int32_t, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						else
							VirtActionInvoker3< intptr_t, int32_t, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult XLua.ObjectTranslator_GetFunc`1<UnityEngine.Color>::BeginInvoke(System.IntPtr,System.Int32,TU26,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetFunc_1_BeginInvoke_m518FECDEEC263011A7BF91F16EAAC742816B8483_gshared (GetFunc_1_t153D598E77A07B849A79ECA27732D38FBE9476CF * __this, intptr_t ___L0, int32_t ___idx1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * ___val2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetFunc_1_BeginInvoke_m518FECDEEC263011A7BF91F16EAAC742816B8483_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___L0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___idx1);
	__d_args[2] = Box(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2_il2cpp_TypeInfo_var, &*___val2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Color>::EndInvoke(TU26,System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_EndInvoke_m137DA75CD8CF07D7EDB2FDEEF6864B313F0FE9D7_gshared (GetFunc_1_t153D598E77A07B849A79ECA27732D38FBE9476CF * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * ___val0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___val0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Quaternion>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1__ctor_mB1F4C7F9DB757BF8C6678CA1E3368B9C35DBA811_gshared (GetFunc_1_tCFFF67F8370DE88E22729E229DA1876C1F8855C6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Quaternion>::Invoke(System.IntPtr,System.Int32,TU26)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_Invoke_mCD73ECB126C59EB2ED5D05638B311D6EA6833B70_gshared (GetFunc_1_tCFFF67F8370DE88E22729E229DA1876C1F8855C6 * __this, intptr_t ___L0, int32_t ___idx1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___val2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (intptr_t, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (intptr_t, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< intptr_t, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
							else
								GenericVirtActionInvoker3< intptr_t, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< intptr_t, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
							else
								VirtActionInvoker3< intptr_t, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (intptr_t, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< intptr_t, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						else
							GenericVirtActionInvoker3< intptr_t, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< intptr_t, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						else
							VirtActionInvoker3< intptr_t, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult XLua.ObjectTranslator_GetFunc`1<UnityEngine.Quaternion>::BeginInvoke(System.IntPtr,System.Int32,TU26,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetFunc_1_BeginInvoke_m27F1B0E2D060BC7FF0B959918F2BF499D9A6386F_gshared (GetFunc_1_tCFFF67F8370DE88E22729E229DA1876C1F8855C6 * __this, intptr_t ___L0, int32_t ___idx1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___val2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetFunc_1_BeginInvoke_m27F1B0E2D060BC7FF0B959918F2BF499D9A6386F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___L0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___idx1);
	__d_args[2] = Box(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var, &*___val2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Quaternion>::EndInvoke(TU26,System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_EndInvoke_m8E367716513761F3FD2C9A318F962C75B95A832D_gshared (GetFunc_1_tCFFF67F8370DE88E22729E229DA1876C1F8855C6 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___val0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___val0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Ray2D>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1__ctor_mE8116672B8D22A01571B1734A365AAC5A5AF52AC_gshared (GetFunc_1_t4203D08418182984A6E80F74751D65862EA2075C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Ray2D>::Invoke(System.IntPtr,System.Int32,TU26)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_Invoke_m56E2259BAE23A434D3C946C926D4C34E6647816F_gshared (GetFunc_1_t4203D08418182984A6E80F74751D65862EA2075C * __this, intptr_t ___L0, int32_t ___idx1, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 * ___val2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (intptr_t, int32_t, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (intptr_t, int32_t, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< intptr_t, int32_t, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
							else
								GenericVirtActionInvoker3< intptr_t, int32_t, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< intptr_t, int32_t, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
							else
								VirtActionInvoker3< intptr_t, int32_t, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (intptr_t, int32_t, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< intptr_t, int32_t, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						else
							GenericVirtActionInvoker3< intptr_t, int32_t, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< intptr_t, int32_t, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						else
							VirtActionInvoker3< intptr_t, int32_t, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult XLua.ObjectTranslator_GetFunc`1<UnityEngine.Ray2D>::BeginInvoke(System.IntPtr,System.Int32,TU26,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetFunc_1_BeginInvoke_mB4FFFB0BCF3B17BB02C43DCA665DA3F8E1DB18E8_gshared (GetFunc_1_t4203D08418182984A6E80F74751D65862EA2075C * __this, intptr_t ___L0, int32_t ___idx1, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 * ___val2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetFunc_1_BeginInvoke_mB4FFFB0BCF3B17BB02C43DCA665DA3F8E1DB18E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___L0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___idx1);
	__d_args[2] = Box(Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614_il2cpp_TypeInfo_var, &*___val2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Ray2D>::EndInvoke(TU26,System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_EndInvoke_mAD0459ADEF6F8374135F4B77EA10CD3134D72F9C_gshared (GetFunc_1_t4203D08418182984A6E80F74751D65862EA2075C * __this, Ray2D_t2CBEB2F74BE08BEAC971AB6C5A2DC51FFA13A614 * ___val0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___val0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Ray>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1__ctor_m0C36436C71F5B24054CF701726EB8C394C199CC7_gshared (GetFunc_1_t65EE73BA79CC7396519573C386E16365B57DA9D5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Ray>::Invoke(System.IntPtr,System.Int32,TU26)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_Invoke_m0F9053ADE586BDDECCAD184895E0060BCA02DB0F_gshared (GetFunc_1_t65EE73BA79CC7396519573C386E16365B57DA9D5 * __this, intptr_t ___L0, int32_t ___idx1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * ___val2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (intptr_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (intptr_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< intptr_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
							else
								GenericVirtActionInvoker3< intptr_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< intptr_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
							else
								VirtActionInvoker3< intptr_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (intptr_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< intptr_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						else
							GenericVirtActionInvoker3< intptr_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< intptr_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						else
							VirtActionInvoker3< intptr_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult XLua.ObjectTranslator_GetFunc`1<UnityEngine.Ray>::BeginInvoke(System.IntPtr,System.Int32,TU26,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetFunc_1_BeginInvoke_m6344747031F02DA5F6D2BA89AB18B948E2C4AA31_gshared (GetFunc_1_t65EE73BA79CC7396519573C386E16365B57DA9D5 * __this, intptr_t ___L0, int32_t ___idx1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * ___val2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetFunc_1_BeginInvoke_m6344747031F02DA5F6D2BA89AB18B948E2C4AA31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___L0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___idx1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &*___val2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Ray>::EndInvoke(TU26,System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_EndInvoke_mEF1A1F973B9685C4220BDF8C9ABCD2BBE9CB9626_gshared (GetFunc_1_t65EE73BA79CC7396519573C386E16365B57DA9D5 * __this, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * ___val0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___val0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1__ctor_m04435CA1DB0F950C7F9BBF79F26E6CE50DEDD39A_gshared (GetFunc_1_t02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Vector2>::Invoke(System.IntPtr,System.Int32,TU26)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_Invoke_m8550D25D41FB6A5B9DD39C77EC2B03495C9C7729_gshared (GetFunc_1_t02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216 * __this, intptr_t ___L0, int32_t ___idx1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___val2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (intptr_t, int32_t, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (intptr_t, int32_t, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< intptr_t, int32_t, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
							else
								GenericVirtActionInvoker3< intptr_t, int32_t, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< intptr_t, int32_t, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
							else
								VirtActionInvoker3< intptr_t, int32_t, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (intptr_t, int32_t, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< intptr_t, int32_t, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						else
							GenericVirtActionInvoker3< intptr_t, int32_t, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< intptr_t, int32_t, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						else
							VirtActionInvoker3< intptr_t, int32_t, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult XLua.ObjectTranslator_GetFunc`1<UnityEngine.Vector2>::BeginInvoke(System.IntPtr,System.Int32,TU26,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetFunc_1_BeginInvoke_mA028B298AF7008D8F917FBB0CEFA72081127568F_gshared (GetFunc_1_t02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216 * __this, intptr_t ___L0, int32_t ___idx1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___val2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetFunc_1_BeginInvoke_mA028B298AF7008D8F917FBB0CEFA72081127568F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___L0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___idx1);
	__d_args[2] = Box(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var, &*___val2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Vector2>::EndInvoke(TU26,System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_EndInvoke_m0E7A985C022CC1AAC04D699EC150A4D1A3EAFB2E_gshared (GetFunc_1_t02DAA81DAC7BF8389FA6F83C3A1D96F4A6A58216 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___val0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___val0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1__ctor_m670E6D920EC81EF6725CF229347BC1F9E3C96844_gshared (GetFunc_1_t98C5E9EAF0ABD030E19D74EDE569B8C51C089910 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Vector3>::Invoke(System.IntPtr,System.Int32,TU26)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_Invoke_m041B1E71939FE8E70F35BC0CA4C52439E71C1FC8_gshared (GetFunc_1_t98C5E9EAF0ABD030E19D74EDE569B8C51C089910 * __this, intptr_t ___L0, int32_t ___idx1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___val2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (intptr_t, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (intptr_t, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< intptr_t, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
							else
								GenericVirtActionInvoker3< intptr_t, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< intptr_t, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
							else
								VirtActionInvoker3< intptr_t, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (intptr_t, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< intptr_t, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						else
							GenericVirtActionInvoker3< intptr_t, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< intptr_t, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						else
							VirtActionInvoker3< intptr_t, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult XLua.ObjectTranslator_GetFunc`1<UnityEngine.Vector3>::BeginInvoke(System.IntPtr,System.Int32,TU26,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetFunc_1_BeginInvoke_m270B3D4EC1AB62C2B304855F65D8EF220AC0BDCE_gshared (GetFunc_1_t98C5E9EAF0ABD030E19D74EDE569B8C51C089910 * __this, intptr_t ___L0, int32_t ___idx1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___val2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetFunc_1_BeginInvoke_m270B3D4EC1AB62C2B304855F65D8EF220AC0BDCE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___L0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___idx1);
	__d_args[2] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &*___val2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Vector3>::EndInvoke(TU26,System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_EndInvoke_mE70642E980CB8F497BD9079446DA79FD92367476_gshared (GetFunc_1_t98C5E9EAF0ABD030E19D74EDE569B8C51C089910 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___val0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___val0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1__ctor_m603DE017956472297DF062F78A4CC51BB4BAAAB0_gshared (GetFunc_1_tDB38D100E435F97CD7E766BAC0AFCE9392F890C2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Vector4>::Invoke(System.IntPtr,System.Int32,TU26)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_Invoke_m669B57A50DE2A78FD813D5B2C79CDF45134C8145_gshared (GetFunc_1_tDB38D100E435F97CD7E766BAC0AFCE9392F890C2 * __this, intptr_t ___L0, int32_t ___idx1, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * ___val2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (intptr_t, int32_t, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (intptr_t, int32_t, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< intptr_t, int32_t, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
							else
								GenericVirtActionInvoker3< intptr_t, int32_t, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< intptr_t, int32_t, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
							else
								VirtActionInvoker3< intptr_t, int32_t, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (intptr_t, int32_t, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< intptr_t, int32_t, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						else
							GenericVirtActionInvoker3< intptr_t, int32_t, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< intptr_t, int32_t, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						else
							VirtActionInvoker3< intptr_t, int32_t, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult XLua.ObjectTranslator_GetFunc`1<UnityEngine.Vector4>::BeginInvoke(System.IntPtr,System.Int32,TU26,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetFunc_1_BeginInvoke_m726582C0D405E4CEC3655A7DDC536141BA951389_gshared (GetFunc_1_tDB38D100E435F97CD7E766BAC0AFCE9392F890C2 * __this, intptr_t ___L0, int32_t ___idx1, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * ___val2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetFunc_1_BeginInvoke_m726582C0D405E4CEC3655A7DDC536141BA951389_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___L0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___idx1);
	__d_args[2] = Box(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var, &*___val2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<UnityEngine.Vector4>::EndInvoke(TU26,System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_EndInvoke_m12791522DFAA2ECF6469E6EAB95F6A62D3D574BB_gshared (GetFunc_1_tDB38D100E435F97CD7E766BAC0AFCE9392F890C2 * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * ___val0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___val0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void XLua.ObjectTranslator_GetFunc`1<XLuaTest.MyStruct>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1__ctor_mBAC8B97CB007FAA883CF893769DACE45C0EE1A5E_gshared (GetFunc_1_t74C2FED57C42BC99DAD9FD148C145CB2C9A120C0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<XLuaTest.MyStruct>::Invoke(System.IntPtr,System.Int32,TU26)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_Invoke_mF1E8E927FE233FD93F7D4B3EEB762C2773EF3113_gshared (GetFunc_1_t74C2FED57C42BC99DAD9FD148C145CB2C9A120C0 * __this, intptr_t ___L0, int32_t ___idx1, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 * ___val2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (intptr_t, int32_t, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (intptr_t, int32_t, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< intptr_t, int32_t, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
							else
								GenericVirtActionInvoker3< intptr_t, int32_t, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< intptr_t, int32_t, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
							else
								VirtActionInvoker3< intptr_t, int32_t, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (intptr_t, int32_t, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< intptr_t, int32_t, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						else
							GenericVirtActionInvoker3< intptr_t, int32_t, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< intptr_t, int32_t, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						else
							VirtActionInvoker3< intptr_t, int32_t, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult XLua.ObjectTranslator_GetFunc`1<XLuaTest.MyStruct>::BeginInvoke(System.IntPtr,System.Int32,TU26,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetFunc_1_BeginInvoke_mF0719F89E1DB3F059BCDEBCB03B9407C339BE4DF_gshared (GetFunc_1_t74C2FED57C42BC99DAD9FD148C145CB2C9A120C0 * __this, intptr_t ___L0, int32_t ___idx1, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 * ___val2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetFunc_1_BeginInvoke_mF0719F89E1DB3F059BCDEBCB03B9407C339BE4DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___L0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___idx1);
	__d_args[2] = Box(MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89_il2cpp_TypeInfo_var, &*___val2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<XLuaTest.MyStruct>::EndInvoke(TU26,System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_EndInvoke_m4F348D18E7BA71BBB8845F52D1A93EEDC5B80B46_gshared (GetFunc_1_t74C2FED57C42BC99DAD9FD148C145CB2C9A120C0 * __this, MyStruct_t6D85BEBF20800AA25FA7B8FAC5756E714C1E2D89 * ___val0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___val0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void XLua.ObjectTranslator_GetFunc`1<XLuaTest.Pedding>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1__ctor_mD4D658B19D441B740B2D8A1352D408E1B430D064_gshared (GetFunc_1_t5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<XLuaTest.Pedding>::Invoke(System.IntPtr,System.Int32,TU26)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_Invoke_m21A64908132114103FFDE8C8A3903D6F94005775_gshared (GetFunc_1_t5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35 * __this, intptr_t ___L0, int32_t ___idx1, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B * ___val2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (intptr_t, int32_t, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (intptr_t, int32_t, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< intptr_t, int32_t, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
							else
								GenericVirtActionInvoker3< intptr_t, int32_t, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< intptr_t, int32_t, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
							else
								VirtActionInvoker3< intptr_t, int32_t, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (intptr_t, int32_t, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< intptr_t, int32_t, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						else
							GenericVirtActionInvoker3< intptr_t, int32_t, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< intptr_t, int32_t, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						else
							VirtActionInvoker3< intptr_t, int32_t, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult XLua.ObjectTranslator_GetFunc`1<XLuaTest.Pedding>::BeginInvoke(System.IntPtr,System.Int32,TU26,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetFunc_1_BeginInvoke_m167075F5233E73C47471BA4C4EDA92BBADCF1161_gshared (GetFunc_1_t5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35 * __this, intptr_t ___L0, int32_t ___idx1, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B * ___val2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetFunc_1_BeginInvoke_m167075F5233E73C47471BA4C4EDA92BBADCF1161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___L0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___idx1);
	__d_args[2] = Box(Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B_il2cpp_TypeInfo_var, &*___val2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<XLuaTest.Pedding>::EndInvoke(TU26,System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_EndInvoke_m649B06CCBA70BB297507EA3E11D336285FFEE7C5_gshared (GetFunc_1_t5E66AC4D4501E631E335BFFBEA3CCE2D8834BC35 * __this, Pedding_t03B5006DDAB916787542F6B6620342B87D740B8B * ___val0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___val0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void XLua.ObjectTranslator_GetFunc`1<XLuaTest.PushAsTableStruct>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1__ctor_m229FE6000AF61ECF5C9594F2EC87D2496570EB8F_gshared (GetFunc_1_t066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<XLuaTest.PushAsTableStruct>::Invoke(System.IntPtr,System.Int32,TU26)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_Invoke_m30204403DD38B19AF5975D0FDB1D92CF17B2F00A_gshared (GetFunc_1_t066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC * __this, intptr_t ___L0, int32_t ___idx1, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB * ___val2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (intptr_t, int32_t, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (intptr_t, int32_t, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< intptr_t, int32_t, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
							else
								GenericVirtActionInvoker3< intptr_t, int32_t, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< intptr_t, int32_t, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
							else
								VirtActionInvoker3< intptr_t, int32_t, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (intptr_t, int32_t, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___L0, ___idx1, ___val2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< intptr_t, int32_t, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
						else
							GenericVirtActionInvoker3< intptr_t, int32_t, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB * >::Invoke(targetMethod, targetThis, ___L0, ___idx1, ___val2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< intptr_t, int32_t, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___L0, ___idx1, ___val2);
						else
							VirtActionInvoker3< intptr_t, int32_t, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___L0, ___idx1, ___val2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___L0, ___idx1, ___val2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult XLua.ObjectTranslator_GetFunc`1<XLuaTest.PushAsTableStruct>::BeginInvoke(System.IntPtr,System.Int32,TU26,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetFunc_1_BeginInvoke_m62514B27E9ED94E977059ABADCC344F7CB309F6D_gshared (GetFunc_1_t066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC * __this, intptr_t ___L0, int32_t ___idx1, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB * ___val2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetFunc_1_BeginInvoke_m62514B27E9ED94E977059ABADCC344F7CB309F6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___L0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___idx1);
	__d_args[2] = Box(PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB_il2cpp_TypeInfo_var, &*___val2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void XLua.ObjectTranslator_GetFunc`1<XLuaTest.PushAsTableStruct>::EndInvoke(TU26,System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GetFunc_1_EndInvoke_m9D420B6C7880E770682980966755F06427CC6772_gshared (GetFunc_1_t066CF2B720A5DA6F60A74EF9A9D7F550EBF063EC * __this, PushAsTableStruct_t2DB10DF5320F7FD35E14405CFBD350FEF15C15AB * ___val0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___val0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void XLuaTest.BaseTestBase`1<System.Object>::Foo(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BaseTestBase_1_Foo_m81BC384E8BEBBF14351BBEB86E02D82C1AF18D84_gshared (BaseTestBase_1_t2F497E566CC34D7842A1E1B67290C160DDE78041 * __this, int32_t ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseTestBase_1_Foo_m81BC384E8BEBBF14351BBEB86E02D82C1AF18D84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___p0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495((RuntimeObject *)_stringLiteral6F9C447D071959B133DDD89681640464758FD707, (RuntimeObject *)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708((RuntimeObject *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void XLuaTest.BaseTestBase`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseTestBase_1__ctor_mE4CF178FFEC440AE7C5652EC4195EBB4780814EF_gshared (BaseTestBase_1_t2F497E566CC34D7842A1E1B67290C160DDE78041 * __this, const RuntimeMethod* method)
{
	CHECK_PAUSE_POINT;
	{
		NullCheck((BaseTestHelper_t794E250C7F0652F308490859319BC8681298B927 *)__this);
		BaseTestHelper__ctor_mC47434A2BEFCFB584A08227569E5437B27381928((BaseTestHelper_t794E250C7F0652F308490859319BC8681298B927 *)__this, /*hidden argument*/NULL);
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
// System.Void XLuaTest.GenericClass`1<System.Double>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void GenericClass_1__ctor_m2A0E9009C409E6EF292B72819AE693B0DF408009_gshared (GenericClass_1_t3CABC5EB16D1C28F73C28384FCF1E2DFF7B5223B * __this, double ___a0, const RuntimeMethod* method)
{
	DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * V_0 = NULL;
	CHECK_PAUSE_POINT;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		double L_0 = ___a0;
		__this->set_a_0(L_0);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_1 = ((GenericClass_1_t3CABC5EB16D1C28F73C28384FCF1E2DFF7B5223B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->get__c__Hotfix0_ctor_1();
		V_0 = (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_1;
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_3 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_3);
		DelegateBridge_InvokeSessionStart_mB01D5A166A3F2CFC801C608C5C05D0048FF23D50((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_3, /*hidden argument*/NULL);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_4 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_4);
		((  void (*) (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *, GenericClass_1_t3CABC5EB16D1C28F73C28384FCF1E2DFF7B5223B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_4, (GenericClass_1_t3CABC5EB16D1C28F73C28384FCF1E2DFF7B5223B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_5 = V_0;
		double L_6 = ___a0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_5);
		((  void (*) (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_5, (double)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_7 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_7);
		DelegateBridge_Invoke_m8EB2A558888137BF9084126F09A3821BB5C62D66((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_7, (int32_t)((int32_t)0), /*hidden argument*/NULL);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_8 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_8);
		DelegateBridge_InvokeSessionEnd_mB0B7DC120401CBB4914CFE3DEFC3A9859E8AF2B1((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_8, /*hidden argument*/NULL);
	}

IL_0055:
	{
		return;
	}
}
// System.Void XLuaTest.GenericClass`1<System.Double>::Func1()
extern "C" IL2CPP_METHOD_ATTR void GenericClass_1_Func1_m30D7CFF6E180D1B0F10FEDF23FD66CFF1070CAE9_gshared (GenericClass_1_t3CABC5EB16D1C28F73C28384FCF1E2DFF7B5223B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericClass_1_Func1_m30D7CFF6E180D1B0F10FEDF23FD66CFF1070CAE9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * V_0 = NULL;
	CHECK_PAUSE_POINT;
	{
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_0 = ((GenericClass_1_t3CABC5EB16D1C28F73C28384FCF1E2DFF7B5223B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->get___Hotfix0_Func1_2();
		V_0 = (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_0;
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_2 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_2);
		DelegateBridge_InvokeSessionStart_mB01D5A166A3F2CFC801C608C5C05D0048FF23D50((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_2, /*hidden argument*/NULL);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_3 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_3);
		((  void (*) (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *, GenericClass_1_t3CABC5EB16D1C28F73C28384FCF1E2DFF7B5223B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_3, (GenericClass_1_t3CABC5EB16D1C28F73C28384FCF1E2DFF7B5223B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_4 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_4);
		DelegateBridge_Invoke_m8EB2A558888137BF9084126F09A3821BB5C62D66((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_4, (int32_t)((int32_t)0), /*hidden argument*/NULL);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_5 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_5);
		DelegateBridge_InvokeSessionEnd_mB0B7DC120401CBB4914CFE3DEFC3A9859E8AF2B1((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_5, /*hidden argument*/NULL);
		return;
	}

IL_003d:
	{
		double L_6 = (double)__this->get_a_0();
		double L_7 = L_6;
		RuntimeObject * L_8 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), &L_7);
		String_t* L_9 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495((RuntimeObject *)_stringLiteral30042AAB716211A15FF4E0C635B9F7EAEF2ABBF4, (RuntimeObject *)L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708((RuntimeObject *)L_9, /*hidden argument*/NULL);
		return;
	}
}
// T XLuaTest.GenericClass`1<System.Double>::Func2()
extern "C" IL2CPP_METHOD_ATTR double GenericClass_1_Func2_m76E17FDE31924DC033D807E3947D4ED6599AA493_gshared (GenericClass_1_t3CABC5EB16D1C28F73C28384FCF1E2DFF7B5223B * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * V_2 = NULL;
	CHECK_PAUSE_POINT;
	{
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_0 = ((GenericClass_1_t3CABC5EB16D1C28F73C28384FCF1E2DFF7B5223B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->get___Hotfix0_Func2_3();
		V_2 = (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_0;
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_1 = V_2;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_2 = V_2;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_2);
		DelegateBridge_InvokeSessionStart_mB01D5A166A3F2CFC801C608C5C05D0048FF23D50((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_2, /*hidden argument*/NULL);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_3 = V_2;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_3);
		((  void (*) (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *, GenericClass_1_t3CABC5EB16D1C28F73C28384FCF1E2DFF7B5223B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_3, (GenericClass_1_t3CABC5EB16D1C28F73C28384FCF1E2DFF7B5223B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_4 = V_2;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_4);
		DelegateBridge_Invoke_m8EB2A558888137BF9084126F09A3821BB5C62D66((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_4, (int32_t)((int32_t)1), /*hidden argument*/NULL);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_5 = V_2;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_5);
		double L_6 = ((  double (*) (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return L_6;
	}

IL_003d:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(double));
		double L_7 = V_0;
		V_1 = (double)L_7;
		goto IL_004a;
	}

IL_004a:
	{
		double L_8 = V_1;
		return L_8;
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
// System.Void XLuaTest.GenericClass`1<System.Object>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void GenericClass_1__ctor_m751263C5CEE2E4DA93F1B73D5EB1AD57D899FE97_gshared (GenericClass_1_tF66DEB2180060692D3A5F115E8D9108F81243CA6 * __this, RuntimeObject * ___a0, const RuntimeMethod* method)
{
	DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * V_0 = NULL;
	CHECK_PAUSE_POINT;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___a0;
		__this->set_a_0(L_0);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_1 = ((GenericClass_1_tF66DEB2180060692D3A5F115E8D9108F81243CA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->get__c__Hotfix0_ctor_1();
		V_0 = (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_1;
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_3 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_3);
		DelegateBridge_InvokeSessionStart_mB01D5A166A3F2CFC801C608C5C05D0048FF23D50((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_3, /*hidden argument*/NULL);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_4 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_4);
		((  void (*) (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *, GenericClass_1_tF66DEB2180060692D3A5F115E8D9108F81243CA6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_4, (GenericClass_1_tF66DEB2180060692D3A5F115E8D9108F81243CA6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_5 = V_0;
		RuntimeObject * L_6 = ___a0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_5);
		((  void (*) (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_5, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_7 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_7);
		DelegateBridge_Invoke_m8EB2A558888137BF9084126F09A3821BB5C62D66((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_7, (int32_t)((int32_t)0), /*hidden argument*/NULL);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_8 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_8);
		DelegateBridge_InvokeSessionEnd_mB0B7DC120401CBB4914CFE3DEFC3A9859E8AF2B1((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_8, /*hidden argument*/NULL);
	}

IL_0055:
	{
		return;
	}
}
// System.Void XLuaTest.GenericClass`1<System.Object>::Func1()
extern "C" IL2CPP_METHOD_ATTR void GenericClass_1_Func1_mD34921F7A3002289F530FBC8C91AA3BB564BB402_gshared (GenericClass_1_tF66DEB2180060692D3A5F115E8D9108F81243CA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericClass_1_Func1_mD34921F7A3002289F530FBC8C91AA3BB564BB402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * V_0 = NULL;
	CHECK_PAUSE_POINT;
	{
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_0 = ((GenericClass_1_tF66DEB2180060692D3A5F115E8D9108F81243CA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->get___Hotfix0_Func1_2();
		V_0 = (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_0;
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_2 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_2);
		DelegateBridge_InvokeSessionStart_mB01D5A166A3F2CFC801C608C5C05D0048FF23D50((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_2, /*hidden argument*/NULL);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_3 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_3);
		((  void (*) (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *, GenericClass_1_tF66DEB2180060692D3A5F115E8D9108F81243CA6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_3, (GenericClass_1_tF66DEB2180060692D3A5F115E8D9108F81243CA6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_4 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_4);
		DelegateBridge_Invoke_m8EB2A558888137BF9084126F09A3821BB5C62D66((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_4, (int32_t)((int32_t)0), /*hidden argument*/NULL);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_5 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_5);
		DelegateBridge_InvokeSessionEnd_mB0B7DC120401CBB4914CFE3DEFC3A9859E8AF2B1((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_5, /*hidden argument*/NULL);
		return;
	}

IL_003d:
	{
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_a_0();
		String_t* L_7 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495((RuntimeObject *)_stringLiteral30042AAB716211A15FF4E0C635B9F7EAEF2ABBF4, (RuntimeObject *)L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708((RuntimeObject *)L_7, /*hidden argument*/NULL);
		return;
	}
}
// T XLuaTest.GenericClass`1<System.Object>::Func2()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GenericClass_1_Func2_mADD85DEFED7B9EFF58B1A62D1E5976F0644FB8D9_gshared (GenericClass_1_tF66DEB2180060692D3A5F115E8D9108F81243CA6 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * V_2 = NULL;
	CHECK_PAUSE_POINT;
	{
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_0 = ((GenericClass_1_tF66DEB2180060692D3A5F115E8D9108F81243CA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->get___Hotfix0_Func2_3();
		V_2 = (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_0;
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_1 = V_2;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_2 = V_2;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_2);
		DelegateBridge_InvokeSessionStart_mB01D5A166A3F2CFC801C608C5C05D0048FF23D50((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_2, /*hidden argument*/NULL);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_3 = V_2;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_3);
		((  void (*) (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *, GenericClass_1_tF66DEB2180060692D3A5F115E8D9108F81243CA6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_3, (GenericClass_1_tF66DEB2180060692D3A5F115E8D9108F81243CA6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_4 = V_2;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_4);
		DelegateBridge_Invoke_m8EB2A558888137BF9084126F09A3821BB5C62D66((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_4, (int32_t)((int32_t)1), /*hidden argument*/NULL);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_5 = V_2;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_5);
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return L_6;
	}

IL_003d:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_7 = V_0;
		V_1 = (RuntimeObject *)L_7;
		goto IL_004a;
	}

IL_004a:
	{
		RuntimeObject * L_8 = V_1;
		return L_8;
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
// System.Void XLuaTest.GenericStruct`1<System.Int32>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void GenericStruct_1__ctor_m983C583BA7959340F748A7B7EA1D541B85C32B39_gshared (GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789 * __this, int32_t ___a0, const RuntimeMethod* method)
{
	DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * V_0 = NULL;
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___a0;
		__this->set_a_0(L_0);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_1 = ((GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get__c__Hotfix0_ctor_1();
		V_0 = (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_1;
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_3 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_3);
		DelegateBridge_InvokeSessionStart_mB01D5A166A3F2CFC801C608C5C05D0048FF23D50((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_3, /*hidden argument*/NULL);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_4 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_4);
		((  void (*) (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *, GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_4, (GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789 )(*(GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789 *)__this), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_5 = V_0;
		int32_t L_6 = ___a0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_5);
		((  void (*) (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_7 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_7);
		DelegateBridge_Invoke_m8EB2A558888137BF9084126F09A3821BB5C62D66((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_7, (int32_t)((int32_t)0), /*hidden argument*/NULL);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_8 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_8);
		DelegateBridge_InvokeSessionEnd_mB0B7DC120401CBB4914CFE3DEFC3A9859E8AF2B1((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_8, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
extern "C"  void GenericStruct_1__ctor_m983C583BA7959340F748A7B7EA1D541B85C32B39_AdjustorThunk (RuntimeObject * __this, int32_t ___a0, const RuntimeMethod* method)
{
	GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789 * _thisAdjusted = reinterpret_cast<GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789 *>(__this + 1);
	GenericStruct_1__ctor_m983C583BA7959340F748A7B7EA1D541B85C32B39(_thisAdjusted, ___a0, method);
}
// T XLuaTest.GenericStruct`1<System.Int32>::GetA(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t GenericStruct_1_GetA_mD98B6CC243403A72642A25FC600AE4903708D624_gshared (GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789 * __this, int32_t ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericStruct_1_GetA_mD98B6CC243403A72642A25FC600AE4903708D624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * V_1 = NULL;
	CHECK_PAUSE_POINT;
	{
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_0 = ((GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get___Hotfix0_GetA_2();
		V_1 = (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_0;
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_1 = V_1;
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_2 = V_1;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_2);
		DelegateBridge_InvokeSessionStart_mB01D5A166A3F2CFC801C608C5C05D0048FF23D50((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_2, /*hidden argument*/NULL);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_3 = V_1;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_3);
		((  void (*) (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *, GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_3, (GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789 )(*(GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789 *)__this), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_4 = V_1;
		int32_t L_5 = ___p0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_4);
		DelegateBridge_InParam_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m2BE571F94915B5BFC55E216237C19497F87C8B52((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_4, (int32_t)L_5, /*hidden argument*/DelegateBridge_InParam_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m2BE571F94915B5BFC55E216237C19497F87C8B52_RuntimeMethod_var);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_6 = V_1;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_6);
		DelegateBridge_Invoke_m8EB2A558888137BF9084126F09A3821BB5C62D66((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_6, (int32_t)((int32_t)1), /*hidden argument*/NULL);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_7 = V_1;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_7);
		int32_t L_8 = ((  int32_t (*) (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_8;
	}

IL_004c:
	{
		int32_t L_9 = (int32_t)__this->get_a_0();
		V_0 = (int32_t)L_9;
		goto IL_0056;
	}

IL_0056:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
extern "C"  int32_t GenericStruct_1_GetA_mD98B6CC243403A72642A25FC600AE4903708D624_AdjustorThunk (RuntimeObject * __this, int32_t ___p0, const RuntimeMethod* method)
{
	GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789 * _thisAdjusted = reinterpret_cast<GenericStruct_1_t9C9FC7760B1BAA3243068E7DA36A3F63BB6EF789 *>(__this + 1);
	return GenericStruct_1_GetA_mD98B6CC243403A72642A25FC600AE4903708D624(_thisAdjusted, ___p0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void XLuaTest.GenericStruct`1<System.Object>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void GenericStruct_1__ctor_m52552182598E082BE70B5711F34DE6789EF5770A_gshared (GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E * __this, RuntimeObject * ___a0, const RuntimeMethod* method)
{
	DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * V_0 = NULL;
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = ___a0;
		__this->set_a_0(L_0);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_1 = ((GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get__c__Hotfix0_ctor_1();
		V_0 = (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_1;
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_3 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_3);
		DelegateBridge_InvokeSessionStart_mB01D5A166A3F2CFC801C608C5C05D0048FF23D50((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_3, /*hidden argument*/NULL);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_4 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_4);
		((  void (*) (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *, GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_4, (GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E )(*(GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E *)__this), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_5 = V_0;
		RuntimeObject * L_6 = ___a0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_5);
		((  void (*) (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_5, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_7 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_7);
		DelegateBridge_Invoke_m8EB2A558888137BF9084126F09A3821BB5C62D66((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_7, (int32_t)((int32_t)0), /*hidden argument*/NULL);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_8 = V_0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_8);
		DelegateBridge_InvokeSessionEnd_mB0B7DC120401CBB4914CFE3DEFC3A9859E8AF2B1((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_8, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
extern "C"  void GenericStruct_1__ctor_m52552182598E082BE70B5711F34DE6789EF5770A_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___a0, const RuntimeMethod* method)
{
	GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E * _thisAdjusted = reinterpret_cast<GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E *>(__this + 1);
	GenericStruct_1__ctor_m52552182598E082BE70B5711F34DE6789EF5770A(_thisAdjusted, ___a0, method);
}
// T XLuaTest.GenericStruct`1<System.Object>::GetA(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GenericStruct_1_GetA_m1E42C9175CECBAADF4BCF0944CD012F4FA00969C_gshared (GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E * __this, int32_t ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericStruct_1_GetA_m1E42C9175CECBAADF4BCF0944CD012F4FA00969C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * V_1 = NULL;
	CHECK_PAUSE_POINT;
	{
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_0 = ((GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get___Hotfix0_GetA_2();
		V_1 = (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_0;
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_1 = V_1;
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_2 = V_1;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_2);
		DelegateBridge_InvokeSessionStart_mB01D5A166A3F2CFC801C608C5C05D0048FF23D50((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_2, /*hidden argument*/NULL);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_3 = V_1;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_3);
		((  void (*) (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *, GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_3, (GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E )(*(GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E *)__this), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_4 = V_1;
		int32_t L_5 = ___p0;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_4);
		DelegateBridge_InParam_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m2BE571F94915B5BFC55E216237C19497F87C8B52((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_4, (int32_t)L_5, /*hidden argument*/DelegateBridge_InParam_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m2BE571F94915B5BFC55E216237C19497F87C8B52_RuntimeMethod_var);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_6 = V_1;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_6);
		DelegateBridge_Invoke_m8EB2A558888137BF9084126F09A3821BB5C62D66((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_6, (int32_t)((int32_t)1), /*hidden argument*/NULL);
		DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 * L_7 = V_1;
		NullCheck((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_7);
		RuntimeObject * L_8 = ((  RuntimeObject * (*) (DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((DelegateBridge_tE3E60EC46AA64E8F784FCB860638E784936620C8 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_8;
	}

IL_004c:
	{
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_a_0();
		V_0 = (RuntimeObject *)L_9;
		goto IL_0056;
	}

IL_0056:
	{
		RuntimeObject * L_10 = V_0;
		return L_10;
	}
}
extern "C"  RuntimeObject * GenericStruct_1_GetA_m1E42C9175CECBAADF4BCF0944CD012F4FA00969C_AdjustorThunk (RuntimeObject * __this, int32_t ___p0, const RuntimeMethod* method)
{
	GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E * _thisAdjusted = reinterpret_cast<GenericStruct_1_tDC8D28675A1AEBF0861A6B8B1BE201BB61DFCA6E *>(__this + 1);
	return GenericStruct_1_GetA_m1E42C9175CECBAADF4BCF0944CD012F4FA00969C(_thisAdjusted, ___p0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
