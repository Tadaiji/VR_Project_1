#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Func`2<UnityEngine.Collider,System.Boolean>
struct Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// ovrAvatarGazeTarget[]
struct ovrAvatarGazeTargetU5BU5D_tA54878090C639ECE9849C3BB86C4E912936F231F;
// ovrAvatarLight[]
struct ovrAvatarLightU5BU5D_t5BF1241C819241561ED81B7BA7709959F352B84B;
// ovrAvatarMaterialLayerState[]
struct ovrAvatarMaterialLayerStateU5BU5D_t9FA709AAB7204151A5B78BACFC07627DC5EABD45;
// ovrAvatarPBSMaterialState[]
struct ovrAvatarPBSMaterialStateU5BU5D_t7E688FB5F9F945786BE02254DBFAC4DA2466DD7B;
// ovrAvatarTransform[]
struct ovrAvatarTransformU5BU5D_t49C8312491C8E72FDD33233AD86212E219C1C4A9;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Oculus.Avatar.CAPI
struct CAPI_t2342A422947CB113E509199C42C27F92D2950018;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// OVRTouchSample.HandPose
struct HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// OVRTouchSample.TouchController
struct TouchController_t1BCC5F911D1E7987E5DA9A4654DD05D585C32A03;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ovrAvatarMaterialState
struct ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615;
// Oculus.Avatar.CAPI/LoggingDelegate
struct LoggingDelegate_t76BE1328321D58DD99A77FF17F3328AC6EC0AF8B;
// OVRTouchSample.Hand/<>c
struct U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRP_1_30_0_tA483F6EBCC533D0BD82270B4CEC48F7A1FDE15F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OvrAvatar_t555D4012E0BDBC9ED5695214CD086194AA8D8E58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarBlendShapeParams_Offsets_t6F5F47DA4245CBC0687725FAD42369094F5ECA8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarBodyComponent_Offsets_tBAF7A2FBB1273783DBDAA064190253FE67488634_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarComponent_Offsets_t1053058442697FB248528D06C75B24FAFA4D90EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarGazeTarget_Offsets_tF592C6CB27FF8F6FA4ACF637CEC59A58E71576B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarGazeTargets_Offsets_t114388051EFA46E537115827063EF5EDD207AA89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarMeshAssetDataV2_tB3E68F1A89279C70EA510F6EB849152D31345EB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarMeshAssetData_t6E6DA61162FC209DB1AEBF40F9824455C37AD9EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarMessage_AssetLoaded_tDBBE01323AEB5E1BD7C5C7FE520987246A9E263B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarMessage_AvatarSpecification_tA9DD22005F270E16ED8AAD3D5989849029880C4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarPBSMaterialStateU5BU5D_t7E688FB5F9F945786BE02254DBFAC4DA2466DD7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarRenderPart_ProjectorRender_t95A49114D5EB4DA1D23CB38499FBF25EE3A8667C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_tCEA8CD6177474FFCCB1095E1117F12F2FBAD6690_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarRenderPart_SkinnedMeshRenderPBS_t643FDD46219508F6493CE48EEDC5C2CDF2473AD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarRenderPart_SkinnedMeshRender_tC6C116515EEC1A44347321E15EAF947655CE1E6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarTextureAssetData_t4C4E73A3C2985EBD1C2584F462AE35048FC992F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrAvatarVisemes_Offsets_tA4BAFF3AC2AA4B73C27522B2C78C5BB9B9D33952_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0632DB775ADE52DAFF859F25D994599CB49C686D;
IL2CPP_EXTERN_C String_t* _stringLiteral06628E376ACDA044350CF5680DF08B57D525D477;
IL2CPP_EXTERN_C String_t* _stringLiteral227FE6786FEEFA768F545DB43029719EF0C3FC8F;
IL2CPP_EXTERN_C String_t* _stringLiteral2BB648AB314E5ADF7A4A2179C85F72CC60FE5549;
IL2CPP_EXTERN_C String_t* _stringLiteral3AF8AA725C39B192DE1EA3DAF91534950860A1CD;
IL2CPP_EXTERN_C String_t* _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45;
IL2CPP_EXTERN_C String_t* _stringLiteral4845015737DC41475709911228278216EE4DC3AF;
IL2CPP_EXTERN_C String_t* _stringLiteral601F2186767331699A4F498733D910E0608B9400;
IL2CPP_EXTERN_C String_t* _stringLiteral65A3EB8152D46D206E084E9FFE53191BE45C5214;
IL2CPP_EXTERN_C String_t* _stringLiteral686B62DC85A76B4D986AD7F54097517BC28F71E3;
IL2CPP_EXTERN_C String_t* _stringLiteral6C3B5C1225A47534B327C679815FC500F4D0BC4D;
IL2CPP_EXTERN_C String_t* _stringLiteral6F6EDA7F146F65D72B4809F9E8F843CC687A82AE;
IL2CPP_EXTERN_C String_t* _stringLiteral8527477538A58C4D0BEFF1E314F25DFC679B1257;
IL2CPP_EXTERN_C String_t* _stringLiteral8AB4E9905F6F550494FF4D258F973A6CC2395CC7;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9;
IL2CPP_EXTERN_C String_t* _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B;
IL2CPP_EXTERN_C String_t* _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralC24656F45ECBD5D676F4A3BA2C3CC9DC8BDE0F90;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF4C9085A8FC519D61179956F4A28BAD81D661A82;
IL2CPP_EXTERN_C const RuntimeMethod* CAPI_MarshalRenderComponent_TisovrAvatarBodyComponent_t7F9CF049212A1E12FF3EACC09BC2BC8D05BB82E1_m32800079165F57D4898BED5CD050ADA33AEC58E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m019790B192264D71C61E8CDF27186A0A2196D384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToPtr_TisovrAvatarBlendShapeParams_t36C1189F1E68173711B1A090FDE08CC23995443E_mE34270DE8E98EE3FC56E44D3109E125E539EF033_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TouchController_OnInputFocusAcquired_m4CE35E8F9CA5C7E611193F2859EF5D72E4C6A106_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TouchController_OnInputFocusLost_m6317EA5E49BEFAB15C37741C92DE17CC0056DE15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IntPtr_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarBaseComponent_t7DEB5F925AC853C5C6CE6E4E8399227D2E2DD34D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarBlendShapeParams_t36C1189F1E68173711B1A090FDE08CC23995443E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarControllerComponent_t9E37F2D7ED15D7343D067879332E0F25ED8D92DB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarDebugLine_t631F9BEAF4CC9320B9008D89790146CCC574DFF8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarDebugTransform_t0774ED1BADA0CBF33966954A06370CB9979BD93F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarGazeTarget_tED1DE5572DF774BFEE76D65064690A15C6245D98_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarGazeTargets_t385BB22293BFB6338CE0BA9FCEC655B7BD6453DE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarHandComponent_t05B0D0A79F3E6BB05A84312990AEBF3B5A707105_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarLight_tDE7CCF145353DF293100FBA3976B0937532E6656_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarMeshAssetDataV2_tB3E68F1A89279C70EA510F6EB849152D31345EB8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarMeshAssetData_t6E6DA61162FC209DB1AEBF40F9824455C37AD9EE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarMessage_AssetLoaded_tDBBE01323AEB5E1BD7C5C7FE520987246A9E263B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarMessage_AvatarSpecification_tA9DD22005F270E16ED8AAD3D5989849029880C4C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarRenderPart_ProjectorRender_t95A49114D5EB4DA1D23CB38499FBF25EE3A8667C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_tCEA8CD6177474FFCCB1095E1117F12F2FBAD6690_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarRenderPart_SkinnedMeshRenderPBS_t643FDD46219508F6493CE48EEDC5C2CDF2473AD3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarRenderPart_SkinnedMeshRender_tC6C116515EEC1A44347321E15EAF947655CE1E6F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarTextureAssetData_t4C4E73A3C2985EBD1C2584F462AE35048FC992F8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ovrAvatarVisemes_t6BA73049EA05C3F5E6775E16DF8CF4192119E0B1_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct ovrAvatarGazeTarget_tED1DE5572DF774BFEE76D65064690A15C6245D98;
struct ovrAvatarLight_tDE7CCF145353DF293100FBA3976B0937532E6656;
struct ovrAvatarMaterialLayerState_tD95A117E6B2CCE0BA9E524E4DF244B46322EA615;
struct ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615;;
struct ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_marshaled_pinvoke;
struct ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_marshaled_pinvoke;;
struct ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct ovrAvatarGazeTargetU5BU5D_tA54878090C639ECE9849C3BB86C4E912936F231F;
struct ovrAvatarLightU5BU5D_t5BF1241C819241561ED81B7BA7709959F352B84B;
struct ovrAvatarPBSMaterialStateU5BU5D_t7E688FB5F9F945786BE02254DBFAC4DA2466DD7B;
struct ovrAvatarTransformU5BU5D_t49C8312491C8E72FDD33233AD86212E219C1C4A9;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// Oculus.Avatar.AvatarLogger
struct AvatarLogger_tED5F1D2991EA2120911D647FDD3722ECEDBF5233  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7  : public RuntimeObject
{
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;
};

// Oculus.Avatar.CAPI/OVRP_1_30_0
struct OVRP_1_30_0_tA483F6EBCC533D0BD82270B4CEC48F7A1FDE15F6  : public RuntimeObject
{
};

struct OVRP_1_30_0_tA483F6EBCC533D0BD82270B4CEC48F7A1FDE15F6_StaticFields
{
	// System.Version Oculus.Avatar.CAPI/OVRP_1_30_0::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_0;
};

// OVRTouchSample.Hand/<>c
struct U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F  : public RuntimeObject
{
};

struct U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_StaticFields
{
	// OVRTouchSample.Hand/<>c OVRTouchSample.Hand/<>c::<>9
	U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Collider,System.Boolean> OVRTouchSample.Hand/<>c::<>9__28_0
	Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* ___U3CU3E9__28_0_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// ovrAvatarBlendShapeParams_Offsets
struct ovrAvatarBlendShapeParams_Offsets_t6F5F47DA4245CBC0687725FAD42369094F5ECA8A 
{
	union
	{
		struct
		{
		};
		uint8_t ovrAvatarBlendShapeParams_Offsets_t6F5F47DA4245CBC0687725FAD42369094F5ECA8A__padding[1];
	};
};

struct ovrAvatarBlendShapeParams_Offsets_t6F5F47DA4245CBC0687725FAD42369094F5ECA8A_StaticFields
{
	// System.Int32 ovrAvatarBlendShapeParams_Offsets::blendShapeParamCount
	int32_t ___blendShapeParamCount_0;
	// System.Int64 ovrAvatarBlendShapeParams_Offsets::blendShapeParams
	int64_t ___blendShapeParams_1;
};

// ovrAvatarBodyComponent_Offsets
struct ovrAvatarBodyComponent_Offsets_tBAF7A2FBB1273783DBDAA064190253FE67488634 
{
	union
	{
		struct
		{
		};
		uint8_t ovrAvatarBodyComponent_Offsets_tBAF7A2FBB1273783DBDAA064190253FE67488634__padding[1];
	};
};

struct ovrAvatarBodyComponent_Offsets_tBAF7A2FBB1273783DBDAA064190253FE67488634_StaticFields
{
	// System.Int64 ovrAvatarBodyComponent_Offsets::leftEyeTransform
	int64_t ___leftEyeTransform_0;
	// System.Int64 ovrAvatarBodyComponent_Offsets::rightEyeTransform
	int64_t ___rightEyeTransform_1;
	// System.Int64 ovrAvatarBodyComponent_Offsets::centerEyeTransform
	int64_t ___centerEyeTransform_2;
	// System.Int64 ovrAvatarBodyComponent_Offsets::renderComponent
	int64_t ___renderComponent_3;
};

// ovrAvatarComponent_Offsets
struct ovrAvatarComponent_Offsets_t1053058442697FB248528D06C75B24FAFA4D90EE 
{
	union
	{
		struct
		{
		};
		uint8_t ovrAvatarComponent_Offsets_t1053058442697FB248528D06C75B24FAFA4D90EE__padding[1];
	};
};

struct ovrAvatarComponent_Offsets_t1053058442697FB248528D06C75B24FAFA4D90EE_StaticFields
{
	// System.Int64 ovrAvatarComponent_Offsets::transform
	int64_t ___transform_0;
	// System.Int32 ovrAvatarComponent_Offsets::renderPartCount
	int32_t ___renderPartCount_1;
	// System.Int32 ovrAvatarComponent_Offsets::renderParts
	int32_t ___renderParts_2;
	// System.Int32 ovrAvatarComponent_Offsets::name
	int32_t ___name_3;
};

// ovrAvatarGazeTarget_Offsets
struct ovrAvatarGazeTarget_Offsets_tF592C6CB27FF8F6FA4ACF637CEC59A58E71576B8 
{
	union
	{
		struct
		{
		};
		uint8_t ovrAvatarGazeTarget_Offsets_tF592C6CB27FF8F6FA4ACF637CEC59A58E71576B8__padding[1];
	};
};

struct ovrAvatarGazeTarget_Offsets_tF592C6CB27FF8F6FA4ACF637CEC59A58E71576B8_StaticFields
{
	// System.Int32 ovrAvatarGazeTarget_Offsets::id
	int32_t ___id_0;
	// System.Int32 ovrAvatarGazeTarget_Offsets::worldPosition
	int32_t ___worldPosition_1;
	// System.Int32 ovrAvatarGazeTarget_Offsets::type
	int32_t ___type_2;
};

// ovrAvatarGazeTargets_Offsets
struct ovrAvatarGazeTargets_Offsets_t114388051EFA46E537115827063EF5EDD207AA89 
{
	union
	{
		struct
		{
		};
		uint8_t ovrAvatarGazeTargets_Offsets_t114388051EFA46E537115827063EF5EDD207AA89__padding[1];
	};
};

struct ovrAvatarGazeTargets_Offsets_t114388051EFA46E537115827063EF5EDD207AA89_StaticFields
{
	// System.Int32 ovrAvatarGazeTargets_Offsets::targetCount
	int32_t ___targetCount_0;
	// System.Int64 ovrAvatarGazeTargets_Offsets::targets
	int64_t ___targets_1;
};

// ovrAvatarVisemes_Offsets
struct ovrAvatarVisemes_Offsets_tA4BAFF3AC2AA4B73C27522B2C78C5BB9B9D33952 
{
	union
	{
		struct
		{
		};
		uint8_t ovrAvatarVisemes_Offsets_tA4BAFF3AC2AA4B73C27522B2C78C5BB9B9D33952__padding[1];
	};
};

struct ovrAvatarVisemes_Offsets_tA4BAFF3AC2AA4B73C27522B2C78C5BB9B9D33952_StaticFields
{
	// System.Int32 ovrAvatarVisemes_Offsets::visemeParamCount
	int32_t ___visemeParamCount_0;
	// System.Int64 ovrAvatarVisemes_Offsets::visemeParams
	int64_t ___visemeParams_1;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72__padding[20];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A__padding[24];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069__padding[32];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::1385A3395CDC9F7F90324CB0A06C5AC11AD4A425A35BBB7D5C9C0C33D8ADE9A0
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___1385A3395CDC9F7F90324CB0A06C5AC11AD4A425A35BBB7D5C9C0C33D8ADE9A0_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::1B134934983D969A9B865446C4F2033761F0CD8E0AAD1445CDD8C3993FBAE9D9
	__StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 ___1B134934983D969A9B865446C4F2033761F0CD8E0AAD1445CDD8C3993FBAE9D9_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::5F5673AE83EE13B46A7C1D9CE2F8CC01C37CFC893B0AC5E6E9260B79215F5ADC
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___5F5673AE83EE13B46A7C1D9CE2F8CC01C37CFC893B0AC5E6E9260B79215F5ADC_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::9F95F0EC2554B6E680D7AE6CD0929E16B4EFC86142A8F454EFE992CCC97C99D2
	__StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 ___9F95F0EC2554B6E680D7AE6CD0929E16B4EFC86142A8F454EFE992CCC97C99D2_4;
};

// Oculus.Avatar.CAPI
struct CAPI_t2342A422947CB113E509199C42C27F92D2950018  : public RuntimeObject
{
};

struct CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields
{
	// System.IntPtr Oculus.Avatar.CAPI::nativeVisemeData
	intptr_t ___nativeVisemeData_1;
	// System.IntPtr Oculus.Avatar.CAPI::nativeGazeTargetsData
	intptr_t ___nativeGazeTargetsData_2;
	// System.IntPtr Oculus.Avatar.CAPI::nativeAvatarLightsData
	intptr_t ___nativeAvatarLightsData_3;
	// System.IntPtr Oculus.Avatar.CAPI::DebugLineCountData
	intptr_t ___DebugLineCountData_4;
	// System.Single[] Oculus.Avatar.CAPI::scratchBufferFloat
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___scratchBufferFloat_5;
	// UnityEngine.GameObject Oculus.Avatar.CAPI::debugLineGo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___debugLineGo_6;
	// System.String Oculus.Avatar.CAPI::SDKRuntimePrefix
	String_t* ___SDKRuntimePrefix_7;
	// System.Version Oculus.Avatar.CAPI::ovrPluginVersion
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___ovrPluginVersion_9;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// ovrAvatarBaseComponent
struct ovrAvatarBaseComponent_t7DEB5F925AC853C5C6CE6E4E8399227D2E2DD34D 
{
	// UnityEngine.Vector3 ovrAvatarBaseComponent::basePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___basePosition_0;
	// System.IntPtr ovrAvatarBaseComponent::renderComponent
	intptr_t ___renderComponent_1;
};

// ovrAvatarBlendShapeParams
struct ovrAvatarBlendShapeParams_t36C1189F1E68173711B1A090FDE08CC23995443E 
{
	// System.UInt32 ovrAvatarBlendShapeParams::blendShapeParamCount
	uint32_t ___blendShapeParamCount_0;
	// System.Single[] ovrAvatarBlendShapeParams::blendShapeParams
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___blendShapeParams_1;
};
// Native definition for P/Invoke marshalling of ovrAvatarBlendShapeParams
struct ovrAvatarBlendShapeParams_t36C1189F1E68173711B1A090FDE08CC23995443E_marshaled_pinvoke
{
	uint32_t ___blendShapeParamCount_0;
	float ___blendShapeParams_1[64];
};
// Native definition for COM marshalling of ovrAvatarBlendShapeParams
struct ovrAvatarBlendShapeParams_t36C1189F1E68173711B1A090FDE08CC23995443E_marshaled_com
{
	uint32_t ___blendShapeParamCount_0;
	float ___blendShapeParams_1[64];
};

// ovrAvatarDebugLine
struct ovrAvatarDebugLine_t631F9BEAF4CC9320B9008D89790146CCC574DFF8 
{
	// UnityEngine.Vector3 ovrAvatarDebugLine::startPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPoint_0;
	// UnityEngine.Vector3 ovrAvatarDebugLine::endPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPoint_1;
	// UnityEngine.Vector3 ovrAvatarDebugLine::color
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___color_2;
	// ovrAvatarDebugContext ovrAvatarDebugLine::context
	uint32_t ___context_3;
	// System.IntPtr ovrAvatarDebugLine::text
	intptr_t ___text_4;
};

// ovrAvatarExpressiveParameters
struct ovrAvatarExpressiveParameters_t59D856DC2C6954171B34274D578B54A098798A8C 
{
	// UnityEngine.Vector4 ovrAvatarExpressiveParameters::irisColor
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___irisColor_0;
	// UnityEngine.Vector4 ovrAvatarExpressiveParameters::scleraColor
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___scleraColor_1;
	// UnityEngine.Vector4 ovrAvatarExpressiveParameters::lashColor
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lashColor_2;
	// UnityEngine.Vector4 ovrAvatarExpressiveParameters::browColor
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___browColor_3;
	// UnityEngine.Vector4 ovrAvatarExpressiveParameters::lipColor
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lipColor_4;
	// UnityEngine.Vector4 ovrAvatarExpressiveParameters::teethColor
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___teethColor_5;
	// UnityEngine.Vector4 ovrAvatarExpressiveParameters::gumColor
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___gumColor_6;
	// System.Single ovrAvatarExpressiveParameters::browLashIntensity
	float ___browLashIntensity_7;
	// System.Single ovrAvatarExpressiveParameters::lipSmoothness
	float ___lipSmoothness_8;
};

// ovrAvatarGazeTarget
struct ovrAvatarGazeTarget_tED1DE5572DF774BFEE76D65064690A15C6245D98 
{
	// System.UInt32 ovrAvatarGazeTarget::id
	uint32_t ___id_0;
	// UnityEngine.Vector3 ovrAvatarGazeTarget::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_1;
	// ovrAvatarGazeTargetType ovrAvatarGazeTarget::type
	int32_t ___type_2;
};

// ovrAvatarLight
struct ovrAvatarLight_tDE7CCF145353DF293100FBA3976B0937532E6656 
{
	// System.UInt32 ovrAvatarLight::id
	uint32_t ___id_0;
	// ovrAvatarLightType ovrAvatarLight::type
	int32_t ___type_1;
	// System.Single ovrAvatarLight::intensity
	float ___intensity_2;
	// UnityEngine.Vector3 ovrAvatarLight::worldDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldDirection_3;
	// UnityEngine.Vector3 ovrAvatarLight::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_4;
	// System.Single ovrAvatarLight::range
	float ___range_5;
	// System.Single ovrAvatarLight::spotAngleDeg
	float ___spotAngleDeg_6;
};

// ovrAvatarMaterialLayerState
struct ovrAvatarMaterialLayerState_tD95A117E6B2CCE0BA9E524E4DF244B46322EA615 
{
	// ovrAvatarMaterialLayerBlendMode ovrAvatarMaterialLayerState::blendMode
	int32_t ___blendMode_0;
	// ovrAvatarMaterialLayerSampleMode ovrAvatarMaterialLayerState::sampleMode
	int32_t ___sampleMode_1;
	// ovrAvatarMaterialMaskType ovrAvatarMaterialLayerState::maskType
	int32_t ___maskType_2;
	// UnityEngine.Vector4 ovrAvatarMaterialLayerState::layerColor
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___layerColor_3;
	// UnityEngine.Vector4 ovrAvatarMaterialLayerState::sampleParameters
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___sampleParameters_4;
	// System.UInt64 ovrAvatarMaterialLayerState::sampleTexture
	uint64_t ___sampleTexture_5;
	// UnityEngine.Vector4 ovrAvatarMaterialLayerState::sampleScaleOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___sampleScaleOffset_6;
	// UnityEngine.Vector4 ovrAvatarMaterialLayerState::maskParameters
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___maskParameters_7;
	// UnityEngine.Vector4 ovrAvatarMaterialLayerState::maskAxis
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___maskAxis_8;
};

// ovrAvatarMessage_AssetLoaded
struct ovrAvatarMessage_AssetLoaded_tDBBE01323AEB5E1BD7C5C7FE520987246A9E263B 
{
	// System.UInt64 ovrAvatarMessage_AssetLoaded::assetID
	uint64_t ___assetID_0;
	// System.IntPtr ovrAvatarMessage_AssetLoaded::asset
	intptr_t ___asset_1;
};

// ovrAvatarMessage_AvatarSpecification
struct ovrAvatarMessage_AvatarSpecification_tA9DD22005F270E16ED8AAD3D5989849029880C4C 
{
	// System.IntPtr ovrAvatarMessage_AvatarSpecification::avatarSpec
	intptr_t ___avatarSpec_0;
	// System.UInt64 ovrAvatarMessage_AvatarSpecification::oculusUserID
	uint64_t ___oculusUserID_1;
};

// ovrAvatarPBSMaterialState
struct ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423 
{
	// UnityEngine.Vector4 ovrAvatarPBSMaterialState::baseColor
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___baseColor_0;
	// System.UInt64 ovrAvatarPBSMaterialState::albedoTextureID
	uint64_t ___albedoTextureID_1;
	// UnityEngine.Vector4 ovrAvatarPBSMaterialState::albedoMultiplier
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___albedoMultiplier_2;
	// System.UInt64 ovrAvatarPBSMaterialState::metallicnessTextureID
	uint64_t ___metallicnessTextureID_3;
	// System.Single ovrAvatarPBSMaterialState::glossinessScale
	float ___glossinessScale_4;
	// System.UInt64 ovrAvatarPBSMaterialState::normalTextureID
	uint64_t ___normalTextureID_5;
	// System.UInt64 ovrAvatarPBSMaterialState::heightTextureID
	uint64_t ___heightTextureID_6;
	// System.UInt64 ovrAvatarPBSMaterialState::occlusionTextureID
	uint64_t ___occlusionTextureID_7;
	// System.UInt64 ovrAvatarPBSMaterialState::emissionTextureID
	uint64_t ___emissionTextureID_8;
	// UnityEngine.Vector4 ovrAvatarPBSMaterialState::emissionMultiplier
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___emissionMultiplier_9;
	// System.UInt64 ovrAvatarPBSMaterialState::detailMaskTextureID
	uint64_t ___detailMaskTextureID_10;
	// System.UInt64 ovrAvatarPBSMaterialState::detailAlbedoTextureID
	uint64_t ___detailAlbedoTextureID_11;
	// System.UInt64 ovrAvatarPBSMaterialState::detailNormalTextureID
	uint64_t ___detailNormalTextureID_12;
};

// ovrAvatarTextureAssetData
struct ovrAvatarTextureAssetData_t4C4E73A3C2985EBD1C2584F462AE35048FC992F8 
{
	// ovrAvatarTextureFormat ovrAvatarTextureAssetData::format
	int32_t ___format_0;
	// System.UInt32 ovrAvatarTextureAssetData::sizeX
	uint32_t ___sizeX_1;
	// System.UInt32 ovrAvatarTextureAssetData::sizeY
	uint32_t ___sizeY_2;
	// System.UInt32 ovrAvatarTextureAssetData::mipCount
	uint32_t ___mipCount_3;
	// System.UInt64 ovrAvatarTextureAssetData::textureDataSize
	uint64_t ___textureDataSize_4;
	// System.IntPtr ovrAvatarTextureAssetData::textureData
	intptr_t ___textureData_5;
};

// ovrAvatarTransform
struct ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 
{
	// UnityEngine.Vector3 ovrAvatarTransform::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion ovrAvatarTransform::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_1;
	// UnityEngine.Vector3 ovrAvatarTransform::scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_2;
};

// ovrAvatarVisemes
struct ovrAvatarVisemes_t6BA73049EA05C3F5E6775E16DF8CF4192119E0B1 
{
	// System.UInt32 ovrAvatarVisemes::visemeParamCount
	uint32_t ___visemeParamCount_0;
	// System.Single[] ovrAvatarVisemes::visemeParams
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___visemeParams_1;
};
// Native definition for P/Invoke marshalling of ovrAvatarVisemes
struct ovrAvatarVisemes_t6BA73049EA05C3F5E6775E16DF8CF4192119E0B1_marshaled_pinvoke
{
	uint32_t ___visemeParamCount_0;
	float ___visemeParams_1[32];
};
// Native definition for COM marshalling of ovrAvatarVisemes
struct ovrAvatarVisemes_t6BA73049EA05C3F5E6775E16DF8CF4192119E0B1_marshaled_com
{
	uint32_t ___visemeParamCount_0;
	float ___visemeParams_1[32];
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// ovrAvatarBodyComponent
struct ovrAvatarBodyComponent_t7F9CF049212A1E12FF3EACC09BC2BC8D05BB82E1 
{
	// ovrAvatarTransform ovrAvatarBodyComponent::leftEyeTransform
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___leftEyeTransform_0;
	// ovrAvatarTransform ovrAvatarBodyComponent::rightEyeTransform
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___rightEyeTransform_1;
	// ovrAvatarTransform ovrAvatarBodyComponent::centerEyeTransform
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___centerEyeTransform_2;
	// System.IntPtr ovrAvatarBodyComponent::renderComponent
	intptr_t ___renderComponent_3;
};

// ovrAvatarComponent
struct ovrAvatarComponent_tDA7784CCCECD556E1FB75BDE30EAA93C9B3B248E 
{
	// ovrAvatarTransform ovrAvatarComponent::transform
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___transform_0;
	// System.UInt32 ovrAvatarComponent::renderPartCount
	uint32_t ___renderPartCount_1;
	// System.IntPtr ovrAvatarComponent::renderParts
	intptr_t ___renderParts_2;
	// System.String ovrAvatarComponent::name
	String_t* ___name_3;
};
// Native definition for P/Invoke marshalling of ovrAvatarComponent
struct ovrAvatarComponent_tDA7784CCCECD556E1FB75BDE30EAA93C9B3B248E_marshaled_pinvoke
{
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___transform_0;
	uint32_t ___renderPartCount_1;
	intptr_t ___renderParts_2;
	char* ___name_3;
};
// Native definition for COM marshalling of ovrAvatarComponent
struct ovrAvatarComponent_tDA7784CCCECD556E1FB75BDE30EAA93C9B3B248E_marshaled_com
{
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___transform_0;
	uint32_t ___renderPartCount_1;
	intptr_t ___renderParts_2;
	char* ___name_3;
};

// ovrAvatarDebugTransform
struct ovrAvatarDebugTransform_t0774ED1BADA0CBF33966954A06370CB9979BD93F 
{
	// ovrAvatarTransform ovrAvatarDebugTransform::transform
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___transform_0;
	// ovrAvatarDebugContext ovrAvatarDebugTransform::context
	uint32_t ___context_1;
	// System.IntPtr ovrAvatarDebugTransform::text
	intptr_t ___text_2;
};

// ovrAvatarGazeTargets
struct ovrAvatarGazeTargets_t385BB22293BFB6338CE0BA9FCEC655B7BD6453DE 
{
	// System.UInt32 ovrAvatarGazeTargets::targetCount
	uint32_t ___targetCount_0;
	// ovrAvatarGazeTarget[] ovrAvatarGazeTargets::targets
	ovrAvatarGazeTargetU5BU5D_tA54878090C639ECE9849C3BB86C4E912936F231F* ___targets_1;
};
// Native definition for P/Invoke marshalling of ovrAvatarGazeTargets
struct ovrAvatarGazeTargets_t385BB22293BFB6338CE0BA9FCEC655B7BD6453DE_marshaled_pinvoke
{
	uint32_t ___targetCount_0;
	ovrAvatarGazeTarget_tED1DE5572DF774BFEE76D65064690A15C6245D98 ___targets_1[128];
};
// Native definition for COM marshalling of ovrAvatarGazeTargets
struct ovrAvatarGazeTargets_t385BB22293BFB6338CE0BA9FCEC655B7BD6453DE_marshaled_com
{
	uint32_t ___targetCount_0;
	ovrAvatarGazeTarget_tED1DE5572DF774BFEE76D65064690A15C6245D98 ___targets_1[128];
};

// ovrAvatarHandInputState
struct ovrAvatarHandInputState_t11CFAB243AA9B2E75581D649167A59AC1B7BE34B 
{
	// ovrAvatarTransform ovrAvatarHandInputState::transform
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___transform_0;
	// ovrAvatarButton ovrAvatarHandInputState::buttonMask
	int32_t ___buttonMask_1;
	// ovrAvatarTouch ovrAvatarHandInputState::touchMask
	int32_t ___touchMask_2;
	// System.Single ovrAvatarHandInputState::joystickX
	float ___joystickX_3;
	// System.Single ovrAvatarHandInputState::joystickY
	float ___joystickY_4;
	// System.Single ovrAvatarHandInputState::indexTrigger
	float ___indexTrigger_5;
	// System.Single ovrAvatarHandInputState::handTrigger
	float ___handTrigger_6;
	// System.Boolean ovrAvatarHandInputState::isActive
	bool ___isActive_7;
};

// ovrAvatarLights
struct ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE 
{
	// System.Single ovrAvatarLights::ambientIntensity
	float ___ambientIntensity_0;
	// System.UInt32 ovrAvatarLights::lightCount
	uint32_t ___lightCount_1;
	// ovrAvatarLight[] ovrAvatarLights::lights
	ovrAvatarLightU5BU5D_t5BF1241C819241561ED81B7BA7709959F352B84B* ___lights_2;
};
// Native definition for P/Invoke marshalling of ovrAvatarLights
struct ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE_marshaled_pinvoke
{
	float ___ambientIntensity_0;
	uint32_t ___lightCount_1;
	ovrAvatarLight_tDE7CCF145353DF293100FBA3976B0937532E6656 ___lights_2[16];
};
// Native definition for COM marshalling of ovrAvatarLights
struct ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE_marshaled_com
{
	float ___ambientIntensity_0;
	uint32_t ___lightCount_1;
	ovrAvatarLight_tDE7CCF145353DF293100FBA3976B0937532E6656 ___lights_2[16];
};

// ovrAvatarMaterialState
struct ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615 
{
	// UnityEngine.Vector4 ovrAvatarMaterialState::baseColor
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___baseColor_0;
	// ovrAvatarMaterialMaskType ovrAvatarMaterialState::baseMaskType
	int32_t ___baseMaskType_1;
	// UnityEngine.Vector4 ovrAvatarMaterialState::baseMaskParameters
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___baseMaskParameters_2;
	// UnityEngine.Vector4 ovrAvatarMaterialState::baseMaskAxis
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___baseMaskAxis_3;
	// ovrAvatarMaterialLayerSampleMode ovrAvatarMaterialState::sampleMode
	int32_t ___sampleMode_4;
	// System.UInt64 ovrAvatarMaterialState::alphaMaskTextureID
	uint64_t ___alphaMaskTextureID_5;
	// UnityEngine.Vector4 ovrAvatarMaterialState::alphaMaskScaleOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___alphaMaskScaleOffset_6;
	// System.UInt64 ovrAvatarMaterialState::normalMapTextureID
	uint64_t ___normalMapTextureID_7;
	// UnityEngine.Vector4 ovrAvatarMaterialState::normalMapScaleOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___normalMapScaleOffset_8;
	// System.UInt64 ovrAvatarMaterialState::parallaxMapTextureID
	uint64_t ___parallaxMapTextureID_9;
	// UnityEngine.Vector4 ovrAvatarMaterialState::parallaxMapScaleOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___parallaxMapScaleOffset_10;
	// System.UInt64 ovrAvatarMaterialState::roughnessMapTextureID
	uint64_t ___roughnessMapTextureID_11;
	// UnityEngine.Vector4 ovrAvatarMaterialState::roughnessMapScaleOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___roughnessMapScaleOffset_12;
	// System.UInt32 ovrAvatarMaterialState::layerCount
	uint32_t ___layerCount_13;
	// ovrAvatarMaterialLayerState[] ovrAvatarMaterialState::layers
	ovrAvatarMaterialLayerStateU5BU5D_t9FA709AAB7204151A5B78BACFC07627DC5EABD45* ___layers_14;
};
// Native definition for P/Invoke marshalling of ovrAvatarMaterialState
struct ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_marshaled_pinvoke
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___baseColor_0;
	int32_t ___baseMaskType_1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___baseMaskParameters_2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___baseMaskAxis_3;
	int32_t ___sampleMode_4;
	uint64_t ___alphaMaskTextureID_5;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___alphaMaskScaleOffset_6;
	uint64_t ___normalMapTextureID_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___normalMapScaleOffset_8;
	uint64_t ___parallaxMapTextureID_9;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___parallaxMapScaleOffset_10;
	uint64_t ___roughnessMapTextureID_11;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___roughnessMapScaleOffset_12;
	uint32_t ___layerCount_13;
	ovrAvatarMaterialLayerState_tD95A117E6B2CCE0BA9E524E4DF244B46322EA615 ___layers_14[8];
};
// Native definition for COM marshalling of ovrAvatarMaterialState
struct ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_marshaled_com
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___baseColor_0;
	int32_t ___baseMaskType_1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___baseMaskParameters_2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___baseMaskAxis_3;
	int32_t ___sampleMode_4;
	uint64_t ___alphaMaskTextureID_5;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___alphaMaskScaleOffset_6;
	uint64_t ___normalMapTextureID_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___normalMapScaleOffset_8;
	uint64_t ___parallaxMapTextureID_9;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___parallaxMapScaleOffset_10;
	uint64_t ___roughnessMapTextureID_11;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___roughnessMapScaleOffset_12;
	uint32_t ___layerCount_13;
	ovrAvatarMaterialLayerState_tD95A117E6B2CCE0BA9E524E4DF244B46322EA615 ___layers_14[8];
};

// ovrAvatarSkinnedMeshPose
struct ovrAvatarSkinnedMeshPose_t35AC9DB580FBAA9AF93A182F8E3A6DF7365A2DEA 
{
	// System.UInt32 ovrAvatarSkinnedMeshPose::jointCount
	uint32_t ___jointCount_0;
	// ovrAvatarTransform[] ovrAvatarSkinnedMeshPose::jointTransform
	ovrAvatarTransformU5BU5D_t49C8312491C8E72FDD33233AD86212E219C1C4A9* ___jointTransform_1;
	// System.Int32[] ovrAvatarSkinnedMeshPose::jointParents
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___jointParents_2;
	// System.IntPtr[] ovrAvatarSkinnedMeshPose::jointNames
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___jointNames_3;
};
// Native definition for P/Invoke marshalling of ovrAvatarSkinnedMeshPose
struct ovrAvatarSkinnedMeshPose_t35AC9DB580FBAA9AF93A182F8E3A6DF7365A2DEA_marshaled_pinvoke
{
	uint32_t ___jointCount_0;
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___jointTransform_1[64];
	int32_t ___jointParents_2[64];
	intptr_t ___jointNames_3[64];
};
// Native definition for COM marshalling of ovrAvatarSkinnedMeshPose
struct ovrAvatarSkinnedMeshPose_t35AC9DB580FBAA9AF93A182F8E3A6DF7365A2DEA_marshaled_com
{
	uint32_t ___jointCount_0;
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___jointTransform_1[64];
	int32_t ___jointParents_2[64];
	intptr_t ___jointNames_3[64];
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ovrAvatarControllerComponent
struct ovrAvatarControllerComponent_t9E37F2D7ED15D7343D067879332E0F25ED8D92DB 
{
	// ovrAvatarHandInputState ovrAvatarControllerComponent::inputState
	ovrAvatarHandInputState_t11CFAB243AA9B2E75581D649167A59AC1B7BE34B ___inputState_0;
	// System.IntPtr ovrAvatarControllerComponent::renderComponent
	intptr_t ___renderComponent_1;
};

// ovrAvatarHandComponent
struct ovrAvatarHandComponent_t05B0D0A79F3E6BB05A84312990AEBF3B5A707105 
{
	// ovrAvatarHandInputState ovrAvatarHandComponent::inputState
	ovrAvatarHandInputState_t11CFAB243AA9B2E75581D649167A59AC1B7BE34B ___inputState_0;
	// System.IntPtr ovrAvatarHandComponent::renderComponent
	intptr_t ___renderComponent_1;
};

// ovrAvatarMeshAssetData
struct ovrAvatarMeshAssetData_t6E6DA61162FC209DB1AEBF40F9824455C37AD9EE 
{
	// System.UInt32 ovrAvatarMeshAssetData::vertexCount
	uint32_t ___vertexCount_0;
	// System.IntPtr ovrAvatarMeshAssetData::vertexBuffer
	intptr_t ___vertexBuffer_1;
	// System.UInt32 ovrAvatarMeshAssetData::indexCount
	uint32_t ___indexCount_2;
	// System.IntPtr ovrAvatarMeshAssetData::indexBuffer
	intptr_t ___indexBuffer_3;
	// ovrAvatarSkinnedMeshPose ovrAvatarMeshAssetData::skinnedBindPose
	ovrAvatarSkinnedMeshPose_t35AC9DB580FBAA9AF93A182F8E3A6DF7365A2DEA ___skinnedBindPose_4;
};
// Native definition for P/Invoke marshalling of ovrAvatarMeshAssetData
struct ovrAvatarMeshAssetData_t6E6DA61162FC209DB1AEBF40F9824455C37AD9EE_marshaled_pinvoke
{
	uint32_t ___vertexCount_0;
	intptr_t ___vertexBuffer_1;
	uint32_t ___indexCount_2;
	intptr_t ___indexBuffer_3;
	ovrAvatarSkinnedMeshPose_t35AC9DB580FBAA9AF93A182F8E3A6DF7365A2DEA_marshaled_pinvoke ___skinnedBindPose_4;
};
// Native definition for COM marshalling of ovrAvatarMeshAssetData
struct ovrAvatarMeshAssetData_t6E6DA61162FC209DB1AEBF40F9824455C37AD9EE_marshaled_com
{
	uint32_t ___vertexCount_0;
	intptr_t ___vertexBuffer_1;
	uint32_t ___indexCount_2;
	intptr_t ___indexBuffer_3;
	ovrAvatarSkinnedMeshPose_t35AC9DB580FBAA9AF93A182F8E3A6DF7365A2DEA_marshaled_com ___skinnedBindPose_4;
};

// ovrAvatarMeshAssetDataV2
struct ovrAvatarMeshAssetDataV2_tB3E68F1A89279C70EA510F6EB849152D31345EB8 
{
	// System.UInt32 ovrAvatarMeshAssetDataV2::vertexCount
	uint32_t ___vertexCount_0;
	// System.IntPtr ovrAvatarMeshAssetDataV2::vertexBuffer
	intptr_t ___vertexBuffer_1;
	// System.UInt32 ovrAvatarMeshAssetDataV2::indexCount
	uint32_t ___indexCount_2;
	// System.IntPtr ovrAvatarMeshAssetDataV2::indexBuffer
	intptr_t ___indexBuffer_3;
	// ovrAvatarSkinnedMeshPose ovrAvatarMeshAssetDataV2::skinnedBindPose
	ovrAvatarSkinnedMeshPose_t35AC9DB580FBAA9AF93A182F8E3A6DF7365A2DEA ___skinnedBindPose_4;
};
// Native definition for P/Invoke marshalling of ovrAvatarMeshAssetDataV2
struct ovrAvatarMeshAssetDataV2_tB3E68F1A89279C70EA510F6EB849152D31345EB8_marshaled_pinvoke
{
	uint32_t ___vertexCount_0;
	intptr_t ___vertexBuffer_1;
	uint32_t ___indexCount_2;
	intptr_t ___indexBuffer_3;
	ovrAvatarSkinnedMeshPose_t35AC9DB580FBAA9AF93A182F8E3A6DF7365A2DEA_marshaled_pinvoke ___skinnedBindPose_4;
};
// Native definition for COM marshalling of ovrAvatarMeshAssetDataV2
struct ovrAvatarMeshAssetDataV2_tB3E68F1A89279C70EA510F6EB849152D31345EB8_marshaled_com
{
	uint32_t ___vertexCount_0;
	intptr_t ___vertexBuffer_1;
	uint32_t ___indexCount_2;
	intptr_t ___indexBuffer_3;
	ovrAvatarSkinnedMeshPose_t35AC9DB580FBAA9AF93A182F8E3A6DF7365A2DEA_marshaled_com ___skinnedBindPose_4;
};

// ovrAvatarRenderPart_ProjectorRender
struct ovrAvatarRenderPart_ProjectorRender_t95A49114D5EB4DA1D23CB38499FBF25EE3A8667C 
{
	// ovrAvatarTransform ovrAvatarRenderPart_ProjectorRender::localTransform
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___localTransform_0;
	// System.UInt32 ovrAvatarRenderPart_ProjectorRender::componentIndex
	uint32_t ___componentIndex_1;
	// System.UInt32 ovrAvatarRenderPart_ProjectorRender::renderPartIndex
	uint32_t ___renderPartIndex_2;
	// ovrAvatarMaterialState ovrAvatarRenderPart_ProjectorRender::materialState
	ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615 ___materialState_3;
};
// Native definition for P/Invoke marshalling of ovrAvatarRenderPart_ProjectorRender
struct ovrAvatarRenderPart_ProjectorRender_t95A49114D5EB4DA1D23CB38499FBF25EE3A8667C_marshaled_pinvoke
{
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___localTransform_0;
	uint32_t ___componentIndex_1;
	uint32_t ___renderPartIndex_2;
	ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_marshaled_pinvoke ___materialState_3;
};
// Native definition for COM marshalling of ovrAvatarRenderPart_ProjectorRender
struct ovrAvatarRenderPart_ProjectorRender_t95A49114D5EB4DA1D23CB38499FBF25EE3A8667C_marshaled_com
{
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___localTransform_0;
	uint32_t ___componentIndex_1;
	uint32_t ___renderPartIndex_2;
	ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_marshaled_com ___materialState_3;
};

// ovrAvatarRenderPart_SkinnedMeshRender
struct ovrAvatarRenderPart_SkinnedMeshRender_tC6C116515EEC1A44347321E15EAF947655CE1E6F 
{
	// ovrAvatarTransform ovrAvatarRenderPart_SkinnedMeshRender::localTransform
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___localTransform_0;
	// ovrAvatarVisibilityFlags ovrAvatarRenderPart_SkinnedMeshRender::visibilityMask
	int32_t ___visibilityMask_1;
	// System.UInt64 ovrAvatarRenderPart_SkinnedMeshRender::meshAssetID
	uint64_t ___meshAssetID_2;
	// ovrAvatarMaterialState ovrAvatarRenderPart_SkinnedMeshRender::materialState
	ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615 ___materialState_3;
	// ovrAvatarSkinnedMeshPose ovrAvatarRenderPart_SkinnedMeshRender::skinnedPose
	ovrAvatarSkinnedMeshPose_t35AC9DB580FBAA9AF93A182F8E3A6DF7365A2DEA ___skinnedPose_4;
};
// Native definition for P/Invoke marshalling of ovrAvatarRenderPart_SkinnedMeshRender
struct ovrAvatarRenderPart_SkinnedMeshRender_tC6C116515EEC1A44347321E15EAF947655CE1E6F_marshaled_pinvoke
{
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___localTransform_0;
	int32_t ___visibilityMask_1;
	uint64_t ___meshAssetID_2;
	ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_marshaled_pinvoke ___materialState_3;
	ovrAvatarSkinnedMeshPose_t35AC9DB580FBAA9AF93A182F8E3A6DF7365A2DEA_marshaled_pinvoke ___skinnedPose_4;
};
// Native definition for COM marshalling of ovrAvatarRenderPart_SkinnedMeshRender
struct ovrAvatarRenderPart_SkinnedMeshRender_tC6C116515EEC1A44347321E15EAF947655CE1E6F_marshaled_com
{
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___localTransform_0;
	int32_t ___visibilityMask_1;
	uint64_t ___meshAssetID_2;
	ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_marshaled_com ___materialState_3;
	ovrAvatarSkinnedMeshPose_t35AC9DB580FBAA9AF93A182F8E3A6DF7365A2DEA_marshaled_com ___skinnedPose_4;
};

// ovrAvatarRenderPart_SkinnedMeshRenderPBS
struct ovrAvatarRenderPart_SkinnedMeshRenderPBS_t643FDD46219508F6493CE48EEDC5C2CDF2473AD3 
{
	// ovrAvatarTransform ovrAvatarRenderPart_SkinnedMeshRenderPBS::localTransform
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___localTransform_0;
	// ovrAvatarVisibilityFlags ovrAvatarRenderPart_SkinnedMeshRenderPBS::visibilityMask
	int32_t ___visibilityMask_1;
	// System.UInt64 ovrAvatarRenderPart_SkinnedMeshRenderPBS::meshAssetID
	uint64_t ___meshAssetID_2;
	// System.UInt64 ovrAvatarRenderPart_SkinnedMeshRenderPBS::albedoTextureAssetID
	uint64_t ___albedoTextureAssetID_3;
	// System.UInt64 ovrAvatarRenderPart_SkinnedMeshRenderPBS::surfaceTextureAssetID
	uint64_t ___surfaceTextureAssetID_4;
	// ovrAvatarSkinnedMeshPose ovrAvatarRenderPart_SkinnedMeshRenderPBS::skinnedPose
	ovrAvatarSkinnedMeshPose_t35AC9DB580FBAA9AF93A182F8E3A6DF7365A2DEA ___skinnedPose_5;
};
// Native definition for P/Invoke marshalling of ovrAvatarRenderPart_SkinnedMeshRenderPBS
struct ovrAvatarRenderPart_SkinnedMeshRenderPBS_t643FDD46219508F6493CE48EEDC5C2CDF2473AD3_marshaled_pinvoke
{
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___localTransform_0;
	int32_t ___visibilityMask_1;
	uint64_t ___meshAssetID_2;
	uint64_t ___albedoTextureAssetID_3;
	uint64_t ___surfaceTextureAssetID_4;
	ovrAvatarSkinnedMeshPose_t35AC9DB580FBAA9AF93A182F8E3A6DF7365A2DEA_marshaled_pinvoke ___skinnedPose_5;
};
// Native definition for COM marshalling of ovrAvatarRenderPart_SkinnedMeshRenderPBS
struct ovrAvatarRenderPart_SkinnedMeshRenderPBS_t643FDD46219508F6493CE48EEDC5C2CDF2473AD3_marshaled_com
{
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___localTransform_0;
	int32_t ___visibilityMask_1;
	uint64_t ___meshAssetID_2;
	uint64_t ___albedoTextureAssetID_3;
	uint64_t ___surfaceTextureAssetID_4;
	ovrAvatarSkinnedMeshPose_t35AC9DB580FBAA9AF93A182F8E3A6DF7365A2DEA_marshaled_com ___skinnedPose_5;
};

// ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2
struct ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_tCEA8CD6177474FFCCB1095E1117F12F2FBAD6690 
{
	// ovrAvatarTransform ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2::localTransform
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___localTransform_0;
	// ovrAvatarVisibilityFlags ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2::visibilityMask
	int32_t ___visibilityMask_1;
	// System.UInt64 ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2::meshAssetID
	uint64_t ___meshAssetID_2;
	// ovrAvatarPBSMaterialState ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2::materialState
	ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423 ___materialState_3;
	// ovrAvatarSkinnedMeshPose ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2::skinnedPose
	ovrAvatarSkinnedMeshPose_t35AC9DB580FBAA9AF93A182F8E3A6DF7365A2DEA ___skinnedPose_4;
};
// Native definition for P/Invoke marshalling of ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2
struct ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_tCEA8CD6177474FFCCB1095E1117F12F2FBAD6690_marshaled_pinvoke
{
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___localTransform_0;
	int32_t ___visibilityMask_1;
	uint64_t ___meshAssetID_2;
	ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423 ___materialState_3;
	ovrAvatarSkinnedMeshPose_t35AC9DB580FBAA9AF93A182F8E3A6DF7365A2DEA_marshaled_pinvoke ___skinnedPose_4;
};
// Native definition for COM marshalling of ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2
struct ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_tCEA8CD6177474FFCCB1095E1117F12F2FBAD6690_marshaled_com
{
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___localTransform_0;
	int32_t ___visibilityMask_1;
	uint64_t ___meshAssetID_2;
	ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423 ___materialState_3;
	ovrAvatarSkinnedMeshPose_t35AC9DB580FBAA9AF93A182F8E3A6DF7365A2DEA_marshaled_com ___skinnedPose_4;
};

// Oculus.Avatar.CAPI/LoggingDelegate
struct LoggingDelegate_t76BE1328321D58DD99A77FF17F3328AC6EC0AF8B  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// OVRTouchSample.HandPose
struct HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean OVRTouchSample.HandPose::m_allowPointing
	bool ___m_allowPointing_4;
	// System.Boolean OVRTouchSample.HandPose::m_allowThumbsUp
	bool ___m_allowThumbsUp_5;
	// OVRTouchSample.HandPoseId OVRTouchSample.HandPose::m_poseId
	int32_t ___m_poseId_6;
};

// OVRTouchSample.TouchController
struct TouchController_t1BCC5F911D1E7987E5DA9A4654DD05D585C32A03  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRInput/Controller OVRTouchSample.TouchController::m_controller
	int32_t ___m_controller_4;
	// UnityEngine.Animator OVRTouchSample.TouchController::m_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_animator_5;
	// System.Boolean OVRTouchSample.TouchController::m_restoreOnInputAcquired
	bool ___m_restoreOnInputAcquired_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// ovrAvatarPBSMaterialState[]
struct ovrAvatarPBSMaterialStateU5BU5D_t7E688FB5F9F945786BE02254DBFAC4DA2466DD7B  : public RuntimeArray
{
	ALIGN_FIELD (8) ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423 m_Items[1];

	inline ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423 value)
	{
		m_Items[index] = value;
	}
};
// ovrAvatarTransform[]
struct ovrAvatarTransformU5BU5D_t49C8312491C8E72FDD33233AD86212E219C1C4A9  : public RuntimeArray
{
	ALIGN_FIELD (8) ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 m_Items[1];

	inline ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// ovrAvatarGazeTarget[]
struct ovrAvatarGazeTargetU5BU5D_tA54878090C639ECE9849C3BB86C4E912936F231F  : public RuntimeArray
{
	ALIGN_FIELD (8) ovrAvatarGazeTarget_tED1DE5572DF774BFEE76D65064690A15C6245D98 m_Items[1];

	inline ovrAvatarGazeTarget_tED1DE5572DF774BFEE76D65064690A15C6245D98 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ovrAvatarGazeTarget_tED1DE5572DF774BFEE76D65064690A15C6245D98* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ovrAvatarGazeTarget_tED1DE5572DF774BFEE76D65064690A15C6245D98 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ovrAvatarGazeTarget_tED1DE5572DF774BFEE76D65064690A15C6245D98 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ovrAvatarGazeTarget_tED1DE5572DF774BFEE76D65064690A15C6245D98* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ovrAvatarGazeTarget_tED1DE5572DF774BFEE76D65064690A15C6245D98 value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// ovrAvatarLight[]
struct ovrAvatarLightU5BU5D_t5BF1241C819241561ED81B7BA7709959F352B84B  : public RuntimeArray
{
	ALIGN_FIELD (8) ovrAvatarLight_tDE7CCF145353DF293100FBA3976B0937532E6656 m_Items[1];

	inline ovrAvatarLight_tDE7CCF145353DF293100FBA3976B0937532E6656 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ovrAvatarLight_tDE7CCF145353DF293100FBA3976B0937532E6656* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ovrAvatarLight_tDE7CCF145353DF293100FBA3976B0937532E6656 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ovrAvatarLight_tDE7CCF145353DF293100FBA3976B0937532E6656 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ovrAvatarLight_tDE7CCF145353DF293100FBA3976B0937532E6656* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ovrAvatarLight_tDE7CCF145353DF293100FBA3976B0937532E6656 value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_marshal_pinvoke(const ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615& unmarshaled, ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_marshal_pinvoke_back(const ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_marshaled_pinvoke& marshaled, ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615& unmarshaled);
IL2CPP_EXTERN_C void ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_marshal_pinvoke_cleanup(ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_marshaled_pinvoke& marshaled);

// System.IntPtr Oculus.Avatar.CAPI::MarshalRenderComponent<ovrAvatarBodyComponent>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_MarshalRenderComponent_TisovrAvatarBodyComponent_t7F9CF049212A1E12FF3EACC09BC2BC8D05BB82E1_m32800079165F57D4898BED5CD050ADA33AEC58E0_gshared (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<System.UInt32>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m019790B192264D71C61E8CDF27186A0A2196D384_gshared (uint32_t ___structure0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<ovrAvatarBlendShapeParams>(T,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_TisovrAvatarBlendShapeParams_t36C1189F1E68173711B1A090FDE08CC23995443E_mE34270DE8E98EE3FC56E44D3109E125E539EF033_gshared (ovrAvatarBlendShapeParams_t36C1189F1E68173711B1A090FDE08CC23995443E ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method) ;

// System.Void OVRTouchSample.Hand/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5B6A45FE68FE591E166EC9969E2356BE51CA2E4F (U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider::get_isTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_isTrigger_mFF457F6AA71D173F9A11BAF00C35E5AE12952F87 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean OVRInput::Get(OVRInput/Button,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInput_Get_m8CF227684F49E1C26239D78F826E11A956E909C1 (int32_t ___virtualMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 OVRInput::Get(OVRInput/Axis2D,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRInput_Get_mF4EA350D5898449529C641C72B7D440DF81180C8 (int32_t ___virtualMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// System.Single OVRInput::Get(OVRInput/Axis1D,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OVRInput_Get_m1FD85568F358C43019E09E48A7BEBD6CD7F7E5D8 (int32_t ___virtualMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void OVRManager::add_InputFocusAcquired(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRManager_add_InputFocusAcquired_m303EF833FD42193E22AFA2851C1E80861B53F41B (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void OVRManager::add_InputFocusLost(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRManager_add_InputFocusLost_mB75E6525CCFD54E827174479582C861448199E44 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar.CAPI::LoggingCallback(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_LoggingCallback_m8A2F2B43C7B62C6698C70B51F4CB60F2945E2EAA (intptr_t ___str0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7 (Type_t* ___t0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F (int32_t ___cb0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9 (intptr_t ___hglobal0, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarMessage_GetAvatarSpecification_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarMessage_GetAvatarSpecification_Native_m06522704F1C48CFDCBD49E0913A2756A0DDD6EB0 (intptr_t ___msg0, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3 (intptr_t ___ptr0, Type_t* ___structureType1, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarMessage_GetAssetLoaded_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarMessage_GetAssetLoaded_Native_m3A27799C7B8B81A2F44D12E1406D32BBC6D62342 (intptr_t ___msg0, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar.CAPI::ovrAvatarPose_UpdateVoiceVisualization_Native(System.IntPtr,System.UInt32,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatarPose_UpdateVoiceVisualization_Native_mD622B54DDDD18B255BEB9DB2957784C15F6EAC08 (intptr_t ___avatar0, uint32_t ___pcmDataSize1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___pcmData2, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarComponent_Get_Native(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarComponent_Get_Native_mE69163A290C2B868DBE4BB0B29860D882E0A040F (intptr_t ___avatar0, uint32_t ___index1, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar.CAPI::ovrAvatarComponent_Get(System.IntPtr,System.Boolean,ovrAvatarComponent&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatarComponent_Get_m895847095829E9ACA54B682C5731CF519134E135 (intptr_t ___componentPtr0, bool ___includeName1, ovrAvatarComponent_tDA7784CCCECD556E1FB75BDE30EAA93C9B3B248E* ___component2, const RuntimeMethod* method) ;
// System.Int64 System.IntPtr::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032 (intptr_t* __this, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC (intptr_t* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775 (intptr_t ___source0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void OvrAvatar::ConvertTransform(System.Single[],ovrAvatarTransform&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OvrAvatar_ConvertTransform_m58603F7EEDA017FD21DCBE45BCEF03F8275E0CFB (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___transform0, ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6* ___target1, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::ReadInt32(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_ReadInt32_m8273316C589DF24E6375F2D3C745B185AFB51A49 (intptr_t ___ptr0, int32_t ___ofs1, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::ReadIntPtr(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_ReadIntPtr_m576E200A849BE7A6BC688058AA869B12B30D970F (intptr_t ___ptr0, int32_t ___ofs1, const RuntimeMethod* method) ;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarPose_GetBaseComponent_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarPose_GetBaseComponent_Native_mB372C8095E940C1183F9808CFC85FA1F4AD782ED (intptr_t ___avatar0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarPose_GetBodyComponent_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarPose_GetBodyComponent_Native_mD4B0736357AF3DDE4EAC8C3B75B2CFA05C94CDCC (intptr_t ___avatar0, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::MarshalRenderComponent<ovrAvatarBodyComponent>(System.IntPtr)
inline intptr_t CAPI_MarshalRenderComponent_TisovrAvatarBodyComponent_t7F9CF049212A1E12FF3EACC09BC2BC8D05BB82E1_m32800079165F57D4898BED5CD050ADA33AEC58E0 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, const RuntimeMethod*))CAPI_MarshalRenderComponent_TisovrAvatarBodyComponent_t7F9CF049212A1E12FF3EACC09BC2BC8D05BB82E1_m32800079165F57D4898BED5CD050ADA33AEC58E0_gshared)(___ptr0, method);
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarPose_GetLeftControllerComponent_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarPose_GetLeftControllerComponent_Native_mFA4ED1DB8DAEFCF5C9BD71FABA23623D411036EE (intptr_t ___avatar0, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarPose_GetRightControllerComponent_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarPose_GetRightControllerComponent_Native_m4A84ED2AA60E4BBD63D3105643405922E1F15042 (intptr_t ___avatar0, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarPose_GetLeftHandComponent_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarPose_GetLeftHandComponent_Native_m24EE70A1FF494BCDCEBB785D636EC2D0FDB4C6A0 (intptr_t ___avatar0, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarPose_GetRightHandComponent_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarPose_GetRightHandComponent_Native_mBA4E5AE096EFF65590FB2FE0C6B2D1BF99210E05 (intptr_t ___avatar0, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarAsset_GetMeshData_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarAsset_GetMeshData_Native_m1554AB639CECD3446C44F74CC101BD21595E7B4F (intptr_t ___assetPtr0, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarAsset_GetCombinedMeshData_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarAsset_GetCombinedMeshData_Native_mA7033E040BB8F5F2B64F45044363182E7CF094B9 (intptr_t ___assetPtr0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<System.UInt32>(T)
inline int32_t Marshal_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m019790B192264D71C61E8CDF27186A0A2196D384 (uint32_t ___structure0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint32_t, const RuntimeMethod*))Marshal_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m019790B192264D71C61E8CDF27186A0A2196D384_gshared)(___structure0, method);
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarAsset_GetCombinedMeshIDs_Native(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarAsset_GetCombinedMeshIDs_Native_mE884FF211ABA30DE35B5AF9E99AE64AD884C0E60 (intptr_t ___assetHandle0, intptr_t ___count1, const RuntimeMethod* method) ;
// System.Int64 System.Runtime.InteropServices.Marshal::ReadInt64(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Marshal_ReadInt64_m27A281592D414C45CF25C9EB0C378310A2DFBE86 (intptr_t ___ptr0, int32_t ___ofs1, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatar_GetCombinedMeshAlphaData_Native(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatar_GetCombinedMeshAlphaData_Native_mD8FE67326577A19B5BC8EB05992506D2E7B87448 (intptr_t ___avatar0, intptr_t ___textureIDPtr1, intptr_t ___offsetPtr2, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarAsset_GetTextureData_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarAsset_GetTextureData_Native_mFD1136F70E7226F68B0C020E1BBEEA1CA11AC4B1 (intptr_t ___assetPtr0, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarAsset_GetMaterialData_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarAsset_GetMaterialData_Native_mDCBF4BC2B44C0A0809842BE133DFD5674969D341 (intptr_t ___assetPtr0, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarRenderPart_GetSkinnedMeshRender_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarRenderPart_GetSkinnedMeshRender_Native_m99D156534FC135C9BB21D35A4F4DA7E750B15318 (intptr_t ___renderPart0, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarRenderPart_GetSkinnedMeshRenderPBS_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarRenderPart_GetSkinnedMeshRenderPBS_Native_mCA354E8FB7A41DFC1F6FA4F0BD34A804BEE1418E (intptr_t ___renderPart0, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarRenderPart_GetSkinnedMeshRenderPBSV2_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarRenderPart_GetSkinnedMeshRenderPBSV2_Native_m815DC6305F1F1D45A70CFE103BEDF57B00CC4C78 (intptr_t ___renderPart0, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarSkinnedMeshRender_GetBlendShapeParams_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarSkinnedMeshRender_GetBlendShapeParams_Native_mCA9FD36F78F6742F8ED72237F6C934633624B5EF (intptr_t ___renderPart0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::ReadInt32(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_ReadInt32_mDF5F7A01E6F50C03DBB936ACF229CE5345B0DE18 (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarRenderPart_GetProjectorRender_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarRenderPart_GetProjectorRender_Native_m9F3015CD0E47222975CBEC2304D065B7C5FFEC90 (intptr_t ___renderPart0, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatar_GetBodyPBSMaterialStates_Native(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatar_GetBodyPBSMaterialStates_Native_m8CE411F4D8A5F76F5C4BB0F5495E80C2AF00E832 (intptr_t ___avatar0, intptr_t ___count1, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar.CAPI::ovrAvatar_SetInternalForceASTCTextures(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_SetInternalForceASTCTextures_m6C2F495AE2D5CD54E97EC14102307547A55800E6 (bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<ovrAvatarBlendShapeParams>(T,System.IntPtr,System.Boolean)
inline void Marshal_StructureToPtr_TisovrAvatarBlendShapeParams_t36C1189F1E68173711B1A090FDE08CC23995443E_mE34270DE8E98EE3FC56E44D3109E125E539EF033 (ovrAvatarBlendShapeParams_t36C1189F1E68173711B1A090FDE08CC23995443E ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method)
{
	((  void (*) (ovrAvatarBlendShapeParams_t36C1189F1E68173711B1A090FDE08CC23995443E, intptr_t, bool, const RuntimeMethod*))Marshal_StructureToPtr_TisovrAvatarBlendShapeParams_t36C1189F1E68173711B1A090FDE08CC23995443E_mE34270DE8E98EE3FC56E44D3109E125E539EF033_gshared)(___structure0, ___ptr1, ___fDeleteOld2, method);
}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_OverrideExpressiveLogic_Native(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_OverrideExpressiveLogic_Native_m6962277F2ADE78E8E0DDCF3616669F88749E126A (intptr_t ___avatar0, intptr_t ___state1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::WriteInt32(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_WriteInt32_m5905B270B90B6938250A1731EB1A18C84F516EED (intptr_t ___ptr0, int32_t ___val1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Single[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m9AC624A4A09A26AC6BF37A42AEA1E5C41F940CC9 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar.CAPI::ovrAvatar_SetVisemes_Native(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_SetVisemes_Native_m37492E2741D1822E9750F333501C59491DA582D3 (intptr_t ___avatar0, intptr_t ___visemes1, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar.CAPI::ovrAvatar_UpdateGazeTargets_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_UpdateGazeTargets_Native_mF0F3FD44C4C05C2798ED6B1D492B2FF4F06C1BAD (intptr_t ___targets0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::OffsetOf(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_OffsetOf_m106F2D2FC0C00CAD2982B489C1FB58B031729310 (Type_t* ___t0, String_t* ___fieldName1, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar.CAPI::ovrAvatar_UpdateLights_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_UpdateLights_Native_mBC2D6F56861D9217704A48D9A9B11E4D7BDC7AD1 (intptr_t ___lights0, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatar_GetDebugLines_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatar_GetDebugLines_Native_mB3A6B8154F11D9E397EB6937CCE9656C589C249D (intptr_t ___count0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::ReadIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_ReadIntPtr_m6E8694E5CB4FE576B3CAE1A002B03C211D393826 (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatar_GetDebugTransforms_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatar_GetDebugTransforms_Native_m607C11A9FAE9B87C956C0F0880D833D376691ACB (intptr_t ___count0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void OvrAvatar::ConvertTransform(ovrAvatarTransform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OvrAvatar_ConvertTransform_m35FADCB6EFACE351185944CEDD4EFFCD6DADAD7A (ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___transform0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) ;
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_Equality_mED378603AE784D5ACEDB8F4B250F50773B331D4B (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___v10, Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___v21, const RuntimeMethod* method) ;
// System.String Oculus.Avatar.CAPI::ovrp_GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovrp_GetVersion_m5641289B86C1F933B657086E9E723CCAB5D8A5F1 (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Void System.Version::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_m52D06833AE6481C0A9B72085BDC4D09A723CEF7F (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* __this, String_t* ___version0, const RuntimeMethod* method) ;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_m7D8EE608025AE8D7AD8867718BC0AC96A2CFC1F5 (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, const RuntimeMethod* method) ;
// System.Boolean System.Version::op_GreaterThanOrEqual(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___v10, Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___v21, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// Oculus.Avatar.CAPI/Result Oculus.Avatar.CAPI/OVRP_1_30_0::ovrp_SendEvent2(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRP_1_30_0_ovrp_SendEvent2_m55FD0BE235A07FB7FCC44B789E6C8F6F10D60C39 (String_t* ___name0, String_t* ___param1, String_t* ___source2, const RuntimeMethod* method) ;
// System.IntPtr Oculus.Avatar.CAPI::_ovrp_GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI__ovrp_GetVersion_m208FE2DB566D9E2020CD51D6957B9548A8C772C2 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_InitializeAndroidUnity(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_Shutdown();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarMessage_Pop();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ovrAvatarMessage_GetType(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarMessage_GetAvatarSpecification(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarMessage_GetAssetLoaded(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatarMessage_Free(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarSpecificationRequest_Create(uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatarSpecificationRequest_Destroy(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatarSpecificationRequest_SetCombineMeshes(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatarSpecificationRequest_SetLookAndFeelVersion(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatarSpecificationRequest_SetLevelOfDetail(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_RequestAvatarSpecification(uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_RequestAvatarSpecificationFromSpecRequest(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatarSpecificationRequest_SetFallbackLookAndFeelVersion(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatarSpecificationRequest_SetExpressiveFlag(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatar_Create(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_Destroy(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatarPose_UpdateBody(intptr_t, ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatarPose_UpdateVoiceVisualization(intptr_t, uint32_t, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatarPose_UpdateHands(intptr_t, ovrAvatarHandInputState_t11CFAB243AA9B2E75581D649167A59AC1B7BE34B, ovrAvatarHandInputState_t11CFAB243AA9B2E75581D649167A59AC1B7BE34B);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatarPose_UpdateHandsWithType(intptr_t, ovrAvatarHandInputState_t11CFAB243AA9B2E75581D649167A59AC1B7BE34B, ovrAvatarHandInputState_t11CFAB243AA9B2E75581D649167A59AC1B7BE34B, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatarPose_Finalize(intptr_t, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_SetLeftControllerVisibility(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_SetRightControllerVisibility(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_SetLeftHandVisibility(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_SetRightHandVisibility(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL ovrAvatarComponent_Count(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarComponent_Get(intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarPose_GetBaseComponent(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarPose_GetBodyComponent(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarPose_GetLeftControllerComponent(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarPose_GetRightControllerComponent(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarPose_GetLeftHandComponent(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarPose_GetRightHandComponent(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatarAsset_BeginLoading(uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ovrAvatarAsset_BeginLoadingLOD(uint64_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ovrAvatarAsset_GetType(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarAsset_GetCombinedMeshData(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarAsset_GetMeshData(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL ovrAvatarAsset_GetMeshBlendShapeCount(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarAsset_GetMeshBlendShapeName(intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL ovrAvatarAsset_GetSubmeshCount(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL ovrAvatarAsset_GetSubmeshLastIndex(intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarAsset_GetMeshBlendShapeVertices(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarAsset_GetAvatar(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarAsset_GetCombinedMeshIDs(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatar_GetCombinedMeshAlphaData(intptr_t, intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarAsset_GetTextureData(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarAsset_GetMaterialData(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ovrAvatarRenderPart_GetType(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarRenderPart_GetSkinnedMeshRender(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 CDECL ovrAvatarSkinnedMeshRender_GetTransform(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 CDECL ovrAvatarSkinnedMeshRenderPBS_GetTransform(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 CDECL ovrAvatarSkinnedMeshRenderPBSV2_GetTransform(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ovrAvatarSkinnedMeshRender_GetVisibilityMask(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ovrAvatarSkinnedMeshRender_MaterialStateChanged(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ovrAvatarSkinnedMeshRenderPBSV2_MaterialStateChanged(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ovrAvatarSkinnedMeshRenderPBS_GetVisibilityMask(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ovrAvatarSkinnedMeshRenderPBSV2_GetVisibilityMask(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_marshaled_pinvoke CDECL ovrAvatarSkinnedMeshRender_GetMaterialState(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423 CDECL ovrAvatarSkinnedMeshRenderPBSV2_GetPBSMaterialState(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C ovrAvatarExpressiveParameters_t59D856DC2C6954171B34274D578B54A098798A8C CDECL ovrAvatar_GetExpressiveParameters(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C uint64_t CDECL ovrAvatarSkinnedMeshRender_GetDirtyJoints(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C uint64_t CDECL ovrAvatarSkinnedMeshRenderPBS_GetDirtyJoints(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C uint64_t CDECL ovrAvatarSkinnedMeshRenderPBSV2_GetDirtyJoints(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 CDECL ovrAvatarSkinnedMeshRender_GetJointTransform(intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_SetActionUnitOnsetSpeed(intptr_t, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_SetActionUnitFalloffSpeed(intptr_t, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_SetVisemeMultiplier(intptr_t, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 CDECL ovrAvatarSkinnedMeshRenderPBS_GetJointTransform(intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 CDECL ovrAvatarSkinnedMeshRenderPBSV2_GetJointTransform(intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C uint64_t CDECL ovrAvatarSkinnedMeshRenderPBS_GetAlbedoTextureAssetID(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C uint64_t CDECL ovrAvatarSkinnedMeshRenderPBS_GetSurfaceTextureAssetID(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarRenderPart_GetSkinnedMeshRenderPBS(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarRenderPart_GetSkinnedMeshRenderPBSV2(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarSkinnedMeshRender_GetBlendShapeParams(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatar_GetBodyPBSMaterialStates(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarRenderPart_GetProjectorRender(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL ovrAvatar_GetReferencedAssetCount(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C uint64_t CDECL ovrAvatar_GetReferencedAsset(intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_SetLeftHandGesture(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_SetRightHandGesture(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_SetLeftHandCustomGesture(intptr_t, uint32_t, ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_SetRightHandCustomGesture(intptr_t, uint32_t, ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_UpdatePoseFromPacket(intptr_t, intptr_t, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatarPacket_BeginRecording(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarPacket_EndRecording(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL ovrAvatarPacket_GetSize(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C float CDECL ovrAvatarPacket_GetDurationSeconds(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatarPacket_Free(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ovrAvatarPacket_Write(intptr_t, uint32_t, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatarPacket_Read(uint32_t, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_SetInternalForceASTCTextures(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_OverrideExpressiveLogic(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_SetVisemes(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_UpdateWorldTransform(intptr_t, ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_UpdateGazeTargets(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_RemoveGazeTargets(uint32_t, uint32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_UpdateLights(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_RemoveLights(uint32_t, uint32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_RegisterLoggingCallback(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_SetLoggingLevel(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatar_GetDebugTransforms(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrAvatar_GetDebugLines(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
IL2CPP_EXTERN_C void CDECL ovrAvatar_SetDebugDrawContext(uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OVRPlugin_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ovrp_GetVersion();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OVRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ovrp_SendEvent2(char*, char*, char*);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OVRTouchSample.Hand/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF9588185BC1199512F3465836275650F1FD582FC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F* L_0 = (U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F*)il2cpp_codegen_object_new(U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m5B6A45FE68FE591E166EC9969E2356BE51CA2E4F(L_0, NULL);
		((U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void OVRTouchSample.Hand/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5B6A45FE68FE591E166EC9969E2356BE51CA2E4F (U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean OVRTouchSample.Hand/<>c::<Start>b__28_0(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartU3Eb__28_0_m69657F26B241AA6A749CAFAF9534605A3FAC3480 (U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___childCollider0, const RuntimeMethod* method) 
{
	{
		// m_colliders = this.GetComponentsInChildren<Collider>().Where(childCollider => !childCollider.isTrigger).ToArray();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___childCollider0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Collider_get_isTrigger_mFF457F6AA71D173F9A11BAF00C35E5AE12952F87(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Boolean OVRTouchSample.HandPose::get_AllowPointing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPose_get_AllowPointing_m19E1786901712E84FD7D2CC113471FF7B2167731 (HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_allowPointing; }
		bool L_0 = __this->___m_allowPointing_4;
		return L_0;
	}
}
// System.Boolean OVRTouchSample.HandPose::get_AllowThumbsUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPose_get_AllowThumbsUp_m5B0BCD38FCEEB5512FE9FA49DFDDFB61FA5D5EAF (HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_allowThumbsUp; }
		bool L_0 = __this->___m_allowThumbsUp_5;
		return L_0;
	}
}
// OVRTouchSample.HandPoseId OVRTouchSample.HandPose::get_PoseId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandPose_get_PoseId_m399F7DCB42FE2A60FFF096C1865DFF5B347F7BDB (HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_poseId; }
		int32_t L_0 = __this->___m_poseId_6;
		return L_0;
	}
}
// System.Void OVRTouchSample.HandPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose__ctor_m021CDC27F6532FDED971F9972D5ECE85C3FF1162 (HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void OVRTouchSample.TouchController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController_Update_m2FCE5F2BEC38B9B1448FAD8E8DFF64AF1E3E0A32 (TouchController_t1BCC5F911D1E7987E5DA9A4654DD05D585C32A03* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchController_OnInputFocusAcquired_m4CE35E8F9CA5C7E611193F2859EF5D72E4C6A106_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchController_OnInputFocusLost_m6317EA5E49BEFAB15C37741C92DE17CC0056DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral686B62DC85A76B4D986AD7F54097517BC28F71E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8527477538A58C4D0BEFF1E314F25DFC679B1257);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AB4E9905F6F550494FF4D258F973A6CC2395CC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4C9085A8FC519D61179956F4A28BAD81D661A82);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	String_t* G_B3_1 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B3_2 = NULL;
	String_t* G_B5_0 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B5_1 = NULL;
	String_t* G_B4_0 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B4_1 = NULL;
	float G_B6_0 = 0.0f;
	String_t* G_B6_1 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B6_2 = NULL;
	{
		// m_animator.SetFloat("Button 1", OVRInput.Get(OVRInput.Button.One, m_controller) ? 1.0f : 0.0f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___m_animator_5;
		int32_t L_1 = __this->___m_controller_4;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = OVRInput_Get_m8CF227684F49E1C26239D78F826E11A956E909C1(1, L_1, NULL);
		G_B1_0 = _stringLiteral8527477538A58C4D0BEFF1E314F25DFC679B1257;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = _stringLiteral8527477538A58C4D0BEFF1E314F25DFC679B1257;
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0025;
	}

IL_0020:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0025:
	{
		NullCheck(G_B3_2);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(G_B3_2, G_B3_1, G_B3_0, NULL);
		// m_animator.SetFloat("Button 2", OVRInput.Get(OVRInput.Button.Two, m_controller) ? 1.0f : 0.0f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___m_animator_5;
		int32_t L_4 = __this->___m_controller_4;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = OVRInput_Get_m8CF227684F49E1C26239D78F826E11A956E909C1(2, L_4, NULL);
		G_B4_0 = _stringLiteral686B62DC85A76B4D986AD7F54097517BC28F71E3;
		G_B4_1 = L_3;
		if (L_5)
		{
			G_B5_0 = _stringLiteral686B62DC85A76B4D986AD7F54097517BC28F71E3;
			G_B5_1 = L_3;
			goto IL_004a;
		}
	}
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_004f;
	}

IL_004a:
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_004f:
	{
		NullCheck(G_B6_2);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(G_B6_2, G_B6_1, G_B6_0, NULL);
		// m_animator.SetFloat("Joy X", OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick, m_controller).x);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___m_animator_5;
		int32_t L_7 = __this->___m_controller_4;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = OVRInput_Get_mF4EA350D5898449529C641C72B7D440DF81180C8(1, L_7, NULL);
		float L_9 = L_8.___x_0;
		NullCheck(L_6);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_6, _stringLiteralF4C9085A8FC519D61179956F4A28BAD81D661A82, L_9, NULL);
		// m_animator.SetFloat("Joy Y", OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick, m_controller).y);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___m_animator_5;
		int32_t L_11 = __this->___m_controller_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = OVRInput_Get_mF4EA350D5898449529C641C72B7D440DF81180C8(1, L_11, NULL);
		float L_13 = L_12.___y_1;
		NullCheck(L_10);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_10, _stringLiteral8AB4E9905F6F550494FF4D258F973A6CC2395CC7, L_13, NULL);
		// m_animator.SetFloat("Grip", OVRInput.Get(OVRInput.Axis1D.PrimaryHandTrigger, m_controller));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = __this->___m_animator_5;
		int32_t L_15 = __this->___m_controller_4;
		float L_16;
		L_16 = OVRInput_Get_m1FD85568F358C43019E09E48A7BEBD6CD7F7E5D8(4, L_15, NULL);
		NullCheck(L_14);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_14, _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9, L_16, NULL);
		// m_animator.SetFloat("Trigger", OVRInput.Get(OVRInput.Axis1D.PrimaryIndexTrigger, m_controller));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_17 = __this->___m_animator_5;
		int32_t L_18 = __this->___m_controller_4;
		float L_19;
		L_19 = OVRInput_Get_m1FD85568F358C43019E09E48A7BEBD6CD7F7E5D8(1, L_18, NULL);
		NullCheck(L_17);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_17, _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B, L_19, NULL);
		// OVRManager.InputFocusAcquired += OnInputFocusAcquired;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_20 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_20, __this, (intptr_t)((void*)TouchController_OnInputFocusAcquired_m4CE35E8F9CA5C7E611193F2859EF5D72E4C6A106_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_il2cpp_TypeInfo_var);
		OVRManager_add_InputFocusAcquired_m303EF833FD42193E22AFA2851C1E80861B53F41B(L_20, NULL);
		// OVRManager.InputFocusLost += OnInputFocusLost;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_21 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_21, __this, (intptr_t)((void*)TouchController_OnInputFocusLost_m6317EA5E49BEFAB15C37741C92DE17CC0056DE15_RuntimeMethod_var), NULL);
		OVRManager_add_InputFocusLost_mB75E6525CCFD54E827174479582C861448199E44(L_21, NULL);
		// }
		return;
	}
}
// System.Void OVRTouchSample.TouchController::OnInputFocusLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController_OnInputFocusLost_m6317EA5E49BEFAB15C37741C92DE17CC0056DE15 (TouchController_t1BCC5F911D1E7987E5DA9A4654DD05D585C32A03* __this, const RuntimeMethod* method) 
{
	{
		// if (gameObject.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// m_restoreOnInputAcquired = true;
		__this->___m_restoreOnInputAcquired_6 = (bool)1;
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void OVRTouchSample.TouchController::OnInputFocusAcquired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController_OnInputFocusAcquired_m4CE35E8F9CA5C7E611193F2859EF5D72E4C6A106 (TouchController_t1BCC5F911D1E7987E5DA9A4654DD05D585C32A03* __this, const RuntimeMethod* method) 
{
	{
		// if (m_restoreOnInputAcquired)
		bool L_0 = __this->___m_restoreOnInputAcquired_6;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// m_restoreOnInputAcquired = false;
		__this->___m_restoreOnInputAcquired_6 = (bool)0;
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void OVRTouchSample.TouchController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController__ctor_mFEC6542E29C9A706269D2381487265DC207D4B25 (TouchController_t1BCC5F911D1E7987E5DA9A4654DD05D585C32A03* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Avatar.AvatarLogger::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarLogger_Log_mBD7E0CB6CA631CBE60AC6EDD19BAB53F98D25795 (String_t* ___logMsg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC24656F45ECBD5D676F4A3BA2C3CC9DC8BDE0F90);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(LogAvatar + logMsg);
		String_t* L_0 = ___logMsg0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC24656F45ECBD5D676F4A3BA2C3CC9DC8BDE0F90, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Avatar.AvatarLogger::Log(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarLogger_Log_m0DC63AB90744621A39DF7AF18D14DA2695082D79 (String_t* ___logMsg0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC24656F45ECBD5D676F4A3BA2C3CC9DC8BDE0F90);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(LogAvatar + logMsg , context);
		String_t* L_0 = ___logMsg0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC24656F45ECBD5D676F4A3BA2C3CC9DC8BDE0F90, L_0, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___context1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Avatar.AvatarLogger::LogWarning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarLogger_LogWarning_m9FA1BD8DA146A33318D9DBED697BE85C5C9F2795 (String_t* ___logMsg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC24656F45ECBD5D676F4A3BA2C3CC9DC8BDE0F90);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning(LogAvatar + logMsg);
		String_t* L_0 = ___logMsg0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC24656F45ECBD5D676F4A3BA2C3CC9DC8BDE0F90, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Avatar.AvatarLogger::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarLogger_LogError_mDBD8A13EBB73F0CB63DC39AD59A46EC1768E94C5 (String_t* ___logMsg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC24656F45ECBD5D676F4A3BA2C3CC9DC8BDE0F90);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(LogAvatar + logMsg);
		String_t* L_0 = ___logMsg0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC24656F45ECBD5D676F4A3BA2C3CC9DC8BDE0F90, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Avatar.AvatarLogger::LogError(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarLogger_LogError_mD6E78D416734DDF46139200D742DFDB45BC48DDA (String_t* ___logMsg0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC24656F45ECBD5D676F4A3BA2C3CC9DC8BDE0F90);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(LogAvatar + logMsg, context);
		String_t* L_0 = ___logMsg0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC24656F45ECBD5D676F4A3BA2C3CC9DC8BDE0F90, L_0, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___context1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(L_1, L_2, NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_CAPI_LoggingCallback_m8A2F2B43C7B62C6698C70B51F4CB60F2945E2EAA(intptr_t ___str0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	CAPI_LoggingCallback_m8A2F2B43C7B62C6698C70B51F4CB60F2945E2EAA(___str0, NULL);

}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_InitializeAndroidUnity(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_InitializeAndroidUnity_m46BE119EE7E466DC6409E16BA9C35B85FED55607 (String_t* ___appID0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_InitializeAndroidUnity", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___appID0' to native representation
	char* ____appID0_marshaled = NULL;
	____appID0_marshaled = il2cpp_codegen_marshal_string(___appID0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_InitializeAndroidUnity)(____appID0_marshaled);
	#else
	il2cppPInvokeFunc(____appID0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___appID0' native representation
	il2cpp_codegen_marshal_free(____appID0_marshaled);
	____appID0_marshaled = NULL;

}
// System.Void Oculus.Avatar.CAPI::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_Initialize_m47B7BCE85E2745F2D0A18DB4E77039DCBEABFAAD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06628E376ACDA044350CF5680DF08B57D525D477);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarGazeTargets_t385BB22293BFB6338CE0BA9FCEC655B7BD6453DE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarVisemes_t6BA73049EA05C3F5E6775E16DF8CF4192119E0B1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// nativeVisemeData = Marshal.AllocHGlobal(Marshal.SizeOf(typeof(ovrAvatarVisemes)));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ovrAvatarVisemes_t6BA73049EA05C3F5E6775E16DF8CF4192119E0B1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_1, NULL);
		intptr_t L_3;
		L_3 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeVisemeData_1 = L_3;
		// nativeGazeTargetsData = Marshal.AllocHGlobal(Marshal.SizeOf(typeof(ovrAvatarGazeTargets)));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (ovrAvatarGazeTargets_t385BB22293BFB6338CE0BA9FCEC655B7BD6453DE_0_0_0_var) };
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		int32_t L_6;
		L_6 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_5, NULL);
		intptr_t L_7;
		L_7 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_6, NULL);
		((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeGazeTargetsData_2 = L_7;
		// nativeAvatarLightsData = Marshal.AllocHGlobal(Marshal.SizeOf(typeof(ovrAvatarLights)));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		int32_t L_10;
		L_10 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_9, NULL);
		intptr_t L_11;
		L_11 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_10, NULL);
		((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeAvatarLightsData_3 = L_11;
		// DebugLineCountData = Marshal.AllocHGlobal(Marshal.SizeOf(typeof(uint)));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		int32_t L_14;
		L_14 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_13, NULL);
		intptr_t L_15;
		L_15 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_14, NULL);
		((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___DebugLineCountData_4 = L_15;
		// debugLineGo = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_16, NULL);
		((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___debugLineGo_6 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___debugLineGo_6), (void*)L_16);
		// debugLineGo.name = "AvatarSDKDebugDrawHelper";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___debugLineGo_6;
		NullCheck(L_17);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_17, _stringLiteral06628E376ACDA044350CF5680DF08B57D525D477, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Avatar.CAPI::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_Shutdown_m37F627A1BD81406F55B13BD4E817C9F736D821CD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Marshal.FreeHGlobal(nativeVisemeData);
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeVisemeData_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_0, NULL);
		// Marshal.FreeHGlobal(nativeGazeTargetsData);
		intptr_t L_1 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeGazeTargetsData_2;
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_1, NULL);
		// Marshal.FreeHGlobal(nativeAvatarLightsData);
		intptr_t L_2 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeAvatarLightsData_3;
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_2, NULL);
		// Marshal.FreeHGlobal(DebugLineCountData);
		intptr_t L_3 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___DebugLineCountData_4;
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_3, NULL);
		// debugLineGo = null;
		((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___debugLineGo_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___debugLineGo_6), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// }
		return;
	}
}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_Shutdown_m2E32A88376E59EF0974E06513D272F11302E6465 (const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_Shutdown", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_Shutdown)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarMessage_Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarMessage_Pop_m41C737515BE72FED5C8B75E739F8E5B24EA14BC0 (const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarMessage_Pop", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarMessage_Pop)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// ovrAvatarMessageType Oculus.Avatar.CAPI::ovrAvatarMessage_GetType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovrAvatarMessage_GetType_mD99DCB58B0A9223832C5AB8C7A3AC128F701AD1F (intptr_t ___msg0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarMessage_GetType", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarMessage_GetType)(___msg0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___msg0);
	#endif

	return returnValue;
}
// ovrAvatarMessage_AvatarSpecification Oculus.Avatar.CAPI::ovrAvatarMessage_GetAvatarSpecification(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrAvatarMessage_AvatarSpecification_tA9DD22005F270E16ED8AAD3D5989849029880C4C CAPI_ovrAvatarMessage_GetAvatarSpecification_mB4FCF900BA11749327B653904E31A779A7ADF305 (intptr_t ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarMessage_AvatarSpecification_tA9DD22005F270E16ED8AAD3D5989849029880C4C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarMessage_AvatarSpecification_tA9DD22005F270E16ED8AAD3D5989849029880C4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr ptr = ovrAvatarMessage_GetAvatarSpecification_Native(msg);
		intptr_t L_0 = ___msg0;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovrAvatarMessage_GetAvatarSpecification_Native_m06522704F1C48CFDCBD49E0913A2756A0DDD6EB0(L_0, NULL);
		// return (ovrAvatarMessage_AvatarSpecification)Marshal.PtrToStructure(
		//     ptr, typeof(ovrAvatarMessage_AvatarSpecification));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (ovrAvatarMessage_AvatarSpecification_tA9DD22005F270E16ED8AAD3D5989849029880C4C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_1, L_3, NULL);
		return ((*(ovrAvatarMessage_AvatarSpecification_tA9DD22005F270E16ED8AAD3D5989849029880C4C*)((ovrAvatarMessage_AvatarSpecification_tA9DD22005F270E16ED8AAD3D5989849029880C4C*)(ovrAvatarMessage_AvatarSpecification_tA9DD22005F270E16ED8AAD3D5989849029880C4C*)UnBox(L_4, ovrAvatarMessage_AvatarSpecification_tA9DD22005F270E16ED8AAD3D5989849029880C4C_il2cpp_TypeInfo_var))));
	}
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarMessage_GetAvatarSpecification_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarMessage_GetAvatarSpecification_Native_m06522704F1C48CFDCBD49E0913A2756A0DDD6EB0 (intptr_t ___msg0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarMessage_GetAvatarSpecification", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarMessage_GetAvatarSpecification)(___msg0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___msg0);
	#endif

	return returnValue;
}
// ovrAvatarMessage_AssetLoaded Oculus.Avatar.CAPI::ovrAvatarMessage_GetAssetLoaded(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrAvatarMessage_AssetLoaded_tDBBE01323AEB5E1BD7C5C7FE520987246A9E263B CAPI_ovrAvatarMessage_GetAssetLoaded_m0C115F6CE2053CFC92AEDA2E3F3A60310846AEBD (intptr_t ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarMessage_AssetLoaded_tDBBE01323AEB5E1BD7C5C7FE520987246A9E263B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarMessage_AssetLoaded_tDBBE01323AEB5E1BD7C5C7FE520987246A9E263B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr ptr = ovrAvatarMessage_GetAssetLoaded_Native(msg);
		intptr_t L_0 = ___msg0;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovrAvatarMessage_GetAssetLoaded_Native_m3A27799C7B8B81A2F44D12E1406D32BBC6D62342(L_0, NULL);
		// return (ovrAvatarMessage_AssetLoaded)Marshal.PtrToStructure(
		//     ptr, typeof(ovrAvatarMessage_AssetLoaded));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (ovrAvatarMessage_AssetLoaded_tDBBE01323AEB5E1BD7C5C7FE520987246A9E263B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_1, L_3, NULL);
		return ((*(ovrAvatarMessage_AssetLoaded_tDBBE01323AEB5E1BD7C5C7FE520987246A9E263B*)((ovrAvatarMessage_AssetLoaded_tDBBE01323AEB5E1BD7C5C7FE520987246A9E263B*)(ovrAvatarMessage_AssetLoaded_tDBBE01323AEB5E1BD7C5C7FE520987246A9E263B*)UnBox(L_4, ovrAvatarMessage_AssetLoaded_tDBBE01323AEB5E1BD7C5C7FE520987246A9E263B_il2cpp_TypeInfo_var))));
	}
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarMessage_GetAssetLoaded_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarMessage_GetAssetLoaded_Native_m3A27799C7B8B81A2F44D12E1406D32BBC6D62342 (intptr_t ___msg0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarMessage_GetAssetLoaded", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarMessage_GetAssetLoaded)(___msg0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___msg0);
	#endif

	return returnValue;
}
// System.Void Oculus.Avatar.CAPI::ovrAvatarMessage_Free(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatarMessage_Free_m25CB033C63530390CBB308AEABDF250510A24403 (intptr_t ___msg0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarMessage_Free", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatarMessage_Free)(___msg0);
	#else
	il2cppPInvokeFunc(___msg0);
	#endif

}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarSpecificationRequest_Create(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarSpecificationRequest_Create_m00A196E4AD9F72EEAA8F4FC16BCC2A74F7D3E691 (uint64_t ___userID0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSpecificationRequest_Create", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarSpecificationRequest_Create)(___userID0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___userID0);
	#endif

	return returnValue;
}
// System.Void Oculus.Avatar.CAPI::ovrAvatarSpecificationRequest_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatarSpecificationRequest_Destroy_m71EBB1D9FD12F98EFC27276310F439B9BC339AF5 (intptr_t ___specificationRequest0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSpecificationRequest_Destroy", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatarSpecificationRequest_Destroy)(___specificationRequest0);
	#else
	il2cppPInvokeFunc(___specificationRequest0);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatarSpecificationRequest_SetCombineMeshes(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatarSpecificationRequest_SetCombineMeshes_m92B85C650A42AC9A2CE410B03916C7FE29FC2C27 (intptr_t ___specificationRequest0, bool ___useCombinedMesh1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSpecificationRequest_SetCombineMeshes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatarSpecificationRequest_SetCombineMeshes)(___specificationRequest0, static_cast<int32_t>(___useCombinedMesh1));
	#else
	il2cppPInvokeFunc(___specificationRequest0, static_cast<int32_t>(___useCombinedMesh1));
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatarSpecificationRequest_SetLookAndFeelVersion(System.IntPtr,ovrAvatarLookAndFeelVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatarSpecificationRequest_SetLookAndFeelVersion_mD84EF792F90055CC4A5DB4C36D6403BBB453CC0C (intptr_t ___specificationRequest0, int32_t ___version1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSpecificationRequest_SetLookAndFeelVersion", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatarSpecificationRequest_SetLookAndFeelVersion)(___specificationRequest0, ___version1);
	#else
	il2cppPInvokeFunc(___specificationRequest0, ___version1);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatarSpecificationRequest_SetLevelOfDetail(System.IntPtr,ovrAvatarAssetLevelOfDetail)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatarSpecificationRequest_SetLevelOfDetail_m8EDB96FBFCFBB814BA334275AFE5D16B4A0B5496 (intptr_t ___specificationRequest0, int32_t ___lod1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSpecificationRequest_SetLevelOfDetail", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatarSpecificationRequest_SetLevelOfDetail)(___specificationRequest0, ___lod1);
	#else
	il2cppPInvokeFunc(___specificationRequest0, ___lod1);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_RequestAvatarSpecification(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_RequestAvatarSpecification_mA3C27DC251509B48348A140AED78BF7EA8C4CA9B (uint64_t ___userID0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_RequestAvatarSpecification", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_RequestAvatarSpecification)(___userID0);
	#else
	il2cppPInvokeFunc(___userID0);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_RequestAvatarSpecificationFromSpecRequest(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_RequestAvatarSpecificationFromSpecRequest_m711AB5C3677ACFB899C2DE4EEEECEC2AAD6FB0A3 (intptr_t ___specificationRequest0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_RequestAvatarSpecificationFromSpecRequest", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_RequestAvatarSpecificationFromSpecRequest)(___specificationRequest0);
	#else
	il2cppPInvokeFunc(___specificationRequest0);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatarSpecificationRequest_SetFallbackLookAndFeelVersion(System.IntPtr,ovrAvatarLookAndFeelVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatarSpecificationRequest_SetFallbackLookAndFeelVersion_mCDF7CF958FA4AEB88A0AACEDB1CE848749DD9E32 (intptr_t ___specificationRequest0, int32_t ___version1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSpecificationRequest_SetFallbackLookAndFeelVersion", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatarSpecificationRequest_SetFallbackLookAndFeelVersion)(___specificationRequest0, ___version1);
	#else
	il2cppPInvokeFunc(___specificationRequest0, ___version1);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatarSpecificationRequest_SetExpressiveFlag(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatarSpecificationRequest_SetExpressiveFlag_mF60A1C67375637F7196BC63A4F8D977456BD23B9 (intptr_t ___specificationRequest0, bool ___enable1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSpecificationRequest_SetExpressiveFlag", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatarSpecificationRequest_SetExpressiveFlag)(___specificationRequest0, static_cast<int32_t>(___enable1));
	#else
	il2cppPInvokeFunc(___specificationRequest0, static_cast<int32_t>(___enable1));
	#endif

}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatar_Create(System.IntPtr,ovrAvatarCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatar_Create_m12466F17340A02EA851D1D09271FE320241CCAA0 (intptr_t ___avatarSpecification0, int32_t ___capabilities1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_Create", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatar_Create)(___avatarSpecification0, ___capabilities1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___avatarSpecification0, ___capabilities1);
	#endif

	return returnValue;
}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_Destroy_m9684F630C346B1FA76CB2EF0CE84AB6B8492E4F3 (intptr_t ___avatar0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_Destroy", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_Destroy)(___avatar0);
	#else
	il2cppPInvokeFunc(___avatar0);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatarPose_UpdateBody(System.IntPtr,ovrAvatarTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatarPose_UpdateBody_mB95BE9AA9E4A80FD455471A6414720D500134855 (intptr_t ___avatar0, ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___headPose1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarPose_UpdateBody", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatarPose_UpdateBody)(___avatar0, ___headPose1);
	#else
	il2cppPInvokeFunc(___avatar0, ___headPose1);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatarPose_UpdateVoiceVisualization(System.IntPtr,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatarPose_UpdateVoiceVisualization_m02B0A04B4D4A8FC56E3CDC7E59BFE0D9420B1BC9 (intptr_t ___avatar0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___pcmData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ovrAvatarPose_UpdateVoiceVisualization_Native(
		//     avatar, (UInt32)pcmData.Length, pcmData);
		intptr_t L_0 = ___avatar0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___pcmData1;
		NullCheck(L_1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___pcmData1;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		CAPI_ovrAvatarPose_UpdateVoiceVisualization_Native_mD622B54DDDD18B255BEB9DB2957784C15F6EAC08(L_0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Avatar.CAPI::ovrAvatarPose_UpdateVoiceVisualization_Native(System.IntPtr,System.UInt32,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatarPose_UpdateVoiceVisualization_Native_mD622B54DDDD18B255BEB9DB2957784C15F6EAC08 (intptr_t ___avatar0, uint32_t ___pcmDataSize1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___pcmData2, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint32_t, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarPose_UpdateVoiceVisualization", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___pcmData2' to native representation
	float* ____pcmData2_marshaled = NULL;
	if (___pcmData2 != NULL)
	{
		____pcmData2_marshaled = reinterpret_cast<float*>((___pcmData2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatarPose_UpdateVoiceVisualization)(___avatar0, ___pcmDataSize1, ____pcmData2_marshaled);
	#else
	il2cppPInvokeFunc(___avatar0, ___pcmDataSize1, ____pcmData2_marshaled);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatarPose_UpdateHands(System.IntPtr,ovrAvatarHandInputState,ovrAvatarHandInputState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatarPose_UpdateHands_m96E554A6F616AF812AAF57FFC0752184F34615E7 (intptr_t ___avatar0, ovrAvatarHandInputState_t11CFAB243AA9B2E75581D649167A59AC1B7BE34B ___inputStateLeft1, ovrAvatarHandInputState_t11CFAB243AA9B2E75581D649167A59AC1B7BE34B ___inputStateRight2, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, ovrAvatarHandInputState_t11CFAB243AA9B2E75581D649167A59AC1B7BE34B, ovrAvatarHandInputState_t11CFAB243AA9B2E75581D649167A59AC1B7BE34B);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(ovrAvatarHandInputState_t11CFAB243AA9B2E75581D649167A59AC1B7BE34B) + 3 + sizeof(ovrAvatarHandInputState_t11CFAB243AA9B2E75581D649167A59AC1B7BE34B) + 3;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarPose_UpdateHands", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatarPose_UpdateHands)(___avatar0, ___inputStateLeft1, ___inputStateRight2);
	#else
	il2cppPInvokeFunc(___avatar0, ___inputStateLeft1, ___inputStateRight2);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatarPose_UpdateHandsWithType(System.IntPtr,ovrAvatarHandInputState,ovrAvatarHandInputState,ovrAvatarControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatarPose_UpdateHandsWithType_mCC4FE694D7E0328F4148C6FB1FD7CCD71D501E29 (intptr_t ___avatar0, ovrAvatarHandInputState_t11CFAB243AA9B2E75581D649167A59AC1B7BE34B ___inputStateLeft1, ovrAvatarHandInputState_t11CFAB243AA9B2E75581D649167A59AC1B7BE34B ___inputStateRight2, int32_t ___type3, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, ovrAvatarHandInputState_t11CFAB243AA9B2E75581D649167A59AC1B7BE34B, ovrAvatarHandInputState_t11CFAB243AA9B2E75581D649167A59AC1B7BE34B, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(ovrAvatarHandInputState_t11CFAB243AA9B2E75581D649167A59AC1B7BE34B) + 3 + sizeof(ovrAvatarHandInputState_t11CFAB243AA9B2E75581D649167A59AC1B7BE34B) + 3 + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarPose_UpdateHandsWithType", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatarPose_UpdateHandsWithType)(___avatar0, ___inputStateLeft1, ___inputStateRight2, ___type3);
	#else
	il2cppPInvokeFunc(___avatar0, ___inputStateLeft1, ___inputStateRight2, ___type3);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatarPose_Finalize(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatarPose_Finalize_m80F36B2963DAE3515959CB3854A70502CF642D27 (intptr_t ___avatar0, float ___elapsedSeconds1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarPose_Finalize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatarPose_Finalize)(___avatar0, ___elapsedSeconds1);
	#else
	il2cppPInvokeFunc(___avatar0, ___elapsedSeconds1);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_SetLeftControllerVisibility(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_SetLeftControllerVisibility_m0CAB407A2B58736FEE873F3FE4F902EA707DA8F1 (intptr_t ___avatar0, bool ___show1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_SetLeftControllerVisibility", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_SetLeftControllerVisibility)(___avatar0, static_cast<int32_t>(___show1));
	#else
	il2cppPInvokeFunc(___avatar0, static_cast<int32_t>(___show1));
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_SetRightControllerVisibility(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_SetRightControllerVisibility_mD4F91B3603E3D4157BAB2859C12238EA9EC33290 (intptr_t ___avatar0, bool ___show1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_SetRightControllerVisibility", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_SetRightControllerVisibility)(___avatar0, static_cast<int32_t>(___show1));
	#else
	il2cppPInvokeFunc(___avatar0, static_cast<int32_t>(___show1));
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_SetLeftHandVisibility(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_SetLeftHandVisibility_mA04435BF316953943440DE964E0824E6F621F5F5 (intptr_t ___avatar0, bool ___show1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_SetLeftHandVisibility", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_SetLeftHandVisibility)(___avatar0, static_cast<int32_t>(___show1));
	#else
	il2cppPInvokeFunc(___avatar0, static_cast<int32_t>(___show1));
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_SetRightHandVisibility(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_SetRightHandVisibility_m17D5B95775211E249CFCD453F0ECE6859FAF7239 (intptr_t ___avatar0, bool ___show1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_SetRightHandVisibility", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_SetRightHandVisibility)(___avatar0, static_cast<int32_t>(___show1));
	#else
	il2cppPInvokeFunc(___avatar0, static_cast<int32_t>(___show1));
	#endif

}
// System.UInt32 Oculus.Avatar.CAPI::ovrAvatarComponent_Count(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CAPI_ovrAvatarComponent_Count_m92A79BCE39FDB163A1F7FFFFA1D6A188C6F5790B (intptr_t ___avatar0, const RuntimeMethod* method) 
{
	typedef uint32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarComponent_Count", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarComponent_Count)(___avatar0);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___avatar0);
	#endif

	return returnValue;
}
// System.Void Oculus.Avatar.CAPI::ovrAvatarComponent_Get(System.IntPtr,System.UInt32,System.Boolean,ovrAvatarComponent&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatarComponent_Get_m2741D36FD19D375CCA7B4F1A4650A49C10DD41D8 (intptr_t ___avatar0, uint32_t ___index1, bool ___includeName2, ovrAvatarComponent_tDA7784CCCECD556E1FB75BDE30EAA93C9B3B248E* ___component3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr ptr = ovrAvatarComponent_Get_Native(avatar, index);
		intptr_t L_0 = ___avatar0;
		uint32_t L_1 = ___index1;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = CAPI_ovrAvatarComponent_Get_Native_mE69163A290C2B868DBE4BB0B29860D882E0A040F(L_0, L_1, NULL);
		// ovrAvatarComponent_Get(ptr, includeName, ref component);
		bool L_3 = ___includeName2;
		ovrAvatarComponent_tDA7784CCCECD556E1FB75BDE30EAA93C9B3B248E* L_4 = ___component3;
		CAPI_ovrAvatarComponent_Get_m895847095829E9ACA54B682C5731CF519134E135(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Avatar.CAPI::ovrAvatarComponent_Get(System.IntPtr,System.Boolean,ovrAvatarComponent&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatarComponent_Get_m895847095829E9ACA54B682C5731CF519134E135 (intptr_t ___componentPtr0, bool ___includeName1, ovrAvatarComponent_tDA7784CCCECD556E1FB75BDE30EAA93C9B3B248E* ___component2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OvrAvatar_t555D4012E0BDBC9ED5695214CD086194AA8D8E58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarComponent_Offsets_t1053058442697FB248528D06C75B24FAFA4D90EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Marshal.Copy(new IntPtr(componentPtr.ToInt64() + ovrAvatarComponent_Offsets.transform), scratchBufferFloat, 0, 10);
		int64_t L_0;
		L_0 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&___componentPtr0), NULL);
		il2cpp_codegen_runtime_class_init_inline(ovrAvatarComponent_Offsets_t1053058442697FB248528D06C75B24FAFA4D90EE_il2cpp_TypeInfo_var);
		int64_t L_1 = ((ovrAvatarComponent_Offsets_t1053058442697FB248528D06C75B24FAFA4D90EE_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarComponent_Offsets_t1053058442697FB248528D06C75B24FAFA4D90EE_il2cpp_TypeInfo_var))->___transform_0;
		intptr_t L_2;
		memset((&L_2), 0, sizeof(L_2));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_2), ((int64_t)il2cpp_codegen_add(L_0, L_1)), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775(L_2, L_3, 0, ((int32_t)10), NULL);
		// OvrAvatar.ConvertTransform(scratchBufferFloat, ref component.transform);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		ovrAvatarComponent_tDA7784CCCECD556E1FB75BDE30EAA93C9B3B248E* L_5 = ___component2;
		ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6* L_6 = (&L_5->___transform_0);
		il2cpp_codegen_runtime_class_init_inline(OvrAvatar_t555D4012E0BDBC9ED5695214CD086194AA8D8E58_il2cpp_TypeInfo_var);
		OvrAvatar_ConvertTransform_m58603F7EEDA017FD21DCBE45BCEF03F8275E0CFB(L_4, L_6, NULL);
		// component.renderPartCount = (UInt32)Marshal.ReadInt32(componentPtr, ovrAvatarComponent_Offsets.renderPartCount);
		ovrAvatarComponent_tDA7784CCCECD556E1FB75BDE30EAA93C9B3B248E* L_7 = ___component2;
		intptr_t L_8 = ___componentPtr0;
		int32_t L_9 = ((ovrAvatarComponent_Offsets_t1053058442697FB248528D06C75B24FAFA4D90EE_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarComponent_Offsets_t1053058442697FB248528D06C75B24FAFA4D90EE_il2cpp_TypeInfo_var))->___renderPartCount_1;
		int32_t L_10;
		L_10 = Marshal_ReadInt32_m8273316C589DF24E6375F2D3C745B185AFB51A49(L_8, L_9, NULL);
		L_7->___renderPartCount_1 = L_10;
		// component.renderParts = Marshal.ReadIntPtr(componentPtr, ovrAvatarComponent_Offsets.renderParts);
		ovrAvatarComponent_tDA7784CCCECD556E1FB75BDE30EAA93C9B3B248E* L_11 = ___component2;
		intptr_t L_12 = ___componentPtr0;
		int32_t L_13 = ((ovrAvatarComponent_Offsets_t1053058442697FB248528D06C75B24FAFA4D90EE_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarComponent_Offsets_t1053058442697FB248528D06C75B24FAFA4D90EE_il2cpp_TypeInfo_var))->___renderParts_2;
		intptr_t L_14;
		L_14 = Marshal_ReadIntPtr_m576E200A849BE7A6BC688058AA869B12B30D970F(L_12, L_13, NULL);
		L_11->___renderParts_2 = L_14;
		// if (includeName)
		bool L_15 = ___includeName1;
		if (!L_15)
		{
			goto IL_006c;
		}
	}
	{
		// IntPtr namePtr = Marshal.ReadIntPtr(componentPtr, ovrAvatarComponent_Offsets.name);
		intptr_t L_16 = ___componentPtr0;
		il2cpp_codegen_runtime_class_init_inline(ovrAvatarComponent_Offsets_t1053058442697FB248528D06C75B24FAFA4D90EE_il2cpp_TypeInfo_var);
		int32_t L_17 = ((ovrAvatarComponent_Offsets_t1053058442697FB248528D06C75B24FAFA4D90EE_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarComponent_Offsets_t1053058442697FB248528D06C75B24FAFA4D90EE_il2cpp_TypeInfo_var))->___name_3;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_18;
		L_18 = Marshal_ReadIntPtr_m576E200A849BE7A6BC688058AA869B12B30D970F(L_16, L_17, NULL);
		V_0 = L_18;
		// component.name = Marshal.PtrToStringAnsi(namePtr);
		ovrAvatarComponent_tDA7784CCCECD556E1FB75BDE30EAA93C9B3B248E* L_19 = ___component2;
		intptr_t L_20 = V_0;
		String_t* L_21;
		L_21 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_20, NULL);
		L_19->___name_3 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___name_3), (void*)L_21);
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarComponent_Get_Native(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarComponent_Get_Native_mE69163A290C2B868DBE4BB0B29860D882E0A040F (intptr_t ___avatar0, uint32_t ___index1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarComponent_Get", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarComponent_Get)(___avatar0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___avatar0, ___index1);
	#endif

	return returnValue;
}
// System.Boolean Oculus.Avatar.CAPI::ovrAvatarPose_GetBaseComponent(System.IntPtr,ovrAvatarBaseComponent&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovrAvatarPose_GetBaseComponent_mEAFCBE936E4506C0C5F2F1BD49D334E79AB3E119 (intptr_t ___avatar0, ovrAvatarBaseComponent_t7DEB5F925AC853C5C6CE6E4E8399227D2E2DD34D* ___component1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarBaseComponent_t7DEB5F925AC853C5C6CE6E4E8399227D2E2DD34D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// IntPtr ptr = ovrAvatarPose_GetBaseComponent_Native(avatar);
		intptr_t L_0 = ___avatar0;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovrAvatarPose_GetBaseComponent_Native_mB372C8095E940C1183F9808CFC85FA1F4AD782ED(L_0, NULL);
		V_0 = L_1;
		// if (ptr == IntPtr.Zero)
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// int renderComponentOffset = Marshal.SizeOf(typeof(ovrAvatarBaseComponent)) - Marshal.SizeOf(typeof(IntPtr));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (ovrAvatarBaseComponent_t7DEB5F925AC853C5C6CE6E4E8399227D2E2DD34D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (IntPtr_t_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		int32_t L_10;
		L_10 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_9, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_7, L_10));
		// component.renderComponent = Marshal.ReadIntPtr(ptr, renderComponentOffset);
		ovrAvatarBaseComponent_t7DEB5F925AC853C5C6CE6E4E8399227D2E2DD34D* L_11 = ___component1;
		intptr_t L_12 = V_0;
		int32_t L_13 = V_1;
		intptr_t L_14;
		L_14 = Marshal_ReadIntPtr_m576E200A849BE7A6BC688058AA869B12B30D970F(L_12, L_13, NULL);
		L_11->___renderComponent_1 = L_14;
		// return true;
		return (bool)1;
	}
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarPose_GetBaseComponent_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarPose_GetBaseComponent_Native_mB372C8095E940C1183F9808CFC85FA1F4AD782ED (intptr_t ___avatar0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarPose_GetBaseComponent", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarPose_GetBaseComponent)(___avatar0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___avatar0);
	#endif

	return returnValue;
}
// System.Boolean Oculus.Avatar.CAPI::ovrAvatarPose_GetBodyComponent(System.IntPtr,ovrAvatarBodyComponent&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovrAvatarPose_GetBodyComponent_m354C1E9D62FE44DE7750DC8E3DD1A26185CA0F8B (intptr_t ___avatar0, ovrAvatarBodyComponent_t7F9CF049212A1E12FF3EACC09BC2BC8D05BB82E1* ___component1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_MarshalRenderComponent_TisovrAvatarBodyComponent_t7F9CF049212A1E12FF3EACC09BC2BC8D05BB82E1_m32800079165F57D4898BED5CD050ADA33AEC58E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OvrAvatar_t555D4012E0BDBC9ED5695214CD086194AA8D8E58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarBodyComponent_Offsets_tBAF7A2FBB1273783DBDAA064190253FE67488634_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// IntPtr ptr = ovrAvatarPose_GetBodyComponent_Native(avatar);
		intptr_t L_0 = ___avatar0;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovrAvatarPose_GetBodyComponent_Native_mD4B0736357AF3DDE4EAC8C3B75B2CFA05C94CDCC(L_0, NULL);
		V_0 = L_1;
		// if (ptr == IntPtr.Zero)
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// Marshal.Copy(new IntPtr(ptr.ToInt64() + ovrAvatarBodyComponent_Offsets.leftEyeTransform), scratchBufferFloat, 0, 10);
		int64_t L_5;
		L_5 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(ovrAvatarBodyComponent_Offsets_tBAF7A2FBB1273783DBDAA064190253FE67488634_il2cpp_TypeInfo_var);
		int64_t L_6 = ((ovrAvatarBodyComponent_Offsets_tBAF7A2FBB1273783DBDAA064190253FE67488634_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarBodyComponent_Offsets_tBAF7A2FBB1273783DBDAA064190253FE67488634_il2cpp_TypeInfo_var))->___leftEyeTransform_0;
		intptr_t L_7;
		memset((&L_7), 0, sizeof(L_7));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_7), ((int64_t)il2cpp_codegen_add(L_5, L_6)), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775(L_7, L_8, 0, ((int32_t)10), NULL);
		// OvrAvatar.ConvertTransform(scratchBufferFloat, ref component.leftEyeTransform);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		ovrAvatarBodyComponent_t7F9CF049212A1E12FF3EACC09BC2BC8D05BB82E1* L_10 = ___component1;
		ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6* L_11 = (&L_10->___leftEyeTransform_0);
		il2cpp_codegen_runtime_class_init_inline(OvrAvatar_t555D4012E0BDBC9ED5695214CD086194AA8D8E58_il2cpp_TypeInfo_var);
		OvrAvatar_ConvertTransform_m58603F7EEDA017FD21DCBE45BCEF03F8275E0CFB(L_9, L_11, NULL);
		// Marshal.Copy(new IntPtr(ptr.ToInt64() + ovrAvatarBodyComponent_Offsets.rightEyeTransform), scratchBufferFloat, 0, 10);
		int64_t L_12;
		L_12 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_0), NULL);
		int64_t L_13 = ((ovrAvatarBodyComponent_Offsets_tBAF7A2FBB1273783DBDAA064190253FE67488634_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarBodyComponent_Offsets_tBAF7A2FBB1273783DBDAA064190253FE67488634_il2cpp_TypeInfo_var))->___rightEyeTransform_1;
		intptr_t L_14;
		memset((&L_14), 0, sizeof(L_14));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_14), ((int64_t)il2cpp_codegen_add(L_12, L_13)), /*hidden argument*/NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775(L_14, L_15, 0, ((int32_t)10), NULL);
		// OvrAvatar.ConvertTransform(scratchBufferFloat, ref component.rightEyeTransform);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		ovrAvatarBodyComponent_t7F9CF049212A1E12FF3EACC09BC2BC8D05BB82E1* L_17 = ___component1;
		ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6* L_18 = (&L_17->___rightEyeTransform_1);
		OvrAvatar_ConvertTransform_m58603F7EEDA017FD21DCBE45BCEF03F8275E0CFB(L_16, L_18, NULL);
		// Marshal.Copy(new IntPtr(ptr.ToInt64() + ovrAvatarBodyComponent_Offsets.centerEyeTransform), scratchBufferFloat, 0, 10);
		int64_t L_19;
		L_19 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_0), NULL);
		int64_t L_20 = ((ovrAvatarBodyComponent_Offsets_tBAF7A2FBB1273783DBDAA064190253FE67488634_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarBodyComponent_Offsets_tBAF7A2FBB1273783DBDAA064190253FE67488634_il2cpp_TypeInfo_var))->___centerEyeTransform_2;
		intptr_t L_21;
		memset((&L_21), 0, sizeof(L_21));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_21), ((int64_t)il2cpp_codegen_add(L_19, L_20)), /*hidden argument*/NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775(L_21, L_22, 0, ((int32_t)10), NULL);
		// OvrAvatar.ConvertTransform(scratchBufferFloat, ref component.centerEyeTransform);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		ovrAvatarBodyComponent_t7F9CF049212A1E12FF3EACC09BC2BC8D05BB82E1* L_24 = ___component1;
		ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6* L_25 = (&L_24->___centerEyeTransform_2);
		OvrAvatar_ConvertTransform_m58603F7EEDA017FD21DCBE45BCEF03F8275E0CFB(L_23, L_25, NULL);
		// component.renderComponent = MarshalRenderComponent<ovrAvatarBodyComponent>(ptr);
		ovrAvatarBodyComponent_t7F9CF049212A1E12FF3EACC09BC2BC8D05BB82E1* L_26 = ___component1;
		intptr_t L_27 = V_0;
		intptr_t L_28;
		L_28 = CAPI_MarshalRenderComponent_TisovrAvatarBodyComponent_t7F9CF049212A1E12FF3EACC09BC2BC8D05BB82E1_m32800079165F57D4898BED5CD050ADA33AEC58E0(L_27, CAPI_MarshalRenderComponent_TisovrAvatarBodyComponent_t7F9CF049212A1E12FF3EACC09BC2BC8D05BB82E1_m32800079165F57D4898BED5CD050ADA33AEC58E0_RuntimeMethod_var);
		L_26->___renderComponent_3 = L_28;
		// return true;
		return (bool)1;
	}
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarPose_GetBodyComponent_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarPose_GetBodyComponent_Native_mD4B0736357AF3DDE4EAC8C3B75B2CFA05C94CDCC (intptr_t ___avatar0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarPose_GetBodyComponent", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarPose_GetBodyComponent)(___avatar0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___avatar0);
	#endif

	return returnValue;
}
// System.Boolean Oculus.Avatar.CAPI::ovrAvatarPose_GetLeftControllerComponent(System.IntPtr,ovrAvatarControllerComponent&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovrAvatarPose_GetLeftControllerComponent_m1C1DC777A598DAA5CE2F3906D9FB5F3B550CD426 (intptr_t ___avatar0, ovrAvatarControllerComponent_t9E37F2D7ED15D7343D067879332E0F25ED8D92DB* ___component1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarControllerComponent_t9E37F2D7ED15D7343D067879332E0F25ED8D92DB_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// IntPtr ptr = ovrAvatarPose_GetLeftControllerComponent_Native(avatar);
		intptr_t L_0 = ___avatar0;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovrAvatarPose_GetLeftControllerComponent_Native_mFA4ED1DB8DAEFCF5C9BD71FABA23623D411036EE(L_0, NULL);
		V_0 = L_1;
		// if (ptr == IntPtr.Zero)
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// int renderComponentOffset = Marshal.SizeOf(typeof(ovrAvatarControllerComponent)) - Marshal.SizeOf(typeof(IntPtr));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (ovrAvatarControllerComponent_t9E37F2D7ED15D7343D067879332E0F25ED8D92DB_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (IntPtr_t_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		int32_t L_10;
		L_10 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_9, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_7, L_10));
		// component.renderComponent = Marshal.ReadIntPtr(ptr, renderComponentOffset);
		ovrAvatarControllerComponent_t9E37F2D7ED15D7343D067879332E0F25ED8D92DB* L_11 = ___component1;
		intptr_t L_12 = V_0;
		int32_t L_13 = V_1;
		intptr_t L_14;
		L_14 = Marshal_ReadIntPtr_m576E200A849BE7A6BC688058AA869B12B30D970F(L_12, L_13, NULL);
		L_11->___renderComponent_1 = L_14;
		// return true;
		return (bool)1;
	}
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarPose_GetLeftControllerComponent_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarPose_GetLeftControllerComponent_Native_mFA4ED1DB8DAEFCF5C9BD71FABA23623D411036EE (intptr_t ___avatar0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarPose_GetLeftControllerComponent", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarPose_GetLeftControllerComponent)(___avatar0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___avatar0);
	#endif

	return returnValue;
}
// System.Boolean Oculus.Avatar.CAPI::ovrAvatarPose_GetRightControllerComponent(System.IntPtr,ovrAvatarControllerComponent&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovrAvatarPose_GetRightControllerComponent_mF5B9950465D0BECF7FDA830A704818025EB1B69C (intptr_t ___avatar0, ovrAvatarControllerComponent_t9E37F2D7ED15D7343D067879332E0F25ED8D92DB* ___component1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarControllerComponent_t9E37F2D7ED15D7343D067879332E0F25ED8D92DB_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// IntPtr ptr = ovrAvatarPose_GetRightControllerComponent_Native(avatar);
		intptr_t L_0 = ___avatar0;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovrAvatarPose_GetRightControllerComponent_Native_m4A84ED2AA60E4BBD63D3105643405922E1F15042(L_0, NULL);
		V_0 = L_1;
		// if (ptr == IntPtr.Zero)
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// int renderComponentOffset = Marshal.SizeOf(typeof(ovrAvatarControllerComponent)) - Marshal.SizeOf(typeof(IntPtr));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (ovrAvatarControllerComponent_t9E37F2D7ED15D7343D067879332E0F25ED8D92DB_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (IntPtr_t_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		int32_t L_10;
		L_10 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_9, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_7, L_10));
		// component.renderComponent = Marshal.ReadIntPtr(ptr, renderComponentOffset);
		ovrAvatarControllerComponent_t9E37F2D7ED15D7343D067879332E0F25ED8D92DB* L_11 = ___component1;
		intptr_t L_12 = V_0;
		int32_t L_13 = V_1;
		intptr_t L_14;
		L_14 = Marshal_ReadIntPtr_m576E200A849BE7A6BC688058AA869B12B30D970F(L_12, L_13, NULL);
		L_11->___renderComponent_1 = L_14;
		// return true;
		return (bool)1;
	}
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarPose_GetRightControllerComponent_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarPose_GetRightControllerComponent_Native_m4A84ED2AA60E4BBD63D3105643405922E1F15042 (intptr_t ___avatar0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarPose_GetRightControllerComponent", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarPose_GetRightControllerComponent)(___avatar0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___avatar0);
	#endif

	return returnValue;
}
// System.Boolean Oculus.Avatar.CAPI::ovrAvatarPose_GetLeftHandComponent(System.IntPtr,ovrAvatarHandComponent&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovrAvatarPose_GetLeftHandComponent_m357540DFDD1D30F9FE0EE8DDCF834467E06E6BC6 (intptr_t ___avatar0, ovrAvatarHandComponent_t05B0D0A79F3E6BB05A84312990AEBF3B5A707105* ___component1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarHandComponent_t05B0D0A79F3E6BB05A84312990AEBF3B5A707105_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// IntPtr ptr = ovrAvatarPose_GetLeftHandComponent_Native(avatar);
		intptr_t L_0 = ___avatar0;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovrAvatarPose_GetLeftHandComponent_Native_m24EE70A1FF494BCDCEBB785D636EC2D0FDB4C6A0(L_0, NULL);
		V_0 = L_1;
		// if (ptr == IntPtr.Zero)
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// int renderComponentOffset = Marshal.SizeOf(typeof(ovrAvatarHandComponent)) - Marshal.SizeOf(typeof(IntPtr));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (ovrAvatarHandComponent_t05B0D0A79F3E6BB05A84312990AEBF3B5A707105_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (IntPtr_t_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		int32_t L_10;
		L_10 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_9, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_7, L_10));
		// component.renderComponent = Marshal.ReadIntPtr(ptr, renderComponentOffset);
		ovrAvatarHandComponent_t05B0D0A79F3E6BB05A84312990AEBF3B5A707105* L_11 = ___component1;
		intptr_t L_12 = V_0;
		int32_t L_13 = V_1;
		intptr_t L_14;
		L_14 = Marshal_ReadIntPtr_m576E200A849BE7A6BC688058AA869B12B30D970F(L_12, L_13, NULL);
		L_11->___renderComponent_1 = L_14;
		// return true;
		return (bool)1;
	}
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarPose_GetLeftHandComponent_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarPose_GetLeftHandComponent_Native_m24EE70A1FF494BCDCEBB785D636EC2D0FDB4C6A0 (intptr_t ___avatar0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarPose_GetLeftHandComponent", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarPose_GetLeftHandComponent)(___avatar0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___avatar0);
	#endif

	return returnValue;
}
// System.Boolean Oculus.Avatar.CAPI::ovrAvatarPose_GetRightHandComponent(System.IntPtr,ovrAvatarHandComponent&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovrAvatarPose_GetRightHandComponent_mB097EE3372CCAC0DB3482E7BE6B0388822AF26F5 (intptr_t ___avatar0, ovrAvatarHandComponent_t05B0D0A79F3E6BB05A84312990AEBF3B5A707105* ___component1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarHandComponent_t05B0D0A79F3E6BB05A84312990AEBF3B5A707105_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// IntPtr ptr = ovrAvatarPose_GetRightHandComponent_Native(avatar);
		intptr_t L_0 = ___avatar0;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovrAvatarPose_GetRightHandComponent_Native_mBA4E5AE096EFF65590FB2FE0C6B2D1BF99210E05(L_0, NULL);
		V_0 = L_1;
		// if (ptr == IntPtr.Zero)
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// int renderComponentOffset = Marshal.SizeOf(typeof(ovrAvatarHandComponent)) - Marshal.SizeOf(typeof(IntPtr));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (ovrAvatarHandComponent_t05B0D0A79F3E6BB05A84312990AEBF3B5A707105_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (IntPtr_t_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		int32_t L_10;
		L_10 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_9, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_7, L_10));
		// component.renderComponent = Marshal.ReadIntPtr(ptr, renderComponentOffset);
		ovrAvatarHandComponent_t05B0D0A79F3E6BB05A84312990AEBF3B5A707105* L_11 = ___component1;
		intptr_t L_12 = V_0;
		int32_t L_13 = V_1;
		intptr_t L_14;
		L_14 = Marshal_ReadIntPtr_m576E200A849BE7A6BC688058AA869B12B30D970F(L_12, L_13, NULL);
		L_11->___renderComponent_1 = L_14;
		// return true;
		return (bool)1;
	}
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarPose_GetRightHandComponent_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarPose_GetRightHandComponent_Native_mBA4E5AE096EFF65590FB2FE0C6B2D1BF99210E05 (intptr_t ___avatar0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarPose_GetRightHandComponent", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarPose_GetRightHandComponent)(___avatar0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___avatar0);
	#endif

	return returnValue;
}
// System.Void Oculus.Avatar.CAPI::ovrAvatarAsset_BeginLoading(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatarAsset_BeginLoading_m88E619FF0746807ECA8F83969EB76778FB99B712 (uint64_t ___assetID0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarAsset_BeginLoading", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatarAsset_BeginLoading)(___assetID0);
	#else
	il2cppPInvokeFunc(___assetID0);
	#endif

}
// System.Boolean Oculus.Avatar.CAPI::ovrAvatarAsset_BeginLoadingLOD(System.UInt64,ovrAvatarAssetLevelOfDetail)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovrAvatarAsset_BeginLoadingLOD_m8CA7176A14A24969831BE79FF7B00FBB5F442D62 (uint64_t ___assetId0, int32_t ___lod1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (uint64_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarAsset_BeginLoadingLOD", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarAsset_BeginLoadingLOD)(___assetId0, ___lod1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___assetId0, ___lod1);
	#endif

	return static_cast<bool>(returnValue);
}
// ovrAvatarAssetType Oculus.Avatar.CAPI::ovrAvatarAsset_GetType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovrAvatarAsset_GetType_m8474426D538DF7058CB5B7A9A61EA6FD4E96051B (intptr_t ___assetHandle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarAsset_GetType", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarAsset_GetType)(___assetHandle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___assetHandle0);
	#endif

	return returnValue;
}
// ovrAvatarMeshAssetData Oculus.Avatar.CAPI::ovrAvatarAsset_GetMeshData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrAvatarMeshAssetData_t6E6DA61162FC209DB1AEBF40F9824455C37AD9EE CAPI_ovrAvatarAsset_GetMeshData_mD702FB6CAE905B9F9842236E051030C0A58B8A40 (intptr_t ___assetPtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarMeshAssetData_t6E6DA61162FC209DB1AEBF40F9824455C37AD9EE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarMeshAssetData_t6E6DA61162FC209DB1AEBF40F9824455C37AD9EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr ptr = ovrAvatarAsset_GetMeshData_Native(assetPtr);
		intptr_t L_0 = ___assetPtr0;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovrAvatarAsset_GetMeshData_Native_m1554AB639CECD3446C44F74CC101BD21595E7B4F(L_0, NULL);
		// return (ovrAvatarMeshAssetData)Marshal.PtrToStructure(
		//     ptr, typeof(ovrAvatarMeshAssetData));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (ovrAvatarMeshAssetData_t6E6DA61162FC209DB1AEBF40F9824455C37AD9EE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_1, L_3, NULL);
		return ((*(ovrAvatarMeshAssetData_t6E6DA61162FC209DB1AEBF40F9824455C37AD9EE*)((ovrAvatarMeshAssetData_t6E6DA61162FC209DB1AEBF40F9824455C37AD9EE*)(ovrAvatarMeshAssetData_t6E6DA61162FC209DB1AEBF40F9824455C37AD9EE*)UnBox(L_4, ovrAvatarMeshAssetData_t6E6DA61162FC209DB1AEBF40F9824455C37AD9EE_il2cpp_TypeInfo_var))));
	}
}
// ovrAvatarMeshAssetDataV2 Oculus.Avatar.CAPI::ovrAvatarAsset_GetCombinedMeshData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrAvatarMeshAssetDataV2_tB3E68F1A89279C70EA510F6EB849152D31345EB8 CAPI_ovrAvatarAsset_GetCombinedMeshData_mB694B2A706ED1B3ED583DFD5B246C6186FAD5920 (intptr_t ___assetPtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarMeshAssetDataV2_tB3E68F1A89279C70EA510F6EB849152D31345EB8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarMeshAssetDataV2_tB3E68F1A89279C70EA510F6EB849152D31345EB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr ptr = ovrAvatarAsset_GetCombinedMeshData_Native(assetPtr);
		intptr_t L_0 = ___assetPtr0;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovrAvatarAsset_GetCombinedMeshData_Native_mA7033E040BB8F5F2B64F45044363182E7CF094B9(L_0, NULL);
		// return (ovrAvatarMeshAssetDataV2)Marshal.PtrToStructure(
		//     ptr, typeof(ovrAvatarMeshAssetDataV2));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (ovrAvatarMeshAssetDataV2_tB3E68F1A89279C70EA510F6EB849152D31345EB8_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_1, L_3, NULL);
		return ((*(ovrAvatarMeshAssetDataV2_tB3E68F1A89279C70EA510F6EB849152D31345EB8*)((ovrAvatarMeshAssetDataV2_tB3E68F1A89279C70EA510F6EB849152D31345EB8*)(ovrAvatarMeshAssetDataV2_tB3E68F1A89279C70EA510F6EB849152D31345EB8*)UnBox(L_4, ovrAvatarMeshAssetDataV2_tB3E68F1A89279C70EA510F6EB849152D31345EB8_il2cpp_TypeInfo_var))));
	}
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarAsset_GetCombinedMeshData_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarAsset_GetCombinedMeshData_Native_mA7033E040BB8F5F2B64F45044363182E7CF094B9 (intptr_t ___assetPtr0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarAsset_GetCombinedMeshData", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarAsset_GetCombinedMeshData)(___assetPtr0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___assetPtr0);
	#endif

	return returnValue;
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarAsset_GetMeshData_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarAsset_GetMeshData_Native_m1554AB639CECD3446C44F74CC101BD21595E7B4F (intptr_t ___assetPtr0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarAsset_GetMeshData", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarAsset_GetMeshData)(___assetPtr0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___assetPtr0);
	#endif

	return returnValue;
}
// System.UInt32 Oculus.Avatar.CAPI::ovrAvatarAsset_GetMeshBlendShapeCount(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CAPI_ovrAvatarAsset_GetMeshBlendShapeCount_m9F5242529875A8F3F60928ECFB6869131FBDD273 (intptr_t ___assetPtr0, const RuntimeMethod* method) 
{
	typedef uint32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarAsset_GetMeshBlendShapeCount", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarAsset_GetMeshBlendShapeCount)(___assetPtr0);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___assetPtr0);
	#endif

	return returnValue;
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarAsset_GetMeshBlendShapeName(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarAsset_GetMeshBlendShapeName_m703BEA9F0BEDF093B90B9E28E0A5563D2C7A6EA6 (intptr_t ___assetPtr0, uint32_t ___index1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarAsset_GetMeshBlendShapeName", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarAsset_GetMeshBlendShapeName)(___assetPtr0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___assetPtr0, ___index1);
	#endif

	return returnValue;
}
// System.UInt32 Oculus.Avatar.CAPI::ovrAvatarAsset_GetSubmeshCount(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CAPI_ovrAvatarAsset_GetSubmeshCount_m37629EAF8DF7624CC29D91BB7FB8482A70EAF7C3 (intptr_t ___assetPtr0, const RuntimeMethod* method) 
{
	typedef uint32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarAsset_GetSubmeshCount", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarAsset_GetSubmeshCount)(___assetPtr0);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___assetPtr0);
	#endif

	return returnValue;
}
// System.UInt32 Oculus.Avatar.CAPI::ovrAvatarAsset_GetSubmeshLastIndex(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CAPI_ovrAvatarAsset_GetSubmeshLastIndex_m60FD143D9E76B23E46E319F84163413BAFCB0230 (intptr_t ___assetPtr0, uint32_t ___index1, const RuntimeMethod* method) 
{
	typedef uint32_t (CDECL *PInvokeFunc) (intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarAsset_GetSubmeshLastIndex", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarAsset_GetSubmeshLastIndex)(___assetPtr0, ___index1);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___assetPtr0, ___index1);
	#endif

	return returnValue;
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarAsset_GetMeshBlendShapeVertices(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarAsset_GetMeshBlendShapeVertices_m9CE3FAF65088B10DD48CBEA298AAAF367C33F8FE (intptr_t ___assetPtr0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarAsset_GetMeshBlendShapeVertices", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarAsset_GetMeshBlendShapeVertices)(___assetPtr0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___assetPtr0);
	#endif

	return returnValue;
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarAsset_GetAvatar(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarAsset_GetAvatar_mF72DAEFAD5229AC67AAE28D63C5E201BE63443BD (intptr_t ___assetHandle0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarAsset_GetAvatar", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarAsset_GetAvatar)(___assetHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___assetHandle0);
	#endif

	return returnValue;
}
// System.UInt64[] Oculus.Avatar.CAPI::ovrAvatarAsset_GetCombinedMeshIDs(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* CAPI_ovrAvatarAsset_GetCombinedMeshIDs_m35AA89BAFE17EA843C48DEC853990C8CA78D2294 (intptr_t ___assetHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m019790B192264D71C61E8CDF27186A0A2196D384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// UInt32 count = 0;
		V_0 = 0;
		// System.IntPtr countPtr = Marshal.AllocHGlobal(Marshal.SizeOf(count));
		uint32_t L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Marshal_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m019790B192264D71C61E8CDF27186A0A2196D384(L_0, Marshal_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m019790B192264D71C61E8CDF27186A0A2196D384_RuntimeMethod_var);
		intptr_t L_2;
		L_2 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_1, NULL);
		V_1 = L_2;
		// IntPtr idBuffer = ovrAvatarAsset_GetCombinedMeshIDs_Native(assetHandle, countPtr);
		intptr_t L_3 = ___assetHandle0;
		intptr_t L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_5;
		L_5 = CAPI_ovrAvatarAsset_GetCombinedMeshIDs_Native_mE884FF211ABA30DE35B5AF9E99AE64AD884C0E60(L_3, L_4, NULL);
		V_2 = L_5;
		// count = (UInt32)Marshal.PtrToStructure(countPtr, typeof(UInt32));
		intptr_t L_6 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeObject* L_9;
		L_9 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_6, L_8, NULL);
		V_0 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_9, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))));
		// UInt64[] meshIDs = new UInt64[count];
		uint32_t L_10 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_3 = L_11;
		// for (int i = 0; i < count; i++)
		V_4 = 0;
		goto IL_005a;
	}

IL_0038:
	{
		// meshIDs[i] = (UInt64)Marshal.ReadInt64(idBuffer, i * Marshal.SizeOf(typeof(UInt64)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = V_3;
		int32_t L_13 = V_4;
		intptr_t L_14 = V_2;
		int32_t L_15 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_17, NULL);
		int64_t L_19;
		L_19 = Marshal_ReadInt64_m27A281592D414C45CF25C9EB0C378310A2DFBE86(L_14, ((int32_t)il2cpp_codegen_multiply(L_15, L_18)), NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint64_t)L_19);
		// for (int i = 0; i < count; i++)
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005a:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_21 = V_4;
		uint32_t L_22 = V_0;
		if ((((int64_t)((int64_t)L_21)) < ((int64_t)((int64_t)(uint64_t)L_22))))
		{
			goto IL_0038;
		}
	}
	{
		// Marshal.FreeHGlobal(countPtr);
		intptr_t L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_23, NULL);
		// return meshIDs;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = V_3;
		return L_24;
	}
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarAsset_GetCombinedMeshIDs_Native(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarAsset_GetCombinedMeshIDs_Native_mE884FF211ABA30DE35B5AF9E99AE64AD884C0E60 (intptr_t ___assetHandle0, intptr_t ___count1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarAsset_GetCombinedMeshIDs", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarAsset_GetCombinedMeshIDs)(___assetHandle0, ___count1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___assetHandle0, ___count1);
	#endif

	return returnValue;
}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_GetCombinedMeshAlphaData(System.IntPtr,System.UInt64&,UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_GetCombinedMeshAlphaData_m6EC4B0E9EDD574A77C342FF3829261468B795625 (intptr_t ___avatar0, uint64_t* ___textureID1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___offset2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// System.IntPtr textureIDPtr = Marshal.AllocHGlobal(Marshal.SizeOf(typeof(UInt64)));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_1, NULL);
		intptr_t L_3;
		L_3 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_2, NULL);
		V_0 = L_3;
		// System.IntPtr offsetPtr = Marshal.AllocHGlobal(Marshal.SizeOf(typeof(Vector4)));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var) };
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		int32_t L_6;
		L_6 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_5, NULL);
		intptr_t L_7;
		L_7 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_6, NULL);
		V_1 = L_7;
		// ovrAvatar_GetCombinedMeshAlphaData_Native(avatar, textureIDPtr, offsetPtr);
		intptr_t L_8 = ___avatar0;
		intptr_t L_9 = V_0;
		intptr_t L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_11;
		L_11 = CAPI_ovrAvatar_GetCombinedMeshAlphaData_Native_mD8FE67326577A19B5BC8EB05992506D2E7B87448(L_8, L_9, L_10, NULL);
		// textureID = (UInt64)Marshal.PtrToStructure(textureIDPtr, typeof(UInt64));
		uint64_t* L_12 = ___textureID1;
		intptr_t L_13 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeObject* L_16;
		L_16 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_13, L_15, NULL);
		*((int64_t*)L_12) = (int64_t)((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_16, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))));
		// offset = (Vector4)Marshal.PtrToStructure(offsetPtr, typeof(Vector4));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_17 = ___offset2;
		intptr_t L_18 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeObject* L_21;
		L_21 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_18, L_20, NULL);
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_17 = ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_21, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))));
		// Marshal.FreeHGlobal(textureIDPtr);
		intptr_t L_22 = V_0;
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_22, NULL);
		// Marshal.FreeHGlobal(offsetPtr);
		intptr_t L_23 = V_1;
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_23, NULL);
		// }
		return;
	}
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatar_GetCombinedMeshAlphaData_Native(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatar_GetCombinedMeshAlphaData_Native_mD8FE67326577A19B5BC8EB05992506D2E7B87448 (intptr_t ___avatar0, intptr_t ___textureIDPtr1, intptr_t ___offsetPtr2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_GetCombinedMeshAlphaData", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatar_GetCombinedMeshAlphaData)(___avatar0, ___textureIDPtr1, ___offsetPtr2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___avatar0, ___textureIDPtr1, ___offsetPtr2);
	#endif

	return returnValue;
}
// ovrAvatarTextureAssetData Oculus.Avatar.CAPI::ovrAvatarAsset_GetTextureData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrAvatarTextureAssetData_t4C4E73A3C2985EBD1C2584F462AE35048FC992F8 CAPI_ovrAvatarAsset_GetTextureData_m6B215ACE08555FA1C28979F68363F899DE98F171 (intptr_t ___assetPtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarTextureAssetData_t4C4E73A3C2985EBD1C2584F462AE35048FC992F8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarTextureAssetData_t4C4E73A3C2985EBD1C2584F462AE35048FC992F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr ptr = ovrAvatarAsset_GetTextureData_Native(assetPtr);
		intptr_t L_0 = ___assetPtr0;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovrAvatarAsset_GetTextureData_Native_mFD1136F70E7226F68B0C020E1BBEEA1CA11AC4B1(L_0, NULL);
		// return (ovrAvatarTextureAssetData)Marshal.PtrToStructure(
		//     ptr, typeof(ovrAvatarTextureAssetData));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (ovrAvatarTextureAssetData_t4C4E73A3C2985EBD1C2584F462AE35048FC992F8_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_1, L_3, NULL);
		return ((*(ovrAvatarTextureAssetData_t4C4E73A3C2985EBD1C2584F462AE35048FC992F8*)((ovrAvatarTextureAssetData_t4C4E73A3C2985EBD1C2584F462AE35048FC992F8*)(ovrAvatarTextureAssetData_t4C4E73A3C2985EBD1C2584F462AE35048FC992F8*)UnBox(L_4, ovrAvatarTextureAssetData_t4C4E73A3C2985EBD1C2584F462AE35048FC992F8_il2cpp_TypeInfo_var))));
	}
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarAsset_GetTextureData_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarAsset_GetTextureData_Native_mFD1136F70E7226F68B0C020E1BBEEA1CA11AC4B1 (intptr_t ___assetPtr0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarAsset_GetTextureData", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarAsset_GetTextureData)(___assetPtr0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___assetPtr0);
	#endif

	return returnValue;
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarAsset_GetMaterialData_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarAsset_GetMaterialData_Native_mDCBF4BC2B44C0A0809842BE133DFD5674969D341 (intptr_t ___assetPtr0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarAsset_GetMaterialData", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarAsset_GetMaterialData)(___assetPtr0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___assetPtr0);
	#endif

	return returnValue;
}
// ovrAvatarMaterialState Oculus.Avatar.CAPI::ovrAvatarAsset_GetMaterialState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615 CAPI_ovrAvatarAsset_GetMaterialState_mAE0CA2913F07914A9B5D45F3FFA7133CBA3DC813 (intptr_t ___assetPtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr ptr = ovrAvatarAsset_GetMaterialData_Native(assetPtr);
		intptr_t L_0 = ___assetPtr0;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovrAvatarAsset_GetMaterialData_Native_mDCBF4BC2B44C0A0809842BE133DFD5674969D341(L_0, NULL);
		// return (ovrAvatarMaterialState)Marshal.PtrToStructure(ptr, typeof(ovrAvatarMaterialState));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_1, L_3, NULL);
		return ((*(ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615*)((ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615*)(ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615*)UnBox(L_4, ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_il2cpp_TypeInfo_var))));
	}
}
// ovrAvatarRenderPartType Oculus.Avatar.CAPI::ovrAvatarRenderPart_GetType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovrAvatarRenderPart_GetType_mFD641658A2A328951A75377F4BF57C014020F0CD (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarRenderPart_GetType", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarRenderPart_GetType)(___renderPart0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___renderPart0);
	#endif

	return returnValue;
}
// ovrAvatarRenderPart_SkinnedMeshRender Oculus.Avatar.CAPI::ovrAvatarRenderPart_GetSkinnedMeshRender(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrAvatarRenderPart_SkinnedMeshRender_tC6C116515EEC1A44347321E15EAF947655CE1E6F CAPI_ovrAvatarRenderPart_GetSkinnedMeshRender_mB00F0B072CCF1A7984D34B482F09E8EBDD8D5C0F (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarRenderPart_SkinnedMeshRender_tC6C116515EEC1A44347321E15EAF947655CE1E6F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarRenderPart_SkinnedMeshRender_tC6C116515EEC1A44347321E15EAF947655CE1E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr ptr = ovrAvatarRenderPart_GetSkinnedMeshRender_Native(renderPart);
		intptr_t L_0 = ___renderPart0;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovrAvatarRenderPart_GetSkinnedMeshRender_Native_m99D156534FC135C9BB21D35A4F4DA7E750B15318(L_0, NULL);
		// return (ovrAvatarRenderPart_SkinnedMeshRender)Marshal.PtrToStructure(
		//     ptr, typeof(ovrAvatarRenderPart_SkinnedMeshRender));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (ovrAvatarRenderPart_SkinnedMeshRender_tC6C116515EEC1A44347321E15EAF947655CE1E6F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_1, L_3, NULL);
		return ((*(ovrAvatarRenderPart_SkinnedMeshRender_tC6C116515EEC1A44347321E15EAF947655CE1E6F*)((ovrAvatarRenderPart_SkinnedMeshRender_tC6C116515EEC1A44347321E15EAF947655CE1E6F*)(ovrAvatarRenderPart_SkinnedMeshRender_tC6C116515EEC1A44347321E15EAF947655CE1E6F*)UnBox(L_4, ovrAvatarRenderPart_SkinnedMeshRender_tC6C116515EEC1A44347321E15EAF947655CE1E6F_il2cpp_TypeInfo_var))));
	}
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarRenderPart_GetSkinnedMeshRender_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarRenderPart_GetSkinnedMeshRender_Native_m99D156534FC135C9BB21D35A4F4DA7E750B15318 (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarRenderPart_GetSkinnedMeshRender", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarRenderPart_GetSkinnedMeshRender)(___renderPart0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___renderPart0);
	#endif

	return returnValue;
}
// ovrAvatarTransform Oculus.Avatar.CAPI::ovrAvatarSkinnedMeshRender_GetTransform(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 CAPI_ovrAvatarSkinnedMeshRender_GetTransform_mD21812C8C7D5C02B69ED4DF8CA634FB1849F18F8 (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	typedef ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSkinnedMeshRender_GetTransform", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarSkinnedMeshRender_GetTransform)(___renderPart0);
	#else
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 returnValue = il2cppPInvokeFunc(___renderPart0);
	#endif

	return returnValue;
}
// ovrAvatarTransform Oculus.Avatar.CAPI::ovrAvatarSkinnedMeshRenderPBS_GetTransform(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 CAPI_ovrAvatarSkinnedMeshRenderPBS_GetTransform_m5F0E8721E417F8A779C9A9B3F7B9D3AC466B4098 (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	typedef ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSkinnedMeshRenderPBS_GetTransform", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarSkinnedMeshRenderPBS_GetTransform)(___renderPart0);
	#else
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 returnValue = il2cppPInvokeFunc(___renderPart0);
	#endif

	return returnValue;
}
// ovrAvatarTransform Oculus.Avatar.CAPI::ovrAvatarSkinnedMeshRenderPBSV2_GetTransform(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 CAPI_ovrAvatarSkinnedMeshRenderPBSV2_GetTransform_mE9C584986A172156C43C6C2F258A27C53CA03E0D (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	typedef ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSkinnedMeshRenderPBSV2_GetTransform", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarSkinnedMeshRenderPBSV2_GetTransform)(___renderPart0);
	#else
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 returnValue = il2cppPInvokeFunc(___renderPart0);
	#endif

	return returnValue;
}
// ovrAvatarVisibilityFlags Oculus.Avatar.CAPI::ovrAvatarSkinnedMeshRender_GetVisibilityMask(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovrAvatarSkinnedMeshRender_GetVisibilityMask_mB29F1F4DF4BF003462DB97562B10282BDC7C2094 (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSkinnedMeshRender_GetVisibilityMask", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarSkinnedMeshRender_GetVisibilityMask)(___renderPart0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___renderPart0);
	#endif

	return returnValue;
}
// System.Boolean Oculus.Avatar.CAPI::ovrAvatarSkinnedMeshRender_MaterialStateChanged(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovrAvatarSkinnedMeshRender_MaterialStateChanged_m0C12358111A43A4CEF33FF64DBE36818FC63422C (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSkinnedMeshRender_MaterialStateChanged", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarSkinnedMeshRender_MaterialStateChanged)(___renderPart0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___renderPart0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Oculus.Avatar.CAPI::ovrAvatarSkinnedMeshRenderPBSV2_MaterialStateChanged(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovrAvatarSkinnedMeshRenderPBSV2_MaterialStateChanged_mA6456E5874C1875965CC6298F0972F2A2C66070F (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSkinnedMeshRenderPBSV2_MaterialStateChanged", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarSkinnedMeshRenderPBSV2_MaterialStateChanged)(___renderPart0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___renderPart0);
	#endif

	return static_cast<bool>(returnValue);
}
// ovrAvatarVisibilityFlags Oculus.Avatar.CAPI::ovrAvatarSkinnedMeshRenderPBS_GetVisibilityMask(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovrAvatarSkinnedMeshRenderPBS_GetVisibilityMask_m37D921BA8CD5CE609BBDD35F5FE2009A9C25CBCE (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSkinnedMeshRenderPBS_GetVisibilityMask", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarSkinnedMeshRenderPBS_GetVisibilityMask)(___renderPart0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___renderPart0);
	#endif

	return returnValue;
}
// ovrAvatarVisibilityFlags Oculus.Avatar.CAPI::ovrAvatarSkinnedMeshRenderPBSV2_GetVisibilityMask(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovrAvatarSkinnedMeshRenderPBSV2_GetVisibilityMask_m39DA5797B8154B4AE5A014E5CB5356F130C82151 (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSkinnedMeshRenderPBSV2_GetVisibilityMask", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarSkinnedMeshRenderPBSV2_GetVisibilityMask)(___renderPart0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___renderPart0);
	#endif

	return returnValue;
}
// ovrAvatarMaterialState Oculus.Avatar.CAPI::ovrAvatarSkinnedMeshRender_GetMaterialState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615 CAPI_ovrAvatarSkinnedMeshRender_GetMaterialState_m8AFB2C9918D32CF40B4B4E3218EC5242C38C929F (intptr_t ___renderPart0, const RuntimeMethod* method) 
{


	typedef ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_marshaled_pinvoke (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSkinnedMeshRender_GetMaterialState", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_marshaled_pinvoke returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarSkinnedMeshRender_GetMaterialState)(___renderPart0);
	#else
	ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_marshaled_pinvoke returnValue = il2cppPInvokeFunc(___renderPart0);
	#endif

	// Marshaling of return value back from native representation
	ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615 _returnValue_unmarshaled;
	memset((&_returnValue_unmarshaled), 0, sizeof(_returnValue_unmarshaled));
	ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_marshal_pinvoke_back(returnValue, _returnValue_unmarshaled);

	// Marshaling cleanup of return value native representation
	ovrAvatarMaterialState_tDABA050FC73AE572C643E2F0624C3883A03D1615_marshal_pinvoke_cleanup(returnValue);

	return _returnValue_unmarshaled;
}
// ovrAvatarPBSMaterialState Oculus.Avatar.CAPI::ovrAvatarSkinnedMeshRenderPBSV2_GetPBSMaterialState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423 CAPI_ovrAvatarSkinnedMeshRenderPBSV2_GetPBSMaterialState_m477AB87CCB7D601EBC6FB82321FCC511F4F60F32 (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	typedef ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423 (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSkinnedMeshRenderPBSV2_GetPBSMaterialState", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423 returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarSkinnedMeshRenderPBSV2_GetPBSMaterialState)(___renderPart0);
	#else
	ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423 returnValue = il2cppPInvokeFunc(___renderPart0);
	#endif

	return returnValue;
}
// ovrAvatarExpressiveParameters Oculus.Avatar.CAPI::ovrAvatar_GetExpressiveParameters(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrAvatarExpressiveParameters_t59D856DC2C6954171B34274D578B54A098798A8C CAPI_ovrAvatar_GetExpressiveParameters_m36EB888D612C473EF80ED1BED70296D41A1D61B7 (intptr_t ___avatar0, const RuntimeMethod* method) 
{
	typedef ovrAvatarExpressiveParameters_t59D856DC2C6954171B34274D578B54A098798A8C (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_GetExpressiveParameters", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	ovrAvatarExpressiveParameters_t59D856DC2C6954171B34274D578B54A098798A8C returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatar_GetExpressiveParameters)(___avatar0);
	#else
	ovrAvatarExpressiveParameters_t59D856DC2C6954171B34274D578B54A098798A8C returnValue = il2cppPInvokeFunc(___avatar0);
	#endif

	return returnValue;
}
// System.UInt64 Oculus.Avatar.CAPI::ovrAvatarSkinnedMeshRender_GetDirtyJoints(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovrAvatarSkinnedMeshRender_GetDirtyJoints_m37EFA01CBCE85A95FF28CB1ED8CEB332C7E77982 (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	typedef uint64_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSkinnedMeshRender_GetDirtyJoints", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarSkinnedMeshRender_GetDirtyJoints)(___renderPart0);
	#else
	uint64_t returnValue = il2cppPInvokeFunc(___renderPart0);
	#endif

	return returnValue;
}
// System.UInt64 Oculus.Avatar.CAPI::ovrAvatarSkinnedMeshRenderPBS_GetDirtyJoints(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovrAvatarSkinnedMeshRenderPBS_GetDirtyJoints_mA0F5654618EAAA082EA35D4B5132AAAC09B016B3 (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	typedef uint64_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSkinnedMeshRenderPBS_GetDirtyJoints", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarSkinnedMeshRenderPBS_GetDirtyJoints)(___renderPart0);
	#else
	uint64_t returnValue = il2cppPInvokeFunc(___renderPart0);
	#endif

	return returnValue;
}
// System.UInt64 Oculus.Avatar.CAPI::ovrAvatarSkinnedMeshRenderPBSV2_GetDirtyJoints(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovrAvatarSkinnedMeshRenderPBSV2_GetDirtyJoints_mAAA8135F80BD8F5E01BBF784305A44CDD5ECE463 (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	typedef uint64_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSkinnedMeshRenderPBSV2_GetDirtyJoints", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarSkinnedMeshRenderPBSV2_GetDirtyJoints)(___renderPart0);
	#else
	uint64_t returnValue = il2cppPInvokeFunc(___renderPart0);
	#endif

	return returnValue;
}
// ovrAvatarTransform Oculus.Avatar.CAPI::ovrAvatarSkinnedMeshRender_GetJointTransform(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 CAPI_ovrAvatarSkinnedMeshRender_GetJointTransform_m84404DD7E78CCE28EC25FCFA03E9D2EE43C490A6 (intptr_t ___renderPart0, uint32_t ___jointIndex1, const RuntimeMethod* method) 
{
	typedef ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 (CDECL *PInvokeFunc) (intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSkinnedMeshRender_GetJointTransform", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarSkinnedMeshRender_GetJointTransform)(___renderPart0, ___jointIndex1);
	#else
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 returnValue = il2cppPInvokeFunc(___renderPart0, ___jointIndex1);
	#endif

	return returnValue;
}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_SetActionUnitOnsetSpeed(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_SetActionUnitOnsetSpeed_m4AE56C2930F431FD8E9C41C18A3DFA48E2A211A8 (intptr_t ___avatar0, float ___onsetSpeed1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_SetActionUnitOnsetSpeed", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_SetActionUnitOnsetSpeed)(___avatar0, ___onsetSpeed1);
	#else
	il2cppPInvokeFunc(___avatar0, ___onsetSpeed1);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_SetActionUnitFalloffSpeed(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_SetActionUnitFalloffSpeed_m5225C6DE01ACA4F0C9130C02663EFA18B2782D52 (intptr_t ___avatar0, float ___falloffSpeed1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_SetActionUnitFalloffSpeed", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_SetActionUnitFalloffSpeed)(___avatar0, ___falloffSpeed1);
	#else
	il2cppPInvokeFunc(___avatar0, ___falloffSpeed1);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_SetVisemeMultiplier(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_SetVisemeMultiplier_mDFA0BEA2B98F7BCBB64532ABD10BFDA268011AE3 (intptr_t ___avatar0, float ___visemeMultiplier1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_SetVisemeMultiplier", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_SetVisemeMultiplier)(___avatar0, ___visemeMultiplier1);
	#else
	il2cppPInvokeFunc(___avatar0, ___visemeMultiplier1);
	#endif

}
// ovrAvatarTransform Oculus.Avatar.CAPI::ovrAvatarSkinnedMeshRenderPBS_GetJointTransform(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 CAPI_ovrAvatarSkinnedMeshRenderPBS_GetJointTransform_mDA732E932C050BCBC3083C6FA6FEC8414CF6D314 (intptr_t ___renderPart0, uint32_t ___jointIndex1, const RuntimeMethod* method) 
{
	typedef ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 (CDECL *PInvokeFunc) (intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSkinnedMeshRenderPBS_GetJointTransform", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarSkinnedMeshRenderPBS_GetJointTransform)(___renderPart0, ___jointIndex1);
	#else
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 returnValue = il2cppPInvokeFunc(___renderPart0, ___jointIndex1);
	#endif

	return returnValue;
}
// ovrAvatarTransform Oculus.Avatar.CAPI::ovrAvatarSkinnedMeshRenderPBSV2_GetJointTransform(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 CAPI_ovrAvatarSkinnedMeshRenderPBSV2_GetJointTransform_m17352EAFC80023F99F044A765BF8CAE548E38B06 (intptr_t ___renderPart0, uint32_t ___jointIndex1, const RuntimeMethod* method) 
{
	typedef ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 (CDECL *PInvokeFunc) (intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSkinnedMeshRenderPBSV2_GetJointTransform", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarSkinnedMeshRenderPBSV2_GetJointTransform)(___renderPart0, ___jointIndex1);
	#else
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 returnValue = il2cppPInvokeFunc(___renderPart0, ___jointIndex1);
	#endif

	return returnValue;
}
// System.UInt64 Oculus.Avatar.CAPI::ovrAvatarSkinnedMeshRenderPBS_GetAlbedoTextureAssetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovrAvatarSkinnedMeshRenderPBS_GetAlbedoTextureAssetID_m56E85475DADBE8C3C41647E7D39EA3036EBE8190 (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	typedef uint64_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSkinnedMeshRenderPBS_GetAlbedoTextureAssetID", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarSkinnedMeshRenderPBS_GetAlbedoTextureAssetID)(___renderPart0);
	#else
	uint64_t returnValue = il2cppPInvokeFunc(___renderPart0);
	#endif

	return returnValue;
}
// System.UInt64 Oculus.Avatar.CAPI::ovrAvatarSkinnedMeshRenderPBS_GetSurfaceTextureAssetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovrAvatarSkinnedMeshRenderPBS_GetSurfaceTextureAssetID_mD8F069769E889C2E357B1DEDAE24927DA30F4359 (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	typedef uint64_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSkinnedMeshRenderPBS_GetSurfaceTextureAssetID", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarSkinnedMeshRenderPBS_GetSurfaceTextureAssetID)(___renderPart0);
	#else
	uint64_t returnValue = il2cppPInvokeFunc(___renderPart0);
	#endif

	return returnValue;
}
// ovrAvatarRenderPart_SkinnedMeshRenderPBS Oculus.Avatar.CAPI::ovrAvatarRenderPart_GetSkinnedMeshRenderPBS(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrAvatarRenderPart_SkinnedMeshRenderPBS_t643FDD46219508F6493CE48EEDC5C2CDF2473AD3 CAPI_ovrAvatarRenderPart_GetSkinnedMeshRenderPBS_m1F4E6A236EF973D2D6CE9F1CD4CCB178A6DC6CC9 (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarRenderPart_SkinnedMeshRenderPBS_t643FDD46219508F6493CE48EEDC5C2CDF2473AD3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarRenderPart_SkinnedMeshRenderPBS_t643FDD46219508F6493CE48EEDC5C2CDF2473AD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr ptr = ovrAvatarRenderPart_GetSkinnedMeshRenderPBS_Native(renderPart);
		intptr_t L_0 = ___renderPart0;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovrAvatarRenderPart_GetSkinnedMeshRenderPBS_Native_mCA354E8FB7A41DFC1F6FA4F0BD34A804BEE1418E(L_0, NULL);
		// return (ovrAvatarRenderPart_SkinnedMeshRenderPBS)Marshal.PtrToStructure(
		//     ptr, typeof(ovrAvatarRenderPart_SkinnedMeshRenderPBS));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (ovrAvatarRenderPart_SkinnedMeshRenderPBS_t643FDD46219508F6493CE48EEDC5C2CDF2473AD3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_1, L_3, NULL);
		return ((*(ovrAvatarRenderPart_SkinnedMeshRenderPBS_t643FDD46219508F6493CE48EEDC5C2CDF2473AD3*)((ovrAvatarRenderPart_SkinnedMeshRenderPBS_t643FDD46219508F6493CE48EEDC5C2CDF2473AD3*)(ovrAvatarRenderPart_SkinnedMeshRenderPBS_t643FDD46219508F6493CE48EEDC5C2CDF2473AD3*)UnBox(L_4, ovrAvatarRenderPart_SkinnedMeshRenderPBS_t643FDD46219508F6493CE48EEDC5C2CDF2473AD3_il2cpp_TypeInfo_var))));
	}
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarRenderPart_GetSkinnedMeshRenderPBS_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarRenderPart_GetSkinnedMeshRenderPBS_Native_mCA354E8FB7A41DFC1F6FA4F0BD34A804BEE1418E (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarRenderPart_GetSkinnedMeshRenderPBS", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarRenderPart_GetSkinnedMeshRenderPBS)(___renderPart0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___renderPart0);
	#endif

	return returnValue;
}
// ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2 Oculus.Avatar.CAPI::ovrAvatarRenderPart_GetSkinnedMeshRenderPBSV2(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_tCEA8CD6177474FFCCB1095E1117F12F2FBAD6690 CAPI_ovrAvatarRenderPart_GetSkinnedMeshRenderPBSV2_mF6F9DD286F80B0804CE72A8B50E804FF55BA4F23 (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_tCEA8CD6177474FFCCB1095E1117F12F2FBAD6690_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_tCEA8CD6177474FFCCB1095E1117F12F2FBAD6690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr ptr = ovrAvatarRenderPart_GetSkinnedMeshRenderPBSV2_Native(renderPart);
		intptr_t L_0 = ___renderPart0;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovrAvatarRenderPart_GetSkinnedMeshRenderPBSV2_Native_m815DC6305F1F1D45A70CFE103BEDF57B00CC4C78(L_0, NULL);
		// return (ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2)Marshal.PtrToStructure(
		//     ptr, typeof(ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_tCEA8CD6177474FFCCB1095E1117F12F2FBAD6690_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_1, L_3, NULL);
		return ((*(ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_tCEA8CD6177474FFCCB1095E1117F12F2FBAD6690*)((ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_tCEA8CD6177474FFCCB1095E1117F12F2FBAD6690*)(ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_tCEA8CD6177474FFCCB1095E1117F12F2FBAD6690*)UnBox(L_4, ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2_tCEA8CD6177474FFCCB1095E1117F12F2FBAD6690_il2cpp_TypeInfo_var))));
	}
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarRenderPart_GetSkinnedMeshRenderPBSV2_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarRenderPart_GetSkinnedMeshRenderPBSV2_Native_m815DC6305F1F1D45A70CFE103BEDF57B00CC4C78 (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarRenderPart_GetSkinnedMeshRenderPBSV2", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarRenderPart_GetSkinnedMeshRenderPBSV2)(___renderPart0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___renderPart0);
	#endif

	return returnValue;
}
// System.Void Oculus.Avatar.CAPI::ovrAvatarSkinnedMeshRender_GetBlendShapeParams(System.IntPtr,ovrAvatarBlendShapeParams&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatarSkinnedMeshRender_GetBlendShapeParams_mCA4A4E6757A95B4B5F7E06BA1CDB4EE72D77C41D (intptr_t ___renderPart0, ovrAvatarBlendShapeParams_t36C1189F1E68173711B1A090FDE08CC23995443E* ___blendParams1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarBlendShapeParams_Offsets_t6F5F47DA4245CBC0687725FAD42369094F5ECA8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// IntPtr ptr = ovrAvatarSkinnedMeshRender_GetBlendShapeParams_Native(renderPart);
		intptr_t L_0 = ___renderPart0;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovrAvatarSkinnedMeshRender_GetBlendShapeParams_Native_mCA9FD36F78F6742F8ED72237F6C934633624B5EF(L_0, NULL);
		V_0 = L_1;
		// blendParams.blendShapeParamCount = (UInt32)Marshal.ReadInt32(ptr);
		ovrAvatarBlendShapeParams_t36C1189F1E68173711B1A090FDE08CC23995443E* L_2 = ___blendParams1;
		intptr_t L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_ReadInt32_mDF5F7A01E6F50C03DBB936ACF229CE5345B0DE18(L_3, NULL);
		L_2->___blendShapeParamCount_0 = L_4;
		// Marshal.Copy(new IntPtr(ptr.ToInt64() + ovrAvatarBlendShapeParams_Offsets.blendShapeParams), blendParams.blendShapeParams, 0, (int)blendParams.blendShapeParamCount);
		int64_t L_5;
		L_5 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(ovrAvatarBlendShapeParams_Offsets_t6F5F47DA4245CBC0687725FAD42369094F5ECA8A_il2cpp_TypeInfo_var);
		int64_t L_6 = ((ovrAvatarBlendShapeParams_Offsets_t6F5F47DA4245CBC0687725FAD42369094F5ECA8A_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarBlendShapeParams_Offsets_t6F5F47DA4245CBC0687725FAD42369094F5ECA8A_il2cpp_TypeInfo_var))->___blendShapeParams_1;
		intptr_t L_7;
		memset((&L_7), 0, sizeof(L_7));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_7), ((int64_t)il2cpp_codegen_add(L_5, L_6)), /*hidden argument*/NULL);
		ovrAvatarBlendShapeParams_t36C1189F1E68173711B1A090FDE08CC23995443E* L_8 = ___blendParams1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = L_8->___blendShapeParams_1;
		ovrAvatarBlendShapeParams_t36C1189F1E68173711B1A090FDE08CC23995443E* L_10 = ___blendParams1;
		uint32_t L_11 = L_10->___blendShapeParamCount_0;
		Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775(L_7, L_9, 0, L_11, NULL);
		// }
		return;
	}
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarSkinnedMeshRender_GetBlendShapeParams_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarSkinnedMeshRender_GetBlendShapeParams_Native_mCA9FD36F78F6742F8ED72237F6C934633624B5EF (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarSkinnedMeshRender_GetBlendShapeParams", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarSkinnedMeshRender_GetBlendShapeParams)(___renderPart0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___renderPart0);
	#endif

	return returnValue;
}
// ovrAvatarRenderPart_ProjectorRender Oculus.Avatar.CAPI::ovrAvatarRenderPart_GetProjectorRender(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrAvatarRenderPart_ProjectorRender_t95A49114D5EB4DA1D23CB38499FBF25EE3A8667C CAPI_ovrAvatarRenderPart_GetProjectorRender_mD489C0D6B08419031022A2C9179811DFC81909C7 (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarRenderPart_ProjectorRender_t95A49114D5EB4DA1D23CB38499FBF25EE3A8667C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarRenderPart_ProjectorRender_t95A49114D5EB4DA1D23CB38499FBF25EE3A8667C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr ptr = ovrAvatarRenderPart_GetProjectorRender_Native(renderPart);
		intptr_t L_0 = ___renderPart0;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovrAvatarRenderPart_GetProjectorRender_Native_m9F3015CD0E47222975CBEC2304D065B7C5FFEC90(L_0, NULL);
		// return (ovrAvatarRenderPart_ProjectorRender)Marshal.PtrToStructure(
		//     ptr, typeof(ovrAvatarRenderPart_ProjectorRender));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (ovrAvatarRenderPart_ProjectorRender_t95A49114D5EB4DA1D23CB38499FBF25EE3A8667C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_1, L_3, NULL);
		return ((*(ovrAvatarRenderPart_ProjectorRender_t95A49114D5EB4DA1D23CB38499FBF25EE3A8667C*)((ovrAvatarRenderPart_ProjectorRender_t95A49114D5EB4DA1D23CB38499FBF25EE3A8667C*)(ovrAvatarRenderPart_ProjectorRender_t95A49114D5EB4DA1D23CB38499FBF25EE3A8667C*)UnBox(L_4, ovrAvatarRenderPart_ProjectorRender_t95A49114D5EB4DA1D23CB38499FBF25EE3A8667C_il2cpp_TypeInfo_var))));
	}
}
// ovrAvatarPBSMaterialState[] Oculus.Avatar.CAPI::ovrAvatar_GetBodyPBSMaterialStates(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrAvatarPBSMaterialStateU5BU5D_t7E688FB5F9F945786BE02254DBFAC4DA2466DD7B* CAPI_ovrAvatar_GetBodyPBSMaterialStates_m58DB6DD7D87C62C84A0A593282E3E8D547C90898 (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarPBSMaterialStateU5BU5D_t7E688FB5F9F945786BE02254DBFAC4DA2466DD7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	ovrAvatarPBSMaterialStateU5BU5D_t7E688FB5F9F945786BE02254DBFAC4DA2466DD7B* V_2 = NULL;
	int32_t V_3 = 0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// System.IntPtr countPtr = Marshal.AllocHGlobal(Marshal.SizeOf(typeof(UInt32)));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_1, NULL);
		intptr_t L_3;
		L_3 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_2, NULL);
		V_0 = L_3;
		// IntPtr ptrState = ovrAvatar_GetBodyPBSMaterialStates_Native(renderPart, countPtr);
		intptr_t L_4 = ___renderPart0;
		intptr_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_6;
		L_6 = CAPI_ovrAvatar_GetBodyPBSMaterialStates_Native_m8CE411F4D8A5F76F5C4BB0F5495E80C2AF00E832(L_4, L_5, NULL);
		V_1 = L_6;
		// UInt32 count = (UInt32)Marshal.ReadInt32(countPtr);
		intptr_t L_7 = V_0;
		int32_t L_8;
		L_8 = Marshal_ReadInt32_mDF5F7A01E6F50C03DBB936ACF229CE5345B0DE18(L_7, NULL);
		// ovrAvatarPBSMaterialState[] states = new ovrAvatarPBSMaterialState[count];
		ovrAvatarPBSMaterialStateU5BU5D_t7E688FB5F9F945786BE02254DBFAC4DA2466DD7B* L_9 = (ovrAvatarPBSMaterialStateU5BU5D_t7E688FB5F9F945786BE02254DBFAC4DA2466DD7B*)(ovrAvatarPBSMaterialStateU5BU5D_t7E688FB5F9F945786BE02254DBFAC4DA2466DD7B*)SZArrayNew(ovrAvatarPBSMaterialStateU5BU5D_t7E688FB5F9F945786BE02254DBFAC4DA2466DD7B_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_2 = L_9;
		// for (int i = 0; i < states.Length; i++)
		V_3 = 0;
		goto IL_006f;
	}

IL_002d:
	{
		// IntPtr nextItem = new IntPtr(ptrState.ToInt64() + i * Marshal.SizeOf(typeof(ovrAvatarPBSMaterialState)));
		int64_t L_10;
		L_10 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_1), NULL);
		int32_t L_11 = V_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_13, NULL);
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&V_4), ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_11, L_14))))), NULL);
		// states[i] = (ovrAvatarPBSMaterialState)Marshal.PtrToStructure(nextItem, typeof(ovrAvatarPBSMaterialState));
		ovrAvatarPBSMaterialStateU5BU5D_t7E688FB5F9F945786BE02254DBFAC4DA2466DD7B* L_15 = V_2;
		int32_t L_16 = V_3;
		intptr_t L_17 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeObject* L_20;
		L_20 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_17, L_19, NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423)((*(ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423*)((ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423*)(ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423*)UnBox(L_20, ovrAvatarPBSMaterialState_t68A811702B811458A72CFDCE44DDD24ACF0ED423_il2cpp_TypeInfo_var)))));
		// for (int i = 0; i < states.Length; i++)
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_006f:
	{
		// for (int i = 0; i < states.Length; i++)
		int32_t L_22 = V_3;
		ovrAvatarPBSMaterialStateU5BU5D_t7E688FB5F9F945786BE02254DBFAC4DA2466DD7B* L_23 = V_2;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_002d;
		}
	}
	{
		// Marshal.FreeHGlobal(countPtr);
		intptr_t L_24 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_24, NULL);
		// return states;
		ovrAvatarPBSMaterialStateU5BU5D_t7E688FB5F9F945786BE02254DBFAC4DA2466DD7B* L_25 = V_2;
		return L_25;
	}
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatar_GetBodyPBSMaterialStates_Native(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatar_GetBodyPBSMaterialStates_Native_m8CE411F4D8A5F76F5C4BB0F5495E80C2AF00E832 (intptr_t ___avatar0, intptr_t ___count1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_GetBodyPBSMaterialStates", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatar_GetBodyPBSMaterialStates)(___avatar0, ___count1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___avatar0, ___count1);
	#endif

	return returnValue;
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarRenderPart_GetProjectorRender_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarRenderPart_GetProjectorRender_Native_m9F3015CD0E47222975CBEC2304D065B7C5FFEC90 (intptr_t ___renderPart0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarRenderPart_GetProjectorRender", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarRenderPart_GetProjectorRender)(___renderPart0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___renderPart0);
	#endif

	return returnValue;
}
// System.UInt32 Oculus.Avatar.CAPI::ovrAvatar_GetReferencedAssetCount(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CAPI_ovrAvatar_GetReferencedAssetCount_m563F2330CC4AE6E9DB5FD2F0AE67A45F39168681 (intptr_t ___avatar0, const RuntimeMethod* method) 
{
	typedef uint32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_GetReferencedAssetCount", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatar_GetReferencedAssetCount)(___avatar0);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___avatar0);
	#endif

	return returnValue;
}
// System.UInt64 Oculus.Avatar.CAPI::ovrAvatar_GetReferencedAsset(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovrAvatar_GetReferencedAsset_m8BF65C8C8B07EB9D4AB86BE0D443EE3AE4A2542E (intptr_t ___avatar0, uint32_t ___index1, const RuntimeMethod* method) 
{
	typedef uint64_t (CDECL *PInvokeFunc) (intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_GetReferencedAsset", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatar_GetReferencedAsset)(___avatar0, ___index1);
	#else
	uint64_t returnValue = il2cppPInvokeFunc(___avatar0, ___index1);
	#endif

	return returnValue;
}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_SetLeftHandGesture(System.IntPtr,ovrAvatarHandGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_SetLeftHandGesture_mB0A699EE6C13A6F08D76D1DB58EF0EF92270B4AC (intptr_t ___avatar0, int32_t ___gesture1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_SetLeftHandGesture", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_SetLeftHandGesture)(___avatar0, ___gesture1);
	#else
	il2cppPInvokeFunc(___avatar0, ___gesture1);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_SetRightHandGesture(System.IntPtr,ovrAvatarHandGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_SetRightHandGesture_mFBA67597F4291DB450E4C3EE6EF848A5DB851D89 (intptr_t ___avatar0, int32_t ___gesture1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_SetRightHandGesture", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_SetRightHandGesture)(___avatar0, ___gesture1);
	#else
	il2cppPInvokeFunc(___avatar0, ___gesture1);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_SetLeftHandCustomGesture(System.IntPtr,System.UInt32,ovrAvatarTransform[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_SetLeftHandCustomGesture_m676DC768202958040A85B04453C6E2767A54BAAB (intptr_t ___avatar0, uint32_t ___jointCount1, ovrAvatarTransformU5BU5D_t49C8312491C8E72FDD33233AD86212E219C1C4A9* ___customJointTransforms2, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint32_t, ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_SetLeftHandCustomGesture", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___customJointTransforms2' to native representation
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6* ____customJointTransforms2_marshaled = NULL;
	if (___customJointTransforms2 != NULL)
	{
		____customJointTransforms2_marshaled = reinterpret_cast<ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6*>((___customJointTransforms2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_SetLeftHandCustomGesture)(___avatar0, ___jointCount1, ____customJointTransforms2_marshaled);
	#else
	il2cppPInvokeFunc(___avatar0, ___jointCount1, ____customJointTransforms2_marshaled);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_SetRightHandCustomGesture(System.IntPtr,System.UInt32,ovrAvatarTransform[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_SetRightHandCustomGesture_mAA81DD22DA9A500DDAC5CDE61E9A4A29BF352FD7 (intptr_t ___avatar0, uint32_t ___jointCount1, ovrAvatarTransformU5BU5D_t49C8312491C8E72FDD33233AD86212E219C1C4A9* ___customJointTransforms2, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint32_t, ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_SetRightHandCustomGesture", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___customJointTransforms2' to native representation
	ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6* ____customJointTransforms2_marshaled = NULL;
	if (___customJointTransforms2 != NULL)
	{
		____customJointTransforms2_marshaled = reinterpret_cast<ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6*>((___customJointTransforms2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_SetRightHandCustomGesture)(___avatar0, ___jointCount1, ____customJointTransforms2_marshaled);
	#else
	il2cppPInvokeFunc(___avatar0, ___jointCount1, ____customJointTransforms2_marshaled);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_UpdatePoseFromPacket(System.IntPtr,System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_UpdatePoseFromPacket_mFC4EF18F3191D83D585D70AF8DB89E87FEBF3229 (intptr_t ___avatar0, intptr_t ___packet1, float ___secondsFromStart2, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_UpdatePoseFromPacket", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_UpdatePoseFromPacket)(___avatar0, ___packet1, ___secondsFromStart2);
	#else
	il2cppPInvokeFunc(___avatar0, ___packet1, ___secondsFromStart2);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatarPacket_BeginRecording(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatarPacket_BeginRecording_m6E7D8C04925A0D99CE0121E4C48E6A3F6377317B (intptr_t ___avatar0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarPacket_BeginRecording", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatarPacket_BeginRecording)(___avatar0);
	#else
	il2cppPInvokeFunc(___avatar0);
	#endif

}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarPacket_EndRecording(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarPacket_EndRecording_m59AAE638F27FB2DA8009060A2B4E96F47A72C4C9 (intptr_t ___avatar0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarPacket_EndRecording", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarPacket_EndRecording)(___avatar0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___avatar0);
	#endif

	return returnValue;
}
// System.UInt32 Oculus.Avatar.CAPI::ovrAvatarPacket_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CAPI_ovrAvatarPacket_GetSize_m979F1F562416403255B74BBEC285815DCAB45B20 (intptr_t ___packet0, const RuntimeMethod* method) 
{
	typedef uint32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarPacket_GetSize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarPacket_GetSize)(___packet0);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___packet0);
	#endif

	return returnValue;
}
// System.Single Oculus.Avatar.CAPI::ovrAvatarPacket_GetDurationSeconds(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CAPI_ovrAvatarPacket_GetDurationSeconds_m5D499DF07EC4FAFE6320F3D2C375044A06C7B46A (intptr_t ___packet0, const RuntimeMethod* method) 
{
	typedef float (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarPacket_GetDurationSeconds", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	float returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarPacket_GetDurationSeconds)(___packet0);
	#else
	float returnValue = il2cppPInvokeFunc(___packet0);
	#endif

	return returnValue;
}
// System.Void Oculus.Avatar.CAPI::ovrAvatarPacket_Free(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatarPacket_Free_mC47EB4F7558FBB58693A78D3D59448A5C4848E4F (intptr_t ___packet0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarPacket_Free", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatarPacket_Free)(___packet0);
	#else
	il2cppPInvokeFunc(___packet0);
	#endif

}
// System.Boolean Oculus.Avatar.CAPI::ovrAvatarPacket_Write(System.IntPtr,System.UInt32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovrAvatarPacket_Write_m86B171713588DF1F0D11B8DAFFCF2E259FD65F3F (intptr_t ___packet0, uint32_t ___bufferSize1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint32_t, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarPacket_Write", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___buffer2' to native representation
	uint8_t* ____buffer2_marshaled = NULL;
	if (___buffer2 != NULL)
	{
		il2cpp_array_size_t ____buffer2_Length = (___buffer2)->max_length;
		____buffer2_marshaled = il2cpp_codegen_marshal_allocate_array<uint8_t>(____buffer2_Length);
		memset(____buffer2_marshaled, 0, ____buffer2_Length * sizeof(uint8_t));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarPacket_Write)(___packet0, ___bufferSize1, ____buffer2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___packet0, ___bufferSize1, ____buffer2_marshaled);
	#endif

	// Marshaling of parameter '___buffer2' back from native representation
	if (____buffer2_marshaled != NULL)
	{
		il2cpp_array_size_t ____buffer2_Length = (___buffer2)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____buffer2_Length); i++)
		{
			(___buffer2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____buffer2_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___buffer2' native representation
	il2cpp_codegen_marshal_free(____buffer2_marshaled);
	____buffer2_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatarPacket_Read(System.UInt32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatarPacket_Read_m292DD2B1905061843B36474BD845B53A6061DDC7 (uint32_t ___bufferSize0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (uint32_t, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatarPacket_Read", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___buffer1' to native representation
	uint8_t* ____buffer1_marshaled = NULL;
	if (___buffer1 != NULL)
	{
		____buffer1_marshaled = reinterpret_cast<uint8_t*>((___buffer1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatarPacket_Read)(___bufferSize0, ____buffer1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___bufferSize0, ____buffer1_marshaled);
	#endif

	return returnValue;
}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_SetInternalForceASTCTextures(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_SetInternalForceASTCTextures_m6C2F495AE2D5CD54E97EC14102307547A55800E6 (bool ___value0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_SetInternalForceASTCTextures", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_SetInternalForceASTCTextures)(static_cast<int32_t>(___value0));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___value0));
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_SetForceASTCTextures(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_SetForceASTCTextures_m58941576DEF0E6FF31A0A7E5EFA65714433E1B41 (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ovrAvatar_SetInternalForceASTCTextures(value);
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		CAPI_ovrAvatar_SetInternalForceASTCTextures_m6C2F495AE2D5CD54E97EC14102307547A55800E6(L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_OverrideExpressiveLogic(System.IntPtr,ovrAvatarBlendShapeParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_OverrideExpressiveLogic_m7138FACBCE6127191221C809985D3E738B356C13 (intptr_t ___avatar0, ovrAvatarBlendShapeParams_t36C1189F1E68173711B1A090FDE08CC23995443E ___blendParams1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_StructureToPtr_TisovrAvatarBlendShapeParams_t36C1189F1E68173711B1A090FDE08CC23995443E_mE34270DE8E98EE3FC56E44D3109E125E539EF033_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarBlendShapeParams_t36C1189F1E68173711B1A090FDE08CC23995443E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// IntPtr statePtr = Marshal.AllocHGlobal(Marshal.SizeOf(typeof(ovrAvatarBlendShapeParams)));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ovrAvatarBlendShapeParams_t36C1189F1E68173711B1A090FDE08CC23995443E_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_1, NULL);
		intptr_t L_3;
		L_3 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_2, NULL);
		V_0 = L_3;
		// Marshal.StructureToPtr(blendParams, statePtr, false);
		ovrAvatarBlendShapeParams_t36C1189F1E68173711B1A090FDE08CC23995443E L_4 = ___blendParams1;
		intptr_t L_5 = V_0;
		Marshal_StructureToPtr_TisovrAvatarBlendShapeParams_t36C1189F1E68173711B1A090FDE08CC23995443E_mE34270DE8E98EE3FC56E44D3109E125E539EF033(L_4, L_5, (bool)0, Marshal_StructureToPtr_TisovrAvatarBlendShapeParams_t36C1189F1E68173711B1A090FDE08CC23995443E_mE34270DE8E98EE3FC56E44D3109E125E539EF033_RuntimeMethod_var);
		// ovrAvatar_OverrideExpressiveLogic_Native(avatar, statePtr);
		intptr_t L_6 = ___avatar0;
		intptr_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		CAPI_ovrAvatar_OverrideExpressiveLogic_Native_m6962277F2ADE78E8E0DDCF3616669F88749E126A(L_6, L_7, NULL);
		// Marshal.FreeHGlobal(statePtr);
		intptr_t L_8 = V_0;
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_8, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_OverrideExpressiveLogic_Native(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_OverrideExpressiveLogic_Native_m6962277F2ADE78E8E0DDCF3616669F88749E126A (intptr_t ___avatar0, intptr_t ___state1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_OverrideExpressiveLogic", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_OverrideExpressiveLogic)(___avatar0, ___state1);
	#else
	il2cppPInvokeFunc(___avatar0, ___state1);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_SetVisemes(System.IntPtr,ovrAvatarVisemes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_SetVisemes_mA6BAFBA95AD0677E77ADD5A7EC9D04EF9625A69B (intptr_t ___avatar0, ovrAvatarVisemes_t6BA73049EA05C3F5E6775E16DF8CF4192119E0B1 ___visemes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarVisemes_Offsets_tA4BAFF3AC2AA4B73C27522B2C78C5BB9B9D33952_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Marshal.WriteInt32(nativeVisemeData, (Int32)visemes.visemeParamCount);
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeVisemeData_1;
		ovrAvatarVisemes_t6BA73049EA05C3F5E6775E16DF8CF4192119E0B1 L_1 = ___visemes1;
		uint32_t L_2 = L_1.___visemeParamCount_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_WriteInt32_m5905B270B90B6938250A1731EB1A18C84F516EED(L_0, L_2, NULL);
		// Marshal.Copy(visemes.visemeParams, 0, new IntPtr(nativeVisemeData.ToInt64() + ovrAvatarVisemes_Offsets.visemeParams), (int)visemes.visemeParamCount);
		ovrAvatarVisemes_t6BA73049EA05C3F5E6775E16DF8CF4192119E0B1 L_3 = ___visemes1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_3.___visemeParams_1;
		int64_t L_5;
		L_5 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeVisemeData_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(ovrAvatarVisemes_Offsets_tA4BAFF3AC2AA4B73C27522B2C78C5BB9B9D33952_il2cpp_TypeInfo_var);
		int64_t L_6 = ((ovrAvatarVisemes_Offsets_tA4BAFF3AC2AA4B73C27522B2C78C5BB9B9D33952_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarVisemes_Offsets_tA4BAFF3AC2AA4B73C27522B2C78C5BB9B9D33952_il2cpp_TypeInfo_var))->___visemeParams_1;
		intptr_t L_7;
		memset((&L_7), 0, sizeof(L_7));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_7), ((int64_t)il2cpp_codegen_add(L_5, L_6)), /*hidden argument*/NULL);
		ovrAvatarVisemes_t6BA73049EA05C3F5E6775E16DF8CF4192119E0B1 L_8 = ___visemes1;
		uint32_t L_9 = L_8.___visemeParamCount_0;
		Marshal_Copy_m9AC624A4A09A26AC6BF37A42AEA1E5C41F940CC9(L_4, 0, L_7, L_9, NULL);
		// ovrAvatar_SetVisemes_Native(avatar, nativeVisemeData);
		intptr_t L_10 = ___avatar0;
		intptr_t L_11 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeVisemeData_1;
		CAPI_ovrAvatar_SetVisemes_Native_m37492E2741D1822E9750F333501C59491DA582D3(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_SetVisemes_Native(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_SetVisemes_Native_m37492E2741D1822E9750F333501C59491DA582D3 (intptr_t ___avatar0, intptr_t ___visemes1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_SetVisemes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_SetVisemes)(___avatar0, ___visemes1);
	#else
	il2cppPInvokeFunc(___avatar0, ___visemes1);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_UpdateWorldTransform(System.IntPtr,ovrAvatarTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_UpdateWorldTransform_mCCAAB1F586BD0ED20DA001CC73526ED95CCF2AC5 (intptr_t ___avatar0, ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 ___transform1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_UpdateWorldTransform", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_UpdateWorldTransform)(___avatar0, ___transform1);
	#else
	il2cppPInvokeFunc(___avatar0, ___transform1);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_UpdateGazeTargets(ovrAvatarGazeTargets)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_UpdateGazeTargets_mB90653F3A54E650F776CB0539182983CE12752CC (ovrAvatarGazeTargets_t385BB22293BFB6338CE0BA9FCEC655B7BD6453DE ___targets0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarGazeTarget_Offsets_tF592C6CB27FF8F6FA4ACF637CEC59A58E71576B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarGazeTarget_tED1DE5572DF774BFEE76D65064690A15C6245D98_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarGazeTargets_Offsets_t114388051EFA46E537115827063EF5EDD207AA89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	uint32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		// Marshal.WriteInt32(nativeGazeTargetsData, (Int32)targets.targetCount);
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeGazeTargetsData_2;
		ovrAvatarGazeTargets_t385BB22293BFB6338CE0BA9FCEC655B7BD6453DE L_1 = ___targets0;
		uint32_t L_2 = L_1.___targetCount_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_WriteInt32_m5905B270B90B6938250A1731EB1A18C84F516EED(L_0, L_2, NULL);
		// var targetOffset = ovrAvatarGazeTargets_Offsets.targets;
		il2cpp_codegen_runtime_class_init_inline(ovrAvatarGazeTargets_Offsets_t114388051EFA46E537115827063EF5EDD207AA89_il2cpp_TypeInfo_var);
		int64_t L_3 = ((ovrAvatarGazeTargets_Offsets_t114388051EFA46E537115827063EF5EDD207AA89_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarGazeTargets_Offsets_t114388051EFA46E537115827063EF5EDD207AA89_il2cpp_TypeInfo_var))->___targets_1;
		V_0 = L_3;
		// for (uint index = 0; index < targets.targetCount; index++)
		V_1 = 0;
		goto IL_010e;
	}

IL_001d:
	{
		// var baseOffset = targetOffset + index * Marshal.SizeOf(typeof(ovrAvatarGazeTarget));
		int64_t L_4 = V_0;
		uint32_t L_5 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (ovrAvatarGazeTarget_tED1DE5572DF774BFEE76D65064690A15C6245D98_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_7, NULL);
		V_2 = ((int64_t)il2cpp_codegen_add(L_4, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_5), ((int64_t)L_8)))));
		// Marshal.WriteInt32(new IntPtr(nativeGazeTargetsData.ToInt64() + baseOffset + ovrAvatarGazeTarget_Offsets.id), (int)targets.targets[index].id);
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		int64_t L_9;
		L_9 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeGazeTargetsData_2), NULL);
		int64_t L_10 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ovrAvatarGazeTarget_Offsets_tF592C6CB27FF8F6FA4ACF637CEC59A58E71576B8_il2cpp_TypeInfo_var);
		int32_t L_11 = ((ovrAvatarGazeTarget_Offsets_tF592C6CB27FF8F6FA4ACF637CEC59A58E71576B8_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarGazeTarget_Offsets_tF592C6CB27FF8F6FA4ACF637CEC59A58E71576B8_il2cpp_TypeInfo_var))->___id_0;
		intptr_t L_12;
		memset((&L_12), 0, sizeof(L_12));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_12), ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_9, L_10)), ((int64_t)L_11))), /*hidden argument*/NULL);
		ovrAvatarGazeTargets_t385BB22293BFB6338CE0BA9FCEC655B7BD6453DE L_13 = ___targets0;
		ovrAvatarGazeTargetU5BU5D_tA54878090C639ECE9849C3BB86C4E912936F231F* L_14 = L_13.___targets_1;
		uint32_t L_15 = V_1;
		NullCheck(L_14);
		uint32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___id_0;
		Marshal_WriteInt32_m5905B270B90B6938250A1731EB1A18C84F516EED(L_12, L_16, NULL);
		// scratchBufferFloat[0] = targets.targets[index].worldPosition.x;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		ovrAvatarGazeTargets_t385BB22293BFB6338CE0BA9FCEC655B7BD6453DE L_18 = ___targets0;
		ovrAvatarGazeTargetU5BU5D_tA54878090C639ECE9849C3BB86C4E912936F231F* L_19 = L_18.___targets_1;
		uint32_t L_20 = V_1;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___worldPosition_1);
		float L_22 = L_21->___x_2;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_22);
		// scratchBufferFloat[1] = targets.targets[index].worldPosition.y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		ovrAvatarGazeTargets_t385BB22293BFB6338CE0BA9FCEC655B7BD6453DE L_24 = ___targets0;
		ovrAvatarGazeTargetU5BU5D_tA54878090C639ECE9849C3BB86C4E912936F231F* L_25 = L_24.___targets_1;
		uint32_t L_26 = V_1;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_27 = (&((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___worldPosition_1);
		float L_28 = L_27->___y_3;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_28);
		// scratchBufferFloat[2] = targets.targets[index].worldPosition.z;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		ovrAvatarGazeTargets_t385BB22293BFB6338CE0BA9FCEC655B7BD6453DE L_30 = ___targets0;
		ovrAvatarGazeTargetU5BU5D_tA54878090C639ECE9849C3BB86C4E912936F231F* L_31 = L_30.___targets_1;
		uint32_t L_32 = V_1;
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_33 = (&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___worldPosition_1);
		float L_34 = L_33->___z_4;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_34);
		// Marshal.Copy(scratchBufferFloat, 0, new IntPtr(nativeGazeTargetsData.ToInt64() + baseOffset + ovrAvatarGazeTarget_Offsets.worldPosition), 3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_35 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		int64_t L_36;
		L_36 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeGazeTargetsData_2), NULL);
		int64_t L_37 = V_2;
		int32_t L_38 = ((ovrAvatarGazeTarget_Offsets_tF592C6CB27FF8F6FA4ACF637CEC59A58E71576B8_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarGazeTarget_Offsets_tF592C6CB27FF8F6FA4ACF637CEC59A58E71576B8_il2cpp_TypeInfo_var))->___worldPosition_1;
		intptr_t L_39;
		memset((&L_39), 0, sizeof(L_39));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_39), ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_36, L_37)), ((int64_t)L_38))), /*hidden argument*/NULL);
		Marshal_Copy_m9AC624A4A09A26AC6BF37A42AEA1E5C41F940CC9(L_35, 0, L_39, 3, NULL);
		// Marshal.WriteInt32(new IntPtr(nativeGazeTargetsData.ToInt64() + baseOffset + ovrAvatarGazeTarget_Offsets.type), (int)targets.targets[index].type);
		int64_t L_40;
		L_40 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeGazeTargetsData_2), NULL);
		int64_t L_41 = V_2;
		int32_t L_42 = ((ovrAvatarGazeTarget_Offsets_tF592C6CB27FF8F6FA4ACF637CEC59A58E71576B8_StaticFields*)il2cpp_codegen_static_fields_for(ovrAvatarGazeTarget_Offsets_tF592C6CB27FF8F6FA4ACF637CEC59A58E71576B8_il2cpp_TypeInfo_var))->___type_2;
		intptr_t L_43;
		memset((&L_43), 0, sizeof(L_43));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_43), ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_40, L_41)), ((int64_t)L_42))), /*hidden argument*/NULL);
		ovrAvatarGazeTargets_t385BB22293BFB6338CE0BA9FCEC655B7BD6453DE L_44 = ___targets0;
		ovrAvatarGazeTargetU5BU5D_tA54878090C639ECE9849C3BB86C4E912936F231F* L_45 = L_44.___targets_1;
		uint32_t L_46 = V_1;
		NullCheck(L_45);
		int32_t L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___type_2;
		Marshal_WriteInt32_m5905B270B90B6938250A1731EB1A18C84F516EED(L_43, L_47, NULL);
		// for (uint index = 0; index < targets.targetCount; index++)
		uint32_t L_48 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, 1));
	}

IL_010e:
	{
		// for (uint index = 0; index < targets.targetCount; index++)
		uint32_t L_49 = V_1;
		ovrAvatarGazeTargets_t385BB22293BFB6338CE0BA9FCEC655B7BD6453DE L_50 = ___targets0;
		uint32_t L_51 = L_50.___targetCount_0;
		if ((!(((uint32_t)L_49) >= ((uint32_t)L_51))))
		{
			goto IL_001d;
		}
	}
	{
		// ovrAvatar_UpdateGazeTargets_Native(nativeGazeTargetsData);
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_52 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeGazeTargetsData_2;
		CAPI_ovrAvatar_UpdateGazeTargets_Native_mF0F3FD44C4C05C2798ED6B1D492B2FF4F06C1BAD(L_52, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_UpdateGazeTargets_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_UpdateGazeTargets_Native_mF0F3FD44C4C05C2798ED6B1D492B2FF4F06C1BAD (intptr_t ___targets0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_UpdateGazeTargets", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_UpdateGazeTargets)(___targets0);
	#else
	il2cppPInvokeFunc(___targets0);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_RemoveGazeTargets(System.UInt32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_RemoveGazeTargets_m5B97F299618A372473A15ABB68667949C265DFF8 (uint32_t ___targetCount0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ids1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (uint32_t, uint32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_RemoveGazeTargets", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___ids1' to native representation
	uint32_t* ____ids1_marshaled = NULL;
	if (___ids1 != NULL)
	{
		____ids1_marshaled = reinterpret_cast<uint32_t*>((___ids1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_RemoveGazeTargets)(___targetCount0, ____ids1_marshaled);
	#else
	il2cppPInvokeFunc(___targetCount0, ____ids1_marshaled);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_UpdateLights(ovrAvatarLights)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_UpdateLights_mA7BCF1C28488E655504C55FF1E3AAEA23A63AA7A (ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE ___lights0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0632DB775ADE52DAFF859F25D994599CB49C686D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227FE6786FEEFA768F545DB43029719EF0C3FC8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BB648AB314E5ADF7A4A2179C85F72CC60FE5549);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral601F2186767331699A4F498733D910E0608B9400);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A3EB8152D46D206E084E9FFE53191BE45C5214);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarLight_tDE7CCF145353DF293100FBA3976B0937532E6656_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint32_t V_2 = 0;
	int64_t V_3 = 0;
	{
		// scratchBufferFloat[0] = lights.ambientIntensity;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE L_1 = ___lights0;
		float L_2 = L_1.___ambientIntensity_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_2);
		// Marshal.Copy(scratchBufferFloat, 0, nativeAvatarLightsData, 1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		intptr_t L_4 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeAvatarLightsData_3;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m9AC624A4A09A26AC6BF37A42AEA1E5C41F940CC9(L_3, 0, L_4, 1, NULL);
		// Marshal.WriteInt32(new IntPtr(nativeAvatarLightsData.ToInt64() + Marshal.OffsetOf(typeof(ovrAvatarLights), "lightCount").ToInt64()), (int)lights.lightCount);
		int64_t L_5;
		L_5 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeAvatarLightsData_3), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		intptr_t L_8;
		L_8 = Marshal_OffsetOf_m106F2D2FC0C00CAD2982B489C1FB58B031729310(L_7, _stringLiteral601F2186767331699A4F498733D910E0608B9400, NULL);
		V_1 = L_8;
		int64_t L_9;
		L_9 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_1), NULL);
		intptr_t L_10;
		memset((&L_10), 0, sizeof(L_10));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_10), ((int64_t)il2cpp_codegen_add(L_5, L_9)), /*hidden argument*/NULL);
		ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE L_11 = ___lights0;
		uint32_t L_12 = L_11.___lightCount_1;
		Marshal_WriteInt32_m5905B270B90B6938250A1731EB1A18C84F516EED(L_10, L_12, NULL);
		// var lightsOffset = Marshal.OffsetOf(typeof(ovrAvatarLights), "lights").ToInt64();
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		intptr_t L_15;
		L_15 = Marshal_OffsetOf_m106F2D2FC0C00CAD2982B489C1FB58B031729310(L_14, _stringLiteral227FE6786FEEFA768F545DB43029719EF0C3FC8F, NULL);
		V_1 = L_15;
		int64_t L_16;
		L_16 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_1), NULL);
		V_0 = L_16;
		// for (uint index = 0; index < lights.lightCount; index++)
		V_2 = 0;
		goto IL_0333;
	}

IL_0079:
	{
		// var baseOffset = lightsOffset + index * Marshal.SizeOf(typeof(ovrAvatarLight));
		int64_t L_17 = V_0;
		uint32_t L_18 = V_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (ovrAvatarLight_tDE7CCF145353DF293100FBA3976B0937532E6656_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_21;
		L_21 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_20, NULL);
		V_3 = ((int64_t)il2cpp_codegen_add(L_17, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_18), ((int64_t)L_21)))));
		// Marshal.WriteInt32(new IntPtr(nativeAvatarLightsData.ToInt64() + baseOffset + Marshal.OffsetOf(typeof(ovrAvatarLight), "id").ToInt64()), (int)lights.lights[index].id);
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		int64_t L_22;
		L_22 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeAvatarLightsData_3), NULL);
		int64_t L_23 = V_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (ovrAvatarLight_tDE7CCF145353DF293100FBA3976B0937532E6656_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		intptr_t L_26;
		L_26 = Marshal_OffsetOf_m106F2D2FC0C00CAD2982B489C1FB58B031729310(L_25, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, NULL);
		V_1 = L_26;
		int64_t L_27;
		L_27 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_1), NULL);
		intptr_t L_28;
		memset((&L_28), 0, sizeof(L_28));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_28), ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_22, L_23)), L_27)), /*hidden argument*/NULL);
		ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE L_29 = ___lights0;
		ovrAvatarLightU5BU5D_t5BF1241C819241561ED81B7BA7709959F352B84B* L_30 = L_29.___lights_2;
		uint32_t L_31 = V_2;
		NullCheck(L_30);
		uint32_t L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___id_0;
		Marshal_WriteInt32_m5905B270B90B6938250A1731EB1A18C84F516EED(L_28, L_32, NULL);
		// Marshal.WriteInt32(new IntPtr(nativeAvatarLightsData.ToInt64() + baseOffset + Marshal.OffsetOf(typeof(ovrAvatarLight), "type").ToInt64()), (int)lights.lights[index].type);
		int64_t L_33;
		L_33 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeAvatarLightsData_3), NULL);
		int64_t L_34 = V_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (ovrAvatarLight_tDE7CCF145353DF293100FBA3976B0937532E6656_0_0_0_var) };
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		intptr_t L_37;
		L_37 = Marshal_OffsetOf_m106F2D2FC0C00CAD2982B489C1FB58B031729310(L_36, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		V_1 = L_37;
		int64_t L_38;
		L_38 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_1), NULL);
		intptr_t L_39;
		memset((&L_39), 0, sizeof(L_39));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_39), ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_33, L_34)), L_38)), /*hidden argument*/NULL);
		ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE L_40 = ___lights0;
		ovrAvatarLightU5BU5D_t5BF1241C819241561ED81B7BA7709959F352B84B* L_41 = L_40.___lights_2;
		uint32_t L_42 = V_2;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___type_1;
		Marshal_WriteInt32_m5905B270B90B6938250A1731EB1A18C84F516EED(L_39, L_43, NULL);
		// scratchBufferFloat[0] = lights.lights[index].intensity;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_44 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE L_45 = ___lights0;
		ovrAvatarLightU5BU5D_t5BF1241C819241561ED81B7BA7709959F352B84B* L_46 = L_45.___lights_2;
		uint32_t L_47 = V_2;
		NullCheck(L_46);
		float L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___intensity_2;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_48);
		// Marshal.Copy(scratchBufferFloat, 0, new IntPtr(nativeAvatarLightsData.ToInt64() + baseOffset + Marshal.OffsetOf(typeof(ovrAvatarLight), "intensity").ToInt64()), 1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_49 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		int64_t L_50;
		L_50 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeAvatarLightsData_3), NULL);
		int64_t L_51 = V_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (ovrAvatarLight_tDE7CCF145353DF293100FBA3976B0937532E6656_0_0_0_var) };
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		intptr_t L_54;
		L_54 = Marshal_OffsetOf_m106F2D2FC0C00CAD2982B489C1FB58B031729310(L_53, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		V_1 = L_54;
		int64_t L_55;
		L_55 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_1), NULL);
		intptr_t L_56;
		memset((&L_56), 0, sizeof(L_56));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_56), ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_50, L_51)), L_55)), /*hidden argument*/NULL);
		Marshal_Copy_m9AC624A4A09A26AC6BF37A42AEA1E5C41F940CC9(L_49, 0, L_56, 1, NULL);
		// scratchBufferFloat[0] = lights.lights[index].worldDirection.x;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_57 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE L_58 = ___lights0;
		ovrAvatarLightU5BU5D_t5BF1241C819241561ED81B7BA7709959F352B84B* L_59 = L_58.___lights_2;
		uint32_t L_60 = V_2;
		NullCheck(L_59);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_61 = (&((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_60)))->___worldDirection_3);
		float L_62 = L_61->___x_2;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_62);
		// scratchBufferFloat[1] = lights.lights[index].worldDirection.y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_63 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE L_64 = ___lights0;
		ovrAvatarLightU5BU5D_t5BF1241C819241561ED81B7BA7709959F352B84B* L_65 = L_64.___lights_2;
		uint32_t L_66 = V_2;
		NullCheck(L_65);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_67 = (&((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___worldDirection_3);
		float L_68 = L_67->___y_3;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_68);
		// scratchBufferFloat[2] = lights.lights[index].worldDirection.z;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_69 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE L_70 = ___lights0;
		ovrAvatarLightU5BU5D_t5BF1241C819241561ED81B7BA7709959F352B84B* L_71 = L_70.___lights_2;
		uint32_t L_72 = V_2;
		NullCheck(L_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_73 = (&((L_71)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_72)))->___worldDirection_3);
		float L_74 = L_73->___z_4;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_74);
		// Marshal.Copy(scratchBufferFloat, 0, new IntPtr(nativeAvatarLightsData.ToInt64() + baseOffset + Marshal.OffsetOf(typeof(ovrAvatarLight), "worldDirection").ToInt64()), 3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_75 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		int64_t L_76;
		L_76 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeAvatarLightsData_3), NULL);
		int64_t L_77 = V_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (ovrAvatarLight_tDE7CCF145353DF293100FBA3976B0937532E6656_0_0_0_var) };
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_78, NULL);
		intptr_t L_80;
		L_80 = Marshal_OffsetOf_m106F2D2FC0C00CAD2982B489C1FB58B031729310(L_79, _stringLiteral65A3EB8152D46D206E084E9FFE53191BE45C5214, NULL);
		V_1 = L_80;
		int64_t L_81;
		L_81 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_1), NULL);
		intptr_t L_82;
		memset((&L_82), 0, sizeof(L_82));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_82), ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_76, L_77)), L_81)), /*hidden argument*/NULL);
		Marshal_Copy_m9AC624A4A09A26AC6BF37A42AEA1E5C41F940CC9(L_75, 0, L_82, 3, NULL);
		// scratchBufferFloat[0] = lights.lights[index].worldPosition.x;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_83 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE L_84 = ___lights0;
		ovrAvatarLightU5BU5D_t5BF1241C819241561ED81B7BA7709959F352B84B* L_85 = L_84.___lights_2;
		uint32_t L_86 = V_2;
		NullCheck(L_85);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_87 = (&((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___worldPosition_4);
		float L_88 = L_87->___x_2;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_88);
		// scratchBufferFloat[1] = lights.lights[index].worldPosition.y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_89 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE L_90 = ___lights0;
		ovrAvatarLightU5BU5D_t5BF1241C819241561ED81B7BA7709959F352B84B* L_91 = L_90.___lights_2;
		uint32_t L_92 = V_2;
		NullCheck(L_91);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_93 = (&((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___worldPosition_4);
		float L_94 = L_93->___y_3;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_94);
		// scratchBufferFloat[2] = lights.lights[index].worldPosition.z;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_95 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE L_96 = ___lights0;
		ovrAvatarLightU5BU5D_t5BF1241C819241561ED81B7BA7709959F352B84B* L_97 = L_96.___lights_2;
		uint32_t L_98 = V_2;
		NullCheck(L_97);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_99 = (&((L_97)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_98)))->___worldPosition_4);
		float L_100 = L_99->___z_4;
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_100);
		// Marshal.Copy(scratchBufferFloat, 0, new IntPtr(nativeAvatarLightsData.ToInt64() + baseOffset + Marshal.OffsetOf(typeof(ovrAvatarLight), "worldPosition").ToInt64()), 3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_101 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		int64_t L_102;
		L_102 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeAvatarLightsData_3), NULL);
		int64_t L_103 = V_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_104 = { reinterpret_cast<intptr_t> (ovrAvatarLight_tDE7CCF145353DF293100FBA3976B0937532E6656_0_0_0_var) };
		Type_t* L_105;
		L_105 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_104, NULL);
		intptr_t L_106;
		L_106 = Marshal_OffsetOf_m106F2D2FC0C00CAD2982B489C1FB58B031729310(L_105, _stringLiteral2BB648AB314E5ADF7A4A2179C85F72CC60FE5549, NULL);
		V_1 = L_106;
		int64_t L_107;
		L_107 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_1), NULL);
		intptr_t L_108;
		memset((&L_108), 0, sizeof(L_108));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_108), ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_102, L_103)), L_107)), /*hidden argument*/NULL);
		Marshal_Copy_m9AC624A4A09A26AC6BF37A42AEA1E5C41F940CC9(L_101, 0, L_108, 3, NULL);
		// scratchBufferFloat[0] = lights.lights[index].range;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_109 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE L_110 = ___lights0;
		ovrAvatarLightU5BU5D_t5BF1241C819241561ED81B7BA7709959F352B84B* L_111 = L_110.___lights_2;
		uint32_t L_112 = V_2;
		NullCheck(L_111);
		float L_113 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)))->___range_5;
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_113);
		// Marshal.Copy(scratchBufferFloat, 0, new IntPtr(nativeAvatarLightsData.ToInt64() + baseOffset + Marshal.OffsetOf(typeof(ovrAvatarLight), "range").ToInt64()), 1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_114 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		int64_t L_115;
		L_115 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeAvatarLightsData_3), NULL);
		int64_t L_116 = V_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_117 = { reinterpret_cast<intptr_t> (ovrAvatarLight_tDE7CCF145353DF293100FBA3976B0937532E6656_0_0_0_var) };
		Type_t* L_118;
		L_118 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_117, NULL);
		intptr_t L_119;
		L_119 = Marshal_OffsetOf_m106F2D2FC0C00CAD2982B489C1FB58B031729310(L_118, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		V_1 = L_119;
		int64_t L_120;
		L_120 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_1), NULL);
		intptr_t L_121;
		memset((&L_121), 0, sizeof(L_121));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_121), ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_115, L_116)), L_120)), /*hidden argument*/NULL);
		Marshal_Copy_m9AC624A4A09A26AC6BF37A42AEA1E5C41F940CC9(L_114, 0, L_121, 1, NULL);
		// scratchBufferFloat[0] = lights.lights[index].spotAngleDeg;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_122 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE L_123 = ___lights0;
		ovrAvatarLightU5BU5D_t5BF1241C819241561ED81B7BA7709959F352B84B* L_124 = L_123.___lights_2;
		uint32_t L_125 = V_2;
		NullCheck(L_124);
		float L_126 = ((L_124)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_125)))->___spotAngleDeg_6;
		NullCheck(L_122);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_126);
		// Marshal.Copy(scratchBufferFloat, 0, new IntPtr(nativeAvatarLightsData.ToInt64() + baseOffset + Marshal.OffsetOf(typeof(ovrAvatarLight), "spotAngleDeg").ToInt64()), 1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_127 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		int64_t L_128;
		L_128 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeAvatarLightsData_3), NULL);
		int64_t L_129 = V_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_130 = { reinterpret_cast<intptr_t> (ovrAvatarLight_tDE7CCF145353DF293100FBA3976B0937532E6656_0_0_0_var) };
		Type_t* L_131;
		L_131 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_130, NULL);
		intptr_t L_132;
		L_132 = Marshal_OffsetOf_m106F2D2FC0C00CAD2982B489C1FB58B031729310(L_131, _stringLiteral0632DB775ADE52DAFF859F25D994599CB49C686D, NULL);
		V_1 = L_132;
		int64_t L_133;
		L_133 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_1), NULL);
		intptr_t L_134;
		memset((&L_134), 0, sizeof(L_134));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_134), ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_128, L_129)), L_133)), /*hidden argument*/NULL);
		Marshal_Copy_m9AC624A4A09A26AC6BF37A42AEA1E5C41F940CC9(L_127, 0, L_134, 1, NULL);
		// for (uint index = 0; index < lights.lightCount; index++)
		uint32_t L_135 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, 1));
	}

IL_0333:
	{
		// for (uint index = 0; index < lights.lightCount; index++)
		uint32_t L_136 = V_2;
		ovrAvatarLights_t20053A761144CE79BBECE76424BBC9B89297F7BE L_137 = ___lights0;
		uint32_t L_138 = L_137.___lightCount_1;
		if ((!(((uint32_t)L_136) >= ((uint32_t)L_138))))
		{
			goto IL_0079;
		}
	}
	{
		// ovrAvatar_UpdateLights_Native(nativeAvatarLightsData);
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_139 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeAvatarLightsData_3;
		CAPI_ovrAvatar_UpdateLights_Native_mBC2D6F56861D9217704A48D9A9B11E4D7BDC7AD1(L_139, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_UpdateLights_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_UpdateLights_Native_mBC2D6F56861D9217704A48D9A9B11E4D7BDC7AD1 (intptr_t ___lights0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_UpdateLights", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_UpdateLights)(___lights0);
	#else
	il2cppPInvokeFunc(___lights0);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_RemoveLights(System.UInt32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_RemoveLights_m88274E3C3A4B836878A86BBC1DA1365D24C49291 (uint32_t ___lightCount0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ids1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (uint32_t, uint32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_RemoveLights", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___ids1' to native representation
	uint32_t* ____ids1_marshaled = NULL;
	if (___ids1 != NULL)
	{
		____ids1_marshaled = reinterpret_cast<uint32_t*>((___ids1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_RemoveLights)(___lightCount0, ____ids1_marshaled);
	#else
	il2cppPInvokeFunc(___lightCount0, ____ids1_marshaled);
	#endif

}
// System.Void Oculus.Avatar.CAPI::LoggingCallback(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_LoggingCallback_m8A2F2B43C7B62C6698C70B51F4CB60F2945E2EAA (intptr_t ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string csharpStr = Marshal.PtrToStringAnsi(str);
		intptr_t L_0 = ___str0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_RegisterLoggingCallback(Oculus.Avatar.CAPI/LoggingDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_RegisterLoggingCallback_m3CBD5A9031A717F5714A0B3F316777D35BBBDAF9 (LoggingDelegate_t76BE1328321D58DD99A77FF17F3328AC6EC0AF8B* ___callback0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_RegisterLoggingCallback", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_RegisterLoggingCallback)(____callback0_marshaled);
	#else
	il2cppPInvokeFunc(____callback0_marshaled);
	#endif

}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_SetLoggingLevel(ovrAvatarLogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_SetLoggingLevel_mBB65B4405293AED5FBDD4E198AD15D6CF0BC42BF (int32_t ___level0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_SetLoggingLevel", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_SetLoggingLevel)(___level0);
	#else
	il2cppPInvokeFunc(___level0);
	#endif

}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatar_GetDebugTransforms_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatar_GetDebugTransforms_Native_m607C11A9FAE9B87C956C0F0880D833D376691ACB (intptr_t ___count0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_GetDebugTransforms", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatar_GetDebugTransforms)(___count0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___count0);
	#endif

	return returnValue;
}
// System.IntPtr Oculus.Avatar.CAPI::ovrAvatar_GetDebugLines_Native(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovrAvatar_GetDebugLines_Native_mB3A6B8154F11D9E397EB6937CCE9656C589C249D (intptr_t ___count0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_GetDebugLines", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrAvatar_GetDebugLines)(___count0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___count0);
	#endif

	return returnValue;
}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_DrawDebugLines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_DrawDebugLines_mB07DE30E3EF9C82E7B91665BFC156DA425EDAA1A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OvrAvatar_t555D4012E0BDBC9ED5695214CD086194AA8D8E58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F6EDA7F146F65D72B4809F9E8F843CC687A82AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarDebugLine_t631F9BEAF4CC9320B9008D89790146CCC574DFF8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrAvatarDebugTransform_t0774ED1BADA0CBF33966954A06370CB9979BD93F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ovrAvatarDebugLine_t631F9BEAF4CC9320B9008D89790146CCC574DFF8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ovrAvatarDebugTransform_t0774ED1BADA0CBF33966954A06370CB9979BD93F V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	{
		// IntPtr debugLinePtr = ovrAvatar_GetDebugLines_Native(DebugLineCountData);
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___DebugLineCountData_4;
		intptr_t L_1;
		L_1 = CAPI_ovrAvatar_GetDebugLines_Native_mB3A6B8154F11D9E397EB6937CCE9656C589C249D(L_0, NULL);
		V_0 = L_1;
		// int lineCount = Marshal.ReadInt32(DebugLineCountData);
		intptr_t L_2 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___DebugLineCountData_4;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Marshal_ReadInt32_mDF5F7A01E6F50C03DBB936ACF229CE5345B0DE18(L_2, NULL);
		V_1 = L_3;
		// ovrAvatarDebugLine tempLine = new ovrAvatarDebugLine();
		il2cpp_codegen_initobj((&V_2), sizeof(ovrAvatarDebugLine_t631F9BEAF4CC9320B9008D89790146CCC574DFF8));
		// for (int i = 0; i < lineCount; i++)
		V_4 = 0;
		goto IL_01b5;
	}

IL_0026:
	{
		// var offset = i * Marshal.SizeOf(typeof(ovrAvatarDebugLine));
		int32_t L_4 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (ovrAvatarDebugLine_t631F9BEAF4CC9320B9008D89790146CCC574DFF8_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_6, NULL);
		V_5 = ((int32_t)il2cpp_codegen_multiply(L_4, L_7));
		// Marshal.Copy(new IntPtr(debugLinePtr.ToInt64() + offset), scratchBufferFloat, 0, 9);
		int64_t L_8;
		L_8 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_0), NULL);
		int32_t L_9 = V_5;
		intptr_t L_10;
		memset((&L_10), 0, sizeof(L_10));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_10), ((int64_t)il2cpp_codegen_add(L_8, ((int64_t)L_9))), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775(L_10, L_11, 0, ((int32_t)9), NULL);
		// tempLine.startPoint.x = scratchBufferFloat[0];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&(&V_2)->___startPoint_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		NullCheck(L_13);
		int32_t L_14 = 0;
		float L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		L_12->___x_2 = L_15;
		// tempLine.startPoint.y = scratchBufferFloat[1];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&(&V_2)->___startPoint_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		NullCheck(L_17);
		int32_t L_18 = 1;
		float L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		L_16->___y_3 = L_19;
		// tempLine.startPoint.z = -scratchBufferFloat[2];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&(&V_2)->___startPoint_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		NullCheck(L_21);
		int32_t L_22 = 2;
		float L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		L_20->___z_4 = ((-L_23));
		// tempLine.endPoint.x = scratchBufferFloat[3];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = (&(&V_2)->___endPoint_1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		NullCheck(L_25);
		int32_t L_26 = 3;
		float L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		L_24->___x_2 = L_27;
		// tempLine.endPoint.y = scratchBufferFloat[4];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&(&V_2)->___endPoint_1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		NullCheck(L_29);
		int32_t L_30 = 4;
		float L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		L_28->___y_3 = L_31;
		// tempLine.endPoint.z = -scratchBufferFloat[5];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = (&(&V_2)->___endPoint_1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		NullCheck(L_33);
		int32_t L_34 = 5;
		float L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		L_32->___z_4 = ((-L_35));
		// tempLine.color.x = scratchBufferFloat[6];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_36 = (&(&V_2)->___color_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_37 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		NullCheck(L_37);
		int32_t L_38 = 6;
		float L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		L_36->___x_2 = L_39;
		// tempLine.color.y = scratchBufferFloat[7];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_40 = (&(&V_2)->___color_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_41 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		NullCheck(L_41);
		int32_t L_42 = 7;
		float L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		L_40->___y_3 = L_43;
		// tempLine.color.z = scratchBufferFloat[8];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_44 = (&(&V_2)->___color_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		NullCheck(L_45);
		int32_t L_46 = 8;
		float L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		L_44->___z_4 = L_47;
		// tempLine.context = (ovrAvatarDebugContext)Marshal.ReadInt32(new IntPtr(debugLinePtr.ToInt64() + offset + Marshal.OffsetOf(typeof(ovrAvatarDebugLine), "context").ToInt64()));
		int64_t L_48;
		L_48 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_0), NULL);
		int32_t L_49 = V_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (ovrAvatarDebugLine_t631F9BEAF4CC9320B9008D89790146CCC574DFF8_0_0_0_var) };
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		intptr_t L_52;
		L_52 = Marshal_OffsetOf_m106F2D2FC0C00CAD2982B489C1FB58B031729310(L_51, _stringLiteral6F6EDA7F146F65D72B4809F9E8F843CC687A82AE, NULL);
		V_6 = L_52;
		int64_t L_53;
		L_53 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_6), NULL);
		intptr_t L_54;
		memset((&L_54), 0, sizeof(L_54));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_54), ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_48, ((int64_t)L_49))), L_53)), /*hidden argument*/NULL);
		int32_t L_55;
		L_55 = Marshal_ReadInt32_mDF5F7A01E6F50C03DBB936ACF229CE5345B0DE18(L_54, NULL);
		(&V_2)->___context_3 = L_55;
		// tempLine.text = Marshal.ReadIntPtr(new IntPtr(debugLinePtr.ToInt64() + offset + Marshal.OffsetOf(typeof(ovrAvatarDebugLine), "text").ToInt64()));
		int64_t L_56;
		L_56 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_0), NULL);
		int32_t L_57 = V_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (ovrAvatarDebugLine_t631F9BEAF4CC9320B9008D89790146CCC574DFF8_0_0_0_var) };
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		intptr_t L_60;
		L_60 = Marshal_OffsetOf_m106F2D2FC0C00CAD2982B489C1FB58B031729310(L_59, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0, NULL);
		V_6 = L_60;
		int64_t L_61;
		L_61 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_6), NULL);
		intptr_t L_62;
		memset((&L_62), 0, sizeof(L_62));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_62), ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_56, ((int64_t)L_57))), L_61)), /*hidden argument*/NULL);
		intptr_t L_63;
		L_63 = Marshal_ReadIntPtr_m6E8694E5CB4FE576B3CAE1A002B03C211D393826(L_62, NULL);
		(&V_2)->___text_4 = L_63;
		// Debug.DrawLine(tempLine.startPoint, tempLine.endPoint, new Color(tempLine.color.x, tempLine.color.y, tempLine.color.z));
		ovrAvatarDebugLine_t631F9BEAF4CC9320B9008D89790146CCC574DFF8 L_64 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = L_64.___startPoint_0;
		ovrAvatarDebugLine_t631F9BEAF4CC9320B9008D89790146CCC574DFF8 L_66 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = L_66.___endPoint_1;
		ovrAvatarDebugLine_t631F9BEAF4CC9320B9008D89790146CCC574DFF8 L_68 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = L_68.___color_2;
		float L_70 = L_69.___x_2;
		ovrAvatarDebugLine_t631F9BEAF4CC9320B9008D89790146CCC574DFF8 L_71 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = L_71.___color_2;
		float L_73 = L_72.___y_3;
		ovrAvatarDebugLine_t631F9BEAF4CC9320B9008D89790146CCC574DFF8 L_74 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = L_74.___color_2;
		float L_76 = L_75.___z_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_77;
		memset((&L_77), 0, sizeof(L_77));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_77), L_70, L_73, L_76, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_65, L_67, L_77, NULL);
		// for (int i = 0; i < lineCount; i++)
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01b5:
	{
		// for (int i = 0; i < lineCount; i++)
		int32_t L_79 = V_4;
		int32_t L_80 = V_1;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_0026;
		}
	}
	{
		// debugLinePtr = ovrAvatar_GetDebugTransforms_Native(DebugLineCountData);
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_81 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___DebugLineCountData_4;
		intptr_t L_82;
		L_82 = CAPI_ovrAvatar_GetDebugTransforms_Native_m607C11A9FAE9B87C956C0F0880D833D376691ACB(L_81, NULL);
		V_0 = L_82;
		// lineCount = Marshal.ReadInt32(DebugLineCountData);
		intptr_t L_83 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___DebugLineCountData_4;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_84;
		L_84 = Marshal_ReadInt32_mDF5F7A01E6F50C03DBB936ACF229CE5345B0DE18(L_83, NULL);
		V_1 = L_84;
		// ovrAvatarDebugTransform tempTrans = new ovrAvatarDebugTransform();
		il2cpp_codegen_initobj((&V_3), sizeof(ovrAvatarDebugTransform_t0774ED1BADA0CBF33966954A06370CB9979BD93F));
		// for (int i = 0; i < lineCount; i++)
		V_7 = 0;
		goto IL_03a1;
	}

IL_01e3:
	{
		// var offset = i * Marshal.SizeOf(typeof(ovrAvatarDebugTransform));
		int32_t L_85 = V_7;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (ovrAvatarDebugTransform_t0774ED1BADA0CBF33966954A06370CB9979BD93F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_87;
		L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_88;
		L_88 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_87, NULL);
		V_8 = ((int32_t)il2cpp_codegen_multiply(L_85, L_88));
		// Marshal.Copy(new IntPtr(debugLinePtr.ToInt64() + offset), scratchBufferFloat, 0, 10);
		int64_t L_89;
		L_89 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_0), NULL);
		int32_t L_90 = V_8;
		intptr_t L_91;
		memset((&L_91), 0, sizeof(L_91));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_91), ((int64_t)il2cpp_codegen_add(L_89, ((int64_t)L_90))), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_92 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775(L_91, L_92, 0, ((int32_t)10), NULL);
		// OvrAvatar.ConvertTransform(scratchBufferFloat, ref tempTrans.transform);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_93 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5;
		ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6* L_94 = (&(&V_3)->___transform_0);
		il2cpp_codegen_runtime_class_init_inline(OvrAvatar_t555D4012E0BDBC9ED5695214CD086194AA8D8E58_il2cpp_TypeInfo_var);
		OvrAvatar_ConvertTransform_m58603F7EEDA017FD21DCBE45BCEF03F8275E0CFB(L_93, L_94, NULL);
		// OvrAvatar.ConvertTransform(tempTrans.transform, debugLineGo.transform);
		ovrAvatarDebugTransform_t0774ED1BADA0CBF33966954A06370CB9979BD93F L_95 = V_3;
		ovrAvatarTransform_tB45B7A6BF679A23CCE1A01DDCB35668D25E973F6 L_96 = L_95.___transform_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_97 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___debugLineGo_6;
		NullCheck(L_97);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_98;
		L_98 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_97, NULL);
		OvrAvatar_ConvertTransform_m35FADCB6EFACE351185944CEDD4EFFCD6DADAD7A(L_96, L_98, NULL);
		// tempTrans.context = (ovrAvatarDebugContext)Marshal.ReadInt32(new IntPtr(debugLinePtr.ToInt64() + offset + Marshal.OffsetOf(typeof(ovrAvatarDebugTransform), "context").ToInt64()));
		int64_t L_99;
		L_99 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_0), NULL);
		int32_t L_100 = V_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (ovrAvatarDebugTransform_t0774ED1BADA0CBF33966954A06370CB9979BD93F_0_0_0_var) };
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		intptr_t L_103;
		L_103 = Marshal_OffsetOf_m106F2D2FC0C00CAD2982B489C1FB58B031729310(L_102, _stringLiteral6F6EDA7F146F65D72B4809F9E8F843CC687A82AE, NULL);
		V_6 = L_103;
		int64_t L_104;
		L_104 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_6), NULL);
		intptr_t L_105;
		memset((&L_105), 0, sizeof(L_105));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_105), ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_99, ((int64_t)L_100))), L_104)), /*hidden argument*/NULL);
		int32_t L_106;
		L_106 = Marshal_ReadInt32_mDF5F7A01E6F50C03DBB936ACF229CE5345B0DE18(L_105, NULL);
		(&V_3)->___context_1 = L_106;
		// tempTrans.text = Marshal.ReadIntPtr(new IntPtr(debugLinePtr.ToInt64() + offset + Marshal.OffsetOf(typeof(ovrAvatarDebugTransform), "text").ToInt64()));
		int64_t L_107;
		L_107 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_0), NULL);
		int32_t L_108 = V_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (ovrAvatarDebugTransform_t0774ED1BADA0CBF33966954A06370CB9979BD93F_0_0_0_var) };
		Type_t* L_110;
		L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
		intptr_t L_111;
		L_111 = Marshal_OffsetOf_m106F2D2FC0C00CAD2982B489C1FB58B031729310(L_110, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0, NULL);
		V_6 = L_111;
		int64_t L_112;
		L_112 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_6), NULL);
		intptr_t L_113;
		memset((&L_113), 0, sizeof(L_113));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_113), ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_107, ((int64_t)L_108))), L_112)), /*hidden argument*/NULL);
		intptr_t L_114;
		L_114 = Marshal_ReadIntPtr_m6E8694E5CB4FE576B3CAE1A002B03C211D393826(L_113, NULL);
		(&V_3)->___text_2 = L_114;
		// Vector3 transUp = SCALE_FACTOR * debugLineGo.transform.TransformVector(Vector3.up);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_115 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___debugLineGo_6;
		NullCheck(L_115);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_116;
		L_116 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_115, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		NullCheck(L_116);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
		L_118 = Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98(L_116, L_117, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((0.100000001f), L_118, NULL);
		V_9 = L_119;
		// Vector3 transRight = SCALE_FACTOR * debugLineGo.transform.TransformVector(Vector3.right);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_120 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___debugLineGo_6;
		NullCheck(L_120);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_121;
		L_121 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_120, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122;
		L_122 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		NullCheck(L_121);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_123;
		L_123 = Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98(L_121, L_122, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124;
		L_124 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((0.100000001f), L_123, NULL);
		V_10 = L_124;
		// Vector3 transFwd = SCALE_FACTOR * debugLineGo.transform.TransformVector(Vector3.forward);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___debugLineGo_6;
		NullCheck(L_125);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_126;
		L_126 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_125, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		L_127 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		NullCheck(L_126);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128;
		L_128 = Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98(L_126, L_127, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
		L_129 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((0.100000001f), L_128, NULL);
		V_11 = L_129;
		// Debug.DrawLine(debugLineGo.transform.position, debugLineGo.transform.position + transUp, Color.green);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_130 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___debugLineGo_6;
		NullCheck(L_130);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_131;
		L_131 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_130, NULL);
		NullCheck(L_131);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132;
		L_132 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_131, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_133 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___debugLineGo_6;
		NullCheck(L_133);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_134;
		L_134 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_133, NULL);
		NullCheck(L_134);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135;
		L_135 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_134, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137;
		L_137 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_135, L_136, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_138;
		L_138 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_132, L_137, L_138, NULL);
		// Debug.DrawLine(debugLineGo.transform.position, debugLineGo.transform.position + transRight, Color.red);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_139 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___debugLineGo_6;
		NullCheck(L_139);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_140;
		L_140 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_139, NULL);
		NullCheck(L_140);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141;
		L_141 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_140, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_142 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___debugLineGo_6;
		NullCheck(L_142);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_143;
		L_143 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_142, NULL);
		NullCheck(L_143);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144;
		L_144 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_143, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146;
		L_146 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_144, L_145, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_147;
		L_147 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_141, L_146, L_147, NULL);
		// Debug.DrawLine(debugLineGo.transform.position, debugLineGo.transform.position + transFwd, Color.blue);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_148 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___debugLineGo_6;
		NullCheck(L_148);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_149;
		L_149 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_148, NULL);
		NullCheck(L_149);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150;
		L_150 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_149, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_151 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___debugLineGo_6;
		NullCheck(L_151);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_152;
		L_152 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_151, NULL);
		NullCheck(L_152);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153;
		L_153 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_152, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_155;
		L_155 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_153, L_154, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_156;
		L_156 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_150, L_155, L_156, NULL);
		// for (int i = 0; i < lineCount; i++)
		int32_t L_157 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_157, 1));
	}

IL_03a1:
	{
		// for (int i = 0; i < lineCount; i++)
		int32_t L_158 = V_7;
		int32_t L_159 = V_1;
		if ((((int32_t)L_158) < ((int32_t)L_159)))
		{
			goto IL_01e3;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Avatar.CAPI::ovrAvatar_SetDebugDrawContext(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovrAvatar_SetDebugDrawContext_m4EC6C7C8EC397D700FF206CC3B83AD3C3E223209 (uint32_t ___context0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_ovravatarloader_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ovravatarloader"), "ovrAvatar_SetDebugDrawContext", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_ovravatarloader_INTERNAL
	reinterpret_cast<PInvokeFunc>(ovrAvatar_SetDebugDrawContext)(___context0);
	#else
	il2cppPInvokeFunc(___context0);
	#endif

}
// System.Boolean Oculus.Avatar.CAPI::SendEvent(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_SendEvent_m3F7638F7F9534B4DC79412D0AD5538957C92C808 (String_t* ___name0, String_t* ___param1, String_t* ___source2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRP_1_30_0_tA483F6EBCC533D0BD82270B4CEC48F7A1FDE15F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C3B5C1225A47534B327C679815FC500F4D0BC4D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	String_t* G_B8_2 = NULL;
	try
	{// begin try (depth: 1)
		{
			// if (ovrPluginVersion == null)
			il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
			Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_0 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___ovrPluginVersion_9;
			bool L_1;
			L_1 = Version_op_Equality_mED378603AE784D5ACEDB8F4B250F50773B331D4B(L_0, (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)NULL, NULL);
			if (!L_1)
			{
				goto IL_003f_1;
			}
		}
		{
			// string version = ovrp_GetVersion();
			il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
			String_t* L_2;
			L_2 = CAPI_ovrp_GetVersion_m5641289B86C1F933B657086E9E723CCAB5D8A5F1(NULL);
			V_0 = L_2;
			// if (!String.IsNullOrEmpty(version))
			String_t* L_3 = V_0;
			bool L_4;
			L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
			if (L_4)
			{
				goto IL_0032_1;
			}
		}
		{
			// ovrPluginVersion = new System.Version(version.Split('-')[0]);
			String_t* L_5 = V_0;
			NullCheck(L_5);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
			L_6 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_5, ((int32_t)45), 0, NULL);
			NullCheck(L_6);
			int32_t L_7 = 0;
			String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_9 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)il2cpp_codegen_object_new(Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
			NullCheck(L_9);
			Version__ctor_m52D06833AE6481C0A9B72085BDC4D09A723CEF7F(L_9, L_8, NULL);
			il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
			((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___ovrPluginVersion_9 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___ovrPluginVersion_9), (void*)L_9);
			goto IL_003f_1;
		}

IL_0032_1:
		{
			// ovrPluginVersion = new System.Version(0, 0, 0);
			Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_10 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)il2cpp_codegen_object_new(Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
			NullCheck(L_10);
			Version__ctor_m7D8EE608025AE8D7AD8867718BC0AC96A2CFC1F5(L_10, 0, 0, 0, NULL);
			il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
			((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___ovrPluginVersion_9 = L_10;
			Il2CppCodeGenWriteBarrier((void**)(&((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___ovrPluginVersion_9), (void*)L_10);
		}

IL_003f_1:
		{
			// if (ovrPluginVersion >= OVRP_1_30_0.version)
			il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
			Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_11 = ((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___ovrPluginVersion_9;
			il2cpp_codegen_runtime_class_init_inline(OVRP_1_30_0_tA483F6EBCC533D0BD82270B4CEC48F7A1FDE15F6_il2cpp_TypeInfo_var);
			Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_12 = ((OVRP_1_30_0_tA483F6EBCC533D0BD82270B4CEC48F7A1FDE15F6_StaticFields*)il2cpp_codegen_static_fields_for(OVRP_1_30_0_tA483F6EBCC533D0BD82270B4CEC48F7A1FDE15F6_il2cpp_TypeInfo_var))->___version_0;
			bool L_13;
			L_13 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(L_11, L_12, NULL);
			if (!L_13)
			{
				goto IL_006d_1;
			}
		}
		{
			// return OVRP_1_30_0.ovrp_SendEvent2(name, param, source.Length == 0 ? "avatar_sdk" : source) == Result.Success;
			String_t* L_14 = ___name0;
			String_t* L_15 = ___param1;
			String_t* L_16 = ___source2;
			NullCheck(L_16);
			int32_t L_17;
			L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
			G_B6_0 = L_15;
			G_B6_1 = L_14;
			if (!L_17)
			{
				G_B7_0 = L_15;
				G_B7_1 = L_14;
				goto IL_005d_1;
			}
		}
		{
			String_t* L_18 = ___source2;
			G_B8_0 = L_18;
			G_B8_1 = G_B6_0;
			G_B8_2 = G_B6_1;
			goto IL_0062_1;
		}

IL_005d_1:
		{
			G_B8_0 = _stringLiteral6C3B5C1225A47534B327C679815FC500F4D0BC4D;
			G_B8_1 = G_B7_0;
			G_B8_2 = G_B7_1;
		}

IL_0062_1:
		{
			il2cpp_codegen_runtime_class_init_inline(OVRP_1_30_0_tA483F6EBCC533D0BD82270B4CEC48F7A1FDE15F6_il2cpp_TypeInfo_var);
			int32_t L_19;
			L_19 = OVRP_1_30_0_ovrp_SendEvent2_m55FD0BE235A07FB7FCC44B789E6C8F6F10D60C39(G_B8_2, G_B8_1, G_B8_0, NULL);
			V_1 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
			goto IL_0076;
		}

IL_006d_1:
		{
			// return false;
			V_1 = (bool)0;
			goto IL_0076;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0071;
		}
		throw e;
	}

CATCH_0071:
	{// begin catch(System.Exception)
		// catch (Exception)
		// return false;
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0076;
	}// end catch (depth: 1)

IL_0076:
	{
		// }
		bool L_20 = V_1;
		return L_20;
	}
}
// System.IntPtr Oculus.Avatar.CAPI::_ovrp_GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI__ovrp_GetVersion_m208FE2DB566D9E2020CD51D6957B9548A8C772C2 (const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OVRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OVRPlugin"), "ovrp_GetVersion", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OVRPlugin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ovrp_GetVersion)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.String Oculus.Avatar.CAPI::ovrp_GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovrp_GetVersion_m5641289B86C1F933B657086E9E723CCAB5D8A5F1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string ovrp_GetVersion() { return Marshal.PtrToStringAnsi(_ovrp_GetVersion()); }
		il2cpp_codegen_runtime_class_init_inline(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = CAPI__ovrp_GetVersion_m208FE2DB566D9E2020CD51D6957B9548A8C772C2(NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_0, NULL);
		return L_1;
	}
}
// System.Void Oculus.Avatar.CAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI__ctor_mA67E774341BB7009F4E43A86027B1D3B8444FBD8 (CAPI_t2342A422947CB113E509199C42C27F92D2950018* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Oculus.Avatar.CAPI::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI__cctor_m8F57BBEA3BFB9CAFD0533B30256FA5C3F0AFB257 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AF8AA725C39B192DE1EA3DAF91534950860A1CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static IntPtr nativeVisemeData = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeVisemeData_1 = L_0;
		// static IntPtr nativeGazeTargetsData = IntPtr.Zero;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeGazeTargetsData_2 = L_1;
		// static IntPtr nativeAvatarLightsData = IntPtr.Zero;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___nativeAvatarLightsData_3 = L_2;
		// static IntPtr DebugLineCountData = IntPtr.Zero;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___DebugLineCountData_4 = L_3;
		// static float[] scratchBufferFloat = new float[16];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___scratchBufferFloat_5), (void*)L_4);
		// private static string SDKRuntimePrefix = "[RUNTIME] - ";
		((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___SDKRuntimePrefix_7 = _stringLiteral3AF8AA725C39B192DE1EA3DAF91534950860A1CD;
		Il2CppCodeGenWriteBarrier((void**)(&((CAPI_t2342A422947CB113E509199C42C27F92D2950018_StaticFields*)il2cpp_codegen_static_fields_for(CAPI_t2342A422947CB113E509199C42C27F92D2950018_il2cpp_TypeInfo_var))->___SDKRuntimePrefix_7), (void*)_stringLiteral3AF8AA725C39B192DE1EA3DAF91534950860A1CD);
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
void LoggingDelegate_Invoke_m49D69E0324ED60F7C0E191449984D855892C27FF_Multicast(LoggingDelegate_t76BE1328321D58DD99A77FF17F3328AC6EC0AF8B* __this, intptr_t ___str0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LoggingDelegate_t76BE1328321D58DD99A77FF17F3328AC6EC0AF8B* currentDelegate = reinterpret_cast<LoggingDelegate_t76BE1328321D58DD99A77FF17F3328AC6EC0AF8B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___str0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LoggingDelegate_Invoke_m49D69E0324ED60F7C0E191449984D855892C27FF_OpenInst(LoggingDelegate_t76BE1328321D58DD99A77FF17F3328AC6EC0AF8B* __this, intptr_t ___str0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___str0, method);
}
void LoggingDelegate_Invoke_m49D69E0324ED60F7C0E191449984D855892C27FF_OpenStatic(LoggingDelegate_t76BE1328321D58DD99A77FF17F3328AC6EC0AF8B* __this, intptr_t ___str0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___str0, method);
}
void LoggingDelegate_Invoke_m49D69E0324ED60F7C0E191449984D855892C27FF_OpenStaticInvoker(LoggingDelegate_t76BE1328321D58DD99A77FF17F3328AC6EC0AF8B* __this, intptr_t ___str0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___str0);
}
void LoggingDelegate_Invoke_m49D69E0324ED60F7C0E191449984D855892C27FF_ClosedStaticInvoker(LoggingDelegate_t76BE1328321D58DD99A77FF17F3328AC6EC0AF8B* __this, intptr_t ___str0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___str0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LoggingDelegate_t76BE1328321D58DD99A77FF17F3328AC6EC0AF8B (LoggingDelegate_t76BE1328321D58DD99A77FF17F3328AC6EC0AF8B* __this, intptr_t ___str0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___str0);

}
// System.Void Oculus.Avatar.CAPI/LoggingDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggingDelegate__ctor_m1EE8D961A7F92C3BA00ECC805B423E6D349B07D1 (LoggingDelegate_t76BE1328321D58DD99A77FF17F3328AC6EC0AF8B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LoggingDelegate_Invoke_m49D69E0324ED60F7C0E191449984D855892C27FF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LoggingDelegate_Invoke_m49D69E0324ED60F7C0E191449984D855892C27FF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LoggingDelegate_Invoke_m49D69E0324ED60F7C0E191449984D855892C27FF_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&LoggingDelegate_Invoke_m49D69E0324ED60F7C0E191449984D855892C27FF_Multicast;
}
// System.Void Oculus.Avatar.CAPI/LoggingDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggingDelegate_Invoke_m49D69E0324ED60F7C0E191449984D855892C27FF (LoggingDelegate_t76BE1328321D58DD99A77FF17F3328AC6EC0AF8B* __this, intptr_t ___str0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___str0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Oculus.Avatar.CAPI/LoggingDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoggingDelegate_BeginInvoke_m1A46C6F6C5BE4836302BEDCA9D975531EDA6DAE4 (LoggingDelegate_t76BE1328321D58DD99A77FF17F3328AC6EC0AF8B* __this, intptr_t ___str0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___str0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Oculus.Avatar.CAPI/LoggingDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggingDelegate_EndInvoke_m34CA5EDB41275E676C1E7C12529840960B8A944D (LoggingDelegate_t76BE1328321D58DD99A77FF17F3328AC6EC0AF8B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Avatar.CAPI/Result Oculus.Avatar.CAPI/OVRP_1_30_0::ovrp_SendEvent2(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRP_1_30_0_ovrp_SendEvent2_m55FD0BE235A07FB7FCC44B789E6C8F6F10D60C39 (String_t* ___name0, String_t* ___param1, String_t* ___source2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (char*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OVRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OVRPlugin"), "ovrp_SendEvent2", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name0' to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Marshaling of parameter '___param1' to native representation
	char* ____param1_marshaled = NULL;
	____param1_marshaled = il2cpp_codegen_marshal_string(___param1);

	// Marshaling of parameter '___source2' to native representation
	char* ____source2_marshaled = NULL;
	____source2_marshaled = il2cpp_codegen_marshal_string(___source2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OVRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ovrp_SendEvent2)(____name0_marshaled, ____param1_marshaled, ____source2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____name0_marshaled, ____param1_marshaled, ____source2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___name0' native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	// Marshaling cleanup of parameter '___param1' native representation
	il2cpp_codegen_marshal_free(____param1_marshaled);
	____param1_marshaled = NULL;

	// Marshaling cleanup of parameter '___source2' native representation
	il2cpp_codegen_marshal_free(____source2_marshaled);
	____source2_marshaled = NULL;

	return returnValue;
}
// System.Void Oculus.Avatar.CAPI/OVRP_1_30_0::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRP_1_30_0__cctor_m6E294458421E00DD670B48D40E45B83C05A00DAC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRP_1_30_0_tA483F6EBCC533D0BD82270B4CEC48F7A1FDE15F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly System.Version version = new System.Version(1, 30, 0);
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_0 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)il2cpp_codegen_object_new(Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Version__ctor_m7D8EE608025AE8D7AD8867718BC0AC96A2CFC1F5(L_0, 1, ((int32_t)30), 0, NULL);
		((OVRP_1_30_0_tA483F6EBCC533D0BD82270B4CEC48F7A1FDE15F6_StaticFields*)il2cpp_codegen_static_fields_for(OVRP_1_30_0_tA483F6EBCC533D0BD82270B4CEC48F7A1FDE15F6_il2cpp_TypeInfo_var))->___version_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((OVRP_1_30_0_tA483F6EBCC533D0BD82270B4CEC48F7A1FDE15F6_StaticFields*)il2cpp_codegen_static_fields_for(OVRP_1_30_0_tA483F6EBCC533D0BD82270B4CEC48F7A1FDE15F6_il2cpp_TypeInfo_var))->___version_0), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
