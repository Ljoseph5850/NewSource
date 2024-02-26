#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// EnemyWave[]
struct EnemyWaveU5BU5D_t27BE98777555EDA677D61BEC77AD87E5C60E9123;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// ButtonFlicker
struct ButtonFlicker_tD1F4E8A31868ADAEEC2670ED110FED0CBA3D8370;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// EnemyWaveSystem
struct EnemyWaveSystem_t1FDC3C53D0ADB976E5F055FB7709FA490808F418;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameOverScrn
struct GameOverScrn_t1DADB39B81A1C8ACD7F32BFBFAC84BF47ECEA1A5;
// GameSettings
struct GameSettings_t6B240976E27B656F17018B16968EAC840603573B;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// LogoEffect
struct LogoEffect_t2CFE666575E11C6339F561FAD6C16345DCEFFA02;
// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF;
// MainMenu_ScrollingBG
struct MainMenu_ScrollingBG_t6AA8CF8D07D1C1BB47D868C8C4BF3B2858C5535E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// RoundClearScrn
struct RoundClearScrn_tD1FA8C3BBCE088B5A92ABDE9EA889CDAB432207D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIButton
struct UIButton_tE4A60203BFAEA6E580C4FFF798E7786592277042;
// UIDPadButton
struct UIDPadButton_t30E59AC998513FBBF8C59E85ED6B59A7F9E8982A;
// UIFader
struct UIFader_tE5FB19417E20BF6D04CD0157B5163463B7EE8D64;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// EnemyWaveSystem/OnLevelEvent
struct OnLevelEvent_tAA29085106273E37D1906015E243B616679EEA70;
// InputManager/CombatInputEventHandler
struct CombatInputEventHandler_t57DD5613DD0FB2C9B1173EE1A18884D46E28D51B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UIFader/<FadeCoroutine>d__3
struct U3CFadeCoroutineU3Ed__3_t4970422EA76F6BA1EA9BE850D848164F9CAF493F;

IL2CPP_EXTERN_C RuntimeClass* CombatInputEventHandler_t57DD5613DD0FB2C9B1173EE1A18884D46E28D51B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnLevelEvent_tAA29085106273E37D1906015E243B616679EEA70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeCoroutineU3Ed__3_t4970422EA76F6BA1EA9BE850D848164F9CAF493F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral0DACDC7BEEFEFBF93F50D735C5AD463E76B6678E;
IL2CPP_EXTERN_C String_t* _stringLiteral118B65697F24B416C5EAE1F6D8E12DC40E4A10BB;
IL2CPP_EXTERN_C String_t* _stringLiteral16BBD452AE7470DC470C6250580CE232EC170AE4;
IL2CPP_EXTERN_C String_t* _stringLiteral1A432F7EEA55D7CC069451E33E9314350E265CD2;
IL2CPP_EXTERN_C String_t* _stringLiteral205CEEC1B96E3B55D7B34FBFEA664BE145360AC1;
IL2CPP_EXTERN_C String_t* _stringLiteral40209CFC2D658CEE11535121AA96073E840FE1B5;
IL2CPP_EXTERN_C String_t* _stringLiteral473E48B28A05E4379D94EB40E291A6C26585C463;
IL2CPP_EXTERN_C String_t* _stringLiteral538406088030267291BBA054C9F8A6CB15D7AE70;
IL2CPP_EXTERN_C String_t* _stringLiteral8199DCD81BF02A3CCF30414BFB96A6957CB69987;
IL2CPP_EXTERN_C String_t* _stringLiteral8298BF044C1526F090927689AE8A41DDD5D31C9B;
IL2CPP_EXTERN_C String_t* _stringLiteral887E8A4E9445F1B6B4E1DA5B4B329F56490679A6;
IL2CPP_EXTERN_C String_t* _stringLiteral983F0570B2C64B88F99BBF38A7F3E13143F5B2C7;
IL2CPP_EXTERN_C String_t* _stringLiteralAC810448F0C581EA3FC983B338917324955067E8;
IL2CPP_EXTERN_C String_t* _stringLiteralC36C08270F0656B15564B93B095160EB52C35960;
IL2CPP_EXTERN_C String_t* _stringLiteralC713A19D291892D3C3F4F14F22FFC75F3D4E086A;
IL2CPP_EXTERN_C String_t* _stringLiteralD75D41C18D829FFA2798A164F222AD3C3A052445;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE42820C01D0A13C6DB587099F5F25C09EBBDE902;
IL2CPP_EXTERN_C String_t* _stringLiteralE6C733233191F6B28957CC7BA051ACF1EFAE5F8C;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisButtonFlicker_tD1F4E8A31868ADAEEC2670ED110FED0CBA3D8370_mDE0D312167AE9C0A37BB9C0358909D7780054358_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainMenu_InputEvent_m8A0B5EBD2C9539BCB2FE24BAE8D2E390B0F5D94F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisEnemyWaveSystem_t1FDC3C53D0ADB976E5F055FB7709FA490808F418_m414ADDD163CCFD2DEA50AE32153600B734C70FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisMainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_m7300004DA563486F23F6E3A9B802767E066CDDB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RoundClearScrn_InputEvent_m0263212C264B1A93CC7DD72BF17E8326151E8CA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RoundClearScrn_ShowLevelCompleteScrn_mAA0019F4495A6320BAD7474F5AD56A2021992CF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeCoroutineU3Ed__3_System_Collections_IEnumerator_Reset_mA7A2C2A561CF3D6F4194A7166B05BAA35D710B48_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.UI.Image/FillMethod
struct FillMethod_t36837ED12068DF1582CC20489D571B0BCAA7AD19 
{
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Image/Type
struct Type_t81D6F138C2FC745112D5247CD91BD483EDFFC041 
{
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;
};

// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_t7F40241CC7C406EBD574D426F736CB744DE86CDA 
{
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;
};

// UIFader/<FadeCoroutine>d__3
struct U3CFadeCoroutineU3Ed__3_t4970422EA76F6BA1EA9BE850D848164F9CAF493F  : public RuntimeObject
{
	// System.Int32 UIFader/<FadeCoroutine>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UIFader/<FadeCoroutine>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single UIFader/<FadeCoroutine>d__3::StartDelay
	float ___StartDelay_2;
	// UIFader UIFader/<FadeCoroutine>d__3::<>4__this
	UIFader_tE5FB19417E20BF6D04CD0157B5163463B7EE8D64* ___U3CU3E4__this_3;
	// System.Single UIFader/<FadeCoroutine>d__3::From
	float ___From_4;
	// System.Single UIFader/<FadeCoroutine>d__3::To
	float ___To_5;
	// System.Single UIFader/<FadeCoroutine>d__3::Duration
	float ___Duration_6;
	// System.Boolean UIFader/<FadeCoroutine>d__3::DisableOnFinish
	bool ___DisableOnFinish_7;
	// System.Single UIFader/<FadeCoroutine>d__3::<t>5__2
	float ___U3CtU3E5__2_8;
	// UnityEngine.Color UIFader/<FadeCoroutine>d__3::<col>5__3
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CcolU3E5__3_9;
};

// UIFader/FADE
struct FADE_t76CA6D1BB2D2427D8AB67A7A145D9A2E8149FB6A 
{
	// System.Int32 UIFader/FADE::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// EnemyWaveSystem/OnLevelEvent
struct OnLevelEvent_tAA29085106273E37D1906015E243B616679EEA70  : public MulticastDelegate_t
{
};

// InputManager/CombatInputEventHandler
struct CombatInputEventHandler_t57DD5613DD0FB2C9B1173EE1A18884D46E28D51B  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ButtonFlicker
struct ButtonFlicker_tD1F4E8A31868ADAEEC2670ED110FED0CBA3D8370  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text ButtonFlicker::buttonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___buttonText_4;
	// System.Single ButtonFlicker::flickerSpeed
	float ___flickerSpeed_5;
	// System.Single ButtonFlicker::flickerDuration
	float ___flickerDuration_6;
};

// EnemyWaveSystem
struct EnemyWaveSystem_t1FDC3C53D0ADB976E5F055FB7709FA490808F418  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform EnemyWaveSystem::positionMarkerLeft
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___positionMarkerLeft_4;
	// EnemyWave[] EnemyWaveSystem::EnemyWaves
	EnemyWaveU5BU5D_t27BE98777555EDA677D61BEC77AD87E5C60E9123* ___EnemyWaves_5;
	// System.Int32 EnemyWaveSystem::currentWave
	int32_t ___currentWave_6;
	// System.Int32 EnemyWaveSystem::levelToGive
	int32_t ___levelToGive_7;
	// System.Int32 EnemyWaveSystem::levelToSet
	int32_t ___levelToSet_8;
	// RoundClearScrn EnemyWaveSystem::theRoundClearScrn
	RoundClearScrn_tD1FA8C3BBCE088B5A92ABDE9EA889CDAB432207D* ___theRoundClearScrn_11;
	// GameOverScrn EnemyWaveSystem::theGameOverScrn
	GameOverScrn_t1DADB39B81A1C8ACD7F32BFBFAC84BF47ECEA1A5* ___theGameOverScrn_12;
	// System.Boolean EnemyWaveSystem::settingRound
	bool ___settingRound_13;
};

struct EnemyWaveSystem_t1FDC3C53D0ADB976E5F055FB7709FA490808F418_StaticFields
{
	// EnemyWaveSystem/OnLevelEvent EnemyWaveSystem::onLevelComplete
	OnLevelEvent_tAA29085106273E37D1906015E243B616679EEA70* ___onLevelComplete_9;
	// EnemyWaveSystem/OnLevelEvent EnemyWaveSystem::onLevelStart
	OnLevelEvent_tAA29085106273E37D1906015E243B616679EEA70* ___onLevelStart_10;
};

// LogoEffect
struct LogoEffect_t2CFE666575E11C6339F561FAD6C16345DCEFFA02  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material LogoEffect::logoMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___logoMaterial_4;
	// System.Single LogoEffect::texOffset
	float ___texOffset_5;
	// System.Single LogoEffect::speed
	float ___speed_6;
};

// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UIFader MainMenu::UI_Fader
	UIFader_tE5FB19417E20BF6D04CD0157B5163463B7EE8D64* ___UI_Fader_4;
	// GameSettings MainMenu::settings
	GameSettings_t6B240976E27B656F17018B16968EAC840603573B* ___settings_5;
	// System.Boolean MainMenu::startGameInProgress
	bool ___startGameInProgress_6;
	// System.Boolean MainMenu::setLogo
	bool ___setLogo_11;
	// System.Boolean MainMenu::isKeyboard
	bool ___isKeyboard_12;
	// System.Boolean MainMenu::isJoystick
	bool ___isJoystick_13;
	// UnityEngine.GameObject MainMenu::keyButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___keyButton_14;
	// UnityEngine.GameObject MainMenu::joyButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___joyButton_15;
	// UnityEngine.GameObject MainMenu::gameLogo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameLogo_16;
	// UnityEngine.GameObject MainMenu::nextLevelText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___nextLevelText_17;
	// UnityEngine.GameObject MainMenu::planetListOne
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___planetListOne_18;
	// UnityEngine.GameObject MainMenu::planetListTwo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___planetListTwo_19;
	// UnityEngine.GameObject MainMenu::planetListThree
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___planetListThree_20;
	// UnityEngine.GameObject MainMenu::planetListFour
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___planetListFour_21;
};

struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_StaticFields
{
	// System.Boolean MainMenu::levelContOne
	bool ___levelContOne_7;
	// System.Boolean MainMenu::levelContTwo
	bool ___levelContTwo_8;
	// System.Boolean MainMenu::levelContThree
	bool ___levelContThree_9;
	// System.Boolean MainMenu::levelContFour
	bool ___levelContFour_10;
};

// MainMenu_ScrollingBG
struct MainMenu_ScrollingBG_t6AA8CF8D07D1C1BB47D868C8C4BF3B2858C5535E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.RawImage MainMenu_ScrollingBG::rawImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___rawImage_4;
	// System.Single MainMenu_ScrollingBG::scrollSpeed
	float ___scrollSpeed_5;
};

// RoundClearScrn
struct RoundClearScrn_tD1FA8C3BBCE088B5A92ABDE9EA889CDAB432207D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text RoundClearScrn::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_4;
	// UnityEngine.UI.Text RoundClearScrn::randomText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___randomText_5;
	// UnityEngine.Gradient RoundClearScrn::ColorTransition
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___ColorTransition_6;
	// System.Single RoundClearScrn::speed
	float ___speed_7;
	// UIFader RoundClearScrn::fader
	UIFader_tE5FB19417E20BF6D04CD0157B5163463B7EE8D64* ___fader_8;
	// UnityEngine.GameObject RoundClearScrn::gameLogo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameLogo_9;
	// MainMenu RoundClearScrn::theMainMenu
	MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* ___theMainMenu_10;
	// System.Boolean RoundClearScrn::restartInProgress
	bool ___restartInProgress_11;
	// System.Boolean RoundClearScrn::tryAgain
	bool ___tryAgain_12;
	// System.Int32 RoundClearScrn::levelNumber
	int32_t ___levelNumber_13;
	// System.String[] RoundClearScrn::randomSayings
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___randomSayings_14;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIButton
struct UIButton_tE4A60203BFAEA6E580C4FFF798E7786592277042  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UIButton::actionDown
	String_t* ___actionDown_4;
	// System.String UIButton::actionUp
	String_t* ___actionUp_5;
	// System.Boolean UIButton::updateEveryFrame
	bool ___updateEveryFrame_6;
	// System.Boolean UIButton::pressed
	bool ___pressed_7;
};

// UIDPadButton
struct UIDPadButton_t30E59AC998513FBBF8C59E85ED6B59A7F9E8982A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 UIDPadButton::dir
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dir_4;
};

// UIFader
struct UIFader_tE5FB19417E20BF6D04CD0157B5163463B7EE8D64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image UIFader::img
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___img_4;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_37;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureOffset_m40F3FCE32535625DDF26C0C073D37968117FBFE1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void InputManager/CombatInputEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombatInputEventHandler__ctor_mCC2CCF373341D48425C0523FA8CAD3284ED9F891 (CombatInputEventHandler_t57DD5613DD0FB2C9B1173EE1A18884D46E28D51B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void InputManager::add_onCombatInputEvent(InputManager/CombatInputEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_add_onCombatInputEvent_m3D7C1AC37427B2043AACE6C88E4BCBDB6DEC49D2 (CombatInputEventHandler_t57DD5613DD0FB2C9B1173EE1A18884D46E28D51B* ___value0, const RuntimeMethod* method) ;
// System.Void InputManager::remove_onCombatInputEvent(InputManager/CombatInputEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_remove_onCombatInputEvent_mB3A0294998316ABB16A65D92A515F8DA4816FA5C (CombatInputEventHandler_t57DD5613DD0FB2C9B1173EE1A18884D46E28D51B* ___value0, const RuntimeMethod* method) ;
// System.Void MainMenu::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_StartGame_m8FB75C50790940C87A983517C4C08F4159A8A7D0 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Void InputManager::SetKeyboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_SetKeyboard_m50C43CB6582735FE58F17A74736E9E4D89304F11 (const RuntimeMethod* method) ;
// System.Void InputManager::SetJoystick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_SetJoystick_mFD190B9F75BAE2940DA0ECEF6FB7B38B98E1C62A (const RuntimeMethod* method) ;
// System.Void GlobalAudioPlayer::PlaySFX(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalAudioPlayer_PlaySFX_m45E3680CB7B0420B6169C615CDCC4C76AF64143B (String_t* ___sfxName0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<ButtonFlicker>()
inline ButtonFlicker_tD1F4E8A31868ADAEEC2670ED110FED0CBA3D8370* Component_GetComponentInChildren_TisButtonFlicker_tD1F4E8A31868ADAEEC2670ED110FED0CBA3D8370_mDE0D312167AE9C0A37BB9C0358909D7780054358 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ButtonFlicker_tD1F4E8A31868ADAEEC2670ED110FED0CBA3D8370* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void ButtonFlicker::StartButtonFlicker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFlicker_StartButtonFlicker_m9B70069B558272589BA8CF4538CE1F2C5B6E3B6E (ButtonFlicker_tD1F4E8A31868ADAEEC2670ED110FED0CBA3D8370* __this, const RuntimeMethod* method) ;
// System.Void MainMenu::FadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_FadeOut_mBCD0349559821398270DF6EFC9E4E6D5AAC85504 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) ;
// System.Void UIFader::Fade(UIFader/FADE,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFader_Fade_m76CB2154C5D884CE96975CFB5769D2E5CCE8CD83 (UIFader_tE5FB19417E20BF6D04CD0157B5163463B7EE8D64* __this, int32_t ___fadeDir0, float ___fadeDuration1, float ___StartDelay2, const RuntimeMethod* method) ;
// System.Void MainMenu::FadeIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_FadeIn_mED178DE072754EB563E2491396BB75F1EC5AAED5 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<EnemyWaveSystem>()
inline EnemyWaveSystem_t1FDC3C53D0ADB976E5F055FB7709FA490808F418* Object_FindObjectOfType_TisEnemyWaveSystem_t1FDC3C53D0ADB976E5F055FB7709FA490808F418_m414ADDD163CCFD2DEA50AE32153600B734C70FE8 (const RuntimeMethod* method)
{
	return ((  EnemyWaveSystem_t1FDC3C53D0ADB976E5F055FB7709FA490808F418* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void EnemyWaveSystem::OnLevelStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyWaveSystem_OnLevelStart_mB074037172E81ADE5156CAD0E558EC1523FA234F (EnemyWaveSystem_t1FDC3C53D0ADB976E5F055FB7709FA490808F418* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.RawImage>()
inline RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.UI.RawImage::get_uvRect()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RawImage_get_uvRect_m83D2C4632C6AE437D1DC775904AC2FA8CB83D823_inline (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.RawImage::set_uvRect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_uvRect_m9DF6BBBC6AC46F7F3290A220ED6F076CAB4BC52F (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) ;
// System.Void RoundClearScrn::HideText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundClearScrn_HideText_m7E259E43B8EBB15013DFBAEE4CC4C907C8B2915C (RoundClearScrn_tD1FA8C3BBCE088B5A92ABDE9EA889CDAB432207D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<MainMenu>()
inline MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* Object_FindObjectOfType_TisMainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_m7300004DA563486F23F6E3A9B802767E066CDDB0 (const RuntimeMethod* method)
{
	return ((  MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void EnemyWaveSystem/OnLevelEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLevelEvent__ctor_mF076B337EA35B10476E6C227C8D566A71B78C712 (OnLevelEvent_tAA29085106273E37D1906015E243B616679EEA70* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void EnemyWaveSystem::add_onLevelComplete(EnemyWaveSystem/OnLevelEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyWaveSystem_add_onLevelComplete_m406AF3BD129D1C705915F3EB4C3CD45F5E08089E (OnLevelEvent_tAA29085106273E37D1906015E243B616679EEA70* ___value0, const RuntimeMethod* method) ;
// System.Void EnemyWaveSystem::remove_onLevelComplete(EnemyWaveSystem/OnLevelEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyWaveSystem_remove_onLevelComplete_mA9FCC1CC640346F27D05D45F20CC224900A02302 (OnLevelEvent_tAA29085106273E37D1906015E243B616679EEA70* ___value0, const RuntimeMethod* method) ;
// System.String RoundClearScrn::GetRandomSaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoundClearScrn_GetRandomSaying_m7E2A8C3DF23B0DDC5BE370D7FFFA4D8EDAB7B81D (RoundClearScrn_tD1FA8C3BBCE088B5A92ABDE9EA889CDAB432207D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void RoundClearScrn::RestartLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundClearScrn_RestartLevel_m15E460090A505708D1EF592E755FA4505BAC621B (RoundClearScrn_tD1FA8C3BBCE088B5A92ABDE9EA889CDAB432207D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::PingPong(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_PingPong_m157C55BCFEA2BB96680B7B29D714C3F9390551C9_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Gradient::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Gradient_Evaluate_m332A32F48EA3F884CB55D74131DF8064F29F9C32 (Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* __this, float ___time0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void MainMenu::SetLogo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_SetLogo_mC7571F9A38F810D8EBDF69ED8CBD74D114472F08 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) ;
// System.Void ScoreManager::SetScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_SetScore_m0D7925A3A9D606A7180CD443591B68D67AD6A1F7 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void GameOverScrn::LevelSixStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScrn_LevelSixStart_m72C0046A288868330CAA7F3559F517BAD03913F0 (const RuntimeMethod* method) ;
// System.Void GameOverScrn::LevelElevenStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScrn_LevelElevenStart_m6C08924F365BD630B65A5412CAA76CED790D2EC3 (const RuntimeMethod* method) ;
// System.Void GameOverScrn::LevelSixTeenStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScrn_LevelSixTeenStart_m5A82F912F1E8A3493E1C6AE0CF766F993339204E (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void InputManager::CombatInputEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_CombatInputEvent_m4AC5DE10F6FC013C3D7212C84248B166BE57CA35 (String_t* ___action0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void InputManager::InputEvent(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_InputEvent_m77E69CE5039B89DDCF09248E356C399948E862C5 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dir0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Collections.IEnumerator UIFader::FadeCoroutine(System.Single,System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIFader_FadeCoroutine_m7ACB39573BDD148E00004C9E2F19FADD5E1D78C5 (UIFader_tE5FB19417E20BF6D04CD0157B5163463B7EE8D64* __this, float ___From0, float ___To1, float ___Duration2, float ___StartDelay3, bool ___DisableOnFinish4, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UIFader/<FadeCoroutine>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeCoroutineU3Ed__3__ctor_m3DCEDC283752AD61DA34D23FDC8C52F3DC86D327 (U3CFadeCoroutineU3Ed__3_t4970422EA76F6BA1EA9BE850D848164F9CAF493F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LogoEffect::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogoEffect_Update_m0CD2CB9944F143479F976B0E413BE73BD6A548E1 (LogoEffect_t2CFE666575E11C6339F561FAD6C16345DCEFFA02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC36C08270F0656B15564B93B095160EB52C35960);
		s_Il2CppMethodInitialized = true;
	}
	{
		// texOffset += Time.deltaTime * speed;
		float L_0 = __this->___texOffset_5;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_2 = __this->___speed_6;
		__this->___texOffset_5 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2))));
		// logoMaterial.SetTextureOffset("_Overlay", new Vector2(-texOffset, texOffset));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___logoMaterial_4;
		float L_4 = __this->___texOffset_5;
		float L_5 = __this->___texOffset_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((-L_4)), L_5, /*hidden argument*/NULL);
		Material_SetTextureOffset_m40F3FCE32535625DDF26C0C073D37968117FBFE1(L_3, _stringLiteralC36C08270F0656B15564B93B095160EB52C35960, L_6, NULL);
		// }
		return;
	}
}
// System.Void LogoEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogoEffect__ctor_mC31D77BF6E0D5CEB161BCE6E6A4639C6E94E7A86 (LogoEffect_t2CFE666575E11C6339F561FAD6C16345DCEFFA02* __this, const RuntimeMethod* method) 
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
// System.Void MainMenu::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_OnEnable_mF78AA8ECD5FDD241A5543C46A71E9294CE753202 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CombatInputEventHandler_t57DD5613DD0FB2C9B1173EE1A18884D46E28D51B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenu_InputEvent_m8A0B5EBD2C9539BCB2FE24BAE8D2E390B0F5D94F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputManager.onCombatInputEvent += InputEvent;
		CombatInputEventHandler_t57DD5613DD0FB2C9B1173EE1A18884D46E28D51B* L_0 = (CombatInputEventHandler_t57DD5613DD0FB2C9B1173EE1A18884D46E28D51B*)il2cpp_codegen_object_new(CombatInputEventHandler_t57DD5613DD0FB2C9B1173EE1A18884D46E28D51B_il2cpp_TypeInfo_var);
		CombatInputEventHandler__ctor_mCC2CCF373341D48425C0523FA8CAD3284ED9F891(L_0, __this, (intptr_t)((void*)MainMenu_InputEvent_m8A0B5EBD2C9539BCB2FE24BAE8D2E390B0F5D94F_RuntimeMethod_var), NULL);
		InputManager_add_onCombatInputEvent_m3D7C1AC37427B2043AACE6C88E4BCBDB6DEC49D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_OnDisable_m168B00D49D6194DB956414F5170A05E9108CDFAC (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CombatInputEventHandler_t57DD5613DD0FB2C9B1173EE1A18884D46E28D51B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenu_InputEvent_m8A0B5EBD2C9539BCB2FE24BAE8D2E390B0F5D94F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputManager.onCombatInputEvent -= InputEvent;
		CombatInputEventHandler_t57DD5613DD0FB2C9B1173EE1A18884D46E28D51B* L_0 = (CombatInputEventHandler_t57DD5613DD0FB2C9B1173EE1A18884D46E28D51B*)il2cpp_codegen_object_new(CombatInputEventHandler_t57DD5613DD0FB2C9B1173EE1A18884D46E28D51B_il2cpp_TypeInfo_var);
		CombatInputEventHandler__ctor_mCC2CCF373341D48425C0523FA8CAD3284ED9F891(L_0, __this, (intptr_t)((void*)MainMenu_InputEvent_m8A0B5EBD2C9539BCB2FE24BAE8D2E390B0F5D94F_RuntimeMethod_var), NULL);
		InputManager_remove_onCombatInputEvent_mB3A0294998316ABB16A65D92A515F8DA4816FA5C(L_0, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::InputEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_InputEvent_m8A0B5EBD2C9539BCB2FE24BAE8D2E390B0F5D94F (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, String_t* ___action0, const RuntimeMethod* method) 
{
	{
		// StartGame();
		MainMenu_StartGame_m8FB75C50790940C87A983517C4C08F4159A8A7D0(__this, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Start_m1729BDE6D096D9F4C92DBE72B392BA89E9A9ECAD (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD75D41C18D829FFA2798A164F222AD3C3A052445);
		s_Il2CppMethodInitialized = true;
	}
	{
		// planetListOne.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___planetListOne_18;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// planetListTwo.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___planetListTwo_19;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// planetListThree.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___planetListThree_20;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// planetListFour.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___planetListFour_21;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// Invoke("FadeIn", 1f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralD75D41C18D829FFA2798A164F222AD3C3A052445, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void MainMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Update_m6D9E8EB1A42CC68CFAA865B9CF18FAEB81595C5C (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!setLogo){
		bool L_0 = __this->___setLogo_11;
		if (L_0)
		{
			goto IL_003d;
		}
	}
	{
		// planetListOne.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___planetListOne_18;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// planetListTwo.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___planetListTwo_19;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// planetListThree.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___planetListThree_20;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// planetListFour.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___planetListFour_21;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		goto IL_0145;
	}

IL_003d:
	{
		// }else if(levelContOne && setLogo){
		bool L_5 = ((MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var))->___levelContOne_7;
		if (!L_5)
		{
			goto IL_0081;
		}
	}
	{
		bool L_6 = __this->___setLogo_11;
		if (!L_6)
		{
			goto IL_0081;
		}
	}
	{
		// planetListOne.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___planetListOne_18;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// planetListTwo.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___planetListTwo_19;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// planetListThree.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___planetListThree_20;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// planetListFour.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___planetListFour_21;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		goto IL_0145;
	}

IL_0081:
	{
		// }else if(levelContTwo && setLogo){
		bool L_11 = ((MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var))->___levelContTwo_8;
		if (!L_11)
		{
			goto IL_00c5;
		}
	}
	{
		bool L_12 = __this->___setLogo_11;
		if (!L_12)
		{
			goto IL_00c5;
		}
	}
	{
		// planetListOne.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___planetListOne_18;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		// planetListTwo.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___planetListTwo_19;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// planetListThree.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___planetListThree_20;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
		// planetListFour.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___planetListFour_21;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
		goto IL_0145;
	}

IL_00c5:
	{
		// }else if(levelContThree && setLogo){
		bool L_17 = ((MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var))->___levelContThree_9;
		if (!L_17)
		{
			goto IL_0106;
		}
	}
	{
		bool L_18 = __this->___setLogo_11;
		if (!L_18)
		{
			goto IL_0106;
		}
	}
	{
		// planetListOne.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___planetListOne_18;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)0, NULL);
		// planetListTwo.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___planetListTwo_19;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)0, NULL);
		// planetListThree.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___planetListThree_20;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)1, NULL);
		// planetListFour.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___planetListFour_21;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)0, NULL);
		goto IL_0145;
	}

IL_0106:
	{
		// }else if(levelContFour && setLogo){
		bool L_23 = ((MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var))->___levelContFour_10;
		if (!L_23)
		{
			goto IL_0145;
		}
	}
	{
		bool L_24 = __this->___setLogo_11;
		if (!L_24)
		{
			goto IL_0145;
		}
	}
	{
		// planetListOne.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___planetListOne_18;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)0, NULL);
		// planetListTwo.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___planetListTwo_19;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)0, NULL);
		// planetListThree.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___planetListThree_20;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
		// planetListFour.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___planetListFour_21;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)1, NULL);
	}

IL_0145:
	{
		// if(setLogo){
		bool L_29 = __this->___setLogo_11;
		if (!L_29)
		{
			goto IL_0165;
		}
	}
	{
		// gameLogo.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___gameLogo_16;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)0, NULL);
		// nextLevelText.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___nextLevelText_17;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_31, (bool)1, NULL);
	}

IL_0165:
	{
		// if(isKeyboard){
		bool L_32 = __this->___isKeyboard_12;
		if (!L_32)
		{
			goto IL_0173;
		}
	}
	{
		// InputManager.SetKeyboard();
		InputManager_SetKeyboard_m50C43CB6582735FE58F17A74736E9E4D89304F11(NULL);
		return;
	}

IL_0173:
	{
		// }else if(isJoystick){
		bool L_33 = __this->___isJoystick_13;
		if (!L_33)
		{
			goto IL_0180;
		}
	}
	{
		// InputManager.SetJoystick();
		InputManager_SetJoystick_mFD190B9F75BAE2940DA0ECEF6FB7B38B98E1C62A(NULL);
	}

IL_0180:
	{
		// }
		return;
	}
}
// System.Void MainMenu::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_StartGame_m8FB75C50790940C87A983517C4C08F4159A8A7D0 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisButtonFlicker_tD1F4E8A31868ADAEEC2670ED110FED0CBA3D8370_mDE0D312167AE9C0A37BB9C0358909D7780054358_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16BBD452AE7470DC470C6250580CE232EC170AE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE42820C01D0A13C6DB587099F5F25C09EBBDE902);
		s_Il2CppMethodInitialized = true;
	}
	ButtonFlicker_tD1F4E8A31868ADAEEC2670ED110FED0CBA3D8370* V_0 = NULL;
	{
		// if(!startGameInProgress){
		bool L_0 = __this->___startGameInProgress_6;
		if (L_0)
		{
			goto IL_0045;
		}
	}
	{
		// startGameInProgress = true;
		__this->___startGameInProgress_6 = (bool)1;
		// GlobalAudioPlayer.PlaySFX("ButtonStart");
		GlobalAudioPlayer_PlaySFX_m45E3680CB7B0420B6169C615CDCC4C76AF64143B(_stringLiteral16BBD452AE7470DC470C6250580CE232EC170AE4, NULL);
		// ButtonFlicker bf =  GetComponentInChildren<ButtonFlicker>();
		ButtonFlicker_tD1F4E8A31868ADAEEC2670ED110FED0CBA3D8370* L_1;
		L_1 = Component_GetComponentInChildren_TisButtonFlicker_tD1F4E8A31868ADAEEC2670ED110FED0CBA3D8370_mDE0D312167AE9C0A37BB9C0358909D7780054358(__this, Component_GetComponentInChildren_TisButtonFlicker_tD1F4E8A31868ADAEEC2670ED110FED0CBA3D8370_mDE0D312167AE9C0A37BB9C0358909D7780054358_RuntimeMethod_var);
		V_0 = L_1;
		// if(bf != null) bf.StartButtonFlicker();
		ButtonFlicker_tD1F4E8A31868ADAEEC2670ED110FED0CBA3D8370* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// if(bf != null) bf.StartButtonFlicker();
		ButtonFlicker_tD1F4E8A31868ADAEEC2670ED110FED0CBA3D8370* L_4 = V_0;
		ButtonFlicker_StartButtonFlicker_m9B70069B558272589BA8CF4538CE1F2C5B6E3B6E(L_4, NULL);
	}

IL_002f:
	{
		// FadeOut();
		MainMenu_FadeOut_mBCD0349559821398270DF6EFC9E4E6D5AAC85504(__this, NULL);
		// Invoke("startGame", 1.8f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralE42820C01D0A13C6DB587099F5F25C09EBBDE902, (1.79999995f), NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void MainMenu::FadeIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_FadeIn_mED178DE072754EB563E2491396BB75F1EC5AAED5 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// UI_Fader.Fade(UIFader.FADE.FadeIn, .5f, 0f);
		UIFader_tE5FB19417E20BF6D04CD0157B5163463B7EE8D64* L_0 = __this->___UI_Fader_4;
		UIFader_Fade_m76CB2154C5D884CE96975CFB5769D2E5CCE8CD83(L_0, 0, (0.5f), (0.0f), NULL);
		// }
		return;
	}
}
// System.Void MainMenu::FadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_FadeOut_mBCD0349559821398270DF6EFC9E4E6D5AAC85504 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// UI_Fader.Fade(UIFader.FADE.FadeOut, .5f, 1f);
		UIFader_tE5FB19417E20BF6D04CD0157B5163463B7EE8D64* L_0 = __this->___UI_Fader_4;
		UIFader_Fade_m76CB2154C5D884CE96975CFB5769D2E5CCE8CD83(L_0, 1, (0.5f), (1.0f), NULL);
		// }
		return;
	}
}
// System.Void MainMenu::startGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_startGame_mF16BC67E510B62DF57C49A3770E959C86F1D4AEC (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisEnemyWaveSystem_t1FDC3C53D0ADB976E5F055FB7709FA490808F418_m414ADDD163CCFD2DEA50AE32153600B734C70FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EnemyWaveSystem_t1FDC3C53D0ADB976E5F055FB7709FA490808F418* V_0 = NULL;
	{
		// FadeIn();
		MainMenu_FadeIn_mED178DE072754EB563E2491396BB75F1EC5AAED5(__this, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// EnemyWaveSystem EWS = GameObject.FindObjectOfType<EnemyWaveSystem>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		EnemyWaveSystem_t1FDC3C53D0ADB976E5F055FB7709FA490808F418* L_1;
		L_1 = Object_FindObjectOfType_TisEnemyWaveSystem_t1FDC3C53D0ADB976E5F055FB7709FA490808F418_m414ADDD163CCFD2DEA50AE32153600B734C70FE8(Object_FindObjectOfType_TisEnemyWaveSystem_t1FDC3C53D0ADB976E5F055FB7709FA490808F418_m414ADDD163CCFD2DEA50AE32153600B734C70FE8_RuntimeMethod_var);
		V_0 = L_1;
		// if(EWS != null) EWS.OnLevelStart();
		EnemyWaveSystem_t1FDC3C53D0ADB976E5F055FB7709FA490808F418* L_2 = V_0;
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// if(EWS != null) EWS.OnLevelStart();
		EnemyWaveSystem_t1FDC3C53D0ADB976E5F055FB7709FA490808F418* L_4 = V_0;
		EnemyWaveSystem_OnLevelStart_mB074037172E81ADE5156CAD0E558EC1523FA234F(L_4, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void MainMenu::SetLogo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_SetLogo_mC7571F9A38F810D8EBDF69ED8CBD74D114472F08 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// setLogo = true;
		__this->___setLogo_11 = (bool)1;
		// }
		return;
	}
}
// System.Void MainMenu::TheKeyboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_TheKeyboard_m9D4BA8B6B2859540EDA406DFE8A1A6ECF4D76F01 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// isKeyboard = true;
		__this->___isKeyboard_12 = (bool)1;
		// isJoystick = false;
		__this->___isJoystick_13 = (bool)0;
		// keyButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___keyButton_14;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// joyButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___joyButton_15;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::TheJoystick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_TheJoystick_m2D60963167AFFCD308D020BCA9FE19001DE9D617 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// isJoystick = true;
		__this->___isJoystick_13 = (bool)1;
		// isKeyboard = false;
		__this->___isKeyboard_12 = (bool)0;
		// joyButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___joyButton_15;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// keyButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___keyButton_14;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::SetLevelOne()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_SetLevelOne_m14F352B95595394BC690E629C48115D54A0C24DB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// levelContOne = true;
		((MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var))->___levelContOne_7 = (bool)1;
		// }
		return;
	}
}
// System.Void MainMenu::SetLevelTwo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_SetLevelTwo_m221E7C4F5D494A19E085A86924200AB5DCEB7343 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// levelContOne = false;
		((MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var))->___levelContOne_7 = (bool)0;
		// levelContTwo = true;
		((MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var))->___levelContTwo_8 = (bool)1;
		// }
		return;
	}
}
// System.Void MainMenu::SetLevelThree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_SetLevelThree_m7AA3CF7A588911BF3B6BC65AE3087FBA1F79E85D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// levelContOne = false;
		((MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var))->___levelContOne_7 = (bool)0;
		// levelContTwo = false;
		((MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var))->___levelContTwo_8 = (bool)0;
		// levelContThree = true;
		((MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var))->___levelContThree_9 = (bool)1;
		// }
		return;
	}
}
// System.Void MainMenu::SetLevelFour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_SetLevelFour_m754E7A6813ED9288DDAA6A5E7FCE607D09A6C6E9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// levelContOne = false;
		((MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var))->___levelContOne_7 = (bool)0;
		// levelContTwo = false;
		((MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var))->___levelContTwo_8 = (bool)0;
		// levelContThree = false;
		((MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var))->___levelContThree_9 = (bool)0;
		// levelContFour = true;
		((MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var))->___levelContFour_10 = (bool)1;
		// }
		return;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m8209CEC1D907C87A96D777961F4D0536E6E948DD (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
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
// System.Void MainMenu_ScrollingBG::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_ScrollingBG_Awake_m1B2B9DD47A0639DBCB1FE9AB612C08D193642068 (MainMenu_ScrollingBG_t6AA8CF8D07D1C1BB47D868C8C4BF3B2858C5535E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rawImage = GetComponent<RawImage>();
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_0;
		L_0 = Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D(__this, Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D_RuntimeMethod_var);
		__this->___rawImage_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rawImage_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void MainMenu_ScrollingBG::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_ScrollingBG_Update_m3E1273D5C8387E256FAE5D929DECBA9861EBDAC6 (MainMenu_ScrollingBG_t6AA8CF8D07D1C1BB47D868C8C4BF3B2858C5535E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(rawImage != null){
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_0 = __this->___rawImage_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		// rawImage.uvRect = new Rect(Vector2.right * Time.time * scrollSpeed, rawImage.uvRect.size);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_2 = __this->___rawImage_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline(NULL);
		float L_4;
		L_4 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_3, L_4, NULL);
		float L_6 = __this->___scrollSpeed_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_5, L_6, NULL);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_8 = __this->___rawImage_4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9;
		L_9 = RawImage_get_uvRect_m83D2C4632C6AE437D1DC775904AC2FA8CB83D823_inline(L_8, NULL);
		V_0 = L_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_0), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11;
		memset((&L_11), 0, sizeof(L_11));
		Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675((&L_11), L_7, L_10, /*hidden argument*/NULL);
		RawImage_set_uvRect_m9DF6BBBC6AC46F7F3290A220ED6F076CAB4BC52F(L_2, L_11, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void MainMenu_ScrollingBG::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_ScrollingBG__ctor_mA8B44E7B81ABD527ADFB33273131FF56B844E7E3 (MainMenu_ScrollingBG_t6AA8CF8D07D1C1BB47D868C8C4BF3B2858C5535E* __this, const RuntimeMethod* method) 
{
	{
		// public float scrollSpeed = .01f;
		__this->___scrollSpeed_5 = (0.00999999978f);
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
// System.Void RoundClearScrn::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundClearScrn_Start_m13021C566C831D716409567D3CC51EEE27DCBAFE (RoundClearScrn_tD1FA8C3BBCE088B5A92ABDE9EA889CDAB432207D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_m7300004DA563486F23F6E3A9B802767E066CDDB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HideText();
		RoundClearScrn_HideText_m7E259E43B8EBB15013DFBAEE4CC4C907C8B2915C(__this, NULL);
		// theMainMenu = FindObjectOfType<MainMenu>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* L_0;
		L_0 = Object_FindObjectOfType_TisMainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_m7300004DA563486F23F6E3A9B802767E066CDDB0(Object_FindObjectOfType_TisMainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_m7300004DA563486F23F6E3A9B802767E066CDDB0_RuntimeMethod_var);
		__this->___theMainMenu_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___theMainMenu_10), (void*)L_0);
		// }
		return;
	}
}
// System.Void RoundClearScrn::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundClearScrn_OnEnable_mCE61E2DB24EB66D6654682EFC18F2968850E7DF4 (RoundClearScrn_tD1FA8C3BBCE088B5A92ABDE9EA889CDAB432207D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CombatInputEventHandler_t57DD5613DD0FB2C9B1173EE1A18884D46E28D51B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnLevelEvent_tAA29085106273E37D1906015E243B616679EEA70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoundClearScrn_InputEvent_m0263212C264B1A93CC7DD72BF17E8326151E8CA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoundClearScrn_ShowLevelCompleteScrn_mAA0019F4495A6320BAD7474F5AD56A2021992CF3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EnemyWaveSystem.onLevelComplete += ShowLevelCompleteScrn;
		OnLevelEvent_tAA29085106273E37D1906015E243B616679EEA70* L_0 = (OnLevelEvent_tAA29085106273E37D1906015E243B616679EEA70*)il2cpp_codegen_object_new(OnLevelEvent_tAA29085106273E37D1906015E243B616679EEA70_il2cpp_TypeInfo_var);
		OnLevelEvent__ctor_mF076B337EA35B10476E6C227C8D566A71B78C712(L_0, __this, (intptr_t)((void*)RoundClearScrn_ShowLevelCompleteScrn_mAA0019F4495A6320BAD7474F5AD56A2021992CF3_RuntimeMethod_var), NULL);
		EnemyWaveSystem_add_onLevelComplete_m406AF3BD129D1C705915F3EB4C3CD45F5E08089E(L_0, NULL);
		// InputManager.onCombatInputEvent += InputEvent;
		CombatInputEventHandler_t57DD5613DD0FB2C9B1173EE1A18884D46E28D51B* L_1 = (CombatInputEventHandler_t57DD5613DD0FB2C9B1173EE1A18884D46E28D51B*)il2cpp_codegen_object_new(CombatInputEventHandler_t57DD5613DD0FB2C9B1173EE1A18884D46E28D51B_il2cpp_TypeInfo_var);
		CombatInputEventHandler__ctor_mCC2CCF373341D48425C0523FA8CAD3284ED9F891(L_1, __this, (intptr_t)((void*)RoundClearScrn_InputEvent_m0263212C264B1A93CC7DD72BF17E8326151E8CA0_RuntimeMethod_var), NULL);
		InputManager_add_onCombatInputEvent_m3D7C1AC37427B2043AACE6C88E4BCBDB6DEC49D2(L_1, NULL);
		// }
		return;
	}
}
// System.Void RoundClearScrn::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundClearScrn_OnDisable_mDF7635B26ECF55C76EABACAFBD3A6D71D9E18BC0 (RoundClearScrn_tD1FA8C3BBCE088B5A92ABDE9EA889CDAB432207D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CombatInputEventHandler_t57DD5613DD0FB2C9B1173EE1A18884D46E28D51B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnLevelEvent_tAA29085106273E37D1906015E243B616679EEA70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoundClearScrn_InputEvent_m0263212C264B1A93CC7DD72BF17E8326151E8CA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoundClearScrn_ShowLevelCompleteScrn_mAA0019F4495A6320BAD7474F5AD56A2021992CF3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EnemyWaveSystem.onLevelComplete -= ShowLevelCompleteScrn;
		OnLevelEvent_tAA29085106273E37D1906015E243B616679EEA70* L_0 = (OnLevelEvent_tAA29085106273E37D1906015E243B616679EEA70*)il2cpp_codegen_object_new(OnLevelEvent_tAA29085106273E37D1906015E243B616679EEA70_il2cpp_TypeInfo_var);
		OnLevelEvent__ctor_mF076B337EA35B10476E6C227C8D566A71B78C712(L_0, __this, (intptr_t)((void*)RoundClearScrn_ShowLevelCompleteScrn_mAA0019F4495A6320BAD7474F5AD56A2021992CF3_RuntimeMethod_var), NULL);
		EnemyWaveSystem_remove_onLevelComplete_mA9FCC1CC640346F27D05D45F20CC224900A02302(L_0, NULL);
		// InputManager.onCombatInputEvent -= InputEvent;
		CombatInputEventHandler_t57DD5613DD0FB2C9B1173EE1A18884D46E28D51B* L_1 = (CombatInputEventHandler_t57DD5613DD0FB2C9B1173EE1A18884D46E28D51B*)il2cpp_codegen_object_new(CombatInputEventHandler_t57DD5613DD0FB2C9B1173EE1A18884D46E28D51B_il2cpp_TypeInfo_var);
		CombatInputEventHandler__ctor_mCC2CCF373341D48425C0523FA8CAD3284ED9F891(L_1, __this, (intptr_t)((void*)RoundClearScrn_InputEvent_m0263212C264B1A93CC7DD72BF17E8326151E8CA0_RuntimeMethod_var), NULL);
		InputManager_remove_onCombatInputEvent_mB3A0294998316ABB16A65D92A515F8DA4816FA5C(L_1, NULL);
		// }
		return;
	}
}
// System.Void RoundClearScrn::ShowLevelCompleteScrn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundClearScrn_ShowLevelCompleteScrn_mAA0019F4495A6320BAD7474F5AD56A2021992CF3 (RoundClearScrn_tD1FA8C3BBCE088B5A92ABDE9EA889CDAB432207D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40209CFC2D658CEE11535121AA96073E840FE1B5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fader.Fade(UIFader.FADE.FadeOut, .5f, 1);
		UIFader_tE5FB19417E20BF6D04CD0157B5163463B7EE8D64* L_0 = __this->___fader_8;
		UIFader_Fade_m76CB2154C5D884CE96975CFB5769D2E5CCE8CD83(L_0, 1, (0.5f), (1.0f), NULL);
		// Invoke("ShowText", 1.4f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral40209CFC2D658CEE11535121AA96073E840FE1B5, (1.39999998f), NULL);
		// }
		return;
	}
}
// System.Void RoundClearScrn::ShowText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundClearScrn_ShowText_mB58DC5CDCDA29C78A8C0B86E60130FDC40E7DFCE (RoundClearScrn_tD1FA8C3BBCE088B5A92ABDE9EA889CDAB432207D* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// text.gameObject.SetActive(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// string randomSaying = GetRandomSaying();
		String_t* L_2;
		L_2 = RoundClearScrn_GetRandomSaying_m7E2A8C3DF23B0DDC5BE370D7FFFA4D8EDAB7B81D(__this, NULL);
		V_0 = L_2;
		// randomText.text = randomSaying;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___randomText_5;
		String_t* L_4 = V_0;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		// }
		return;
	}
}
// System.Void RoundClearScrn::HideText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundClearScrn_HideText_m7E259E43B8EBB15013DFBAEE4CC4C907C8B2915C (RoundClearScrn_tD1FA8C3BBCE088B5A92ABDE9EA889CDAB432207D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text.gameObject.SetActive(false);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// randomText.text = ""; // Clear random text
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___randomText_5;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void RoundClearScrn::InputEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundClearScrn_InputEvent_m0263212C264B1A93CC7DD72BF17E8326151E8CA0 (RoundClearScrn_tD1FA8C3BBCE088B5A92ABDE9EA889CDAB432207D* __this, String_t* ___action0, const RuntimeMethod* method) 
{
	{
		// if(text.gameObject.activeSelf){
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// RestartLevel();
		RoundClearScrn_RestartLevel_m15E460090A505708D1EF592E755FA4505BAC621B(__this, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void RoundClearScrn::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundClearScrn_Update_m63BE6A41C67B0BD84DD8323B77AE32C7A01A8DC9 (RoundClearScrn_tD1FA8C3BBCE088B5A92ABDE9EA889CDAB432207D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if(text != null && text.gameObject.activeSelf){
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___text_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		bool L_4;
		L_4 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_3, NULL);
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// float t = Mathf.PingPong(Time.time * speed, 1f);
		float L_5;
		L_5 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_6 = __this->___speed_7;
		float L_7;
		L_7 = Mathf_PingPong_m157C55BCFEA2BB96680B7B29D714C3F9390551C9_inline(((float)il2cpp_codegen_multiply(L_5, L_6)), (1.0f), NULL);
		V_0 = L_7;
		// text.color = ColorTransition.Evaluate(t);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___text_4;
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_9 = __this->___ColorTransition_6;
		float L_10 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Gradient_Evaluate_m332A32F48EA3F884CB55D74131DF8064F29F9C32(L_9, L_10, NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_11);
	}

IL_004e:
	{
		// if(Input.GetMouseButtonDown(0) && text.gameObject.activeSelf){
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (!L_12)
		{
			goto IL_006e;
		}
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___text_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		bool L_15;
		L_15 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_14, NULL);
		if (!L_15)
		{
			goto IL_006e;
		}
	}
	{
		// RestartLevel();
		RoundClearScrn_RestartLevel_m15E460090A505708D1EF592E755FA4505BAC621B(__this, NULL);
	}

IL_006e:
	{
		// if(tryAgain){
		bool L_16 = __this->___tryAgain_12;
		if (!L_16)
		{
			goto IL_0081;
		}
	}
	{
		// theMainMenu.SetLogo();
		MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* L_17 = __this->___theMainMenu_10;
		MainMenu_SetLogo_mC7571F9A38F810D8EBDF69ED8CBD74D114472F08(L_17, NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void RoundClearScrn::activateLevelSelect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundClearScrn_activateLevelSelect_m0C276825CFA59E5E6B61265A3AF677DD8B84CA27 (RoundClearScrn_tD1FA8C3BBCE088B5A92ABDE9EA889CDAB432207D* __this, int32_t ___leveToAdd0, const RuntimeMethod* method) 
{
	{
		// levelNumber += leveToAdd;
		int32_t L_0 = __this->___levelNumber_13;
		int32_t L_1 = ___leveToAdd0;
		__this->___levelNumber_13 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// ScoreManager.SetScore();
		ScoreManager_SetScore_m0D7925A3A9D606A7180CD443591B68D67AD6A1F7(NULL);
		// }
		return;
	}
}
// System.Void RoundClearScrn::RestartLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundClearScrn_RestartLevel_m15E460090A505708D1EF592E755FA4505BAC621B (RoundClearScrn_tD1FA8C3BBCE088B5A92ABDE9EA889CDAB432207D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisButtonFlicker_tD1F4E8A31868ADAEEC2670ED110FED0CBA3D8370_mDE0D312167AE9C0A37BB9C0358909D7780054358_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16BBD452AE7470DC470C6250580CE232EC170AE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral887E8A4E9445F1B6B4E1DA5B4B329F56490679A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral983F0570B2C64B88F99BBF38A7F3E13143F5B2C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC810448F0C581EA3FC983B338917324955067E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC713A19D291892D3C3F4F14F22FFC75F3D4E086A);
		s_Il2CppMethodInitialized = true;
	}
	ButtonFlicker_tD1F4E8A31868ADAEEC2670ED110FED0CBA3D8370* V_0 = NULL;
	{
		// if(!restartInProgress){
		bool L_0 = __this->___restartInProgress_11;
		if (L_0)
		{
			goto IL_00ad;
		}
	}
	{
		// restartInProgress = true;
		__this->___restartInProgress_11 = (bool)1;
		// GlobalAudioPlayer.PlaySFX("ButtonStart");
		GlobalAudioPlayer_PlaySFX_m45E3680CB7B0420B6169C615CDCC4C76AF64143B(_stringLiteral16BBD452AE7470DC470C6250580CE232EC170AE4, NULL);
		// ButtonFlicker bf =  GetComponentInChildren<ButtonFlicker>();
		ButtonFlicker_tD1F4E8A31868ADAEEC2670ED110FED0CBA3D8370* L_1;
		L_1 = Component_GetComponentInChildren_TisButtonFlicker_tD1F4E8A31868ADAEEC2670ED110FED0CBA3D8370_mDE0D312167AE9C0A37BB9C0358909D7780054358(__this, Component_GetComponentInChildren_TisButtonFlicker_tD1F4E8A31868ADAEEC2670ED110FED0CBA3D8370_mDE0D312167AE9C0A37BB9C0358909D7780054358_RuntimeMethod_var);
		V_0 = L_1;
		// if(bf != null) bf.StartButtonFlicker();
		ButtonFlicker_tD1F4E8A31868ADAEEC2670ED110FED0CBA3D8370* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// if(bf != null) bf.StartButtonFlicker();
		ButtonFlicker_tD1F4E8A31868ADAEEC2670ED110FED0CBA3D8370* L_4 = V_0;
		ButtonFlicker_StartButtonFlicker_m9B70069B558272589BA8CF4538CE1F2C5B6E3B6E(L_4, NULL);
	}

IL_0032:
	{
		// if(levelNumber > 1){
		int32_t L_5 = __this->___levelNumber_13;
		// if(levelNumber > 5 && levelNumber < 10){
		int32_t L_6 = __this->___levelNumber_13;
		if ((((int32_t)L_6) <= ((int32_t)5)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_7 = __this->___levelNumber_13;
		if ((((int32_t)L_7) >= ((int32_t)((int32_t)10))))
		{
			goto IL_005f;
		}
	}
	{
		// Debug.Log("Level 6 Starter!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralC713A19D291892D3C3F4F14F22FFC75F3D4E086A, NULL);
		// GameOverScrn.LevelSixStart();
		GameOverScrn_LevelSixStart_m72C0046A288868330CAA7F3559F517BAD03913F0(NULL);
		goto IL_009d;
	}

IL_005f:
	{
		// }else if (levelNumber > 10 && levelNumber < 15){
		int32_t L_8 = __this->___levelNumber_13;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_9 = __this->___levelNumber_13;
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)15))))
		{
			goto IL_0084;
		}
	}
	{
		// Debug.Log("Level 11 Starter!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral983F0570B2C64B88F99BBF38A7F3E13143F5B2C7, NULL);
		// GameOverScrn.LevelElevenStart();
		GameOverScrn_LevelElevenStart_m6C08924F365BD630B65A5412CAA76CED790D2EC3(NULL);
		goto IL_009d;
	}

IL_0084:
	{
		// }else if (levelNumber > 15){
		int32_t L_10 = __this->___levelNumber_13;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)15))))
		{
			goto IL_009d;
		}
	}
	{
		// Debug.Log("Level 16 Starter!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralAC810448F0C581EA3FC983B338917324955067E8, NULL);
		// GameOverScrn.LevelSixTeenStart();
		GameOverScrn_LevelSixTeenStart_m5A82F912F1E8A3493E1C6AE0CF766F993339204E(NULL);
	}

IL_009d:
	{
		// Invoke("RestartScene", 1f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral887E8A4E9445F1B6B4E1DA5B4B329F56490679A6, (1.0f), NULL);
	}

IL_00ad:
	{
		// }
		return;
	}
}
// System.Void RoundClearScrn::RestartScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundClearScrn_RestartScene_mCFFEAC25D12673510D100F9DA270EE72A92FD003 (RoundClearScrn_tD1FA8C3BBCE088B5A92ABDE9EA889CDAB432207D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	{
		// theMainMenu.SetLogo();
		MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* L_0 = __this->___theMainMenu_10;
		MainMenu_SetLogo_mC7571F9A38F810D8EBDF69ED8CBD74D114472F08(L_0, NULL);
		// SceneManager.LoadScene("Game" + levelNumber);
		int32_t* L_1 = (&__this->___levelNumber_13);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_3, NULL);
		// }
		return;
	}
}
// System.Void RoundClearScrn::setTry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundClearScrn_setTry_m516473E5BD26FE8AAFEE88B54515202F94DA3352 (RoundClearScrn_tD1FA8C3BBCE088B5A92ABDE9EA889CDAB432207D* __this, const RuntimeMethod* method) 
{
	{
		// tryAgain = true;
		__this->___tryAgain_12 = (bool)1;
		// }
		return;
	}
}
// System.String RoundClearScrn::GetRandomSaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoundClearScrn_GetRandomSaying_m7E2A8C3DF23B0DDC5BE370D7FFFA4D8EDAB7B81D (RoundClearScrn_tD1FA8C3BBCE088B5A92ABDE9EA889CDAB432207D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int index = Random.Range(0, randomSayings.Length);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___randomSayings_14;
		int32_t L_1;
		L_1 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		V_0 = L_1;
		// return randomSayings[index];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->___randomSayings_14;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// System.Void RoundClearScrn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundClearScrn__ctor_m4F97067C9333C9ABAFE58AD5DF7C8D76C2C1BB50 (RoundClearScrn_tD1FA8C3BBCE088B5A92ABDE9EA889CDAB432207D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DACDC7BEEFEFBF93F50D735C5AD463E76B6678E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral118B65697F24B416C5EAE1F6D8E12DC40E4A10BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A432F7EEA55D7CC069451E33E9314350E265CD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral205CEEC1B96E3B55D7B34FBFEA664BE145360AC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral473E48B28A05E4379D94EB40E291A6C26585C463);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral538406088030267291BBA054C9F8A6CB15D7AE70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8199DCD81BF02A3CCF30414BFB96A6957CB69987);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8298BF044C1526F090927689AE8A41DDD5D31C9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6C733233191F6B28957CC7BA051ACF1EFAE5F8C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float speed = 3.5f;
		__this->___speed_7 = (3.5f);
		// public string[] randomSayings = {
		//     "To see level progression click the Pause Button",
		//     "A power move will provide you stronger, and more long ranged attacks, press 'X' to use power moves",
		//     "The defend button will give you a window to attack enemies after they attack",
		//     "Never give up, the fate of the universe is in your hands!",
		//     "You can move while defending, use this to get out of danger",
		//     "If you run out of power energy, your power bar will flash white",
		//     "Hit the crate and blue barrel for more health pickups",
		//     "If the enemy runs off screen back up and wait for them to come back",
		//     "You?re a Champion, You can do it!"
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteral8199DCD81BF02A3CCF30414BFB96A6957CB69987);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral8199DCD81BF02A3CCF30414BFB96A6957CB69987);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteralE6C733233191F6B28957CC7BA051ACF1EFAE5F8C);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE6C733233191F6B28957CC7BA051ACF1EFAE5F8C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral0DACDC7BEEFEFBF93F50D735C5AD463E76B6678E);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral0DACDC7BEEFEFBF93F50D735C5AD463E76B6678E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		ArrayElementTypeCheck (L_4, _stringLiteral8298BF044C1526F090927689AE8A41DDD5D31C9B);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral8298BF044C1526F090927689AE8A41DDD5D31C9B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		ArrayElementTypeCheck (L_5, _stringLiteral118B65697F24B416C5EAE1F6D8E12DC40E4A10BB);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral118B65697F24B416C5EAE1F6D8E12DC40E4A10BB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		ArrayElementTypeCheck (L_6, _stringLiteral473E48B28A05E4379D94EB40E291A6C26585C463);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral473E48B28A05E4379D94EB40E291A6C26585C463);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		ArrayElementTypeCheck (L_7, _stringLiteral1A432F7EEA55D7CC069451E33E9314350E265CD2);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral1A432F7EEA55D7CC069451E33E9314350E265CD2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		ArrayElementTypeCheck (L_8, _stringLiteral538406088030267291BBA054C9F8A6CB15D7AE70);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral538406088030267291BBA054C9F8A6CB15D7AE70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		ArrayElementTypeCheck (L_9, _stringLiteral205CEEC1B96E3B55D7B34FBFEA664BE145360AC1);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral205CEEC1B96E3B55D7B34FBFEA664BE145360AC1);
		__this->___randomSayings_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___randomSayings_14), (void*)L_9);
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
// System.Void UIButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIButton_OnPointerDown_m23CF91573D3C63969DCFEDE827F29F302C1DD0E3 (UIButton_tE4A60203BFAEA6E580C4FFF798E7786592277042* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// InputManager.CombatInputEvent(actionDown);
		String_t* L_0 = __this->___actionDown_4;
		InputManager_CombatInputEvent_m4AC5DE10F6FC013C3D7212C84248B166BE57CA35(L_0, NULL);
		// pressed = true;
		__this->___pressed_7 = (bool)1;
		// }
		return;
	}
}
// System.Void UIButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIButton_OnPointerUp_m72FDB4D14F99CEBB746DE5D468563B6B99787E82 (UIButton_tE4A60203BFAEA6E580C4FFF798E7786592277042* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(actionUp != "") InputManager.CombatInputEvent(actionUp);
		String_t* L_0 = __this->___actionUp_5;
		bool L_1;
		L_1 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// if(actionUp != "") InputManager.CombatInputEvent(actionUp);
		String_t* L_2 = __this->___actionUp_5;
		InputManager_CombatInputEvent_m4AC5DE10F6FC013C3D7212C84248B166BE57CA35(L_2, NULL);
	}

IL_001d:
	{
		// pressed = false;
		__this->___pressed_7 = (bool)0;
		// }
		return;
	}
}
// System.Void UIButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIButton_Update_m01A61CCC853BE3B14F6B2E4807CCBFD4F189BBFB (UIButton_tE4A60203BFAEA6E580C4FFF798E7786592277042* __this, const RuntimeMethod* method) 
{
	{
		// if(updateEveryFrame && pressed) InputManager.CombatInputEvent(actionDown);
		bool L_0 = __this->___updateEveryFrame_6;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		bool L_1 = __this->___pressed_7;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// if(updateEveryFrame && pressed) InputManager.CombatInputEvent(actionDown);
		String_t* L_2 = __this->___actionDown_4;
		InputManager_CombatInputEvent_m4AC5DE10F6FC013C3D7212C84248B166BE57CA35(L_2, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void UIButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIButton__ctor_m9935188416DAC94BFBD2A161BC67EC02F581453C (UIButton_tE4A60203BFAEA6E580C4FFF798E7786592277042* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string actionDown = "";
		__this->___actionDown_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___actionDown_4), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string actionUp = "";
		__this->___actionUp_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___actionUp_5), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void UIDPadButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDPadButton_OnPointerDown_m12A7A14429DE9EA992798AD0241956BBA9BAE86F (UIDPadButton_t30E59AC998513FBBF8C59E85ED6B59A7F9E8982A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// InputManager.InputEvent(dir);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___dir_4;
		InputManager_InputEvent_m77E69CE5039B89DDCF09248E356C399948E862C5(L_0, NULL);
		// }
		return;
	}
}
// System.Void UIDPadButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDPadButton_OnPointerUp_m17324866772E6159B73BECE0C391496CAD7132F7 (UIDPadButton_t30E59AC998513FBBF8C59E85ED6B59A7F9E8982A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// InputManager.InputEvent(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		InputManager_InputEvent_m77E69CE5039B89DDCF09248E356C399948E862C5(L_0, NULL);
		// }
		return;
	}
}
// System.Void UIDPadButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDPadButton__ctor_m076D9CAE6E66822153C8F69691A13E3945C41314 (UIDPadButton_t30E59AC998513FBBF8C59E85ED6B59A7F9E8982A* __this, const RuntimeMethod* method) 
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
// System.Void UIFader::Fade(UIFader/FADE,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFader_Fade_m76CB2154C5D884CE96975CFB5769D2E5CCE8CD83 (UIFader_tE5FB19417E20BF6D04CD0157B5163463B7EE8D64* __this, int32_t ___fadeDir0, float ___fadeDuration1, float ___StartDelay2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(img != null){
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___img_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		// if (fadeDir == FADE.FadeIn){
		int32_t L_2 = ___fadeDir0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		// StartCoroutine(FadeCoroutine(1f, 0f, fadeDuration, StartDelay, true));
		float L_3 = ___fadeDuration1;
		float L_4 = ___StartDelay2;
		RuntimeObject* L_5;
		L_5 = UIFader_FadeCoroutine_m7ACB39573BDD148E00004C9E2F19FADD5E1D78C5(__this, (1.0f), (0.0f), L_3, L_4, (bool)1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
	}

IL_002b:
	{
		// if (fadeDir == FADE.FadeOut){
		int32_t L_7 = ___fadeDir0;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0049;
		}
	}
	{
		// StartCoroutine(FadeCoroutine(0f, 1f, fadeDuration, StartDelay, false));
		float L_8 = ___fadeDuration1;
		float L_9 = ___StartDelay2;
		RuntimeObject* L_10;
		L_10 = UIFader_FadeCoroutine_m7ACB39573BDD148E00004C9E2F19FADD5E1D78C5(__this, (0.0f), (1.0f), L_8, L_9, (bool)0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_10, NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator UIFader::FadeCoroutine(System.Single,System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIFader_FadeCoroutine_m7ACB39573BDD148E00004C9E2F19FADD5E1D78C5 (UIFader_tE5FB19417E20BF6D04CD0157B5163463B7EE8D64* __this, float ___From0, float ___To1, float ___Duration2, float ___StartDelay3, bool ___DisableOnFinish4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeCoroutineU3Ed__3_t4970422EA76F6BA1EA9BE850D848164F9CAF493F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeCoroutineU3Ed__3_t4970422EA76F6BA1EA9BE850D848164F9CAF493F* L_0 = (U3CFadeCoroutineU3Ed__3_t4970422EA76F6BA1EA9BE850D848164F9CAF493F*)il2cpp_codegen_object_new(U3CFadeCoroutineU3Ed__3_t4970422EA76F6BA1EA9BE850D848164F9CAF493F_il2cpp_TypeInfo_var);
		U3CFadeCoroutineU3Ed__3__ctor_m3DCEDC283752AD61DA34D23FDC8C52F3DC86D327(L_0, 0, NULL);
		U3CFadeCoroutineU3Ed__3_t4970422EA76F6BA1EA9BE850D848164F9CAF493F* L_1 = L_0;
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CFadeCoroutineU3Ed__3_t4970422EA76F6BA1EA9BE850D848164F9CAF493F* L_2 = L_1;
		float L_3 = ___From0;
		L_2->___From_4 = L_3;
		U3CFadeCoroutineU3Ed__3_t4970422EA76F6BA1EA9BE850D848164F9CAF493F* L_4 = L_2;
		float L_5 = ___To1;
		L_4->___To_5 = L_5;
		U3CFadeCoroutineU3Ed__3_t4970422EA76F6BA1EA9BE850D848164F9CAF493F* L_6 = L_4;
		float L_7 = ___Duration2;
		L_6->___Duration_6 = L_7;
		U3CFadeCoroutineU3Ed__3_t4970422EA76F6BA1EA9BE850D848164F9CAF493F* L_8 = L_6;
		float L_9 = ___StartDelay3;
		L_8->___StartDelay_2 = L_9;
		U3CFadeCoroutineU3Ed__3_t4970422EA76F6BA1EA9BE850D848164F9CAF493F* L_10 = L_8;
		bool L_11 = ___DisableOnFinish4;
		L_10->___DisableOnFinish_7 = L_11;
		return L_10;
	}
}
// System.Void UIFader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFader__ctor_mD33AFFD22C1D17B1282C202F6EB43EBC1FD236B8 (UIFader_tE5FB19417E20BF6D04CD0157B5163463B7EE8D64* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIFader/<FadeCoroutine>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeCoroutineU3Ed__3__ctor_m3DCEDC283752AD61DA34D23FDC8C52F3DC86D327 (U3CFadeCoroutineU3Ed__3_t4970422EA76F6BA1EA9BE850D848164F9CAF493F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UIFader/<FadeCoroutine>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeCoroutineU3Ed__3_System_IDisposable_Dispose_m0DD94C2397588A9A9389E24B4CD969884D5464EF (U3CFadeCoroutineU3Ed__3_t4970422EA76F6BA1EA9BE850D848164F9CAF493F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UIFader/<FadeCoroutine>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeCoroutineU3Ed__3_MoveNext_mA97C8D5DAD82DC4BB66160A6F8A7443802D12E86 (U3CFadeCoroutineU3Ed__3_t4970422EA76F6BA1EA9BE850D848164F9CAF493F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UIFader_tE5FB19417E20BF6D04CD0157B5163463B7EE8D64* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		UIFader_tE5FB19417E20BF6D04CD0157B5163463B7EE8D64* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_0123;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(StartDelay);
		float L_3 = __this->___StartDelay_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, L_3, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0043:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float t=0;
		__this->___U3CtU3E5__2_8 = (0.0f);
		// Color col = img.color;
		UIFader_tE5FB19417E20BF6D04CD0157B5163463B7EE8D64* L_5 = V_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = L_5->___img_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_6);
		__this->___U3CcolU3E5__3_9 = L_7;
		// img.enabled = true;
		UIFader_tE5FB19417E20BF6D04CD0157B5163463B7EE8D64* L_8 = V_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = L_8->___img_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)1, NULL);
		// img.color = new Color(col.r, col.g, col.b, From);
		UIFader_tE5FB19417E20BF6D04CD0157B5163463B7EE8D64* L_10 = V_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = L_10->___img_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_12 = (&__this->___U3CcolU3E5__3_9);
		float L_13 = L_12->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_14 = (&__this->___U3CcolU3E5__3_9);
		float L_15 = L_14->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_16 = (&__this->___U3CcolU3E5__3_9);
		float L_17 = L_16->___b_2;
		float L_18 = __this->___From_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		memset((&L_19), 0, sizeof(L_19));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_19), L_13, L_15, L_17, L_18, /*hidden argument*/NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_19);
		goto IL_012a;
	}

IL_00ab:
	{
		// float alpha = Mathf.Lerp (From, To, t);
		float L_20 = __this->___From_4;
		float L_21 = __this->___To_5;
		float L_22 = __this->___U3CtU3E5__2_8;
		float L_23;
		L_23 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_20, L_21, L_22, NULL);
		V_2 = L_23;
		// img.color = new Color(col.r, col.g, col.b, alpha);
		UIFader_tE5FB19417E20BF6D04CD0157B5163463B7EE8D64* L_24 = V_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_25 = L_24->___img_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_26 = (&__this->___U3CcolU3E5__3_9);
		float L_27 = L_26->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_28 = (&__this->___U3CcolU3E5__3_9);
		float L_29 = L_28->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_30 = (&__this->___U3CcolU3E5__3_9);
		float L_31 = L_30->___b_2;
		float L_32 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33;
		memset((&L_33), 0, sizeof(L_33));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_33), L_27, L_29, L_31, L_32, /*hidden argument*/NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_25, L_33);
		// t += Time.deltaTime/Duration;
		float L_34 = __this->___U3CtU3E5__2_8;
		float L_35;
		L_35 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_36 = __this->___Duration_6;
		__this->___U3CtU3E5__2_8 = ((float)il2cpp_codegen_add(L_34, ((float)(L_35/L_36))));
		// yield return 0;
		int32_t L_37 = 0;
		RuntimeObject* L_38 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_37);
		__this->___U3CU3E2__current_1 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_38);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0123:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_012a:
	{
		// while(t<1){
		float L_39 = __this->___U3CtU3E5__2_8;
		if ((((float)L_39) < ((float)(1.0f))))
		{
			goto IL_00ab;
		}
	}
	{
		// img.color = new Color(col.r, col.g, col.b, To);
		UIFader_tE5FB19417E20BF6D04CD0157B5163463B7EE8D64* L_40 = V_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_41 = L_40->___img_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_42 = (&__this->___U3CcolU3E5__3_9);
		float L_43 = L_42->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_44 = (&__this->___U3CcolU3E5__3_9);
		float L_45 = L_44->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_46 = (&__this->___U3CcolU3E5__3_9);
		float L_47 = L_46->___b_2;
		float L_48 = __this->___To_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_49;
		memset((&L_49), 0, sizeof(L_49));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_49), L_43, L_45, L_47, L_48, /*hidden argument*/NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_41, L_49);
		// img.enabled = !DisableOnFinish;
		UIFader_tE5FB19417E20BF6D04CD0157B5163463B7EE8D64* L_50 = V_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_51 = L_50->___img_4;
		bool L_52 = __this->___DisableOnFinish_7;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_51, (bool)((((int32_t)L_52) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return (bool)0;
	}
}
// System.Object UIFader/<FadeCoroutine>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeCoroutineU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5E9936C4F072D36363B7F2B54CDE1D6D546A7665 (U3CFadeCoroutineU3Ed__3_t4970422EA76F6BA1EA9BE850D848164F9CAF493F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UIFader/<FadeCoroutine>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeCoroutineU3Ed__3_System_Collections_IEnumerator_Reset_mA7A2C2A561CF3D6F4194A7166B05BAA35D710B48 (U3CFadeCoroutineU3Ed__3_t4970422EA76F6BA1EA9BE850D848164F9CAF493F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeCoroutineU3Ed__3_System_Collections_IEnumerator_Reset_mA7A2C2A561CF3D6F4194A7166B05BAA35D710B48_RuntimeMethod_var)));
	}
}
// System.Object UIFader/<FadeCoroutine>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeCoroutineU3Ed__3_System_Collections_IEnumerator_get_Current_m8542A417EB19A74C0D2F87D8D0DBC566472035CD (U3CFadeCoroutineU3Ed__3_t4970422EA76F6BA1EA9BE850D848164F9CAF493F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___rightVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RawImage_get_uvRect_m83D2C4632C6AE437D1DC775904AC2FA8CB83D823_inline (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, const RuntimeMethod* method) 
{
	{
		// return m_UVRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = __this->___m_UVRect_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_PingPong_m157C55BCFEA2BB96680B7B29D714C3F9390551C9_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___length1;
		float L_2;
		L_2 = Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline(L_0, ((float)il2cpp_codegen_multiply(L_1, (2.0f))), NULL);
		___t0 = L_2;
		float L_3 = ___length1;
		float L_4 = ___t0;
		float L_5 = ___length1;
		float L_6;
		L_6 = fabsf(((float)il2cpp_codegen_subtract(L_4, L_5)));
		V_0 = ((float)il2cpp_codegen_subtract(L_3, L_6));
		goto IL_001d;
	}

IL_001d:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
