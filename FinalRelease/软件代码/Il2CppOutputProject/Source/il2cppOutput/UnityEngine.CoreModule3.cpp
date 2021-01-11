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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t31EF1520A3A805598500BB6033C14ABDA7116D5E;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`1<System.Boolean>
struct Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.ObsoleteAttribute
struct ObsoleteAttribute_tDAE6245D460079868ABE89327A61FC76E13F2170;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E;
// System.Reflection.AssemblyName
struct AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Version
struct Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D;
// UnityEngine.WSA.AppCallbackItem
struct AppCallbackItem_tC11DC3EB621654A77E58E02B69E0CDAF342EF11F;
// UnityEngine.WSA.WindowActivated
struct WindowActivated_t5EB8FED49C5DF18D49E17A7BF037B090553E8732;
// UnityEngine.WSA.WindowSizeChanged
struct WindowSizeChanged_tACBE6B53689EC2CE90F98B35CE37437AF17474E0;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t8801328F075019AF6B6150B20EC343935A29FF97;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739;
// UnityEngine.WaitUntil
struct WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F;
// UnityEngine.WaitWhile
struct WaitWhile_t26AA4EE3C438C96A750FFE1C8FA5C3FD66B8BB59;
// UnityEngine.Windows.Speech.DictationRecognizer
struct DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate
struct DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler
struct DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate
struct DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate
struct DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87;
// UnityEngine.Windows.Speech.KeywordRecognizer
struct KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C;
// UnityEngine.Windows.Speech.PhraseRecognitionSystem/ErrorDelegate
struct ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD;
// UnityEngine.Windows.Speech.PhraseRecognitionSystem/StatusDelegate
struct StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166;
// UnityEngine.Windows.Speech.PhraseRecognizer
struct PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F;
// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate
struct PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0;
// UnityEngine.Windows.Speech.SemanticMeaning
struct SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C;
// UnityEngine.Windows.Speech.SemanticMeaning[]
struct SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D;
// UnityEngine.Windows.WebCam.PhotoCapture
struct PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777;
// UnityEngine.Windows.WebCam.PhotoCapture/OnCaptureResourceCreatedCallback
struct OnCaptureResourceCreatedCallback_t00CFC0538D5EEAC5566A2694A721B14C4E4D8C71;
// UnityEngine.Windows.WebCam.PhotoCapture/OnCapturedToDiskCallback
struct OnCapturedToDiskCallback_t79DD83842A2A9CB542DEC61160166D74CC342470;
// UnityEngine.Windows.WebCam.PhotoCapture/OnCapturedToMemoryCallback
struct OnCapturedToMemoryCallback_tE28D3212036B829F321DCA04C358D61FDE0B47B2;
// UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStartedCallback
struct OnPhotoModeStartedCallback_t841E0EF9DDB4D172D4C8C7988B0C6E6E58E5832C;
// UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStoppedCallback
struct OnPhotoModeStoppedCallback_tE546DABB1910B8CD82448A1D7C3311463F9EC238;
// UnityEngine.Windows.WebCam.PhotoCaptureFrame
struct PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D;
// UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881;
// UnityEngine.Windows.WebCam.VideoCapture/OnStartedRecordingVideoCallback
struct OnStartedRecordingVideoCallback_tCE5B6ECCEF3D04ABD663876B05D3B17509F90581;
// UnityEngine.Windows.WebCam.VideoCapture/OnStoppedRecordingVideoCallback
struct OnStoppedRecordingVideoCallback_tFC1F4FA389F16A93BBC8A2128ACAFD3C6AAA763A;
// UnityEngine.Windows.WebCam.VideoCapture/OnVideoCaptureResourceCreatedCallback
struct OnVideoCaptureResourceCreatedCallback_t71BBEF80D26688A87A1142D752CCEF22C773DD2C;
// UnityEngine.Windows.WebCam.VideoCapture/OnVideoModeStartedCallback
struct OnVideoModeStartedCallback_t02A8F71807C17735B0CA19F94FF41F6E5DD7260A;
// UnityEngine.Windows.WebCam.VideoCapture/OnVideoModeStoppedCallback
struct OnVideoModeStoppedCallback_tE545030F7C008F72708C7647CC3F464FB4B2CA80;
// UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44;
// UnityEngineInternal.GenericStack
struct GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC;
// UnityEngineInternal.TypeInferenceRuleAttribute
struct TypeInferenceRuleAttribute_tEB3BA6FDE6D6817FD33E2620200007EB9730214B;

IL2CPP_EXTERN_C RuntimeClass* Application_tE2F9F209A836BEC8F432DEBB5A290962FC5C050C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfidenceLevel_t56554EC6B602F1294B9E933704E2EC961906AA36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationCompletionCause_tAF978578CFACB799A3DB54BA549C780C5E181FC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MovedFromAttribute_tE9A667A7698BEF9EA09BF23E4308CD1EC2099162_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObsoleteAttribute_tDAE6245D460079868ABE89327A61FC76E13F2170_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhraseRecognitionSystem_t0C199C0F115356F4FEB8DD938B25FB290B17FB7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechError_tF03B18A9E3B314DC1DAC6DD4C7010F1B2F2B90E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechSystemStatus_t2CCB4587008A89270736621140A65C1B5BB22317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeInferenceRules_tFA03D20477226A95FE644665C3C08A6B6281C333_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowActivationState_t567A72E78C9C4696E8C2388C355E3F3ADCCCFF0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD58D3D9B41F4ECB504BA593B1A70074B18A924;
IL2CPP_EXTERN_C String_t* _stringLiteral3533FC373F17ACF0155785001BCC681AA6ED8C36;
IL2CPP_EXTERN_C String_t* _stringLiteral88FC09E54B17679B0028556344B50C9FE169BDB5;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE4365D489F8F7749EB96EB7973DA06109F356DA4;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_mFA91B93A5C91290D4A3C475C4117CA05B43419E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeywordRecognizer__ctor_m10E461E5F20190D903506B99E53E522C589F9A56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mD0E32FFEA8E13AF0454470323C18CA9475986570_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* MovedFromAttribute_tE9A667A7698BEF9EA09BF23E4308CD1EC2099162_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObsoleteAttribute_tDAE6245D460079868ABE89327A61FC76E13F2170_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t APIUpdaterRuntimeHelpers_GetMovedFromAttributeDataForType_m2574674719979232087612C3C17A760E439BCA45_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t APIUpdaterRuntimeHelpers_GetObsoleteTypeRedirection_m43E0605422153F402426F8959BC2E8C65A69F597_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Application_InvokeWindowActivatedEvent_mC3F32526F9F0DF2B7E1C4C0F845DD78F6D98333C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Application_InvokeWindowSizeChangedEvent_m50F2FC0D2A8F2A0510B56D81B7FBBE5FED31B54F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DictationCompletedDelegate_BeginInvoke_m86D73A3A2CE70124C65709ADABB270C4F4A981F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DictationErrorHandler_BeginInvoke_mD24E9C40E56521AC36B8D32518198DFB89D9827C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DictationRecognizer_Dispose_m8D8EB78BD3CD6B18CF2240AD8506CE943F1692E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DictationRecognizer_Finalize_m3A9F239077BE32E93F9CA8431E79EE353822DDF2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DictationRecognizer_Start_mA9B2AB4490205206F640DFE552B0944396D30536_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DictationRecognizer_Stop_m42D22C5D03B17B6DDF94B13E9DC678AB4C11970E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DictationRecognizer_add_DictationComplete_m7F58F5353A6197EDF83790B3A11B07A7C4775F10_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DictationRecognizer_add_DictationError_m4A09F1227E7C3F954FACA66DD6F0F1720AF50C56_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DictationRecognizer_add_DictationHypothesis_m18C5A5B49B3503D141FD3BF25E8CAE78DA2D2196_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DictationRecognizer_add_DictationResult_m72E518611183A8F055394759C76AF2C04C2C049E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DictationRecognizer_remove_DictationComplete_m1C2487A5E937F84D15B73A2853AD4C65A537FB6F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DictationRecognizer_remove_DictationError_mA5CF0BEDD8CBC96098B623B48E70C5BD913C00B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DictationRecognizer_remove_DictationHypothesis_m33D106BA3BD2C231CF9B3AB7CFC9D5D28DD63816_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DictationRecognizer_remove_DictationResult_mD2832F82043B0E918D07AB2F3D8C6F83AD7A4AE6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DictationRecognizer_set_AutoSilenceTimeoutSeconds_m96E3450BE28A238970C5548AD8896BE3F02DB8F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DictationRecognizer_set_InitialSilenceTimeoutSeconds_mD355A47F132B4E26C60C1E200C9C0B99FDCABC06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DictationResultDelegate_BeginInvoke_mB1DAE084A144180C6B6C3FBB95FC11C953E51872_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ErrorDelegate_BeginInvoke_m3A859400873FD62B71B597C2771E50F94B344E09_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericStack__ctor_m0659B84DB6B093AF1F01F566686C510DDEEAE848_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KeywordRecognizer__ctor_m10E461E5F20190D903506B99E53E522C589F9A56_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MathfInternal__cctor_m885D4921B8E928763E7ABB4466659665780F860F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnCapturedToDiskCallback_BeginInvoke_mBFF762F91DF363C1BC015BDEF93B1242A02FF9F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnCapturedToMemoryCallback_BeginInvoke_mD05157F78B546F75A987887C683FAC6A922A49B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnPhotoModeStartedCallback_BeginInvoke_mBCCD40B907D5289FBD9F4E306E68BED5E74D7E4E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnPhotoModeStoppedCallback_BeginInvoke_m21A3D9F9B428F00D754B8C4DFAFC6E5C594E5B35_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnStartedRecordingVideoCallback_BeginInvoke_m64CB638B651C771C976BC6251A897DBC33F9FFE7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnStoppedRecordingVideoCallback_BeginInvoke_mA96640AB5DA79F3C8C07367769094492D30056BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnVideoModeStartedCallback_BeginInvoke_m95E5682FF37266B911974288C4E9090187B416C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnVideoModeStoppedCallback_BeginInvoke_m21579FF978236D09DEB3AC1F508A4EF4A04A8FAB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotoCaptureFrame_Cleanup_m4F7B4E31415ABD61458F394F09597B9CE31C9E0C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotoCaptureFrame_Dispose_mA569A16F2EE402B143C252D57B6C93040B81BABD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotoCaptureFrame__ctor_m2200B47E027A635C22A6822CE3548BBFD38CFF01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotoCapture_Dispose_mAC295018942A4ACBBC627647FE0F463C21F94CE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotoCapture_Finalize_m8F5ABCCAA23CFF5949D6DC26EE6A164C2B952A42_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotoCapture_InvokeOnCapturedPhotoToDiskDelegate_mB6AEB939C6D1ACC29FA6E711E92924319674E604_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotoCapture_InvokeOnCapturedPhotoToMemoryDelegate_m81F2206975AEBC72CBE1238EDA770DCE7F9A9ED8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotoCapture_InvokeOnCreatedResourceDelegate_mAEC319E9811B816A642DA8A135CCEC3CB91C75DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotoCapture_InvokeOnPhotoModeStartedDelegate_m8C4172E50A49CDC9F2895BCE031428B4EE931CC2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotoCapture_InvokeOnPhotoModeStoppedDelegate_m17CFB212EE2F2E765241E0E6DD8F2B17E03B6F94_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotoCapture_MakeCaptureResult_m30A1524DDA706A094516C9C1E191367B8194B2AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotoCapture__cctor_mB6B5B17F07B739073CCE8934A6AF65A74DD53259_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhraseRecognitionSystem_PhraseRecognitionSystem_InvokeErrorEvent_m9FF196C06264F6035686945A734E1AC01A0E2E33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhraseRecognitionSystem_PhraseRecognitionSystem_InvokeStatusChangedEvent_mF25930BC6443439CCBAF346B89799358451239D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhraseRecognizedDelegate_BeginInvoke_m262B7DABBDF14FCBFF43293BF2FB06AC676CB962_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhraseRecognizer_Dispose_m617A308A831D5314CE7B10301DB0CADAD080F73A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhraseRecognizer_Finalize_m8B1591B513FE69C370C9AC8FCD13E2A091499E76_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhraseRecognizer_InvokePhraseRecognizedEvent_mDBD38FADAC58DF9B960342AC84EE32CF221B0F02_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhraseRecognizer_MarshalSemanticMeaning_m444804CA07F778FD0E23E78432EE0E377579C26A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhraseRecognizer_Start_m2CDF8ABBF99C79C181488B6F0310375BC39D2459_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhraseRecognizer_Stop_mD94B6DDFE77D1AC1DC10C5BF015F76F607B81F19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhraseRecognizer_add_OnPhraseRecognized_m3A70137B301880FB1CCA497AADC4457DF879B223_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhraseRecognizer_get_IsRunning_m26DF9151D332930662ACB87E00D2498DCC87F7E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhraseRecognizer_remove_OnPhraseRecognized_m238073B8E92F06363AAFE5918FDF5B7328A55F69_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StatusDelegate_BeginInvoke_m814D9105249F941053622B079479E04A4FB6D227_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeInferenceRuleAttribute__ctor_m389751AED6740F401AC8DFACD5914C13AB24D8A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoCapture_Dispose_m05A80B67D93D420B5FFA350028C62AC7C3A2791F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoCapture_Finalize_m7B97B93616E65E61B55F4D9B6784E65C4916C2F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoCapture_InvokeOnCreatedVideoCaptureResourceDelegate_mF9883CC0DE032FC32261999B5DBA0FA3B97BEA12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoCapture_InvokeOnStartedRecordingVideoToDiskDelegate_m6D5AEC9ACC849B33AA27AEC954FF67C8333505F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoCapture_InvokeOnStoppedRecordingVideoToDiskDelegate_m2F132EE579D852F77A5F70639EDEE85E7AE13739_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoCapture_InvokeOnVideoModeStartedDelegate_m26310208BD52CAC57B4F7581FBAFC7EEF491EA98_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoCapture_InvokeOnVideoModeStoppedDelegate_mD5BD41E17DC995244E5466CBAA9C370168EE12C2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoCapture_MakeCaptureResult_m8E3FDAF1FB4B3F56197D02ECB1E94BA16ED01524_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoCapture__cctor_m575F77433389795AB691B84D88DD79C1D2CFBD06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaitUntil_get_keepWaiting_m01FE040DFAAA66F0664092597CE79FCE25BD9122_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaitWhile_get_keepWaiting_m071555AC3659D1D159FE35CC65789DF5E3C4AE5F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowActivated_BeginInvoke_m3C951527286C852225A315373E68FFCBBB450DB2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowSizeChanged_BeginInvoke_m20CE5F7C1DB14C91F91C065FF89F2BE60EED31A9_MetadataUsageId;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777;;
struct PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshaled_pinvoke;
struct PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshaled_pinvoke;;
struct SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C;;
struct SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com;
struct SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com;;
struct SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke;
struct SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke;;
struct VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881;;
struct VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshaled_pinvoke;
struct VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshaled_pinvoke;;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Stack`1<System.Object>
struct  Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


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

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};


// UnityEngine.WSA.Application
struct  Application_tE2F9F209A836BEC8F432DEBB5A290962FC5C050C  : public RuntimeObject
{
public:

public:
};

struct Application_tE2F9F209A836BEC8F432DEBB5A290962FC5C050C_StaticFields
{
public:
	// UnityEngine.WSA.WindowSizeChanged UnityEngine.WSA.Application::windowSizeChanged
	WindowSizeChanged_tACBE6B53689EC2CE90F98B35CE37437AF17474E0 * ___windowSizeChanged_0;
	// UnityEngine.WSA.WindowActivated UnityEngine.WSA.Application::windowActivated
	WindowActivated_t5EB8FED49C5DF18D49E17A7BF037B090553E8732 * ___windowActivated_1;

public:
	inline static int32_t get_offset_of_windowSizeChanged_0() { return static_cast<int32_t>(offsetof(Application_tE2F9F209A836BEC8F432DEBB5A290962FC5C050C_StaticFields, ___windowSizeChanged_0)); }
	inline WindowSizeChanged_tACBE6B53689EC2CE90F98B35CE37437AF17474E0 * get_windowSizeChanged_0() const { return ___windowSizeChanged_0; }
	inline WindowSizeChanged_tACBE6B53689EC2CE90F98B35CE37437AF17474E0 ** get_address_of_windowSizeChanged_0() { return &___windowSizeChanged_0; }
	inline void set_windowSizeChanged_0(WindowSizeChanged_tACBE6B53689EC2CE90F98B35CE37437AF17474E0 * value)
	{
		___windowSizeChanged_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___windowSizeChanged_0), (void*)value);
	}

	inline static int32_t get_offset_of_windowActivated_1() { return static_cast<int32_t>(offsetof(Application_tE2F9F209A836BEC8F432DEBB5A290962FC5C050C_StaticFields, ___windowActivated_1)); }
	inline WindowActivated_t5EB8FED49C5DF18D49E17A7BF037B090553E8732 * get_windowActivated_1() const { return ___windowActivated_1; }
	inline WindowActivated_t5EB8FED49C5DF18D49E17A7BF037B090553E8732 ** get_address_of_windowActivated_1() { return &___windowActivated_1; }
	inline void set_windowActivated_1(WindowActivated_t5EB8FED49C5DF18D49E17A7BF037B090553E8732 * value)
	{
		___windowActivated_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___windowActivated_1), (void*)value);
	}
};


// UnityEngine.Windows.File
struct  File_t29B1B48FC484FD048098FEBA7A8F7D1586D641C3  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Windows.Speech.PhraseRecognitionSystem
struct  PhraseRecognitionSystem_t0C199C0F115356F4FEB8DD938B25FB290B17FB7A  : public RuntimeObject
{
public:

public:
};

struct PhraseRecognitionSystem_t0C199C0F115356F4FEB8DD938B25FB290B17FB7A_StaticFields
{
public:
	// UnityEngine.Windows.Speech.PhraseRecognitionSystem_ErrorDelegate UnityEngine.Windows.Speech.PhraseRecognitionSystem::OnError
	ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * ___OnError_0;
	// UnityEngine.Windows.Speech.PhraseRecognitionSystem_StatusDelegate UnityEngine.Windows.Speech.PhraseRecognitionSystem::OnStatusChanged
	StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * ___OnStatusChanged_1;

public:
	inline static int32_t get_offset_of_OnError_0() { return static_cast<int32_t>(offsetof(PhraseRecognitionSystem_t0C199C0F115356F4FEB8DD938B25FB290B17FB7A_StaticFields, ___OnError_0)); }
	inline ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * get_OnError_0() const { return ___OnError_0; }
	inline ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD ** get_address_of_OnError_0() { return &___OnError_0; }
	inline void set_OnError_0(ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * value)
	{
		___OnError_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnStatusChanged_1() { return static_cast<int32_t>(offsetof(PhraseRecognitionSystem_t0C199C0F115356F4FEB8DD938B25FB290B17FB7A_StaticFields, ___OnStatusChanged_1)); }
	inline StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * get_OnStatusChanged_1() const { return ___OnStatusChanged_1; }
	inline StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 ** get_address_of_OnStatusChanged_1() { return &___OnStatusChanged_1; }
	inline void set_OnStatusChanged_1(StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * value)
	{
		___OnStatusChanged_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStatusChanged_1), (void*)value);
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// UnityEngine._Scripting.APIUpdating.APIUpdaterRuntimeHelpers
struct  APIUpdaterRuntimeHelpers_tA791F16B3C1471D7379F5258A980B3CC2B81C6E5  : public RuntimeObject
{
public:

public:
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
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
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


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.ObsoleteAttribute
struct  ObsoleteAttribute_tDAE6245D460079868ABE89327A61FC76E13F2170  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_tDAE6245D460079868ABE89327A61FC76E13F2170, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_0), (void*)value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_tDAE6245D460079868ABE89327A61FC76E13F2170, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
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


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
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


// UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
struct  MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F 
{
public:
	// System.String UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::className
	String_t* ___className_0;
	// System.String UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::nameSpace
	String_t* ___nameSpace_1;
	// System.String UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::assembly
	String_t* ___assembly_2;
	// System.Boolean UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::classHasChanged
	bool ___classHasChanged_3;
	// System.Boolean UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::nameSpaceHasChanged
	bool ___nameSpaceHasChanged_4;
	// System.Boolean UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::assemblyHasChanged
	bool ___assemblyHasChanged_5;
	// System.Boolean UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::autoUdpateAPI
	bool ___autoUdpateAPI_6;

public:
	inline static int32_t get_offset_of_className_0() { return static_cast<int32_t>(offsetof(MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F, ___className_0)); }
	inline String_t* get_className_0() const { return ___className_0; }
	inline String_t** get_address_of_className_0() { return &___className_0; }
	inline void set_className_0(String_t* value)
	{
		___className_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___className_0), (void*)value);
	}

	inline static int32_t get_offset_of_nameSpace_1() { return static_cast<int32_t>(offsetof(MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F, ___nameSpace_1)); }
	inline String_t* get_nameSpace_1() const { return ___nameSpace_1; }
	inline String_t** get_address_of_nameSpace_1() { return &___nameSpace_1; }
	inline void set_nameSpace_1(String_t* value)
	{
		___nameSpace_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameSpace_1), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_2() { return static_cast<int32_t>(offsetof(MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F, ___assembly_2)); }
	inline String_t* get_assembly_2() const { return ___assembly_2; }
	inline String_t** get_address_of_assembly_2() { return &___assembly_2; }
	inline void set_assembly_2(String_t* value)
	{
		___assembly_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_2), (void*)value);
	}

	inline static int32_t get_offset_of_classHasChanged_3() { return static_cast<int32_t>(offsetof(MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F, ___classHasChanged_3)); }
	inline bool get_classHasChanged_3() const { return ___classHasChanged_3; }
	inline bool* get_address_of_classHasChanged_3() { return &___classHasChanged_3; }
	inline void set_classHasChanged_3(bool value)
	{
		___classHasChanged_3 = value;
	}

	inline static int32_t get_offset_of_nameSpaceHasChanged_4() { return static_cast<int32_t>(offsetof(MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F, ___nameSpaceHasChanged_4)); }
	inline bool get_nameSpaceHasChanged_4() const { return ___nameSpaceHasChanged_4; }
	inline bool* get_address_of_nameSpaceHasChanged_4() { return &___nameSpaceHasChanged_4; }
	inline void set_nameSpaceHasChanged_4(bool value)
	{
		___nameSpaceHasChanged_4 = value;
	}

	inline static int32_t get_offset_of_assemblyHasChanged_5() { return static_cast<int32_t>(offsetof(MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F, ___assemblyHasChanged_5)); }
	inline bool get_assemblyHasChanged_5() const { return ___assemblyHasChanged_5; }
	inline bool* get_address_of_assemblyHasChanged_5() { return &___assemblyHasChanged_5; }
	inline void set_assemblyHasChanged_5(bool value)
	{
		___assemblyHasChanged_5 = value;
	}

	inline static int32_t get_offset_of_autoUdpateAPI_6() { return static_cast<int32_t>(offsetof(MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F, ___autoUdpateAPI_6)); }
	inline bool get_autoUdpateAPI_6() const { return ___autoUdpateAPI_6; }
	inline bool* get_address_of_autoUdpateAPI_6() { return &___autoUdpateAPI_6; }
	inline void set_autoUdpateAPI_6(bool value)
	{
		___autoUdpateAPI_6 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
struct MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F_marshaled_pinvoke
{
	char* ___className_0;
	char* ___nameSpace_1;
	char* ___assembly_2;
	int32_t ___classHasChanged_3;
	int32_t ___nameSpaceHasChanged_4;
	int32_t ___assemblyHasChanged_5;
	int32_t ___autoUdpateAPI_6;
};
// Native definition for COM marshalling of UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
struct MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F_marshaled_com
{
	Il2CppChar* ___className_0;
	Il2CppChar* ___nameSpace_1;
	Il2CppChar* ___assembly_2;
	int32_t ___classHasChanged_3;
	int32_t ___nameSpaceHasChanged_4;
	int32_t ___assemblyHasChanged_5;
	int32_t ___autoUdpateAPI_6;
};

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:

public:
};


// UnityEngine.WaitForFixedUpdate
struct  WaitForFixedUpdate_t8801328F075019AF6B6150B20EC343935A29FF97  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitForSecondsRealtime
struct  WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
	}
};


// UnityEngine.WaitUntil
struct  WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F, ___m_Predicate_0)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// UnityEngine.WaitWhile
struct  WaitWhile_t26AA4EE3C438C96A750FFE1C8FA5C3FD66B8BB59  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitWhile::m_Predicate
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitWhile_t26AA4EE3C438C96A750FFE1C8FA5C3FD66B8BB59, ___m_Predicate_0)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// UnityEngine.Windows.Speech.SemanticMeaning
struct  SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C 
{
public:
	// System.String UnityEngine.Windows.Speech.SemanticMeaning::key
	String_t* ___key_0;
	// System.String[] UnityEngine.Windows.Speech.SemanticMeaning::values
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___values_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C, ___values_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_values_1() const { return ___values_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Windows.Speech.SemanticMeaning
struct SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke
{
	char* ___key_0;
	char** ___values_1;
};
// Native definition for COM marshalling of UnityEngine.Windows.Speech.SemanticMeaning
struct SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com
{
	Il2CppChar* ___key_0;
	Il2CppChar** ___values_1;
};

// UnityEngineInternal.GenericStack
struct  GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC  : public Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D
{
public:

public:
};


// UnityEngineInternal.TypeInferenceRuleAttribute
struct  TypeInferenceRuleAttribute_tEB3BA6FDE6D6817FD33E2620200007EB9730214B  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.String UnityEngineInternal.TypeInferenceRuleAttribute::_rule
	String_t* ____rule_0;

public:
	inline static int32_t get_offset_of__rule_0() { return static_cast<int32_t>(offsetof(TypeInferenceRuleAttribute_tEB3BA6FDE6D6817FD33E2620200007EB9730214B, ____rule_0)); }
	inline String_t* get__rule_0() const { return ____rule_0; }
	inline String_t** get_address_of__rule_0() { return &____rule_0; }
	inline void set__rule_0(String_t* value)
	{
		____rule_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rule_0), (void*)value);
	}
};


// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t31E4F1BC642CF668706C9D0FBD9DFDF5EE01CEB9 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t31E4F1BC642CF668706C9D0FBD9DFDF5EE01CEB9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_tEA062AB37A9A750B33F6CA2898EEF03A4EEA496C 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_tEA062AB37A9A750B33F6CA2898EEF03A4EEA496C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


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

// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly_ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// System.Reflection.AssemblyContentType
struct  AssemblyContentType_t9869DE40B7B1976B389F3B6A5A5D18B09E623401 
{
public:
	// System.Int32 System.Reflection.AssemblyContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyContentType_t9869DE40B7B1976B389F3B6A5A5D18B09E623401, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.AssemblyNameFlags
struct  AssemblyNameFlags_t7834EDF078E7ECA985AA434A1EA0D95C2A44F256 
{
public:
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyNameFlags_t7834EDF078E7ECA985AA434A1EA0D95C2A44F256, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ProcessorArchitecture
struct  ProcessorArchitecture_t0CFB73A83469D6AC222B9FE46E81EAC73C2627C7 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t0CFB73A83469D6AC222B9FE46E81EAC73C2627C7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UnityEngine.Scripting.APIUpdating.MovedFromAttribute
struct  MovedFromAttribute_tE9A667A7698BEF9EA09BF23E4308CD1EC2099162  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// UnityEngine.Scripting.APIUpdating.MovedFromAttributeData UnityEngine.Scripting.APIUpdating.MovedFromAttribute::data
	MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F  ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(MovedFromAttribute_tE9A667A7698BEF9EA09BF23E4308CD1EC2099162, ___data_0)); }
	inline MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F  get_data_0() const { return ___data_0; }
	inline MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F * get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F  value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___className_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___nameSpace_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___assembly_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.WSA.WindowActivationState
struct  WindowActivationState_t567A72E78C9C4696E8C2388C355E3F3ADCCCFF0E 
{
public:
	// System.Int32 UnityEngine.WSA.WindowActivationState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WindowActivationState_t567A72E78C9C4696E8C2388C355E3F3ADCCCFF0E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.WeightedMode
struct  WeightedMode_t98C51B71C54B8A3026DBB95C738DFA49AC73B4BD 
{
public:
	// System.Int32 UnityEngine.WeightedMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WeightedMode_t98C51B71C54B8A3026DBB95C738DFA49AC73B4BD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Windows.Speech.ConfidenceLevel
struct  ConfidenceLevel_t56554EC6B602F1294B9E933704E2EC961906AA36 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.ConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfidenceLevel_t56554EC6B602F1294B9E933704E2EC961906AA36, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Windows.Speech.DictationCompletionCause
struct  DictationCompletionCause_tAF978578CFACB799A3DB54BA549C780C5E181FC1 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.DictationCompletionCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DictationCompletionCause_tAF978578CFACB799A3DB54BA549C780C5E181FC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Windows.Speech.DictationRecognizer
struct  DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.Speech.DictationRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// UnityEngine.Windows.Speech.DictationRecognizer_DictationHypothesisDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationHypothesis
	DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * ___DictationHypothesis_1;
	// UnityEngine.Windows.Speech.DictationRecognizer_DictationResultDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationResult
	DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * ___DictationResult_2;
	// UnityEngine.Windows.Speech.DictationRecognizer_DictationCompletedDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationComplete
	DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * ___DictationComplete_3;
	// UnityEngine.Windows.Speech.DictationRecognizer_DictationErrorHandler UnityEngine.Windows.Speech.DictationRecognizer::DictationError
	DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * ___DictationError_4;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_DictationHypothesis_1() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___DictationHypothesis_1)); }
	inline DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * get_DictationHypothesis_1() const { return ___DictationHypothesis_1; }
	inline DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF ** get_address_of_DictationHypothesis_1() { return &___DictationHypothesis_1; }
	inline void set_DictationHypothesis_1(DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * value)
	{
		___DictationHypothesis_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DictationHypothesis_1), (void*)value);
	}

	inline static int32_t get_offset_of_DictationResult_2() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___DictationResult_2)); }
	inline DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * get_DictationResult_2() const { return ___DictationResult_2; }
	inline DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 ** get_address_of_DictationResult_2() { return &___DictationResult_2; }
	inline void set_DictationResult_2(DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * value)
	{
		___DictationResult_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DictationResult_2), (void*)value);
	}

	inline static int32_t get_offset_of_DictationComplete_3() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___DictationComplete_3)); }
	inline DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * get_DictationComplete_3() const { return ___DictationComplete_3; }
	inline DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC ** get_address_of_DictationComplete_3() { return &___DictationComplete_3; }
	inline void set_DictationComplete_3(DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * value)
	{
		___DictationComplete_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DictationComplete_3), (void*)value);
	}

	inline static int32_t get_offset_of_DictationError_4() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___DictationError_4)); }
	inline DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * get_DictationError_4() const { return ___DictationError_4; }
	inline DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 ** get_address_of_DictationError_4() { return &___DictationError_4; }
	inline void set_DictationError_4(DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * value)
	{
		___DictationError_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DictationError_4), (void*)value);
	}
};


// UnityEngine.Windows.Speech.DictationTopicConstraint
struct  DictationTopicConstraint_t4F7BEEE7C25F9EFAD177FABCBEB53604B83220E2 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.DictationTopicConstraint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DictationTopicConstraint_t4F7BEEE7C25F9EFAD177FABCBEB53604B83220E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Windows.Speech.PhraseRecognizer
struct  PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.Speech.PhraseRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// UnityEngine.Windows.Speech.PhraseRecognizer_PhraseRecognizedDelegate UnityEngine.Windows.Speech.PhraseRecognizer::OnPhraseRecognized
	PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * ___OnPhraseRecognized_1;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_OnPhraseRecognized_1() { return static_cast<int32_t>(offsetof(PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F, ___OnPhraseRecognized_1)); }
	inline PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * get_OnPhraseRecognized_1() const { return ___OnPhraseRecognized_1; }
	inline PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 ** get_address_of_OnPhraseRecognized_1() { return &___OnPhraseRecognized_1; }
	inline void set_OnPhraseRecognized_1(PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * value)
	{
		___OnPhraseRecognized_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPhraseRecognized_1), (void*)value);
	}
};


// UnityEngine.Windows.Speech.SpeechError
struct  SpeechError_tF03B18A9E3B314DC1DAC6DD4C7010F1B2F2B90E7 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.SpeechError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpeechError_tF03B18A9E3B314DC1DAC6DD4C7010F1B2F2B90E7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Windows.Speech.SpeechSystemStatus
struct  SpeechSystemStatus_t2CCB4587008A89270736621140A65C1B5BB22317 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.SpeechSystemStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpeechSystemStatus_t2CCB4587008A89270736621140A65C1B5BB22317, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Windows.WebCam.CapturePixelFormat
struct  CapturePixelFormat_t687006312A0CB0712C0EF18EA4AF31F152A0E41B 
{
public:
	// System.Int32 UnityEngine.Windows.WebCam.CapturePixelFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CapturePixelFormat_t687006312A0CB0712C0EF18EA4AF31F152A0E41B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Windows.WebCam.PhotoCapture
struct  PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.WebCam.PhotoCapture::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

struct PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_StaticFields
{
public:
	// System.Int64 UnityEngine.Windows.WebCam.PhotoCapture::HR_SUCCESS
	int64_t ___HR_SUCCESS_1;

public:
	inline static int32_t get_offset_of_HR_SUCCESS_1() { return static_cast<int32_t>(offsetof(PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_StaticFields, ___HR_SUCCESS_1)); }
	inline int64_t get_HR_SUCCESS_1() const { return ___HR_SUCCESS_1; }
	inline int64_t* get_address_of_HR_SUCCESS_1() { return &___HR_SUCCESS_1; }
	inline void set_HR_SUCCESS_1(int64_t value)
	{
		___HR_SUCCESS_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Windows.WebCam.PhotoCapture
struct PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.Windows.WebCam.PhotoCapture
struct PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};

// UnityEngine.Windows.WebCam.PhotoCapture_CaptureResultType
struct  CaptureResultType_t0947F7AEB5339384E8BEAF02848926669FAF8620 
{
public:
	// System.Int32 UnityEngine.Windows.WebCam.PhotoCapture_CaptureResultType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CaptureResultType_t0947F7AEB5339384E8BEAF02848926669FAF8620, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Windows.WebCam.VideoCapture
struct  VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.WebCam.VideoCapture::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

struct VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_StaticFields
{
public:
	// System.Int64 UnityEngine.Windows.WebCam.VideoCapture::HR_SUCCESS
	int64_t ___HR_SUCCESS_1;

public:
	inline static int32_t get_offset_of_HR_SUCCESS_1() { return static_cast<int32_t>(offsetof(VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_StaticFields, ___HR_SUCCESS_1)); }
	inline int64_t get_HR_SUCCESS_1() const { return ___HR_SUCCESS_1; }
	inline int64_t* get_address_of_HR_SUCCESS_1() { return &___HR_SUCCESS_1; }
	inline void set_HR_SUCCESS_1(int64_t value)
	{
		___HR_SUCCESS_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};

// UnityEngine.Windows.WebCam.VideoCapture_CaptureResultType
struct  CaptureResultType_tC35B2BE9EB6ED0C7BC7FF3D1A4C47143F77D7EAE 
{
public:
	// System.Int32 UnityEngine.Windows.WebCam.VideoCapture_CaptureResultType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CaptureResultType_tC35B2BE9EB6ED0C7BC7FF3D1A4C47143F77D7EAE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.WrapMode
struct  WrapMode_t3704F0388A4F801D2F54B1EA1EE8DC014D667AFD 
{
public:
	// System.Int32 UnityEngine.WrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WrapMode_t3704F0388A4F801D2F54B1EA1EE8DC014D667AFD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngineInternal.LightmapType
struct  LightmapType_t463AC949035CBB15E9B2BE0B5ECD4EC6D60F6C2E 
{
public:
	// System.Int32 UnityEngineInternal.LightmapType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightmapType_t463AC949035CBB15E9B2BE0B5ECD4EC6D60F6C2E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngineInternal.MathfInternal
struct  MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693__padding[1];
	};

public:
};

struct MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields
{
public:
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinNormal
	float ___FloatMinNormal_0;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinDenormal
	float ___FloatMinDenormal_1;
	// System.Boolean UnityEngineInternal.MathfInternal::IsFlushToZeroEnabled
	bool ___IsFlushToZeroEnabled_2;

public:
	inline static int32_t get_offset_of_FloatMinNormal_0() { return static_cast<int32_t>(offsetof(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields, ___FloatMinNormal_0)); }
	inline float get_FloatMinNormal_0() const { return ___FloatMinNormal_0; }
	inline float* get_address_of_FloatMinNormal_0() { return &___FloatMinNormal_0; }
	inline void set_FloatMinNormal_0(float value)
	{
		___FloatMinNormal_0 = value;
	}

	inline static int32_t get_offset_of_FloatMinDenormal_1() { return static_cast<int32_t>(offsetof(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields, ___FloatMinDenormal_1)); }
	inline float get_FloatMinDenormal_1() const { return ___FloatMinDenormal_1; }
	inline float* get_address_of_FloatMinDenormal_1() { return &___FloatMinDenormal_1; }
	inline void set_FloatMinDenormal_1(float value)
	{
		___FloatMinDenormal_1 = value;
	}

	inline static int32_t get_offset_of_IsFlushToZeroEnabled_2() { return static_cast<int32_t>(offsetof(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields, ___IsFlushToZeroEnabled_2)); }
	inline bool get_IsFlushToZeroEnabled_2() const { return ___IsFlushToZeroEnabled_2; }
	inline bool* get_address_of_IsFlushToZeroEnabled_2() { return &___IsFlushToZeroEnabled_2; }
	inline void set_IsFlushToZeroEnabled_2(bool value)
	{
		___IsFlushToZeroEnabled_2 = value;
	}
};


// UnityEngineInternal.TypeInferenceRules
struct  TypeInferenceRules_tFA03D20477226A95FE644665C3C08A6B6281C333 
{
public:
	// System.Int32 UnityEngineInternal.TypeInferenceRules::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeInferenceRules_tFA03D20477226A95FE644665C3C08A6B6281C333, ___value___2)); }
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

// System.Reflection.AssemblyName
struct  AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82  : public RuntimeObject
{
public:
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
	// System.Reflection.AssemblyContentType System.Reflection.AssemblyName::contentType
	int32_t ___contentType_15;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_codebase_1() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___codebase_1)); }
	inline String_t* get_codebase_1() const { return ___codebase_1; }
	inline String_t** get_address_of_codebase_1() { return &___codebase_1; }
	inline void set_codebase_1(String_t* value)
	{
		___codebase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___codebase_1), (void*)value);
	}

	inline static int32_t get_offset_of_major_2() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___major_2)); }
	inline int32_t get_major_2() const { return ___major_2; }
	inline int32_t* get_address_of_major_2() { return &___major_2; }
	inline void set_major_2(int32_t value)
	{
		___major_2 = value;
	}

	inline static int32_t get_offset_of_minor_3() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___minor_3)); }
	inline int32_t get_minor_3() const { return ___minor_3; }
	inline int32_t* get_address_of_minor_3() { return &___minor_3; }
	inline void set_minor_3(int32_t value)
	{
		___minor_3 = value;
	}

	inline static int32_t get_offset_of_build_4() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___build_4)); }
	inline int32_t get_build_4() const { return ___build_4; }
	inline int32_t* get_address_of_build_4() { return &___build_4; }
	inline void set_build_4(int32_t value)
	{
		___build_4 = value;
	}

	inline static int32_t get_offset_of_revision_5() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___revision_5)); }
	inline int32_t get_revision_5() const { return ___revision_5; }
	inline int32_t* get_address_of_revision_5() { return &___revision_5; }
	inline void set_revision_5(int32_t value)
	{
		___revision_5 = value;
	}

	inline static int32_t get_offset_of_cultureinfo_6() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___cultureinfo_6)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_cultureinfo_6() const { return ___cultureinfo_6; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_cultureinfo_6() { return &___cultureinfo_6; }
	inline void set_cultureinfo_6(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___cultureinfo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cultureinfo_6), (void*)value);
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___flags_7)); }
	inline int32_t get_flags_7() const { return ___flags_7; }
	inline int32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(int32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_hashalg_8() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___hashalg_8)); }
	inline int32_t get_hashalg_8() const { return ___hashalg_8; }
	inline int32_t* get_address_of_hashalg_8() { return &___hashalg_8; }
	inline void set_hashalg_8(int32_t value)
	{
		___hashalg_8 = value;
	}

	inline static int32_t get_offset_of_keypair_9() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___keypair_9)); }
	inline StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD * get_keypair_9() const { return ___keypair_9; }
	inline StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD ** get_address_of_keypair_9() { return &___keypair_9; }
	inline void set_keypair_9(StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD * value)
	{
		___keypair_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keypair_9), (void*)value);
	}

	inline static int32_t get_offset_of_publicKey_10() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___publicKey_10)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_publicKey_10() const { return ___publicKey_10; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_publicKey_10() { return &___publicKey_10; }
	inline void set_publicKey_10(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___publicKey_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___publicKey_10), (void*)value);
	}

	inline static int32_t get_offset_of_keyToken_11() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___keyToken_11)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_keyToken_11() const { return ___keyToken_11; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_keyToken_11() { return &___keyToken_11; }
	inline void set_keyToken_11(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___keyToken_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyToken_11), (void*)value);
	}

	inline static int32_t get_offset_of_versioncompat_12() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___versioncompat_12)); }
	inline int32_t get_versioncompat_12() const { return ___versioncompat_12; }
	inline int32_t* get_address_of_versioncompat_12() { return &___versioncompat_12; }
	inline void set_versioncompat_12(int32_t value)
	{
		___versioncompat_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___version_13)); }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * get_version_13() const { return ___version_13; }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_13), (void*)value);
	}

	inline static int32_t get_offset_of_processor_architecture_14() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___processor_architecture_14)); }
	inline int32_t get_processor_architecture_14() const { return ___processor_architecture_14; }
	inline int32_t* get_address_of_processor_architecture_14() { return &___processor_architecture_14; }
	inline void set_processor_architecture_14(int32_t value)
	{
		___processor_architecture_14 = value;
	}

	inline static int32_t get_offset_of_contentType_15() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___contentType_15)); }
	inline int32_t get_contentType_15() const { return ___contentType_15; }
	inline int32_t* get_address_of_contentType_15() { return &___contentType_15; }
	inline void set_contentType_15(int32_t value)
	{
		___contentType_15 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.AssemblyName
struct AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshaled_pinvoke
{
	char* ___name_0;
	char* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD * ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
// Native definition for COM marshalling of System.Reflection.AssemblyName
struct AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD * ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Windows.Speech.KeywordRecognizer
struct  KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C  : public PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F
{
public:
	// System.Collections.Generic.IEnumerable`1<System.String> UnityEngine.Windows.Speech.KeywordRecognizer::<Keywords>k__BackingField
	RuntimeObject* ___U3CKeywordsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C, ___U3CKeywordsU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CKeywordsU3Ek__BackingField_2() const { return ___U3CKeywordsU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CKeywordsU3Ek__BackingField_2() { return &___U3CKeywordsU3Ek__BackingField_2; }
	inline void set_U3CKeywordsU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CKeywordsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct  PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD 
{
public:
	// UnityEngine.Windows.Speech.ConfidenceLevel UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::confidence
	int32_t ___confidence_0;
	// UnityEngine.Windows.Speech.SemanticMeaning[] UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::semanticMeanings
	SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* ___semanticMeanings_1;
	// System.String UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::text
	String_t* ___text_2;
	// System.DateTime UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::phraseStartTime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime_3;
	// System.TimeSpan UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::phraseDuration
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration_4;

public:
	inline static int32_t get_offset_of_confidence_0() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___confidence_0)); }
	inline int32_t get_confidence_0() const { return ___confidence_0; }
	inline int32_t* get_address_of_confidence_0() { return &___confidence_0; }
	inline void set_confidence_0(int32_t value)
	{
		___confidence_0 = value;
	}

	inline static int32_t get_offset_of_semanticMeanings_1() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___semanticMeanings_1)); }
	inline SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* get_semanticMeanings_1() const { return ___semanticMeanings_1; }
	inline SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D** get_address_of_semanticMeanings_1() { return &___semanticMeanings_1; }
	inline void set_semanticMeanings_1(SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* value)
	{
		___semanticMeanings_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___semanticMeanings_1), (void*)value);
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_2), (void*)value);
	}

	inline static int32_t get_offset_of_phraseStartTime_3() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___phraseStartTime_3)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_phraseStartTime_3() const { return ___phraseStartTime_3; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_phraseStartTime_3() { return &___phraseStartTime_3; }
	inline void set_phraseStartTime_3(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___phraseStartTime_3 = value;
	}

	inline static int32_t get_offset_of_phraseDuration_4() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___phraseDuration_4)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_phraseDuration_4() const { return ___phraseDuration_4; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_phraseDuration_4() { return &___phraseDuration_4; }
	inline void set_phraseDuration_4(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___phraseDuration_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshaled_pinvoke
{
	int32_t ___confidence_0;
	SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke* ___semanticMeanings_1;
	char* ___text_2;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime_3;
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration_4;
};
// Native definition for COM marshalling of UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshaled_com
{
	int32_t ___confidence_0;
	SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com* ___semanticMeanings_1;
	Il2CppChar* ___text_2;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime_3;
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration_4;
};

// UnityEngine.Windows.WebCam.PhotoCapture_PhotoCaptureResult
struct  PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900 
{
public:
	// UnityEngine.Windows.WebCam.PhotoCapture_CaptureResultType UnityEngine.Windows.WebCam.PhotoCapture_PhotoCaptureResult::resultType
	int32_t ___resultType_0;
	// System.Int64 UnityEngine.Windows.WebCam.PhotoCapture_PhotoCaptureResult::hResult
	int64_t ___hResult_1;

public:
	inline static int32_t get_offset_of_resultType_0() { return static_cast<int32_t>(offsetof(PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900, ___resultType_0)); }
	inline int32_t get_resultType_0() const { return ___resultType_0; }
	inline int32_t* get_address_of_resultType_0() { return &___resultType_0; }
	inline void set_resultType_0(int32_t value)
	{
		___resultType_0 = value;
	}

	inline static int32_t get_offset_of_hResult_1() { return static_cast<int32_t>(offsetof(PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900, ___hResult_1)); }
	inline int64_t get_hResult_1() const { return ___hResult_1; }
	inline int64_t* get_address_of_hResult_1() { return &___hResult_1; }
	inline void set_hResult_1(int64_t value)
	{
		___hResult_1 = value;
	}
};


// UnityEngine.Windows.WebCam.PhotoCaptureFrame
struct  PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.WebCam.PhotoCaptureFrame::m_NativePtr
	intptr_t ___m_NativePtr_0;
	// System.Int32 UnityEngine.Windows.WebCam.PhotoCaptureFrame::<dataLength>k__BackingField
	int32_t ___U3CdataLengthU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Windows.WebCam.PhotoCaptureFrame::<hasLocationData>k__BackingField
	bool ___U3ChasLocationDataU3Ek__BackingField_2;
	// UnityEngine.Windows.WebCam.CapturePixelFormat UnityEngine.Windows.WebCam.PhotoCaptureFrame::<pixelFormat>k__BackingField
	int32_t ___U3CpixelFormatU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}

	inline static int32_t get_offset_of_U3CdataLengthU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D, ___U3CdataLengthU3Ek__BackingField_1)); }
	inline int32_t get_U3CdataLengthU3Ek__BackingField_1() const { return ___U3CdataLengthU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CdataLengthU3Ek__BackingField_1() { return &___U3CdataLengthU3Ek__BackingField_1; }
	inline void set_U3CdataLengthU3Ek__BackingField_1(int32_t value)
	{
		___U3CdataLengthU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3ChasLocationDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D, ___U3ChasLocationDataU3Ek__BackingField_2)); }
	inline bool get_U3ChasLocationDataU3Ek__BackingField_2() const { return ___U3ChasLocationDataU3Ek__BackingField_2; }
	inline bool* get_address_of_U3ChasLocationDataU3Ek__BackingField_2() { return &___U3ChasLocationDataU3Ek__BackingField_2; }
	inline void set_U3ChasLocationDataU3Ek__BackingField_2(bool value)
	{
		___U3ChasLocationDataU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CpixelFormatU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D, ___U3CpixelFormatU3Ek__BackingField_3)); }
	inline int32_t get_U3CpixelFormatU3Ek__BackingField_3() const { return ___U3CpixelFormatU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CpixelFormatU3Ek__BackingField_3() { return &___U3CpixelFormatU3Ek__BackingField_3; }
	inline void set_U3CpixelFormatU3Ek__BackingField_3(int32_t value)
	{
		___U3CpixelFormatU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.Windows.WebCam.VideoCapture_VideoCaptureResult
struct  VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A 
{
public:
	// UnityEngine.Windows.WebCam.VideoCapture_CaptureResultType UnityEngine.Windows.WebCam.VideoCapture_VideoCaptureResult::resultType
	int32_t ___resultType_0;
	// System.Int64 UnityEngine.Windows.WebCam.VideoCapture_VideoCaptureResult::hResult
	int64_t ___hResult_1;

public:
	inline static int32_t get_offset_of_resultType_0() { return static_cast<int32_t>(offsetof(VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A, ___resultType_0)); }
	inline int32_t get_resultType_0() const { return ___resultType_0; }
	inline int32_t* get_address_of_resultType_0() { return &___resultType_0; }
	inline void set_resultType_0(int32_t value)
	{
		___resultType_0 = value;
	}

	inline static int32_t get_offset_of_hResult_1() { return static_cast<int32_t>(offsetof(VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A, ___hResult_1)); }
	inline int64_t get_hResult_1() const { return ___hResult_1; }
	inline int64_t* get_address_of_hResult_1() { return &___hResult_1; }
	inline void set_hResult_1(int64_t value)
	{
		___hResult_1 = value;
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Boolean>
struct  Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.WSA.AppCallbackItem
struct  AppCallbackItem_tC11DC3EB621654A77E58E02B69E0CDAF342EF11F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.WSA.WindowActivated
struct  WindowActivated_t5EB8FED49C5DF18D49E17A7BF037B090553E8732  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.WSA.WindowSizeChanged
struct  WindowSizeChanged_tACBE6B53689EC2CE90F98B35CE37437AF17474E0  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.DictationRecognizer_DictationCompletedDelegate
struct  DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.DictationRecognizer_DictationErrorHandler
struct  DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.DictationRecognizer_DictationHypothesisDelegate
struct  DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.DictationRecognizer_DictationResultDelegate
struct  DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.PhraseRecognitionSystem_ErrorDelegate
struct  ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.PhraseRecognitionSystem_StatusDelegate
struct  StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.PhraseRecognizer_PhraseRecognizedDelegate
struct  PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.WebCam.PhotoCapture_OnCaptureResourceCreatedCallback
struct  OnCaptureResourceCreatedCallback_t00CFC0538D5EEAC5566A2694A721B14C4E4D8C71  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.WebCam.PhotoCapture_OnCapturedToDiskCallback
struct  OnCapturedToDiskCallback_t79DD83842A2A9CB542DEC61160166D74CC342470  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.WebCam.PhotoCapture_OnCapturedToMemoryCallback
struct  OnCapturedToMemoryCallback_tE28D3212036B829F321DCA04C358D61FDE0B47B2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.WebCam.PhotoCapture_OnPhotoModeStartedCallback
struct  OnPhotoModeStartedCallback_t841E0EF9DDB4D172D4C8C7988B0C6E6E58E5832C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.WebCam.PhotoCapture_OnPhotoModeStoppedCallback
struct  OnPhotoModeStoppedCallback_tE546DABB1910B8CD82448A1D7C3311463F9EC238  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.WebCam.VideoCapture_OnStartedRecordingVideoCallback
struct  OnStartedRecordingVideoCallback_tCE5B6ECCEF3D04ABD663876B05D3B17509F90581  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.WebCam.VideoCapture_OnStoppedRecordingVideoCallback
struct  OnStoppedRecordingVideoCallback_tFC1F4FA389F16A93BBC8A2128ACAFD3C6AAA763A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.WebCam.VideoCapture_OnVideoCaptureResourceCreatedCallback
struct  OnVideoCaptureResourceCreatedCallback_t71BBEF80D26688A87A1142D752CCEF22C773DD2C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.WebCam.VideoCapture_OnVideoModeStartedCallback
struct  OnVideoModeStartedCallback_t02A8F71807C17735B0CA19F94FF41F6E5DD7260A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.WebCam.VideoCapture_OnVideoModeStoppedCallback
struct  OnVideoModeStoppedCallback_tE545030F7C008F72708C7647CC3F464FB4B2CA80  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
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
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// UnityEngine.Windows.Speech.SemanticMeaning[]
struct SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C  m_Items[1];

public:
	inline SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___values_1), (void*)NULL);
		#endif
	}
	inline SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___values_1), (void*)NULL);
		#endif
	}
};
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

IL2CPP_EXTERN_C void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_pinvoke(const SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C& unmarshaled, SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_pinvoke_back(const SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke& marshaled, SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C& unmarshaled);
IL2CPP_EXTERN_C void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_pinvoke_cleanup(SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_com(const SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C& unmarshaled, SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_com_back(const SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com& marshaled, SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C& unmarshaled);
IL2CPP_EXTERN_C void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_com_cleanup(SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshal_pinvoke(const PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777& unmarshaled, PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshal_pinvoke_back(const PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshaled_pinvoke& marshaled, PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777& unmarshaled);
IL2CPP_EXTERN_C void PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshal_pinvoke_cleanup(PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshal_pinvoke(const VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881& unmarshaled, VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshal_pinvoke_back(const VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshaled_pinvoke& marshaled, VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881& unmarshaled);
IL2CPP_EXTERN_C void VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshal_pinvoke_cleanup(VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshaled_pinvoke& marshaled);

// !0 System.Func`1<System.Boolean>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_1_Invoke_mFA91B93A5C91290D4A3C475C4117CA05B43419E6_gshared (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mD0E32FFEA8E13AF0454470323C18CA9475986570_gshared (Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D * __this, const RuntimeMethod* method);

// System.Void UnityEngine.WSA.WindowSizeChanged::Invoke(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowSizeChanged_Invoke_m9F08ABFF9541A7973E2DA36E1F69EE7C13405D56 (WindowSizeChanged_tACBE6B53689EC2CE90F98B35CE37437AF17474E0 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.WSA.WindowActivated::Invoke(UnityEngine.WSA.WindowActivationState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowActivated_Invoke_m7554990F9F9B805278AA9A0EBEB4F16E1568B9E9 (WindowActivated_t5EB8FED49C5DF18D49E17A7BF037B090553E8732 * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Void UnityEngine.WSA.Application::InternalInvokeOnUIThread(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_InternalInvokeOnUIThread_m2722E8E60AD81E5A587F65A6892D43054DD2AFE3 (RuntimeObject * ___item0, bool ___waitUntilDone1, const RuntimeMethod* method);
// System.Void UnityEngine.YieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstruction__ctor_mA72AD367FB081E0C2493649C6E8F7CFC592AB620 (YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03 (const RuntimeMethod* method);
// System.Single UnityEngine.WaitForSecondsRealtime::get_waitTime()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float WaitForSecondsRealtime_get_waitTime_m6D1B0EDEAFA3DBBBFE1A0CC2D372BAB8EA82E2FB_inline (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_m06E2B5BC73763FE2E734FAA600D567701EA21EC5 (CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::set_waitTime(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WaitForSecondsRealtime_set_waitTime_m867F4482BEE354E33A6FD9191344D74B9CC8C790_inline (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * __this, float ___value0, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
inline bool Func_1_Invoke_mFA91B93A5C91290D4A3C475C4117CA05B43419E6 (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *, const RuntimeMethod*))Func_1_Invoke_mFA91B93A5C91290D4A3C475C4117CA05B43419E6_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// UnityEngine.Windows.Speech.SpeechSystemStatus UnityEngine.Windows.Speech.DictationRecognizer::GetStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DictationRecognizer_GetStatus_m4264BBF57EFDAFA41435EDD52F9807569B69D87B (intptr_t ___self0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::SetAutoSilenceTimeoutSeconds(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_SetAutoSilenceTimeoutSeconds_mD15C9697C7D29B755B75B9FEF51C435EB703FFFF (intptr_t ___self0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::SetInitialSilenceTimeoutSeconds(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_SetInitialSilenceTimeoutSeconds_m36CAD7450B9D1CF3EC98C184C8DCD64BB4D05ED4 (intptr_t ___self0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::.ctor(UnityEngine.Windows.Speech.ConfidenceLevel,UnityEngine.Windows.Speech.DictationTopicConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer__ctor_mBDDCC296FCC43884D7F5199ACBB0BF0BAEECEBD4 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, int32_t ___minimumConfidence0, int32_t ___topic1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Windows.Speech.DictationRecognizer::Create(System.Object,UnityEngine.Windows.Speech.ConfidenceLevel,UnityEngine.Windows.Speech.DictationTopicConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DictationRecognizer_Create_m6CF3800F2BAAD28907CC342659B05D9790D2E37C (RuntimeObject * ___self0, int32_t ___minimumConfidence1, int32_t ___topicConstraint2, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::DestroyThreaded(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_DestroyThreaded_mF5135054C861CE5BEA6BCAC18F205A4833432CCA (intptr_t ___self0, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Start(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_Start_mA60400B51B760BFE2058207CEACEB32E865D6A0F (intptr_t ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Stop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_Stop_mB84ADB9BC2E88467311EC8703A97C94736040E06 (intptr_t ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_Destroy_mE8E7F0520867B50D3461F170C60826C140628664 (intptr_t ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationHypothesisDelegate_Invoke_m13B00B4DADC3F35EF3655EFEA69A68917609CD53 (DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate::Invoke(System.String,UnityEngine.Windows.Speech.ConfidenceLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationResultDelegate_Invoke_mC2BCB095B651CD4DE23FED7A0A0C92A6684A5C91 (DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * __this, String_t* ___text0, int32_t ___confidence1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate::Invoke(UnityEngine.Windows.Speech.DictationCompletionCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationCompletedDelegate_Invoke_m393D08D4E4C4BDC07D2C1086678A3BC34ADD5C37 (DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * __this, int32_t ___cause0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler::Invoke(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationErrorHandler_Invoke_mC67E23094C88F1042656F92133FE2C9E32FFA52F (DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer__ctor_m619F646A2011E22E1E518837581777B39203F00D (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.KeywordRecognizer::set_Keywords(System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void KeywordRecognizer_set_Keywords_m11AEB567D4747C00936402C29FAE38BB22621FEB_inline (KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Windows.Speech.PhraseRecognizer::CreateFromKeywords(System.Object,System.String[],UnityEngine.Windows.Speech.ConfidenceLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PhraseRecognizer_CreateFromKeywords_mA27576C25C17DE2334BD1B4F52A6A15B9DD12B90 (RuntimeObject * ___self0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___keywords1, int32_t ___minimumConfidence2, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem/ErrorDelegate::Invoke(UnityEngine.Windows.Speech.SpeechError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorDelegate_Invoke_m448BAD63228E49AEB609A60052F1E05C93853B17 (ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * __this, int32_t ___errorCode0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem/StatusDelegate::Invoke(UnityEngine.Windows.Speech.SpeechSystemStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusDelegate_Invoke_mBA807D0015000ABE36C5B9B6F847D2882D3B26ED (StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * __this, int32_t ___status0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::.ctor(System.String,UnityEngine.Windows.Speech.ConfidenceLevel,UnityEngine.Windows.Speech.SemanticMeaning[],System.DateTime,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizedEventArgs__ctor_m362E97ADA890AE34C5E062B0FEED70E46E110ECE (PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD * __this, String_t* ___text0, int32_t ___confidence1, SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* ___semanticMeanings2, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime3, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration4, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::DestroyThreaded(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_DestroyThreaded_m4EA9D31CE89972CB9C6EC20007ED2C6C8FCAABE0 (intptr_t ___recognizer0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Start_Internal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Start_Internal_m5B78A131E3354EA031F62F20974A9443FABE8656 (intptr_t ___recognizer0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Stop_Internal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Stop_Internal_m4ACCEEEFF98CEA96092EA97CD255505FEF04F994 (intptr_t ___recognizer0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Destroy_m9579A27170BCBB3BDB99C364D5493B6B7C4E5B2D (intptr_t ___recognizer0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Windows.Speech.PhraseRecognizer::IsRunning_Internal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhraseRecognizer_IsRunning_Internal_mDA7886AE7A0007B621A8CD15971202FF10E176BE (intptr_t ___recognizer0, const RuntimeMethod* method);
// System.DateTime System.DateTime::FromFileTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_FromFileTime_m48DCF83C7472940505DE71F244BC072E98FA5676 (int64_t ___fileTime0, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  TimeSpan_FromTicks_mDF1F429F18294D57DE2739DBD2F33637E4E5F8F4 (int64_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate::Invoke(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizedDelegate_Invoke_m6136E32699B51A86EA0C594D338C7EC29F493478 (PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * __this, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  ___args0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t ___value0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m81EC77200D75146384415713DE908296720CFD95 (String_t* __this, Il2CppChar* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCapture/OnCaptureResourceCreatedCallback::Invoke(UnityEngine.Windows.WebCam.PhotoCapture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCaptureResourceCreatedCallback_Invoke_m787BA10D9B4F55B5015FF0790E904D3822357A1A (OnCaptureResourceCreatedCallback_t00CFC0538D5EEAC5566A2694A721B14C4E4D8C71 * __this, PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 * ___captureObject0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCapture::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCapture__ctor_mD7209B9F37CC0D345E634824E5792EB186EED544 (PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 * __this, intptr_t ___nativeCaptureObject0, const RuntimeMethod* method);
// UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult UnityEngine.Windows.WebCam.PhotoCapture::MakeCaptureResult(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  PhotoCapture_MakeCaptureResult_m30A1524DDA706A094516C9C1E191367B8194B2AA (int64_t ___hResult0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStartedCallback::Invoke(UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPhotoModeStartedCallback_Invoke_m55517FF76661702C2833E956934524EDBBF5A7C1 (OnPhotoModeStartedCallback_t841E0EF9DDB4D172D4C8C7988B0C6E6E58E5832C * __this, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStoppedCallback::Invoke(UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPhotoModeStoppedCallback_Invoke_m48D94A324C05FC097090E2C876AF6B4BC8EE13EE (OnPhotoModeStoppedCallback_tE546DABB1910B8CD82448A1D7C3311463F9EC238 * __this, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCapture/OnCapturedToDiskCallback::Invoke(UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCapturedToDiskCallback_Invoke_m9117393C833DA86181047DD79B92317B940AEB06 (OnCapturedToDiskCallback_t79DD83842A2A9CB542DEC61160166D74CC342470 * __this, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCaptureFrame::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCaptureFrame__ctor_m2200B47E027A635C22A6822CE3548BBFD38CFF01 (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, intptr_t ___nativePtr0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCapture/OnCapturedToMemoryCallback::Invoke(UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult,UnityEngine.Windows.WebCam.PhotoCaptureFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCapturedToMemoryCallback_Invoke_m2382646696D4D08D880B9621E40F4E7CD969498E (OnCapturedToMemoryCallback_tE28D3212036B829F321DCA04C358D61FDE0B47B2 * __this, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  ___result0, PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * ___photoCaptureFrame1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCapture::Dispose_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCapture_Dispose_Internal_m88BD45BC25F5336BF81ECF697CC14F5FC04D8234 (PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCapture::DisposeThreaded_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCapture_DisposeThreaded_Internal_m2ECAF91B1E62B4B392A1CAA7953C5A599C6115B9 (PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Windows.WebCam.PhotoCaptureFrame::GetDataLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotoCaptureFrame_GetDataLength_m2D4FC19B5BEED3478C681DD941F7018F142788DB (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCaptureFrame::set_dataLength(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PhotoCaptureFrame_set_dataLength_m708C3983B97B7470A4E7A4692A590E5338465A5B_inline (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Windows.WebCam.PhotoCaptureFrame::GetHasLocationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotoCaptureFrame_GetHasLocationData_m01BDCAD79360F3BAF759FF2A9EB2963C480BEF42 (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCaptureFrame::set_hasLocationData(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PhotoCaptureFrame_set_hasLocationData_mA2E608666F3D923EEBCFFD1F2A8534BFAC938CD9_inline (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Windows.WebCam.CapturePixelFormat UnityEngine.Windows.WebCam.PhotoCaptureFrame::GetCapturePixelFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotoCaptureFrame_GetCapturePixelFormat_mD1DED87FE85284782AE1533390314119BD1B5C6E (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCaptureFrame::set_pixelFormat(UnityEngine.Windows.WebCam.CapturePixelFormat)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PhotoCaptureFrame_set_pixelFormat_m956028BE24FB4646618B56A24CDB9559026B78D4_inline (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Windows.WebCam.PhotoCaptureFrame::get_dataLength()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t PhotoCaptureFrame_get_dataLength_m2169CBC908EF8673C1876952BCB9C1642706849C_inline (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, const RuntimeMethod* method);
// System.Void System.GC::AddMemoryPressure(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_AddMemoryPressure_mF48FE7CA2DC4D23FDD5B7B0A7D0B6C1C598771CE (int64_t ___bytesAllocated0, const RuntimeMethod* method);
// System.Void System.GC::RemoveMemoryPressure(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_RemoveMemoryPressure_mBA7395DAA88C4F1656648172EE98A14F2E726704 (int64_t ___bytesAllocated0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCaptureFrame::Dispose_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCaptureFrame_Dispose_Internal_m24C9E95622D5362B90B3B9231F3E773E4C8B5ECB (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCaptureFrame::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCaptureFrame_Cleanup_m4F7B4E31415ABD61458F394F09597B9CE31C9E0C (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.VideoCapture/OnVideoCaptureResourceCreatedCallback::Invoke(UnityEngine.Windows.WebCam.VideoCapture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVideoCaptureResourceCreatedCallback_Invoke_mCBAB47A08804FC4A040E3E6D0DB626A3C3471182 (OnVideoCaptureResourceCreatedCallback_t71BBEF80D26688A87A1142D752CCEF22C773DD2C * __this, VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 * ___captureObject0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.VideoCapture::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCapture__ctor_m0FE3A72AA0BE57264435FD94F28228F5A82E15FB (VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 * __this, intptr_t ___nativeCaptureObject0, const RuntimeMethod* method);
// UnityEngine.Windows.WebCam.VideoCapture/VideoCaptureResult UnityEngine.Windows.WebCam.VideoCapture::MakeCaptureResult(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  VideoCapture_MakeCaptureResult_m8E3FDAF1FB4B3F56197D02ECB1E94BA16ED01524 (int64_t ___hResult0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.VideoCapture/OnVideoModeStartedCallback::Invoke(UnityEngine.Windows.WebCam.VideoCapture/VideoCaptureResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVideoModeStartedCallback_Invoke_mB9A2828F520201F753009139BDB2C193A38687A0 (OnVideoModeStartedCallback_t02A8F71807C17735B0CA19F94FF41F6E5DD7260A * __this, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.VideoCapture/OnVideoModeStoppedCallback::Invoke(UnityEngine.Windows.WebCam.VideoCapture/VideoCaptureResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVideoModeStoppedCallback_Invoke_m2CFBF6763FCED9C9201834019A962EACF2F1D088 (OnVideoModeStoppedCallback_tE545030F7C008F72708C7647CC3F464FB4B2CA80 * __this, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.VideoCapture/OnStartedRecordingVideoCallback::Invoke(UnityEngine.Windows.WebCam.VideoCapture/VideoCaptureResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartedRecordingVideoCallback_Invoke_mE31381DAE5B30D92A9186FA747C5AC023048114D (OnStartedRecordingVideoCallback_tCE5B6ECCEF3D04ABD663876B05D3B17509F90581 * __this, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.VideoCapture/OnStoppedRecordingVideoCallback::Invoke(UnityEngine.Windows.WebCam.VideoCapture/VideoCaptureResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStoppedRecordingVideoCallback_Invoke_mA23DA19077DFC878FC21A80106550E09E514EDF4 (OnStoppedRecordingVideoCallback_tFC1F4FA389F16A93BBC8A2128ACAFD3C6AAA763A * __this, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.VideoCapture::Dispose_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCapture_Dispose_Internal_m544E2E76F43A934DA00C58277E89C27E96A6F952 (VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.VideoCapture::DisposeThreaded_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCapture_DisposeThreaded_Internal_m731C1AD152F8A05604EC9B286FA69C1591A71068 (VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.String System.ObsoleteAttribute::get_Message()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ObsoleteAttribute_get_Message_mFFBC74B34F780F3636E5A5FE9894302C356C53F3_inline (ObsoleteAttribute_tDAE6245D460079868ABE89327A61FC76E13F2170 * __this, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mA9A0117D68338238E51E5928CDA8EB3DC9DA497B (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String System.Reflection.AssemblyName::get_Name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AssemblyName_get_Name_m6EA5C18D2FF050D3AF58D4A21ED39D161DFF218B_inline (AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * __this, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m76C37E3915E802044761572007B8FB0635995F59 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
inline void Stack_1__ctor_mD0E32FFEA8E13AF0454470323C18CA9475986570 (Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D *, const RuntimeMethod*))Stack_1__ctor_mD0E32FFEA8E13AF0454470323C18CA9475986570_gshared)(__this, method);
}
// System.Single System.Threading.Interlocked::CompareExchange(System.Single&,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Interlocked_CompareExchange_m2C6E1F976D009AB3858428E90B8F99F98F08155D (float* ___location10, float ___value1, float ___comparand2, const RuntimeMethod* method);
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeInferenceRuleAttribute__ctor_m34920F979AA071F4973CEEEF6F91B5B6A53E5765 (TypeInferenceRuleAttribute_tEB3BA6FDE6D6817FD33E2620200007EB9730214B * __this, String_t* ___rule0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0 (Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AppCallbackItem_tC11DC3EB621654A77E58E02B69E0CDAF342EF11F (AppCallbackItem_tC11DC3EB621654A77E58E02B69E0CDAF342EF11F * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.WSA.AppCallbackItem::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCallbackItem__ctor_mE90691AA43227387EBF75142C516E2A1AC71D24E (AppCallbackItem_tC11DC3EB621654A77E58E02B69E0CDAF342EF11F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.WSA.AppCallbackItem::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCallbackItem_Invoke_mB73AF8AABDDC1560D83271B00E128EABB07C8A05 (AppCallbackItem_tC11DC3EB621654A77E58E02B69E0CDAF342EF11F * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.WSA.AppCallbackItem::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppCallbackItem_BeginInvoke_mBF46CF9A9CFA5DEAAE2A6837B0BA6F64F8267456 (AppCallbackItem_tC11DC3EB621654A77E58E02B69E0CDAF342EF11F * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.WSA.AppCallbackItem::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCallbackItem_EndInvoke_m798D576C889813C948FEDFA677D7B8082F23D6DA (AppCallbackItem_tC11DC3EB621654A77E58E02B69E0CDAF342EF11F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.WSA.Application::InvokeWindowSizeChangedEvent(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_InvokeWindowSizeChangedEvent_m50F2FC0D2A8F2A0510B56D81B7FBBE5FED31B54F (int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Application_InvokeWindowSizeChangedEvent_m50F2FC0D2A8F2A0510B56D81B7FBBE5FED31B54F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		WindowSizeChanged_tACBE6B53689EC2CE90F98B35CE37437AF17474E0 * L_0 = ((Application_tE2F9F209A836BEC8F432DEBB5A290962FC5C050C_StaticFields*)il2cpp_codegen_static_fields_for(Application_tE2F9F209A836BEC8F432DEBB5A290962FC5C050C_il2cpp_TypeInfo_var))->get_windowSizeChanged_0();
		V_0 = (bool)((!(((RuntimeObject*)(WindowSizeChanged_tACBE6B53689EC2CE90F98B35CE37437AF17474E0 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		WindowSizeChanged_tACBE6B53689EC2CE90F98B35CE37437AF17474E0 * L_2 = ((Application_tE2F9F209A836BEC8F432DEBB5A290962FC5C050C_StaticFields*)il2cpp_codegen_static_fields_for(Application_tE2F9F209A836BEC8F432DEBB5A290962FC5C050C_il2cpp_TypeInfo_var))->get_windowSizeChanged_0();
		int32_t L_3 = ___width0;
		int32_t L_4 = ___height1;
		NullCheck(L_2);
		WindowSizeChanged_Invoke_m9F08ABFF9541A7973E2DA36E1F69EE7C13405D56(L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void UnityEngine.WSA.Application::InvokeWindowActivatedEvent(UnityEngine.WSA.WindowActivationState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_InvokeWindowActivatedEvent_mC3F32526F9F0DF2B7E1C4C0F845DD78F6D98333C (int32_t ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Application_InvokeWindowActivatedEvent_mC3F32526F9F0DF2B7E1C4C0F845DD78F6D98333C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		WindowActivated_t5EB8FED49C5DF18D49E17A7BF037B090553E8732 * L_0 = ((Application_tE2F9F209A836BEC8F432DEBB5A290962FC5C050C_StaticFields*)il2cpp_codegen_static_fields_for(Application_tE2F9F209A836BEC8F432DEBB5A290962FC5C050C_il2cpp_TypeInfo_var))->get_windowActivated_1();
		V_0 = (bool)((!(((RuntimeObject*)(WindowActivated_t5EB8FED49C5DF18D49E17A7BF037B090553E8732 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		WindowActivated_t5EB8FED49C5DF18D49E17A7BF037B090553E8732 * L_2 = ((Application_tE2F9F209A836BEC8F432DEBB5A290962FC5C050C_StaticFields*)il2cpp_codegen_static_fields_for(Application_tE2F9F209A836BEC8F432DEBB5A290962FC5C050C_il2cpp_TypeInfo_var))->get_windowActivated_1();
		int32_t L_3 = ___state0;
		NullCheck(L_2);
		WindowActivated_Invoke_m7554990F9F9B805278AA9A0EBEB4F16E1568B9E9(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.WSA.Application::InvokeOnUIThread(UnityEngine.WSA.AppCallbackItem,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_InvokeOnUIThread_m9421EA110D48B760E763CE162AF7099DD0B43847 (AppCallbackItem_tC11DC3EB621654A77E58E02B69E0CDAF342EF11F * ___item0, bool ___waitUntilDone1, const RuntimeMethod* method)
{
	{
		AppCallbackItem_tC11DC3EB621654A77E58E02B69E0CDAF342EF11F * L_0 = ___item0;
		bool L_1 = ___waitUntilDone1;
		Application_InternalInvokeOnUIThread_m2722E8E60AD81E5A587F65A6892D43054DD2AFE3(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WSA.Application::InternalInvokeOnUIThread(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_InternalInvokeOnUIThread_m2722E8E60AD81E5A587F65A6892D43054DD2AFE3 (RuntimeObject * ___item0, bool ___waitUntilDone1, const RuntimeMethod* method)
{
	typedef void (*Application_InternalInvokeOnUIThread_m2722E8E60AD81E5A587F65A6892D43054DD2AFE3_ftn) (RuntimeObject *, bool);
	static Application_InternalInvokeOnUIThread_m2722E8E60AD81E5A587F65A6892D43054DD2AFE3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_InternalInvokeOnUIThread_m2722E8E60AD81E5A587F65A6892D43054DD2AFE3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WSA.Application::InternalInvokeOnUIThread(System.Object,System.Boolean)");
	_il2cpp_icall_func(___item0, ___waitUntilDone1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WindowActivated_t5EB8FED49C5DF18D49E17A7BF037B090553E8732 (WindowActivated_t5EB8FED49C5DF18D49E17A7BF037B090553E8732 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___state0);

}
// System.Void UnityEngine.WSA.WindowActivated::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowActivated__ctor_m3D0D23A1D15F443B204314ED082DF84F9BC4C0DA (WindowActivated_t5EB8FED49C5DF18D49E17A7BF037B090553E8732 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.WSA.WindowActivated::Invoke(UnityEngine.WSA.WindowActivationState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowActivated_Invoke_m7554990F9F9B805278AA9A0EBEB4F16E1568B9E9 (WindowActivated_t5EB8FED49C5DF18D49E17A7BF037B090553E8732 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___state0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___state0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___state0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___state0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.WSA.WindowActivated::BeginInvoke(UnityEngine.WSA.WindowActivationState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowActivated_BeginInvoke_m3C951527286C852225A315373E68FFCBBB450DB2 (WindowActivated_t5EB8FED49C5DF18D49E17A7BF037B090553E8732 * __this, int32_t ___state0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowActivated_BeginInvoke_m3C951527286C852225A315373E68FFCBBB450DB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(WindowActivationState_t567A72E78C9C4696E8C2388C355E3F3ADCCCFF0E_il2cpp_TypeInfo_var, &___state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.WSA.WindowActivated::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowActivated_EndInvoke_m4E7893889FE2219A2D84AFDBE7E9C944C3EB3E8C (WindowActivated_t5EB8FED49C5DF18D49E17A7BF037B090553E8732 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WindowSizeChanged_tACBE6B53689EC2CE90F98B35CE37437AF17474E0 (WindowSizeChanged_tACBE6B53689EC2CE90F98B35CE37437AF17474E0 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___width0, ___height1);

}
// System.Void UnityEngine.WSA.WindowSizeChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowSizeChanged__ctor_m444DF8BAC896BC2E935E105844935CE8567DA43A (WindowSizeChanged_tACBE6B53689EC2CE90F98B35CE37437AF17474E0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.WSA.WindowSizeChanged::Invoke(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowSizeChanged_Invoke_m9F08ABFF9541A7973E2DA36E1F69EE7C13405D56 (WindowSizeChanged_tACBE6B53689EC2CE90F98B35CE37437AF17474E0 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___width0, ___height1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___width0, ___height1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___width0, ___height1);
					else
						GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___width0, ___height1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___width0, ___height1);
					else
						VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___width0, ___height1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___width0) - 1), ___height1, targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___width0, ___height1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.WSA.WindowSizeChanged::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowSizeChanged_BeginInvoke_m20CE5F7C1DB14C91F91C065FF89F2BE60EED31A9 (WindowSizeChanged_tACBE6B53689EC2CE90F98B35CE37437AF17474E0 * __this, int32_t ___width0, int32_t ___height1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowSizeChanged_BeginInvoke_m20CE5F7C1DB14C91F91C065FF89F2BE60EED31A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___width0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___height1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.WSA.WindowSizeChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowSizeChanged_EndInvoke_m1A5E565B0598B3DAFE1E53F299295D0A404BEAA6 (WindowSizeChanged_tACBE6B53689EC2CE90F98B35CE37437AF17474E0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m6CDB79476A4A84CEC62947D36ADED96E907BA20B (WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA * __this, const RuntimeMethod* method)
{
	{
		YieldInstruction__ctor_mA72AD367FB081E0C2493649C6E8F7CFC592AB620(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForFixedUpdate__ctor_mDEBC2E729EB331081476991F738E1759F067F402 (WaitForFixedUpdate_t8801328F075019AF6B6150B20EC343935A29FF97 * __this, const RuntimeMethod* method)
{
	{
		YieldInstruction__ctor_mA72AD367FB081E0C2493649C6E8F7CFC592AB620(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
IL2CPP_EXTERN_C void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke(const WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8& unmarshaled, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.get_m_Seconds_0();
}
IL2CPP_EXTERN_C void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke_back(const WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke& marshaled, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8& unmarshaled)
{
	float unmarshaled_m_Seconds_temp_0 = 0.0f;
	unmarshaled_m_Seconds_temp_0 = marshaled.___m_Seconds_0;
	unmarshaled.set_m_Seconds_0(unmarshaled_m_Seconds_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
IL2CPP_EXTERN_C void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke_cleanup(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
IL2CPP_EXTERN_C void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_com(const WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8& unmarshaled, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.get_m_Seconds_0();
}
IL2CPP_EXTERN_C void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_com_back(const WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com& marshaled, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8& unmarshaled)
{
	float unmarshaled_m_Seconds_temp_0 = 0.0f;
	unmarshaled_m_Seconds_temp_0 = marshaled.___m_Seconds_0;
	unmarshaled.set_m_Seconds_0(unmarshaled_m_Seconds_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
IL2CPP_EXTERN_C void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_com_cleanup(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method)
{
	{
		YieldInstruction__ctor_mA72AD367FB081E0C2493649C6E8F7CFC592AB620(__this, /*hidden argument*/NULL);
		float L_0 = ___seconds0;
		__this->set_m_Seconds_0(L_0);
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
// System.Single UnityEngine.WaitForSecondsRealtime::get_waitTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WaitForSecondsRealtime_get_waitTime_m6D1B0EDEAFA3DBBBFE1A0CC2D372BAB8EA82E2FB (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CwaitTimeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.WaitForSecondsRealtime::set_waitTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime_set_waitTime_m867F4482BEE354E33A6FD9191344D74B9CC8C790 (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CwaitTimeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityEngine.WaitForSecondsRealtime::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForSecondsRealtime_get_keepWaiting_mC257FFC53D5734250B919A8B6BE460A6D8A7CD99 (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		float L_0 = __this->get_m_WaitUntilTime_1();
		V_1 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		float L_2 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		float L_3 = WaitForSecondsRealtime_get_waitTime_m6D1B0EDEAFA3DBBBFE1A0CC2D372BAB8EA82E2FB_inline(__this, /*hidden argument*/NULL);
		__this->set_m_WaitUntilTime_1(((float)il2cpp_codegen_add((float)L_2, (float)L_3)));
	}

IL_0026:
	{
		float L_4 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		float L_5 = __this->get_m_WaitUntilTime_1();
		V_0 = (bool)((((float)L_4) < ((float)L_5))? 1 : 0);
		bool L_6 = V_0;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		__this->set_m_WaitUntilTime_1((-1.0f));
	}

IL_0049:
	{
		bool L_8 = V_0;
		V_3 = L_8;
		goto IL_004d;
	}

IL_004d:
	{
		bool L_9 = V_3;
		return L_9;
	}
}
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m775503EC1F4963D8E5BBDD7989B40F6A000E0525 (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * __this, float ___time0, const RuntimeMethod* method)
{
	{
		__this->set_m_WaitUntilTime_1((-1.0f));
		CustomYieldInstruction__ctor_m06E2B5BC73763FE2E734FAA600D567701EA21EC5(__this, /*hidden argument*/NULL);
		float L_0 = ___time0;
		WaitForSecondsRealtime_set_waitTime_m867F4482BEE354E33A6FD9191344D74B9CC8C790_inline(__this, L_0, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.WaitUntil::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitUntil_get_keepWaiting_m01FE040DFAAA66F0664092597CE79FCE25BD9122 (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaitUntil_get_keepWaiting_m01FE040DFAAA66F0664092597CE79FCE25BD9122_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_0 = __this->get_m_Predicate_0();
		NullCheck(L_0);
		bool L_1 = Func_1_Invoke_mFA91B93A5C91290D4A3C475C4117CA05B43419E6(L_0, /*hidden argument*/Func_1_Invoke_mFA91B93A5C91290D4A3C475C4117CA05B43419E6_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1 (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * __this, Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___predicate0, const RuntimeMethod* method)
{
	{
		CustomYieldInstruction__ctor_m06E2B5BC73763FE2E734FAA600D567701EA21EC5(__this, /*hidden argument*/NULL);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_0 = ___predicate0;
		__this->set_m_Predicate_0(L_0);
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
// System.Boolean UnityEngine.WaitWhile::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitWhile_get_keepWaiting_m071555AC3659D1D159FE35CC65789DF5E3C4AE5F (WaitWhile_t26AA4EE3C438C96A750FFE1C8FA5C3FD66B8BB59 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaitWhile_get_keepWaiting_m071555AC3659D1D159FE35CC65789DF5E3C4AE5F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_0 = __this->get_m_Predicate_0();
		NullCheck(L_0);
		bool L_1 = Func_1_Invoke_mFA91B93A5C91290D4A3C475C4117CA05B43419E6(L_0, /*hidden argument*/Func_1_Invoke_mFA91B93A5C91290D4A3C475C4117CA05B43419E6_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
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
// System.Byte[] UnityEngine.Windows.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* File_ReadAllBytes_m8ECCA3E03287A64BE4D493A5E613CD9A453FCF6C (String_t* ___path0, const RuntimeMethod* method)
{
	typedef ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* (*File_ReadAllBytes_m8ECCA3E03287A64BE4D493A5E613CD9A453FCF6C_ftn) (String_t*);
	static File_ReadAllBytes_m8ECCA3E03287A64BE4D493A5E613CD9A453FCF6C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (File_ReadAllBytes_m8ECCA3E03287A64BE4D493A5E613CD9A453FCF6C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.File::ReadAllBytes(System.String)");
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* retVal = _il2cpp_icall_func(___path0);
	return retVal;
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
// System.IntPtr UnityEngine.Windows.Speech.DictationRecognizer::Create(System.Object,UnityEngine.Windows.Speech.ConfidenceLevel,UnityEngine.Windows.Speech.DictationTopicConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DictationRecognizer_Create_m6CF3800F2BAAD28907CC342659B05D9790D2E37C (RuntimeObject * ___self0, int32_t ___minimumConfidence1, int32_t ___topicConstraint2, const RuntimeMethod* method)
{
	typedef intptr_t (*DictationRecognizer_Create_m6CF3800F2BAAD28907CC342659B05D9790D2E37C_ftn) (RuntimeObject *, int32_t, int32_t);
	static DictationRecognizer_Create_m6CF3800F2BAAD28907CC342659B05D9790D2E37C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DictationRecognizer_Create_m6CF3800F2BAAD28907CC342659B05D9790D2E37C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.Speech.DictationRecognizer::Create(System.Object,UnityEngine.Windows.Speech.ConfidenceLevel,UnityEngine.Windows.Speech.DictationTopicConstraint)");
	intptr_t retVal = _il2cpp_icall_func(___self0, ___minimumConfidence1, ___topicConstraint2);
	return retVal;
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Start(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_Start_mA60400B51B760BFE2058207CEACEB32E865D6A0F (intptr_t ___self0, const RuntimeMethod* method)
{
	typedef void (*DictationRecognizer_Start_mA60400B51B760BFE2058207CEACEB32E865D6A0F_ftn) (intptr_t);
	static DictationRecognizer_Start_mA60400B51B760BFE2058207CEACEB32E865D6A0F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DictationRecognizer_Start_mA60400B51B760BFE2058207CEACEB32E865D6A0F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.Speech.DictationRecognizer::Start(System.IntPtr)");
	_il2cpp_icall_func(___self0);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Stop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_Stop_mB84ADB9BC2E88467311EC8703A97C94736040E06 (intptr_t ___self0, const RuntimeMethod* method)
{
	typedef void (*DictationRecognizer_Stop_mB84ADB9BC2E88467311EC8703A97C94736040E06_ftn) (intptr_t);
	static DictationRecognizer_Stop_mB84ADB9BC2E88467311EC8703A97C94736040E06_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DictationRecognizer_Stop_mB84ADB9BC2E88467311EC8703A97C94736040E06_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.Speech.DictationRecognizer::Stop(System.IntPtr)");
	_il2cpp_icall_func(___self0);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_Destroy_mE8E7F0520867B50D3461F170C60826C140628664 (intptr_t ___self0, const RuntimeMethod* method)
{
	typedef void (*DictationRecognizer_Destroy_mE8E7F0520867B50D3461F170C60826C140628664_ftn) (intptr_t);
	static DictationRecognizer_Destroy_mE8E7F0520867B50D3461F170C60826C140628664_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DictationRecognizer_Destroy_mE8E7F0520867B50D3461F170C60826C140628664_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.Speech.DictationRecognizer::Destroy(System.IntPtr)");
	_il2cpp_icall_func(___self0);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::DestroyThreaded(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_DestroyThreaded_mF5135054C861CE5BEA6BCAC18F205A4833432CCA (intptr_t ___self0, const RuntimeMethod* method)
{
	typedef void (*DictationRecognizer_DestroyThreaded_mF5135054C861CE5BEA6BCAC18F205A4833432CCA_ftn) (intptr_t);
	static DictationRecognizer_DestroyThreaded_mF5135054C861CE5BEA6BCAC18F205A4833432CCA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DictationRecognizer_DestroyThreaded_mF5135054C861CE5BEA6BCAC18F205A4833432CCA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.Speech.DictationRecognizer::DestroyThreaded(System.IntPtr)");
	_il2cpp_icall_func(___self0);
}
// UnityEngine.Windows.Speech.SpeechSystemStatus UnityEngine.Windows.Speech.DictationRecognizer::GetStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DictationRecognizer_GetStatus_m4264BBF57EFDAFA41435EDD52F9807569B69D87B (intptr_t ___self0, const RuntimeMethod* method)
{
	typedef int32_t (*DictationRecognizer_GetStatus_m4264BBF57EFDAFA41435EDD52F9807569B69D87B_ftn) (intptr_t);
	static DictationRecognizer_GetStatus_m4264BBF57EFDAFA41435EDD52F9807569B69D87B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DictationRecognizer_GetStatus_m4264BBF57EFDAFA41435EDD52F9807569B69D87B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.Speech.DictationRecognizer::GetStatus(System.IntPtr)");
	int32_t retVal = _il2cpp_icall_func(___self0);
	return retVal;
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::SetAutoSilenceTimeoutSeconds(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_SetAutoSilenceTimeoutSeconds_mD15C9697C7D29B755B75B9FEF51C435EB703FFFF (intptr_t ___self0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*DictationRecognizer_SetAutoSilenceTimeoutSeconds_mD15C9697C7D29B755B75B9FEF51C435EB703FFFF_ftn) (intptr_t, float);
	static DictationRecognizer_SetAutoSilenceTimeoutSeconds_mD15C9697C7D29B755B75B9FEF51C435EB703FFFF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DictationRecognizer_SetAutoSilenceTimeoutSeconds_mD15C9697C7D29B755B75B9FEF51C435EB703FFFF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.Speech.DictationRecognizer::SetAutoSilenceTimeoutSeconds(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___self0, ___value1);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::SetInitialSilenceTimeoutSeconds(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_SetInitialSilenceTimeoutSeconds_m36CAD7450B9D1CF3EC98C184C8DCD64BB4D05ED4 (intptr_t ___self0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*DictationRecognizer_SetInitialSilenceTimeoutSeconds_m36CAD7450B9D1CF3EC98C184C8DCD64BB4D05ED4_ftn) (intptr_t, float);
	static DictationRecognizer_SetInitialSilenceTimeoutSeconds_m36CAD7450B9D1CF3EC98C184C8DCD64BB4D05ED4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DictationRecognizer_SetInitialSilenceTimeoutSeconds_m36CAD7450B9D1CF3EC98C184C8DCD64BB4D05ED4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.Speech.DictationRecognizer::SetInitialSilenceTimeoutSeconds(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___self0, ___value1);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationHypothesis(UnityEngine.Windows.Speech.DictationRecognizer_DictationHypothesisDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationHypothesis_m18C5A5B49B3503D141FD3BF25E8CAE78DA2D2196 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationRecognizer_add_DictationHypothesis_m18C5A5B49B3503D141FD3BF25E8CAE78DA2D2196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * V_0 = NULL;
	DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * V_1 = NULL;
	DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * V_2 = NULL;
	{
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_0 = __this->get_DictationHypothesis_1();
		V_0 = L_0;
	}

IL_0007:
	{
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_1 = V_0;
		V_1 = L_1;
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_2 = V_1;
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF *)CastclassSealed((RuntimeObject*)L_4, DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF_il2cpp_TypeInfo_var));
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF ** L_5 = __this->get_address_of_DictationHypothesis_1();
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_6 = V_2;
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_7 = V_1;
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_8 = InterlockedCompareExchangeImpl<DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF *>((DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF **)L_5, L_6, L_7);
		V_0 = L_8;
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_9 = V_0;
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_10 = V_1;
		if ((!(((RuntimeObject*)(DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF *)L_9) == ((RuntimeObject*)(DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationHypothesis(UnityEngine.Windows.Speech.DictationRecognizer_DictationHypothesisDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationHypothesis_m33D106BA3BD2C231CF9B3AB7CFC9D5D28DD63816 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationRecognizer_remove_DictationHypothesis_m33D106BA3BD2C231CF9B3AB7CFC9D5D28DD63816_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * V_0 = NULL;
	DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * V_1 = NULL;
	DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * V_2 = NULL;
	{
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_0 = __this->get_DictationHypothesis_1();
		V_0 = L_0;
	}

IL_0007:
	{
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_1 = V_0;
		V_1 = L_1;
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_2 = V_1;
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF *)CastclassSealed((RuntimeObject*)L_4, DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF_il2cpp_TypeInfo_var));
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF ** L_5 = __this->get_address_of_DictationHypothesis_1();
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_6 = V_2;
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_7 = V_1;
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_8 = InterlockedCompareExchangeImpl<DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF *>((DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF **)L_5, L_6, L_7);
		V_0 = L_8;
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_9 = V_0;
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_10 = V_1;
		if ((!(((RuntimeObject*)(DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF *)L_9) == ((RuntimeObject*)(DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationResult(UnityEngine.Windows.Speech.DictationRecognizer_DictationResultDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationResult_m72E518611183A8F055394759C76AF2C04C2C049E (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationRecognizer_add_DictationResult_m72E518611183A8F055394759C76AF2C04C2C049E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * V_0 = NULL;
	DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * V_1 = NULL;
	DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * V_2 = NULL;
	{
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_0 = __this->get_DictationResult_2();
		V_0 = L_0;
	}

IL_0007:
	{
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_1 = V_0;
		V_1 = L_1;
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_2 = V_1;
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 *)CastclassSealed((RuntimeObject*)L_4, DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87_il2cpp_TypeInfo_var));
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 ** L_5 = __this->get_address_of_DictationResult_2();
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_6 = V_2;
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_7 = V_1;
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_8 = InterlockedCompareExchangeImpl<DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 *>((DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 **)L_5, L_6, L_7);
		V_0 = L_8;
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_9 = V_0;
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_10 = V_1;
		if ((!(((RuntimeObject*)(DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 *)L_9) == ((RuntimeObject*)(DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationResult(UnityEngine.Windows.Speech.DictationRecognizer_DictationResultDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationResult_mD2832F82043B0E918D07AB2F3D8C6F83AD7A4AE6 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationRecognizer_remove_DictationResult_mD2832F82043B0E918D07AB2F3D8C6F83AD7A4AE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * V_0 = NULL;
	DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * V_1 = NULL;
	DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * V_2 = NULL;
	{
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_0 = __this->get_DictationResult_2();
		V_0 = L_0;
	}

IL_0007:
	{
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_1 = V_0;
		V_1 = L_1;
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_2 = V_1;
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 *)CastclassSealed((RuntimeObject*)L_4, DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87_il2cpp_TypeInfo_var));
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 ** L_5 = __this->get_address_of_DictationResult_2();
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_6 = V_2;
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_7 = V_1;
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_8 = InterlockedCompareExchangeImpl<DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 *>((DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 **)L_5, L_6, L_7);
		V_0 = L_8;
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_9 = V_0;
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_10 = V_1;
		if ((!(((RuntimeObject*)(DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 *)L_9) == ((RuntimeObject*)(DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationComplete(UnityEngine.Windows.Speech.DictationRecognizer_DictationCompletedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationComplete_m7F58F5353A6197EDF83790B3A11B07A7C4775F10 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationRecognizer_add_DictationComplete_m7F58F5353A6197EDF83790B3A11B07A7C4775F10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * V_0 = NULL;
	DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * V_1 = NULL;
	DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * V_2 = NULL;
	{
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_0 = __this->get_DictationComplete_3();
		V_0 = L_0;
	}

IL_0007:
	{
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_1 = V_0;
		V_1 = L_1;
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_2 = V_1;
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC *)CastclassSealed((RuntimeObject*)L_4, DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC_il2cpp_TypeInfo_var));
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC ** L_5 = __this->get_address_of_DictationComplete_3();
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_6 = V_2;
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_7 = V_1;
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_8 = InterlockedCompareExchangeImpl<DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC *>((DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC **)L_5, L_6, L_7);
		V_0 = L_8;
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_9 = V_0;
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_10 = V_1;
		if ((!(((RuntimeObject*)(DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC *)L_9) == ((RuntimeObject*)(DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationComplete(UnityEngine.Windows.Speech.DictationRecognizer_DictationCompletedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationComplete_m1C2487A5E937F84D15B73A2853AD4C65A537FB6F (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationRecognizer_remove_DictationComplete_m1C2487A5E937F84D15B73A2853AD4C65A537FB6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * V_0 = NULL;
	DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * V_1 = NULL;
	DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * V_2 = NULL;
	{
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_0 = __this->get_DictationComplete_3();
		V_0 = L_0;
	}

IL_0007:
	{
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_1 = V_0;
		V_1 = L_1;
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_2 = V_1;
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC *)CastclassSealed((RuntimeObject*)L_4, DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC_il2cpp_TypeInfo_var));
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC ** L_5 = __this->get_address_of_DictationComplete_3();
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_6 = V_2;
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_7 = V_1;
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_8 = InterlockedCompareExchangeImpl<DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC *>((DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC **)L_5, L_6, L_7);
		V_0 = L_8;
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_9 = V_0;
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_10 = V_1;
		if ((!(((RuntimeObject*)(DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC *)L_9) == ((RuntimeObject*)(DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationError(UnityEngine.Windows.Speech.DictationRecognizer_DictationErrorHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationError_m4A09F1227E7C3F954FACA66DD6F0F1720AF50C56 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationRecognizer_add_DictationError_m4A09F1227E7C3F954FACA66DD6F0F1720AF50C56_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * V_0 = NULL;
	DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * V_1 = NULL;
	DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * V_2 = NULL;
	{
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_0 = __this->get_DictationError_4();
		V_0 = L_0;
	}

IL_0007:
	{
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_1 = V_0;
		V_1 = L_1;
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_2 = V_1;
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 *)CastclassSealed((RuntimeObject*)L_4, DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13_il2cpp_TypeInfo_var));
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 ** L_5 = __this->get_address_of_DictationError_4();
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_6 = V_2;
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_7 = V_1;
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_8 = InterlockedCompareExchangeImpl<DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 *>((DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 **)L_5, L_6, L_7);
		V_0 = L_8;
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_9 = V_0;
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_10 = V_1;
		if ((!(((RuntimeObject*)(DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 *)L_9) == ((RuntimeObject*)(DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationError(UnityEngine.Windows.Speech.DictationRecognizer_DictationErrorHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationError_mA5CF0BEDD8CBC96098B623B48E70C5BD913C00B3 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationRecognizer_remove_DictationError_mA5CF0BEDD8CBC96098B623B48E70C5BD913C00B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * V_0 = NULL;
	DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * V_1 = NULL;
	DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * V_2 = NULL;
	{
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_0 = __this->get_DictationError_4();
		V_0 = L_0;
	}

IL_0007:
	{
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_1 = V_0;
		V_1 = L_1;
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_2 = V_1;
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 *)CastclassSealed((RuntimeObject*)L_4, DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13_il2cpp_TypeInfo_var));
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 ** L_5 = __this->get_address_of_DictationError_4();
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_6 = V_2;
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_7 = V_1;
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_8 = InterlockedCompareExchangeImpl<DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 *>((DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 **)L_5, L_6, L_7);
		V_0 = L_8;
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_9 = V_0;
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_10 = V_1;
		if ((!(((RuntimeObject*)(DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 *)L_9) == ((RuntimeObject*)(DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// UnityEngine.Windows.Speech.SpeechSystemStatus UnityEngine.Windows.Speech.DictationRecognizer::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		intptr_t L_0 = __this->get_m_Recognizer_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0021;
	}

IL_0016:
	{
		intptr_t L_2 = __this->get_m_Recognizer_0();
		int32_t L_3 = DictationRecognizer_GetStatus_m4264BBF57EFDAFA41435EDD52F9807569B69D87B((intptr_t)L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
	}

IL_0021:
	{
		V_0 = G_B3_0;
		goto IL_0024;
	}

IL_0024:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::set_AutoSilenceTimeoutSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_set_AutoSilenceTimeoutSeconds_m96E3450BE28A238970C5548AD8896BE3F02DB8F9 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationRecognizer_set_AutoSilenceTimeoutSeconds_m96E3450BE28A238970C5548AD8896BE3F02DB8F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Recognizer_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0024;
	}

IL_0017:
	{
		intptr_t L_3 = __this->get_m_Recognizer_0();
		float L_4 = ___value0;
		DictationRecognizer_SetAutoSilenceTimeoutSeconds_mD15C9697C7D29B755B75B9FEF51C435EB703FFFF((intptr_t)L_3, L_4, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::set_InitialSilenceTimeoutSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_set_InitialSilenceTimeoutSeconds_mD355A47F132B4E26C60C1E200C9C0B99FDCABC06 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationRecognizer_set_InitialSilenceTimeoutSeconds_mD355A47F132B4E26C60C1E200C9C0B99FDCABC06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Recognizer_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0024;
	}

IL_0017:
	{
		intptr_t L_3 = __this->get_m_Recognizer_0();
		float L_4 = ___value0;
		DictationRecognizer_SetInitialSilenceTimeoutSeconds_m36CAD7450B9D1CF3EC98C184C8DCD64BB4D05ED4((intptr_t)L_3, L_4, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer__ctor_mF4F9C45412131377C1FF6B7A25CBAD0D02C0D6ED (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method)
{
	{
		DictationRecognizer__ctor_mBDDCC296FCC43884D7F5199ACBB0BF0BAEECEBD4(__this, 1, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::.ctor(UnityEngine.Windows.Speech.ConfidenceLevel,UnityEngine.Windows.Speech.DictationTopicConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer__ctor_mBDDCC296FCC43884D7F5199ACBB0BF0BAEECEBD4 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, int32_t ___minimumConfidence0, int32_t ___topic1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___minimumConfidence0;
		int32_t L_1 = ___topic1;
		intptr_t L_2 = DictationRecognizer_Create_m6CF3800F2BAAD28907CC342659B05D9790D2E37C(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_Recognizer_0((intptr_t)L_2);
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_Finalize_m3A9F239077BE32E93F9CA8431E79EE353822DDF2 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationRecognizer_Finalize_m3A9F239077BE32E93F9CA8431E79EE353822DDF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_Recognizer_0();
			bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
			V_0 = L_1;
			bool L_2 = V_0;
			if (!L_2)
			{
				goto IL_0036;
			}
		}

IL_0016:
		{
			intptr_t L_3 = __this->get_m_Recognizer_0();
			DictationRecognizer_DestroyThreaded_mF5135054C861CE5BEA6BCAC18F205A4833432CCA((intptr_t)L_3, /*hidden argument*/NULL);
			__this->set_m_Recognizer_0((intptr_t)(0));
			IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x40, FINALLY_0038);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(56)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x40, IL_0040)
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_Start_mA9B2AB4490205206F640DFE552B0944396D30536 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationRecognizer_Start_mA9B2AB4490205206F640DFE552B0944396D30536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Recognizer_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0023;
	}

IL_0017:
	{
		intptr_t L_3 = __this->get_m_Recognizer_0();
		DictationRecognizer_Start_mA60400B51B760BFE2058207CEACEB32E865D6A0F((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_Stop_m42D22C5D03B17B6DDF94B13E9DC678AB4C11970E (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationRecognizer_Stop_m42D22C5D03B17B6DDF94B13E9DC678AB4C11970E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Recognizer_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0023;
	}

IL_0017:
	{
		intptr_t L_3 = __this->get_m_Recognizer_0();
		DictationRecognizer_Stop_mB84ADB9BC2E88467311EC8703A97C94736040E06((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_Dispose_m8D8EB78BD3CD6B18CF2240AD8506CE943F1692E7 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationRecognizer_Dispose_m8D8EB78BD3CD6B18CF2240AD8506CE943F1692E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Recognizer_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_3 = __this->get_m_Recognizer_0();
		DictationRecognizer_Destroy_mE8E7F0520867B50D3461F170C60826C140628664((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_m_Recognizer_0((intptr_t)(0));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::DictationRecognizer_InvokeHypothesisGeneratedEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_DictationRecognizer_InvokeHypothesisGeneratedEvent_mD5D8576CD4D2BC21FFBBFACAE879D9E35BFD4BED (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, String_t* ___keyword0, const RuntimeMethod* method)
{
	DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * V_0 = NULL;
	bool V_1 = false;
	{
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_0 = __this->get_DictationHypothesis_1();
		V_0 = L_0;
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_3 = V_0;
		String_t* L_4 = ___keyword0;
		NullCheck(L_3);
		DictationHypothesisDelegate_Invoke_m13B00B4DADC3F35EF3655EFEA69A68917609CD53(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::DictationRecognizer_InvokeResultGeneratedEvent(System.String,UnityEngine.Windows.Speech.ConfidenceLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_DictationRecognizer_InvokeResultGeneratedEvent_m144DE6D67869D7308AA407D42D068B17410916EA (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, String_t* ___keyword0, int32_t ___minimumConfidence1, const RuntimeMethod* method)
{
	DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * V_0 = NULL;
	bool V_1 = false;
	{
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_0 = __this->get_DictationResult_2();
		V_0 = L_0;
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_3 = V_0;
		String_t* L_4 = ___keyword0;
		int32_t L_5 = ___minimumConfidence1;
		NullCheck(L_3);
		DictationResultDelegate_Invoke_mC2BCB095B651CD4DE23FED7A0A0C92A6684A5C91(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::DictationRecognizer_InvokeCompletedEvent(UnityEngine.Windows.Speech.DictationCompletionCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_DictationRecognizer_InvokeCompletedEvent_mCB00EBDBFA1E43EEEFEF8A98BC681350ED071479 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * V_0 = NULL;
	bool V_1 = false;
	{
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_0 = __this->get_DictationComplete_3();
		V_0 = L_0;
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_3 = V_0;
		int32_t L_4 = ___cause0;
		NullCheck(L_3);
		DictationCompletedDelegate_Invoke_m393D08D4E4C4BDC07D2C1086678A3BC34ADD5C37(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::DictationRecognizer_InvokeErrorEvent(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_DictationRecognizer_InvokeErrorEvent_mF72B166A7D7F1D73E508FD4350DD6B4A147D047F (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * V_0 = NULL;
	bool V_1 = false;
	{
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_0 = __this->get_DictationError_4();
		V_0 = L_0;
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_3 = V_0;
		String_t* L_4 = ___error0;
		int32_t L_5 = ___hresult1;
		NullCheck(L_3);
		DictationErrorHandler_Invoke_mC67E23094C88F1042656F92133FE2C9E32FFA52F(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0019:
	{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC (DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___cause0);

}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer_DictationCompletedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationCompletedDelegate__ctor_m5B703B2796175B619EDBD28F7B6EB86294678369 (DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer_DictationCompletedDelegate::Invoke(UnityEngine.Windows.Speech.DictationCompletionCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationCompletedDelegate_Invoke_m393D08D4E4C4BDC07D2C1086678A3BC34ADD5C37 (DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___cause0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___cause0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___cause0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___cause0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cause0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cause0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___cause0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___cause0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___cause0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.Speech.DictationRecognizer_DictationCompletedDelegate::BeginInvoke(UnityEngine.Windows.Speech.DictationCompletionCause,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictationCompletedDelegate_BeginInvoke_m86D73A3A2CE70124C65709ADABB270C4F4A981F1 (DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * __this, int32_t ___cause0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationCompletedDelegate_BeginInvoke_m86D73A3A2CE70124C65709ADABB270C4F4A981F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(DictationCompletionCause_tAF978578CFACB799A3DB54BA549C780C5E181FC1_il2cpp_TypeInfo_var, &___cause0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer_DictationCompletedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationCompletedDelegate_EndInvoke_m76C332FC975E3C94B71ED70F0CC1F04DE52BA964 (DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 (DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___error0' to native representation
	char* ____error0_marshaled = NULL;
	____error0_marshaled = il2cpp_codegen_marshal_string(___error0);

	// Native function invocation
	il2cppPInvokeFunc(____error0_marshaled, ___hresult1);

	// Marshaling cleanup of parameter '___error0' native representation
	il2cpp_codegen_marshal_free(____error0_marshaled);
	____error0_marshaled = NULL;

}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer_DictationErrorHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationErrorHandler__ctor_m13B3D1B66DB5DB3FA513E70E2DBEEBA1FDC6D0D6 (DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer_DictationErrorHandler::Invoke(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationErrorHandler_Invoke_mC67E23094C88F1042656F92133FE2C9E32FFA52F (DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, ___hresult1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___error0, ___hresult1);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___error0, ___hresult1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___error0, ___hresult1);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___error0, ___hresult1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___hresult1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___error0, ___hresult1);
					else
						GenericVirtActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___error0, ___hresult1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___error0, ___hresult1);
					else
						VirtActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___error0, ___hresult1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___error0) - 1), ___hresult1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, ___hresult1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.Speech.DictationRecognizer_DictationErrorHandler::BeginInvoke(System.String,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictationErrorHandler_BeginInvoke_mD24E9C40E56521AC36B8D32518198DFB89D9827C (DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * __this, String_t* ___error0, int32_t ___hresult1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationErrorHandler_BeginInvoke_mD24E9C40E56521AC36B8D32518198DFB89D9827C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___error0;
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___hresult1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer_DictationErrorHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationErrorHandler_EndInvoke_mD1499F5B20B970B36944DFE8111CE94171656798 (DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF (DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * __this, String_t* ___text0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___text0' to native representation
	char* ____text0_marshaled = NULL;
	____text0_marshaled = il2cpp_codegen_marshal_string(___text0);

	// Native function invocation
	il2cppPInvokeFunc(____text0_marshaled);

	// Marshaling cleanup of parameter '___text0' native representation
	il2cpp_codegen_marshal_free(____text0_marshaled);
	____text0_marshaled = NULL;

}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer_DictationHypothesisDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationHypothesisDelegate__ctor_mFB606F04C9375D67CD8701F116EA58381924D3A1 (DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer_DictationHypothesisDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationHypothesisDelegate_Invoke_m13B00B4DADC3F35EF3655EFEA69A68917609CD53 (DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * __this, String_t* ___text0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___text0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___text0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___text0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___text0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___text0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___text0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___text0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___text0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___text0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___text0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___text0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___text0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___text0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___text0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.Speech.DictationRecognizer_DictationHypothesisDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictationHypothesisDelegate_BeginInvoke_mFCA96ECCE23AB50C58CA8DA154B73C7E20C618F1 (DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * __this, String_t* ___text0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___text0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer_DictationHypothesisDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationHypothesisDelegate_EndInvoke_mD3BED2D554BE05C00F5393F48BD66E3B8AFF283C (DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 (DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * __this, String_t* ___text0, int32_t ___confidence1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___text0' to native representation
	char* ____text0_marshaled = NULL;
	____text0_marshaled = il2cpp_codegen_marshal_string(___text0);

	// Native function invocation
	il2cppPInvokeFunc(____text0_marshaled, ___confidence1);

	// Marshaling cleanup of parameter '___text0' native representation
	il2cpp_codegen_marshal_free(____text0_marshaled);
	____text0_marshaled = NULL;

}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer_DictationResultDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationResultDelegate__ctor_mDECF2707DE7D125C6DE6BE8EC8E1BCD1539CF40C (DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer_DictationResultDelegate::Invoke(System.String,UnityEngine.Windows.Speech.ConfidenceLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationResultDelegate_Invoke_mC2BCB095B651CD4DE23FED7A0A0C92A6684A5C91 (DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * __this, String_t* ___text0, int32_t ___confidence1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___text0, ___confidence1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___text0, ___confidence1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___text0, ___confidence1);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___text0, ___confidence1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___text0, ___confidence1);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___text0, ___confidence1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___confidence1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___text0, ___confidence1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___text0, ___confidence1);
					else
						GenericVirtActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___text0, ___confidence1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___text0, ___confidence1);
					else
						VirtActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___text0, ___confidence1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___text0) - 1), ___confidence1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___text0, ___confidence1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___text0, ___confidence1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.Speech.DictationRecognizer_DictationResultDelegate::BeginInvoke(System.String,UnityEngine.Windows.Speech.ConfidenceLevel,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictationResultDelegate_BeginInvoke_mB1DAE084A144180C6B6C3FBB95FC11C953E51872 (DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * __this, String_t* ___text0, int32_t ___confidence1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationResultDelegate_BeginInvoke_mB1DAE084A144180C6B6C3FBB95FC11C953E51872_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___text0;
	__d_args[1] = Box(ConfidenceLevel_t56554EC6B602F1294B9E933704E2EC961906AA36_il2cpp_TypeInfo_var, &___confidence1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer_DictationResultDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationResultDelegate_EndInvoke_m9F81B0B190A0455B077CDC0222059CEA973B83C3 (DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Windows.Speech.KeywordRecognizer::set_Keywords(System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognizer_set_Keywords_m11AEB567D4747C00936402C29FAE38BB22621FEB (KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CKeywordsU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.KeywordRecognizer::.ctor(System.String[],UnityEngine.Windows.Speech.ConfidenceLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognizer__ctor_m10E461E5F20190D903506B99E53E522C589F9A56 (KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___keywords0, int32_t ___minimumConfidence1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeywordRecognizer__ctor_m10E461E5F20190D903506B99E53E522C589F9A56_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		PhraseRecognizer__ctor_m619F646A2011E22E1E518837581777B39203F00D(__this, /*hidden argument*/NULL);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = ___keywords0;
		V_1 = (bool)((((RuntimeObject*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, _stringLiteral88FC09E54B17679B0028556344B50C9FE169BDB5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, KeywordRecognizer__ctor_m10E461E5F20190D903506B99E53E522C589F9A56_RuntimeMethod_var);
	}

IL_001b:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = ___keywords0;
		NullCheck(L_3);
		V_2 = (bool)((((int32_t)(((RuntimeArray*)L_3)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_5 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_5, _stringLiteral3533FC373F17ACF0155785001BCC681AA6ED8C36, _stringLiteral88FC09E54B17679B0028556344B50C9FE169BDB5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, KeywordRecognizer__ctor_m10E461E5F20190D903506B99E53E522C589F9A56_RuntimeMethod_var);
	}

IL_0034:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = ___keywords0;
		NullCheck(L_6);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))));
		V_3 = 0;
		goto IL_0064;
	}

IL_003c:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = ___keywords0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = (bool)((((RuntimeObject*)(String_t*)L_10) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_12 = V_3;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralE4365D489F8F7749EB96EB7973DA06109F356DA4, L_14, /*hidden argument*/NULL);
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_16 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_16, L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, KeywordRecognizer__ctor_m10E461E5F20190D903506B99E53E522C589F9A56_RuntimeMethod_var);
	}

IL_005f:
	{
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0064:
	{
		int32_t L_18 = V_3;
		int32_t L_19 = V_0;
		V_5 = (bool)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_5;
		if (L_20)
		{
			goto IL_003c;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_21 = ___keywords0;
		KeywordRecognizer_set_Keywords_m11AEB567D4747C00936402C29FAE38BB22621FEB_inline(__this, (RuntimeObject*)(RuntimeObject*)L_21, /*hidden argument*/NULL);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_22 = ___keywords0;
		int32_t L_23 = ___minimumConfidence1;
		intptr_t L_24 = PhraseRecognizer_CreateFromKeywords_mA27576C25C17DE2334BD1B4F52A6A15B9DD12B90(__this, L_22, L_23, /*hidden argument*/NULL);
		((PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F *)__this)->set_m_Recognizer_0((intptr_t)L_24);
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
// UnityEngine.Windows.Speech.SpeechSystemStatus UnityEngine.Windows.Speech.PhraseRecognitionSystem::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhraseRecognitionSystem_get_Status_m8AEDCE0E644824367B5672B39BAA2838E08277AC (const RuntimeMethod* method)
{
	typedef int32_t (*PhraseRecognitionSystem_get_Status_m8AEDCE0E644824367B5672B39BAA2838E08277AC_ftn) ();
	static PhraseRecognitionSystem_get_Status_m8AEDCE0E644824367B5672B39BAA2838E08277AC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhraseRecognitionSystem_get_Status_m8AEDCE0E644824367B5672B39BAA2838E08277AC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.Speech.PhraseRecognitionSystem::get_Status()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSystem_Restart_m8FE23747DD233E3E42BDDC5A6F3C3B79A1F20A3F (const RuntimeMethod* method)
{
	typedef void (*PhraseRecognitionSystem_Restart_m8FE23747DD233E3E42BDDC5A6F3C3B79A1F20A3F_ftn) ();
	static PhraseRecognitionSystem_Restart_m8FE23747DD233E3E42BDDC5A6F3C3B79A1F20A3F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhraseRecognitionSystem_Restart_m8FE23747DD233E3E42BDDC5A6F3C3B79A1F20A3F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.Speech.PhraseRecognitionSystem::Restart()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSystem_Shutdown_m902D4966E62C9D32367FE101DE80B09D93B5B2BC (const RuntimeMethod* method)
{
	typedef void (*PhraseRecognitionSystem_Shutdown_m902D4966E62C9D32367FE101DE80B09D93B5B2BC_ftn) ();
	static PhraseRecognitionSystem_Shutdown_m902D4966E62C9D32367FE101DE80B09D93B5B2BC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhraseRecognitionSystem_Shutdown_m902D4966E62C9D32367FE101DE80B09D93B5B2BC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.Speech.PhraseRecognitionSystem::Shutdown()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem::PhraseRecognitionSystem_InvokeErrorEvent(UnityEngine.Windows.Speech.SpeechError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSystem_PhraseRecognitionSystem_InvokeErrorEvent_m9FF196C06264F6035686945A734E1AC01A0E2E33 (int32_t ___errorCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhraseRecognitionSystem_PhraseRecognitionSystem_InvokeErrorEvent_m9FF196C06264F6035686945A734E1AC01A0E2E33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * V_0 = NULL;
	bool V_1 = false;
	{
		ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * L_0 = ((PhraseRecognitionSystem_t0C199C0F115356F4FEB8DD938B25FB290B17FB7A_StaticFields*)il2cpp_codegen_static_fields_for(PhraseRecognitionSystem_t0C199C0F115356F4FEB8DD938B25FB290B17FB7A_il2cpp_TypeInfo_var))->get_OnError_0();
		V_0 = L_0;
		ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * L_3 = V_0;
		int32_t L_4 = ___errorCode0;
		NullCheck(L_3);
		ErrorDelegate_Invoke_m448BAD63228E49AEB609A60052F1E05C93853B17(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem::PhraseRecognitionSystem_InvokeStatusChangedEvent(UnityEngine.Windows.Speech.SpeechSystemStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSystem_PhraseRecognitionSystem_InvokeStatusChangedEvent_mF25930BC6443439CCBAF346B89799358451239D8 (int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhraseRecognitionSystem_PhraseRecognitionSystem_InvokeStatusChangedEvent_mF25930BC6443439CCBAF346B89799358451239D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * V_0 = NULL;
	bool V_1 = false;
	{
		StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * L_0 = ((PhraseRecognitionSystem_t0C199C0F115356F4FEB8DD938B25FB290B17FB7A_StaticFields*)il2cpp_codegen_static_fields_for(PhraseRecognitionSystem_t0C199C0F115356F4FEB8DD938B25FB290B17FB7A_il2cpp_TypeInfo_var))->get_OnStatusChanged_1();
		V_0 = L_0;
		StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * L_3 = V_0;
		int32_t L_4 = ___status0;
		NullCheck(L_3);
		StatusDelegate_Invoke_mBA807D0015000ABE36C5B9B6F847D2882D3B26ED(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0017:
	{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD (ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * __this, int32_t ___errorCode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___errorCode0);

}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem_ErrorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorDelegate__ctor_mE77BF50AF1FD2FE54199276141F6B3CB17D2E1B1 (ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem_ErrorDelegate::Invoke(UnityEngine.Windows.Speech.SpeechError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorDelegate_Invoke_m448BAD63228E49AEB609A60052F1E05C93853B17 (ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * __this, int32_t ___errorCode0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___errorCode0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___errorCode0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___errorCode0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___errorCode0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___errorCode0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___errorCode0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___errorCode0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___errorCode0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___errorCode0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.Speech.PhraseRecognitionSystem_ErrorDelegate::BeginInvoke(UnityEngine.Windows.Speech.SpeechError,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ErrorDelegate_BeginInvoke_m3A859400873FD62B71B597C2771E50F94B344E09 (ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * __this, int32_t ___errorCode0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ErrorDelegate_BeginInvoke_m3A859400873FD62B71B597C2771E50F94B344E09_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(SpeechError_tF03B18A9E3B314DC1DAC6DD4C7010F1B2F2B90E7_il2cpp_TypeInfo_var, &___errorCode0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem_ErrorDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorDelegate_EndInvoke_m140002C504FD22C3B6C0F150576D37EE4A921189 (ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 (StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___status0);

}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem_StatusDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusDelegate__ctor_mA3683647B7522FDFCC92DBE0161D7F585741477E (StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem_StatusDelegate::Invoke(UnityEngine.Windows.Speech.SpeechSystemStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusDelegate_Invoke_mBA807D0015000ABE36C5B9B6F847D2882D3B26ED (StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___status0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___status0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___status0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___status0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___status0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___status0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___status0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.Speech.PhraseRecognitionSystem_StatusDelegate::BeginInvoke(UnityEngine.Windows.Speech.SpeechSystemStatus,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StatusDelegate_BeginInvoke_m814D9105249F941053622B079479E04A4FB6D227 (StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * __this, int32_t ___status0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StatusDelegate_BeginInvoke_m814D9105249F941053622B079479E04A4FB6D227_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(SpeechSystemStatus_t2CCB4587008A89270736621140A65C1B5BB22317_il2cpp_TypeInfo_var, &___status0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem_StatusDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusDelegate_EndInvoke_mF6B9A0C43A10A4CA34F56684DD4FB842FFB5D1FF (StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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


// Conversion methods for marshalling of: UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
IL2CPP_EXTERN_C void PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshal_pinvoke(const PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD& unmarshaled, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshaled_pinvoke& marshaled)
{
	Exception_t* ___semanticMeanings_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'semanticMeanings' of type 'PhraseRecognizedEventArgs'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___semanticMeanings_1Exception, NULL);
}
IL2CPP_EXTERN_C void PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshal_pinvoke_back(const PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshaled_pinvoke& marshaled, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD& unmarshaled)
{
	Exception_t* ___semanticMeanings_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'semanticMeanings' of type 'PhraseRecognizedEventArgs'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___semanticMeanings_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
IL2CPP_EXTERN_C void PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshal_pinvoke_cleanup(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
IL2CPP_EXTERN_C void PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshal_com(const PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD& unmarshaled, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshaled_com& marshaled)
{
	Exception_t* ___semanticMeanings_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'semanticMeanings' of type 'PhraseRecognizedEventArgs'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___semanticMeanings_1Exception, NULL);
}
IL2CPP_EXTERN_C void PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshal_com_back(const PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshaled_com& marshaled, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD& unmarshaled)
{
	Exception_t* ___semanticMeanings_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'semanticMeanings' of type 'PhraseRecognizedEventArgs'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___semanticMeanings_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
IL2CPP_EXTERN_C void PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshal_com_cleanup(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::.ctor(System.String,UnityEngine.Windows.Speech.ConfidenceLevel,UnityEngine.Windows.Speech.SemanticMeaning[],System.DateTime,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizedEventArgs__ctor_m362E97ADA890AE34C5E062B0FEED70E46E110ECE (PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD * __this, String_t* ___text0, int32_t ___confidence1, SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* ___semanticMeanings2, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime3, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration4, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___text0;
		__this->set_text_2(L_0);
		int32_t L_1 = ___confidence1;
		__this->set_confidence_0(L_1);
		SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* L_2 = ___semanticMeanings2;
		__this->set_semanticMeanings_1(L_2);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_3 = ___phraseStartTime3;
		__this->set_phraseStartTime_3(L_3);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_4 = ___phraseDuration4;
		__this->set_phraseDuration_4(L_4);
		return;
	}
}
IL2CPP_EXTERN_C  void PhraseRecognizedEventArgs__ctor_m362E97ADA890AE34C5E062B0FEED70E46E110ECE_AdjustorThunk (RuntimeObject * __this, String_t* ___text0, int32_t ___confidence1, SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* ___semanticMeanings2, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime3, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD * _thisAdjusted = reinterpret_cast<PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD *>(__this + _offset);
	PhraseRecognizedEventArgs__ctor_m362E97ADA890AE34C5E062B0FEED70E46E110ECE(_thisAdjusted, ___text0, ___confidence1, ___semanticMeanings2, ___phraseStartTime3, ___phraseDuration4, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr UnityEngine.Windows.Speech.PhraseRecognizer::CreateFromKeywords(System.Object,System.String[],UnityEngine.Windows.Speech.ConfidenceLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PhraseRecognizer_CreateFromKeywords_mA27576C25C17DE2334BD1B4F52A6A15B9DD12B90 (RuntimeObject * ___self0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___keywords1, int32_t ___minimumConfidence2, const RuntimeMethod* method)
{
	typedef intptr_t (*PhraseRecognizer_CreateFromKeywords_mA27576C25C17DE2334BD1B4F52A6A15B9DD12B90_ftn) (RuntimeObject *, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*, int32_t);
	static PhraseRecognizer_CreateFromKeywords_mA27576C25C17DE2334BD1B4F52A6A15B9DD12B90_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhraseRecognizer_CreateFromKeywords_mA27576C25C17DE2334BD1B4F52A6A15B9DD12B90_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.Speech.PhraseRecognizer::CreateFromKeywords(System.Object,System.String[],UnityEngine.Windows.Speech.ConfidenceLevel)");
	intptr_t retVal = _il2cpp_icall_func(___self0, ___keywords1, ___minimumConfidence2);
	return retVal;
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Start_Internal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Start_Internal_m5B78A131E3354EA031F62F20974A9443FABE8656 (intptr_t ___recognizer0, const RuntimeMethod* method)
{
	typedef void (*PhraseRecognizer_Start_Internal_m5B78A131E3354EA031F62F20974A9443FABE8656_ftn) (intptr_t);
	static PhraseRecognizer_Start_Internal_m5B78A131E3354EA031F62F20974A9443FABE8656_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhraseRecognizer_Start_Internal_m5B78A131E3354EA031F62F20974A9443FABE8656_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.Speech.PhraseRecognizer::Start_Internal(System.IntPtr)");
	_il2cpp_icall_func(___recognizer0);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Stop_Internal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Stop_Internal_m4ACCEEEFF98CEA96092EA97CD255505FEF04F994 (intptr_t ___recognizer0, const RuntimeMethod* method)
{
	typedef void (*PhraseRecognizer_Stop_Internal_m4ACCEEEFF98CEA96092EA97CD255505FEF04F994_ftn) (intptr_t);
	static PhraseRecognizer_Stop_Internal_m4ACCEEEFF98CEA96092EA97CD255505FEF04F994_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhraseRecognizer_Stop_Internal_m4ACCEEEFF98CEA96092EA97CD255505FEF04F994_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.Speech.PhraseRecognizer::Stop_Internal(System.IntPtr)");
	_il2cpp_icall_func(___recognizer0);
}
// System.Boolean UnityEngine.Windows.Speech.PhraseRecognizer::IsRunning_Internal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhraseRecognizer_IsRunning_Internal_mDA7886AE7A0007B621A8CD15971202FF10E176BE (intptr_t ___recognizer0, const RuntimeMethod* method)
{
	typedef bool (*PhraseRecognizer_IsRunning_Internal_mDA7886AE7A0007B621A8CD15971202FF10E176BE_ftn) (intptr_t);
	static PhraseRecognizer_IsRunning_Internal_mDA7886AE7A0007B621A8CD15971202FF10E176BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhraseRecognizer_IsRunning_Internal_mDA7886AE7A0007B621A8CD15971202FF10E176BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.Speech.PhraseRecognizer::IsRunning_Internal(System.IntPtr)");
	bool retVal = _il2cpp_icall_func(___recognizer0);
	return retVal;
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Destroy_m9579A27170BCBB3BDB99C364D5493B6B7C4E5B2D (intptr_t ___recognizer0, const RuntimeMethod* method)
{
	typedef void (*PhraseRecognizer_Destroy_m9579A27170BCBB3BDB99C364D5493B6B7C4E5B2D_ftn) (intptr_t);
	static PhraseRecognizer_Destroy_m9579A27170BCBB3BDB99C364D5493B6B7C4E5B2D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhraseRecognizer_Destroy_m9579A27170BCBB3BDB99C364D5493B6B7C4E5B2D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.Speech.PhraseRecognizer::Destroy(System.IntPtr)");
	_il2cpp_icall_func(___recognizer0);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::DestroyThreaded(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_DestroyThreaded_m4EA9D31CE89972CB9C6EC20007ED2C6C8FCAABE0 (intptr_t ___recognizer0, const RuntimeMethod* method)
{
	typedef void (*PhraseRecognizer_DestroyThreaded_m4EA9D31CE89972CB9C6EC20007ED2C6C8FCAABE0_ftn) (intptr_t);
	static PhraseRecognizer_DestroyThreaded_m4EA9D31CE89972CB9C6EC20007ED2C6C8FCAABE0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhraseRecognizer_DestroyThreaded_m4EA9D31CE89972CB9C6EC20007ED2C6C8FCAABE0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.Speech.PhraseRecognizer::DestroyThreaded(System.IntPtr)");
	_il2cpp_icall_func(___recognizer0);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::add_OnPhraseRecognized(UnityEngine.Windows.Speech.PhraseRecognizer_PhraseRecognizedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_add_OnPhraseRecognized_m3A70137B301880FB1CCA497AADC4457DF879B223 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhraseRecognizer_add_OnPhraseRecognized_m3A70137B301880FB1CCA497AADC4457DF879B223_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * V_0 = NULL;
	PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * V_1 = NULL;
	PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * V_2 = NULL;
	{
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_0 = __this->get_OnPhraseRecognized_1();
		V_0 = L_0;
	}

IL_0007:
	{
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_1 = V_0;
		V_1 = L_1;
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_2 = V_1;
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 *)CastclassSealed((RuntimeObject*)L_4, PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0_il2cpp_TypeInfo_var));
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 ** L_5 = __this->get_address_of_OnPhraseRecognized_1();
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_6 = V_2;
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_7 = V_1;
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_8 = InterlockedCompareExchangeImpl<PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 *>((PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 **)L_5, L_6, L_7);
		V_0 = L_8;
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_9 = V_0;
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 *)L_9) == ((RuntimeObject*)(PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::remove_OnPhraseRecognized(UnityEngine.Windows.Speech.PhraseRecognizer_PhraseRecognizedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_remove_OnPhraseRecognized_m238073B8E92F06363AAFE5918FDF5B7328A55F69 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhraseRecognizer_remove_OnPhraseRecognized_m238073B8E92F06363AAFE5918FDF5B7328A55F69_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * V_0 = NULL;
	PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * V_1 = NULL;
	PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * V_2 = NULL;
	{
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_0 = __this->get_OnPhraseRecognized_1();
		V_0 = L_0;
	}

IL_0007:
	{
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_1 = V_0;
		V_1 = L_1;
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_2 = V_1;
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 *)CastclassSealed((RuntimeObject*)L_4, PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0_il2cpp_TypeInfo_var));
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 ** L_5 = __this->get_address_of_OnPhraseRecognized_1();
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_6 = V_2;
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_7 = V_1;
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_8 = InterlockedCompareExchangeImpl<PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 *>((PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 **)L_5, L_6, L_7);
		V_0 = L_8;
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_9 = V_0;
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 *)L_9) == ((RuntimeObject*)(PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer__ctor_m619F646A2011E22E1E518837581777B39203F00D (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Finalize_m8B1591B513FE69C370C9AC8FCD13E2A091499E76 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhraseRecognizer_Finalize_m8B1591B513FE69C370C9AC8FCD13E2A091499E76_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_Recognizer_0();
			bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
			V_0 = L_1;
			bool L_2 = V_0;
			if (!L_2)
			{
				goto IL_0036;
			}
		}

IL_0016:
		{
			intptr_t L_3 = __this->get_m_Recognizer_0();
			PhraseRecognizer_DestroyThreaded_m4EA9D31CE89972CB9C6EC20007ED2C6C8FCAABE0((intptr_t)L_3, /*hidden argument*/NULL);
			__this->set_m_Recognizer_0((intptr_t)(0));
			IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x40, FINALLY_0038);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(56)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x40, IL_0040)
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Start_m2CDF8ABBF99C79C181488B6F0310375BC39D2459 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhraseRecognizer_Start_m2CDF8ABBF99C79C181488B6F0310375BC39D2459_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Recognizer_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0023;
	}

IL_0017:
	{
		intptr_t L_3 = __this->get_m_Recognizer_0();
		PhraseRecognizer_Start_Internal_m5B78A131E3354EA031F62F20974A9443FABE8656((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Stop_mD94B6DDFE77D1AC1DC10C5BF015F76F607B81F19 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhraseRecognizer_Stop_mD94B6DDFE77D1AC1DC10C5BF015F76F607B81F19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Recognizer_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0023;
	}

IL_0017:
	{
		intptr_t L_3 = __this->get_m_Recognizer_0();
		PhraseRecognizer_Stop_Internal_m4ACCEEEFF98CEA96092EA97CD255505FEF04F994((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Dispose_m617A308A831D5314CE7B10301DB0CADAD080F73A (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhraseRecognizer_Dispose_m617A308A831D5314CE7B10301DB0CADAD080F73A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Recognizer_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_3 = __this->get_m_Recognizer_0();
		PhraseRecognizer_Destroy_m9579A27170BCBB3BDB99C364D5493B6B7C4E5B2D((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_m_Recognizer_0((intptr_t)(0));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Windows.Speech.PhraseRecognizer::get_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhraseRecognizer_get_IsRunning_m26DF9151D332930662ACB87E00D2498DCC87F7E1 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhraseRecognizer_get_IsRunning_m26DF9151D332930662ACB87E00D2498DCC87F7E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		intptr_t L_0 = __this->get_m_Recognizer_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		intptr_t L_2 = __this->get_m_Recognizer_0();
		bool L_3 = PhraseRecognizer_IsRunning_Internal_mDA7886AE7A0007B621A8CD15971202FF10E176BE((intptr_t)L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::InvokePhraseRecognizedEvent(System.String,UnityEngine.Windows.Speech.ConfidenceLevel,UnityEngine.Windows.Speech.SemanticMeaning[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_InvokePhraseRecognizedEvent_mDBD38FADAC58DF9B960342AC84EE32CF221B0F02 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, String_t* ___text0, int32_t ___confidence1, SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* ___semanticMeanings2, int64_t ___phraseStartFileTime3, int64_t ___phraseDurationTicks4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhraseRecognizer_InvokePhraseRecognizedEvent_mDBD38FADAC58DF9B960342AC84EE32CF221B0F02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * V_0 = NULL;
	bool V_1 = false;
	{
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_0 = __this->get_OnPhraseRecognized_1();
		V_0 = L_0;
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_3 = V_0;
		String_t* L_4 = ___text0;
		int32_t L_5 = ___confidence1;
		SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* L_6 = ___semanticMeanings2;
		int64_t L_7 = ___phraseStartFileTime3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_8 = DateTime_FromFileTime_m48DCF83C7472940505DE71F244BC072E98FA5676(L_7, /*hidden argument*/NULL);
		int64_t L_9 = ___phraseDurationTicks4;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_10 = TimeSpan_FromTicks_mDF1F429F18294D57DE2739DBD2F33637E4E5F8F4(L_9, /*hidden argument*/NULL);
		PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  L_11;
		memset((&L_11), 0, sizeof(L_11));
		PhraseRecognizedEventArgs__ctor_m362E97ADA890AE34C5E062B0FEED70E46E110ECE((&L_11), L_4, L_5, L_6, L_8, L_10, /*hidden argument*/NULL);
		NullCheck(L_3);
		PhraseRecognizedDelegate_Invoke_m6136E32699B51A86EA0C594D338C7EC29F493478(L_3, L_11, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// UnityEngine.Windows.Speech.SemanticMeaning[] UnityEngine.Windows.Speech.PhraseRecognizer::MarshalSemanticMeaning(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* PhraseRecognizer_MarshalSemanticMeaning_m444804CA07F778FD0E23E78432EE0E377579C26A (intptr_t ___keys0, intptr_t ___values1, intptr_t ___valueSizes2, int32_t ___valueCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhraseRecognizer_MarshalSemanticMeaning_m444804CA07F778FD0E23E78432EE0E377579C26A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* V_9 = NULL;
	{
		int32_t L_0 = ___valueCount3;
		SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* L_1 = (SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D*)(SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D*)SZArrayNew(SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		V_2 = 0;
		goto IL_00a2;
	}

IL_0011:
	{
		intptr_t L_2 = ___valueSizes2;
		void* L_3 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_2, /*hidden argument*/NULL);
		int32_t L_4 = V_2;
		int32_t L_5 = *((uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_4)), (int32_t)4)))));
		V_3 = L_5;
		il2cpp_codegen_initobj((&V_5), sizeof(SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C ));
		intptr_t L_6 = ___keys0;
		void* L_7 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_2;
		uint32_t L_9 = sizeof(Il2CppChar*);
		String_t* L_10 = String_CreateString_m81EC77200D75146384415713DE908296720CFD95(NULL, (Il2CppChar*)(Il2CppChar*)(*((intptr_t*)((void*)il2cpp_codegen_add((intptr_t)L_7, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_8)), (int32_t)L_9)))))), /*hidden argument*/NULL);
		(&V_5)->set_key_0(L_10);
		uint32_t L_11 = V_3;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)L_11);
		(&V_5)->set_values_1(L_12);
		SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C  L_13 = V_5;
		V_4 = L_13;
		V_6 = 0;
		goto IL_0083;
	}

IL_005a:
	{
		SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C  L_14 = V_4;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = L_14.get_values_1();
		int32_t L_16 = V_6;
		intptr_t L_17 = ___values1;
		void* L_18 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_1;
		int32_t L_20 = V_6;
		uint32_t L_21 = sizeof(Il2CppChar*);
		String_t* L_22 = String_CreateString_m81EC77200D75146384415713DE908296720CFD95(NULL, (Il2CppChar*)(Il2CppChar*)(*((intptr_t*)((void*)il2cpp_codegen_add((intptr_t)L_18, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20)))), (int32_t)L_21)))))), /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_22);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (String_t*)L_22);
		int32_t L_23 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0083:
	{
		int32_t L_24 = V_6;
		uint32_t L_25 = V_3;
		V_7 = (bool)((((int64_t)(((int64_t)((int64_t)L_24)))) < ((int64_t)(((int64_t)((uint64_t)L_25)))))? 1 : 0);
		bool L_26 = V_7;
		if (L_26)
		{
			goto IL_005a;
		}
	}
	{
		SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* L_27 = V_0;
		int32_t L_28 = V_2;
		SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C  L_29 = V_4;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C )L_29);
		int32_t L_30 = V_1;
		uint32_t L_31 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_31));
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00a2:
	{
		int32_t L_33 = V_2;
		int32_t L_34 = ___valueCount3;
		V_8 = (bool)((((int32_t)L_33) < ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_8;
		if (L_35)
		{
			goto IL_0011;
		}
	}
	{
		SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* L_36 = V_0;
		V_9 = L_36;
		goto IL_00b4;
	}

IL_00b4:
	{
		SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* L_37 = V_9;
		return L_37;
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
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer_PhraseRecognizedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizedDelegate__ctor_m0D7CFE194591D6DEE1120B7E23917C77ED5027F1 (PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer_PhraseRecognizedDelegate::Invoke(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizedDelegate_Invoke_m6136E32699B51A86EA0C594D338C7EC29F493478 (PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * __this, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  ___args0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___args0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  >::Invoke(targetMethod, targetThis, ___args0);
					else
						GenericVirtActionInvoker1< PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  >::Invoke(targetMethod, targetThis, ___args0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___args0);
					else
						VirtActionInvoker1< PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___args0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___args0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___args0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.Speech.PhraseRecognizer_PhraseRecognizedDelegate::BeginInvoke(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PhraseRecognizedDelegate_BeginInvoke_m262B7DABBDF14FCBFF43293BF2FB06AC676CB962 (PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * __this, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  ___args0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhraseRecognizedDelegate_BeginInvoke_m262B7DABBDF14FCBFF43293BF2FB06AC676CB962_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_il2cpp_TypeInfo_var, &___args0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer_PhraseRecognizedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizedDelegate_EndInvoke_m53944ABF37F32936C799FBBD922F7ECD9B0235D4 (PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: UnityEngine.Windows.Speech.SemanticMeaning
IL2CPP_EXTERN_C void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_pinvoke(const SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C& unmarshaled, SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___values_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'values' of type 'SemanticMeaning'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___values_1Exception, NULL);
}
IL2CPP_EXTERN_C void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_pinvoke_back(const SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke& marshaled, SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C& unmarshaled)
{
	Exception_t* ___values_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'values' of type 'SemanticMeaning'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___values_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Windows.Speech.SemanticMeaning
IL2CPP_EXTERN_C void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_pinvoke_cleanup(SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Windows.Speech.SemanticMeaning
IL2CPP_EXTERN_C void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_com(const SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C& unmarshaled, SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com& marshaled)
{
	Exception_t* ___values_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'values' of type 'SemanticMeaning'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___values_1Exception, NULL);
}
IL2CPP_EXTERN_C void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_com_back(const SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com& marshaled, SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C& unmarshaled)
{
	Exception_t* ___values_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'values' of type 'SemanticMeaning'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___values_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Windows.Speech.SemanticMeaning
IL2CPP_EXTERN_C void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_com_cleanup(SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com& marshaled)
{
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
// Conversion methods for marshalling of: UnityEngine.Windows.WebCam.PhotoCapture
IL2CPP_EXTERN_C void PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshal_pinvoke(const PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777& unmarshaled, PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshaled_pinvoke& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
IL2CPP_EXTERN_C void PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshal_pinvoke_back(const PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshaled_pinvoke& marshaled, PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset((&unmarshaled_m_NativePtr_temp_0), 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Windows.WebCam.PhotoCapture
IL2CPP_EXTERN_C void PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshal_pinvoke_cleanup(PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Windows.WebCam.PhotoCapture
IL2CPP_EXTERN_C void PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshal_com(const PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777& unmarshaled, PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshaled_com& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
IL2CPP_EXTERN_C void PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshal_com_back(const PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshaled_com& marshaled, PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset((&unmarshaled_m_NativePtr_temp_0), 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Windows.WebCam.PhotoCapture
IL2CPP_EXTERN_C void PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshal_com_cleanup(PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshaled_com& marshaled)
{
}
// UnityEngine.Windows.WebCam.PhotoCapture_PhotoCaptureResult UnityEngine.Windows.WebCam.PhotoCapture::MakeCaptureResult(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  PhotoCapture_MakeCaptureResult_m30A1524DDA706A094516C9C1E191367B8194B2AA (int64_t ___hResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_MakeCaptureResult_m30A1524DDA706A094516C9C1E191367B8194B2AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900 ));
		int64_t L_0 = ___hResult0;
		IL2CPP_RUNTIME_CLASS_INIT(PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_il2cpp_TypeInfo_var);
		int64_t L_1 = ((PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_StaticFields*)il2cpp_codegen_static_fields_for(PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_il2cpp_TypeInfo_var))->get_HR_SUCCESS_1();
		V_2 = (bool)((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		V_1 = 0;
		goto IL_001f;
	}

IL_001b:
	{
		V_1 = 1;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		(&V_0)->set_resultType_0(L_3);
		int64_t L_4 = ___hResult0;
		(&V_0)->set_hResult_1(L_4);
		PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  L_5 = V_0;
		V_3 = L_5;
		goto IL_0033;
	}

IL_0033:
	{
		PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  L_6 = V_3;
		return L_6;
	}
}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture::InvokeOnCreatedResourceDelegate(UnityEngine.Windows.WebCam.PhotoCapture_OnCaptureResourceCreatedCallback,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCapture_InvokeOnCreatedResourceDelegate_mAEC319E9811B816A642DA8A135CCEC3CB91C75DA (OnCaptureResourceCreatedCallback_t00CFC0538D5EEAC5566A2694A721B14C4E4D8C71 * ___callback0, intptr_t ___nativePtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_InvokeOnCreatedResourceDelegate_mAEC319E9811B816A642DA8A135CCEC3CB91C75DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___nativePtr1;
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		OnCaptureResourceCreatedCallback_t00CFC0538D5EEAC5566A2694A721B14C4E4D8C71 * L_3 = ___callback0;
		NullCheck(L_3);
		OnCaptureResourceCreatedCallback_Invoke_m787BA10D9B4F55B5015FF0790E904D3822357A1A(L_3, (PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 *)NULL, /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_001c:
	{
		OnCaptureResourceCreatedCallback_t00CFC0538D5EEAC5566A2694A721B14C4E4D8C71 * L_4 = ___callback0;
		intptr_t L_5 = ___nativePtr1;
		PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 * L_6 = (PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 *)il2cpp_codegen_object_new(PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_il2cpp_TypeInfo_var);
		PhotoCapture__ctor_mD7209B9F37CC0D345E634824E5792EB186EED544(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		OnCaptureResourceCreatedCallback_Invoke_m787BA10D9B4F55B5015FF0790E904D3822357A1A(L_4, L_6, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCapture__ctor_mD7209B9F37CC0D345E634824E5792EB186EED544 (PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 * __this, intptr_t ___nativeCaptureObject0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativeCaptureObject0;
		__this->set_m_NativePtr_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture::InvokeOnPhotoModeStartedDelegate(UnityEngine.Windows.WebCam.PhotoCapture_OnPhotoModeStartedCallback,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCapture_InvokeOnPhotoModeStartedDelegate_m8C4172E50A49CDC9F2895BCE031428B4EE931CC2 (OnPhotoModeStartedCallback_t841E0EF9DDB4D172D4C8C7988B0C6E6E58E5832C * ___callback0, int64_t ___hResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_InvokeOnPhotoModeStartedDelegate_m8C4172E50A49CDC9F2895BCE031428B4EE931CC2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnPhotoModeStartedCallback_t841E0EF9DDB4D172D4C8C7988B0C6E6E58E5832C * L_0 = ___callback0;
		int64_t L_1 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_il2cpp_TypeInfo_var);
		PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  L_2 = PhotoCapture_MakeCaptureResult_m30A1524DDA706A094516C9C1E191367B8194B2AA(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		OnPhotoModeStartedCallback_Invoke_m55517FF76661702C2833E956934524EDBBF5A7C1(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture::InvokeOnPhotoModeStoppedDelegate(UnityEngine.Windows.WebCam.PhotoCapture_OnPhotoModeStoppedCallback,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCapture_InvokeOnPhotoModeStoppedDelegate_m17CFB212EE2F2E765241E0E6DD8F2B17E03B6F94 (OnPhotoModeStoppedCallback_tE546DABB1910B8CD82448A1D7C3311463F9EC238 * ___callback0, int64_t ___hResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_InvokeOnPhotoModeStoppedDelegate_m17CFB212EE2F2E765241E0E6DD8F2B17E03B6F94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnPhotoModeStoppedCallback_tE546DABB1910B8CD82448A1D7C3311463F9EC238 * L_0 = ___callback0;
		int64_t L_1 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_il2cpp_TypeInfo_var);
		PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  L_2 = PhotoCapture_MakeCaptureResult_m30A1524DDA706A094516C9C1E191367B8194B2AA(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		OnPhotoModeStoppedCallback_Invoke_m48D94A324C05FC097090E2C876AF6B4BC8EE13EE(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture::InvokeOnCapturedPhotoToDiskDelegate(UnityEngine.Windows.WebCam.PhotoCapture_OnCapturedToDiskCallback,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCapture_InvokeOnCapturedPhotoToDiskDelegate_mB6AEB939C6D1ACC29FA6E711E92924319674E604 (OnCapturedToDiskCallback_t79DD83842A2A9CB542DEC61160166D74CC342470 * ___callback0, int64_t ___hResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_InvokeOnCapturedPhotoToDiskDelegate_mB6AEB939C6D1ACC29FA6E711E92924319674E604_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnCapturedToDiskCallback_t79DD83842A2A9CB542DEC61160166D74CC342470 * L_0 = ___callback0;
		int64_t L_1 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_il2cpp_TypeInfo_var);
		PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  L_2 = PhotoCapture_MakeCaptureResult_m30A1524DDA706A094516C9C1E191367B8194B2AA(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		OnCapturedToDiskCallback_Invoke_m9117393C833DA86181047DD79B92317B940AEB06(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture::InvokeOnCapturedPhotoToMemoryDelegate(UnityEngine.Windows.WebCam.PhotoCapture_OnCapturedToMemoryCallback,System.Int64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCapture_InvokeOnCapturedPhotoToMemoryDelegate_m81F2206975AEBC72CBE1238EDA770DCE7F9A9ED8 (OnCapturedToMemoryCallback_tE28D3212036B829F321DCA04C358D61FDE0B47B2 * ___callback0, int64_t ___hResult1, intptr_t ___photoCaptureFramePtr2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_InvokeOnCapturedPhotoToMemoryDelegate_m81F2206975AEBC72CBE1238EDA770DCE7F9A9ED8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * V_0 = NULL;
	bool V_1 = false;
	{
		V_0 = (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D *)NULL;
		intptr_t L_0 = ___photoCaptureFramePtr2;
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		intptr_t L_3 = ___photoCaptureFramePtr2;
		PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * L_4 = (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D *)il2cpp_codegen_object_new(PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D_il2cpp_TypeInfo_var);
		PhotoCaptureFrame__ctor_m2200B47E027A635C22A6822CE3548BBFD38CFF01(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_001b:
	{
		OnCapturedToMemoryCallback_tE28D3212036B829F321DCA04C358D61FDE0B47B2 * L_5 = ___callback0;
		int64_t L_6 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_il2cpp_TypeInfo_var);
		PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  L_7 = PhotoCapture_MakeCaptureResult_m30A1524DDA706A094516C9C1E191367B8194B2AA(L_6, /*hidden argument*/NULL);
		PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * L_8 = V_0;
		NullCheck(L_5);
		OnCapturedToMemoryCallback_Invoke_m2382646696D4D08D880B9621E40F4E7CD969498E(L_5, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCapture_Dispose_mAC295018942A4ACBBC627647FE0F463C21F94CE0 (PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_Dispose_mAC295018942A4ACBBC627647FE0F463C21F94CE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_NativePtr_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		PhotoCapture_Dispose_Internal_m88BD45BC25F5336BF81ECF697CC14F5FC04D8234(__this, /*hidden argument*/NULL);
		__this->set_m_NativePtr_0((intptr_t)(0));
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture::Dispose_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCapture_Dispose_Internal_m88BD45BC25F5336BF81ECF697CC14F5FC04D8234 (PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 * __this, const RuntimeMethod* method)
{
	typedef void (*PhotoCapture_Dispose_Internal_m88BD45BC25F5336BF81ECF697CC14F5FC04D8234_ftn) (PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 *);
	static PhotoCapture_Dispose_Internal_m88BD45BC25F5336BF81ECF697CC14F5FC04D8234_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhotoCapture_Dispose_Internal_m88BD45BC25F5336BF81ECF697CC14F5FC04D8234_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.WebCam.PhotoCapture::Dispose_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCapture_Finalize_m8F5ABCCAA23CFF5949D6DC26EE6A164C2B952A42 (PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_Finalize_m8F5ABCCAA23CFF5949D6DC26EE6A164C2B952A42_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_NativePtr_0();
			bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
			V_0 = L_1;
			bool L_2 = V_0;
			if (!L_2)
			{
				goto IL_002a;
			}
		}

IL_0016:
		{
			PhotoCapture_DisposeThreaded_Internal_m2ECAF91B1E62B4B392A1CAA7953C5A599C6115B9(__this, /*hidden argument*/NULL);
			__this->set_m_NativePtr_0((intptr_t)(0));
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x34, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_0034:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture::DisposeThreaded_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCapture_DisposeThreaded_Internal_m2ECAF91B1E62B4B392A1CAA7953C5A599C6115B9 (PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 * __this, const RuntimeMethod* method)
{
	typedef void (*PhotoCapture_DisposeThreaded_Internal_m2ECAF91B1E62B4B392A1CAA7953C5A599C6115B9_ftn) (PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 *);
	static PhotoCapture_DisposeThreaded_Internal_m2ECAF91B1E62B4B392A1CAA7953C5A599C6115B9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhotoCapture_DisposeThreaded_Internal_m2ECAF91B1E62B4B392A1CAA7953C5A599C6115B9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.WebCam.PhotoCapture::DisposeThreaded_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCapture__cctor_mB6B5B17F07B739073CCE8934A6AF65A74DD53259 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture__cctor_mB6B5B17F07B739073CCE8934A6AF65A74DD53259_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_StaticFields*)il2cpp_codegen_static_fields_for(PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_il2cpp_TypeInfo_var))->set_HR_SUCCESS_1((((int64_t)((int64_t)0))));
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCaptureResourceCreatedCallback_t00CFC0538D5EEAC5566A2694A721B14C4E4D8C71 (OnCaptureResourceCreatedCallback_t00CFC0538D5EEAC5566A2694A721B14C4E4D8C71 * __this, PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 * ___captureObject0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___captureObject0' to native representation
	PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshaled_pinvoke ____captureObject0_marshaled = {};
	if (___captureObject0 != NULL)
	{
		PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshal_pinvoke(*___captureObject0, ____captureObject0_marshaled);
	}

	// Native function invocation
	il2cppPInvokeFunc(___captureObject0 != NULL ? (&____captureObject0_marshaled) : NULL);

	// Marshaling cleanup of parameter '___captureObject0' native representation
	if ((&____captureObject0_marshaled) != NULL)
	{
		PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777_marshal_pinvoke_cleanup(____captureObject0_marshaled);
	}

}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture_OnCaptureResourceCreatedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCaptureResourceCreatedCallback__ctor_mAAD465DAB1EA7C5EAEEF4D99E58E790A84523131 (OnCaptureResourceCreatedCallback_t00CFC0538D5EEAC5566A2694A721B14C4E4D8C71 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture_OnCaptureResourceCreatedCallback::Invoke(UnityEngine.Windows.WebCam.PhotoCapture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCaptureResourceCreatedCallback_Invoke_m787BA10D9B4F55B5015FF0790E904D3822357A1A (OnCaptureResourceCreatedCallback_t00CFC0538D5EEAC5566A2694A721B14C4E4D8C71 * __this, PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 * ___captureObject0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___captureObject0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___captureObject0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___captureObject0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___captureObject0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___captureObject0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___captureObject0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___captureObject0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 * >::Invoke(targetMethod, targetThis, ___captureObject0);
					else
						GenericVirtActionInvoker1< PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 * >::Invoke(targetMethod, targetThis, ___captureObject0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___captureObject0);
					else
						VirtActionInvoker1< PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___captureObject0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___captureObject0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___captureObject0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___captureObject0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.WebCam.PhotoCapture_OnCaptureResourceCreatedCallback::BeginInvoke(UnityEngine.Windows.WebCam.PhotoCapture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCaptureResourceCreatedCallback_BeginInvoke_mDC83388D4F69C259D3E383BB43257060AC0B9949 (OnCaptureResourceCreatedCallback_t00CFC0538D5EEAC5566A2694A721B14C4E4D8C71 * __this, PhotoCapture_tB402CDC116061CEDAA0D536DCA7AE494B25EE777 * ___captureObject0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___captureObject0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture_OnCaptureResourceCreatedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCaptureResourceCreatedCallback_EndInvoke_mB7FDC61A9CC48C49932893AC1FF1B48EBCAA4CF0 (OnCaptureResourceCreatedCallback_t00CFC0538D5EEAC5566A2694A721B14C4E4D8C71 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCapturedToDiskCallback_t79DD83842A2A9CB542DEC61160166D74CC342470 (OnCapturedToDiskCallback_t79DD83842A2A9CB542DEC61160166D74CC342470 * __this, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___result0);

}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture_OnCapturedToDiskCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCapturedToDiskCallback__ctor_m422F63D53BEB921A7685600FBE41069C79959EE3 (OnCapturedToDiskCallback_t79DD83842A2A9CB542DEC61160166D74CC342470 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture_OnCapturedToDiskCallback::Invoke(UnityEngine.Windows.WebCam.PhotoCapture_PhotoCaptureResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCapturedToDiskCallback_Invoke_m9117393C833DA86181047DD79B92317B940AEB06 (OnCapturedToDiskCallback_t79DD83842A2A9CB542DEC61160166D74CC342470 * __this, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  ___result0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  >::Invoke(targetMethod, targetThis, ___result0);
					else
						GenericVirtActionInvoker1< PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  >::Invoke(targetMethod, targetThis, ___result0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
					else
						VirtActionInvoker1< PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___result0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___result0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.WebCam.PhotoCapture_OnCapturedToDiskCallback::BeginInvoke(UnityEngine.Windows.WebCam.PhotoCapture_PhotoCaptureResult,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCapturedToDiskCallback_BeginInvoke_mBFF762F91DF363C1BC015BDEF93B1242A02FF9F6 (OnCapturedToDiskCallback_t79DD83842A2A9CB542DEC61160166D74CC342470 * __this, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  ___result0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnCapturedToDiskCallback_BeginInvoke_mBFF762F91DF363C1BC015BDEF93B1242A02FF9F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture_OnCapturedToDiskCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCapturedToDiskCallback_EndInvoke_mC2E3EC1D4522A7910110D94DECC7CCD0B21123D1 (OnCapturedToDiskCallback_t79DD83842A2A9CB542DEC61160166D74CC342470 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Windows.WebCam.PhotoCapture_OnCapturedToMemoryCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCapturedToMemoryCallback__ctor_m377769F37D6EA6AD73ED08D5A14564FCDFBFDACE (OnCapturedToMemoryCallback_tE28D3212036B829F321DCA04C358D61FDE0B47B2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture_OnCapturedToMemoryCallback::Invoke(UnityEngine.Windows.WebCam.PhotoCapture_PhotoCaptureResult,UnityEngine.Windows.WebCam.PhotoCaptureFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCapturedToMemoryCallback_Invoke_m2382646696D4D08D880B9621E40F4E7CD969498E (OnCapturedToMemoryCallback_tE28D3212036B829F321DCA04C358D61FDE0B47B2 * __this, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  ___result0, PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * ___photoCaptureFrame1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900 , PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, ___photoCaptureFrame1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900 , PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, ___photoCaptureFrame1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900 , PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * >::Invoke(targetMethod, targetThis, ___result0, ___photoCaptureFrame1);
					else
						GenericVirtActionInvoker2< PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900 , PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * >::Invoke(targetMethod, targetThis, ___result0, ___photoCaptureFrame1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900 , PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0, ___photoCaptureFrame1);
					else
						VirtActionInvoker2< PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900 , PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0, ___photoCaptureFrame1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___result0) - 1), ___photoCaptureFrame1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___result0) - 1), ___photoCaptureFrame1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900 , PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, ___photoCaptureFrame1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.WebCam.PhotoCapture_OnCapturedToMemoryCallback::BeginInvoke(UnityEngine.Windows.WebCam.PhotoCapture_PhotoCaptureResult,UnityEngine.Windows.WebCam.PhotoCaptureFrame,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCapturedToMemoryCallback_BeginInvoke_mD05157F78B546F75A987887C683FAC6A922A49B7 (OnCapturedToMemoryCallback_tE28D3212036B829F321DCA04C358D61FDE0B47B2 * __this, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  ___result0, PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * ___photoCaptureFrame1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnCapturedToMemoryCallback_BeginInvoke_mD05157F78B546F75A987887C683FAC6A922A49B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900_il2cpp_TypeInfo_var, &___result0);
	__d_args[1] = ___photoCaptureFrame1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture_OnCapturedToMemoryCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCapturedToMemoryCallback_EndInvoke_mE06069F070AC6C019F5C56BD3CEF38D43BDCF550 (OnCapturedToMemoryCallback_tE28D3212036B829F321DCA04C358D61FDE0B47B2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnPhotoModeStartedCallback_t841E0EF9DDB4D172D4C8C7988B0C6E6E58E5832C (OnPhotoModeStartedCallback_t841E0EF9DDB4D172D4C8C7988B0C6E6E58E5832C * __this, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___result0);

}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture_OnPhotoModeStartedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPhotoModeStartedCallback__ctor_m990C6B308C927E3A4CF7B9F6B5C8E100990F4030 (OnPhotoModeStartedCallback_t841E0EF9DDB4D172D4C8C7988B0C6E6E58E5832C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture_OnPhotoModeStartedCallback::Invoke(UnityEngine.Windows.WebCam.PhotoCapture_PhotoCaptureResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPhotoModeStartedCallback_Invoke_m55517FF76661702C2833E956934524EDBBF5A7C1 (OnPhotoModeStartedCallback_t841E0EF9DDB4D172D4C8C7988B0C6E6E58E5832C * __this, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  ___result0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  >::Invoke(targetMethod, targetThis, ___result0);
					else
						GenericVirtActionInvoker1< PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  >::Invoke(targetMethod, targetThis, ___result0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
					else
						VirtActionInvoker1< PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___result0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___result0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.WebCam.PhotoCapture_OnPhotoModeStartedCallback::BeginInvoke(UnityEngine.Windows.WebCam.PhotoCapture_PhotoCaptureResult,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnPhotoModeStartedCallback_BeginInvoke_mBCCD40B907D5289FBD9F4E306E68BED5E74D7E4E (OnPhotoModeStartedCallback_t841E0EF9DDB4D172D4C8C7988B0C6E6E58E5832C * __this, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  ___result0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPhotoModeStartedCallback_BeginInvoke_mBCCD40B907D5289FBD9F4E306E68BED5E74D7E4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture_OnPhotoModeStartedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPhotoModeStartedCallback_EndInvoke_m1302B87CE9EB9432AA4DB74D5DFDBD1823E5FD0C (OnPhotoModeStartedCallback_t841E0EF9DDB4D172D4C8C7988B0C6E6E58E5832C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnPhotoModeStoppedCallback_tE546DABB1910B8CD82448A1D7C3311463F9EC238 (OnPhotoModeStoppedCallback_tE546DABB1910B8CD82448A1D7C3311463F9EC238 * __this, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___result0);

}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture_OnPhotoModeStoppedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPhotoModeStoppedCallback__ctor_m8A90D66450A8C11352A39C2A61ECA8B4AE482933 (OnPhotoModeStoppedCallback_tE546DABB1910B8CD82448A1D7C3311463F9EC238 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture_OnPhotoModeStoppedCallback::Invoke(UnityEngine.Windows.WebCam.PhotoCapture_PhotoCaptureResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPhotoModeStoppedCallback_Invoke_m48D94A324C05FC097090E2C876AF6B4BC8EE13EE (OnPhotoModeStoppedCallback_tE546DABB1910B8CD82448A1D7C3311463F9EC238 * __this, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  ___result0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  >::Invoke(targetMethod, targetThis, ___result0);
					else
						GenericVirtActionInvoker1< PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  >::Invoke(targetMethod, targetThis, ___result0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
					else
						VirtActionInvoker1< PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___result0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___result0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.WebCam.PhotoCapture_OnPhotoModeStoppedCallback::BeginInvoke(UnityEngine.Windows.WebCam.PhotoCapture_PhotoCaptureResult,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnPhotoModeStoppedCallback_BeginInvoke_m21A3D9F9B428F00D754B8C4DFAFC6E5C594E5B35 (OnPhotoModeStoppedCallback_tE546DABB1910B8CD82448A1D7C3311463F9EC238 * __this, PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900  ___result0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPhotoModeStoppedCallback_BeginInvoke_m21A3D9F9B428F00D754B8C4DFAFC6E5C594E5B35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(PhotoCaptureResult_tCA8987284B3260E035A45A98C6B46485952A3900_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Windows.WebCam.PhotoCapture_OnPhotoModeStoppedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPhotoModeStoppedCallback_EndInvoke_m32021025A8CCD26030D859237B8304EC0CAF06AD (OnPhotoModeStoppedCallback_tE546DABB1910B8CD82448A1D7C3311463F9EC238 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.Windows.WebCam.PhotoCaptureFrame::get_dataLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotoCaptureFrame_get_dataLength_m2169CBC908EF8673C1876952BCB9C1642706849C (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CdataLengthU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Windows.WebCam.PhotoCaptureFrame::set_dataLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCaptureFrame_set_dataLength_m708C3983B97B7470A4E7A4692A590E5338465A5B (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CdataLengthU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Windows.WebCam.PhotoCaptureFrame::set_hasLocationData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCaptureFrame_set_hasLocationData_mA2E608666F3D923EEBCFFD1F2A8534BFAC938CD9 (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3ChasLocationDataU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Windows.WebCam.PhotoCaptureFrame::set_pixelFormat(UnityEngine.Windows.WebCam.CapturePixelFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCaptureFrame_set_pixelFormat_m956028BE24FB4646618B56A24CDB9559026B78D4 (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpixelFormatU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Windows.WebCam.PhotoCaptureFrame::GetDataLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotoCaptureFrame_GetDataLength_m2D4FC19B5BEED3478C681DD941F7018F142788DB (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, const RuntimeMethod* method)
{
	typedef int32_t (*PhotoCaptureFrame_GetDataLength_m2D4FC19B5BEED3478C681DD941F7018F142788DB_ftn) (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D *);
	static PhotoCaptureFrame_GetDataLength_m2D4FC19B5BEED3478C681DD941F7018F142788DB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhotoCaptureFrame_GetDataLength_m2D4FC19B5BEED3478C681DD941F7018F142788DB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.WebCam.PhotoCaptureFrame::GetDataLength()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Windows.WebCam.PhotoCaptureFrame::GetHasLocationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotoCaptureFrame_GetHasLocationData_m01BDCAD79360F3BAF759FF2A9EB2963C480BEF42 (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, const RuntimeMethod* method)
{
	typedef bool (*PhotoCaptureFrame_GetHasLocationData_m01BDCAD79360F3BAF759FF2A9EB2963C480BEF42_ftn) (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D *);
	static PhotoCaptureFrame_GetHasLocationData_m01BDCAD79360F3BAF759FF2A9EB2963C480BEF42_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhotoCaptureFrame_GetHasLocationData_m01BDCAD79360F3BAF759FF2A9EB2963C480BEF42_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.WebCam.PhotoCaptureFrame::GetHasLocationData()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Windows.WebCam.CapturePixelFormat UnityEngine.Windows.WebCam.PhotoCaptureFrame::GetCapturePixelFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotoCaptureFrame_GetCapturePixelFormat_mD1DED87FE85284782AE1533390314119BD1B5C6E (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, const RuntimeMethod* method)
{
	typedef int32_t (*PhotoCaptureFrame_GetCapturePixelFormat_mD1DED87FE85284782AE1533390314119BD1B5C6E_ftn) (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D *);
	static PhotoCaptureFrame_GetCapturePixelFormat_mD1DED87FE85284782AE1533390314119BD1B5C6E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhotoCaptureFrame_GetCapturePixelFormat_mD1DED87FE85284782AE1533390314119BD1B5C6E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.WebCam.PhotoCaptureFrame::GetCapturePixelFormat()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Windows.WebCam.PhotoCaptureFrame::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCaptureFrame__ctor_m2200B47E027A635C22A6822CE3548BBFD38CFF01 (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, intptr_t ___nativePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCaptureFrame__ctor_m2200B47E027A635C22A6822CE3548BBFD38CFF01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativePtr0;
		__this->set_m_NativePtr_0((intptr_t)L_0);
		int32_t L_1 = PhotoCaptureFrame_GetDataLength_m2D4FC19B5BEED3478C681DD941F7018F142788DB(__this, /*hidden argument*/NULL);
		PhotoCaptureFrame_set_dataLength_m708C3983B97B7470A4E7A4692A590E5338465A5B_inline(__this, L_1, /*hidden argument*/NULL);
		bool L_2 = PhotoCaptureFrame_GetHasLocationData_m01BDCAD79360F3BAF759FF2A9EB2963C480BEF42(__this, /*hidden argument*/NULL);
		PhotoCaptureFrame_set_hasLocationData_mA2E608666F3D923EEBCFFD1F2A8534BFAC938CD9_inline(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = PhotoCaptureFrame_GetCapturePixelFormat_mD1DED87FE85284782AE1533390314119BD1B5C6E(__this, /*hidden argument*/NULL);
		PhotoCaptureFrame_set_pixelFormat_m956028BE24FB4646618B56A24CDB9559026B78D4_inline(__this, L_3, /*hidden argument*/NULL);
		int32_t L_4 = PhotoCaptureFrame_get_dataLength_m2169CBC908EF8673C1876952BCB9C1642706849C_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_AddMemoryPressure_mF48FE7CA2DC4D23FDD5B7B0A7D0B6C1C598771CE((((int64_t)((int64_t)L_4))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Windows.WebCam.PhotoCaptureFrame::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCaptureFrame_Cleanup_m4F7B4E31415ABD61458F394F09597B9CE31C9E0C (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCaptureFrame_Cleanup_m4F7B4E31415ABD61458F394F09597B9CE31C9E0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_NativePtr_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_3 = PhotoCaptureFrame_get_dataLength_m2169CBC908EF8673C1876952BCB9C1642706849C_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_RemoveMemoryPressure_mBA7395DAA88C4F1656648172EE98A14F2E726704((((int64_t)((int64_t)L_3))), /*hidden argument*/NULL);
		PhotoCaptureFrame_Dispose_Internal_m24C9E95622D5362B90B3B9231F3E773E4C8B5ECB(__this, /*hidden argument*/NULL);
		__this->set_m_NativePtr_0((intptr_t)(0));
	}

IL_0036:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.WebCam.PhotoCaptureFrame::Dispose_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCaptureFrame_Dispose_Internal_m24C9E95622D5362B90B3B9231F3E773E4C8B5ECB (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, const RuntimeMethod* method)
{
	typedef void (*PhotoCaptureFrame_Dispose_Internal_m24C9E95622D5362B90B3B9231F3E773E4C8B5ECB_ftn) (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D *);
	static PhotoCaptureFrame_Dispose_Internal_m24C9E95622D5362B90B3B9231F3E773E4C8B5ECB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhotoCaptureFrame_Dispose_Internal_m24C9E95622D5362B90B3B9231F3E773E4C8B5ECB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.WebCam.PhotoCaptureFrame::Dispose_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Windows.WebCam.PhotoCaptureFrame::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCaptureFrame_Dispose_mA569A16F2EE402B143C252D57B6C93040B81BABD (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCaptureFrame_Dispose_mA569A16F2EE402B143C252D57B6C93040B81BABD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PhotoCaptureFrame_Cleanup_m4F7B4E31415ABD61458F394F09597B9CE31C9E0C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Windows.WebCam.PhotoCaptureFrame::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCaptureFrame_Finalize_m597A19661FD4FDF0B20C50E16891C559B3826EAA (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		PhotoCaptureFrame_Cleanup_m4F7B4E31415ABD61458F394F09597B9CE31C9E0C(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x13, IL_0013)
	}

IL_0013:
	{
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
// Conversion methods for marshalling of: UnityEngine.Windows.WebCam.VideoCapture
IL2CPP_EXTERN_C void VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshal_pinvoke(const VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881& unmarshaled, VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshaled_pinvoke& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
IL2CPP_EXTERN_C void VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshal_pinvoke_back(const VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshaled_pinvoke& marshaled, VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset((&unmarshaled_m_NativePtr_temp_0), 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Windows.WebCam.VideoCapture
IL2CPP_EXTERN_C void VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshal_pinvoke_cleanup(VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Windows.WebCam.VideoCapture
IL2CPP_EXTERN_C void VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshal_com(const VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881& unmarshaled, VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshaled_com& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
IL2CPP_EXTERN_C void VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshal_com_back(const VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshaled_com& marshaled, VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset((&unmarshaled_m_NativePtr_temp_0), 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Windows.WebCam.VideoCapture
IL2CPP_EXTERN_C void VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshal_com_cleanup(VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshaled_com& marshaled)
{
}
// UnityEngine.Windows.WebCam.VideoCapture_VideoCaptureResult UnityEngine.Windows.WebCam.VideoCapture::MakeCaptureResult(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  VideoCapture_MakeCaptureResult_m8E3FDAF1FB4B3F56197D02ECB1E94BA16ED01524 (int64_t ___hResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_MakeCaptureResult_m8E3FDAF1FB4B3F56197D02ECB1E94BA16ED01524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A ));
		int64_t L_0 = ___hResult0;
		IL2CPP_RUNTIME_CLASS_INIT(VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_il2cpp_TypeInfo_var);
		int64_t L_1 = ((VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_StaticFields*)il2cpp_codegen_static_fields_for(VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_il2cpp_TypeInfo_var))->get_HR_SUCCESS_1();
		V_2 = (bool)((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		V_1 = 0;
		goto IL_001f;
	}

IL_001b:
	{
		V_1 = 1;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		(&V_0)->set_resultType_0(L_3);
		int64_t L_4 = ___hResult0;
		(&V_0)->set_hResult_1(L_4);
		VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  L_5 = V_0;
		V_3 = L_5;
		goto IL_0033;
	}

IL_0033:
	{
		VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  L_6 = V_3;
		return L_6;
	}
}
// System.Void UnityEngine.Windows.WebCam.VideoCapture::InvokeOnCreatedVideoCaptureResourceDelegate(UnityEngine.Windows.WebCam.VideoCapture_OnVideoCaptureResourceCreatedCallback,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCapture_InvokeOnCreatedVideoCaptureResourceDelegate_mF9883CC0DE032FC32261999B5DBA0FA3B97BEA12 (OnVideoCaptureResourceCreatedCallback_t71BBEF80D26688A87A1142D752CCEF22C773DD2C * ___callback0, intptr_t ___nativePtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_InvokeOnCreatedVideoCaptureResourceDelegate_mF9883CC0DE032FC32261999B5DBA0FA3B97BEA12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___nativePtr1;
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		OnVideoCaptureResourceCreatedCallback_t71BBEF80D26688A87A1142D752CCEF22C773DD2C * L_3 = ___callback0;
		NullCheck(L_3);
		OnVideoCaptureResourceCreatedCallback_Invoke_mCBAB47A08804FC4A040E3E6D0DB626A3C3471182(L_3, (VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 *)NULL, /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_001c:
	{
		OnVideoCaptureResourceCreatedCallback_t71BBEF80D26688A87A1142D752CCEF22C773DD2C * L_4 = ___callback0;
		intptr_t L_5 = ___nativePtr1;
		VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 * L_6 = (VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 *)il2cpp_codegen_object_new(VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_il2cpp_TypeInfo_var);
		VideoCapture__ctor_m0FE3A72AA0BE57264435FD94F28228F5A82E15FB(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		OnVideoCaptureResourceCreatedCallback_Invoke_mCBAB47A08804FC4A040E3E6D0DB626A3C3471182(L_4, L_6, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.WebCam.VideoCapture::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCapture__ctor_m0FE3A72AA0BE57264435FD94F28228F5A82E15FB (VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 * __this, intptr_t ___nativeCaptureObject0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativeCaptureObject0;
		__this->set_m_NativePtr_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.Windows.WebCam.VideoCapture::InvokeOnVideoModeStartedDelegate(UnityEngine.Windows.WebCam.VideoCapture_OnVideoModeStartedCallback,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCapture_InvokeOnVideoModeStartedDelegate_m26310208BD52CAC57B4F7581FBAFC7EEF491EA98 (OnVideoModeStartedCallback_t02A8F71807C17735B0CA19F94FF41F6E5DD7260A * ___callback0, int64_t ___hResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_InvokeOnVideoModeStartedDelegate_m26310208BD52CAC57B4F7581FBAFC7EEF491EA98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnVideoModeStartedCallback_t02A8F71807C17735B0CA19F94FF41F6E5DD7260A * L_0 = ___callback0;
		int64_t L_1 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_il2cpp_TypeInfo_var);
		VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  L_2 = VideoCapture_MakeCaptureResult_m8E3FDAF1FB4B3F56197D02ECB1E94BA16ED01524(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		OnVideoModeStartedCallback_Invoke_mB9A2828F520201F753009139BDB2C193A38687A0(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Windows.WebCam.VideoCapture::InvokeOnVideoModeStoppedDelegate(UnityEngine.Windows.WebCam.VideoCapture_OnVideoModeStoppedCallback,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCapture_InvokeOnVideoModeStoppedDelegate_mD5BD41E17DC995244E5466CBAA9C370168EE12C2 (OnVideoModeStoppedCallback_tE545030F7C008F72708C7647CC3F464FB4B2CA80 * ___callback0, int64_t ___hResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_InvokeOnVideoModeStoppedDelegate_mD5BD41E17DC995244E5466CBAA9C370168EE12C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnVideoModeStoppedCallback_tE545030F7C008F72708C7647CC3F464FB4B2CA80 * L_0 = ___callback0;
		int64_t L_1 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_il2cpp_TypeInfo_var);
		VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  L_2 = VideoCapture_MakeCaptureResult_m8E3FDAF1FB4B3F56197D02ECB1E94BA16ED01524(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		OnVideoModeStoppedCallback_Invoke_m2CFBF6763FCED9C9201834019A962EACF2F1D088(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Windows.WebCam.VideoCapture::InvokeOnStartedRecordingVideoToDiskDelegate(UnityEngine.Windows.WebCam.VideoCapture_OnStartedRecordingVideoCallback,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCapture_InvokeOnStartedRecordingVideoToDiskDelegate_m6D5AEC9ACC849B33AA27AEC954FF67C8333505F2 (OnStartedRecordingVideoCallback_tCE5B6ECCEF3D04ABD663876B05D3B17509F90581 * ___callback0, int64_t ___hResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_InvokeOnStartedRecordingVideoToDiskDelegate_m6D5AEC9ACC849B33AA27AEC954FF67C8333505F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnStartedRecordingVideoCallback_tCE5B6ECCEF3D04ABD663876B05D3B17509F90581 * L_0 = ___callback0;
		int64_t L_1 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_il2cpp_TypeInfo_var);
		VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  L_2 = VideoCapture_MakeCaptureResult_m8E3FDAF1FB4B3F56197D02ECB1E94BA16ED01524(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		OnStartedRecordingVideoCallback_Invoke_mE31381DAE5B30D92A9186FA747C5AC023048114D(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Windows.WebCam.VideoCapture::InvokeOnStoppedRecordingVideoToDiskDelegate(UnityEngine.Windows.WebCam.VideoCapture_OnStoppedRecordingVideoCallback,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCapture_InvokeOnStoppedRecordingVideoToDiskDelegate_m2F132EE579D852F77A5F70639EDEE85E7AE13739 (OnStoppedRecordingVideoCallback_tFC1F4FA389F16A93BBC8A2128ACAFD3C6AAA763A * ___callback0, int64_t ___hResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_InvokeOnStoppedRecordingVideoToDiskDelegate_m2F132EE579D852F77A5F70639EDEE85E7AE13739_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnStoppedRecordingVideoCallback_tFC1F4FA389F16A93BBC8A2128ACAFD3C6AAA763A * L_0 = ___callback0;
		int64_t L_1 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_il2cpp_TypeInfo_var);
		VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  L_2 = VideoCapture_MakeCaptureResult_m8E3FDAF1FB4B3F56197D02ECB1E94BA16ED01524(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		OnStoppedRecordingVideoCallback_Invoke_mA23DA19077DFC878FC21A80106550E09E514EDF4(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Windows.WebCam.VideoCapture::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCapture_Dispose_m05A80B67D93D420B5FFA350028C62AC7C3A2791F (VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_Dispose_m05A80B67D93D420B5FFA350028C62AC7C3A2791F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_NativePtr_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		VideoCapture_Dispose_Internal_m544E2E76F43A934DA00C58277E89C27E96A6F952(__this, /*hidden argument*/NULL);
		__this->set_m_NativePtr_0((intptr_t)(0));
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Windows.WebCam.VideoCapture::Dispose_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCapture_Dispose_Internal_m544E2E76F43A934DA00C58277E89C27E96A6F952 (VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 * __this, const RuntimeMethod* method)
{
	typedef void (*VideoCapture_Dispose_Internal_m544E2E76F43A934DA00C58277E89C27E96A6F952_ftn) (VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 *);
	static VideoCapture_Dispose_Internal_m544E2E76F43A934DA00C58277E89C27E96A6F952_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoCapture_Dispose_Internal_m544E2E76F43A934DA00C58277E89C27E96A6F952_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.WebCam.VideoCapture::Dispose_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Windows.WebCam.VideoCapture::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCapture_Finalize_m7B97B93616E65E61B55F4D9B6784E65C4916C2F2 (VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_Finalize_m7B97B93616E65E61B55F4D9B6784E65C4916C2F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_NativePtr_0();
			bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
			V_0 = L_1;
			bool L_2 = V_0;
			if (!L_2)
			{
				goto IL_002a;
			}
		}

IL_0016:
		{
			VideoCapture_DisposeThreaded_Internal_m731C1AD152F8A05604EC9B286FA69C1591A71068(__this, /*hidden argument*/NULL);
			__this->set_m_NativePtr_0((intptr_t)(0));
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x34, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_0034:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.WebCam.VideoCapture::DisposeThreaded_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCapture_DisposeThreaded_Internal_m731C1AD152F8A05604EC9B286FA69C1591A71068 (VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 * __this, const RuntimeMethod* method)
{
	typedef void (*VideoCapture_DisposeThreaded_Internal_m731C1AD152F8A05604EC9B286FA69C1591A71068_ftn) (VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 *);
	static VideoCapture_DisposeThreaded_Internal_m731C1AD152F8A05604EC9B286FA69C1591A71068_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoCapture_DisposeThreaded_Internal_m731C1AD152F8A05604EC9B286FA69C1591A71068_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.WebCam.VideoCapture::DisposeThreaded_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Windows.WebCam.VideoCapture::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCapture__cctor_m575F77433389795AB691B84D88DD79C1D2CFBD06 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture__cctor_m575F77433389795AB691B84D88DD79C1D2CFBD06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_StaticFields*)il2cpp_codegen_static_fields_for(VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_il2cpp_TypeInfo_var))->set_HR_SUCCESS_1((((int64_t)((int64_t)0))));
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnStartedRecordingVideoCallback_tCE5B6ECCEF3D04ABD663876B05D3B17509F90581 (OnStartedRecordingVideoCallback_tCE5B6ECCEF3D04ABD663876B05D3B17509F90581 * __this, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___result0);

}
// System.Void UnityEngine.Windows.WebCam.VideoCapture_OnStartedRecordingVideoCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartedRecordingVideoCallback__ctor_m5303F5AED4F0183EB22E5108148404E8B1DF7ECD (OnStartedRecordingVideoCallback_tCE5B6ECCEF3D04ABD663876B05D3B17509F90581 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.WebCam.VideoCapture_OnStartedRecordingVideoCallback::Invoke(UnityEngine.Windows.WebCam.VideoCapture_VideoCaptureResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartedRecordingVideoCallback_Invoke_mE31381DAE5B30D92A9186FA747C5AC023048114D (OnStartedRecordingVideoCallback_tCE5B6ECCEF3D04ABD663876B05D3B17509F90581 * __this, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  ___result0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  >::Invoke(targetMethod, targetThis, ___result0);
					else
						GenericVirtActionInvoker1< VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  >::Invoke(targetMethod, targetThis, ___result0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
					else
						VirtActionInvoker1< VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___result0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___result0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.WebCam.VideoCapture_OnStartedRecordingVideoCallback::BeginInvoke(UnityEngine.Windows.WebCam.VideoCapture_VideoCaptureResult,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnStartedRecordingVideoCallback_BeginInvoke_m64CB638B651C771C976BC6251A897DBC33F9FFE7 (OnStartedRecordingVideoCallback_tCE5B6ECCEF3D04ABD663876B05D3B17509F90581 * __this, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  ___result0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnStartedRecordingVideoCallback_BeginInvoke_m64CB638B651C771C976BC6251A897DBC33F9FFE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Windows.WebCam.VideoCapture_OnStartedRecordingVideoCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartedRecordingVideoCallback_EndInvoke_mD9413A65A1749390BD613712A3DD510650A1D267 (OnStartedRecordingVideoCallback_tCE5B6ECCEF3D04ABD663876B05D3B17509F90581 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnStoppedRecordingVideoCallback_tFC1F4FA389F16A93BBC8A2128ACAFD3C6AAA763A (OnStoppedRecordingVideoCallback_tFC1F4FA389F16A93BBC8A2128ACAFD3C6AAA763A * __this, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___result0);

}
// System.Void UnityEngine.Windows.WebCam.VideoCapture_OnStoppedRecordingVideoCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStoppedRecordingVideoCallback__ctor_m87A4D9B5EEF3E3C1C32B7A56D5D60FDAE77890A3 (OnStoppedRecordingVideoCallback_tFC1F4FA389F16A93BBC8A2128ACAFD3C6AAA763A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.WebCam.VideoCapture_OnStoppedRecordingVideoCallback::Invoke(UnityEngine.Windows.WebCam.VideoCapture_VideoCaptureResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStoppedRecordingVideoCallback_Invoke_mA23DA19077DFC878FC21A80106550E09E514EDF4 (OnStoppedRecordingVideoCallback_tFC1F4FA389F16A93BBC8A2128ACAFD3C6AAA763A * __this, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  ___result0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  >::Invoke(targetMethod, targetThis, ___result0);
					else
						GenericVirtActionInvoker1< VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  >::Invoke(targetMethod, targetThis, ___result0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
					else
						VirtActionInvoker1< VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___result0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___result0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.WebCam.VideoCapture_OnStoppedRecordingVideoCallback::BeginInvoke(UnityEngine.Windows.WebCam.VideoCapture_VideoCaptureResult,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnStoppedRecordingVideoCallback_BeginInvoke_mA96640AB5DA79F3C8C07367769094492D30056BB (OnStoppedRecordingVideoCallback_tFC1F4FA389F16A93BBC8A2128ACAFD3C6AAA763A * __this, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  ___result0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnStoppedRecordingVideoCallback_BeginInvoke_mA96640AB5DA79F3C8C07367769094492D30056BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Windows.WebCam.VideoCapture_OnStoppedRecordingVideoCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStoppedRecordingVideoCallback_EndInvoke_mF7901932350D8462A33A68A8ACD4FCFE21AF383D (OnStoppedRecordingVideoCallback_tFC1F4FA389F16A93BBC8A2128ACAFD3C6AAA763A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnVideoCaptureResourceCreatedCallback_t71BBEF80D26688A87A1142D752CCEF22C773DD2C (OnVideoCaptureResourceCreatedCallback_t71BBEF80D26688A87A1142D752CCEF22C773DD2C * __this, VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 * ___captureObject0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___captureObject0' to native representation
	VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshaled_pinvoke ____captureObject0_marshaled = {};
	if (___captureObject0 != NULL)
	{
		VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshal_pinvoke(*___captureObject0, ____captureObject0_marshaled);
	}

	// Native function invocation
	il2cppPInvokeFunc(___captureObject0 != NULL ? (&____captureObject0_marshaled) : NULL);

	// Marshaling cleanup of parameter '___captureObject0' native representation
	if ((&____captureObject0_marshaled) != NULL)
	{
		VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881_marshal_pinvoke_cleanup(____captureObject0_marshaled);
	}

}
// System.Void UnityEngine.Windows.WebCam.VideoCapture_OnVideoCaptureResourceCreatedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVideoCaptureResourceCreatedCallback__ctor_m8126E742A34950E1A69239EA771F99FB4BF0C751 (OnVideoCaptureResourceCreatedCallback_t71BBEF80D26688A87A1142D752CCEF22C773DD2C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.WebCam.VideoCapture_OnVideoCaptureResourceCreatedCallback::Invoke(UnityEngine.Windows.WebCam.VideoCapture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVideoCaptureResourceCreatedCallback_Invoke_mCBAB47A08804FC4A040E3E6D0DB626A3C3471182 (OnVideoCaptureResourceCreatedCallback_t71BBEF80D26688A87A1142D752CCEF22C773DD2C * __this, VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 * ___captureObject0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___captureObject0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___captureObject0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___captureObject0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___captureObject0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___captureObject0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___captureObject0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___captureObject0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 * >::Invoke(targetMethod, targetThis, ___captureObject0);
					else
						GenericVirtActionInvoker1< VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 * >::Invoke(targetMethod, targetThis, ___captureObject0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___captureObject0);
					else
						VirtActionInvoker1< VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___captureObject0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___captureObject0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___captureObject0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___captureObject0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.WebCam.VideoCapture_OnVideoCaptureResourceCreatedCallback::BeginInvoke(UnityEngine.Windows.WebCam.VideoCapture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnVideoCaptureResourceCreatedCallback_BeginInvoke_m6EE12058C9073F8075C6104E3793156BC232A0F1 (OnVideoCaptureResourceCreatedCallback_t71BBEF80D26688A87A1142D752CCEF22C773DD2C * __this, VideoCapture_t4734DCC077BF00B8ECC6E70FECD72AEE7FBB7881 * ___captureObject0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___captureObject0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Windows.WebCam.VideoCapture_OnVideoCaptureResourceCreatedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVideoCaptureResourceCreatedCallback_EndInvoke_m991BC133674B0CC5BD3DFA0114DB7612B1A5297A (OnVideoCaptureResourceCreatedCallback_t71BBEF80D26688A87A1142D752CCEF22C773DD2C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnVideoModeStartedCallback_t02A8F71807C17735B0CA19F94FF41F6E5DD7260A (OnVideoModeStartedCallback_t02A8F71807C17735B0CA19F94FF41F6E5DD7260A * __this, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___result0);

}
// System.Void UnityEngine.Windows.WebCam.VideoCapture_OnVideoModeStartedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVideoModeStartedCallback__ctor_m1753A0D7909741085AEC31818DDFB57D59EBE539 (OnVideoModeStartedCallback_t02A8F71807C17735B0CA19F94FF41F6E5DD7260A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.WebCam.VideoCapture_OnVideoModeStartedCallback::Invoke(UnityEngine.Windows.WebCam.VideoCapture_VideoCaptureResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVideoModeStartedCallback_Invoke_mB9A2828F520201F753009139BDB2C193A38687A0 (OnVideoModeStartedCallback_t02A8F71807C17735B0CA19F94FF41F6E5DD7260A * __this, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  ___result0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  >::Invoke(targetMethod, targetThis, ___result0);
					else
						GenericVirtActionInvoker1< VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  >::Invoke(targetMethod, targetThis, ___result0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
					else
						VirtActionInvoker1< VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___result0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___result0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.WebCam.VideoCapture_OnVideoModeStartedCallback::BeginInvoke(UnityEngine.Windows.WebCam.VideoCapture_VideoCaptureResult,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnVideoModeStartedCallback_BeginInvoke_m95E5682FF37266B911974288C4E9090187B416C0 (OnVideoModeStartedCallback_t02A8F71807C17735B0CA19F94FF41F6E5DD7260A * __this, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  ___result0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnVideoModeStartedCallback_BeginInvoke_m95E5682FF37266B911974288C4E9090187B416C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Windows.WebCam.VideoCapture_OnVideoModeStartedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVideoModeStartedCallback_EndInvoke_mFF236A689DD47097F9CACB33E48B8D8410B8507D (OnVideoModeStartedCallback_t02A8F71807C17735B0CA19F94FF41F6E5DD7260A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnVideoModeStoppedCallback_tE545030F7C008F72708C7647CC3F464FB4B2CA80 (OnVideoModeStoppedCallback_tE545030F7C008F72708C7647CC3F464FB4B2CA80 * __this, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___result0);

}
// System.Void UnityEngine.Windows.WebCam.VideoCapture_OnVideoModeStoppedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVideoModeStoppedCallback__ctor_mDAB9D65B5DCFFF1D4BF5C3109D7C95051818A6C8 (OnVideoModeStoppedCallback_tE545030F7C008F72708C7647CC3F464FB4B2CA80 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.WebCam.VideoCapture_OnVideoModeStoppedCallback::Invoke(UnityEngine.Windows.WebCam.VideoCapture_VideoCaptureResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVideoModeStoppedCallback_Invoke_m2CFBF6763FCED9C9201834019A962EACF2F1D088 (OnVideoModeStoppedCallback_tE545030F7C008F72708C7647CC3F464FB4B2CA80 * __this, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  ___result0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  >::Invoke(targetMethod, targetThis, ___result0);
					else
						GenericVirtActionInvoker1< VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  >::Invoke(targetMethod, targetThis, ___result0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
					else
						VirtActionInvoker1< VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___result0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___result0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.WebCam.VideoCapture_OnVideoModeStoppedCallback::BeginInvoke(UnityEngine.Windows.WebCam.VideoCapture_VideoCaptureResult,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnVideoModeStoppedCallback_BeginInvoke_m21579FF978236D09DEB3AC1F508A4EF4A04A8FAB (OnVideoModeStoppedCallback_tE545030F7C008F72708C7647CC3F464FB4B2CA80 * __this, VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A  ___result0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnVideoModeStoppedCallback_BeginInvoke_m21579FF978236D09DEB3AC1F508A4EF4A04A8FAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(VideoCaptureResult_t68444D73B1DD8952CF970D983DFF25517C7C516A_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Windows.WebCam.VideoCapture_OnVideoModeStoppedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVideoModeStoppedCallback_EndInvoke_mB36D35F04396E8787C3053B300DBDA24E2562DE2 (OnVideoModeStoppedCallback_tE545030F7C008F72708C7647CC3F464FB4B2CA80 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
IL2CPP_EXTERN_C void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke(const YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44& unmarshaled, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke_back(const YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke& marshaled, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
IL2CPP_EXTERN_C void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke_cleanup(YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
IL2CPP_EXTERN_C void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_com(const YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44& unmarshaled, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_com_back(const YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com& marshaled, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
IL2CPP_EXTERN_C void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_com_cleanup(YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.YieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstruction__ctor_mA72AD367FB081E0C2493649C6E8F7CFC592AB620 (YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44 * __this, const RuntimeMethod* method)
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
// System.Boolean UnityEngine._Scripting.APIUpdating.APIUpdaterRuntimeHelpers::GetMovedFromAttributeDataForType(System.Type,System.String&,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool APIUpdaterRuntimeHelpers_GetMovedFromAttributeDataForType_m2574674719979232087612C3C17A760E439BCA45 (Type_t * ___sourceType0, String_t** ___assembly1, String_t** ___nsp2, String_t** ___klass3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (APIUpdaterRuntimeHelpers_GetMovedFromAttributeDataForType_m2574674719979232087612C3C17A760E439BCA45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	MovedFromAttribute_tE9A667A7698BEF9EA09BF23E4308CD1EC2099162 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		String_t** L_0 = ___klass3;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		String_t** L_1 = ___nsp2;
		*((RuntimeObject **)L_1) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_1, (void*)(RuntimeObject *)NULL);
		String_t** L_2 = ___assembly1;
		*((RuntimeObject **)L_2) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)NULL);
		Type_t * L_3 = ___sourceType0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (MovedFromAttribute_tE9A667A7698BEF9EA09BF23E4308CD1EC2099162_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = VirtFuncInvoker2< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, Type_t *, bool >::Invoke(11 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_3, L_5, (bool)0);
		V_0 = L_6;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = V_0;
		NullCheck(L_7);
		V_2 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_002d;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_0061;
	}

IL_002d:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 0;
		RuntimeObject * L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((MovedFromAttribute_tE9A667A7698BEF9EA09BF23E4308CD1EC2099162 *)CastclassClass((RuntimeObject*)L_11, MovedFromAttribute_tE9A667A7698BEF9EA09BF23E4308CD1EC2099162_il2cpp_TypeInfo_var));
		String_t** L_12 = ___klass3;
		MovedFromAttribute_tE9A667A7698BEF9EA09BF23E4308CD1EC2099162 * L_13 = V_1;
		NullCheck(L_13);
		MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F * L_14 = L_13->get_address_of_data_0();
		String_t* L_15 = L_14->get_className_0();
		*((RuntimeObject **)L_12) = (RuntimeObject *)L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_12, (void*)(RuntimeObject *)L_15);
		String_t** L_16 = ___nsp2;
		MovedFromAttribute_tE9A667A7698BEF9EA09BF23E4308CD1EC2099162 * L_17 = V_1;
		NullCheck(L_17);
		MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F * L_18 = L_17->get_address_of_data_0();
		String_t* L_19 = L_18->get_nameSpace_1();
		*((RuntimeObject **)L_16) = (RuntimeObject *)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_16, (void*)(RuntimeObject *)L_19);
		String_t** L_20 = ___assembly1;
		MovedFromAttribute_tE9A667A7698BEF9EA09BF23E4308CD1EC2099162 * L_21 = V_1;
		NullCheck(L_21);
		MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F * L_22 = L_21->get_address_of_data_0();
		String_t* L_23 = L_22->get_assembly_2();
		*((RuntimeObject **)L_20) = (RuntimeObject *)L_23;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_20, (void*)(RuntimeObject *)L_23);
		V_3 = (bool)1;
		goto IL_0061;
	}

IL_0061:
	{
		bool L_24 = V_3;
		return L_24;
	}
}
// System.Boolean UnityEngine._Scripting.APIUpdating.APIUpdaterRuntimeHelpers::GetObsoleteTypeRedirection(System.Type,System.String&,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool APIUpdaterRuntimeHelpers_GetObsoleteTypeRedirection_m43E0605422153F402426F8959BC2E8C65A69F597 (Type_t * ___sourceType0, String_t** ___assemblyName1, String_t** ___nsp2, String_t** ___className3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (APIUpdaterRuntimeHelpers_GetObsoleteTypeRedirection_m43E0605422153F402426F8959BC2E8C65A69F597_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	ObsoleteAttribute_tDAE6245D460079868ABE89327A61FC76E13F2170 * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	String_t* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	{
		Type_t * L_0 = ___sourceType0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (ObsoleteAttribute_tDAE6245D460079868ABE89327A61FC76E13F2170_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = VirtFuncInvoker2< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, Type_t *, bool >::Invoke(11 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_2, (bool)0);
		V_0 = L_3;
		String_t** L_4 = ___assemblyName1;
		*((RuntimeObject **)L_4) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_4, (void*)(RuntimeObject *)NULL);
		String_t** L_5 = ___nsp2;
		*((RuntimeObject **)L_5) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_5, (void*)(RuntimeObject *)NULL);
		String_t** L_6 = ___className3;
		*((RuntimeObject **)L_6) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_6, (void*)(RuntimeObject *)NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = V_0;
		NullCheck(L_7);
		V_5 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_0165;
	}

IL_0033:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 0;
		RuntimeObject * L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((ObsoleteAttribute_tDAE6245D460079868ABE89327A61FC76E13F2170 *)CastclassSealed((RuntimeObject*)L_11, ObsoleteAttribute_tDAE6245D460079868ABE89327A61FC76E13F2170_il2cpp_TypeInfo_var));
		ObsoleteAttribute_tDAE6245D460079868ABE89327A61FC76E13F2170 * L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13 = ObsoleteAttribute_get_Message_mFFBC74B34F780F3636E5A5FE9894302C356C53F3_inline(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		V_3 = _stringLiteral2AD58D3D9B41F4ECB504BA593B1A70074B18A924;
		String_t* L_14 = V_2;
		String_t* L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = String_IndexOf_mA9A0117D68338238E51E5928CDA8EB3DC9DA497B(L_14, L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		int32_t L_17 = V_4;
		V_7 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0160;
		}
	}
	{
		String_t* L_19 = V_2;
		int32_t L_20 = V_4;
		String_t* L_21 = V_3;
		NullCheck(L_21);
		int32_t L_22 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_23 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_19, ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_22)), /*hidden argument*/NULL);
		NullCheck(L_23);
		String_t* L_24 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_23, /*hidden argument*/NULL);
		V_8 = L_24;
		String_t* L_25 = V_8;
		NullCheck(L_25);
		int32_t L_26 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_25, /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_10;
		if (!L_27)
		{
			goto IL_0092;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_0165;
	}

IL_0092:
	{
		V_9 = 0;
		String_t* L_28 = V_8;
		NullCheck(L_28);
		Il2CppChar L_29 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_28, 0, /*hidden argument*/NULL);
		V_11 = (bool)((((int32_t)L_29) == ((int32_t)((int32_t)91)))? 1 : 0);
		bool L_30 = V_11;
		if (!L_30)
		{
			goto IL_00e9;
		}
	}
	{
		String_t* L_31 = V_8;
		NullCheck(L_31);
		int32_t L_32 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_31, ((int32_t)93), /*hidden argument*/NULL);
		V_9 = L_32;
		int32_t L_33 = V_9;
		V_12 = (bool)((((int32_t)L_33) == ((int32_t)(-1)))? 1 : 0);
		bool L_34 = V_12;
		if (!L_34)
		{
			goto IL_00c6;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_0165;
	}

IL_00c6:
	{
		String_t** L_35 = ___assemblyName1;
		String_t* L_36 = V_8;
		int32_t L_37 = V_9;
		NullCheck(L_36);
		String_t* L_38 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_36, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1)), /*hidden argument*/NULL);
		*((RuntimeObject **)L_35) = (RuntimeObject *)L_38;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_35, (void*)(RuntimeObject *)L_38);
		String_t* L_39 = V_8;
		int32_t L_40 = V_9;
		NullCheck(L_39);
		String_t* L_41 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_39, ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_41);
		String_t* L_42 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_41, /*hidden argument*/NULL);
		V_8 = L_42;
		goto IL_00fb;
	}

IL_00e9:
	{
		String_t** L_43 = ___assemblyName1;
		Type_t * L_44 = ___sourceType0;
		NullCheck(L_44);
		Assembly_t * L_45 = VirtFuncInvoker0< Assembly_t * >::Invoke(23 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_44);
		NullCheck(L_45);
		AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * L_46 = VirtFuncInvoker0< AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * >::Invoke(19 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_45);
		NullCheck(L_46);
		String_t* L_47 = AssemblyName_get_Name_m6EA5C18D2FF050D3AF58D4A21ED39D161DFF218B_inline(L_46, /*hidden argument*/NULL);
		*((RuntimeObject **)L_43) = (RuntimeObject *)L_47;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_43, (void*)(RuntimeObject *)L_47);
	}

IL_00fb:
	{
		String_t* L_48 = V_8;
		NullCheck(L_48);
		int32_t L_49 = String_LastIndexOf_m76C37E3915E802044761572007B8FB0635995F59(L_48, ((int32_t)46), /*hidden argument*/NULL);
		V_9 = L_49;
		int32_t L_50 = V_9;
		V_13 = (bool)((((int32_t)L_50) > ((int32_t)(-1)))? 1 : 0);
		bool L_51 = V_13;
		if (!L_51)
		{
			goto IL_012e;
		}
	}
	{
		String_t** L_52 = ___className3;
		String_t* L_53 = V_8;
		int32_t L_54 = V_9;
		NullCheck(L_53);
		String_t* L_55 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_53, ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1)), /*hidden argument*/NULL);
		*((RuntimeObject **)L_52) = (RuntimeObject *)L_55;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_52, (void*)(RuntimeObject *)L_55);
		String_t* L_56 = V_8;
		int32_t L_57 = V_9;
		NullCheck(L_56);
		String_t* L_58 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_56, 0, L_57, /*hidden argument*/NULL);
		V_8 = L_58;
		goto IL_013b;
	}

IL_012e:
	{
		String_t** L_59 = ___className3;
		String_t* L_60 = V_8;
		*((RuntimeObject **)L_59) = (RuntimeObject *)L_60;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_59, (void*)(RuntimeObject *)L_60);
		V_8 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_013b:
	{
		String_t* L_61 = V_8;
		NullCheck(L_61);
		int32_t L_62 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_61, /*hidden argument*/NULL);
		V_14 = (bool)((((int32_t)L_62) > ((int32_t)0))? 1 : 0);
		bool L_63 = V_14;
		if (!L_63)
		{
			goto IL_0151;
		}
	}
	{
		String_t** L_64 = ___nsp2;
		String_t* L_65 = V_8;
		*((RuntimeObject **)L_64) = (RuntimeObject *)L_65;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_64, (void*)(RuntimeObject *)L_65);
		goto IL_015b;
	}

IL_0151:
	{
		String_t** L_66 = ___nsp2;
		Type_t * L_67 = ___sourceType0;
		NullCheck(L_67);
		String_t* L_68 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_Namespace() */, L_67);
		*((RuntimeObject **)L_66) = (RuntimeObject *)L_68;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_66, (void*)(RuntimeObject *)L_68);
	}

IL_015b:
	{
		V_6 = (bool)1;
		goto IL_0165;
	}

IL_0160:
	{
		V_6 = (bool)0;
		goto IL_0165;
	}

IL_0165:
	{
		bool L_69 = V_6;
		return L_69;
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
// System.Void UnityEngineInternal.GenericStack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericStack__ctor_m0659B84DB6B093AF1F01F566686C510DDEEAE848 (GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericStack__ctor_m0659B84DB6B093AF1F01F566686C510DDEEAE848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1__ctor_mD0E32FFEA8E13AF0454470323C18CA9475986570(__this, /*hidden argument*/Stack_1__ctor_mD0E32FFEA8E13AF0454470323C18CA9475986570_RuntimeMethod_var);
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
// System.Void UnityEngineInternal.MathfInternal::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathfInternal__cctor_m885D4921B8E928763E7ABB4466659665780F860F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathfInternal__cctor_m885D4921B8E928763E7ABB4466659665780F860F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_il2cpp_TypeInfo_var))->set_FloatMinNormal_0((1.17549435E-38f));
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_il2cpp_TypeInfo_var))->set_FloatMinDenormal_1((1.401298E-45f));
		float L_0 = ((MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_il2cpp_TypeInfo_var))->get_FloatMinDenormal_1();
		il2cpp_codegen_memory_barrier();
		float L_1 = Interlocked_CompareExchange_m2C6E1F976D009AB3858428E90B8F99F98F08155D((float*)(((MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_il2cpp_TypeInfo_var))->get_address_of_FloatMinDenormal_1()), L_0, (0.0f), /*hidden argument*/NULL);
		((MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_il2cpp_TypeInfo_var))->set_IsFlushToZeroEnabled_2((bool)((((float)L_1) == ((float)(0.0f)))? 1 : 0));
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
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeInferenceRuleAttribute__ctor_m389751AED6740F401AC8DFACD5914C13AB24D8A6 (TypeInferenceRuleAttribute_tEB3BA6FDE6D6817FD33E2620200007EB9730214B * __this, int32_t ___rule0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeInferenceRuleAttribute__ctor_m389751AED6740F401AC8DFACD5914C13AB24D8A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = Box(TypeInferenceRules_tFA03D20477226A95FE644665C3C08A6B6281C333_il2cpp_TypeInfo_var, (&___rule0));
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___rule0 = *(int32_t*)UnBox(L_0);
		TypeInferenceRuleAttribute__ctor_m34920F979AA071F4973CEEEF6F91B5B6A53E5765(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeInferenceRuleAttribute__ctor_m34920F979AA071F4973CEEEF6F91B5B6A53E5765 (TypeInferenceRuleAttribute_tEB3BA6FDE6D6817FD33E2620200007EB9730214B * __this, String_t* ___rule0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule0;
		__this->set__rule_0(L_0);
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeInferenceRuleAttribute_ToString_m49343B52ED0F3E75B3E56E37CF523F63E5A746F6 (TypeInferenceRuleAttribute_tEB3BA6FDE6D6817FD33E2620200007EB9730214B * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get__rule_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float WaitForSecondsRealtime_get_waitTime_m6D1B0EDEAFA3DBBBFE1A0CC2D372BAB8EA82E2FB_inline (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CwaitTimeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WaitForSecondsRealtime_set_waitTime_m867F4482BEE354E33A6FD9191344D74B9CC8C790_inline (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CwaitTimeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void KeywordRecognizer_set_Keywords_m11AEB567D4747C00936402C29FAE38BB22621FEB_inline (KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CKeywordsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PhotoCaptureFrame_set_dataLength_m708C3983B97B7470A4E7A4692A590E5338465A5B_inline (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CdataLengthU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PhotoCaptureFrame_set_hasLocationData_mA2E608666F3D923EEBCFFD1F2A8534BFAC938CD9_inline (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3ChasLocationDataU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PhotoCaptureFrame_set_pixelFormat_m956028BE24FB4646618B56A24CDB9559026B78D4_inline (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpixelFormatU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t PhotoCaptureFrame_get_dataLength_m2169CBC908EF8673C1876952BCB9C1642706849C_inline (PhotoCaptureFrame_tABB0DA525EA10E7E735EE4E6950E453E9C27B42D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CdataLengthU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ObsoleteAttribute_get_Message_mFFBC74B34F780F3636E5A5FE9894302C356C53F3_inline (ObsoleteAttribute_tDAE6245D460079868ABE89327A61FC76E13F2170 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__message_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AssemblyName_get_Name_m6EA5C18D2FF050D3AF58D4A21ED39D161DFF218B_inline (AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_0();
		return L_0;
	}
}
