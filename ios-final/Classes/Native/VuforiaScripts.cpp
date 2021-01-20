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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// BoundingBoxRenderer
struct BoundingBoxRenderer_t687A36FDD509AC21A29D0CF70359619EFD251AFB;
// DefaultInitializationErrorHandler
struct DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38;
// DefaultModelRecoEventHandler
struct DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA;
// DefaultTrackableEventHandler
struct DefaultTrackableEventHandler_t6997E0A19AC0FABC165FB7264F57DF2EDF4E8022;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD;
// System.Action`1<System.Int32Enum>
struct Action_1_tABA1E3BFA092E3309A0ECC53722E4F9826DCE983;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<UnityEngine.Camera>
struct Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C;
// System.Action`1<UnityEngine.Camera[]>
struct Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A;
// System.Action`1<UnityEngine.Font>
struct Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF;
// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,System.Object>
struct Action_2_t90FA358EDC64669F7C4BC31AB18EA84974155475;
// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>
struct Action_2_t9F55CDD4158CA55A03F1D448889BDD8A9C4D7E04;
// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]>
struct Action_2_t11D263E8C52BF70BBCED2592B3AA25E25AE2E2F5;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget>
struct Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63;
// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>
struct Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9;
// System.Collections.Generic.List`1<Vuforia.IObjectRecoEventHandler>
struct List_1_tD4C154F626A17DBC9FBC99FAF2FDB57A2BBCB0BD;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_tE4338C7F7D33C78CB75B44EB5CCCA0152E97497B;
// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>
struct List_1_t1314A3DDAE2D8AD81F9403BD961C3CC0530B04A9;
// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Camera[]
struct CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Font
struct Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100;
// UnityEngine.GUIStyle
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572;
// UnityEngine.GUIStyleState
struct GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Plane[]
struct PlaneU5BU5D_t79471E0ABE147C3018D88A036897B6DB49A782AA;
// UnityEngine.RectOffset
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Renderer[]
struct RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// Vuforia.DigitalEyewearARController
struct DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4;
// Vuforia.DigitalEyewearARController/SerializableViewerParameters
struct SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9;
// Vuforia.ICameraConfiguration
struct ICameraConfiguration_tB7509A17C94E12154FA84F00D5E0A03EE3F4AF3F;
// Vuforia.IObjectRecoEventHandler
struct IObjectRecoEventHandler_tBEBEBF99372FCF402529CC258FBB6121A3212821;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t9460928CD061E83FD8942A0ED1865D2451A5E248;
// Vuforia.ITrackerManager
struct ITrackerManager_tF9B9BD66F3A783EE6406F6E14B874385FE5E156B;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755;
// Vuforia.InternalModelTarget
struct InternalModelTarget_t423462994B1F6AB6566A2E38C4B21FB5FAFCEA47;
// Vuforia.ModelRecoBehaviour
struct ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291;
// Vuforia.ModelTarget
struct ModelTarget_t6761EF80F84DC8D31A7266E6B7AED954F25CD54D;
// Vuforia.ModelTargetBehaviour
struct ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0;
// Vuforia.ModelTargetBehaviour[]
struct ModelTargetBehaviourU5BU5D_t7C081ED9446E930306255382D788CD614D99F69B;
// Vuforia.ObjectRecoBehaviour
struct ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D;
// Vuforia.ObjectTracker
struct ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E;
// Vuforia.PositionalDeviceTracker
struct PositionalDeviceTracker_tEFAA5FDB9CF19DA74081AE51B41B4B5D9F40D8EE;
// Vuforia.TargetFinder
struct TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC;
// Vuforia.TargetFinder/ModelRecoSearchResult
struct ModelRecoSearchResult_tB293FF5B3A646FF59DE16F2498C74EE958425354;
// Vuforia.TargetFinder/TargetSearchResult
struct TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5;
// Vuforia.Trackable
struct Trackable_t2A23C572321E7D4FEAC9A1019DFA0AA144FC9B8F;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4;
// Vuforia.UnityCompiled.IUnityCompiledFacade
struct IUnityCompiledFacade_t0E3A7AE8F2EFBD9E4E214CB598761DDD267E70BE;
// Vuforia.UnityCompiled.IUnityRenderPipeline
struct IUnityRenderPipeline_tAD5FDC16A735AA177793B835843069369918FC34;
// Vuforia.UnityCompiled.RuntimeOpenSourceInitializer
struct RuntimeOpenSourceInitializer_t81785D24983BCE4C95906F20541AD7A3D3D11862;
// Vuforia.UnityCompiled.RuntimeOpenSourceInitializer/OpenSourceUnityCompiledFacade
struct OpenSourceUnityCompiledFacade_t8315EDA1848F9A4AA27FC5AEAA48F4097D1FF2A5;
// Vuforia.UnityCompiled.RuntimeOpenSourceInitializer/UnityRenderPipeline
struct UnityRenderPipeline_t62C711062D224A17F999C0F58CDB6F6E641560A4;
// Vuforia.VRDeviceController
struct VRDeviceController_tDFB2A6DE022256FD695E024050B1F3A07B97D044;
// Vuforia.VuforiaARController
struct VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876;
// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t9E688F16A822A56C5BB1910EF9B91448A9165BC2;
// Vuforia.VuforiaConfiguration
struct VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82;
// Vuforia.VuforiaConfiguration/DatabaseConfiguration
struct DatabaseConfiguration_t0B1E7EF9676AD0191B8AFA87BFD43EB9F141928A;
// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration
struct DeviceTrackerConfiguration_tC11D2DA49200D3693731D6AFF3F793E4315D1E3F;
// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration
struct DigitalEyewearConfiguration_t1BA464AEDA9C847084FCF4F1CA3C92719D655B18;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064;
// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration
struct SmartTerrainConfiguration_t6104CF56BC1AFE13ED509BB01CBE90E7E64372C7;
// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_tCC24E374B966B79D018C14F6807A6DDA47302F17;
// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct WebCamConfiguration_t0A5BD19A86D3AA8B68FB79C1EA8A5855A6C9F321;
// Vuforia.VuforiaRuntime
struct VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D;
// VuforiaMonoBehaviour
struct VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t11D263E8C52BF70BBCED2592B3AA25E25AE2E2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t9F55CDD4158CA55A03F1D448889BDD8A9C4D7E04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitError_t486F7D53F5B0B7943D4E22BE2D32F4913D4A0431_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitState_tF8DCB9A690DFC7C81A7543FB4E5D6097B27A4925_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModelRecoSearchResult_tB293FF5B3A646FF59DE16F2498C74EE958425354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModelTarget_t6761EF80F84DC8D31A7266E6B7AED954F25CD54D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenSourceUnityCompiledFacade_t8315EDA1848F9A4AA27FC5AEAA48F4097D1FF2A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeOpenSourceInitializer_t81785D24983BCE4C95906F20541AD7A3D3D11862_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityRenderPipeline_t62C711062D224A17F999C0F58CDB6F6E641560A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UpdateState_t9780BF40F4F57951DF918E1522D9A863D587EF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0049CC276AF37EC0DC4660402BB85EF930E7DA7F;
IL2CPP_EXTERN_C String_t* _stringLiteral044603D8671032519EBDE55C39570454D34DA7EF;
IL2CPP_EXTERN_C String_t* _stringLiteral0CB1FE567326D29F5946A5B648199591A4620539;
IL2CPP_EXTERN_C String_t* _stringLiteral1228FE6B82B57CB26855D4DDE2484FD95D458A5C;
IL2CPP_EXTERN_C String_t* _stringLiteral1561AEF8B532C2B1664689CD3DEB85C31F3B9692;
IL2CPP_EXTERN_C String_t* _stringLiteral1E4EAE414E63ABE1EF96F26A0A501386E7DB6538;
IL2CPP_EXTERN_C String_t* _stringLiteral20ACFDB1C2EF34391CC887264D75F0DA1B6C734B;
IL2CPP_EXTERN_C String_t* _stringLiteral368855C3B48C6461C105F7AA11EBE1FD792BE6BF;
IL2CPP_EXTERN_C String_t* _stringLiteral3A2524B609E886EDA2270A78B1F1D5DF105A613E;
IL2CPP_EXTERN_C String_t* _stringLiteral463AEBF964605A060C143944B09AB6F45BA4D8BF;
IL2CPP_EXTERN_C String_t* _stringLiteral46577BB1949E336EAF7CF1139C900C4D692F7EE5;
IL2CPP_EXTERN_C String_t* _stringLiteral49816762644AE6F1C69DA1B6BC46AC4064170D08;
IL2CPP_EXTERN_C String_t* _stringLiteral4BACB2BC0DE4E962B29B5436C04D5785D4E912DD;
IL2CPP_EXTERN_C String_t* _stringLiteral4C8A375D0F1708E37C1F10C81E8A8EADDCF1422F;
IL2CPP_EXTERN_C String_t* _stringLiteral53A0ACFAD59379B3E050338BF9F23CFC172EE787;
IL2CPP_EXTERN_C String_t* _stringLiteral55B91F52D8FEC72F2D5BBC45A4C7444CF770FBBD;
IL2CPP_EXTERN_C String_t* _stringLiteral5A187E91D3F02EC741DFB98FC6C73DAAF9DBB023;
IL2CPP_EXTERN_C String_t* _stringLiteral661EA0491F0E7BED843FF5C5C2C407A8494948C2;
IL2CPP_EXTERN_C String_t* _stringLiteral6F0C23CA0B463B15F912593C64420F7909B0E3F7;
IL2CPP_EXTERN_C String_t* _stringLiteral71853C6197A6A7F222DB0F1978C7CB232B87C5EE;
IL2CPP_EXTERN_C String_t* _stringLiteral74D8330FF7EE2BF01889D92730C9FB1CC78C788F;
IL2CPP_EXTERN_C String_t* _stringLiteral7AB1A22C152A21E59C89CBA73DA7DCB91237992A;
IL2CPP_EXTERN_C String_t* _stringLiteral97BEB6590C7C6141B44DB76C8227C95573350898;
IL2CPP_EXTERN_C String_t* _stringLiteralA5C50226661674EB4C0B1740C606FA2451271989;
IL2CPP_EXTERN_C String_t* _stringLiteralAD01E3847AA5918933113DC21A22AF4AD31DD4B7;
IL2CPP_EXTERN_C String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
IL2CPP_EXTERN_C String_t* _stringLiteralBBFA773E5A63A5EA58C9B6207E608CA0120E592A;
IL2CPP_EXTERN_C String_t* _stringLiteralC5FE255D4A3D3E47D48B6CEAFB5CC0AD38F08E63;
IL2CPP_EXTERN_C String_t* _stringLiteralD56CC950FC69A94976F20D9F0707460863B34898;
IL2CPP_EXTERN_C String_t* _stringLiteralD8F3DAF68846C2D999956AB061674C6E36560643;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDADF5911397D06A03A60E28AE30A0F473FE2B810;
IL2CPP_EXTERN_C String_t* _stringLiteralDE94F8210CFD3A81511C4888E9B42B92EA72417A;
IL2CPP_EXTERN_C String_t* _stringLiteralE1A26226E225524718652DAB2A25B6F6ED567B4E;
IL2CPP_EXTERN_C String_t* _stringLiteralE53A10BF18D590A4D354358810000744DAF6ACFD;
IL2CPP_EXTERN_C String_t* _stringLiteralE9D15606A3059B500ED24D58BAEE69DD511A6EC2;
IL2CPP_EXTERN_C String_t* _stringLiteralECFBC2E6AB5DC6876FD6C4100B47C58998B2C978;
IL2CPP_EXTERN_C String_t* _stringLiteralEF377B931B216AE61345F4D7136A8873D40DCB6B;
IL2CPP_EXTERN_C String_t* _stringLiteralF0069E5A5B01320A0272820D95849D17CA9E7BAE;
IL2CPP_EXTERN_C String_t* _stringLiteralF20D8C26DA74DE4466E64B5213AE19C080FADD5E;
IL2CPP_EXTERN_C String_t* _stringLiteralFA323761E549CD8DEB8C83797B725C220D84F261;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m2144BC1656C81F7F9B706AA9EC60411F4297170F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mA31EEA11FE58129FD616B4B19C332CC256DD9D19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m93D264DDF8D63987A4D835C83F40D588CDCC86B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mA3847577787DEE65C67A5DC1E5FD6CA65EC70D82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mF9A7A7E9E4B360A61EB7D616E8A01032E083E3B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291_mB1C2CB8A4559A15034D0E2AB7A92350D8156646A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4_m81E3785465C5B36522D217B045A33CD65B28B229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m89606C344B702A5671E2026C2872AAA1335EEC69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_mB7DEF049AA2B4E9D96FAE153C296F52B2ACCF244_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mE634C4CC0E00DB6D11503C88000677CD2A806228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultInitializationErrorHandler_DrawWindowContent_mB87D116DA38655853BC96A9211D1989E7EF33262_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultInitializationErrorHandler_OnVuforiaInitializationError_mEBF42837CA97AF2CFA28D28A9A39988EC5413F7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mFB43D5458906C4005145640D4396FDE5853AFA3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ITrackerManager_GetTracker_TisObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E_mCAB3ED46860A309B3862F2E69CE83AD4FCE42868_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_FindObjectsOfTypeAll_TisModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0_mDED67F4F44685EA63DB28B4E4BD59F1DBC0D3F03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_GetBuiltinResource_TisFont_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_mEECDBF58A9BE0C87D23275A7997B2445D783E371_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityRenderPipeline_OnBeginCameraRendering_m15CB7AC8363F2493DF182B36D04EACC08258FA71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityRenderPipeline_OnBeginFrameRendering_mFE0AAA7DA6B16B7ACA3AC9B5F84A6E87266BA491_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t BoundingBoxRenderer_OnRenderObject_m68673644D738E5BD11923B80B42A154C6C269BC6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultInitializationErrorHandler_Awake_m4038C70C44A5DA1837B36861AA2B4305424FBB1B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultInitializationErrorHandler_CreateSinglePixelTexture_m314E1B3B003A6F0253FD1A13070B93BCE6415AD6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultInitializationErrorHandler_DrawWindowContent_mB87D116DA38655853BC96A9211D1989E7EF33262_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultInitializationErrorHandler_OnDestroy_m504A72DB220B746C42FF75BA42482D64E49FDE17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultInitializationErrorHandler_OnGUI_m906C10E3D218D97B9EA7526E95F72A1E1FC04040_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultInitializationErrorHandler_SetErrorCode_mCECD875BCA20516C39AE387C06AE94F1E9CA7B51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultInitializationErrorHandler_SetupGUIStyles_m1D91C7E31546279E161EFE09E6EC9EB59B9AE95C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultInitializationErrorHandler__ctor_m9C0FB8A494158D7304A5A6D94D681DF55B0D42FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultInitializationErrorHandler_getKeyInfo_m08AC1F25C54DB08BAF219BFF64570EB8385D8E1A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultModelRecoEventHandler_FindExistingModelTarget_mBE361609CBEC751571D7A486C152F90B03A1ABCA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultModelRecoEventHandler_GetModelTargetWorldBounds_m9435246FE4CBCD9FB2E5B15FE84FF56565248105_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultModelRecoEventHandler_IsModelTrackedInView_m484B3B06B82A9C624B57993066A8501F09756D5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultModelRecoEventHandler_OnDestroy_m39E5011DE3ECC4BD4A79AE8830212BE01E556E65_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultModelRecoEventHandler_OnInitError_mB9195DBFE488078F0ECA77D17D2A0B584F00FAD3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultModelRecoEventHandler_OnInitialized_mFDD5794A2386BD764D0C646A87F925DDB2CD8E2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultModelRecoEventHandler_OnNewSearchResult_mD52DF1B20F00770C87F72001D0AE58F9033E251D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultModelRecoEventHandler_OnStateChanged_mA8324CFE9BBD107EC2ACB9A2857AD825EC40E389_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultModelRecoEventHandler_OnUpdateError_mC8D6FEF4CF523F938A8C0D9EF7FE065197EEE242_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultModelRecoEventHandler_ResetModelReco_m4E8F81D21371F5A517129E68E03B26851DE10C5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultModelRecoEventHandler_ShowErrorMessageInUI_m6CA52CF0093CC28BC4BCA765B4C701F10C476BEC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultModelRecoEventHandler_Start_mE9E3D8D2B2AB37738B1C6F7473AD4356A565E25F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultModelRecoEventHandler_Update_mDC58C379360938ACEFA1DDC53B32CA06E64A2DA3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultTrackableEventHandler_OnDestroy_m1E2C6C4E61424614E5CC0CACED2C0B8EAC50C208_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultTrackableEventHandler_OnTrackableStateChanged_m037F7353D61AC3E1BFEB93B7E51672578E783427_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultTrackableEventHandler_OnTrackingFound_mE63DDA2BD076BE6C6EE1235AD0F18AEBD6D199F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultTrackableEventHandler_OnTrackingLost_m8C2BEAB679465AE131946222D0F2D8FD39BD8CC3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultTrackableEventHandler_Start_m5A732F3C7EDB5E01C7CD5BDE821FF1B6C9E907ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OpenSourceUnityCompiledFacade__ctor_mB773D09AA7A4167A5E92922DA08FE6827570DA7C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeOpenSourceInitializer_InitializeFacade_m4E456DBA2604DD48341B172BE75E55AC76AFFBEE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRenderPipeline_OnBeginCameraRendering_m15CB7AC8363F2493DF182B36D04EACC08258FA71_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRenderPipeline_OnBeginFrameRendering_mFE0AAA7DA6B16B7ACA3AC9B5F84A6E87266BA491_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRenderPipeline__ctor_mBCF1D018D5EA889499AC8B84AB95B314CC7275DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRenderPipeline_add_BeginCameraRendering_mD4A5C6E21309929A0F5E9A5D6235998D2D309029_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRenderPipeline_add_BeginFrameRendering_m9D259FD7AC5FC26A80C5DE8E25AE477714771252_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRenderPipeline_remove_BeginCameraRendering_m2589F202EE39580EA9D2E951C7E71D866EECBA17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRenderPipeline_remove_BeginFrameRendering_m41048F48C42906494CA19BFD3D54B0F49EC2A02D_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com;
struct GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke;
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_com;
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_pinvoke;
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9;
struct CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60;
struct ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252;
struct PlaneU5BU5D_t79471E0ABE147C3018D88A036897B6DB49A782AA;
struct RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF;
struct ModelTargetBehaviourU5BU5D_t7C081ED9446E930306255382D788CD614D99F69B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tBB5D6FDE6CBE0067E5DC774822D5054F01745F8C 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Vuforia.ARController
struct  ARController_tBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293  : public RuntimeObject
{
public:
	// Vuforia.VuforiaBehaviour Vuforia.ARController::mVuforiaBehaviour
	VuforiaBehaviour_t9E688F16A822A56C5BB1910EF9B91448A9165BC2 * ___mVuforiaBehaviour_0;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_0() { return static_cast<int32_t>(offsetof(ARController_tBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293, ___mVuforiaBehaviour_0)); }
	inline VuforiaBehaviour_t9E688F16A822A56C5BB1910EF9B91448A9165BC2 * get_mVuforiaBehaviour_0() const { return ___mVuforiaBehaviour_0; }
	inline VuforiaBehaviour_t9E688F16A822A56C5BB1910EF9B91448A9165BC2 ** get_address_of_mVuforiaBehaviour_0() { return &___mVuforiaBehaviour_0; }
	inline void set_mVuforiaBehaviour_0(VuforiaBehaviour_t9E688F16A822A56C5BB1910EF9B91448A9165BC2 * value)
	{
		___mVuforiaBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVuforiaBehaviour_0), (void*)value);
	}
};


// Vuforia.Tracker
struct  Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Tracker::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1, ___U3CIsActiveU3Ek__BackingField_0)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_0() const { return ___U3CIsActiveU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_0() { return &___U3CIsActiveU3Ek__BackingField_0; }
	inline void set_U3CIsActiveU3Ek__BackingField_0(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_0 = value;
	}
};


// Vuforia.UnityCompiled.RuntimeOpenSourceInitializer
struct  RuntimeOpenSourceInitializer_t81785D24983BCE4C95906F20541AD7A3D3D11862  : public RuntimeObject
{
public:

public:
};

struct RuntimeOpenSourceInitializer_t81785D24983BCE4C95906F20541AD7A3D3D11862_StaticFields
{
public:
	// Vuforia.UnityCompiled.IUnityCompiledFacade Vuforia.UnityCompiled.RuntimeOpenSourceInitializer::sFacade
	RuntimeObject* ___sFacade_0;

public:
	inline static int32_t get_offset_of_sFacade_0() { return static_cast<int32_t>(offsetof(RuntimeOpenSourceInitializer_t81785D24983BCE4C95906F20541AD7A3D3D11862_StaticFields, ___sFacade_0)); }
	inline RuntimeObject* get_sFacade_0() const { return ___sFacade_0; }
	inline RuntimeObject** get_address_of_sFacade_0() { return &___sFacade_0; }
	inline void set_sFacade_0(RuntimeObject* value)
	{
		___sFacade_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sFacade_0), (void*)value);
	}
};


// Vuforia.UnityCompiled.RuntimeOpenSourceInitializer_OpenSourceUnityCompiledFacade
struct  OpenSourceUnityCompiledFacade_t8315EDA1848F9A4AA27FC5AEAA48F4097D1FF2A5  : public RuntimeObject
{
public:
	// Vuforia.UnityCompiled.IUnityRenderPipeline Vuforia.UnityCompiled.RuntimeOpenSourceInitializer_OpenSourceUnityCompiledFacade::mUnityRenderPipeline
	RuntimeObject* ___mUnityRenderPipeline_0;

public:
	inline static int32_t get_offset_of_mUnityRenderPipeline_0() { return static_cast<int32_t>(offsetof(OpenSourceUnityCompiledFacade_t8315EDA1848F9A4AA27FC5AEAA48F4097D1FF2A5, ___mUnityRenderPipeline_0)); }
	inline RuntimeObject* get_mUnityRenderPipeline_0() const { return ___mUnityRenderPipeline_0; }
	inline RuntimeObject** get_address_of_mUnityRenderPipeline_0() { return &___mUnityRenderPipeline_0; }
	inline void set_mUnityRenderPipeline_0(RuntimeObject* value)
	{
		___mUnityRenderPipeline_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUnityRenderPipeline_0), (void*)value);
	}
};


// Vuforia.UnityCompiled.RuntimeOpenSourceInitializer_UnityRenderPipeline
struct  UnityRenderPipeline_t62C711062D224A17F999C0F58CDB6F6E641560A4  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.Camera[]> Vuforia.UnityCompiled.RuntimeOpenSourceInitializer_UnityRenderPipeline::BeginFrameRendering
	Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * ___BeginFrameRendering_0;
	// System.Action`1<UnityEngine.Camera> Vuforia.UnityCompiled.RuntimeOpenSourceInitializer_UnityRenderPipeline::BeginCameraRendering
	Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * ___BeginCameraRendering_1;

public:
	inline static int32_t get_offset_of_BeginFrameRendering_0() { return static_cast<int32_t>(offsetof(UnityRenderPipeline_t62C711062D224A17F999C0F58CDB6F6E641560A4, ___BeginFrameRendering_0)); }
	inline Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * get_BeginFrameRendering_0() const { return ___BeginFrameRendering_0; }
	inline Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A ** get_address_of_BeginFrameRendering_0() { return &___BeginFrameRendering_0; }
	inline void set_BeginFrameRendering_0(Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * value)
	{
		___BeginFrameRendering_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginFrameRendering_0), (void*)value);
	}

	inline static int32_t get_offset_of_BeginCameraRendering_1() { return static_cast<int32_t>(offsetof(UnityRenderPipeline_t62C711062D224A17F999C0F58CDB6F6E641560A4, ___BeginCameraRendering_1)); }
	inline Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * get_BeginCameraRendering_1() const { return ___BeginCameraRendering_1; }
	inline Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C ** get_address_of_BeginCameraRendering_1() { return &___BeginCameraRendering_1; }
	inline void set_BeginCameraRendering_1(Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * value)
	{
		___BeginCameraRendering_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginCameraRendering_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

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


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


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


// Vuforia.ObjectTracker
struct  ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E  : public Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1
{
public:
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTracker::mActiveDataSets
	List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTracker::mDataSets
	List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * ___mDataSets_2;
	// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder> Vuforia.ObjectTracker::mTargetFinders
	Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 * ___mTargetFinders_3;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTracker::mImageTargetBuilder
	ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 * ___mImageTargetBuilder_4;

public:
	inline static int32_t get_offset_of_mActiveDataSets_1() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mActiveDataSets_1)); }
	inline List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * get_mActiveDataSets_1() const { return ___mActiveDataSets_1; }
	inline List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 ** get_address_of_mActiveDataSets_1() { return &___mActiveDataSets_1; }
	inline void set_mActiveDataSets_1(List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * value)
	{
		___mActiveDataSets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveDataSets_1), (void*)value);
	}

	inline static int32_t get_offset_of_mDataSets_2() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mDataSets_2)); }
	inline List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * get_mDataSets_2() const { return ___mDataSets_2; }
	inline List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 ** get_address_of_mDataSets_2() { return &___mDataSets_2; }
	inline void set_mDataSets_2(List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * value)
	{
		___mDataSets_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDataSets_2), (void*)value);
	}

	inline static int32_t get_offset_of_mTargetFinders_3() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mTargetFinders_3)); }
	inline Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 * get_mTargetFinders_3() const { return ___mTargetFinders_3; }
	inline Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 ** get_address_of_mTargetFinders_3() { return &___mTargetFinders_3; }
	inline void set_mTargetFinders_3(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 * value)
	{
		___mTargetFinders_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTargetFinders_3), (void*)value);
	}

	inline static int32_t get_offset_of_mImageTargetBuilder_4() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mImageTargetBuilder_4)); }
	inline ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 * get_mImageTargetBuilder_4() const { return ___mImageTargetBuilder_4; }
	inline ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 ** get_address_of_mImageTargetBuilder_4() { return &___mImageTargetBuilder_4; }
	inline void set_mImageTargetBuilder_4(ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 * value)
	{
		___mImageTargetBuilder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImageTargetBuilder_4), (void*)value);
	}
};


// Vuforia.TargetFinder_TargetFinderState
#pragma pack(push, tp, 1)
struct  TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D 
{
public:
	// System.Int32 Vuforia.TargetFinder_TargetFinderState::IsRequesting
	int32_t ___IsRequesting_0;
	// System.Int32 Vuforia.TargetFinder_TargetFinderState::UpdateState
	int32_t ___UpdateState_1;

public:
	inline static int32_t get_offset_of_IsRequesting_0() { return static_cast<int32_t>(offsetof(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D, ___IsRequesting_0)); }
	inline int32_t get_IsRequesting_0() const { return ___IsRequesting_0; }
	inline int32_t* get_address_of_IsRequesting_0() { return &___IsRequesting_0; }
	inline void set_IsRequesting_0(int32_t value)
	{
		___IsRequesting_0 = value;
	}

	inline static int32_t get_offset_of_UpdateState_1() { return static_cast<int32_t>(offsetof(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D, ___UpdateState_1)); }
	inline int32_t get_UpdateState_1() const { return ___UpdateState_1; }
	inline int32_t* get_address_of_UpdateState_1() { return &___UpdateState_1; }
	inline void set_UpdateState_1(int32_t value)
	{
		___UpdateState_1 = value;
	}
};
#pragma pack(pop, tp)


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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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


// UnityEngine.GUIStyleState
struct  GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5, ___m_SourceStyle_1)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_com* ___m_SourceStyle_1;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct  Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Normal_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


// UnityEngine.PrimitiveType
struct  PrimitiveType_t37F0056BA9C61594039522E27426D4D52D0943DE 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t37F0056BA9C61594039522E27426D4D52D0943DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RectOffset
struct  RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.Rendering.ScriptableRenderContext
struct  ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B 
{
public:
	// System.IntPtr UnityEngine.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.TextAnchor
struct  TextAnchor_tEC19034D476659A5E05366C63564F34DD30E7C57 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tEC19034D476659A5E05366C63564F34DD30E7C57, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct  TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.CameraDevice_CameraDeviceMode
struct  CameraDeviceMode_t31CE15C1D60CED5FC63DF3962D53D5DAADD40589 
{
public:
	// System.Int32 Vuforia.CameraDevice_CameraDeviceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraDeviceMode_t31CE15C1D60CED5FC63DF3962D53D5DAADD40589, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.DigitalEyewearARController_EyewearType
struct  EyewearType_t0DF90F97DCCF9F068455C2AF59B1758E89615C13 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController_EyewearType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EyewearType_t0DF90F97DCCF9F068455C2AF59B1758E89615C13, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.DigitalEyewearARController_SeeThroughConfiguration
struct  SeeThroughConfiguration_tF34F5E33DC51F5EEB23599A905DD112FF00C8E34 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController_SeeThroughConfiguration::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeeThroughConfiguration_tF34F5E33DC51F5EEB23599A905DD112FF00C8E34, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.DigitalEyewearARController_StereoFramework
struct  StereoFramework_t95A56F9A03F0EBAFFC34ABBE8309C936859E13BA 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController_StereoFramework::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoFramework_t95A56F9A03F0EBAFFC34ABBE8309C936859E13BA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.ModelTargetBehaviour_GuideViewDisplayMode
struct  GuideViewDisplayMode_t88D0866B25C697FC57941C3608F5C0C58928533D 
{
public:
	// System.Int32 Vuforia.ModelTargetBehaviour_GuideViewDisplayMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GuideViewDisplayMode_t88D0866B25C697FC57941C3608F5C0C58928533D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.OrientedBoundingBox3D
struct  OrientedBoundingBox3D_t2239DBD535FBC2F84F49502D23761C0630CC93B9 
{
public:
	// UnityEngine.Vector3 Vuforia.OrientedBoundingBox3D::<Center>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CCenterU3Ek__BackingField_0;
	// UnityEngine.Vector3 Vuforia.OrientedBoundingBox3D::<HalfExtents>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CHalfExtentsU3Ek__BackingField_1;
	// System.Single Vuforia.OrientedBoundingBox3D::<RotationY>k__BackingField
	float ___U3CRotationYU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCenterU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(OrientedBoundingBox3D_t2239DBD535FBC2F84F49502D23761C0630CC93B9, ___U3CCenterU3Ek__BackingField_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CCenterU3Ek__BackingField_0() const { return ___U3CCenterU3Ek__BackingField_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CCenterU3Ek__BackingField_0() { return &___U3CCenterU3Ek__BackingField_0; }
	inline void set_U3CCenterU3Ek__BackingField_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CCenterU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CHalfExtentsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(OrientedBoundingBox3D_t2239DBD535FBC2F84F49502D23761C0630CC93B9, ___U3CHalfExtentsU3Ek__BackingField_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CHalfExtentsU3Ek__BackingField_1() const { return ___U3CHalfExtentsU3Ek__BackingField_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CHalfExtentsU3Ek__BackingField_1() { return &___U3CHalfExtentsU3Ek__BackingField_1; }
	inline void set_U3CHalfExtentsU3Ek__BackingField_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CHalfExtentsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CRotationYU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(OrientedBoundingBox3D_t2239DBD535FBC2F84F49502D23761C0630CC93B9, ___U3CRotationYU3Ek__BackingField_2)); }
	inline float get_U3CRotationYU3Ek__BackingField_2() const { return ___U3CRotationYU3Ek__BackingField_2; }
	inline float* get_address_of_U3CRotationYU3Ek__BackingField_2() { return &___U3CRotationYU3Ek__BackingField_2; }
	inline void set_U3CRotationYU3Ek__BackingField_2(float value)
	{
		___U3CRotationYU3Ek__BackingField_2 = value;
	}
};


// Vuforia.TargetFinder
struct  TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderPtr
	intptr_t ___mTargetFinderPtr_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget> Vuforia.TargetFinder::mTargets
	Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63 * ___mTargets_1;
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderStatePtr
	intptr_t ___mTargetFinderStatePtr_2;
	// Vuforia.TargetFinder_TargetFinderState Vuforia.TargetFinder::mTargetFinderState
	TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  ___mTargetFinderState_3;
	// System.Collections.Generic.List`1<Vuforia.TargetFinder_TargetSearchResult> Vuforia.TargetFinder::mNewResults
	List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619 * ___mNewResults_4;

public:
	inline static int32_t get_offset_of_mTargetFinderPtr_0() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderPtr_0)); }
	inline intptr_t get_mTargetFinderPtr_0() const { return ___mTargetFinderPtr_0; }
	inline intptr_t* get_address_of_mTargetFinderPtr_0() { return &___mTargetFinderPtr_0; }
	inline void set_mTargetFinderPtr_0(intptr_t value)
	{
		___mTargetFinderPtr_0 = value;
	}

	inline static int32_t get_offset_of_mTargets_1() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargets_1)); }
	inline Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63 * get_mTargets_1() const { return ___mTargets_1; }
	inline Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63 ** get_address_of_mTargets_1() { return &___mTargets_1; }
	inline void set_mTargets_1(Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63 * value)
	{
		___mTargets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTargets_1), (void*)value);
	}

	inline static int32_t get_offset_of_mTargetFinderStatePtr_2() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderStatePtr_2)); }
	inline intptr_t get_mTargetFinderStatePtr_2() const { return ___mTargetFinderStatePtr_2; }
	inline intptr_t* get_address_of_mTargetFinderStatePtr_2() { return &___mTargetFinderStatePtr_2; }
	inline void set_mTargetFinderStatePtr_2(intptr_t value)
	{
		___mTargetFinderStatePtr_2 = value;
	}

	inline static int32_t get_offset_of_mTargetFinderState_3() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderState_3)); }
	inline TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  get_mTargetFinderState_3() const { return ___mTargetFinderState_3; }
	inline TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D * get_address_of_mTargetFinderState_3() { return &___mTargetFinderState_3; }
	inline void set_mTargetFinderState_3(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  value)
	{
		___mTargetFinderState_3 = value;
	}

	inline static int32_t get_offset_of_mNewResults_4() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mNewResults_4)); }
	inline List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619 * get_mNewResults_4() const { return ___mNewResults_4; }
	inline List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619 ** get_address_of_mNewResults_4() { return &___mNewResults_4; }
	inline void set_mNewResults_4(List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619 * value)
	{
		___mNewResults_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewResults_4), (void*)value);
	}
};


// Vuforia.TargetFinder_InitState
struct  InitState_tF8DCB9A690DFC7C81A7543FB4E5D6097B27A4925 
{
public:
	// System.Int32 Vuforia.TargetFinder_InitState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitState_tF8DCB9A690DFC7C81A7543FB4E5D6097B27A4925, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TargetFinder_TargetSearchResult
struct  TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5  : public RuntimeObject
{
public:
	// System.String Vuforia.TargetFinder_TargetSearchResult::TargetName
	String_t* ___TargetName_0;
	// System.String Vuforia.TargetFinder_TargetSearchResult::UniqueTargetId
	String_t* ___UniqueTargetId_1;
	// System.IntPtr Vuforia.TargetFinder_TargetSearchResult::TargetSearchResultPtr
	intptr_t ___TargetSearchResultPtr_2;

public:
	inline static int32_t get_offset_of_TargetName_0() { return static_cast<int32_t>(offsetof(TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5, ___TargetName_0)); }
	inline String_t* get_TargetName_0() const { return ___TargetName_0; }
	inline String_t** get_address_of_TargetName_0() { return &___TargetName_0; }
	inline void set_TargetName_0(String_t* value)
	{
		___TargetName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetName_0), (void*)value);
	}

	inline static int32_t get_offset_of_UniqueTargetId_1() { return static_cast<int32_t>(offsetof(TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5, ___UniqueTargetId_1)); }
	inline String_t* get_UniqueTargetId_1() const { return ___UniqueTargetId_1; }
	inline String_t** get_address_of_UniqueTargetId_1() { return &___UniqueTargetId_1; }
	inline void set_UniqueTargetId_1(String_t* value)
	{
		___UniqueTargetId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UniqueTargetId_1), (void*)value);
	}

	inline static int32_t get_offset_of_TargetSearchResultPtr_2() { return static_cast<int32_t>(offsetof(TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5, ___TargetSearchResultPtr_2)); }
	inline intptr_t get_TargetSearchResultPtr_2() const { return ___TargetSearchResultPtr_2; }
	inline intptr_t* get_address_of_TargetSearchResultPtr_2() { return &___TargetSearchResultPtr_2; }
	inline void set_TargetSearchResultPtr_2(intptr_t value)
	{
		___TargetSearchResultPtr_2 = value;
	}
};


// Vuforia.TargetFinder_UpdateState
struct  UpdateState_t9780BF40F4F57951DF918E1522D9A863D587EF8A 
{
public:
	// System.Int32 Vuforia.TargetFinder_UpdateState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateState_t9780BF40F4F57951DF918E1522D9A863D587EF8A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TrackableBehaviour_Status
struct  Status_t9B64F0BA3AD7E64C80B7CD10F61ECC24F20EC092 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour_Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t9B64F0BA3AD7E64C80B7CD10F61ECC24F20EC092, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuforiaARController_WorldCenterMode
struct  WorldCenterMode_t53E1430BD989A54F75332A2DA9D61C93545897E6 
{
public:
	// System.Int32 Vuforia.VuforiaARController_WorldCenterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WorldCenterMode_t53E1430BD989A54F75332A2DA9D61C93545897E6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuforiaRuntime_InitState
struct  InitState_t0072A2BD2C69378E4575A8148A3DB0974451CD70 
{
public:
	// System.Int32 Vuforia.VuforiaRuntime_InitState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitState_t0072A2BD2C69378E4575A8148A3DB0974451CD70, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuforiaUnity_InitError
struct  InitError_t486F7D53F5B0B7943D4E22BE2D32F4913D4A0431 
{
public:
	// System.Int32 Vuforia.VuforiaUnity_InitError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitError_t486F7D53F5B0B7943D4E22BE2D32F4913D4A0431, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


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

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Font
struct  Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// UnityEngine.Font_FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C * ___m_FontTextureRebuildCallback_5;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_5() { return static_cast<int32_t>(offsetof(Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26, ___m_FontTextureRebuildCallback_5)); }
	inline FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C * get_m_FontTextureRebuildCallback_5() const { return ___m_FontTextureRebuildCallback_5; }
	inline FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C ** get_address_of_m_FontTextureRebuildCallback_5() { return &___m_FontTextureRebuildCallback_5; }
	inline void set_m_FontTextureRebuildCallback_5(FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C * value)
	{
		___m_FontTextureRebuildCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontTextureRebuildCallback_5), (void*)value);
	}
};

struct Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C * ___textureRebuilt_4;

public:
	inline static int32_t get_offset_of_textureRebuilt_4() { return static_cast<int32_t>(offsetof(Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_StaticFields, ___textureRebuilt_4)); }
	inline Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C * get_textureRebuilt_4() const { return ___textureRebuilt_4; }
	inline Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C ** get_address_of_textureRebuilt_4() { return &___textureRebuilt_4; }
	inline void set_textureRebuilt_4(Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C * value)
	{
		___textureRebuilt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textureRebuilt_4), (void*)value);
	}
};


// UnityEngine.GUIStyle
struct  GUIStyle_t671F175A201A19166385EE3392292A5F50070572  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * ___m_Overflow_12;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Normal_1)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Hover_2)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Active_3)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Focused_4)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_OnNormal_5)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_OnHover_6)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_OnActive_7)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_OnFocused_8)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Border_9)); }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Padding_10)); }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Margin_11)); }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Overflow_12)); }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}
};

struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_13;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___s_None_14;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_13() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_StaticFields, ___showKeyboardFocus_13)); }
	inline bool get_showKeyboardFocus_13() const { return ___showKeyboardFocus_13; }
	inline bool* get_address_of_showKeyboardFocus_13() { return &___showKeyboardFocus_13; }
	inline void set_showKeyboardFocus_13(bool value)
	{
		___showKeyboardFocus_13 = value;
	}

	inline static int32_t get_offset_of_s_None_14() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_StaticFields, ___s_None_14)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_s_None_14() const { return ___s_None_14; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_s_None_14() { return &___s_None_14; }
	inline void set_s_None_14(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___s_None_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_14), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke ___m_Border_9;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke ___m_Overflow_12;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_Normal_1;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_Hover_2;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_Active_3;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_Focused_4;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_OnFocused_8;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com* ___m_Border_9;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com* ___m_Padding_10;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com* ___m_Margin_11;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com* ___m_Overflow_12;
};

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// Vuforia.DigitalEyewearARController
struct  DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4  : public ARController_tBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293
{
public:
	// System.Single Vuforia.DigitalEyewearARController::mCameraOffset
	float ___mCameraOffset_5;
	// System.Int32 Vuforia.DigitalEyewearARController::mDistortionRenderingLayer
	int32_t ___mDistortionRenderingLayer_6;
	// Vuforia.DigitalEyewearARController_EyewearType Vuforia.DigitalEyewearARController::mEyewearType
	int32_t ___mEyewearType_7;
	// Vuforia.DigitalEyewearARController_StereoFramework Vuforia.DigitalEyewearARController::mStereoFramework
	int32_t ___mStereoFramework_8;
	// Vuforia.DigitalEyewearARController_SeeThroughConfiguration Vuforia.DigitalEyewearARController::mSeeThroughConfiguration
	int32_t ___mSeeThroughConfiguration_9;
	// System.String Vuforia.DigitalEyewearARController::mViewerName
	String_t* ___mViewerName_10;
	// System.String Vuforia.DigitalEyewearARController::mViewerManufacturer
	String_t* ___mViewerManufacturer_11;
	// System.Boolean Vuforia.DigitalEyewearARController::mUseCustomViewer
	bool ___mUseCustomViewer_12;
	// Vuforia.DigitalEyewearARController_SerializableViewerParameters Vuforia.DigitalEyewearARController::mCustomViewer
	SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9 * ___mCustomViewer_13;
	// UnityEngine.Transform Vuforia.DigitalEyewearARController::mCentralAnchorPoint
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___mCentralAnchorPoint_14;
	// UnityEngine.Camera Vuforia.DigitalEyewearARController::mPrimaryCamera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___mPrimaryCamera_15;
	// Vuforia.VuforiaARController Vuforia.DigitalEyewearARController::mVuforiaBehaviour
	VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * ___mVuforiaBehaviour_16;
	// System.Boolean Vuforia.DigitalEyewearARController::mSetFocusPlaneAutomatically
	bool ___mSetFocusPlaneAutomatically_17;
	// Vuforia.VRDeviceController Vuforia.DigitalEyewearARController::mVRDeviceController
	VRDeviceController_tDFB2A6DE022256FD695E024050B1F3A07B97D044 * ___mVRDeviceController_18;

public:
	inline static int32_t get_offset_of_mCameraOffset_5() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mCameraOffset_5)); }
	inline float get_mCameraOffset_5() const { return ___mCameraOffset_5; }
	inline float* get_address_of_mCameraOffset_5() { return &___mCameraOffset_5; }
	inline void set_mCameraOffset_5(float value)
	{
		___mCameraOffset_5 = value;
	}

	inline static int32_t get_offset_of_mDistortionRenderingLayer_6() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mDistortionRenderingLayer_6)); }
	inline int32_t get_mDistortionRenderingLayer_6() const { return ___mDistortionRenderingLayer_6; }
	inline int32_t* get_address_of_mDistortionRenderingLayer_6() { return &___mDistortionRenderingLayer_6; }
	inline void set_mDistortionRenderingLayer_6(int32_t value)
	{
		___mDistortionRenderingLayer_6 = value;
	}

	inline static int32_t get_offset_of_mEyewearType_7() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mEyewearType_7)); }
	inline int32_t get_mEyewearType_7() const { return ___mEyewearType_7; }
	inline int32_t* get_address_of_mEyewearType_7() { return &___mEyewearType_7; }
	inline void set_mEyewearType_7(int32_t value)
	{
		___mEyewearType_7 = value;
	}

	inline static int32_t get_offset_of_mStereoFramework_8() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mStereoFramework_8)); }
	inline int32_t get_mStereoFramework_8() const { return ___mStereoFramework_8; }
	inline int32_t* get_address_of_mStereoFramework_8() { return &___mStereoFramework_8; }
	inline void set_mStereoFramework_8(int32_t value)
	{
		___mStereoFramework_8 = value;
	}

	inline static int32_t get_offset_of_mSeeThroughConfiguration_9() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mSeeThroughConfiguration_9)); }
	inline int32_t get_mSeeThroughConfiguration_9() const { return ___mSeeThroughConfiguration_9; }
	inline int32_t* get_address_of_mSeeThroughConfiguration_9() { return &___mSeeThroughConfiguration_9; }
	inline void set_mSeeThroughConfiguration_9(int32_t value)
	{
		___mSeeThroughConfiguration_9 = value;
	}

	inline static int32_t get_offset_of_mViewerName_10() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mViewerName_10)); }
	inline String_t* get_mViewerName_10() const { return ___mViewerName_10; }
	inline String_t** get_address_of_mViewerName_10() { return &___mViewerName_10; }
	inline void set_mViewerName_10(String_t* value)
	{
		___mViewerName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mViewerName_10), (void*)value);
	}

	inline static int32_t get_offset_of_mViewerManufacturer_11() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mViewerManufacturer_11)); }
	inline String_t* get_mViewerManufacturer_11() const { return ___mViewerManufacturer_11; }
	inline String_t** get_address_of_mViewerManufacturer_11() { return &___mViewerManufacturer_11; }
	inline void set_mViewerManufacturer_11(String_t* value)
	{
		___mViewerManufacturer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mViewerManufacturer_11), (void*)value);
	}

	inline static int32_t get_offset_of_mUseCustomViewer_12() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mUseCustomViewer_12)); }
	inline bool get_mUseCustomViewer_12() const { return ___mUseCustomViewer_12; }
	inline bool* get_address_of_mUseCustomViewer_12() { return &___mUseCustomViewer_12; }
	inline void set_mUseCustomViewer_12(bool value)
	{
		___mUseCustomViewer_12 = value;
	}

	inline static int32_t get_offset_of_mCustomViewer_13() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mCustomViewer_13)); }
	inline SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9 * get_mCustomViewer_13() const { return ___mCustomViewer_13; }
	inline SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9 ** get_address_of_mCustomViewer_13() { return &___mCustomViewer_13; }
	inline void set_mCustomViewer_13(SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9 * value)
	{
		___mCustomViewer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCustomViewer_13), (void*)value);
	}

	inline static int32_t get_offset_of_mCentralAnchorPoint_14() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mCentralAnchorPoint_14)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_mCentralAnchorPoint_14() const { return ___mCentralAnchorPoint_14; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_mCentralAnchorPoint_14() { return &___mCentralAnchorPoint_14; }
	inline void set_mCentralAnchorPoint_14(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___mCentralAnchorPoint_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCentralAnchorPoint_14), (void*)value);
	}

	inline static int32_t get_offset_of_mPrimaryCamera_15() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mPrimaryCamera_15)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_mPrimaryCamera_15() const { return ___mPrimaryCamera_15; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_mPrimaryCamera_15() { return &___mPrimaryCamera_15; }
	inline void set_mPrimaryCamera_15(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___mPrimaryCamera_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPrimaryCamera_15), (void*)value);
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_16() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mVuforiaBehaviour_16)); }
	inline VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * get_mVuforiaBehaviour_16() const { return ___mVuforiaBehaviour_16; }
	inline VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 ** get_address_of_mVuforiaBehaviour_16() { return &___mVuforiaBehaviour_16; }
	inline void set_mVuforiaBehaviour_16(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * value)
	{
		___mVuforiaBehaviour_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVuforiaBehaviour_16), (void*)value);
	}

	inline static int32_t get_offset_of_mSetFocusPlaneAutomatically_17() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mSetFocusPlaneAutomatically_17)); }
	inline bool get_mSetFocusPlaneAutomatically_17() const { return ___mSetFocusPlaneAutomatically_17; }
	inline bool* get_address_of_mSetFocusPlaneAutomatically_17() { return &___mSetFocusPlaneAutomatically_17; }
	inline void set_mSetFocusPlaneAutomatically_17(bool value)
	{
		___mSetFocusPlaneAutomatically_17 = value;
	}

	inline static int32_t get_offset_of_mVRDeviceController_18() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mVRDeviceController_18)); }
	inline VRDeviceController_tDFB2A6DE022256FD695E024050B1F3A07B97D044 * get_mVRDeviceController_18() const { return ___mVRDeviceController_18; }
	inline VRDeviceController_tDFB2A6DE022256FD695E024050B1F3A07B97D044 ** get_address_of_mVRDeviceController_18() { return &___mVRDeviceController_18; }
	inline void set_mVRDeviceController_18(VRDeviceController_tDFB2A6DE022256FD695E024050B1F3A07B97D044 * value)
	{
		___mVRDeviceController_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVRDeviceController_18), (void*)value);
	}
};

struct DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4_StaticFields
{
public:
	// Vuforia.DigitalEyewearARController Vuforia.DigitalEyewearARController::mInstance
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 * ___mInstance_19;
	// System.Object Vuforia.DigitalEyewearARController::mPadlock
	RuntimeObject * ___mPadlock_20;

public:
	inline static int32_t get_offset_of_mInstance_19() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4_StaticFields, ___mInstance_19)); }
	inline DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 * get_mInstance_19() const { return ___mInstance_19; }
	inline DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 ** get_address_of_mInstance_19() { return &___mInstance_19; }
	inline void set_mInstance_19(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 * value)
	{
		___mInstance_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInstance_19), (void*)value);
	}

	inline static int32_t get_offset_of_mPadlock_20() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4_StaticFields, ___mPadlock_20)); }
	inline RuntimeObject * get_mPadlock_20() const { return ___mPadlock_20; }
	inline RuntimeObject ** get_address_of_mPadlock_20() { return &___mPadlock_20; }
	inline void set_mPadlock_20(RuntimeObject * value)
	{
		___mPadlock_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPadlock_20), (void*)value);
	}
};


// Vuforia.TargetFinder_ModelRecoSearchResult
struct  ModelRecoSearchResult_tB293FF5B3A646FF59DE16F2498C74EE958425354  : public TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5
{
public:
	// System.String Vuforia.TargetFinder_ModelRecoSearchResult::GuideViewName
	String_t* ___GuideViewName_3;
	// System.Single Vuforia.TargetFinder_ModelRecoSearchResult::Confidence
	float ___Confidence_4;

public:
	inline static int32_t get_offset_of_GuideViewName_3() { return static_cast<int32_t>(offsetof(ModelRecoSearchResult_tB293FF5B3A646FF59DE16F2498C74EE958425354, ___GuideViewName_3)); }
	inline String_t* get_GuideViewName_3() const { return ___GuideViewName_3; }
	inline String_t** get_address_of_GuideViewName_3() { return &___GuideViewName_3; }
	inline void set_GuideViewName_3(String_t* value)
	{
		___GuideViewName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuideViewName_3), (void*)value);
	}

	inline static int32_t get_offset_of_Confidence_4() { return static_cast<int32_t>(offsetof(ModelRecoSearchResult_tB293FF5B3A646FF59DE16F2498C74EE958425354, ___Confidence_4)); }
	inline float get_Confidence_4() const { return ___Confidence_4; }
	inline float* get_address_of_Confidence_4() { return &___Confidence_4; }
	inline void set_Confidence_4(float value)
	{
		___Confidence_4 = value;
	}
};


// Vuforia.VuforiaARController
struct  VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876  : public ARController_tBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293
{
public:
	// Vuforia.CameraDevice_CameraDeviceMode Vuforia.VuforiaARController::CameraDeviceModeSetting
	int32_t ___CameraDeviceModeSetting_1;
	// System.Int32 Vuforia.VuforiaARController::MaxSimultaneousImageTargets
	int32_t ___MaxSimultaneousImageTargets_2;
	// System.Int32 Vuforia.VuforiaARController::MaxSimultaneousObjectTargets
	int32_t ___MaxSimultaneousObjectTargets_3;
	// System.Boolean Vuforia.VuforiaARController::UseDelayedLoadingObjectTargets
	bool ___UseDelayedLoadingObjectTargets_4;
	// Vuforia.VuforiaARController_WorldCenterMode Vuforia.VuforiaARController::mWorldCenterMode
	int32_t ___mWorldCenterMode_5;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaARController::mWorldCenter
	TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * ___mWorldCenter_6;
	// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler> Vuforia.VuforiaARController::mVideoBgEventHandlers
	List_1_t1314A3DDAE2D8AD81F9403BD961C3CC0530B04A9 * ___mVideoBgEventHandlers_7;
	// System.Action Vuforia.VuforiaARController::mOnBeforeVuforiaTrackersInitialized
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___mOnBeforeVuforiaTrackersInitialized_8;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaInitialized
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___mOnVuforiaInitialized_9;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaStarted
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___mOnVuforiaStarted_10;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaDeinitialized
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___mOnVuforiaDeinitialized_11;
	// System.Action Vuforia.VuforiaARController::mOnTrackablesUpdated
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___mOnTrackablesUpdated_12;
	// System.Action Vuforia.VuforiaARController::mRenderOnUpdate
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___mRenderOnUpdate_13;
	// System.Action`1<System.Boolean> Vuforia.VuforiaARController::mOnPause
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___mOnPause_14;
	// System.Boolean Vuforia.VuforiaARController::mPaused
	bool ___mPaused_15;
	// System.Action Vuforia.VuforiaARController::mOnBackgroundTextureChanged
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___mOnBackgroundTextureChanged_16;
	// System.Boolean Vuforia.VuforiaARController::mStartHasBeenInvoked
	bool ___mStartHasBeenInvoked_17;
	// System.Boolean Vuforia.VuforiaARController::mHasStarted
	bool ___mHasStarted_18;
	// Vuforia.ICameraConfiguration Vuforia.VuforiaARController::mCameraConfiguration
	RuntimeObject* ___mCameraConfiguration_19;
	// Vuforia.DigitalEyewearARController Vuforia.VuforiaARController::mEyewearBehaviour
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 * ___mEyewearBehaviour_20;
	// System.Boolean Vuforia.VuforiaARController::mCheckStopCamera
	bool ___mCheckStopCamera_21;
	// UnityEngine.Material Vuforia.VuforiaARController::mClearMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___mClearMaterial_22;
	// System.Boolean Vuforia.VuforiaARController::mMetalRendering
	bool ___mMetalRendering_23;
	// System.Boolean Vuforia.VuforiaARController::mHasStartedOnce
	bool ___mHasStartedOnce_24;
	// System.Boolean Vuforia.VuforiaARController::mWasEnabledBeforePause
	bool ___mWasEnabledBeforePause_25;
	// System.Boolean Vuforia.VuforiaARController::mObjectTrackerWasActiveBeforePause
	bool ___mObjectTrackerWasActiveBeforePause_26;
	// System.Boolean Vuforia.VuforiaARController::mObjectTrackerWasActiveBeforeDisabling
	bool ___mObjectTrackerWasActiveBeforeDisabling_27;
	// System.Int32 Vuforia.VuforiaARController::mLastUpdatedFrame
	int32_t ___mLastUpdatedFrame_28;

public:
	inline static int32_t get_offset_of_CameraDeviceModeSetting_1() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___CameraDeviceModeSetting_1)); }
	inline int32_t get_CameraDeviceModeSetting_1() const { return ___CameraDeviceModeSetting_1; }
	inline int32_t* get_address_of_CameraDeviceModeSetting_1() { return &___CameraDeviceModeSetting_1; }
	inline void set_CameraDeviceModeSetting_1(int32_t value)
	{
		___CameraDeviceModeSetting_1 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousImageTargets_2() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___MaxSimultaneousImageTargets_2)); }
	inline int32_t get_MaxSimultaneousImageTargets_2() const { return ___MaxSimultaneousImageTargets_2; }
	inline int32_t* get_address_of_MaxSimultaneousImageTargets_2() { return &___MaxSimultaneousImageTargets_2; }
	inline void set_MaxSimultaneousImageTargets_2(int32_t value)
	{
		___MaxSimultaneousImageTargets_2 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousObjectTargets_3() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___MaxSimultaneousObjectTargets_3)); }
	inline int32_t get_MaxSimultaneousObjectTargets_3() const { return ___MaxSimultaneousObjectTargets_3; }
	inline int32_t* get_address_of_MaxSimultaneousObjectTargets_3() { return &___MaxSimultaneousObjectTargets_3; }
	inline void set_MaxSimultaneousObjectTargets_3(int32_t value)
	{
		___MaxSimultaneousObjectTargets_3 = value;
	}

	inline static int32_t get_offset_of_UseDelayedLoadingObjectTargets_4() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___UseDelayedLoadingObjectTargets_4)); }
	inline bool get_UseDelayedLoadingObjectTargets_4() const { return ___UseDelayedLoadingObjectTargets_4; }
	inline bool* get_address_of_UseDelayedLoadingObjectTargets_4() { return &___UseDelayedLoadingObjectTargets_4; }
	inline void set_UseDelayedLoadingObjectTargets_4(bool value)
	{
		___UseDelayedLoadingObjectTargets_4 = value;
	}

	inline static int32_t get_offset_of_mWorldCenterMode_5() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mWorldCenterMode_5)); }
	inline int32_t get_mWorldCenterMode_5() const { return ___mWorldCenterMode_5; }
	inline int32_t* get_address_of_mWorldCenterMode_5() { return &___mWorldCenterMode_5; }
	inline void set_mWorldCenterMode_5(int32_t value)
	{
		___mWorldCenterMode_5 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_6() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mWorldCenter_6)); }
	inline TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * get_mWorldCenter_6() const { return ___mWorldCenter_6; }
	inline TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 ** get_address_of_mWorldCenter_6() { return &___mWorldCenter_6; }
	inline void set_mWorldCenter_6(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * value)
	{
		___mWorldCenter_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mWorldCenter_6), (void*)value);
	}

	inline static int32_t get_offset_of_mVideoBgEventHandlers_7() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mVideoBgEventHandlers_7)); }
	inline List_1_t1314A3DDAE2D8AD81F9403BD961C3CC0530B04A9 * get_mVideoBgEventHandlers_7() const { return ___mVideoBgEventHandlers_7; }
	inline List_1_t1314A3DDAE2D8AD81F9403BD961C3CC0530B04A9 ** get_address_of_mVideoBgEventHandlers_7() { return &___mVideoBgEventHandlers_7; }
	inline void set_mVideoBgEventHandlers_7(List_1_t1314A3DDAE2D8AD81F9403BD961C3CC0530B04A9 * value)
	{
		___mVideoBgEventHandlers_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVideoBgEventHandlers_7), (void*)value);
	}

	inline static int32_t get_offset_of_mOnBeforeVuforiaTrackersInitialized_8() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mOnBeforeVuforiaTrackersInitialized_8)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_mOnBeforeVuforiaTrackersInitialized_8() const { return ___mOnBeforeVuforiaTrackersInitialized_8; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_mOnBeforeVuforiaTrackersInitialized_8() { return &___mOnBeforeVuforiaTrackersInitialized_8; }
	inline void set_mOnBeforeVuforiaTrackersInitialized_8(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___mOnBeforeVuforiaTrackersInitialized_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnBeforeVuforiaTrackersInitialized_8), (void*)value);
	}

	inline static int32_t get_offset_of_mOnVuforiaInitialized_9() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mOnVuforiaInitialized_9)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_mOnVuforiaInitialized_9() const { return ___mOnVuforiaInitialized_9; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_mOnVuforiaInitialized_9() { return &___mOnVuforiaInitialized_9; }
	inline void set_mOnVuforiaInitialized_9(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___mOnVuforiaInitialized_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnVuforiaInitialized_9), (void*)value);
	}

	inline static int32_t get_offset_of_mOnVuforiaStarted_10() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mOnVuforiaStarted_10)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_mOnVuforiaStarted_10() const { return ___mOnVuforiaStarted_10; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_mOnVuforiaStarted_10() { return &___mOnVuforiaStarted_10; }
	inline void set_mOnVuforiaStarted_10(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___mOnVuforiaStarted_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnVuforiaStarted_10), (void*)value);
	}

	inline static int32_t get_offset_of_mOnVuforiaDeinitialized_11() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mOnVuforiaDeinitialized_11)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_mOnVuforiaDeinitialized_11() const { return ___mOnVuforiaDeinitialized_11; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_mOnVuforiaDeinitialized_11() { return &___mOnVuforiaDeinitialized_11; }
	inline void set_mOnVuforiaDeinitialized_11(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___mOnVuforiaDeinitialized_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnVuforiaDeinitialized_11), (void*)value);
	}

	inline static int32_t get_offset_of_mOnTrackablesUpdated_12() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mOnTrackablesUpdated_12)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_mOnTrackablesUpdated_12() const { return ___mOnTrackablesUpdated_12; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_mOnTrackablesUpdated_12() { return &___mOnTrackablesUpdated_12; }
	inline void set_mOnTrackablesUpdated_12(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___mOnTrackablesUpdated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnTrackablesUpdated_12), (void*)value);
	}

	inline static int32_t get_offset_of_mRenderOnUpdate_13() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mRenderOnUpdate_13)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_mRenderOnUpdate_13() const { return ___mRenderOnUpdate_13; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_mRenderOnUpdate_13() { return &___mRenderOnUpdate_13; }
	inline void set_mRenderOnUpdate_13(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___mRenderOnUpdate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRenderOnUpdate_13), (void*)value);
	}

	inline static int32_t get_offset_of_mOnPause_14() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mOnPause_14)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_mOnPause_14() const { return ___mOnPause_14; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_mOnPause_14() { return &___mOnPause_14; }
	inline void set_mOnPause_14(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___mOnPause_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnPause_14), (void*)value);
	}

	inline static int32_t get_offset_of_mPaused_15() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mPaused_15)); }
	inline bool get_mPaused_15() const { return ___mPaused_15; }
	inline bool* get_address_of_mPaused_15() { return &___mPaused_15; }
	inline void set_mPaused_15(bool value)
	{
		___mPaused_15 = value;
	}

	inline static int32_t get_offset_of_mOnBackgroundTextureChanged_16() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mOnBackgroundTextureChanged_16)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_mOnBackgroundTextureChanged_16() const { return ___mOnBackgroundTextureChanged_16; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_mOnBackgroundTextureChanged_16() { return &___mOnBackgroundTextureChanged_16; }
	inline void set_mOnBackgroundTextureChanged_16(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___mOnBackgroundTextureChanged_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnBackgroundTextureChanged_16), (void*)value);
	}

	inline static int32_t get_offset_of_mStartHasBeenInvoked_17() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mStartHasBeenInvoked_17)); }
	inline bool get_mStartHasBeenInvoked_17() const { return ___mStartHasBeenInvoked_17; }
	inline bool* get_address_of_mStartHasBeenInvoked_17() { return &___mStartHasBeenInvoked_17; }
	inline void set_mStartHasBeenInvoked_17(bool value)
	{
		___mStartHasBeenInvoked_17 = value;
	}

	inline static int32_t get_offset_of_mHasStarted_18() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mHasStarted_18)); }
	inline bool get_mHasStarted_18() const { return ___mHasStarted_18; }
	inline bool* get_address_of_mHasStarted_18() { return &___mHasStarted_18; }
	inline void set_mHasStarted_18(bool value)
	{
		___mHasStarted_18 = value;
	}

	inline static int32_t get_offset_of_mCameraConfiguration_19() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mCameraConfiguration_19)); }
	inline RuntimeObject* get_mCameraConfiguration_19() const { return ___mCameraConfiguration_19; }
	inline RuntimeObject** get_address_of_mCameraConfiguration_19() { return &___mCameraConfiguration_19; }
	inline void set_mCameraConfiguration_19(RuntimeObject* value)
	{
		___mCameraConfiguration_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCameraConfiguration_19), (void*)value);
	}

	inline static int32_t get_offset_of_mEyewearBehaviour_20() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mEyewearBehaviour_20)); }
	inline DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 * get_mEyewearBehaviour_20() const { return ___mEyewearBehaviour_20; }
	inline DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 ** get_address_of_mEyewearBehaviour_20() { return &___mEyewearBehaviour_20; }
	inline void set_mEyewearBehaviour_20(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 * value)
	{
		___mEyewearBehaviour_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mEyewearBehaviour_20), (void*)value);
	}

	inline static int32_t get_offset_of_mCheckStopCamera_21() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mCheckStopCamera_21)); }
	inline bool get_mCheckStopCamera_21() const { return ___mCheckStopCamera_21; }
	inline bool* get_address_of_mCheckStopCamera_21() { return &___mCheckStopCamera_21; }
	inline void set_mCheckStopCamera_21(bool value)
	{
		___mCheckStopCamera_21 = value;
	}

	inline static int32_t get_offset_of_mClearMaterial_22() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mClearMaterial_22)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_mClearMaterial_22() const { return ___mClearMaterial_22; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_mClearMaterial_22() { return &___mClearMaterial_22; }
	inline void set_mClearMaterial_22(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___mClearMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mClearMaterial_22), (void*)value);
	}

	inline static int32_t get_offset_of_mMetalRendering_23() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mMetalRendering_23)); }
	inline bool get_mMetalRendering_23() const { return ___mMetalRendering_23; }
	inline bool* get_address_of_mMetalRendering_23() { return &___mMetalRendering_23; }
	inline void set_mMetalRendering_23(bool value)
	{
		___mMetalRendering_23 = value;
	}

	inline static int32_t get_offset_of_mHasStartedOnce_24() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mHasStartedOnce_24)); }
	inline bool get_mHasStartedOnce_24() const { return ___mHasStartedOnce_24; }
	inline bool* get_address_of_mHasStartedOnce_24() { return &___mHasStartedOnce_24; }
	inline void set_mHasStartedOnce_24(bool value)
	{
		___mHasStartedOnce_24 = value;
	}

	inline static int32_t get_offset_of_mWasEnabledBeforePause_25() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mWasEnabledBeforePause_25)); }
	inline bool get_mWasEnabledBeforePause_25() const { return ___mWasEnabledBeforePause_25; }
	inline bool* get_address_of_mWasEnabledBeforePause_25() { return &___mWasEnabledBeforePause_25; }
	inline void set_mWasEnabledBeforePause_25(bool value)
	{
		___mWasEnabledBeforePause_25 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforePause_26() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mObjectTrackerWasActiveBeforePause_26)); }
	inline bool get_mObjectTrackerWasActiveBeforePause_26() const { return ___mObjectTrackerWasActiveBeforePause_26; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforePause_26() { return &___mObjectTrackerWasActiveBeforePause_26; }
	inline void set_mObjectTrackerWasActiveBeforePause_26(bool value)
	{
		___mObjectTrackerWasActiveBeforePause_26 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforeDisabling_27() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mObjectTrackerWasActiveBeforeDisabling_27)); }
	inline bool get_mObjectTrackerWasActiveBeforeDisabling_27() const { return ___mObjectTrackerWasActiveBeforeDisabling_27; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforeDisabling_27() { return &___mObjectTrackerWasActiveBeforeDisabling_27; }
	inline void set_mObjectTrackerWasActiveBeforeDisabling_27(bool value)
	{
		___mObjectTrackerWasActiveBeforeDisabling_27 = value;
	}

	inline static int32_t get_offset_of_mLastUpdatedFrame_28() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mLastUpdatedFrame_28)); }
	inline int32_t get_mLastUpdatedFrame_28() const { return ___mLastUpdatedFrame_28; }
	inline int32_t* get_address_of_mLastUpdatedFrame_28() { return &___mLastUpdatedFrame_28; }
	inline void set_mLastUpdatedFrame_28(int32_t value)
	{
		___mLastUpdatedFrame_28 = value;
	}
};

struct VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876_StaticFields
{
public:
	// Vuforia.VuforiaARController Vuforia.VuforiaARController::mInstance
	VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * ___mInstance_29;
	// System.Object Vuforia.VuforiaARController::mPadlock
	RuntimeObject * ___mPadlock_30;

public:
	inline static int32_t get_offset_of_mInstance_29() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876_StaticFields, ___mInstance_29)); }
	inline VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * get_mInstance_29() const { return ___mInstance_29; }
	inline VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 ** get_address_of_mInstance_29() { return &___mInstance_29; }
	inline void set_mInstance_29(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * value)
	{
		___mInstance_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInstance_29), (void*)value);
	}

	inline static int32_t get_offset_of_mPadlock_30() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876_StaticFields, ___mPadlock_30)); }
	inline RuntimeObject * get_mPadlock_30() const { return ___mPadlock_30; }
	inline RuntimeObject ** get_address_of_mPadlock_30() { return &___mPadlock_30; }
	inline void set_mPadlock_30(RuntimeObject * value)
	{
		___mPadlock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPadlock_30), (void*)value);
	}
};


// Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration
struct  GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::vuforiaLicenseKey
	String_t* ___vuforiaLicenseKey_1;
	// System.String Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::ufoLicenseKey
	String_t* ___ufoLicenseKey_2;
	// System.Boolean Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::delayedInitialization
	bool ___delayedInitialization_3;
	// Vuforia.CameraDevice_CameraDeviceMode Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::cameraDeviceModeSetting
	int32_t ___cameraDeviceModeSetting_4;
	// System.Int32 Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::maxSimultaneousImageTargets
	int32_t ___maxSimultaneousImageTargets_5;
	// System.Int32 Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::maxSimultaneousObjectTargets
	int32_t ___maxSimultaneousObjectTargets_6;
	// System.Boolean Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::useDelayedLoadingObjectTargets
	bool ___useDelayedLoadingObjectTargets_7;
	// System.String Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::version
	String_t* ___version_8;
	// System.String Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::eulaAcceptedVersions
	String_t* ___eulaAcceptedVersions_9;

public:
	inline static int32_t get_offset_of_vuforiaLicenseKey_1() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064, ___vuforiaLicenseKey_1)); }
	inline String_t* get_vuforiaLicenseKey_1() const { return ___vuforiaLicenseKey_1; }
	inline String_t** get_address_of_vuforiaLicenseKey_1() { return &___vuforiaLicenseKey_1; }
	inline void set_vuforiaLicenseKey_1(String_t* value)
	{
		___vuforiaLicenseKey_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vuforiaLicenseKey_1), (void*)value);
	}

	inline static int32_t get_offset_of_ufoLicenseKey_2() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064, ___ufoLicenseKey_2)); }
	inline String_t* get_ufoLicenseKey_2() const { return ___ufoLicenseKey_2; }
	inline String_t** get_address_of_ufoLicenseKey_2() { return &___ufoLicenseKey_2; }
	inline void set_ufoLicenseKey_2(String_t* value)
	{
		___ufoLicenseKey_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ufoLicenseKey_2), (void*)value);
	}

	inline static int32_t get_offset_of_delayedInitialization_3() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064, ___delayedInitialization_3)); }
	inline bool get_delayedInitialization_3() const { return ___delayedInitialization_3; }
	inline bool* get_address_of_delayedInitialization_3() { return &___delayedInitialization_3; }
	inline void set_delayedInitialization_3(bool value)
	{
		___delayedInitialization_3 = value;
	}

	inline static int32_t get_offset_of_cameraDeviceModeSetting_4() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064, ___cameraDeviceModeSetting_4)); }
	inline int32_t get_cameraDeviceModeSetting_4() const { return ___cameraDeviceModeSetting_4; }
	inline int32_t* get_address_of_cameraDeviceModeSetting_4() { return &___cameraDeviceModeSetting_4; }
	inline void set_cameraDeviceModeSetting_4(int32_t value)
	{
		___cameraDeviceModeSetting_4 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousImageTargets_5() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064, ___maxSimultaneousImageTargets_5)); }
	inline int32_t get_maxSimultaneousImageTargets_5() const { return ___maxSimultaneousImageTargets_5; }
	inline int32_t* get_address_of_maxSimultaneousImageTargets_5() { return &___maxSimultaneousImageTargets_5; }
	inline void set_maxSimultaneousImageTargets_5(int32_t value)
	{
		___maxSimultaneousImageTargets_5 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousObjectTargets_6() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064, ___maxSimultaneousObjectTargets_6)); }
	inline int32_t get_maxSimultaneousObjectTargets_6() const { return ___maxSimultaneousObjectTargets_6; }
	inline int32_t* get_address_of_maxSimultaneousObjectTargets_6() { return &___maxSimultaneousObjectTargets_6; }
	inline void set_maxSimultaneousObjectTargets_6(int32_t value)
	{
		___maxSimultaneousObjectTargets_6 = value;
	}

	inline static int32_t get_offset_of_useDelayedLoadingObjectTargets_7() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064, ___useDelayedLoadingObjectTargets_7)); }
	inline bool get_useDelayedLoadingObjectTargets_7() const { return ___useDelayedLoadingObjectTargets_7; }
	inline bool* get_address_of_useDelayedLoadingObjectTargets_7() { return &___useDelayedLoadingObjectTargets_7; }
	inline void set_useDelayedLoadingObjectTargets_7(bool value)
	{
		___useDelayedLoadingObjectTargets_7 = value;
	}

	inline static int32_t get_offset_of_version_8() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064, ___version_8)); }
	inline String_t* get_version_8() const { return ___version_8; }
	inline String_t** get_address_of_version_8() { return &___version_8; }
	inline void set_version_8(String_t* value)
	{
		___version_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_8), (void*)value);
	}

	inline static int32_t get_offset_of_eulaAcceptedVersions_9() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064, ___eulaAcceptedVersions_9)); }
	inline String_t* get_eulaAcceptedVersions_9() const { return ___eulaAcceptedVersions_9; }
	inline String_t** get_address_of_eulaAcceptedVersions_9() { return &___eulaAcceptedVersions_9; }
	inline void set_eulaAcceptedVersions_9(String_t* value)
	{
		___eulaAcceptedVersions_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eulaAcceptedVersions_9), (void*)value);
	}
};


// Vuforia.VuforiaRuntime
struct  VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D  : public RuntimeObject
{
public:
	// System.Action`1<Vuforia.VuforiaUnity_InitError> Vuforia.VuforiaRuntime::mOnVuforiaInitError
	Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF * ___mOnVuforiaInitError_1;
	// System.Boolean Vuforia.VuforiaRuntime::mFailedToInitialize
	bool ___mFailedToInitialize_2;
	// Vuforia.VuforiaUnity_InitError Vuforia.VuforiaRuntime::mInitError
	int32_t ___mInitError_3;
	// Vuforia.VuforiaRuntime_InitState Vuforia.VuforiaRuntime::mInitState
	int32_t ___mInitState_4;
	// System.Boolean Vuforia.VuforiaRuntime::mInitThreadReturned
	bool ___mInitThreadReturned_5;
	// Vuforia.VuforiaUnity_InitError Vuforia.VuforiaRuntime::mReturnedError
	int32_t ___mReturnedError_6;
	// System.Boolean Vuforia.VuforiaRuntime::mAppIsQuitting
	bool ___mAppIsQuitting_9;

public:
	inline static int32_t get_offset_of_mOnVuforiaInitError_1() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D, ___mOnVuforiaInitError_1)); }
	inline Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF * get_mOnVuforiaInitError_1() const { return ___mOnVuforiaInitError_1; }
	inline Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF ** get_address_of_mOnVuforiaInitError_1() { return &___mOnVuforiaInitError_1; }
	inline void set_mOnVuforiaInitError_1(Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF * value)
	{
		___mOnVuforiaInitError_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnVuforiaInitError_1), (void*)value);
	}

	inline static int32_t get_offset_of_mFailedToInitialize_2() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D, ___mFailedToInitialize_2)); }
	inline bool get_mFailedToInitialize_2() const { return ___mFailedToInitialize_2; }
	inline bool* get_address_of_mFailedToInitialize_2() { return &___mFailedToInitialize_2; }
	inline void set_mFailedToInitialize_2(bool value)
	{
		___mFailedToInitialize_2 = value;
	}

	inline static int32_t get_offset_of_mInitError_3() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D, ___mInitError_3)); }
	inline int32_t get_mInitError_3() const { return ___mInitError_3; }
	inline int32_t* get_address_of_mInitError_3() { return &___mInitError_3; }
	inline void set_mInitError_3(int32_t value)
	{
		___mInitError_3 = value;
	}

	inline static int32_t get_offset_of_mInitState_4() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D, ___mInitState_4)); }
	inline int32_t get_mInitState_4() const { return ___mInitState_4; }
	inline int32_t* get_address_of_mInitState_4() { return &___mInitState_4; }
	inline void set_mInitState_4(int32_t value)
	{
		___mInitState_4 = value;
	}

	inline static int32_t get_offset_of_mInitThreadReturned_5() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D, ___mInitThreadReturned_5)); }
	inline bool get_mInitThreadReturned_5() const { return ___mInitThreadReturned_5; }
	inline bool* get_address_of_mInitThreadReturned_5() { return &___mInitThreadReturned_5; }
	inline void set_mInitThreadReturned_5(bool value)
	{
		___mInitThreadReturned_5 = value;
	}

	inline static int32_t get_offset_of_mReturnedError_6() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D, ___mReturnedError_6)); }
	inline int32_t get_mReturnedError_6() const { return ___mReturnedError_6; }
	inline int32_t* get_address_of_mReturnedError_6() { return &___mReturnedError_6; }
	inline void set_mReturnedError_6(int32_t value)
	{
		___mReturnedError_6 = value;
	}

	inline static int32_t get_offset_of_mAppIsQuitting_9() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D, ___mAppIsQuitting_9)); }
	inline bool get_mAppIsQuitting_9() const { return ___mAppIsQuitting_9; }
	inline bool* get_address_of_mAppIsQuitting_9() { return &___mAppIsQuitting_9; }
	inline void set_mAppIsQuitting_9(bool value)
	{
		___mAppIsQuitting_9 = value;
	}
};

struct VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D_StaticFields
{
public:
	// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::mInstance
	VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D * ___mInstance_7;
	// System.Object Vuforia.VuforiaRuntime::mPadlock
	RuntimeObject * ___mPadlock_8;

public:
	inline static int32_t get_offset_of_mInstance_7() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D_StaticFields, ___mInstance_7)); }
	inline VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D * get_mInstance_7() const { return ___mInstance_7; }
	inline VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D ** get_address_of_mInstance_7() { return &___mInstance_7; }
	inline void set_mInstance_7(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D * value)
	{
		___mInstance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInstance_7), (void*)value);
	}

	inline static int32_t get_offset_of_mPadlock_8() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D_StaticFields, ___mPadlock_8)); }
	inline RuntimeObject * get_mPadlock_8() const { return ___mPadlock_8; }
	inline RuntimeObject ** get_address_of_mPadlock_8() { return &___mPadlock_8; }
	inline void set_mPadlock_8(RuntimeObject * value)
	{
		___mPadlock_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPadlock_8), (void*)value);
	}
};


// System.Action`1<UnityEngine.Camera>
struct  Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.Camera[]>
struct  Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Vuforia.VuforiaUnity_InitError>
struct  Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>
struct  Action_2_t9F55CDD4158CA55A03F1D448889BDD8A9C4D7E04  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]>
struct  Action_2_t11D263E8C52BF70BBCED2592B3AA25E25AE2E2F5  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.GUI_WindowFunction
struct  WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Vuforia.VuforiaConfiguration
struct  VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::vuforia
	GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064 * ___vuforia_6;
	// Vuforia.VuforiaConfiguration_DigitalEyewearConfiguration Vuforia.VuforiaConfiguration::digitalEyewear
	DigitalEyewearConfiguration_t1BA464AEDA9C847084FCF4F1CA3C92719D655B18 * ___digitalEyewear_7;
	// Vuforia.VuforiaConfiguration_DatabaseConfiguration Vuforia.VuforiaConfiguration::database
	DatabaseConfiguration_t0B1E7EF9676AD0191B8AFA87BFD43EB9F141928A * ___database_8;
	// Vuforia.VuforiaConfiguration_VideoBackgroundConfiguration Vuforia.VuforiaConfiguration::videoBackground
	VideoBackgroundConfiguration_tCC24E374B966B79D018C14F6807A6DDA47302F17 * ___videoBackground_9;
	// Vuforia.VuforiaConfiguration_DeviceTrackerConfiguration Vuforia.VuforiaConfiguration::deviceTracker
	DeviceTrackerConfiguration_tC11D2DA49200D3693731D6AFF3F793E4315D1E3F * ___deviceTracker_10;
	// Vuforia.VuforiaConfiguration_SmartTerrainConfiguration Vuforia.VuforiaConfiguration::smartTerrain
	SmartTerrainConfiguration_t6104CF56BC1AFE13ED509BB01CBE90E7E64372C7 * ___smartTerrain_11;
	// Vuforia.VuforiaConfiguration_WebCamConfiguration Vuforia.VuforiaConfiguration::webcam
	WebCamConfiguration_t0A5BD19A86D3AA8B68FB79C1EA8A5855A6C9F321 * ___webcam_12;

public:
	inline static int32_t get_offset_of_vuforia_6() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82, ___vuforia_6)); }
	inline GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064 * get_vuforia_6() const { return ___vuforia_6; }
	inline GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064 ** get_address_of_vuforia_6() { return &___vuforia_6; }
	inline void set_vuforia_6(GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064 * value)
	{
		___vuforia_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vuforia_6), (void*)value);
	}

	inline static int32_t get_offset_of_digitalEyewear_7() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82, ___digitalEyewear_7)); }
	inline DigitalEyewearConfiguration_t1BA464AEDA9C847084FCF4F1CA3C92719D655B18 * get_digitalEyewear_7() const { return ___digitalEyewear_7; }
	inline DigitalEyewearConfiguration_t1BA464AEDA9C847084FCF4F1CA3C92719D655B18 ** get_address_of_digitalEyewear_7() { return &___digitalEyewear_7; }
	inline void set_digitalEyewear_7(DigitalEyewearConfiguration_t1BA464AEDA9C847084FCF4F1CA3C92719D655B18 * value)
	{
		___digitalEyewear_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___digitalEyewear_7), (void*)value);
	}

	inline static int32_t get_offset_of_database_8() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82, ___database_8)); }
	inline DatabaseConfiguration_t0B1E7EF9676AD0191B8AFA87BFD43EB9F141928A * get_database_8() const { return ___database_8; }
	inline DatabaseConfiguration_t0B1E7EF9676AD0191B8AFA87BFD43EB9F141928A ** get_address_of_database_8() { return &___database_8; }
	inline void set_database_8(DatabaseConfiguration_t0B1E7EF9676AD0191B8AFA87BFD43EB9F141928A * value)
	{
		___database_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_8), (void*)value);
	}

	inline static int32_t get_offset_of_videoBackground_9() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82, ___videoBackground_9)); }
	inline VideoBackgroundConfiguration_tCC24E374B966B79D018C14F6807A6DDA47302F17 * get_videoBackground_9() const { return ___videoBackground_9; }
	inline VideoBackgroundConfiguration_tCC24E374B966B79D018C14F6807A6DDA47302F17 ** get_address_of_videoBackground_9() { return &___videoBackground_9; }
	inline void set_videoBackground_9(VideoBackgroundConfiguration_tCC24E374B966B79D018C14F6807A6DDA47302F17 * value)
	{
		___videoBackground_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoBackground_9), (void*)value);
	}

	inline static int32_t get_offset_of_deviceTracker_10() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82, ___deviceTracker_10)); }
	inline DeviceTrackerConfiguration_tC11D2DA49200D3693731D6AFF3F793E4315D1E3F * get_deviceTracker_10() const { return ___deviceTracker_10; }
	inline DeviceTrackerConfiguration_tC11D2DA49200D3693731D6AFF3F793E4315D1E3F ** get_address_of_deviceTracker_10() { return &___deviceTracker_10; }
	inline void set_deviceTracker_10(DeviceTrackerConfiguration_tC11D2DA49200D3693731D6AFF3F793E4315D1E3F * value)
	{
		___deviceTracker_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceTracker_10), (void*)value);
	}

	inline static int32_t get_offset_of_smartTerrain_11() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82, ___smartTerrain_11)); }
	inline SmartTerrainConfiguration_t6104CF56BC1AFE13ED509BB01CBE90E7E64372C7 * get_smartTerrain_11() const { return ___smartTerrain_11; }
	inline SmartTerrainConfiguration_t6104CF56BC1AFE13ED509BB01CBE90E7E64372C7 ** get_address_of_smartTerrain_11() { return &___smartTerrain_11; }
	inline void set_smartTerrain_11(SmartTerrainConfiguration_t6104CF56BC1AFE13ED509BB01CBE90E7E64372C7 * value)
	{
		___smartTerrain_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___smartTerrain_11), (void*)value);
	}

	inline static int32_t get_offset_of_webcam_12() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82, ___webcam_12)); }
	inline WebCamConfiguration_t0A5BD19A86D3AA8B68FB79C1EA8A5855A6C9F321 * get_webcam_12() const { return ___webcam_12; }
	inline WebCamConfiguration_t0A5BD19A86D3AA8B68FB79C1EA8A5855A6C9F321 ** get_address_of_webcam_12() { return &___webcam_12; }
	inline void set_webcam_12(WebCamConfiguration_t0A5BD19A86D3AA8B68FB79C1EA8A5855A6C9F321 * value)
	{
		___webcam_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webcam_12), (void*)value);
	}
};

struct VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82_StaticFields
{
public:
	// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::mInstance
	VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82 * ___mInstance_4;
	// System.Object Vuforia.VuforiaConfiguration::mPadlock
	RuntimeObject * ___mPadlock_5;

public:
	inline static int32_t get_offset_of_mInstance_4() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82_StaticFields, ___mInstance_4)); }
	inline VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82 * get_mInstance_4() const { return ___mInstance_4; }
	inline VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82 ** get_address_of_mInstance_4() { return &___mInstance_4; }
	inline void set_mInstance_4(VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82 * value)
	{
		___mInstance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInstance_4), (void*)value);
	}

	inline static int32_t get_offset_of_mPadlock_5() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82_StaticFields, ___mPadlock_5)); }
	inline RuntimeObject * get_mPadlock_5() const { return ___mPadlock_5; }
	inline RuntimeObject ** get_address_of_mPadlock_5() { return &___mPadlock_5; }
	inline void set_mPadlock_5(RuntimeObject * value)
	{
		___mPadlock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPadlock_5), (void*)value);
	}
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Canvas
struct  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields
{
public:
	// UnityEngine.Canvas_WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_4), (void*)value);
	}
};


// UnityEngine.MeshRenderer
struct  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// BoundingBoxRenderer
struct  BoundingBoxRenderer_t687A36FDD509AC21A29D0CF70359619EFD251AFB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Material BoundingBoxRenderer::mLineMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___mLineMaterial_4;

public:
	inline static int32_t get_offset_of_mLineMaterial_4() { return static_cast<int32_t>(offsetof(BoundingBoxRenderer_t687A36FDD509AC21A29D0CF70359619EFD251AFB, ___mLineMaterial_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_mLineMaterial_4() const { return ___mLineMaterial_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_mLineMaterial_4() { return &___mLineMaterial_4; }
	inline void set_mLineMaterial_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___mLineMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLineMaterial_4), (void*)value);
	}
};


// DefaultModelRecoEventHandler
struct  DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Vuforia.ModelTargetBehaviour DefaultModelRecoEventHandler::mLastRecoModelTarget
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * ___mLastRecoModelTarget_4;
	// System.Boolean DefaultModelRecoEventHandler::mSearching
	bool ___mSearching_5;
	// System.Single DefaultModelRecoEventHandler::mLastStatusCheckTime
	float ___mLastStatusCheckTime_6;
	// Vuforia.ModelRecoBehaviour DefaultModelRecoEventHandler::mModelRecoBehaviour
	ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291 * ___mModelRecoBehaviour_7;
	// Vuforia.TargetFinder DefaultModelRecoEventHandler::mTargetFinder
	TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * ___mTargetFinder_8;
	// UnityEngine.UI.Text DefaultModelRecoEventHandler::ModelRecoErrorText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___ModelRecoErrorText_9;
	// System.Boolean DefaultModelRecoEventHandler::StopSearchWhenModelFound
	bool ___StopSearchWhenModelFound_10;
	// System.Boolean DefaultModelRecoEventHandler::StopSearchWhileTracking
	bool ___StopSearchWhileTracking_11;

public:
	inline static int32_t get_offset_of_mLastRecoModelTarget_4() { return static_cast<int32_t>(offsetof(DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA, ___mLastRecoModelTarget_4)); }
	inline ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * get_mLastRecoModelTarget_4() const { return ___mLastRecoModelTarget_4; }
	inline ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 ** get_address_of_mLastRecoModelTarget_4() { return &___mLastRecoModelTarget_4; }
	inline void set_mLastRecoModelTarget_4(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * value)
	{
		___mLastRecoModelTarget_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLastRecoModelTarget_4), (void*)value);
	}

	inline static int32_t get_offset_of_mSearching_5() { return static_cast<int32_t>(offsetof(DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA, ___mSearching_5)); }
	inline bool get_mSearching_5() const { return ___mSearching_5; }
	inline bool* get_address_of_mSearching_5() { return &___mSearching_5; }
	inline void set_mSearching_5(bool value)
	{
		___mSearching_5 = value;
	}

	inline static int32_t get_offset_of_mLastStatusCheckTime_6() { return static_cast<int32_t>(offsetof(DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA, ___mLastStatusCheckTime_6)); }
	inline float get_mLastStatusCheckTime_6() const { return ___mLastStatusCheckTime_6; }
	inline float* get_address_of_mLastStatusCheckTime_6() { return &___mLastStatusCheckTime_6; }
	inline void set_mLastStatusCheckTime_6(float value)
	{
		___mLastStatusCheckTime_6 = value;
	}

	inline static int32_t get_offset_of_mModelRecoBehaviour_7() { return static_cast<int32_t>(offsetof(DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA, ___mModelRecoBehaviour_7)); }
	inline ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291 * get_mModelRecoBehaviour_7() const { return ___mModelRecoBehaviour_7; }
	inline ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291 ** get_address_of_mModelRecoBehaviour_7() { return &___mModelRecoBehaviour_7; }
	inline void set_mModelRecoBehaviour_7(ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291 * value)
	{
		___mModelRecoBehaviour_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mModelRecoBehaviour_7), (void*)value);
	}

	inline static int32_t get_offset_of_mTargetFinder_8() { return static_cast<int32_t>(offsetof(DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA, ___mTargetFinder_8)); }
	inline TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * get_mTargetFinder_8() const { return ___mTargetFinder_8; }
	inline TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC ** get_address_of_mTargetFinder_8() { return &___mTargetFinder_8; }
	inline void set_mTargetFinder_8(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * value)
	{
		___mTargetFinder_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTargetFinder_8), (void*)value);
	}

	inline static int32_t get_offset_of_ModelRecoErrorText_9() { return static_cast<int32_t>(offsetof(DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA, ___ModelRecoErrorText_9)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_ModelRecoErrorText_9() const { return ___ModelRecoErrorText_9; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_ModelRecoErrorText_9() { return &___ModelRecoErrorText_9; }
	inline void set_ModelRecoErrorText_9(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___ModelRecoErrorText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ModelRecoErrorText_9), (void*)value);
	}

	inline static int32_t get_offset_of_StopSearchWhenModelFound_10() { return static_cast<int32_t>(offsetof(DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA, ___StopSearchWhenModelFound_10)); }
	inline bool get_StopSearchWhenModelFound_10() const { return ___StopSearchWhenModelFound_10; }
	inline bool* get_address_of_StopSearchWhenModelFound_10() { return &___StopSearchWhenModelFound_10; }
	inline void set_StopSearchWhenModelFound_10(bool value)
	{
		___StopSearchWhenModelFound_10 = value;
	}

	inline static int32_t get_offset_of_StopSearchWhileTracking_11() { return static_cast<int32_t>(offsetof(DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA, ___StopSearchWhileTracking_11)); }
	inline bool get_StopSearchWhileTracking_11() const { return ___StopSearchWhileTracking_11; }
	inline bool* get_address_of_StopSearchWhileTracking_11() { return &___StopSearchWhileTracking_11; }
	inline void set_StopSearchWhileTracking_11(bool value)
	{
		___StopSearchWhileTracking_11 = value;
	}
};


// DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t6997E0A19AC0FABC165FB7264F57DF2EDF4E8022  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Vuforia.TrackableBehaviour DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * ___mTrackableBehaviour_4;
	// Vuforia.TrackableBehaviour_Status DefaultTrackableEventHandler::m_PreviousStatus
	int32_t ___m_PreviousStatus_5;
	// Vuforia.TrackableBehaviour_Status DefaultTrackableEventHandler::m_NewStatus
	int32_t ___m_NewStatus_6;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_4() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t6997E0A19AC0FABC165FB7264F57DF2EDF4E8022, ___mTrackableBehaviour_4)); }
	inline TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * get_mTrackableBehaviour_4() const { return ___mTrackableBehaviour_4; }
	inline TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 ** get_address_of_mTrackableBehaviour_4() { return &___mTrackableBehaviour_4; }
	inline void set_mTrackableBehaviour_4(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * value)
	{
		___mTrackableBehaviour_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackableBehaviour_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousStatus_5() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t6997E0A19AC0FABC165FB7264F57DF2EDF4E8022, ___m_PreviousStatus_5)); }
	inline int32_t get_m_PreviousStatus_5() const { return ___m_PreviousStatus_5; }
	inline int32_t* get_address_of_m_PreviousStatus_5() { return &___m_PreviousStatus_5; }
	inline void set_m_PreviousStatus_5(int32_t value)
	{
		___m_PreviousStatus_5 = value;
	}

	inline static int32_t get_offset_of_m_NewStatus_6() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t6997E0A19AC0FABC165FB7264F57DF2EDF4E8022, ___m_NewStatus_6)); }
	inline int32_t get_m_NewStatus_6() const { return ___m_NewStatus_6; }
	inline int32_t* get_address_of_m_NewStatus_6() { return &___m_NewStatus_6; }
	inline void set_m_NewStatus_6(int32_t value)
	{
		___m_NewStatus_6 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// VuforiaMonoBehaviour
struct  VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// DefaultInitializationErrorHandler
struct  DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:
	// System.String DefaultInitializationErrorHandler::mErrorText
	String_t* ___mErrorText_4;
	// System.Boolean DefaultInitializationErrorHandler::mErrorOccurred
	bool ___mErrorOccurred_5;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::bodyStyle
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___bodyStyle_7;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::headerStyle
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___headerStyle_8;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::footerStyle
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___footerStyle_9;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::bodyTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___bodyTexture_10;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::headerTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___headerTexture_11;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::footerTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___footerTexture_12;

public:
	inline static int32_t get_offset_of_mErrorText_4() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38, ___mErrorText_4)); }
	inline String_t* get_mErrorText_4() const { return ___mErrorText_4; }
	inline String_t** get_address_of_mErrorText_4() { return &___mErrorText_4; }
	inline void set_mErrorText_4(String_t* value)
	{
		___mErrorText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mErrorText_4), (void*)value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_5() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38, ___mErrorOccurred_5)); }
	inline bool get_mErrorOccurred_5() const { return ___mErrorOccurred_5; }
	inline bool* get_address_of_mErrorOccurred_5() { return &___mErrorOccurred_5; }
	inline void set_mErrorOccurred_5(bool value)
	{
		___mErrorOccurred_5 = value;
	}

	inline static int32_t get_offset_of_bodyStyle_7() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38, ___bodyStyle_7)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_bodyStyle_7() const { return ___bodyStyle_7; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_bodyStyle_7() { return &___bodyStyle_7; }
	inline void set_bodyStyle_7(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___bodyStyle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bodyStyle_7), (void*)value);
	}

	inline static int32_t get_offset_of_headerStyle_8() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38, ___headerStyle_8)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_headerStyle_8() const { return ___headerStyle_8; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_headerStyle_8() { return &___headerStyle_8; }
	inline void set_headerStyle_8(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___headerStyle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headerStyle_8), (void*)value);
	}

	inline static int32_t get_offset_of_footerStyle_9() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38, ___footerStyle_9)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_footerStyle_9() const { return ___footerStyle_9; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_footerStyle_9() { return &___footerStyle_9; }
	inline void set_footerStyle_9(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___footerStyle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___footerStyle_9), (void*)value);
	}

	inline static int32_t get_offset_of_bodyTexture_10() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38, ___bodyTexture_10)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_bodyTexture_10() const { return ___bodyTexture_10; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_bodyTexture_10() { return &___bodyTexture_10; }
	inline void set_bodyTexture_10(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___bodyTexture_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bodyTexture_10), (void*)value);
	}

	inline static int32_t get_offset_of_headerTexture_11() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38, ___headerTexture_11)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_headerTexture_11() const { return ___headerTexture_11; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_headerTexture_11() { return &___headerTexture_11; }
	inline void set_headerTexture_11(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___headerTexture_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headerTexture_11), (void*)value);
	}

	inline static int32_t get_offset_of_footerTexture_12() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38, ___footerTexture_12)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_footerTexture_12() const { return ___footerTexture_12; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_footerTexture_12() { return &___footerTexture_12; }
	inline void set_footerTexture_12(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___footerTexture_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___footerTexture_12), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// Vuforia.ObjectRecoBehaviour
struct  ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:
	// Vuforia.ObjectTracker Vuforia.ObjectRecoBehaviour::mObjectTracker
	ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * ___mObjectTracker_4;
	// Vuforia.TargetFinder Vuforia.ObjectRecoBehaviour::mTargetFinder
	TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * ___mTargetFinder_5;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mCurrentlyInitializing
	bool ___mCurrentlyInitializing_6;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mInitSuccess
	bool ___mInitSuccess_7;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mRecoStarted
	bool ___mRecoStarted_8;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mOnInitializedCalled
	bool ___mOnInitializedCalled_9;
	// System.Collections.Generic.List`1<Vuforia.IObjectRecoEventHandler> Vuforia.ObjectRecoBehaviour::mHandlers
	List_1_tD4C154F626A17DBC9FBC99FAF2FDB57A2BBCB0BD * ___mHandlers_10;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mTargetFinderStartedBeforeDisable
	bool ___mTargetFinderStartedBeforeDisable_11;

public:
	inline static int32_t get_offset_of_mObjectTracker_4() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mObjectTracker_4)); }
	inline ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * get_mObjectTracker_4() const { return ___mObjectTracker_4; }
	inline ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E ** get_address_of_mObjectTracker_4() { return &___mObjectTracker_4; }
	inline void set_mObjectTracker_4(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * value)
	{
		___mObjectTracker_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mObjectTracker_4), (void*)value);
	}

	inline static int32_t get_offset_of_mTargetFinder_5() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mTargetFinder_5)); }
	inline TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * get_mTargetFinder_5() const { return ___mTargetFinder_5; }
	inline TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC ** get_address_of_mTargetFinder_5() { return &___mTargetFinder_5; }
	inline void set_mTargetFinder_5(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * value)
	{
		___mTargetFinder_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTargetFinder_5), (void*)value);
	}

	inline static int32_t get_offset_of_mCurrentlyInitializing_6() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mCurrentlyInitializing_6)); }
	inline bool get_mCurrentlyInitializing_6() const { return ___mCurrentlyInitializing_6; }
	inline bool* get_address_of_mCurrentlyInitializing_6() { return &___mCurrentlyInitializing_6; }
	inline void set_mCurrentlyInitializing_6(bool value)
	{
		___mCurrentlyInitializing_6 = value;
	}

	inline static int32_t get_offset_of_mInitSuccess_7() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mInitSuccess_7)); }
	inline bool get_mInitSuccess_7() const { return ___mInitSuccess_7; }
	inline bool* get_address_of_mInitSuccess_7() { return &___mInitSuccess_7; }
	inline void set_mInitSuccess_7(bool value)
	{
		___mInitSuccess_7 = value;
	}

	inline static int32_t get_offset_of_mRecoStarted_8() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mRecoStarted_8)); }
	inline bool get_mRecoStarted_8() const { return ___mRecoStarted_8; }
	inline bool* get_address_of_mRecoStarted_8() { return &___mRecoStarted_8; }
	inline void set_mRecoStarted_8(bool value)
	{
		___mRecoStarted_8 = value;
	}

	inline static int32_t get_offset_of_mOnInitializedCalled_9() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mOnInitializedCalled_9)); }
	inline bool get_mOnInitializedCalled_9() const { return ___mOnInitializedCalled_9; }
	inline bool* get_address_of_mOnInitializedCalled_9() { return &___mOnInitializedCalled_9; }
	inline void set_mOnInitializedCalled_9(bool value)
	{
		___mOnInitializedCalled_9 = value;
	}

	inline static int32_t get_offset_of_mHandlers_10() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mHandlers_10)); }
	inline List_1_tD4C154F626A17DBC9FBC99FAF2FDB57A2BBCB0BD * get_mHandlers_10() const { return ___mHandlers_10; }
	inline List_1_tD4C154F626A17DBC9FBC99FAF2FDB57A2BBCB0BD ** get_address_of_mHandlers_10() { return &___mHandlers_10; }
	inline void set_mHandlers_10(List_1_tD4C154F626A17DBC9FBC99FAF2FDB57A2BBCB0BD * value)
	{
		___mHandlers_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mHandlers_10), (void*)value);
	}

	inline static int32_t get_offset_of_mTargetFinderStartedBeforeDisable_11() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mTargetFinderStartedBeforeDisable_11)); }
	inline bool get_mTargetFinderStartedBeforeDisable_11() const { return ___mTargetFinderStartedBeforeDisable_11; }
	inline bool* get_address_of_mTargetFinderStartedBeforeDisable_11() { return &___mTargetFinderStartedBeforeDisable_11; }
	inline void set_mTargetFinderStartedBeforeDisable_11(bool value)
	{
		___mTargetFinderStartedBeforeDisable_11 = value;
	}
};


// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:
	// System.Double Vuforia.TrackableBehaviour::<TimeStamp>k__BackingField
	double ___U3CTimeStampU3Ek__BackingField_4;
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_5;
	// System.Boolean Vuforia.TrackableBehaviour::mPreserveChildSize
	bool ___mPreserveChildSize_6;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_7;
	// UnityEngine.Vector3 Vuforia.TrackableBehaviour::mPreviousScale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mPreviousScale_8;
	// Vuforia.TrackableBehaviour_Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_9;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	RuntimeObject* ___mTrackable_10;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_tE4338C7F7D33C78CB75B44EB5CCCA0152E97497B * ___mTrackableEventHandlers_11;

public:
	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___U3CTimeStampU3Ek__BackingField_4)); }
	inline double get_U3CTimeStampU3Ek__BackingField_4() const { return ___U3CTimeStampU3Ek__BackingField_4; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_4() { return &___U3CTimeStampU3Ek__BackingField_4; }
	inline void set_U3CTimeStampU3Ek__BackingField_4(double value)
	{
		___U3CTimeStampU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_mTrackableName_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___mTrackableName_5)); }
	inline String_t* get_mTrackableName_5() const { return ___mTrackableName_5; }
	inline String_t** get_address_of_mTrackableName_5() { return &___mTrackableName_5; }
	inline void set_mTrackableName_5(String_t* value)
	{
		___mTrackableName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackableName_5), (void*)value);
	}

	inline static int32_t get_offset_of_mPreserveChildSize_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___mPreserveChildSize_6)); }
	inline bool get_mPreserveChildSize_6() const { return ___mPreserveChildSize_6; }
	inline bool* get_address_of_mPreserveChildSize_6() { return &___mPreserveChildSize_6; }
	inline void set_mPreserveChildSize_6(bool value)
	{
		___mPreserveChildSize_6 = value;
	}

	inline static int32_t get_offset_of_mInitializedInEditor_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___mInitializedInEditor_7)); }
	inline bool get_mInitializedInEditor_7() const { return ___mInitializedInEditor_7; }
	inline bool* get_address_of_mInitializedInEditor_7() { return &___mInitializedInEditor_7; }
	inline void set_mInitializedInEditor_7(bool value)
	{
		___mInitializedInEditor_7 = value;
	}

	inline static int32_t get_offset_of_mPreviousScale_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___mPreviousScale_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mPreviousScale_8() const { return ___mPreviousScale_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mPreviousScale_8() { return &___mPreviousScale_8; }
	inline void set_mPreviousScale_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mPreviousScale_8 = value;
	}

	inline static int32_t get_offset_of_mStatus_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___mStatus_9)); }
	inline int32_t get_mStatus_9() const { return ___mStatus_9; }
	inline int32_t* get_address_of_mStatus_9() { return &___mStatus_9; }
	inline void set_mStatus_9(int32_t value)
	{
		___mStatus_9 = value;
	}

	inline static int32_t get_offset_of_mTrackable_10() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___mTrackable_10)); }
	inline RuntimeObject* get_mTrackable_10() const { return ___mTrackable_10; }
	inline RuntimeObject** get_address_of_mTrackable_10() { return &___mTrackable_10; }
	inline void set_mTrackable_10(RuntimeObject* value)
	{
		___mTrackable_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackable_10), (void*)value);
	}

	inline static int32_t get_offset_of_mTrackableEventHandlers_11() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___mTrackableEventHandlers_11)); }
	inline List_1_tE4338C7F7D33C78CB75B44EB5CCCA0152E97497B * get_mTrackableEventHandlers_11() const { return ___mTrackableEventHandlers_11; }
	inline List_1_tE4338C7F7D33C78CB75B44EB5CCCA0152E97497B ** get_address_of_mTrackableEventHandlers_11() { return &___mTrackableEventHandlers_11; }
	inline void set_mTrackableEventHandlers_11(List_1_tE4338C7F7D33C78CB75B44EB5CCCA0152E97497B * value)
	{
		___mTrackableEventHandlers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackableEventHandlers_11), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_29;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_31;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_32;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_33;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_29)); }
	inline bool get_m_IncludeForMasking_29() const { return ___m_IncludeForMasking_29; }
	inline bool* get_address_of_m_IncludeForMasking_29() { return &___m_IncludeForMasking_29; }
	inline void set_m_IncludeForMasking_29(bool value)
	{
		___m_IncludeForMasking_29 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_30)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_30() const { return ___m_OnCullStateChanged_30; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_30() { return &___m_OnCullStateChanged_30; }
	inline void set_m_OnCullStateChanged_30(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_31)); }
	inline bool get_m_ShouldRecalculate_31() const { return ___m_ShouldRecalculate_31; }
	inline bool* get_address_of_m_ShouldRecalculate_31() { return &___m_ShouldRecalculate_31; }
	inline void set_m_ShouldRecalculate_31(bool value)
	{
		___m_ShouldRecalculate_31 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_32)); }
	inline int32_t get_m_StencilValue_32() const { return ___m_StencilValue_32; }
	inline int32_t* get_address_of_m_StencilValue_32() { return &___m_StencilValue_32; }
	inline void set_m_StencilValue_32(int32_t value)
	{
		___m_StencilValue_32 = value;
	}

	inline static int32_t get_offset_of_m_Corners_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_33)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_33() const { return ___m_Corners_33; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_33() { return &___m_Corners_33; }
	inline void set_m_Corners_33(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_33), (void*)value);
	}
};


// Vuforia.DataSetTrackableBehaviour
struct  DataSetTrackableBehaviour_t84B7BB3C959046F38CC73E423800BD2F8859E706  : public TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4
{
public:
	// System.String Vuforia.DataSetTrackableBehaviour::mDataSetPath
	String_t* ___mDataSetPath_12;

public:
	inline static int32_t get_offset_of_mDataSetPath_12() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t84B7BB3C959046F38CC73E423800BD2F8859E706, ___mDataSetPath_12)); }
	inline String_t* get_mDataSetPath_12() const { return ___mDataSetPath_12; }
	inline String_t** get_address_of_mDataSetPath_12() { return &___mDataSetPath_12; }
	inline void set_mDataSetPath_12(String_t* value)
	{
		___mDataSetPath_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDataSetPath_12), (void*)value);
	}
};


// Vuforia.ModelRecoBehaviour
struct  ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291  : public ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D
{
public:
	// System.String Vuforia.ModelRecoBehaviour::Database
	String_t* ___Database_12;

public:
	inline static int32_t get_offset_of_Database_12() { return static_cast<int32_t>(offsetof(ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291, ___Database_12)); }
	inline String_t* get_Database_12() const { return ___Database_12; }
	inline String_t** get_address_of_Database_12() { return &___Database_12; }
	inline void set_Database_12(String_t* value)
	{
		___Database_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Database_12), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_34;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_35;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_37;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_39;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_40;

public:
	inline static int32_t get_offset_of_m_FontData_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_34)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_34() const { return ___m_FontData_34; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_34() { return &___m_FontData_34; }
	inline void set_m_FontData_34(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_35)); }
	inline String_t* get_m_Text_35() const { return ___m_Text_35; }
	inline String_t** get_address_of_m_Text_35() { return &___m_Text_35; }
	inline void set_m_Text_35(String_t* value)
	{
		___m_Text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_36)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_36() const { return ___m_TextCache_36; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_36() { return &___m_TextCache_36; }
	inline void set_m_TextCache_36(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_37() const { return ___m_TextCacheForLayout_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_37() { return &___m_TextCacheForLayout_37; }
	inline void set_m_TextCacheForLayout_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_39)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_39() const { return ___m_DisableFontTextureRebuiltCallback_39; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_39() { return &___m_DisableFontTextureRebuiltCallback_39; }
	inline void set_m_DisableFontTextureRebuiltCallback_39(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_39 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_40)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_40() const { return ___m_TempVerts_40; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_40() { return &___m_TempVerts_40; }
	inline void set_m_TempVerts_40(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_40), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_38;

public:
	inline static int32_t get_offset_of_s_DefaultText_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_38)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_38() const { return ___s_DefaultText_38; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_38() { return &___s_DefaultText_38; }
	inline void set_s_DefaultText_38(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_38), (void*)value);
	}
};


// Vuforia.ModelTargetBehaviour
struct  ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0  : public DataSetTrackableBehaviour_t84B7BB3C959046F38CC73E423800BD2F8859E706
{
public:
	// Vuforia.InternalModelTarget Vuforia.ModelTargetBehaviour::mModelTarget
	RuntimeObject* ___mModelTarget_14;
	// UnityEngine.GameObject Vuforia.ModelTargetBehaviour::mGuideViewRenderer
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mGuideViewRenderer_15;
	// Vuforia.PositionalDeviceTracker Vuforia.ModelTargetBehaviour::mDeviceTracker
	PositionalDeviceTracker_tEFAA5FDB9CF19DA74081AE51B41B4B5D9F40D8EE * ___mDeviceTracker_16;
	// System.Single Vuforia.ModelTargetBehaviour::mBaseSize
	float ___mBaseSize_17;
	// System.Single Vuforia.ModelTargetBehaviour::mAspectRatioXY
	float ___mAspectRatioXY_18;
	// System.Single Vuforia.ModelTargetBehaviour::mAspectRatioXZ
	float ___mAspectRatioXZ_19;
	// System.Boolean Vuforia.ModelTargetBehaviour::mShowBoundingBox
	bool ___mShowBoundingBox_20;
	// System.Boolean Vuforia.ModelTargetBehaviour::mOverrideSnappingPose
	bool ___mOverrideSnappingPose_21;
	// UnityEngine.Vector3 Vuforia.ModelTargetBehaviour::mBBoxMin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mBBoxMin_22;
	// UnityEngine.Vector3 Vuforia.ModelTargetBehaviour::mBBoxMax
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mBBoxMax_23;
	// UnityEngine.Texture2D Vuforia.ModelTargetBehaviour::mPreviewImage
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___mPreviewImage_24;
	// System.Single Vuforia.ModelTargetBehaviour::mLength
	float ___mLength_25;
	// System.Single Vuforia.ModelTargetBehaviour::mWidth
	float ___mWidth_26;
	// System.Single Vuforia.ModelTargetBehaviour::mHeight
	float ___mHeight_27;
	// UnityEngine.GameObject Vuforia.ModelTargetBehaviour::m3DGuideViewModel
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m3DGuideViewModel_28;
	// UnityEngine.Texture2D Vuforia.ModelTargetBehaviour::m2DGuideViewImage
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m2DGuideViewImage_29;
	// Vuforia.ModelTargetBehaviour_GuideViewDisplayMode Vuforia.ModelTargetBehaviour::mGuideViewDisplayMode
	int32_t ___mGuideViewDisplayMode_30;
	// UnityEngine.Material Vuforia.ModelTargetBehaviour::m2DGuideViewMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m2DGuideViewMaterial_31;
	// UnityEngine.Material Vuforia.ModelTargetBehaviour::m3DGuideViewMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m3DGuideViewMaterial_32;
	// System.String Vuforia.ModelTargetBehaviour::mSelectedGuideView
	String_t* ___mSelectedGuideView_33;
	// UnityEngine.Vector3 Vuforia.ModelTargetBehaviour::mLastTransformScale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mLastTransformScale_34;
	// UnityEngine.Vector3 Vuforia.ModelTargetBehaviour::mLastSize
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mLastSize_35;
	// System.Boolean Vuforia.ModelTargetBehaviour::mDataSetIsActive
	bool ___mDataSetIsActive_36;
	// Vuforia.ModelRecoBehaviour Vuforia.ModelTargetBehaviour::mModelRecoBehaviour
	ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291 * ___mModelRecoBehaviour_37;

public:
	inline static int32_t get_offset_of_mModelTarget_14() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mModelTarget_14)); }
	inline RuntimeObject* get_mModelTarget_14() const { return ___mModelTarget_14; }
	inline RuntimeObject** get_address_of_mModelTarget_14() { return &___mModelTarget_14; }
	inline void set_mModelTarget_14(RuntimeObject* value)
	{
		___mModelTarget_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mModelTarget_14), (void*)value);
	}

	inline static int32_t get_offset_of_mGuideViewRenderer_15() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mGuideViewRenderer_15)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mGuideViewRenderer_15() const { return ___mGuideViewRenderer_15; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mGuideViewRenderer_15() { return &___mGuideViewRenderer_15; }
	inline void set_mGuideViewRenderer_15(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mGuideViewRenderer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGuideViewRenderer_15), (void*)value);
	}

	inline static int32_t get_offset_of_mDeviceTracker_16() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mDeviceTracker_16)); }
	inline PositionalDeviceTracker_tEFAA5FDB9CF19DA74081AE51B41B4B5D9F40D8EE * get_mDeviceTracker_16() const { return ___mDeviceTracker_16; }
	inline PositionalDeviceTracker_tEFAA5FDB9CF19DA74081AE51B41B4B5D9F40D8EE ** get_address_of_mDeviceTracker_16() { return &___mDeviceTracker_16; }
	inline void set_mDeviceTracker_16(PositionalDeviceTracker_tEFAA5FDB9CF19DA74081AE51B41B4B5D9F40D8EE * value)
	{
		___mDeviceTracker_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDeviceTracker_16), (void*)value);
	}

	inline static int32_t get_offset_of_mBaseSize_17() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mBaseSize_17)); }
	inline float get_mBaseSize_17() const { return ___mBaseSize_17; }
	inline float* get_address_of_mBaseSize_17() { return &___mBaseSize_17; }
	inline void set_mBaseSize_17(float value)
	{
		___mBaseSize_17 = value;
	}

	inline static int32_t get_offset_of_mAspectRatioXY_18() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mAspectRatioXY_18)); }
	inline float get_mAspectRatioXY_18() const { return ___mAspectRatioXY_18; }
	inline float* get_address_of_mAspectRatioXY_18() { return &___mAspectRatioXY_18; }
	inline void set_mAspectRatioXY_18(float value)
	{
		___mAspectRatioXY_18 = value;
	}

	inline static int32_t get_offset_of_mAspectRatioXZ_19() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mAspectRatioXZ_19)); }
	inline float get_mAspectRatioXZ_19() const { return ___mAspectRatioXZ_19; }
	inline float* get_address_of_mAspectRatioXZ_19() { return &___mAspectRatioXZ_19; }
	inline void set_mAspectRatioXZ_19(float value)
	{
		___mAspectRatioXZ_19 = value;
	}

	inline static int32_t get_offset_of_mShowBoundingBox_20() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mShowBoundingBox_20)); }
	inline bool get_mShowBoundingBox_20() const { return ___mShowBoundingBox_20; }
	inline bool* get_address_of_mShowBoundingBox_20() { return &___mShowBoundingBox_20; }
	inline void set_mShowBoundingBox_20(bool value)
	{
		___mShowBoundingBox_20 = value;
	}

	inline static int32_t get_offset_of_mOverrideSnappingPose_21() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mOverrideSnappingPose_21)); }
	inline bool get_mOverrideSnappingPose_21() const { return ___mOverrideSnappingPose_21; }
	inline bool* get_address_of_mOverrideSnappingPose_21() { return &___mOverrideSnappingPose_21; }
	inline void set_mOverrideSnappingPose_21(bool value)
	{
		___mOverrideSnappingPose_21 = value;
	}

	inline static int32_t get_offset_of_mBBoxMin_22() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mBBoxMin_22)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mBBoxMin_22() const { return ___mBBoxMin_22; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mBBoxMin_22() { return &___mBBoxMin_22; }
	inline void set_mBBoxMin_22(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mBBoxMin_22 = value;
	}

	inline static int32_t get_offset_of_mBBoxMax_23() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mBBoxMax_23)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mBBoxMax_23() const { return ___mBBoxMax_23; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mBBoxMax_23() { return &___mBBoxMax_23; }
	inline void set_mBBoxMax_23(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mBBoxMax_23 = value;
	}

	inline static int32_t get_offset_of_mPreviewImage_24() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mPreviewImage_24)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_mPreviewImage_24() const { return ___mPreviewImage_24; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_mPreviewImage_24() { return &___mPreviewImage_24; }
	inline void set_mPreviewImage_24(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___mPreviewImage_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPreviewImage_24), (void*)value);
	}

	inline static int32_t get_offset_of_mLength_25() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mLength_25)); }
	inline float get_mLength_25() const { return ___mLength_25; }
	inline float* get_address_of_mLength_25() { return &___mLength_25; }
	inline void set_mLength_25(float value)
	{
		___mLength_25 = value;
	}

	inline static int32_t get_offset_of_mWidth_26() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mWidth_26)); }
	inline float get_mWidth_26() const { return ___mWidth_26; }
	inline float* get_address_of_mWidth_26() { return &___mWidth_26; }
	inline void set_mWidth_26(float value)
	{
		___mWidth_26 = value;
	}

	inline static int32_t get_offset_of_mHeight_27() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mHeight_27)); }
	inline float get_mHeight_27() const { return ___mHeight_27; }
	inline float* get_address_of_mHeight_27() { return &___mHeight_27; }
	inline void set_mHeight_27(float value)
	{
		___mHeight_27 = value;
	}

	inline static int32_t get_offset_of_m3DGuideViewModel_28() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___m3DGuideViewModel_28)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m3DGuideViewModel_28() const { return ___m3DGuideViewModel_28; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m3DGuideViewModel_28() { return &___m3DGuideViewModel_28; }
	inline void set_m3DGuideViewModel_28(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m3DGuideViewModel_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m3DGuideViewModel_28), (void*)value);
	}

	inline static int32_t get_offset_of_m2DGuideViewImage_29() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___m2DGuideViewImage_29)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m2DGuideViewImage_29() const { return ___m2DGuideViewImage_29; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m2DGuideViewImage_29() { return &___m2DGuideViewImage_29; }
	inline void set_m2DGuideViewImage_29(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m2DGuideViewImage_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m2DGuideViewImage_29), (void*)value);
	}

	inline static int32_t get_offset_of_mGuideViewDisplayMode_30() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mGuideViewDisplayMode_30)); }
	inline int32_t get_mGuideViewDisplayMode_30() const { return ___mGuideViewDisplayMode_30; }
	inline int32_t* get_address_of_mGuideViewDisplayMode_30() { return &___mGuideViewDisplayMode_30; }
	inline void set_mGuideViewDisplayMode_30(int32_t value)
	{
		___mGuideViewDisplayMode_30 = value;
	}

	inline static int32_t get_offset_of_m2DGuideViewMaterial_31() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___m2DGuideViewMaterial_31)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m2DGuideViewMaterial_31() const { return ___m2DGuideViewMaterial_31; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m2DGuideViewMaterial_31() { return &___m2DGuideViewMaterial_31; }
	inline void set_m2DGuideViewMaterial_31(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m2DGuideViewMaterial_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m2DGuideViewMaterial_31), (void*)value);
	}

	inline static int32_t get_offset_of_m3DGuideViewMaterial_32() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___m3DGuideViewMaterial_32)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m3DGuideViewMaterial_32() const { return ___m3DGuideViewMaterial_32; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m3DGuideViewMaterial_32() { return &___m3DGuideViewMaterial_32; }
	inline void set_m3DGuideViewMaterial_32(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m3DGuideViewMaterial_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m3DGuideViewMaterial_32), (void*)value);
	}

	inline static int32_t get_offset_of_mSelectedGuideView_33() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mSelectedGuideView_33)); }
	inline String_t* get_mSelectedGuideView_33() const { return ___mSelectedGuideView_33; }
	inline String_t** get_address_of_mSelectedGuideView_33() { return &___mSelectedGuideView_33; }
	inline void set_mSelectedGuideView_33(String_t* value)
	{
		___mSelectedGuideView_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mSelectedGuideView_33), (void*)value);
	}

	inline static int32_t get_offset_of_mLastTransformScale_34() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mLastTransformScale_34)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mLastTransformScale_34() const { return ___mLastTransformScale_34; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mLastTransformScale_34() { return &___mLastTransformScale_34; }
	inline void set_mLastTransformScale_34(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mLastTransformScale_34 = value;
	}

	inline static int32_t get_offset_of_mLastSize_35() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mLastSize_35)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mLastSize_35() const { return ___mLastSize_35; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mLastSize_35() { return &___mLastSize_35; }
	inline void set_mLastSize_35(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mLastSize_35 = value;
	}

	inline static int32_t get_offset_of_mDataSetIsActive_36() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mDataSetIsActive_36)); }
	inline bool get_mDataSetIsActive_36() const { return ___mDataSetIsActive_36; }
	inline bool* get_address_of_mDataSetIsActive_36() { return &___mDataSetIsActive_36; }
	inline void set_mDataSetIsActive_36(bool value)
	{
		___mDataSetIsActive_36 = value;
	}

	inline static int32_t get_offset_of_mModelRecoBehaviour_37() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mModelRecoBehaviour_37)); }
	inline ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291 * get_mModelRecoBehaviour_37() const { return ___mModelRecoBehaviour_37; }
	inline ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291 ** get_address_of_mModelRecoBehaviour_37() { return &___mModelRecoBehaviour_37; }
	inline void set_mModelRecoBehaviour_37(ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291 * value)
	{
		___mModelRecoBehaviour_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mModelRecoBehaviour_37), (void*)value);
	}
};

struct ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0_StaticFields
{
public:
	// System.String Vuforia.ModelTargetBehaviour::GUIDE_VIEW_RENDERER_NAME
	String_t* ___GUIDE_VIEW_RENDERER_NAME_13;

public:
	inline static int32_t get_offset_of_GUIDE_VIEW_RENDERER_NAME_13() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0_StaticFields, ___GUIDE_VIEW_RENDERER_NAME_13)); }
	inline String_t* get_GUIDE_VIEW_RENDERER_NAME_13() const { return ___GUIDE_VIEW_RENDERER_NAME_13; }
	inline String_t** get_address_of_GUIDE_VIEW_RENDERER_NAME_13() { return &___GUIDE_VIEW_RENDERER_NAME_13; }
	inline void set_GUIDE_VIEW_RENDERER_NAME_13(String_t* value)
	{
		___GUIDE_VIEW_RENDERER_NAME_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GUIDE_VIEW_RENDERER_NAME_13), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Vuforia.ModelTargetBehaviour[]
struct ModelTargetBehaviourU5BU5D_t7C081ED9446E930306255382D788CD614D99F69B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * m_Items[1];

public:
	inline ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Plane[]
struct PlaneU5BU5D_t79471E0ABE147C3018D88A036897B6DB49A782AA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  m_Items[1];

public:
	inline Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * m_Items[1];

public:
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * m_Items[1];

public:
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * m_Items[1];

public:
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Camera[]
struct CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * m_Items[1];

public:
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mD0D31654D450BEB7CFFA7B079FD2EB5946C2B8E8_gshared (Action_1_tABA1E3BFA092E3309A0ECC53722E4F9826DCE983 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_GetBuiltinResource_TisRuntimeObject_m85F17CF969B8729F73D7FC6E935EF20EF3AAA994_gshared (String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Resources::FindObjectsOfTypeAll<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Resources_FindObjectsOfTypeAll_TisRuntimeObject_mC9CD64DDE6AECE8EB6C5FC87DBB92322CD77DEF1_gshared (const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m58F7AC53741315DA8288813302360E0A36C78D25_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mB69FE16C5B98EFEC9A650D38F0B84CE61E09DE50_gshared (Action_2_t90FA358EDC64669F7C4BC31AB18EA84974155475 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void UnityEngine.GL::PushMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PushMatrix_mE47A23F3A906899E88AC525FFE2C3C2BD834DFF9 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Transform_get_localToWorldMatrix_mBC86B8C7BA6F53DAB8E0120D77729166399A0EED (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GL::MultMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_MultMatrix_m1DFDF696AC702066E319BD72252B7D97E74F3753 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A (int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mFB43D5458906C4005145640D4396FDE5853AFA3A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * p0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905 (const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_SetPass_m4BE0A8FCBF158C83522AA2F69118A2FE33683918 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Begin_m9A48BD6A2DA850D54250EF638DF5EC61F83E293C (int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.GL::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_End_m7EDEB843BD9F7E00BD838FDE074B4688C55C0755 (const RuntimeMethod* method);
// System.Void UnityEngine.GL::PopMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PopMatrix_mCAA6BC17D97358A4BC329E789AF2CA26C1204112 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void DefaultInitializationErrorHandler::SetErrorCode(Vuforia.VuforiaUnity/InitError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorCode_mCECD875BCA20516C39AE387C06AE94F1E9CA7B51 (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, int32_t ___errorCode0, const RuntimeMethod* method);
// System.Void DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorOccurred_m7B8CBC12E402A15CD961945D0FC5E788D926554F (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, bool ___errorOccurred0, const RuntimeMethod* method);
// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D * VuforiaRuntime_get_Instance_m09A801C6052F96463B0F330EE3F2453DFB329607 (const RuntimeMethod* method);
// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m93D264DDF8D63987A4D835C83F40D588CDCC86B8 (Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mD0D31654D450BEB7CFFA7B079FD2EB5946C2B8E8_gshared)(__this, p0, p1, method);
}
// System.Void Vuforia.VuforiaRuntime::RegisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaRuntime_RegisterVuforiaInitErrorCallback_m0DD342AE8B42646920AB2E96118805150FF5A68F (VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D * __this, Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF * p0, const RuntimeMethod* method);
// System.Void DefaultInitializationErrorHandler::SetupGUIStyles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetupGUIStyles_m1D91C7E31546279E161EFE09E6EC9EB59B9AE95C (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction__ctor_m216C357C45DF9A8ABE74056B8BDB1B7F94EE2D81 (WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  GUI_Window_mEB4F2621947A8A1140E495493A5B35DCF92E31C0 (int32_t p0, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  p1, WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100 * p2, String_t* p3, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaRuntime::UnregisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaRuntime_UnregisterVuforiaInitErrorCallback_m07045CAF11270BE48936D22CDE99FB2F026329E3 (VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D * __this, Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_m283D6B1DD970038379FBB974BC5A45F87CA727B6 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  p0, String_t* p1, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * p2, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_mC39C9F8426A10930825737A6D63B7C8DDF24748B (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  p0, String_t* p1, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * p2, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95 (const RuntimeMethod* method);
// System.String DefaultInitializationErrorHandler::getKeyInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultInitializationErrorHandler_getKeyInfo_m08AC1F25C54DB08BAF219BFF64570EB8385D8E1A (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_productName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_productName_m9F65580744751D3771DA955C0D947787F3F5E9A5 (const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * p0, const RuntimeMethod* method);
// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82 * VuforiaConfiguration_get_Instance_mB41F218B6090038BBA15873FEB67D1132526914C (const RuntimeMethod* method);
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::get_Vuforia()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064 * VuforiaConfiguration_get_Vuforia_mAE9E228790390C66CF46E33B874B802D5AA8692D (VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82 * __this, const RuntimeMethod* method);
// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_LicenseKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_LicenseKey_m37C1FB7D6702C2A7990BE00F23F23EA6FE61B7D6 (GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Single UnityEngine.Screen::get_dpi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Screen_get_dpi_m92A755DE9E23ABA717B5594F4F52AFB0FBEAC1D3 (const RuntimeMethod* method);
// UnityEngine.Texture2D DefaultInitializationErrorHandler::CreateSinglePixelTexture(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * DefaultInitializationErrorHandler_CreateSinglePixelTexture_m314E1B3B003A6F0253FD1A13070B93BCE6415AD6 (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_InverseLerp_m7054CDF25056E9B27D2467F91C95D628508F1F31 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * GUIStyle_get_normal_mC5CB22EED8113DEC86C54FB42F757B635D09DD2F (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_background_m1BB0CD97092DE9CB40908A8061068D83FB2655AF (GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::GetBuiltinResource<UnityEngine.Font>(System.String)
inline Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * Resources_GetBuiltinResource_TisFont_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_mEECDBF58A9BE0C87D23275A7997B2445D783E371 (String_t* p0, const RuntimeMethod* method)
{
	return ((  Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * (*) (String_t*, const RuntimeMethod*))Resources_GetBuiltinResource_TisRuntimeObject_m85F17CF969B8729F73D7FC6E935EF20EF3AAA994_gshared)(p0, method);
}
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_font_m348ACE92DE82C381C7AFE216029DB8D87F47E0A0 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_mA9F9F916A9BC3B81CFEE7460966FFD1E6B67F45F (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_black_mEB3C91F45F8AA7E4842238DFCC578BB322723DAF (const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m2B235845A292C22ABEDEFBB2FD798DEB4E104983 (GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_wordWrap_mB35DAD8BA109B812A2FCAED339BC5C6D7C3850C1 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_m80647E2DCB359B9521A6D8D53EA457E2648488CF (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffset__ctor_mF2A621DBA17A10660FEBE6237ACF4904DA6F9F29 (RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_padding_m125FFFE385BFA7D60E4D9D822053DE9508A7A465 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_m64098019A1065381E9909C513D3B8CA4617EF168 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m8BE87C152447B812D06CB894B3570269CC2DE7C3 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t p0, int32_t p1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);
// System.Void VuforiaMonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaMonoBehaviour__ctor_mB7B4A9CA2FA82920C82606F093597594EF3F9F91 (VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Vuforia.ModelRecoBehaviour>()
inline ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291 * Component_GetComponent_TisModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291_mB1C2CB8A4559A15034D0E2AB7A92350D8156646A (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Void Vuforia.ObjectRecoBehaviour::RegisterEventHandler(Vuforia.IObjectRecoEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectRecoBehaviour_RegisterEventHandler_mF917D6BEEC6F635B719641FB59ACB6901B5C165C (ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D * __this, RuntimeObject* p0, const RuntimeMethod* method);
// Vuforia.VuforiaARController Vuforia.VuforiaARController::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * VuforiaARController_get_Instance_m88278E3FE64C49BDDF48D5A6F7627654B7747A9D (const RuntimeMethod* method);
// System.Boolean Vuforia.VuforiaARController::get_HasStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VuforiaARController_get_HasStarted_mB53E0F21B1B62DFE7FF00047F5940B1369B559D9 (VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03 (const RuntimeMethod* method);
// System.Boolean DefaultModelRecoEventHandler::IsModelTrackedInView(Vuforia.ModelTargetBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultModelRecoEventHandler_IsModelTrackedInView_m484B3B06B82A9C624B57993066A8501F09756D5C (DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA * __this, ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * ___modelTarget0, const RuntimeMethod* method);
// System.Void Vuforia.ModelRecoBehaviour::set_ModelRecoEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelRecoBehaviour_set_ModelRecoEnabled_m7F477AE80EC465F28F1880332B3E1108E494AB73 (ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291 * __this, bool p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Boolean Vuforia.ObjectRecoBehaviour::UnregisterEventHandler(Vuforia.IObjectRecoEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectRecoBehaviour_UnregisterEventHandler_mFD012262E420EB70674CB6B55C0559F0C72F14DF (ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void DefaultModelRecoEventHandler::ShowErrorMessageInUI(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler_ShowErrorMessageInUI_m6CA52CF0093CC28BC4BCA765B4C701F10C476BEC (DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Void Vuforia.TargetFinder::ClearTrackables(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetFinder_ClearTrackables_m78EBEBC8F105C0AAE7A8C512221970E7565DE734 (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * __this, bool p0, const RuntimeMethod* method);
// Vuforia.ModelTargetBehaviour DefaultModelRecoEventHandler::FindExistingModelTarget(Vuforia.TargetFinder/ModelRecoSearchResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * DefaultModelRecoEventHandler_FindExistingModelTarget_mBE361609CBEC751571D7A486C152F90B03A1ABCA (DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA * __this, ModelRecoSearchResult_tB293FF5B3A646FF59DE16F2498C74EE958425354 * ___searchResult0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* p0, const RuntimeMethod* method);
// Vuforia.TrackableBehaviour Vuforia.TargetFinder::EnableTracking(Vuforia.TargetFinder/TargetSearchResult,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * TargetFinder_EnableTracking_m68B520DCBE39156A36CF8E726FF1D62F978160E9 (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * __this, TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5 * p0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p1, const RuntimeMethod* method);
// !!0[] UnityEngine.Resources::FindObjectsOfTypeAll<Vuforia.ModelTargetBehaviour>()
inline ModelTargetBehaviourU5BU5D_t7C081ED9446E930306255382D788CD614D99F69B* Resources_FindObjectsOfTypeAll_TisModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0_mDED67F4F44685EA63DB28B4E4BD59F1DBC0D3F03 (const RuntimeMethod* method)
{
	return ((  ModelTargetBehaviourU5BU5D_t7C081ED9446E930306255382D788CD614D99F69B* (*) (const RuntimeMethod*))Resources_FindObjectsOfTypeAll_TisRuntimeObject_mC9CD64DDE6AECE8EB6C5FC87DBB92322CD77DEF1_gshared)(method);
}
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrackableBehaviour_get_TrackableName_m7D1E2DB1F426F533F5894A3020D807958BBE4EFF (TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool p0, const RuntimeMethod* method);
// Vuforia.ModelTarget Vuforia.ModelTargetBehaviour::get_ModelTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ModelTargetBehaviour_get_ModelTarget_m4467FE02C27E08D862ECE2FF7AA71CEA6DC727C4 (ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Vuforia.OrientedBoundingBox3D::get_Center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  OrientedBoundingBox3D_get_Center_m902048EF9C5296FEE09AC649483103F671644005 (OrientedBoundingBox3D_t2239DBD535FBC2F84F49502D23761C0630CC93B9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Vuforia.OrientedBoundingBox3D::get_HalfExtents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  OrientedBoundingBox3D_get_HalfExtents_m82F2E82C842E89DFA4D7BB2A4C90B14C39A623F5 (OrientedBoundingBox3D_t2239DBD535FBC2F84F49502D23761C0630CC93B9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_TransformPoint_mA96DC2A20EE7F4F915F7509863A18D99F5DD76CB (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformVector(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_TransformVector_m89F0E459A68B6E2E723898E1EF9F7B163CF070EE (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_center_mAD29DD80FD631F83AF4E7558BB27A0398E8FD841 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_extents_mC83719146B06D0575A160CDDE9997202A1192B35 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::get_CurrentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableBehaviour_get_CurrentStatus_m35788FFDD0156A5C132B5A88244867EE5471350B (TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * __this, const RuntimeMethod* method);
// Vuforia.DigitalEyewearARController Vuforia.DigitalEyewearARController::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 * DigitalEyewearARController_get_Instance_m84201ED80FE0A5426F927BF300653642757D3A41 (const RuntimeMethod* method);
// UnityEngine.Camera Vuforia.DigitalEyewearARController::get_PrimaryCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * DigitalEyewearARController_get_PrimaryCamera_m7430FCB49D2A677DC65F7BE1844CA6227952017B (DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 * __this, const RuntimeMethod* method);
// UnityEngine.Bounds DefaultModelRecoEventHandler::GetModelTargetWorldBounds(Vuforia.ModelTargetBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  DefaultModelRecoEventHandler_GetModelTargetWorldBounds_m9435246FE4CBCD9FB2E5B15FE84FF56565248105 (ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * ___mtb0, const RuntimeMethod* method);
// UnityEngine.Plane[] UnityEngine.GeometryUtility::CalculateFrustumPlanes(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlaneU5BU5D_t79471E0ABE147C3018D88A036897B6DB49A782AA* GeometryUtility_CalculateFrustumPlanes_m4EE3A97E4C43C0E9AF22ED709E57AF56D9ECEC74 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GeometryUtility::TestPlanesAABB(UnityEngine.Plane[],UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeometryUtility_TestPlanesAABB_mFEF1397AA811CEB461A5B1251578074DF4E68902 (PlaneU5BU5D_t79471E0ABE147C3018D88A036897B6DB49A782AA* p0, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  p1, const RuntimeMethod* method);
// Vuforia.ITrackerManager Vuforia.TrackerManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrackerManager_get_Instance_m43607A127E7B2C17B3B26173C821A0BF2944D3D0 (const RuntimeMethod* method);
// System.Boolean Vuforia.TargetFinder::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TargetFinder_Stop_mE22B856E3E639EE90D17C75D53E356520BF22F0A (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * __this, const RuntimeMethod* method);
// System.Boolean Vuforia.TargetFinder::StartRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TargetFinder_StartRecognition_mA450B5172ED06324F2933BB17DB2AF1ADE7758F7 (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Vuforia.TrackableBehaviour>()
inline TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * Component_GetComponent_TisTrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4_m81E3785465C5B36522D217B045A33CD65B28B229 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void Vuforia.TrackableBehaviour::RegisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableBehaviour_RegisterTrackableEventHandler_m7435CD138D1B0794CD09A2E7DFAB9C5D9C1CB5ED (TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean Vuforia.TrackableBehaviour::UnregisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableBehaviour_UnregisterTrackableEventHandler_m64B4269C6DBD319C750932217B98F21DDA90B0FD (TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean)
inline RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF* Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mE634C4CC0E00DB6D11503C88000677CD2A806228 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m58F7AC53741315DA8288813302360E0A36C78D25_gshared)(__this, p0, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>(System.Boolean)
inline ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* Component_GetComponentsInChildren_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_mB7DEF049AA2B4E9D96FAE153C296F52B2ACCF244 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m58F7AC53741315DA8288813302360E0A36C78D25_gshared)(__this, p0, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Canvas>(System.Boolean)
inline CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* Component_GetComponentsInChildren_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m89606C344B702A5671E2026C2872AAA1335EEC69 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m58F7AC53741315DA8288813302360E0A36C78D25_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_mF84DE8B0C8CAF33ACDB7F29BC055D9C8CFACB57B (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool p0, const RuntimeMethod* method);
// System.Void Vuforia.UnityCompiled.RuntimeOpenSourceInitializer::InitializeFacade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeOpenSourceInitializer_InitializeFacade_m4E456DBA2604DD48341B172BE75E55AC76AFFBEE (const RuntimeMethod* method);
// System.Void Vuforia.UnityCompiled.RuntimeOpenSourceInitializer/OpenSourceUnityCompiledFacade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSourceUnityCompiledFacade__ctor_mB773D09AA7A4167A5E92922DA08FE6827570DA7C (OpenSourceUnityCompiledFacade_t8315EDA1848F9A4AA27FC5AEAA48F4097D1FF2A5 * __this, const RuntimeMethod* method);
// System.Void Vuforia.UnityCompiled.UnityCompiledFacade::set_Instance(Vuforia.UnityCompiled.IUnityCompiledFacade)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityCompiledFacade_set_Instance_m1485791E5231923A31D9E6587119599E90DC8760 (RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Vuforia.UnityCompiled.RuntimeOpenSourceInitializer/UnityRenderPipeline::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRenderPipeline__ctor_mBCF1D018D5EA889499AC8B84AB95B314CC7275DB (UnityRenderPipeline_t62C711062D224A17F999C0F58CDB6F6E641560A4 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mF9A7A7E9E4B360A61EB7D616E8A01032E083E3B1 (Action_2_t11D263E8C52BF70BBCED2592B3AA25E25AE2E2F5 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t11D263E8C52BF70BBCED2592B3AA25E25AE2E2F5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mB69FE16C5B98EFEC9A650D38F0B84CE61E09DE50_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::add_beginFrameRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_add_beginFrameRendering_mF9896552D7B492FBC22B0D1832C536C91E542B56 (Action_2_t11D263E8C52BF70BBCED2592B3AA25E25AE2E2F5 * p0, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mA3847577787DEE65C67A5DC1E5FD6CA65EC70D82 (Action_2_t9F55CDD4158CA55A03F1D448889BDD8A9C4D7E04 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t9F55CDD4158CA55A03F1D448889BDD8A9C4D7E04 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mB69FE16C5B98EFEC9A650D38F0B84CE61E09DE50_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::add_beginCameraRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_add_beginCameraRendering_m49A42A94633EDC2DDE0B2326AFB16648F3EA4655 (Action_2_t9F55CDD4158CA55A03F1D448889BDD8A9C4D7E04 * p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Camera>::Invoke(!0)
inline void Action_1_Invoke_m2144BC1656C81F7F9B706AA9EC60411F4297170F (Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * __this, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C *, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 *, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, p0, method);
}
// System.Void System.Action`1<UnityEngine.Camera[]>::Invoke(!0)
inline void Action_1_Invoke_mA31EEA11FE58129FD616B4B19C332CC256DD9D19 (Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * __this, CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A *, CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, p0, method);
}
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
// System.Void BoundingBoxRenderer::OnRenderObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBoxRenderer_OnRenderObject_m68673644D738E5BD11923B80B42A154C6C269BC6 (BoundingBoxRenderer_t687A36FDD509AC21A29D0CF70359619EFD251AFB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundingBoxRenderer_OnRenderObject_m68673644D738E5BD11923B80B42A154C6C269BC6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * V_0 = NULL;
	{
		GL_PushMatrix_mE47A23F3A906899E88AC525FFE2C3C2BD834DFF9(/*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_1 = Transform_get_localToWorldMatrix_mBC86B8C7BA6F53DAB8E0120D77729166399A0EED(L_0, /*hidden argument*/NULL);
		GL_MultMatrix_m1DFDF696AC702066E319BD72252B7D97E74F3753(L_1, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = __this->get_mLineMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A(3, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = L_4;
		NullCheck(L_5);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_6 = GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mFB43D5458906C4005145640D4396FDE5853AFA3A(L_5, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mFB43D5458906C4005145640D4396FDE5853AFA3A_RuntimeMethod_var);
		V_0 = L_6;
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_7 = V_0;
		NullCheck(L_7);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_8 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_7, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_9 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_9, L_8, /*hidden argument*/NULL);
		__this->set_mLineMaterial_4(L_9);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_10 = __this->get_mLineMaterial_4();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_11 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		NullCheck(L_10);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_10, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_5, /*hidden argument*/NULL);
	}

IL_0056:
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_12 = __this->get_mLineMaterial_4();
		NullCheck(L_12);
		Material_SetPass_m4BE0A8FCBF158C83522AA2F69118A2FE33683918(L_12, 0, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_13 = __this->get_mLineMaterial_4();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_14 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		NullCheck(L_13);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_13, L_14, /*hidden argument*/NULL);
		GL_Begin_m9A48BD6A2DA850D54250EF638DF5EC61F83E293C(1, /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((-0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((-0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((-0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((-0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((-0.5f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((0.5f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((0.5f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((-0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((-0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((-0.5f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((-0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((-0.5f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((0.5f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((-0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		GL_Vertex3_mE94809C1522CE96DF4C6CD218B1A26D5E60A114E((-0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		GL_End_m7EDEB843BD9F7E00BD838FDE074B4688C55C0755(/*hidden argument*/NULL);
		GL_PopMatrix_mCAA6BC17D97358A4BC329E789AF2CA26C1204112(/*hidden argument*/NULL);
		return;
	}
}
// System.Void BoundingBoxRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBoxRenderer__ctor_m4F81CCB945436A775EB635BE64E469FEA1C6C639 (BoundingBoxRenderer_t687A36FDD509AC21A29D0CF70359619EFD251AFB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void DefaultInitializationErrorHandler::OnVuforiaInitializationError(Vuforia.VuforiaUnity_InitError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_OnVuforiaInitializationError_mEBF42837CA97AF2CFA28D28A9A39988EC5413F7B (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, int32_t ___initError0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___initError0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___initError0;
		DefaultInitializationErrorHandler_SetErrorCode_mCECD875BCA20516C39AE387C06AE94F1E9CA7B51(__this, L_1, /*hidden argument*/NULL);
		DefaultInitializationErrorHandler_SetErrorOccurred_m7B8CBC12E402A15CD961945D0FC5E788D926554F(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_Awake_m4038C70C44A5DA1837B36861AA2B4305424FBB1B (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_Awake_m4038C70C44A5DA1837B36861AA2B4305424FBB1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D_il2cpp_TypeInfo_var);
		VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D * L_0 = VuforiaRuntime_get_Instance_m09A801C6052F96463B0F330EE3F2453DFB329607(/*hidden argument*/NULL);
		Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF * L_1 = (Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF *)il2cpp_codegen_object_new(Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF_il2cpp_TypeInfo_var);
		Action_1__ctor_m93D264DDF8D63987A4D835C83F40D588CDCC86B8(L_1, __this, (intptr_t)((intptr_t)DefaultInitializationErrorHandler_OnVuforiaInitializationError_mEBF42837CA97AF2CFA28D28A9A39988EC5413F7B_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m93D264DDF8D63987A4D835C83F40D588CDCC86B8_RuntimeMethod_var);
		NullCheck(L_0);
		VuforiaRuntime_RegisterVuforiaInitErrorCallback_m0DD342AE8B42646920AB2E96118805150FF5A68F(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_Start_m7A087FA88C9DAA849F754A3365E86782DCCF81DD (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, const RuntimeMethod* method)
{
	{
		DefaultInitializationErrorHandler_SetupGUIStyles_m1D91C7E31546279E161EFE09E6EC9EB59B9AE95C(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_OnGUI_m906C10E3D218D97B9EA7526E95F72A1E1FC04040 (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_OnGUI_m906C10E3D218D97B9EA7526E95F72A1E1FC04040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_mErrorOccurred_5();
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_1 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_3), (0.0f), (0.0f), (((float)((float)L_1))), (((float)((float)L_2))), /*hidden argument*/NULL);
		WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100 * L_4 = (WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100 *)il2cpp_codegen_object_new(WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m216C357C45DF9A8ABE74056B8BDB1B7F94EE2D81(L_4, __this, (intptr_t)((intptr_t)DefaultInitializationErrorHandler_DrawWindowContent_mB87D116DA38655853BC96A9211D1989E7EF33262_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_Window_mEB4F2621947A8A1140E495493A5B35DCF92E31C0(0, L_3, L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_OnDestroy_m504A72DB220B746C42FF75BA42482D64E49FDE17 (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_OnDestroy_m504A72DB220B746C42FF75BA42482D64E49FDE17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D_il2cpp_TypeInfo_var);
		VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D * L_0 = VuforiaRuntime_get_Instance_m09A801C6052F96463B0F330EE3F2453DFB329607(/*hidden argument*/NULL);
		Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF * L_1 = (Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF *)il2cpp_codegen_object_new(Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF_il2cpp_TypeInfo_var);
		Action_1__ctor_m93D264DDF8D63987A4D835C83F40D588CDCC86B8(L_1, __this, (intptr_t)((intptr_t)DefaultInitializationErrorHandler_OnVuforiaInitializationError_mEBF42837CA97AF2CFA28D28A9A39988EC5413F7B_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m93D264DDF8D63987A4D835C83F40D588CDCC86B8_RuntimeMethod_var);
		NullCheck(L_0);
		VuforiaRuntime_UnregisterVuforiaInitErrorCallback_m07045CAF11270BE48936D22CDE99FB2F026329E3(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::DrawWindowContent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_DrawWindowContent_mB87D116DA38655853BC96A9211D1989E7EF33262 (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_DrawWindowContent_mB87D116DA38655853BC96A9211D1989E7EF33262_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), (0.0f), (0.0f), (((float)((float)L_0))), (((float)((float)((int32_t)((int32_t)L_1/(int32_t)8))))), /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		int32_t L_3 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_4 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_1), (0.0f), (((float)((float)((int32_t)((int32_t)L_2/(int32_t)8))))), (((float)((float)L_3))), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_4/(int32_t)8)), (int32_t)6))))), /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		int32_t L_7 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_8 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_9), (0.0f), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)((int32_t)L_6/(int32_t)8))))))), (((float)((float)L_7))), (((float)((float)((int32_t)((int32_t)L_8/(int32_t)8))))), /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_10 = V_0;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_11 = __this->get_headerStyle_8();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_Label_m283D6B1DD970038379FBB974BC5A45F87CA727B6(L_10, _stringLiteral0049CC276AF37EC0DC4660402BB85EF930E7DA7F, L_11, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_12 = V_1;
		String_t* L_13 = __this->get_mErrorText_4();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_14 = __this->get_bodyStyle_7();
		GUI_Label_m283D6B1DD970038379FBB974BC5A45F87CA727B6(L_12, L_13, L_14, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_15 = __this->get_footerStyle_9();
		bool L_16 = GUI_Button_mC39C9F8426A10930825737A6D63B7C8DDF24748B(L_9, _stringLiteralBBFA773E5A63A5EA58C9B6207E608CA0120E592A, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00a3;
		}
	}
	{
		Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95(/*hidden argument*/NULL);
	}

IL_00a3:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::SetErrorCode(Vuforia.VuforiaUnity_InitError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorCode_mCECD875BCA20516C39AE387C06AE94F1E9CA7B51 (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, int32_t ___errorCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_SetErrorCode_mCECD875BCA20516C39AE387C06AE94F1E9CA7B51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___errorCode0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)-10))))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_00a3;
			}
			case 2:
			{
				goto IL_008b;
			}
			case 3:
			{
				goto IL_0071;
			}
			case 4:
			{
				goto IL_007e;
			}
			case 5:
			{
				goto IL_0056;
			}
			case 6:
			{
				goto IL_0046;
			}
			case 7:
			{
				goto IL_00c0;
			}
			case 8:
			{
				goto IL_00dc;
			}
			case 9:
			{
				goto IL_00e9;
			}
		}
	}
	{
		goto IL_00f4;
	}

IL_0036:
	{
		__this->set_mErrorText_4(_stringLiteralF0069E5A5B01320A0272820D95849D17CA9E7BAE);
		goto IL_00f4;
	}

IL_0046:
	{
		__this->set_mErrorText_4(_stringLiteral5A187E91D3F02EC741DFB98FC6C73DAAF9DBB023);
		goto IL_00f4;
	}

IL_0056:
	{
		String_t* L_1 = DefaultInitializationErrorHandler_getKeyInfo_m08AC1F25C54DB08BAF219BFF64570EB8385D8E1A(__this, /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralFA323761E549CD8DEB8C83797B725C220D84F261, L_1, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_2);
		goto IL_00f4;
	}

IL_0071:
	{
		__this->set_mErrorText_4(_stringLiteral368855C3B48C6461C105F7AA11EBE1FD792BE6BF);
		goto IL_00f4;
	}

IL_007e:
	{
		__this->set_mErrorText_4(_stringLiteralEF377B931B216AE61345F4D7136A8873D40DCB6B);
		goto IL_00f4;
	}

IL_008b:
	{
		String_t* L_3 = DefaultInitializationErrorHandler_getKeyInfo_m08AC1F25C54DB08BAF219BFF64570EB8385D8E1A(__this, /*hidden argument*/NULL);
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral4C8A375D0F1708E37C1F10C81E8A8EADDCF1422F, L_3, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_4);
		goto IL_00f4;
	}

IL_00a3:
	{
		String_t* L_5 = DefaultInitializationErrorHandler_getKeyInfo_m08AC1F25C54DB08BAF219BFF64570EB8385D8E1A(__this, /*hidden argument*/NULL);
		String_t* L_6 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralD56CC950FC69A94976F20D9F0707460863B34898, L_5, _stringLiteralE1A26226E225524718652DAB2A25B6F6ED567B4E, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_6);
		goto IL_00f4;
	}

IL_00c0:
	{
		String_t* L_7 = Application_get_productName_m9F65580744751D3771DA955C0D947787F3F5E9A5(/*hidden argument*/NULL);
		String_t* L_8 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralF20D8C26DA74DE4466E64B5213AE19C080FADD5E, L_7, _stringLiteralA5C50226661674EB4C0B1740C606FA2451271989, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_8);
		goto IL_00f4;
	}

IL_00dc:
	{
		__this->set_mErrorText_4(_stringLiteral0CB1FE567326D29F5946A5B648199591A4620539);
		goto IL_00f4;
	}

IL_00e9:
	{
		__this->set_mErrorText_4(_stringLiteral463AEBF964605A060C143944B09AB6F45BA4D8BF);
	}

IL_00f4:
	{
		RuntimeObject * L_9 = Box(InitError_t486F7D53F5B0B7943D4E22BE2D32F4913D4A0431_il2cpp_TypeInfo_var, (&___errorCode0));
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		___errorCode0 = *(int32_t*)UnBox(L_9);
		NullCheck(L_10);
		String_t* L_11 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_10, _stringLiteral53A0ACFAD59379B3E050338BF9F23CFC172EE787, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, /*hidden argument*/NULL);
		String_t* L_12 = __this->get_mErrorText_4();
		String_t* L_13 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(_stringLiteral1561AEF8B532C2B1664689CD3DEB85C31F3B9692, L_11, _stringLiteralDADF5911397D06A03A60E28AE30A0F473FE2B810, L_12, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_13);
		String_t* L_14 = __this->get_mErrorText_4();
		NullCheck(L_14);
		String_t* L_15 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_14, _stringLiteral1561AEF8B532C2B1664689CD3DEB85C31F3B9692, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_15, _stringLiteral7AB1A22C152A21E59C89CBA73DA7DCB91237992A, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_0 = L_16;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral4BACB2BC0DE4E962B29B5436C04D5785D4E912DD);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral4BACB2BC0DE4E962B29B5436C04D5785D4E912DD);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = L_18;
		int32_t L_20 = ___errorCode0;
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(InitError_t486F7D53F5B0B7943D4E22BE2D32F4913D4A0431_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_22);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = L_19;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral71853C6197A6A7F222DB0F1978C7CB232B87C5EE);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral71853C6197A6A7F222DB0F1978C7CB232B87C5EE);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = L_23;
		String_t* L_25 = V_0;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_25);
		String_t* L_26 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_26, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorOccurred_m7B8CBC12E402A15CD961945D0FC5E788D926554F (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, bool ___errorOccurred0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___errorOccurred0;
		__this->set_mErrorOccurred_5(L_0);
		return;
	}
}
// System.String DefaultInitializationErrorHandler::getKeyInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultInitializationErrorHandler_getKeyInfo_m08AC1F25C54DB08BAF219BFF64570EB8385D8E1A (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_getKeyInfo_m08AC1F25C54DB08BAF219BFF64570EB8385D8E1A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82_il2cpp_TypeInfo_var);
		VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82 * L_0 = VuforiaConfiguration_get_Instance_mB41F218B6090038BBA15873FEB67D1132526914C(/*hidden argument*/NULL);
		NullCheck(L_0);
		GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064 * L_1 = VuforiaConfiguration_get_Vuforia_mAE9E228790390C66CF46E33B874B802D5AA8692D(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GenericVuforiaConfiguration_get_LicenseKey_m37C1FB7D6702C2A7990BE00F23F23EA6FE61B7D6(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0073;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral55B91F52D8FEC72F2D5BBC45A4C7444CF770FBBD);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral55B91F52D8FEC72F2D5BBC45A4C7444CF770FBBD);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_8, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_11);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_11);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_7;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral044603D8671032519EBDE55C39570454D34DA7EF);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral044603D8671032519EBDE55C39570454D34DA7EF);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_12;
		String_t* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_14, 0, 5, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_13;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral661EA0491F0E7BED843FF5C5C2C407A8494948C2);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral661EA0491F0E7BED843FF5C5C2C407A8494948C2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
		String_t* L_18 = V_0;
		String_t* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_21 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_18, ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)5)), 5, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_21);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_17;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral3A2524B609E886EDA2270A78B1F1D5DF105A613E);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral3A2524B609E886EDA2270A78B1F1D5DF105A613E);
		String_t* L_23 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		goto IL_00a9;
	}

IL_0073:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral55B91F52D8FEC72F2D5BBC45A4C7444CF770FBBD);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral55B91F52D8FEC72F2D5BBC45A4C7444CF770FBBD);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = L_25;
		String_t* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_27, /*hidden argument*/NULL);
		int32_t L_29 = L_28;
		RuntimeObject * L_30 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_30);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_30);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_31 = L_26;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteralE9D15606A3059B500ED24D58BAEE69DD511A6EC2);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralE9D15606A3059B500ED24D58BAEE69DD511A6EC2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_32 = L_31;
		String_t* L_33 = V_0;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_33);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_34 = L_32;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral3A2524B609E886EDA2270A78B1F1D5DF105A613E);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3A2524B609E886EDA2270A78B1F1D5DF105A613E);
		String_t* L_35 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_34, /*hidden argument*/NULL);
		V_1 = L_35;
	}

IL_00a9:
	{
		String_t* L_36 = V_1;
		return L_36;
	}
}
// System.Void DefaultInitializationErrorHandler::SetupGUIStyles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetupGUIStyles_m1D91C7E31546279E161EFE09E6EC9EB59B9AE95C (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_SetupGUIStyles_m1D91C7E31546279E161EFE09E6EC9EB59B9AE95C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0018;
	}

IL_0013:
	{
		int32_t L_3 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0018:
	{
		float L_4 = Screen_get_dpi_m92A755DE9E23ABA717B5594F4F52AFB0FBEAC1D3(/*hidden argument*/NULL);
		if ((((float)((float)((float)(((float)((float)G_B3_0)))/(float)L_4))) > ((float)(4.0f))))
		{
			goto IL_0029;
		}
	}
	{
		G_B6_0 = 1;
		goto IL_002a;
	}

IL_0029:
	{
		G_B6_0 = 2;
	}

IL_002a:
	{
		V_0 = G_B6_0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_5 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_6 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m314E1B3B003A6F0253FD1A13070B93BCE6415AD6(__this, L_5, /*hidden argument*/NULL);
		__this->set_bodyTexture_10(L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_7 = Mathf_InverseLerp_m7054CDF25056E9B27D2467F91C95D628508F1F31((0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		float L_8 = Mathf_InverseLerp_m7054CDF25056E9B27D2467F91C95D628508F1F31((0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		float L_9 = Mathf_InverseLerp_m7054CDF25056E9B27D2467F91C95D628508F1F31((0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369((&L_10), L_7, L_8, L_9, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_11 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m314E1B3B003A6F0253FD1A13070B93BCE6415AD6(__this, L_10, /*hidden argument*/NULL);
		__this->set_headerTexture_11(L_11);
		float L_12 = Mathf_InverseLerp_m7054CDF25056E9B27D2467F91C95D628508F1F31((0.0f), (255.0f), (35.0f), /*hidden argument*/NULL);
		float L_13 = Mathf_InverseLerp_m7054CDF25056E9B27D2467F91C95D628508F1F31((0.0f), (255.0f), (178.0f), /*hidden argument*/NULL);
		float L_14 = Mathf_InverseLerp_m7054CDF25056E9B27D2467F91C95D628508F1F31((0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369((&L_15), L_12, L_13, L_14, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_16 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m314E1B3B003A6F0253FD1A13070B93BCE6415AD6(__this, L_15, /*hidden argument*/NULL);
		__this->set_footerTexture_12(L_16);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_17 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_17, /*hidden argument*/NULL);
		__this->set_bodyStyle_7(L_17);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_18 = __this->get_bodyStyle_7();
		NullCheck(L_18);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_19 = GUIStyle_get_normal_mC5CB22EED8113DEC86C54FB42F757B635D09DD2F(L_18, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_20 = __this->get_bodyTexture_10();
		NullCheck(L_19);
		GUIStyleState_set_background_m1BB0CD97092DE9CB40908A8061068D83FB2655AF(L_19, L_20, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_21 = __this->get_bodyStyle_7();
		Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * L_22 = Resources_GetBuiltinResource_TisFont_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_mEECDBF58A9BE0C87D23275A7997B2445D783E371(_stringLiteralAD01E3847AA5918933113DC21A22AF4AD31DD4B7, /*hidden argument*/Resources_GetBuiltinResource_TisFont_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_mEECDBF58A9BE0C87D23275A7997B2445D783E371_RuntimeMethod_var);
		NullCheck(L_21);
		GUIStyle_set_font_m348ACE92DE82C381C7AFE216029DB8D87F47E0A0(L_21, L_22, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_23 = __this->get_bodyStyle_7();
		int32_t L_24 = V_0;
		float L_25 = Screen_get_dpi_m92A755DE9E23ABA717B5594F4F52AFB0FBEAC1D3(/*hidden argument*/NULL);
		NullCheck(L_23);
		GUIStyle_set_fontSize_mA9F9F916A9BC3B81CFEE7460966FFD1E6B67F45F(L_23, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)18), (int32_t)L_24))))), (float)L_25))/(float)(160.0f)))))), /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_26 = __this->get_bodyStyle_7();
		NullCheck(L_26);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_27 = GUIStyle_get_normal_mC5CB22EED8113DEC86C54FB42F757B635D09DD2F(L_26, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_28 = Color_get_black_mEB3C91F45F8AA7E4842238DFCC578BB322723DAF(/*hidden argument*/NULL);
		NullCheck(L_27);
		GUIStyleState_set_textColor_m2B235845A292C22ABEDEFBB2FD798DEB4E104983(L_27, L_28, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_29 = __this->get_bodyStyle_7();
		NullCheck(L_29);
		GUIStyle_set_wordWrap_mB35DAD8BA109B812A2FCAED339BC5C6D7C3850C1(L_29, (bool)1, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_30 = __this->get_bodyStyle_7();
		NullCheck(L_30);
		GUIStyle_set_alignment_m80647E2DCB359B9521A6D8D53EA457E2648488CF(L_30, 4, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_31 = __this->get_bodyStyle_7();
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_32 = (RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A *)il2cpp_codegen_object_new(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_il2cpp_TypeInfo_var);
		RectOffset__ctor_mF2A621DBA17A10660FEBE6237ACF4904DA6F9F29(L_32, ((int32_t)40), ((int32_t)40), 0, 0, /*hidden argument*/NULL);
		NullCheck(L_31);
		GUIStyle_set_padding_m125FFFE385BFA7D60E4D9D822053DE9508A7A465(L_31, L_32, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_33 = __this->get_bodyStyle_7();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_34 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m64098019A1065381E9909C513D3B8CA4617EF168(L_34, L_33, /*hidden argument*/NULL);
		__this->set_headerStyle_8(L_34);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_35 = __this->get_headerStyle_8();
		NullCheck(L_35);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_36 = GUIStyle_get_normal_mC5CB22EED8113DEC86C54FB42F757B635D09DD2F(L_35, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_37 = __this->get_headerTexture_11();
		NullCheck(L_36);
		GUIStyleState_set_background_m1BB0CD97092DE9CB40908A8061068D83FB2655AF(L_36, L_37, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_38 = __this->get_headerStyle_8();
		int32_t L_39 = V_0;
		float L_40 = Screen_get_dpi_m92A755DE9E23ABA717B5594F4F52AFB0FBEAC1D3(/*hidden argument*/NULL);
		NullCheck(L_38);
		GUIStyle_set_fontSize_mA9F9F916A9BC3B81CFEE7460966FFD1E6B67F45F(L_38, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)24), (int32_t)L_39))))), (float)L_40))/(float)(160.0f)))))), /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_41 = __this->get_bodyStyle_7();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_42 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m64098019A1065381E9909C513D3B8CA4617EF168(L_42, L_41, /*hidden argument*/NULL);
		__this->set_footerStyle_9(L_42);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_43 = __this->get_footerStyle_9();
		NullCheck(L_43);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_44 = GUIStyle_get_normal_mC5CB22EED8113DEC86C54FB42F757B635D09DD2F(L_43, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_45 = __this->get_footerTexture_12();
		NullCheck(L_44);
		GUIStyleState_set_background_m1BB0CD97092DE9CB40908A8061068D83FB2655AF(L_44, L_45, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_46 = __this->get_footerStyle_9();
		NullCheck(L_46);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_47 = GUIStyle_get_normal_mC5CB22EED8113DEC86C54FB42F757B635D09DD2F(L_46, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_48 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		NullCheck(L_47);
		GUIStyleState_set_textColor_m2B235845A292C22ABEDEFBB2FD798DEB4E104983(L_47, L_48, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_49 = __this->get_footerStyle_9();
		int32_t L_50 = V_0;
		float L_51 = Screen_get_dpi_m92A755DE9E23ABA717B5594F4F52AFB0FBEAC1D3(/*hidden argument*/NULL);
		NullCheck(L_49);
		GUIStyle_set_fontSize_mA9F9F916A9BC3B81CFEE7460966FFD1E6B67F45F(L_49, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)28), (int32_t)L_50))))), (float)L_51))/(float)(160.0f)))))), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture2D DefaultInitializationErrorHandler::CreateSinglePixelTexture(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * DefaultInitializationErrorHandler_CreateSinglePixelTexture_m314E1B3B003A6F0253FD1A13070B93BCE6415AD6 (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_CreateSinglePixelTexture_m314E1B3B003A6F0253FD1A13070B93BCE6415AD6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A(L_0, 1, 1, 5, (bool)0, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_1 = L_0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = ___color0;
		NullCheck(L_1);
		Texture2D_SetPixel_m8BE87C152447B812D06CB894B3570269CC2DE7C3(L_1, 0, 0, L_2, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_3 = L_1;
		NullCheck(L_3);
		Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA(L_3, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void DefaultInitializationErrorHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler__ctor_m9C0FB8A494158D7304A5A6D94D681DF55B0D42FA (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler__ctor_m9C0FB8A494158D7304A5A6D94D681DF55B0D42FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_mErrorText_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		VuforiaMonoBehaviour__ctor_mB7B4A9CA2FA82920C82606F093597594EF3F9F91(__this, /*hidden argument*/NULL);
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
// System.Void DefaultModelRecoEventHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler_Start_mE9E3D8D2B2AB37738B1C6F7473AD4356A565E25F (DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_Start_mE9E3D8D2B2AB37738B1C6F7473AD4356A565E25F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291 * V_0 = NULL;
	{
		ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291 * L_0 = Component_GetComponent_TisModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291_mB1C2CB8A4559A15034D0E2AB7A92350D8156646A(__this, /*hidden argument*/Component_GetComponent_TisModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291_mB1C2CB8A4559A15034D0E2AB7A92350D8156646A_RuntimeMethod_var);
		V_0 = L_0;
		ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291 * L_3 = V_0;
		NullCheck(L_3);
		ObjectRecoBehaviour_RegisterEventHandler_mF917D6BEEC6F635B719641FB59ACB6901B5C165C(L_3, __this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291 * L_4 = V_0;
		__this->set_mModelRecoBehaviour_7(L_4);
		return;
	}
}
// System.Void DefaultModelRecoEventHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler_Update_mDC58C379360938ACEFA1DDC53B32CA06E64A2DA3 (DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_Update_mDC58C379360938ACEFA1DDC53B32CA06E64A2DA3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876_il2cpp_TypeInfo_var);
		VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * L_0 = VuforiaARController_get_Instance_m88278E3FE64C49BDDF48D5A6F7627654B7747A9D(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = VuforiaARController_get_HasStarted_mB53E0F21B1B62DFE7FF00047F5940B1369B559D9(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_2 = __this->get_mTargetFinder_8();
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * L_3 = __this->get_mLastRecoModelTarget_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}

IL_0023:
	{
		return;
	}

IL_0024:
	{
		float L_5 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		float L_6 = __this->get_mLastStatusCheckTime_6();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_6));
		bool L_7 = __this->get_StopSearchWhenModelFound_10();
		if (L_7)
		{
			goto IL_009f;
		}
	}
	{
		bool L_8 = __this->get_StopSearchWhileTracking_11();
		if (!L_8)
		{
			goto IL_009f;
		}
	}
	{
		float L_9 = V_0;
		if ((!(((float)L_9) > ((float)(0.5f)))))
		{
			goto IL_009f;
		}
	}
	{
		float L_10 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		__this->set_mLastStatusCheckTime_6(L_10);
		bool L_11 = __this->get_mSearching_5();
		if (!L_11)
		{
			goto IL_007e;
		}
	}
	{
		ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * L_12 = __this->get_mLastRecoModelTarget_4();
		bool L_13 = DefaultModelRecoEventHandler_IsModelTrackedInView_m484B3B06B82A9C624B57993066A8501F09756D5C(__this, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_009f;
		}
	}
	{
		ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291 * L_14 = __this->get_mModelRecoBehaviour_7();
		NullCheck(L_14);
		ModelRecoBehaviour_set_ModelRecoEnabled_m7F477AE80EC465F28F1880332B3E1108E494AB73(L_14, (bool)0, /*hidden argument*/NULL);
		__this->set_mSearching_5((bool)0);
		return;
	}

IL_007e:
	{
		ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * L_15 = __this->get_mLastRecoModelTarget_4();
		bool L_16 = DefaultModelRecoEventHandler_IsModelTrackedInView_m484B3B06B82A9C624B57993066A8501F09756D5C(__this, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_009f;
		}
	}
	{
		ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291 * L_17 = __this->get_mModelRecoBehaviour_7();
		NullCheck(L_17);
		ModelRecoBehaviour_set_ModelRecoEnabled_m7F477AE80EC465F28F1880332B3E1108E494AB73(L_17, (bool)1, /*hidden argument*/NULL);
		__this->set_mSearching_5((bool)1);
	}

IL_009f:
	{
		return;
	}
}
// System.Void DefaultModelRecoEventHandler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler_OnDestroy_m39E5011DE3ECC4BD4A79AE8830212BE01E556E65 (DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_OnDestroy_m39E5011DE3ECC4BD4A79AE8830212BE01E556E65_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291 * L_0 = __this->get_mModelRecoBehaviour_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291 * L_2 = __this->get_mModelRecoBehaviour_7();
		NullCheck(L_2);
		ObjectRecoBehaviour_UnregisterEventHandler_mFD012262E420EB70674CB6B55C0559F0C72F14DF(L_2, __this, /*hidden argument*/NULL);
	}

IL_001b:
	{
		__this->set_mModelRecoBehaviour_7((ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291 *)NULL);
		return;
	}
}
// System.Void DefaultModelRecoEventHandler::OnInitialized(Vuforia.TargetFinder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler_OnInitialized_mFDD5794A2386BD764D0C646A87F925DDB2CD8E2A (DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA * __this, TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * ___targetFinder0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_OnInitialized_mFDD5794A2386BD764D0C646A87F925DDB2CD8E2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralC5FE255D4A3D3E47D48B6CEAFB5CC0AD38F08E63, /*hidden argument*/NULL);
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_0 = ___targetFinder0;
		__this->set_mTargetFinder_8(L_0);
		return;
	}
}
// System.Void DefaultModelRecoEventHandler::OnInitError(Vuforia.TargetFinder_InitState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler_OnInitError_mB9195DBFE488078F0ECA77D17D2A0B584F00FAD3 (DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA * __this, int32_t ___initError0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_OnInitError_mB9195DBFE488078F0ECA77D17D2A0B584F00FAD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_mTargetFinder_8((TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)NULL);
		RuntimeObject * L_0 = Box(InitState_tF8DCB9A690DFC7C81A7543FB4E5D6097B27A4925_il2cpp_TypeInfo_var, (&___initError0));
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___initError0 = *(int32_t*)UnBox(L_0);
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral6F0C23CA0B463B15F912593C64420F7909B0E3F7, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_2, /*hidden argument*/NULL);
		RuntimeObject * L_3 = Box(InitState_tF8DCB9A690DFC7C81A7543FB4E5D6097B27A4925_il2cpp_TypeInfo_var, (&___initError0));
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		___initError0 = *(int32_t*)UnBox(L_3);
		DefaultModelRecoEventHandler_ShowErrorMessageInUI_m6CA52CF0093CC28BC4BCA765B4C701F10C476BEC(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultModelRecoEventHandler::OnUpdateError(Vuforia.TargetFinder_UpdateState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler_OnUpdateError_mC8D6FEF4CF523F938A8C0D9EF7FE065197EEE242 (DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA * __this, int32_t ___updateError0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_OnUpdateError_mC8D6FEF4CF523F938A8C0D9EF7FE065197EEE242_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = Box(UpdateState_t9780BF40F4F57951DF918E1522D9A863D587EF8A_il2cpp_TypeInfo_var, (&___updateError0));
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___updateError0 = *(int32_t*)UnBox(L_0);
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral1228FE6B82B57CB26855D4DDE2484FD95D458A5C, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_2, /*hidden argument*/NULL);
		RuntimeObject * L_3 = Box(UpdateState_t9780BF40F4F57951DF918E1522D9A863D587EF8A_il2cpp_TypeInfo_var, (&___updateError0));
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		___updateError0 = *(int32_t*)UnBox(L_3);
		DefaultModelRecoEventHandler_ShowErrorMessageInUI_m6CA52CF0093CC28BC4BCA765B4C701F10C476BEC(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultModelRecoEventHandler::OnStateChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler_OnStateChanged_mA8324CFE9BBD107EC2ACB9A2857AD825EC40E389 (DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA * __this, bool ___searching0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_OnStateChanged_mA8324CFE9BBD107EC2ACB9A2857AD825EC40E389_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		bool L_0 = ___searching0;
		G_B1_0 = _stringLiteral1E4EAE414E63ABE1EF96F26A0A501386E7DB6538;
		if (L_0)
		{
			G_B2_0 = _stringLiteral1E4EAE414E63ABE1EF96F26A0A501386E7DB6538;
			goto IL_000f;
		}
	}
	{
		G_B3_0 = _stringLiteral49816762644AE6F1C69DA1B6BC46AC4064170D08;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_000f:
	{
		G_B3_0 = _stringLiteralDE94F8210CFD3A81511C4888E9B42B92EA72417A;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		bool L_2 = ___searching0;
		__this->set_mSearching_5(L_2);
		bool L_3 = ___searching0;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_4 = __this->get_mTargetFinder_8();
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_5 = __this->get_mTargetFinder_8();
		NullCheck(L_5);
		TargetFinder_ClearTrackables_m78EBEBC8F105C0AAE7A8C512221970E7565DE734(L_5, (bool)0, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void DefaultModelRecoEventHandler::OnNewSearchResult(Vuforia.TargetFinder_TargetSearchResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler_OnNewSearchResult_mD52DF1B20F00770C87F72001D0AE58F9033E251D (DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA * __this, TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5 * ___searchResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_OnNewSearchResult_mD52DF1B20F00770C87F72001D0AE58F9033E251D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * V_1 = NULL;
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * V_2 = NULL;
	{
		TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5 * L_0 = ___searchResult0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_TargetName_0();
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralECFBC2E6AB5DC6876FD6C4100B47C58998B2C978, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_2, /*hidden argument*/NULL);
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5 * L_3 = ___searchResult0;
		ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * L_4 = DefaultModelRecoEventHandler_FindExistingModelTarget_mBE361609CBEC751571D7A486C152F90B03A1ABCA(__this, ((ModelRecoSearchResult_tB293FF5B3A646FF59DE16F2498C74EE958425354 *)CastclassClass((RuntimeObject*)L_3, ModelRecoSearchResult_tB293FF5B3A646FF59DE16F2498C74EE958425354_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = L_4;
		ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * L_7 = V_1;
		NullCheck(L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_0033:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0051;
		}
	}
	{
		TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5 * L_11 = ___searchResult0;
		NullCheck(L_11);
		String_t* L_12 = L_11->get_TargetName_0();
		String_t* L_13 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral46577BB1949E336EAF7CF1139C900C4D692F7EE5, L_12, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_14, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_0051:
	{
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_15 = __this->get_mTargetFinder_8();
		TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5 * L_16 = ___searchResult0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = V_0;
		NullCheck(L_15);
		TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * L_18 = TargetFinder_EnableTracking_m68B520DCBE39156A36CF8E726FF1D62F978160E9(L_15, L_16, L_17, /*hidden argument*/NULL);
		V_2 = ((ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 *)IsInstClass((RuntimeObject*)L_18, ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0_il2cpp_TypeInfo_var));
		ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * L_19 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * L_21 = V_2;
		__this->set_mLastRecoModelTarget_4(L_21);
		bool L_22 = __this->get_StopSearchWhenModelFound_10();
		if (!L_22)
		{
			goto IL_0087;
		}
	}
	{
		ModelRecoBehaviour_t136409F3AECD7AEB24CC39E5CA3A50A4CAAF2291 * L_23 = __this->get_mModelRecoBehaviour_7();
		NullCheck(L_23);
		ModelRecoBehaviour_set_ModelRecoEnabled_m7F477AE80EC465F28F1880332B3E1108E494AB73(L_23, (bool)0, /*hidden argument*/NULL);
	}

IL_0087:
	{
		return;
	}
}
// Vuforia.ModelTargetBehaviour DefaultModelRecoEventHandler::FindExistingModelTarget(Vuforia.TargetFinder_ModelRecoSearchResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * DefaultModelRecoEventHandler_FindExistingModelTarget_mBE361609CBEC751571D7A486C152F90B03A1ABCA (DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA * __this, ModelRecoSearchResult_tB293FF5B3A646FF59DE16F2498C74EE958425354 * ___searchResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_FindExistingModelTarget_mBE361609CBEC751571D7A486C152F90B03A1ABCA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ModelTargetBehaviourU5BU5D_t7C081ED9446E930306255382D788CD614D99F69B* V_0 = NULL;
	String_t* V_1 = NULL;
	ModelTargetBehaviourU5BU5D_t7C081ED9446E930306255382D788CD614D99F69B* V_2 = NULL;
	int32_t V_3 = 0;
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * V_4 = NULL;
	{
		ModelTargetBehaviourU5BU5D_t7C081ED9446E930306255382D788CD614D99F69B* L_0 = Resources_FindObjectsOfTypeAll_TisModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0_mDED67F4F44685EA63DB28B4E4BD59F1DBC0D3F03(/*hidden argument*/Resources_FindObjectsOfTypeAll_TisModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0_mDED67F4F44685EA63DB28B4E4BD59F1DBC0D3F03_RuntimeMethod_var);
		V_0 = L_0;
		ModelTargetBehaviourU5BU5D_t7C081ED9446E930306255382D788CD614D99F69B* L_1 = V_0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_000c;
		}
	}
	{
		return (ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 *)NULL;
	}

IL_000c:
	{
		ModelRecoSearchResult_tB293FF5B3A646FF59DE16F2498C74EE958425354 * L_2 = ___searchResult0;
		NullCheck(L_2);
		String_t* L_3 = ((TargetSearchResult_tC958489A5AB66221259FCDFD35F79CA426DAC6F5 *)L_2)->get_TargetName_0();
		V_1 = L_3;
		ModelTargetBehaviourU5BU5D_t7C081ED9446E930306255382D788CD614D99F69B* L_4 = V_0;
		V_2 = L_4;
		V_3 = 0;
		goto IL_0041;
	}

IL_0019:
	{
		ModelTargetBehaviourU5BU5D_t7C081ED9446E930306255382D788CD614D99F69B* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
		ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * L_9 = V_4;
		NullCheck(L_9);
		String_t* L_10 = TrackableBehaviour_get_TrackableName_m7D1E2DB1F426F533F5894A3020D807958BBE4EFF(L_9, /*hidden argument*/NULL);
		String_t* L_11 = V_1;
		bool L_12 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_003d;
		}
	}
	{
		ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * L_13 = V_4;
		NullCheck(L_13);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_14, (bool)1, /*hidden argument*/NULL);
		ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * L_15 = V_4;
		return L_15;
	}

IL_003d:
	{
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0041:
	{
		int32_t L_17 = V_3;
		ModelTargetBehaviourU5BU5D_t7C081ED9446E930306255382D788CD614D99F69B* L_18 = V_2;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))))
		{
			goto IL_0019;
		}
	}
	{
		return (ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 *)NULL;
	}
}
// System.Void DefaultModelRecoEventHandler::ShowErrorMessageInUI(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler_ShowErrorMessageInUI_m6CA52CF0093CC28BC4BCA765B4C701F10C476BEC (DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_ShowErrorMessageInUI_m6CA52CF0093CC28BC4BCA765B4C701F10C476BEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_ModelRecoErrorText_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_2 = __this->get_ModelRecoErrorText_9();
		String_t* L_3 = ___text0;
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
	}

IL_0019:
	{
		return;
	}
}
// UnityEngine.Bounds DefaultModelRecoEventHandler::GetModelTargetWorldBounds(Vuforia.ModelTargetBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  DefaultModelRecoEventHandler_GetModelTargetWorldBounds_m9435246FE4CBCD9FB2E5B15FE84FF56565248105 (ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * ___mtb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_GetModelTargetWorldBounds_m9435246FE4CBCD9FB2E5B15FE84FF56565248105_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OrientedBoundingBox3D_t2239DBD535FBC2F84F49502D23761C0630CC93B9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * L_0 = ___mtb0;
		NullCheck(L_0);
		RuntimeObject* L_1 = ModelTargetBehaviour_get_ModelTarget_m4467FE02C27E08D862ECE2FF7AA71CEA6DC727C4(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		OrientedBoundingBox3D_t2239DBD535FBC2F84F49502D23761C0630CC93B9  L_2 = InterfaceFuncInvoker0< OrientedBoundingBox3D_t2239DBD535FBC2F84F49502D23761C0630CC93B9  >::Invoke(0 /* Vuforia.OrientedBoundingBox3D Vuforia.ModelTarget::GetBoundingBox() */, ModelTarget_t6761EF80F84DC8D31A7266E6B7AED954F25CD54D_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = OrientedBoundingBox3D_get_Center_m902048EF9C5296FEE09AC649483103F671644005((OrientedBoundingBox3D_t2239DBD535FBC2F84F49502D23761C0630CC93B9 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = OrientedBoundingBox3D_get_HalfExtents_m82F2E82C842E89DFA4D7BB2A4C90B14C39A623F5((OrientedBoundingBox3D_t2239DBD535FBC2F84F49502D23761C0630CC93B9 *)(&V_0), /*hidden argument*/NULL);
		V_2 = L_4;
		ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * L_5 = ___mtb0;
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_1;
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_TransformPoint_mA96DC2A20EE7F4F915F7509863A18D99F5DD76CB(L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * L_9 = ___mtb0;
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_2;
		float L_12 = L_11.get_x_2();
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_TransformVector_m89F0E459A68B6E2E723898E1EF9F7B163CF070EE(L_10, L_12, (0.0f), (0.0f), /*hidden argument*/NULL);
		V_4 = L_13;
		ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * L_14 = ___mtb0;
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_14, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_2;
		float L_17 = L_16.get_y_3();
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_TransformVector_m89F0E459A68B6E2E723898E1EF9F7B163CF070EE(L_15, (0.0f), L_17, (0.0f), /*hidden argument*/NULL);
		V_5 = L_18;
		ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * L_19 = ___mtb0;
		NullCheck(L_19);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_19, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_2;
		float L_22 = L_21.get_z_4();
		NullCheck(L_20);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Transform_TransformVector_m89F0E459A68B6E2E723898E1EF9F7B163CF070EE(L_20, (0.0f), (0.0f), L_22, /*hidden argument*/NULL);
		V_6 = L_23;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_7 = L_24;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = V_4;
		float L_26 = L_25.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_27 = fabsf(L_26);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = V_5;
		float L_29 = L_28.get_x_2();
		float L_30 = fabsf(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_6;
		float L_32 = L_31.get_x_2();
		float L_33 = fabsf(L_32);
		(&V_7)->set_x_2(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_27, (float)L_30)), (float)L_33)));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = V_4;
		float L_35 = L_34.get_y_3();
		float L_36 = fabsf(L_35);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = V_5;
		float L_38 = L_37.get_y_3();
		float L_39 = fabsf(L_38);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = V_6;
		float L_41 = L_40.get_y_3();
		float L_42 = fabsf(L_41);
		(&V_7)->set_y_3(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_36, (float)L_39)), (float)L_42)));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = V_4;
		float L_44 = L_43.get_z_4();
		float L_45 = fabsf(L_44);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = V_5;
		float L_47 = L_46.get_z_4();
		float L_48 = fabsf(L_47);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = V_6;
		float L_50 = L_49.get_z_4();
		float L_51 = fabsf(L_50);
		(&V_7)->set_z_4(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_45, (float)L_48)), (float)L_51)));
		il2cpp_codegen_initobj((&V_8), sizeof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 ));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = V_3;
		Bounds_set_center_mAD29DD80FD631F83AF4E7558BB27A0398E8FD841((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_8), L_52, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = V_7;
		Bounds_set_extents_mC83719146B06D0575A160CDDE9997202A1192B35((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_8), L_53, /*hidden argument*/NULL);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_54 = V_8;
		return L_54;
	}
}
// System.Boolean DefaultModelRecoEventHandler::IsModelTrackedInView(Vuforia.ModelTargetBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultModelRecoEventHandler_IsModelTrackedInView_m484B3B06B82A9C624B57993066A8501F09756D5C (DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA * __this, ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * ___modelTarget0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_IsModelTrackedInView_m484B3B06B82A9C624B57993066A8501F09756D5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * V_0 = NULL;
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * L_0 = ___modelTarget0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * L_2 = ___modelTarget0;
		NullCheck(L_2);
		int32_t L_3 = TrackableBehaviour_get_CurrentStatus_m35788FFDD0156A5C132B5A88244867EE5471350B(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4_il2cpp_TypeInfo_var);
		DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 * L_4 = DigitalEyewearARController_get_Instance_m84201ED80FE0A5426F927BF300653642757D3A41(/*hidden argument*/NULL);
		NullCheck(L_4);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_5 = DigitalEyewearARController_get_PrimaryCamera_m7430FCB49D2A677DC65F7BE1844CA6227952017B(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * L_8 = ___modelTarget0;
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_9 = DefaultModelRecoEventHandler_GetModelTargetWorldBounds_m9435246FE4CBCD9FB2E5B15FE84FF56565248105(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_10 = V_0;
		PlaneU5BU5D_t79471E0ABE147C3018D88A036897B6DB49A782AA* L_11 = GeometryUtility_CalculateFrustumPlanes_m4EE3A97E4C43C0E9AF22ED709E57AF56D9ECEC74(L_10, /*hidden argument*/NULL);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_12 = V_1;
		bool L_13 = GeometryUtility_TestPlanesAABB_mFEF1397AA811CEB461A5B1251578074DF4E68902(L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// Vuforia.TargetFinder DefaultModelRecoEventHandler::GetTargetFinder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * DefaultModelRecoEventHandler_GetTargetFinder_mAA8E023461766F2C3066EA7F10AA5DBC1B02A64B (DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA * __this, const RuntimeMethod* method)
{
	{
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_0 = __this->get_mTargetFinder_8();
		return L_0;
	}
}
// System.Void DefaultModelRecoEventHandler::ResetModelReco(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler_ResetModelReco_m4E8F81D21371F5A517129E68E03B26851DE10C5D (DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA * __this, bool ___destroyGameObjects0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_ResetModelReco_m4E8F81D21371F5A517129E68E03B26851DE10C5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * V_0 = NULL;
	{
		RuntimeObject* L_0 = TrackerManager_get_Instance_m43607A127E7B2C17B3B26173C821A0BF2944D3D0(/*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * L_1 = GenericInterfaceFuncInvoker0< ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * >::Invoke(ITrackerManager_GetTracker_TisObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E_mCAB3ED46860A309B3862F2E69CE83AD4FCE42868_RuntimeMethod_var, L_0);
		V_0 = L_1;
		ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * L_3 = V_0;
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(5 /* System.Void Vuforia.Tracker::Stop() */, L_3);
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_4 = __this->get_mTargetFinder_8();
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_5 = __this->get_mTargetFinder_8();
		bool L_6 = ___destroyGameObjects0;
		NullCheck(L_5);
		TargetFinder_ClearTrackables_m78EBEBC8F105C0AAE7A8C512221970E7565DE734(L_5, L_6, /*hidden argument*/NULL);
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_7 = __this->get_mTargetFinder_8();
		NullCheck(L_7);
		TargetFinder_Stop_mE22B856E3E639EE90D17C75D53E356520BF22F0A(L_7, /*hidden argument*/NULL);
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_8 = __this->get_mTargetFinder_8();
		NullCheck(L_8);
		TargetFinder_StartRecognition_mA450B5172ED06324F2933BB17DB2AF1ADE7758F7(L_8, /*hidden argument*/NULL);
		goto IL_004c;
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral97BEB6590C7C6141B44DB76C8227C95573350898, /*hidden argument*/NULL);
	}

IL_004c:
	{
		ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * L_9 = V_0;
		NullCheck(L_9);
		VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean Vuforia.Tracker::Start() */, L_9);
		return;
	}

IL_0054:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral20ACFDB1C2EF34391CC887264D75F0DA1B6C734B, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultModelRecoEventHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler__ctor_mF8A55D05AC2BBE488A59D7BB9C215DC2ADE68760 (DefaultModelRecoEventHandler_tD8D52485390B4887E690E2CE623D20236D7E82CA * __this, const RuntimeMethod* method)
{
	{
		__this->set_StopSearchWhileTracking_11((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void DefaultTrackableEventHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_Start_m5A732F3C7EDB5E01C7CD5BDE821FF1B6C9E907ED (DefaultTrackableEventHandler_t6997E0A19AC0FABC165FB7264F57DF2EDF4E8022 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_Start_m5A732F3C7EDB5E01C7CD5BDE821FF1B6C9E907ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * L_0 = Component_GetComponent_TisTrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4_m81E3785465C5B36522D217B045A33CD65B28B229(__this, /*hidden argument*/Component_GetComponent_TisTrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4_m81E3785465C5B36522D217B045A33CD65B28B229_RuntimeMethod_var);
		__this->set_mTrackableBehaviour_4(L_0);
		TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * L_1 = __this->get_mTrackableBehaviour_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * L_3 = __this->get_mTrackableBehaviour_4();
		NullCheck(L_3);
		TrackableBehaviour_RegisterTrackableEventHandler_m7435CD138D1B0794CD09A2E7DFAB9C5D9C1CB5ED(L_3, __this, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnDestroy_m1E2C6C4E61424614E5CC0CACED2C0B8EAC50C208 (DefaultTrackableEventHandler_t6997E0A19AC0FABC165FB7264F57DF2EDF4E8022 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnDestroy_m1E2C6C4E61424614E5CC0CACED2C0B8EAC50C208_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * L_0 = __this->get_mTrackableBehaviour_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * L_2 = __this->get_mTrackableBehaviour_4();
		NullCheck(L_2);
		TrackableBehaviour_UnregisterTrackableEventHandler_m64B4269C6DBD319C750932217B98F21DDA90B0FD(L_2, __this, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour_Status,Vuforia.TrackableBehaviour_Status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnTrackableStateChanged_m037F7353D61AC3E1BFEB93B7E51672578E783427 (DefaultTrackableEventHandler_t6997E0A19AC0FABC165FB7264F57DF2EDF4E8022 * __this, int32_t ___previousStatus0, int32_t ___newStatus1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackableStateChanged_m037F7353D61AC3E1BFEB93B7E51672578E783427_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___previousStatus0;
		__this->set_m_PreviousStatus_5(L_0);
		int32_t L_1 = ___newStatus1;
		__this->set_m_NewStatus_6(L_1);
		int32_t L_2 = ___newStatus1;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = ___newStatus1;
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = ___newStatus1;
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			goto IL_0040;
		}
	}

IL_001a:
	{
		TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * L_5 = __this->get_mTrackableBehaviour_4();
		NullCheck(L_5);
		String_t* L_6 = TrackableBehaviour_get_TrackableName_m7D1E2DB1F426F533F5894A3020D807958BBE4EFF(L_5, /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralE53A10BF18D590A4D354358810000744DAF6ACFD, L_6, _stringLiteral74D8330FF7EE2BF01889D92730C9FB1CC78C788F, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_7, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(7 /* System.Void DefaultTrackableEventHandler::OnTrackingFound() */, __this);
		return;
	}

IL_0040:
	{
		int32_t L_8 = ___previousStatus0;
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_9 = ___newStatus1;
		if (L_9)
		{
			goto IL_006d;
		}
	}
	{
		TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * L_10 = __this->get_mTrackableBehaviour_4();
		NullCheck(L_10);
		String_t* L_11 = TrackableBehaviour_get_TrackableName_m7D1E2DB1F426F533F5894A3020D807958BBE4EFF(L_10, /*hidden argument*/NULL);
		String_t* L_12 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralE53A10BF18D590A4D354358810000744DAF6ACFD, L_11, _stringLiteralD8F3DAF68846C2D999956AB061674C6E36560643, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_12, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(8 /* System.Void DefaultTrackableEventHandler::OnTrackingLost() */, __this);
		return;
	}

IL_006d:
	{
		VirtActionInvoker0::Invoke(8 /* System.Void DefaultTrackableEventHandler::OnTrackingLost() */, __this);
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackingFound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnTrackingFound_mE63DDA2BD076BE6C6EE1235AD0F18AEBD6D199F6 (DefaultTrackableEventHandler_t6997E0A19AC0FABC165FB7264F57DF2EDF4E8022 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackingFound_mE63DDA2BD076BE6C6EE1235AD0F18AEBD6D199F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* V_0 = NULL;
	CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* V_1 = NULL;
	RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF* V_2 = NULL;
	int32_t V_3 = 0;
	ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* V_4 = NULL;
	CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* V_5 = NULL;
	{
		RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF* L_0 = Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mE634C4CC0E00DB6D11503C88000677CD2A806228(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mE634C4CC0E00DB6D11503C88000677CD2A806228_RuntimeMethod_var);
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_1 = Component_GetComponentsInChildren_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_mB7DEF049AA2B4E9D96FAE153C296F52B2ACCF244(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_mB7DEF049AA2B4E9D96FAE153C296F52B2ACCF244_RuntimeMethod_var);
		V_0 = L_1;
		CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* L_2 = Component_GetComponentsInChildren_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m89606C344B702A5671E2026C2872AAA1335EEC69(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m89606C344B702A5671E2026C2872AAA1335EEC69_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0029;
	}

IL_001c:
	{
		RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_6, (bool)1, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_8 = V_3;
		RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_10 = V_0;
		V_4 = L_10;
		V_3 = 0;
		goto IL_0044;
	}

IL_0036:
	{
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_11 = V_4;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Collider_set_enabled_mF84DE8B0C8CAF33ACDB7F29BC055D9C8CFACB57B(L_14, (bool)1, /*hidden argument*/NULL);
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_16 = V_3;
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_17 = V_4;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* L_18 = V_1;
		V_5 = L_18;
		V_3 = 0;
		goto IL_0060;
	}

IL_0052:
	{
		CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* L_19 = V_5;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_22, (bool)1, /*hidden argument*/NULL);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0060:
	{
		int32_t L_24 = V_3;
		CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* L_25 = V_5;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))))
		{
			goto IL_0052;
		}
	}
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnTrackingLost_m8C2BEAB679465AE131946222D0F2D8FD39BD8CC3 (DefaultTrackableEventHandler_t6997E0A19AC0FABC165FB7264F57DF2EDF4E8022 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackingLost_m8C2BEAB679465AE131946222D0F2D8FD39BD8CC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* V_0 = NULL;
	CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* V_1 = NULL;
	RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF* V_2 = NULL;
	int32_t V_3 = 0;
	ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* V_4 = NULL;
	CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* V_5 = NULL;
	{
		RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF* L_0 = Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mE634C4CC0E00DB6D11503C88000677CD2A806228(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mE634C4CC0E00DB6D11503C88000677CD2A806228_RuntimeMethod_var);
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_1 = Component_GetComponentsInChildren_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_mB7DEF049AA2B4E9D96FAE153C296F52B2ACCF244(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_mB7DEF049AA2B4E9D96FAE153C296F52B2ACCF244_RuntimeMethod_var);
		V_0 = L_1;
		CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* L_2 = Component_GetComponentsInChildren_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m89606C344B702A5671E2026C2872AAA1335EEC69(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m89606C344B702A5671E2026C2872AAA1335EEC69_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0029;
	}

IL_001c:
	{
		RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_6, (bool)0, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_8 = V_3;
		RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_10 = V_0;
		V_4 = L_10;
		V_3 = 0;
		goto IL_0044;
	}

IL_0036:
	{
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_11 = V_4;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Collider_set_enabled_mF84DE8B0C8CAF33ACDB7F29BC055D9C8CFACB57B(L_14, (bool)0, /*hidden argument*/NULL);
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_16 = V_3;
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_17 = V_4;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* L_18 = V_1;
		V_5 = L_18;
		V_3 = 0;
		goto IL_0060;
	}

IL_0052:
	{
		CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* L_19 = V_5;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_22, (bool)0, /*hidden argument*/NULL);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0060:
	{
		int32_t L_24 = V_3;
		CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* L_25 = V_5;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))))
		{
			goto IL_0052;
		}
	}
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler__ctor_m9DC3D237B7D42646DA70B26C5448A615595D1B67 (DefaultTrackableEventHandler_t6997E0A19AC0FABC165FB7264F57DF2EDF4E8022 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.UnityCompiled.RuntimeOpenSourceInitializer::OnRuntimeMethodLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeOpenSourceInitializer_OnRuntimeMethodLoad_mBF0380D873784EBA1B5A42187D7F344ADA91E443 (const RuntimeMethod* method)
{
	{
		RuntimeOpenSourceInitializer_InitializeFacade_m4E456DBA2604DD48341B172BE75E55AC76AFFBEE(/*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.UnityCompiled.RuntimeOpenSourceInitializer::InitializeFacade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeOpenSourceInitializer_InitializeFacade_m4E456DBA2604DD48341B172BE75E55AC76AFFBEE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeOpenSourceInitializer_InitializeFacade_m4E456DBA2604DD48341B172BE75E55AC76AFFBEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((RuntimeOpenSourceInitializer_t81785D24983BCE4C95906F20541AD7A3D3D11862_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeOpenSourceInitializer_t81785D24983BCE4C95906F20541AD7A3D3D11862_il2cpp_TypeInfo_var))->get_sFacade_0();
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
		OpenSourceUnityCompiledFacade_t8315EDA1848F9A4AA27FC5AEAA48F4097D1FF2A5 * L_1 = (OpenSourceUnityCompiledFacade_t8315EDA1848F9A4AA27FC5AEAA48F4097D1FF2A5 *)il2cpp_codegen_object_new(OpenSourceUnityCompiledFacade_t8315EDA1848F9A4AA27FC5AEAA48F4097D1FF2A5_il2cpp_TypeInfo_var);
		OpenSourceUnityCompiledFacade__ctor_mB773D09AA7A4167A5E92922DA08FE6827570DA7C(L_1, /*hidden argument*/NULL);
		((RuntimeOpenSourceInitializer_t81785D24983BCE4C95906F20541AD7A3D3D11862_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeOpenSourceInitializer_t81785D24983BCE4C95906F20541AD7A3D3D11862_il2cpp_TypeInfo_var))->set_sFacade_0(L_1);
		RuntimeObject* L_2 = ((RuntimeOpenSourceInitializer_t81785D24983BCE4C95906F20541AD7A3D3D11862_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeOpenSourceInitializer_t81785D24983BCE4C95906F20541AD7A3D3D11862_il2cpp_TypeInfo_var))->get_sFacade_0();
		UnityCompiledFacade_set_Instance_m1485791E5231923A31D9E6587119599E90DC8760(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.UnityCompiled.RuntimeOpenSourceInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeOpenSourceInitializer__ctor_m865FD477A6A55C7FFDB9FBDF672E22BC9C3A92D8 (RuntimeOpenSourceInitializer_t81785D24983BCE4C95906F20541AD7A3D3D11862 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// Vuforia.UnityCompiled.IUnityRenderPipeline Vuforia.UnityCompiled.RuntimeOpenSourceInitializer_OpenSourceUnityCompiledFacade::get_UnityRenderPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OpenSourceUnityCompiledFacade_get_UnityRenderPipeline_mF28E5C96C8071CD96C310B5E2FA5DBD8644BF4D9 (OpenSourceUnityCompiledFacade_t8315EDA1848F9A4AA27FC5AEAA48F4097D1FF2A5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_mUnityRenderPipeline_0();
		return L_0;
	}
}
// System.Void Vuforia.UnityCompiled.RuntimeOpenSourceInitializer_OpenSourceUnityCompiledFacade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSourceUnityCompiledFacade__ctor_mB773D09AA7A4167A5E92922DA08FE6827570DA7C (OpenSourceUnityCompiledFacade_t8315EDA1848F9A4AA27FC5AEAA48F4097D1FF2A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OpenSourceUnityCompiledFacade__ctor_mB773D09AA7A4167A5E92922DA08FE6827570DA7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityRenderPipeline_t62C711062D224A17F999C0F58CDB6F6E641560A4 * L_0 = (UnityRenderPipeline_t62C711062D224A17F999C0F58CDB6F6E641560A4 *)il2cpp_codegen_object_new(UnityRenderPipeline_t62C711062D224A17F999C0F58CDB6F6E641560A4_il2cpp_TypeInfo_var);
		UnityRenderPipeline__ctor_mBCF1D018D5EA889499AC8B84AB95B314CC7275DB(L_0, /*hidden argument*/NULL);
		__this->set_mUnityRenderPipeline_0(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.UnityCompiled.RuntimeOpenSourceInitializer_UnityRenderPipeline::add_BeginFrameRendering(System.Action`1<UnityEngine.Camera[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRenderPipeline_add_BeginFrameRendering_m9D259FD7AC5FC26A80C5DE8E25AE477714771252 (UnityRenderPipeline_t62C711062D224A17F999C0F58CDB6F6E641560A4 * __this, Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRenderPipeline_add_BeginFrameRendering_m9D259FD7AC5FC26A80C5DE8E25AE477714771252_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * V_0 = NULL;
	Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * V_1 = NULL;
	Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * V_2 = NULL;
	{
		Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * L_0 = __this->get_BeginFrameRendering_0();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * L_1 = V_0;
		V_1 = L_1;
		Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * L_2 = V_1;
		Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A *)CastclassSealed((RuntimeObject*)L_4, Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A_il2cpp_TypeInfo_var));
		Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A ** L_5 = __this->get_address_of_BeginFrameRendering_0();
		Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * L_6 = V_2;
		Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * L_7 = V_1;
		Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * L_8 = InterlockedCompareExchangeImpl<Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A *>((Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * L_9 = V_0;
		Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A *)L_9) == ((RuntimeObject*)(Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.UnityCompiled.RuntimeOpenSourceInitializer_UnityRenderPipeline::remove_BeginFrameRendering(System.Action`1<UnityEngine.Camera[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRenderPipeline_remove_BeginFrameRendering_m41048F48C42906494CA19BFD3D54B0F49EC2A02D (UnityRenderPipeline_t62C711062D224A17F999C0F58CDB6F6E641560A4 * __this, Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRenderPipeline_remove_BeginFrameRendering_m41048F48C42906494CA19BFD3D54B0F49EC2A02D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * V_0 = NULL;
	Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * V_1 = NULL;
	Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * V_2 = NULL;
	{
		Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * L_0 = __this->get_BeginFrameRendering_0();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * L_1 = V_0;
		V_1 = L_1;
		Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * L_2 = V_1;
		Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A *)CastclassSealed((RuntimeObject*)L_4, Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A_il2cpp_TypeInfo_var));
		Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A ** L_5 = __this->get_address_of_BeginFrameRendering_0();
		Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * L_6 = V_2;
		Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * L_7 = V_1;
		Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * L_8 = InterlockedCompareExchangeImpl<Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A *>((Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * L_9 = V_0;
		Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A *)L_9) == ((RuntimeObject*)(Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.UnityCompiled.RuntimeOpenSourceInitializer_UnityRenderPipeline::add_BeginCameraRendering(System.Action`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRenderPipeline_add_BeginCameraRendering_mD4A5C6E21309929A0F5E9A5D6235998D2D309029 (UnityRenderPipeline_t62C711062D224A17F999C0F58CDB6F6E641560A4 * __this, Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRenderPipeline_add_BeginCameraRendering_mD4A5C6E21309929A0F5E9A5D6235998D2D309029_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * V_0 = NULL;
	Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * V_1 = NULL;
	Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * V_2 = NULL;
	{
		Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * L_0 = __this->get_BeginCameraRendering_1();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * L_1 = V_0;
		V_1 = L_1;
		Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * L_2 = V_1;
		Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C *)CastclassSealed((RuntimeObject*)L_4, Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C_il2cpp_TypeInfo_var));
		Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C ** L_5 = __this->get_address_of_BeginCameraRendering_1();
		Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * L_6 = V_2;
		Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * L_7 = V_1;
		Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * L_8 = InterlockedCompareExchangeImpl<Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C *>((Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * L_9 = V_0;
		Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C *)L_9) == ((RuntimeObject*)(Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.UnityCompiled.RuntimeOpenSourceInitializer_UnityRenderPipeline::remove_BeginCameraRendering(System.Action`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRenderPipeline_remove_BeginCameraRendering_m2589F202EE39580EA9D2E951C7E71D866EECBA17 (UnityRenderPipeline_t62C711062D224A17F999C0F58CDB6F6E641560A4 * __this, Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRenderPipeline_remove_BeginCameraRendering_m2589F202EE39580EA9D2E951C7E71D866EECBA17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * V_0 = NULL;
	Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * V_1 = NULL;
	Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * V_2 = NULL;
	{
		Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * L_0 = __this->get_BeginCameraRendering_1();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * L_1 = V_0;
		V_1 = L_1;
		Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * L_2 = V_1;
		Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C *)CastclassSealed((RuntimeObject*)L_4, Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C_il2cpp_TypeInfo_var));
		Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C ** L_5 = __this->get_address_of_BeginCameraRendering_1();
		Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * L_6 = V_2;
		Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * L_7 = V_1;
		Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * L_8 = InterlockedCompareExchangeImpl<Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C *>((Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * L_9 = V_0;
		Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C *)L_9) == ((RuntimeObject*)(Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.UnityCompiled.RuntimeOpenSourceInitializer_UnityRenderPipeline::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRenderPipeline__ctor_mBCF1D018D5EA889499AC8B84AB95B314CC7275DB (UnityRenderPipeline_t62C711062D224A17F999C0F58CDB6F6E641560A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRenderPipeline__ctor_mBCF1D018D5EA889499AC8B84AB95B314CC7275DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Action_2_t11D263E8C52BF70BBCED2592B3AA25E25AE2E2F5 * L_0 = (Action_2_t11D263E8C52BF70BBCED2592B3AA25E25AE2E2F5 *)il2cpp_codegen_object_new(Action_2_t11D263E8C52BF70BBCED2592B3AA25E25AE2E2F5_il2cpp_TypeInfo_var);
		Action_2__ctor_mF9A7A7E9E4B360A61EB7D616E8A01032E083E3B1(L_0, __this, (intptr_t)((intptr_t)UnityRenderPipeline_OnBeginFrameRendering_mFE0AAA7DA6B16B7ACA3AC9B5F84A6E87266BA491_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mF9A7A7E9E4B360A61EB7D616E8A01032E083E3B1_RuntimeMethod_var);
		RenderPipelineManager_add_beginFrameRendering_mF9896552D7B492FBC22B0D1832C536C91E542B56(L_0, /*hidden argument*/NULL);
		Action_2_t9F55CDD4158CA55A03F1D448889BDD8A9C4D7E04 * L_1 = (Action_2_t9F55CDD4158CA55A03F1D448889BDD8A9C4D7E04 *)il2cpp_codegen_object_new(Action_2_t9F55CDD4158CA55A03F1D448889BDD8A9C4D7E04_il2cpp_TypeInfo_var);
		Action_2__ctor_mA3847577787DEE65C67A5DC1E5FD6CA65EC70D82(L_1, __this, (intptr_t)((intptr_t)UnityRenderPipeline_OnBeginCameraRendering_m15CB7AC8363F2493DF182B36D04EACC08258FA71_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mA3847577787DEE65C67A5DC1E5FD6CA65EC70D82_RuntimeMethod_var);
		RenderPipelineManager_add_beginCameraRendering_m49A42A94633EDC2DDE0B2326AFB16648F3EA4655(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.UnityCompiled.RuntimeOpenSourceInitializer_UnityRenderPipeline::OnBeginCameraRendering(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRenderPipeline_OnBeginCameraRendering_m15CB7AC8363F2493DF182B36D04EACC08258FA71 (UnityRenderPipeline_t62C711062D224A17F999C0F58CDB6F6E641560A4 * __this, ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  ___context0, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRenderPipeline_OnBeginCameraRendering_m15CB7AC8363F2493DF182B36D04EACC08258FA71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * L_0 = __this->get_BeginCameraRendering_1();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * L_1 = __this->get_BeginCameraRendering_1();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = ___camera1;
		NullCheck(L_1);
		Action_1_Invoke_m2144BC1656C81F7F9B706AA9EC60411F4297170F(L_1, L_2, /*hidden argument*/Action_1_Invoke_m2144BC1656C81F7F9B706AA9EC60411F4297170F_RuntimeMethod_var);
	}

IL_0014:
	{
		return;
	}
}
// System.Void Vuforia.UnityCompiled.RuntimeOpenSourceInitializer_UnityRenderPipeline::OnBeginFrameRendering(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRenderPipeline_OnBeginFrameRendering_mFE0AAA7DA6B16B7ACA3AC9B5F84A6E87266BA491 (UnityRenderPipeline_t62C711062D224A17F999C0F58CDB6F6E641560A4 * __this, ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  ___context0, CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* ___cameras1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRenderPipeline_OnBeginFrameRendering_mFE0AAA7DA6B16B7ACA3AC9B5F84A6E87266BA491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * L_0 = __this->get_BeginFrameRendering_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Action_1_t66F98C2DDE752F9D83CB8FEBE8084E0ABB8C314A * L_1 = __this->get_BeginFrameRendering_0();
		CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* L_2 = ___cameras1;
		NullCheck(L_1);
		Action_1_Invoke_mA31EEA11FE58129FD616B4B19C332CC256DD9D19(L_1, L_2, /*hidden argument*/Action_1_Invoke_mA31EEA11FE58129FD616B4B19C332CC256DD9D19_RuntimeMethod_var);
	}

IL_0014:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
