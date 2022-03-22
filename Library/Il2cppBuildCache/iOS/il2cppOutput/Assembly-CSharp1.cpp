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
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<PuzzlePiece>
struct List_1_t698A055EDA0EAD65D2161EEF6E5796743106F240;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// PuzzleElement[]
struct PuzzleElementU5BU5D_tD49B6809D1D1034C1CE6130DDE04054CD6FD235B;
// PuzzlePiece[]
struct PuzzlePieceU5BU5D_t071BE6397EB0E752BF072D15EA006D64E4BB3238;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.IO.BinaryWriter
struct BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraController
struct CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_tA2708E80049AA58E9B0DBE9F5325CC9A1B487142;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26;
// GameController
struct GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// LoadGeneratedPuzzles
struct LoadGeneratedPuzzles_t6B6700CAFB1128C3BF7E5DB61F43EAFDCA6C7CB8;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// PuzzleController
struct PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364;
// PuzzleGenerator_Runtime
struct PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20;
// PuzzlePiece
struct PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B;
// PuzzlePieceGroup
struct PuzzlePieceGroup_t2C2F59D53E929E49F453F8382B8E117AB8A0E27B;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// RuntimeGeneration
struct RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.ScrollRect
struct ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// ChoosePuzzleFromList/Puzzles
struct Puzzles_tCD280D53A2110743E29742FE7496775B6E3DDC90;
// LoadGeneratedPuzzles/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tB95B5A64166E765A9F8CD0E8B5F590DBD214C12A;
// PuzzleGenerator_Runtime/<LoadTextureFromWeb>d__31
struct U3CLoadTextureFromWebU3Ed__31_t55E8C42EA82904AE5DB8ACADC968CCA1E2C9A64A;
// PuzzlePiece/<Move>d__10
struct U3CMoveU3Ed__10_tB03E83A1D88022CCB51F44761F329B27B36D0AAD;
// RuntimeGeneration/<StartPuzzleWhenReady>d__10
struct U3CStartPuzzleWhenReadyU3Ed__10_t715B312027DAFEC1FB4195CDBA10BD948C7E82C8;
// SimpleDialog/DialogMessage
struct DialogMessage_t456F69FF439AD07903860DA1F97EF878F17DDF16;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerTexture_tA2708E80049AA58E9B0DBE9F5325CC9A1B487142_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1C84F6630F9AA59CD9DFD40D0BAE5C01C080A49E;
IL2CPP_EXTERN_C String_t* _stringLiteral53FBB52F0B65C7EC02331E9C7EEB9163B09372B5;
IL2CPP_EXTERN_C String_t* _stringLiteral5932B7AE017B7A4832520DFEC31EB8390AFE674B;
IL2CPP_EXTERN_C String_t* _stringLiteral737FC34A3ED8CDEF2A569A220D9DDC3D364C8176;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralCA676CECF5D8D2E11B14CC10130B8AC8441383F1;
IL2CPP_EXTERN_C String_t* _stringLiteralE6995C8C5113D4496BCC8502AEF468B092E80791;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuntimeGeneration_U3CStartPuzzleWhenReadyU3Eb__10_0_m5F859CF8736C1745E5C4E622510AC4FC29496D39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadTextureFromWebU3Ed__31_System_Collections_IEnumerator_Reset_m9ACEF633EF118089CA31A705CD2F304DF48A78C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveU3Ed__10_System_Collections_IEnumerator_Reset_m2A4CDA308C71B6BA1DB2919B7050CF133BA6DDA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartPuzzleWhenReadyU3Ed__10_System_Collections_IEnumerator_Reset_m0FCD3381F61FEE0A6FEEB90A17D0425962583068_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;

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


// System.IO.BinaryWriter
struct BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;

public:
	inline static int32_t get_offset_of_OutStream_1() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ___OutStream_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_OutStream_1() const { return ___OutStream_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_OutStream_1() { return &___OutStream_1; }
	inline void set_OutStream_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___OutStream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutStream_1), (void*)value);
	}

	inline static int32_t get_offset_of__buffer_2() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____buffer_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_2() const { return ____buffer_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_2() { return &____buffer_2; }
	inline void set__buffer_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_2), (void*)value);
	}

	inline static int32_t get_offset_of__encoding_3() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__encoding_3() const { return ____encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__encoding_3() { return &____encoding_3; }
	inline void set__encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of__encoder_4() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____encoder_4)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get__encoder_4() const { return ____encoder_4; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of__encoder_4() { return &____encoder_4; }
	inline void set__encoder_4(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		____encoder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoder_4), (void*)value);
	}

	inline static int32_t get_offset_of__leaveOpen_5() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____leaveOpen_5)); }
	inline bool get__leaveOpen_5() const { return ____leaveOpen_5; }
	inline bool* get_address_of__leaveOpen_5() { return &____leaveOpen_5; }
	inline void set__leaveOpen_5(bool value)
	{
		____leaveOpen_5 = value;
	}

	inline static int32_t get_offset_of__largeByteBuffer_6() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____largeByteBuffer_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__largeByteBuffer_6() const { return ____largeByteBuffer_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__largeByteBuffer_6() { return &____largeByteBuffer_6; }
	inline void set__largeByteBuffer_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____largeByteBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____largeByteBuffer_6), (void*)value);
	}

	inline static int32_t get_offset_of__maxChars_7() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____maxChars_7)); }
	inline int32_t get__maxChars_7() const { return ____maxChars_7; }
	inline int32_t* get_address_of__maxChars_7() { return &____maxChars_7; }
	inline void set__maxChars_7(int32_t value)
	{
		____maxChars_7 = value;
	}
};

struct BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_StaticFields
{
public:
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_StaticFields, ___Null_0)); }
	inline BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * get_Null_0() const { return ___Null_0; }
	inline BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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


// TextureUtility
struct TextureUtility_tF830F6A24DB16083C8BF606D536F6DCA9A669CE4  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// ChoosePuzzleFromList/Puzzles
struct Puzzles_tCD280D53A2110743E29742FE7496775B6E3DDC90  : public RuntimeObject
{
public:
	// PuzzleController ChoosePuzzleFromList/Puzzles::puzzle
	PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364 * ___puzzle_0;
	// UnityEngine.Renderer ChoosePuzzleFromList/Puzzles::background
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___background_1;

public:
	inline static int32_t get_offset_of_puzzle_0() { return static_cast<int32_t>(offsetof(Puzzles_tCD280D53A2110743E29742FE7496775B6E3DDC90, ___puzzle_0)); }
	inline PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364 * get_puzzle_0() const { return ___puzzle_0; }
	inline PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364 ** get_address_of_puzzle_0() { return &___puzzle_0; }
	inline void set_puzzle_0(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364 * value)
	{
		___puzzle_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___puzzle_0), (void*)value);
	}

	inline static int32_t get_offset_of_background_1() { return static_cast<int32_t>(offsetof(Puzzles_tCD280D53A2110743E29742FE7496775B6E3DDC90, ___background_1)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get_background_1() const { return ___background_1; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of_background_1() { return &___background_1; }
	inline void set_background_1(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		___background_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___background_1), (void*)value);
	}
};


// LoadGeneratedPuzzles/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tB95B5A64166E765A9F8CD0E8B5F590DBD214C12A  : public RuntimeObject
{
public:
	// LoadGeneratedPuzzles LoadGeneratedPuzzles/<>c__DisplayClass9_0::<>4__this
	LoadGeneratedPuzzles_t6B6700CAFB1128C3BF7E5DB61F43EAFDCA6C7CB8 * ___U3CU3E4__this_0;
	// UnityEngine.UI.Button LoadGeneratedPuzzles/<>c__DisplayClass9_0::button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___button_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tB95B5A64166E765A9F8CD0E8B5F590DBD214C12A, ___U3CU3E4__this_0)); }
	inline LoadGeneratedPuzzles_t6B6700CAFB1128C3BF7E5DB61F43EAFDCA6C7CB8 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline LoadGeneratedPuzzles_t6B6700CAFB1128C3BF7E5DB61F43EAFDCA6C7CB8 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(LoadGeneratedPuzzles_t6B6700CAFB1128C3BF7E5DB61F43EAFDCA6C7CB8 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_button_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tB95B5A64166E765A9F8CD0E8B5F590DBD214C12A, ___button_1)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_button_1() const { return ___button_1; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_button_1() { return &___button_1; }
	inline void set_button_1(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___button_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button_1), (void*)value);
	}
};


// PuzzleGenerator_Runtime/<LoadTextureFromWeb>d__31
struct U3CLoadTextureFromWebU3Ed__31_t55E8C42EA82904AE5DB8ACADC968CCA1E2C9A64A  : public RuntimeObject
{
public:
	// System.Int32 PuzzleGenerator_Runtime/<LoadTextureFromWeb>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PuzzleGenerator_Runtime/<LoadTextureFromWeb>d__31::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PuzzleGenerator_Runtime PuzzleGenerator_Runtime/<LoadTextureFromWeb>d__31::<>4__this
	PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest PuzzleGenerator_Runtime/<LoadTextureFromWeb>d__31::<www>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwwwU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadTextureFromWebU3Ed__31_t55E8C42EA82904AE5DB8ACADC968CCA1E2C9A64A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadTextureFromWebU3Ed__31_t55E8C42EA82904AE5DB8ACADC968CCA1E2C9A64A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadTextureFromWebU3Ed__31_t55E8C42EA82904AE5DB8ACADC968CCA1E2C9A64A, ___U3CU3E4__this_2)); }
	inline PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CLoadTextureFromWebU3Ed__31_t55E8C42EA82904AE5DB8ACADC968CCA1E2C9A64A, ___U3CwwwU3E5__2_3)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwwwU3E5__2_3() const { return ___U3CwwwU3E5__2_3; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwwwU3E5__2_3() { return &___U3CwwwU3E5__2_3; }
	inline void set_U3CwwwU3E5__2_3(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwwwU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_3), (void*)value);
	}
};


// RuntimeGeneration/<StartPuzzleWhenReady>d__10
struct U3CStartPuzzleWhenReadyU3Ed__10_t715B312027DAFEC1FB4195CDBA10BD948C7E82C8  : public RuntimeObject
{
public:
	// System.Int32 RuntimeGeneration/<StartPuzzleWhenReady>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RuntimeGeneration/<StartPuzzleWhenReady>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// RuntimeGeneration RuntimeGeneration/<StartPuzzleWhenReady>d__10::<>4__this
	RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartPuzzleWhenReadyU3Ed__10_t715B312027DAFEC1FB4195CDBA10BD948C7E82C8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartPuzzleWhenReadyU3Ed__10_t715B312027DAFEC1FB4195CDBA10BD948C7E82C8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartPuzzleWhenReadyU3Ed__10_t715B312027DAFEC1FB4195CDBA10BD948C7E82C8, ___U3CU3E4__this_2)); }
	inline RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// SimpleDialog/DialogMessage
struct DialogMessage_t456F69FF439AD07903860DA1F97EF878F17DDF16  : public RuntimeObject
{
public:
	// System.String SimpleDialog/DialogMessage::text
	String_t* ___text_0;
	// System.Single SimpleDialog/DialogMessage::delay
	float ___delay_1;
	// System.Int32 SimpleDialog/DialogMessage::characterId
	int32_t ___characterId_2;
	// System.Boolean SimpleDialog/DialogMessage::inverted
	bool ___inverted_3;
	// UnityEngine.Events.UnityEvent SimpleDialog/DialogMessage::startAction
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___startAction_4;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(DialogMessage_t456F69FF439AD07903860DA1F97EF878F17DDF16, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_0), (void*)value);
	}

	inline static int32_t get_offset_of_delay_1() { return static_cast<int32_t>(offsetof(DialogMessage_t456F69FF439AD07903860DA1F97EF878F17DDF16, ___delay_1)); }
	inline float get_delay_1() const { return ___delay_1; }
	inline float* get_address_of_delay_1() { return &___delay_1; }
	inline void set_delay_1(float value)
	{
		___delay_1 = value;
	}

	inline static int32_t get_offset_of_characterId_2() { return static_cast<int32_t>(offsetof(DialogMessage_t456F69FF439AD07903860DA1F97EF878F17DDF16, ___characterId_2)); }
	inline int32_t get_characterId_2() const { return ___characterId_2; }
	inline int32_t* get_address_of_characterId_2() { return &___characterId_2; }
	inline void set_characterId_2(int32_t value)
	{
		___characterId_2 = value;
	}

	inline static int32_t get_offset_of_inverted_3() { return static_cast<int32_t>(offsetof(DialogMessage_t456F69FF439AD07903860DA1F97EF878F17DDF16, ___inverted_3)); }
	inline bool get_inverted_3() const { return ___inverted_3; }
	inline bool* get_address_of_inverted_3() { return &___inverted_3; }
	inline void set_inverted_3(bool value)
	{
		___inverted_3 = value;
	}

	inline static int32_t get_offset_of_startAction_4() { return static_cast<int32_t>(offsetof(DialogMessage_t456F69FF439AD07903860DA1F97EF878F17DDF16, ___startAction_4)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_startAction_4() const { return ___startAction_4; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_startAction_4() { return &___startAction_4; }
	inline void set_startAction_4(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___startAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startAction_4), (void*)value);
	}
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


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
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


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.IO.FileAccess
struct FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileMode
struct FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336, ___value___2)); }
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

// PuzzleAnchor
struct PuzzleAnchor_tC1D10EC6472510342198368F77A6B7EAB516FABE 
{
public:
	// System.Int32 PuzzleAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PuzzleAnchor_tC1D10EC6472510342198368F77A6B7EAB516FABE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PuzzlePiece
struct PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B  : public RuntimeObject
{
public:
	// UnityEngine.Transform PuzzlePiece::transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_0;
	// UnityEngine.Vector3 PuzzlePiece::startPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPosition_1;
	// UnityEngine.Quaternion PuzzlePiece::startRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___startRotation_2;
	// UnityEngine.Vector3 PuzzlePiece::targetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition_3;
	// UnityEngine.Renderer PuzzlePiece::renderer
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___renderer_4;
	// UnityEngine.Vector3 PuzzlePiece::size
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size_5;
	// UnityEngine.Material PuzzlePiece::materialAssembled
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___materialAssembled_6;
	// UnityEngine.Material PuzzlePiece::materialDefault
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___materialDefault_7;

public:
	inline static int32_t get_offset_of_transform_0() { return static_cast<int32_t>(offsetof(PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B, ___transform_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_transform_0() const { return ___transform_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_transform_0() { return &___transform_0; }
	inline void set_transform_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___transform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_0), (void*)value);
	}

	inline static int32_t get_offset_of_startPosition_1() { return static_cast<int32_t>(offsetof(PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B, ___startPosition_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startPosition_1() const { return ___startPosition_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startPosition_1() { return &___startPosition_1; }
	inline void set_startPosition_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startPosition_1 = value;
	}

	inline static int32_t get_offset_of_startRotation_2() { return static_cast<int32_t>(offsetof(PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B, ___startRotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_startRotation_2() const { return ___startRotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_startRotation_2() { return &___startRotation_2; }
	inline void set_startRotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___startRotation_2 = value;
	}

	inline static int32_t get_offset_of_targetPosition_3() { return static_cast<int32_t>(offsetof(PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B, ___targetPosition_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetPosition_3() const { return ___targetPosition_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetPosition_3() { return &___targetPosition_3; }
	inline void set_targetPosition_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetPosition_3 = value;
	}

	inline static int32_t get_offset_of_renderer_4() { return static_cast<int32_t>(offsetof(PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B, ___renderer_4)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get_renderer_4() const { return ___renderer_4; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of_renderer_4() { return &___renderer_4; }
	inline void set_renderer_4(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		___renderer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderer_4), (void*)value);
	}

	inline static int32_t get_offset_of_size_5() { return static_cast<int32_t>(offsetof(PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B, ___size_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_size_5() const { return ___size_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_size_5() { return &___size_5; }
	inline void set_size_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___size_5 = value;
	}

	inline static int32_t get_offset_of_materialAssembled_6() { return static_cast<int32_t>(offsetof(PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B, ___materialAssembled_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_materialAssembled_6() const { return ___materialAssembled_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_materialAssembled_6() { return &___materialAssembled_6; }
	inline void set_materialAssembled_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___materialAssembled_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materialAssembled_6), (void*)value);
	}

	inline static int32_t get_offset_of_materialDefault_7() { return static_cast<int32_t>(offsetof(PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B, ___materialDefault_7)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_materialDefault_7() const { return ___materialDefault_7; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_materialDefault_7() { return &___materialDefault_7; }
	inline void set_materialDefault_7(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___materialDefault_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materialDefault_7), (void*)value);
	}
};


// PuzzleState
struct PuzzleState_t50FEFCFD4D40F8111BB549135ED159C2472FD1F4 
{
public:
	// System.Int32 PuzzleState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PuzzleState_t50FEFCFD4D40F8111BB549135ED159C2472FD1F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ScreenAnchor
struct ScreenAnchor_tCEEB0811D6473BB998A08B7E219216CD9BC2681D 
{
public:
	// System.Int32 ScreenAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenAnchor_tCEEB0811D6473BB998A08B7E219216CD9BC2681D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PuzzlePiece/<Move>d__10
struct U3CMoveU3Ed__10_tB03E83A1D88022CCB51F44761F329B27B36D0AAD  : public RuntimeObject
{
public:
	// System.Int32 PuzzlePiece/<Move>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PuzzlePiece/<Move>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PuzzlePiece PuzzlePiece/<Move>d__10::<>4__this
	PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 PuzzlePiece/<Move>d__10::_targetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____targetPosition_3;
	// System.Single PuzzlePiece/<Move>d__10::_movementTime
	float ____movementTime_4;
	// System.Boolean PuzzlePiece/<Move>d__10::_inLocalSpace
	bool ____inLocalSpace_5;
	// System.Single PuzzlePiece/<Move>d__10::<movementTime>5__2
	float ___U3CmovementTimeU3E5__2_6;
	// System.Boolean PuzzlePiece/<Move>d__10::<useLocalSpace>5__3
	bool ___U3CuseLocalSpaceU3E5__3_7;
	// UnityEngine.Vector3 PuzzlePiece/<Move>d__10::<velocity>5__4
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CvelocityU3E5__4_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMoveU3Ed__10_tB03E83A1D88022CCB51F44761F329B27B36D0AAD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMoveU3Ed__10_tB03E83A1D88022CCB51F44761F329B27B36D0AAD, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMoveU3Ed__10_tB03E83A1D88022CCB51F44761F329B27B36D0AAD, ___U3CU3E4__this_2)); }
	inline PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of__targetPosition_3() { return static_cast<int32_t>(offsetof(U3CMoveU3Ed__10_tB03E83A1D88022CCB51F44761F329B27B36D0AAD, ____targetPosition_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__targetPosition_3() const { return ____targetPosition_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__targetPosition_3() { return &____targetPosition_3; }
	inline void set__targetPosition_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____targetPosition_3 = value;
	}

	inline static int32_t get_offset_of__movementTime_4() { return static_cast<int32_t>(offsetof(U3CMoveU3Ed__10_tB03E83A1D88022CCB51F44761F329B27B36D0AAD, ____movementTime_4)); }
	inline float get__movementTime_4() const { return ____movementTime_4; }
	inline float* get_address_of__movementTime_4() { return &____movementTime_4; }
	inline void set__movementTime_4(float value)
	{
		____movementTime_4 = value;
	}

	inline static int32_t get_offset_of__inLocalSpace_5() { return static_cast<int32_t>(offsetof(U3CMoveU3Ed__10_tB03E83A1D88022CCB51F44761F329B27B36D0AAD, ____inLocalSpace_5)); }
	inline bool get__inLocalSpace_5() const { return ____inLocalSpace_5; }
	inline bool* get_address_of__inLocalSpace_5() { return &____inLocalSpace_5; }
	inline void set__inLocalSpace_5(bool value)
	{
		____inLocalSpace_5 = value;
	}

	inline static int32_t get_offset_of_U3CmovementTimeU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CMoveU3Ed__10_tB03E83A1D88022CCB51F44761F329B27B36D0AAD, ___U3CmovementTimeU3E5__2_6)); }
	inline float get_U3CmovementTimeU3E5__2_6() const { return ___U3CmovementTimeU3E5__2_6; }
	inline float* get_address_of_U3CmovementTimeU3E5__2_6() { return &___U3CmovementTimeU3E5__2_6; }
	inline void set_U3CmovementTimeU3E5__2_6(float value)
	{
		___U3CmovementTimeU3E5__2_6 = value;
	}

	inline static int32_t get_offset_of_U3CuseLocalSpaceU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CMoveU3Ed__10_tB03E83A1D88022CCB51F44761F329B27B36D0AAD, ___U3CuseLocalSpaceU3E5__3_7)); }
	inline bool get_U3CuseLocalSpaceU3E5__3_7() const { return ___U3CuseLocalSpaceU3E5__3_7; }
	inline bool* get_address_of_U3CuseLocalSpaceU3E5__3_7() { return &___U3CuseLocalSpaceU3E5__3_7; }
	inline void set_U3CuseLocalSpaceU3E5__3_7(bool value)
	{
		___U3CuseLocalSpaceU3E5__3_7 = value;
	}

	inline static int32_t get_offset_of_U3CvelocityU3E5__4_8() { return static_cast<int32_t>(offsetof(U3CMoveU3Ed__10_tB03E83A1D88022CCB51F44761F329B27B36D0AAD, ___U3CvelocityU3E5__4_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CvelocityU3E5__4_8() const { return ___U3CvelocityU3E5__4_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CvelocityU3E5__4_8() { return &___U3CvelocityU3E5__4_8; }
	inline void set_U3CvelocityU3E5__4_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CvelocityU3E5__4_8 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TextureUtility/Alignment
struct Alignment_tA33B57057CF305186E3684A1E7A1C57BE6EFCE32 
{
public:
	// System.Int32 TextureUtility/Alignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Alignment_tA33B57057CF305186E3684A1E7A1C57BE6EFCE32, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TextureUtility/BlendMode
struct BlendMode_t5157F9B0F9881B36560AD32CED8FAAFDF5B2E541 
{
public:
	// System.Int32 TextureUtility/BlendMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendMode_t5157F9B0F9881B36560AD32CED8FAAFDF5B2E541, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TextureUtility/BooleanOperation
struct BooleanOperation_t69C84179D72545F32AE80C68A013C36B5661582A 
{
public:
	// System.Int32 TextureUtility/BooleanOperation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BooleanOperation_t69C84179D72545F32AE80C68A013C36B5661582A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_tA2708E80049AA58E9B0DBE9F5325CC9A1B487142  : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB
{
public:
	// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::mTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___mTexture_1;
	// System.Boolean UnityEngine.Networking.DownloadHandlerTexture::mHasTexture
	bool ___mHasTexture_2;
	// System.Boolean UnityEngine.Networking.DownloadHandlerTexture::mNonReadable
	bool ___mNonReadable_3;

public:
	inline static int32_t get_offset_of_mTexture_1() { return static_cast<int32_t>(offsetof(DownloadHandlerTexture_tA2708E80049AA58E9B0DBE9F5325CC9A1B487142, ___mTexture_1)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_mTexture_1() const { return ___mTexture_1; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_mTexture_1() { return &___mTexture_1; }
	inline void set_mTexture_1(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___mTexture_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTexture_1), (void*)value);
	}

	inline static int32_t get_offset_of_mHasTexture_2() { return static_cast<int32_t>(offsetof(DownloadHandlerTexture_tA2708E80049AA58E9B0DBE9F5325CC9A1B487142, ___mHasTexture_2)); }
	inline bool get_mHasTexture_2() const { return ___mHasTexture_2; }
	inline bool* get_address_of_mHasTexture_2() { return &___mHasTexture_2; }
	inline void set_mHasTexture_2(bool value)
	{
		___mHasTexture_2 = value;
	}

	inline static int32_t get_offset_of_mNonReadable_3() { return static_cast<int32_t>(offsetof(DownloadHandlerTexture_tA2708E80049AA58E9B0DBE9F5325CC9A1B487142, ___mNonReadable_3)); }
	inline bool get_mNonReadable_3() const { return ___mNonReadable_3; }
	inline bool* get_address_of_mNonReadable_3() { return &___mNonReadable_3; }
	inline void set_mNonReadable_3(bool value)
	{
		___mNonReadable_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_tA2708E80049AA58E9B0DBE9F5325CC9A1B487142_marshaled_pinvoke : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___mTexture_1;
	int32_t ___mHasTexture_2;
	int32_t ___mNonReadable_3;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_tA2708E80049AA58E9B0DBE9F5325CC9A1B487142_marshaled_com : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___mTexture_1;
	int32_t ___mHasTexture_2;
	int32_t ___mNonReadable_3;
};

// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___safeHandle_8)); }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_8), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_4), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_5), (void*)value);
	}
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
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


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
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


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
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


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// GameController
struct GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera GameController::gameCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___gameCamera_4;
	// PuzzleController GameController::puzzle
	PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364 * ___puzzle_5;
	// System.Boolean GameController::findByTag
	bool ___findByTag_6;
	// ScreenAnchor GameController::fitToScreenAnchor
	int32_t ___fitToScreenAnchor_7;
	// System.Boolean GameController::alignWithCamera
	bool ___alignWithCamera_8;
	// UnityEngine.Renderer GameController::background
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___background_9;
	// System.Single GameController::backgroundTransparency
	float ___backgroundTransparency_10;
	// UnityEngine.GameObject GameController::pauseUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pauseUI_11;
	// UnityEngine.GameObject GameController::winUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___winUI_12;
	// UnityEngine.GameObject GameController::loseUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___loseUI_13;
	// UnityEngine.UI.Text GameController::hintCounterUI
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___hintCounterUI_14;
	// UnityEngine.UI.Text GameController::timerCounterUI
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___timerCounterUI_15;
	// UnityEngine.UI.Text GameController::piecesLeftUI
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___piecesLeftUI_16;
	// UnityEngine.UI.Text GameController::elapsedTimeUI
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___elapsedTimeUI_17;
	// UnityEngine.UI.Toggle GameController::musicToggleUI
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___musicToggleUI_18;
	// UnityEngine.UI.Toggle GameController::soundToggleUI
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___soundToggleUI_19;
	// UnityEngine.AudioSource GameController::musicPlayer
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___musicPlayer_20;
	// UnityEngine.AudioClip GameController::musicMain
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___musicMain_21;
	// UnityEngine.AudioClip GameController::musicWin
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___musicWin_22;
	// UnityEngine.AudioClip GameController::musicLose
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___musicLose_23;
	// UnityEngine.AudioSource GameController::soundPlayer
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___soundPlayer_24;
	// UnityEngine.AudioClip GameController::soundGrab
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___soundGrab_25;
	// UnityEngine.AudioClip GameController::soundDrop
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___soundDrop_26;
	// UnityEngine.AudioClip GameController::soundAssemble
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___soundAssemble_27;
	// System.Single GameController::timer
	float ___timer_28;
	// System.Int32 GameController::hintLimit
	int32_t ___hintLimit_29;
	// System.Boolean GameController::invertRules
	bool ___invertRules_30;
	// CameraController GameController::cameraScript
	CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * ___cameraScript_31;
	// System.Single GameController::timerTime
	float ___timerTime_32;
	// System.Single GameController::remainingTime
	float ___remainingTime_33;
	// System.Single GameController::elapsedTime
	float ___elapsedTime_34;
	// System.Boolean GameController::gameFinished
	bool ___gameFinished_35;
	// System.Int32 GameController::remainingHints
	int32_t ___remainingHints_36;
	// UnityEngine.Color GameController::backgroundColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___backgroundColor_37;

public:
	inline static int32_t get_offset_of_gameCamera_4() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___gameCamera_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_gameCamera_4() const { return ___gameCamera_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_gameCamera_4() { return &___gameCamera_4; }
	inline void set_gameCamera_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___gameCamera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameCamera_4), (void*)value);
	}

	inline static int32_t get_offset_of_puzzle_5() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___puzzle_5)); }
	inline PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364 * get_puzzle_5() const { return ___puzzle_5; }
	inline PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364 ** get_address_of_puzzle_5() { return &___puzzle_5; }
	inline void set_puzzle_5(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364 * value)
	{
		___puzzle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___puzzle_5), (void*)value);
	}

	inline static int32_t get_offset_of_findByTag_6() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___findByTag_6)); }
	inline bool get_findByTag_6() const { return ___findByTag_6; }
	inline bool* get_address_of_findByTag_6() { return &___findByTag_6; }
	inline void set_findByTag_6(bool value)
	{
		___findByTag_6 = value;
	}

	inline static int32_t get_offset_of_fitToScreenAnchor_7() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___fitToScreenAnchor_7)); }
	inline int32_t get_fitToScreenAnchor_7() const { return ___fitToScreenAnchor_7; }
	inline int32_t* get_address_of_fitToScreenAnchor_7() { return &___fitToScreenAnchor_7; }
	inline void set_fitToScreenAnchor_7(int32_t value)
	{
		___fitToScreenAnchor_7 = value;
	}

	inline static int32_t get_offset_of_alignWithCamera_8() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___alignWithCamera_8)); }
	inline bool get_alignWithCamera_8() const { return ___alignWithCamera_8; }
	inline bool* get_address_of_alignWithCamera_8() { return &___alignWithCamera_8; }
	inline void set_alignWithCamera_8(bool value)
	{
		___alignWithCamera_8 = value;
	}

	inline static int32_t get_offset_of_background_9() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___background_9)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get_background_9() const { return ___background_9; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of_background_9() { return &___background_9; }
	inline void set_background_9(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		___background_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___background_9), (void*)value);
	}

	inline static int32_t get_offset_of_backgroundTransparency_10() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___backgroundTransparency_10)); }
	inline float get_backgroundTransparency_10() const { return ___backgroundTransparency_10; }
	inline float* get_address_of_backgroundTransparency_10() { return &___backgroundTransparency_10; }
	inline void set_backgroundTransparency_10(float value)
	{
		___backgroundTransparency_10 = value;
	}

	inline static int32_t get_offset_of_pauseUI_11() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___pauseUI_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pauseUI_11() const { return ___pauseUI_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pauseUI_11() { return &___pauseUI_11; }
	inline void set_pauseUI_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pauseUI_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseUI_11), (void*)value);
	}

	inline static int32_t get_offset_of_winUI_12() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___winUI_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_winUI_12() const { return ___winUI_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_winUI_12() { return &___winUI_12; }
	inline void set_winUI_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___winUI_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___winUI_12), (void*)value);
	}

	inline static int32_t get_offset_of_loseUI_13() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___loseUI_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_loseUI_13() const { return ___loseUI_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_loseUI_13() { return &___loseUI_13; }
	inline void set_loseUI_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___loseUI_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loseUI_13), (void*)value);
	}

	inline static int32_t get_offset_of_hintCounterUI_14() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___hintCounterUI_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_hintCounterUI_14() const { return ___hintCounterUI_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_hintCounterUI_14() { return &___hintCounterUI_14; }
	inline void set_hintCounterUI_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___hintCounterUI_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hintCounterUI_14), (void*)value);
	}

	inline static int32_t get_offset_of_timerCounterUI_15() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___timerCounterUI_15)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_timerCounterUI_15() const { return ___timerCounterUI_15; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_timerCounterUI_15() { return &___timerCounterUI_15; }
	inline void set_timerCounterUI_15(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___timerCounterUI_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerCounterUI_15), (void*)value);
	}

	inline static int32_t get_offset_of_piecesLeftUI_16() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___piecesLeftUI_16)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_piecesLeftUI_16() const { return ___piecesLeftUI_16; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_piecesLeftUI_16() { return &___piecesLeftUI_16; }
	inline void set_piecesLeftUI_16(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___piecesLeftUI_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___piecesLeftUI_16), (void*)value);
	}

	inline static int32_t get_offset_of_elapsedTimeUI_17() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___elapsedTimeUI_17)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_elapsedTimeUI_17() const { return ___elapsedTimeUI_17; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_elapsedTimeUI_17() { return &___elapsedTimeUI_17; }
	inline void set_elapsedTimeUI_17(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___elapsedTimeUI_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elapsedTimeUI_17), (void*)value);
	}

	inline static int32_t get_offset_of_musicToggleUI_18() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___musicToggleUI_18)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_musicToggleUI_18() const { return ___musicToggleUI_18; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_musicToggleUI_18() { return &___musicToggleUI_18; }
	inline void set_musicToggleUI_18(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___musicToggleUI_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicToggleUI_18), (void*)value);
	}

	inline static int32_t get_offset_of_soundToggleUI_19() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___soundToggleUI_19)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_soundToggleUI_19() const { return ___soundToggleUI_19; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_soundToggleUI_19() { return &___soundToggleUI_19; }
	inline void set_soundToggleUI_19(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___soundToggleUI_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundToggleUI_19), (void*)value);
	}

	inline static int32_t get_offset_of_musicPlayer_20() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___musicPlayer_20)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_musicPlayer_20() const { return ___musicPlayer_20; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_musicPlayer_20() { return &___musicPlayer_20; }
	inline void set_musicPlayer_20(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___musicPlayer_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicPlayer_20), (void*)value);
	}

	inline static int32_t get_offset_of_musicMain_21() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___musicMain_21)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_musicMain_21() const { return ___musicMain_21; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_musicMain_21() { return &___musicMain_21; }
	inline void set_musicMain_21(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___musicMain_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicMain_21), (void*)value);
	}

	inline static int32_t get_offset_of_musicWin_22() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___musicWin_22)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_musicWin_22() const { return ___musicWin_22; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_musicWin_22() { return &___musicWin_22; }
	inline void set_musicWin_22(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___musicWin_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicWin_22), (void*)value);
	}

	inline static int32_t get_offset_of_musicLose_23() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___musicLose_23)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_musicLose_23() const { return ___musicLose_23; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_musicLose_23() { return &___musicLose_23; }
	inline void set_musicLose_23(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___musicLose_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicLose_23), (void*)value);
	}

	inline static int32_t get_offset_of_soundPlayer_24() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___soundPlayer_24)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_soundPlayer_24() const { return ___soundPlayer_24; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_soundPlayer_24() { return &___soundPlayer_24; }
	inline void set_soundPlayer_24(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___soundPlayer_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundPlayer_24), (void*)value);
	}

	inline static int32_t get_offset_of_soundGrab_25() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___soundGrab_25)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_soundGrab_25() const { return ___soundGrab_25; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_soundGrab_25() { return &___soundGrab_25; }
	inline void set_soundGrab_25(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___soundGrab_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundGrab_25), (void*)value);
	}

	inline static int32_t get_offset_of_soundDrop_26() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___soundDrop_26)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_soundDrop_26() const { return ___soundDrop_26; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_soundDrop_26() { return &___soundDrop_26; }
	inline void set_soundDrop_26(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___soundDrop_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundDrop_26), (void*)value);
	}

	inline static int32_t get_offset_of_soundAssemble_27() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___soundAssemble_27)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_soundAssemble_27() const { return ___soundAssemble_27; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_soundAssemble_27() { return &___soundAssemble_27; }
	inline void set_soundAssemble_27(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___soundAssemble_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundAssemble_27), (void*)value);
	}

	inline static int32_t get_offset_of_timer_28() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___timer_28)); }
	inline float get_timer_28() const { return ___timer_28; }
	inline float* get_address_of_timer_28() { return &___timer_28; }
	inline void set_timer_28(float value)
	{
		___timer_28 = value;
	}

	inline static int32_t get_offset_of_hintLimit_29() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___hintLimit_29)); }
	inline int32_t get_hintLimit_29() const { return ___hintLimit_29; }
	inline int32_t* get_address_of_hintLimit_29() { return &___hintLimit_29; }
	inline void set_hintLimit_29(int32_t value)
	{
		___hintLimit_29 = value;
	}

	inline static int32_t get_offset_of_invertRules_30() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___invertRules_30)); }
	inline bool get_invertRules_30() const { return ___invertRules_30; }
	inline bool* get_address_of_invertRules_30() { return &___invertRules_30; }
	inline void set_invertRules_30(bool value)
	{
		___invertRules_30 = value;
	}

	inline static int32_t get_offset_of_cameraScript_31() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___cameraScript_31)); }
	inline CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * get_cameraScript_31() const { return ___cameraScript_31; }
	inline CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 ** get_address_of_cameraScript_31() { return &___cameraScript_31; }
	inline void set_cameraScript_31(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * value)
	{
		___cameraScript_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraScript_31), (void*)value);
	}

	inline static int32_t get_offset_of_timerTime_32() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___timerTime_32)); }
	inline float get_timerTime_32() const { return ___timerTime_32; }
	inline float* get_address_of_timerTime_32() { return &___timerTime_32; }
	inline void set_timerTime_32(float value)
	{
		___timerTime_32 = value;
	}

	inline static int32_t get_offset_of_remainingTime_33() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___remainingTime_33)); }
	inline float get_remainingTime_33() const { return ___remainingTime_33; }
	inline float* get_address_of_remainingTime_33() { return &___remainingTime_33; }
	inline void set_remainingTime_33(float value)
	{
		___remainingTime_33 = value;
	}

	inline static int32_t get_offset_of_elapsedTime_34() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___elapsedTime_34)); }
	inline float get_elapsedTime_34() const { return ___elapsedTime_34; }
	inline float* get_address_of_elapsedTime_34() { return &___elapsedTime_34; }
	inline void set_elapsedTime_34(float value)
	{
		___elapsedTime_34 = value;
	}

	inline static int32_t get_offset_of_gameFinished_35() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___gameFinished_35)); }
	inline bool get_gameFinished_35() const { return ___gameFinished_35; }
	inline bool* get_address_of_gameFinished_35() { return &___gameFinished_35; }
	inline void set_gameFinished_35(bool value)
	{
		___gameFinished_35 = value;
	}

	inline static int32_t get_offset_of_remainingHints_36() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___remainingHints_36)); }
	inline int32_t get_remainingHints_36() const { return ___remainingHints_36; }
	inline int32_t* get_address_of_remainingHints_36() { return &___remainingHints_36; }
	inline void set_remainingHints_36(int32_t value)
	{
		___remainingHints_36 = value;
	}

	inline static int32_t get_offset_of_backgroundColor_37() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___backgroundColor_37)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_backgroundColor_37() const { return ___backgroundColor_37; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_backgroundColor_37() { return &___backgroundColor_37; }
	inline void set_backgroundColor_37(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___backgroundColor_37 = value;
	}
};

struct GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_StaticFields
{
public:
	// UnityEngine.Vector3 GameController::oldPointerPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldPointerPosition_38;

public:
	inline static int32_t get_offset_of_oldPointerPosition_38() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_StaticFields, ___oldPointerPosition_38)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldPointerPosition_38() const { return ___oldPointerPosition_38; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldPointerPosition_38() { return &___oldPointerPosition_38; }
	inline void set_oldPointerPosition_38(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldPointerPosition_38 = value;
	}
};


// LoadGeneratedPuzzles
struct LoadGeneratedPuzzles_t6B6700CAFB1128C3BF7E5DB61F43EAFDCA6C7CB8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.RectTransform LoadGeneratedPuzzles::generationUI
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___generationUI_4;
	// RuntimeGeneration LoadGeneratedPuzzles::generationProcessor
	RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * ___generationProcessor_5;
	// UnityEngine.Vector2 LoadGeneratedPuzzles::maxPuzzleSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___maxPuzzleSize_6;
	// UnityEngine.RectTransform LoadGeneratedPuzzles::buttonTemplate
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___buttonTemplate_7;
	// UnityEngine.UI.ScrollRect LoadGeneratedPuzzles::scroll
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * ___scroll_8;
	// UnityEngine.Sprite[] LoadGeneratedPuzzles::sourceImages
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___sourceImages_9;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> LoadGeneratedPuzzles::loadDatas
	List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___loadDatas_10;

public:
	inline static int32_t get_offset_of_generationUI_4() { return static_cast<int32_t>(offsetof(LoadGeneratedPuzzles_t6B6700CAFB1128C3BF7E5DB61F43EAFDCA6C7CB8, ___generationUI_4)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_generationUI_4() const { return ___generationUI_4; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_generationUI_4() { return &___generationUI_4; }
	inline void set_generationUI_4(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___generationUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generationUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_generationProcessor_5() { return static_cast<int32_t>(offsetof(LoadGeneratedPuzzles_t6B6700CAFB1128C3BF7E5DB61F43EAFDCA6C7CB8, ___generationProcessor_5)); }
	inline RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * get_generationProcessor_5() const { return ___generationProcessor_5; }
	inline RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA ** get_address_of_generationProcessor_5() { return &___generationProcessor_5; }
	inline void set_generationProcessor_5(RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * value)
	{
		___generationProcessor_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generationProcessor_5), (void*)value);
	}

	inline static int32_t get_offset_of_maxPuzzleSize_6() { return static_cast<int32_t>(offsetof(LoadGeneratedPuzzles_t6B6700CAFB1128C3BF7E5DB61F43EAFDCA6C7CB8, ___maxPuzzleSize_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_maxPuzzleSize_6() const { return ___maxPuzzleSize_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_maxPuzzleSize_6() { return &___maxPuzzleSize_6; }
	inline void set_maxPuzzleSize_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___maxPuzzleSize_6 = value;
	}

	inline static int32_t get_offset_of_buttonTemplate_7() { return static_cast<int32_t>(offsetof(LoadGeneratedPuzzles_t6B6700CAFB1128C3BF7E5DB61F43EAFDCA6C7CB8, ___buttonTemplate_7)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_buttonTemplate_7() const { return ___buttonTemplate_7; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_buttonTemplate_7() { return &___buttonTemplate_7; }
	inline void set_buttonTemplate_7(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___buttonTemplate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonTemplate_7), (void*)value);
	}

	inline static int32_t get_offset_of_scroll_8() { return static_cast<int32_t>(offsetof(LoadGeneratedPuzzles_t6B6700CAFB1128C3BF7E5DB61F43EAFDCA6C7CB8, ___scroll_8)); }
	inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * get_scroll_8() const { return ___scroll_8; }
	inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA ** get_address_of_scroll_8() { return &___scroll_8; }
	inline void set_scroll_8(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * value)
	{
		___scroll_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scroll_8), (void*)value);
	}

	inline static int32_t get_offset_of_sourceImages_9() { return static_cast<int32_t>(offsetof(LoadGeneratedPuzzles_t6B6700CAFB1128C3BF7E5DB61F43EAFDCA6C7CB8, ___sourceImages_9)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_sourceImages_9() const { return ___sourceImages_9; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_sourceImages_9() { return &___sourceImages_9; }
	inline void set_sourceImages_9(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___sourceImages_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceImages_9), (void*)value);
	}

	inline static int32_t get_offset_of_loadDatas_10() { return static_cast<int32_t>(offsetof(LoadGeneratedPuzzles_t6B6700CAFB1128C3BF7E5DB61F43EAFDCA6C7CB8, ___loadDatas_10)); }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * get_loadDatas_10() const { return ___loadDatas_10; }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 ** get_address_of_loadDatas_10() { return &___loadDatas_10; }
	inline void set_loadDatas_10(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * value)
	{
		___loadDatas_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadDatas_10), (void*)value);
	}
};


// PuzzleController
struct PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean PuzzleController::enablePositionSaving
	bool ___enablePositionSaving_4;
	// System.Boolean PuzzleController::enablePiecesGroups
	bool ___enablePiecesGroups_5;
	// System.Boolean PuzzleController::assembleInAnyPlace
	bool ___assembleInAnyPlace_6;
	// System.Boolean PuzzleController::randomizeRotation
	bool ___randomizeRotation_7;
	// System.Boolean PuzzleController::changeOnlyRotation
	bool ___changeOnlyRotation_8;
	// System.Boolean PuzzleController::fullyIn3D
	bool ___fullyIn3D_9;
	// PuzzleAnchor PuzzleController::anchoring
	int32_t ___anchoring_10;
	// System.Boolean PuzzleController::decomposeToLeft
	bool ___decomposeToLeft_11;
	// System.Boolean PuzzleController::decomposeToRight
	bool ___decomposeToRight_12;
	// System.Boolean PuzzleController::decomposeToTop
	bool ___decomposeToTop_13;
	// System.Boolean PuzzleController::decomposeToBottom
	bool ___decomposeToBottom_14;
	// UnityEngine.Vector3 PuzzleController::horizontalAreasSize
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___horizontalAreasSize_15;
	// System.Boolean PuzzleController::autoHorizontalAreaOffset
	bool ___autoHorizontalAreaOffset_16;
	// UnityEngine.Vector3 PuzzleController::horizontalAreaOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___horizontalAreaOffset_17;
	// UnityEngine.Vector3 PuzzleController::verticalAreasSize
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___verticalAreasSize_18;
	// System.Boolean PuzzleController::autoVerticalAreaOffset
	bool ___autoVerticalAreaOffset_19;
	// UnityEngine.Vector3 PuzzleController::verticalAreaOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___verticalAreaOffset_20;
	// System.Single PuzzleController::movementTime
	float ___movementTime_21;
	// System.Single PuzzleController::rotationSpeed
	float ___rotationSpeed_22;
	// System.Boolean PuzzleController::gradualRotation
	bool ___gradualRotation_23;
	// System.Single PuzzleController::dragOffsetZ
	float ___dragOffsetZ_24;
	// System.Single PuzzleController::dragTiltSpeed
	float ___dragTiltSpeed_25;
	// System.Single PuzzleController::mobileDragOffsetY
	float ___mobileDragOffsetY_26;
	// System.Boolean PuzzleController::centerDraggedPiece
	bool ___centerDraggedPiece_27;
	// System.Boolean PuzzleController::alternativeDragging
	bool ___alternativeDragging_28;
	// System.Single PuzzleController::allowedDistance
	float ___allowedDistance_29;
	// System.Single PuzzleController::allowedRotation
	float ___allowedRotation_30;
	// System.Single PuzzleController::groupingDistance
	float ___groupingDistance_31;
	// System.Boolean PuzzleController::invertedRules
	bool ___invertedRules_32;
	// System.Boolean PuzzleController::swapPuzzleMode
	bool ___swapPuzzleMode_33;
	// PuzzlePiece[] PuzzleController::pieces
	PuzzlePieceU5BU5D_t071BE6397EB0E752BF072D15EA006D64E4BB3238* ___pieces_34;
	// UnityEngine.Bounds PuzzleController::puzzleBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___puzzleBounds_35;
	// UnityEngine.Material PuzzleController::pieceMaterial_assembled
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___pieceMaterial_assembled_36;
	// UnityEngine.Transform PuzzleController::thisTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___thisTransform_37;
	// PuzzleState PuzzleController::state
	int32_t ___state_38;
	// System.Collections.Generic.List`1<System.Int32> PuzzleController::movedPieces
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___movedPieces_39;
	// System.Collections.Generic.List`1<PuzzlePiece> PuzzleController::overlappedPieces
	List_1_t698A055EDA0EAD65D2161EEF6E5796743106F240 * ___overlappedPieces_40;
	// System.Collections.Generic.List`1<System.Int32> PuzzleController::ungroupedPieces
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___ungroupedPieces_41;
	// UnityEngine.Vector3 PuzzleController::pieceCenterOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pieceCenterOffset_42;
	// UnityEngine.Vector2 PuzzleController::oldPointerPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oldPointerPosition_43;
	// System.Int32 PuzzleController::currentPiece
	int32_t ___currentPiece_44;
	// System.Int32 PuzzleController::swapPiece
	int32_t ___swapPiece_45;
	// UnityEngine.Transform PuzzleController::currentObjectTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___currentObjectTransform_46;
	// PuzzlePieceGroup PuzzleController::currentGroup
	PuzzlePieceGroup_t2C2F59D53E929E49F453F8382B8E117AB8A0E27B * ___currentGroup_47;
	// UnityEngine.GameObject PuzzleController::currentObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentObject_48;
	// System.Single PuzzleController::timeToRotate
	float ___timeToRotate_49;
	// System.Single PuzzleController::grabTime
	float ___grabTime_50;

public:
	inline static int32_t get_offset_of_enablePositionSaving_4() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___enablePositionSaving_4)); }
	inline bool get_enablePositionSaving_4() const { return ___enablePositionSaving_4; }
	inline bool* get_address_of_enablePositionSaving_4() { return &___enablePositionSaving_4; }
	inline void set_enablePositionSaving_4(bool value)
	{
		___enablePositionSaving_4 = value;
	}

	inline static int32_t get_offset_of_enablePiecesGroups_5() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___enablePiecesGroups_5)); }
	inline bool get_enablePiecesGroups_5() const { return ___enablePiecesGroups_5; }
	inline bool* get_address_of_enablePiecesGroups_5() { return &___enablePiecesGroups_5; }
	inline void set_enablePiecesGroups_5(bool value)
	{
		___enablePiecesGroups_5 = value;
	}

	inline static int32_t get_offset_of_assembleInAnyPlace_6() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___assembleInAnyPlace_6)); }
	inline bool get_assembleInAnyPlace_6() const { return ___assembleInAnyPlace_6; }
	inline bool* get_address_of_assembleInAnyPlace_6() { return &___assembleInAnyPlace_6; }
	inline void set_assembleInAnyPlace_6(bool value)
	{
		___assembleInAnyPlace_6 = value;
	}

	inline static int32_t get_offset_of_randomizeRotation_7() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___randomizeRotation_7)); }
	inline bool get_randomizeRotation_7() const { return ___randomizeRotation_7; }
	inline bool* get_address_of_randomizeRotation_7() { return &___randomizeRotation_7; }
	inline void set_randomizeRotation_7(bool value)
	{
		___randomizeRotation_7 = value;
	}

	inline static int32_t get_offset_of_changeOnlyRotation_8() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___changeOnlyRotation_8)); }
	inline bool get_changeOnlyRotation_8() const { return ___changeOnlyRotation_8; }
	inline bool* get_address_of_changeOnlyRotation_8() { return &___changeOnlyRotation_8; }
	inline void set_changeOnlyRotation_8(bool value)
	{
		___changeOnlyRotation_8 = value;
	}

	inline static int32_t get_offset_of_fullyIn3D_9() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___fullyIn3D_9)); }
	inline bool get_fullyIn3D_9() const { return ___fullyIn3D_9; }
	inline bool* get_address_of_fullyIn3D_9() { return &___fullyIn3D_9; }
	inline void set_fullyIn3D_9(bool value)
	{
		___fullyIn3D_9 = value;
	}

	inline static int32_t get_offset_of_anchoring_10() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___anchoring_10)); }
	inline int32_t get_anchoring_10() const { return ___anchoring_10; }
	inline int32_t* get_address_of_anchoring_10() { return &___anchoring_10; }
	inline void set_anchoring_10(int32_t value)
	{
		___anchoring_10 = value;
	}

	inline static int32_t get_offset_of_decomposeToLeft_11() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___decomposeToLeft_11)); }
	inline bool get_decomposeToLeft_11() const { return ___decomposeToLeft_11; }
	inline bool* get_address_of_decomposeToLeft_11() { return &___decomposeToLeft_11; }
	inline void set_decomposeToLeft_11(bool value)
	{
		___decomposeToLeft_11 = value;
	}

	inline static int32_t get_offset_of_decomposeToRight_12() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___decomposeToRight_12)); }
	inline bool get_decomposeToRight_12() const { return ___decomposeToRight_12; }
	inline bool* get_address_of_decomposeToRight_12() { return &___decomposeToRight_12; }
	inline void set_decomposeToRight_12(bool value)
	{
		___decomposeToRight_12 = value;
	}

	inline static int32_t get_offset_of_decomposeToTop_13() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___decomposeToTop_13)); }
	inline bool get_decomposeToTop_13() const { return ___decomposeToTop_13; }
	inline bool* get_address_of_decomposeToTop_13() { return &___decomposeToTop_13; }
	inline void set_decomposeToTop_13(bool value)
	{
		___decomposeToTop_13 = value;
	}

	inline static int32_t get_offset_of_decomposeToBottom_14() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___decomposeToBottom_14)); }
	inline bool get_decomposeToBottom_14() const { return ___decomposeToBottom_14; }
	inline bool* get_address_of_decomposeToBottom_14() { return &___decomposeToBottom_14; }
	inline void set_decomposeToBottom_14(bool value)
	{
		___decomposeToBottom_14 = value;
	}

	inline static int32_t get_offset_of_horizontalAreasSize_15() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___horizontalAreasSize_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_horizontalAreasSize_15() const { return ___horizontalAreasSize_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_horizontalAreasSize_15() { return &___horizontalAreasSize_15; }
	inline void set_horizontalAreasSize_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___horizontalAreasSize_15 = value;
	}

	inline static int32_t get_offset_of_autoHorizontalAreaOffset_16() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___autoHorizontalAreaOffset_16)); }
	inline bool get_autoHorizontalAreaOffset_16() const { return ___autoHorizontalAreaOffset_16; }
	inline bool* get_address_of_autoHorizontalAreaOffset_16() { return &___autoHorizontalAreaOffset_16; }
	inline void set_autoHorizontalAreaOffset_16(bool value)
	{
		___autoHorizontalAreaOffset_16 = value;
	}

	inline static int32_t get_offset_of_horizontalAreaOffset_17() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___horizontalAreaOffset_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_horizontalAreaOffset_17() const { return ___horizontalAreaOffset_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_horizontalAreaOffset_17() { return &___horizontalAreaOffset_17; }
	inline void set_horizontalAreaOffset_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___horizontalAreaOffset_17 = value;
	}

	inline static int32_t get_offset_of_verticalAreasSize_18() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___verticalAreasSize_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_verticalAreasSize_18() const { return ___verticalAreasSize_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_verticalAreasSize_18() { return &___verticalAreasSize_18; }
	inline void set_verticalAreasSize_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___verticalAreasSize_18 = value;
	}

	inline static int32_t get_offset_of_autoVerticalAreaOffset_19() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___autoVerticalAreaOffset_19)); }
	inline bool get_autoVerticalAreaOffset_19() const { return ___autoVerticalAreaOffset_19; }
	inline bool* get_address_of_autoVerticalAreaOffset_19() { return &___autoVerticalAreaOffset_19; }
	inline void set_autoVerticalAreaOffset_19(bool value)
	{
		___autoVerticalAreaOffset_19 = value;
	}

	inline static int32_t get_offset_of_verticalAreaOffset_20() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___verticalAreaOffset_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_verticalAreaOffset_20() const { return ___verticalAreaOffset_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_verticalAreaOffset_20() { return &___verticalAreaOffset_20; }
	inline void set_verticalAreaOffset_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___verticalAreaOffset_20 = value;
	}

	inline static int32_t get_offset_of_movementTime_21() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___movementTime_21)); }
	inline float get_movementTime_21() const { return ___movementTime_21; }
	inline float* get_address_of_movementTime_21() { return &___movementTime_21; }
	inline void set_movementTime_21(float value)
	{
		___movementTime_21 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_22() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___rotationSpeed_22)); }
	inline float get_rotationSpeed_22() const { return ___rotationSpeed_22; }
	inline float* get_address_of_rotationSpeed_22() { return &___rotationSpeed_22; }
	inline void set_rotationSpeed_22(float value)
	{
		___rotationSpeed_22 = value;
	}

	inline static int32_t get_offset_of_gradualRotation_23() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___gradualRotation_23)); }
	inline bool get_gradualRotation_23() const { return ___gradualRotation_23; }
	inline bool* get_address_of_gradualRotation_23() { return &___gradualRotation_23; }
	inline void set_gradualRotation_23(bool value)
	{
		___gradualRotation_23 = value;
	}

	inline static int32_t get_offset_of_dragOffsetZ_24() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___dragOffsetZ_24)); }
	inline float get_dragOffsetZ_24() const { return ___dragOffsetZ_24; }
	inline float* get_address_of_dragOffsetZ_24() { return &___dragOffsetZ_24; }
	inline void set_dragOffsetZ_24(float value)
	{
		___dragOffsetZ_24 = value;
	}

	inline static int32_t get_offset_of_dragTiltSpeed_25() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___dragTiltSpeed_25)); }
	inline float get_dragTiltSpeed_25() const { return ___dragTiltSpeed_25; }
	inline float* get_address_of_dragTiltSpeed_25() { return &___dragTiltSpeed_25; }
	inline void set_dragTiltSpeed_25(float value)
	{
		___dragTiltSpeed_25 = value;
	}

	inline static int32_t get_offset_of_mobileDragOffsetY_26() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___mobileDragOffsetY_26)); }
	inline float get_mobileDragOffsetY_26() const { return ___mobileDragOffsetY_26; }
	inline float* get_address_of_mobileDragOffsetY_26() { return &___mobileDragOffsetY_26; }
	inline void set_mobileDragOffsetY_26(float value)
	{
		___mobileDragOffsetY_26 = value;
	}

	inline static int32_t get_offset_of_centerDraggedPiece_27() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___centerDraggedPiece_27)); }
	inline bool get_centerDraggedPiece_27() const { return ___centerDraggedPiece_27; }
	inline bool* get_address_of_centerDraggedPiece_27() { return &___centerDraggedPiece_27; }
	inline void set_centerDraggedPiece_27(bool value)
	{
		___centerDraggedPiece_27 = value;
	}

	inline static int32_t get_offset_of_alternativeDragging_28() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___alternativeDragging_28)); }
	inline bool get_alternativeDragging_28() const { return ___alternativeDragging_28; }
	inline bool* get_address_of_alternativeDragging_28() { return &___alternativeDragging_28; }
	inline void set_alternativeDragging_28(bool value)
	{
		___alternativeDragging_28 = value;
	}

	inline static int32_t get_offset_of_allowedDistance_29() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___allowedDistance_29)); }
	inline float get_allowedDistance_29() const { return ___allowedDistance_29; }
	inline float* get_address_of_allowedDistance_29() { return &___allowedDistance_29; }
	inline void set_allowedDistance_29(float value)
	{
		___allowedDistance_29 = value;
	}

	inline static int32_t get_offset_of_allowedRotation_30() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___allowedRotation_30)); }
	inline float get_allowedRotation_30() const { return ___allowedRotation_30; }
	inline float* get_address_of_allowedRotation_30() { return &___allowedRotation_30; }
	inline void set_allowedRotation_30(float value)
	{
		___allowedRotation_30 = value;
	}

	inline static int32_t get_offset_of_groupingDistance_31() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___groupingDistance_31)); }
	inline float get_groupingDistance_31() const { return ___groupingDistance_31; }
	inline float* get_address_of_groupingDistance_31() { return &___groupingDistance_31; }
	inline void set_groupingDistance_31(float value)
	{
		___groupingDistance_31 = value;
	}

	inline static int32_t get_offset_of_invertedRules_32() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___invertedRules_32)); }
	inline bool get_invertedRules_32() const { return ___invertedRules_32; }
	inline bool* get_address_of_invertedRules_32() { return &___invertedRules_32; }
	inline void set_invertedRules_32(bool value)
	{
		___invertedRules_32 = value;
	}

	inline static int32_t get_offset_of_swapPuzzleMode_33() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___swapPuzzleMode_33)); }
	inline bool get_swapPuzzleMode_33() const { return ___swapPuzzleMode_33; }
	inline bool* get_address_of_swapPuzzleMode_33() { return &___swapPuzzleMode_33; }
	inline void set_swapPuzzleMode_33(bool value)
	{
		___swapPuzzleMode_33 = value;
	}

	inline static int32_t get_offset_of_pieces_34() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___pieces_34)); }
	inline PuzzlePieceU5BU5D_t071BE6397EB0E752BF072D15EA006D64E4BB3238* get_pieces_34() const { return ___pieces_34; }
	inline PuzzlePieceU5BU5D_t071BE6397EB0E752BF072D15EA006D64E4BB3238** get_address_of_pieces_34() { return &___pieces_34; }
	inline void set_pieces_34(PuzzlePieceU5BU5D_t071BE6397EB0E752BF072D15EA006D64E4BB3238* value)
	{
		___pieces_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pieces_34), (void*)value);
	}

	inline static int32_t get_offset_of_puzzleBounds_35() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___puzzleBounds_35)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_puzzleBounds_35() const { return ___puzzleBounds_35; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_puzzleBounds_35() { return &___puzzleBounds_35; }
	inline void set_puzzleBounds_35(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___puzzleBounds_35 = value;
	}

	inline static int32_t get_offset_of_pieceMaterial_assembled_36() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___pieceMaterial_assembled_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_pieceMaterial_assembled_36() const { return ___pieceMaterial_assembled_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_pieceMaterial_assembled_36() { return &___pieceMaterial_assembled_36; }
	inline void set_pieceMaterial_assembled_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___pieceMaterial_assembled_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pieceMaterial_assembled_36), (void*)value);
	}

	inline static int32_t get_offset_of_thisTransform_37() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___thisTransform_37)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_thisTransform_37() const { return ___thisTransform_37; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_thisTransform_37() { return &___thisTransform_37; }
	inline void set_thisTransform_37(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___thisTransform_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thisTransform_37), (void*)value);
	}

	inline static int32_t get_offset_of_state_38() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___state_38)); }
	inline int32_t get_state_38() const { return ___state_38; }
	inline int32_t* get_address_of_state_38() { return &___state_38; }
	inline void set_state_38(int32_t value)
	{
		___state_38 = value;
	}

	inline static int32_t get_offset_of_movedPieces_39() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___movedPieces_39)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_movedPieces_39() const { return ___movedPieces_39; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_movedPieces_39() { return &___movedPieces_39; }
	inline void set_movedPieces_39(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___movedPieces_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___movedPieces_39), (void*)value);
	}

	inline static int32_t get_offset_of_overlappedPieces_40() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___overlappedPieces_40)); }
	inline List_1_t698A055EDA0EAD65D2161EEF6E5796743106F240 * get_overlappedPieces_40() const { return ___overlappedPieces_40; }
	inline List_1_t698A055EDA0EAD65D2161EEF6E5796743106F240 ** get_address_of_overlappedPieces_40() { return &___overlappedPieces_40; }
	inline void set_overlappedPieces_40(List_1_t698A055EDA0EAD65D2161EEF6E5796743106F240 * value)
	{
		___overlappedPieces_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overlappedPieces_40), (void*)value);
	}

	inline static int32_t get_offset_of_ungroupedPieces_41() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___ungroupedPieces_41)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_ungroupedPieces_41() const { return ___ungroupedPieces_41; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_ungroupedPieces_41() { return &___ungroupedPieces_41; }
	inline void set_ungroupedPieces_41(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___ungroupedPieces_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ungroupedPieces_41), (void*)value);
	}

	inline static int32_t get_offset_of_pieceCenterOffset_42() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___pieceCenterOffset_42)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pieceCenterOffset_42() const { return ___pieceCenterOffset_42; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pieceCenterOffset_42() { return &___pieceCenterOffset_42; }
	inline void set_pieceCenterOffset_42(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pieceCenterOffset_42 = value;
	}

	inline static int32_t get_offset_of_oldPointerPosition_43() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___oldPointerPosition_43)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oldPointerPosition_43() const { return ___oldPointerPosition_43; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oldPointerPosition_43() { return &___oldPointerPosition_43; }
	inline void set_oldPointerPosition_43(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oldPointerPosition_43 = value;
	}

	inline static int32_t get_offset_of_currentPiece_44() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___currentPiece_44)); }
	inline int32_t get_currentPiece_44() const { return ___currentPiece_44; }
	inline int32_t* get_address_of_currentPiece_44() { return &___currentPiece_44; }
	inline void set_currentPiece_44(int32_t value)
	{
		___currentPiece_44 = value;
	}

	inline static int32_t get_offset_of_swapPiece_45() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___swapPiece_45)); }
	inline int32_t get_swapPiece_45() const { return ___swapPiece_45; }
	inline int32_t* get_address_of_swapPiece_45() { return &___swapPiece_45; }
	inline void set_swapPiece_45(int32_t value)
	{
		___swapPiece_45 = value;
	}

	inline static int32_t get_offset_of_currentObjectTransform_46() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___currentObjectTransform_46)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_currentObjectTransform_46() const { return ___currentObjectTransform_46; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_currentObjectTransform_46() { return &___currentObjectTransform_46; }
	inline void set_currentObjectTransform_46(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___currentObjectTransform_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentObjectTransform_46), (void*)value);
	}

	inline static int32_t get_offset_of_currentGroup_47() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___currentGroup_47)); }
	inline PuzzlePieceGroup_t2C2F59D53E929E49F453F8382B8E117AB8A0E27B * get_currentGroup_47() const { return ___currentGroup_47; }
	inline PuzzlePieceGroup_t2C2F59D53E929E49F453F8382B8E117AB8A0E27B ** get_address_of_currentGroup_47() { return &___currentGroup_47; }
	inline void set_currentGroup_47(PuzzlePieceGroup_t2C2F59D53E929E49F453F8382B8E117AB8A0E27B * value)
	{
		___currentGroup_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentGroup_47), (void*)value);
	}

	inline static int32_t get_offset_of_currentObject_48() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___currentObject_48)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentObject_48() const { return ___currentObject_48; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentObject_48() { return &___currentObject_48; }
	inline void set_currentObject_48(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentObject_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentObject_48), (void*)value);
	}

	inline static int32_t get_offset_of_timeToRotate_49() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___timeToRotate_49)); }
	inline float get_timeToRotate_49() const { return ___timeToRotate_49; }
	inline float* get_address_of_timeToRotate_49() { return &___timeToRotate_49; }
	inline void set_timeToRotate_49(float value)
	{
		___timeToRotate_49 = value;
	}

	inline static int32_t get_offset_of_grabTime_50() { return static_cast<int32_t>(offsetof(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364, ___grabTime_50)); }
	inline float get_grabTime_50() const { return ___grabTime_50; }
	inline float* get_address_of_grabTime_50() { return &___grabTime_50; }
	inline void set_grabTime_50(float value)
	{
		___grabTime_50 = value;
	}
};


// PuzzleGenerator_Runtime
struct PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Texture2D PuzzleGenerator_Runtime::subElement
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___subElement_4;
	// UnityEngine.Material PuzzleGenerator_Runtime::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_5;
	// UnityEngine.Material PuzzleGenerator_Runtime::assembledMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___assembledMaterial_6;
	// System.Int32 PuzzleGenerator_Runtime::cols
	int32_t ___cols_7;
	// System.Int32 PuzzleGenerator_Runtime::rows
	int32_t ___rows_8;
	// PuzzleAnchor PuzzleGenerator_Runtime::anchoring
	int32_t ___anchoring_9;
	// System.Single PuzzleGenerator_Runtime::imageScale
	float ___imageScale_10;
	// System.Int32 PuzzleGenerator_Runtime::elementBaseSize
	int32_t ___elementBaseSize_11;
	// System.Int32 PuzzleGenerator_Runtime::pixelsPerUnit
	int32_t ___pixelsPerUnit_12;
	// System.Boolean PuzzleGenerator_Runtime::useShadows
	bool ___useShadows_13;
	// UnityEngine.Vector3 PuzzleGenerator_Runtime::shadowOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___shadowOffset_14;
	// UnityEngine.Color PuzzleGenerator_Runtime::shadowColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___shadowColor_15;
	// System.Single PuzzleGenerator_Runtime::allowedDistance
	float ___allowedDistance_16;
	// System.Single PuzzleGenerator_Runtime::allowedRotation
	float ___allowedRotation_17;
	// System.Boolean PuzzleGenerator_Runtime::randomizeRotation
	bool ___randomizeRotation_18;
	// System.Boolean PuzzleGenerator_Runtime::decomposeToLeft
	bool ___decomposeToLeft_19;
	// System.Boolean PuzzleGenerator_Runtime::decomposeToRight
	bool ___decomposeToRight_20;
	// System.Boolean PuzzleGenerator_Runtime::decomposeToTop
	bool ___decomposeToTop_21;
	// System.Boolean PuzzleGenerator_Runtime::decomposeToBottom
	bool ___decomposeToBottom_22;
	// UnityEngine.Vector3 PuzzleGenerator_Runtime::horizontalAreasSize
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___horizontalAreasSize_23;
	// System.Boolean PuzzleGenerator_Runtime::autoHorizontalAreaOffset
	bool ___autoHorizontalAreaOffset_24;
	// UnityEngine.Vector3 PuzzleGenerator_Runtime::horizontalAreaOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___horizontalAreaOffset_25;
	// UnityEngine.Vector3 PuzzleGenerator_Runtime::verticalAreasSize
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___verticalAreasSize_26;
	// System.Boolean PuzzleGenerator_Runtime::autoVerticalAreaOffset
	bool ___autoVerticalAreaOffset_27;
	// UnityEngine.Vector3 PuzzleGenerator_Runtime::verticalAreaOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___verticalAreaOffset_28;
	// System.String PuzzleGenerator_Runtime::path
	String_t* ___path_29;
	// UnityEngine.Texture2D PuzzleGenerator_Runtime::image
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___image_30;
	// PuzzleElement[] PuzzleGenerator_Runtime::puzzleGrid
	PuzzleElementU5BU5D_tD49B6809D1D1034C1CE6130DDE04054CD6FD235B* ___puzzleGrid_31;
	// PuzzleController PuzzleGenerator_Runtime::puzzle
	PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364 * ___puzzle_32;

public:
	inline static int32_t get_offset_of_subElement_4() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___subElement_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_subElement_4() const { return ___subElement_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_subElement_4() { return &___subElement_4; }
	inline void set_subElement_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___subElement_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subElement_4), (void*)value);
	}

	inline static int32_t get_offset_of_material_5() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___material_5)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_5() const { return ___material_5; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_5() { return &___material_5; }
	inline void set_material_5(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_5), (void*)value);
	}

	inline static int32_t get_offset_of_assembledMaterial_6() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___assembledMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_assembledMaterial_6() const { return ___assembledMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_assembledMaterial_6() { return &___assembledMaterial_6; }
	inline void set_assembledMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___assembledMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembledMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_cols_7() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___cols_7)); }
	inline int32_t get_cols_7() const { return ___cols_7; }
	inline int32_t* get_address_of_cols_7() { return &___cols_7; }
	inline void set_cols_7(int32_t value)
	{
		___cols_7 = value;
	}

	inline static int32_t get_offset_of_rows_8() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___rows_8)); }
	inline int32_t get_rows_8() const { return ___rows_8; }
	inline int32_t* get_address_of_rows_8() { return &___rows_8; }
	inline void set_rows_8(int32_t value)
	{
		___rows_8 = value;
	}

	inline static int32_t get_offset_of_anchoring_9() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___anchoring_9)); }
	inline int32_t get_anchoring_9() const { return ___anchoring_9; }
	inline int32_t* get_address_of_anchoring_9() { return &___anchoring_9; }
	inline void set_anchoring_9(int32_t value)
	{
		___anchoring_9 = value;
	}

	inline static int32_t get_offset_of_imageScale_10() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___imageScale_10)); }
	inline float get_imageScale_10() const { return ___imageScale_10; }
	inline float* get_address_of_imageScale_10() { return &___imageScale_10; }
	inline void set_imageScale_10(float value)
	{
		___imageScale_10 = value;
	}

	inline static int32_t get_offset_of_elementBaseSize_11() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___elementBaseSize_11)); }
	inline int32_t get_elementBaseSize_11() const { return ___elementBaseSize_11; }
	inline int32_t* get_address_of_elementBaseSize_11() { return &___elementBaseSize_11; }
	inline void set_elementBaseSize_11(int32_t value)
	{
		___elementBaseSize_11 = value;
	}

	inline static int32_t get_offset_of_pixelsPerUnit_12() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___pixelsPerUnit_12)); }
	inline int32_t get_pixelsPerUnit_12() const { return ___pixelsPerUnit_12; }
	inline int32_t* get_address_of_pixelsPerUnit_12() { return &___pixelsPerUnit_12; }
	inline void set_pixelsPerUnit_12(int32_t value)
	{
		___pixelsPerUnit_12 = value;
	}

	inline static int32_t get_offset_of_useShadows_13() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___useShadows_13)); }
	inline bool get_useShadows_13() const { return ___useShadows_13; }
	inline bool* get_address_of_useShadows_13() { return &___useShadows_13; }
	inline void set_useShadows_13(bool value)
	{
		___useShadows_13 = value;
	}

	inline static int32_t get_offset_of_shadowOffset_14() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___shadowOffset_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_shadowOffset_14() const { return ___shadowOffset_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_shadowOffset_14() { return &___shadowOffset_14; }
	inline void set_shadowOffset_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___shadowOffset_14 = value;
	}

	inline static int32_t get_offset_of_shadowColor_15() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___shadowColor_15)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_shadowColor_15() const { return ___shadowColor_15; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_shadowColor_15() { return &___shadowColor_15; }
	inline void set_shadowColor_15(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___shadowColor_15 = value;
	}

	inline static int32_t get_offset_of_allowedDistance_16() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___allowedDistance_16)); }
	inline float get_allowedDistance_16() const { return ___allowedDistance_16; }
	inline float* get_address_of_allowedDistance_16() { return &___allowedDistance_16; }
	inline void set_allowedDistance_16(float value)
	{
		___allowedDistance_16 = value;
	}

	inline static int32_t get_offset_of_allowedRotation_17() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___allowedRotation_17)); }
	inline float get_allowedRotation_17() const { return ___allowedRotation_17; }
	inline float* get_address_of_allowedRotation_17() { return &___allowedRotation_17; }
	inline void set_allowedRotation_17(float value)
	{
		___allowedRotation_17 = value;
	}

	inline static int32_t get_offset_of_randomizeRotation_18() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___randomizeRotation_18)); }
	inline bool get_randomizeRotation_18() const { return ___randomizeRotation_18; }
	inline bool* get_address_of_randomizeRotation_18() { return &___randomizeRotation_18; }
	inline void set_randomizeRotation_18(bool value)
	{
		___randomizeRotation_18 = value;
	}

	inline static int32_t get_offset_of_decomposeToLeft_19() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___decomposeToLeft_19)); }
	inline bool get_decomposeToLeft_19() const { return ___decomposeToLeft_19; }
	inline bool* get_address_of_decomposeToLeft_19() { return &___decomposeToLeft_19; }
	inline void set_decomposeToLeft_19(bool value)
	{
		___decomposeToLeft_19 = value;
	}

	inline static int32_t get_offset_of_decomposeToRight_20() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___decomposeToRight_20)); }
	inline bool get_decomposeToRight_20() const { return ___decomposeToRight_20; }
	inline bool* get_address_of_decomposeToRight_20() { return &___decomposeToRight_20; }
	inline void set_decomposeToRight_20(bool value)
	{
		___decomposeToRight_20 = value;
	}

	inline static int32_t get_offset_of_decomposeToTop_21() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___decomposeToTop_21)); }
	inline bool get_decomposeToTop_21() const { return ___decomposeToTop_21; }
	inline bool* get_address_of_decomposeToTop_21() { return &___decomposeToTop_21; }
	inline void set_decomposeToTop_21(bool value)
	{
		___decomposeToTop_21 = value;
	}

	inline static int32_t get_offset_of_decomposeToBottom_22() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___decomposeToBottom_22)); }
	inline bool get_decomposeToBottom_22() const { return ___decomposeToBottom_22; }
	inline bool* get_address_of_decomposeToBottom_22() { return &___decomposeToBottom_22; }
	inline void set_decomposeToBottom_22(bool value)
	{
		___decomposeToBottom_22 = value;
	}

	inline static int32_t get_offset_of_horizontalAreasSize_23() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___horizontalAreasSize_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_horizontalAreasSize_23() const { return ___horizontalAreasSize_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_horizontalAreasSize_23() { return &___horizontalAreasSize_23; }
	inline void set_horizontalAreasSize_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___horizontalAreasSize_23 = value;
	}

	inline static int32_t get_offset_of_autoHorizontalAreaOffset_24() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___autoHorizontalAreaOffset_24)); }
	inline bool get_autoHorizontalAreaOffset_24() const { return ___autoHorizontalAreaOffset_24; }
	inline bool* get_address_of_autoHorizontalAreaOffset_24() { return &___autoHorizontalAreaOffset_24; }
	inline void set_autoHorizontalAreaOffset_24(bool value)
	{
		___autoHorizontalAreaOffset_24 = value;
	}

	inline static int32_t get_offset_of_horizontalAreaOffset_25() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___horizontalAreaOffset_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_horizontalAreaOffset_25() const { return ___horizontalAreaOffset_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_horizontalAreaOffset_25() { return &___horizontalAreaOffset_25; }
	inline void set_horizontalAreaOffset_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___horizontalAreaOffset_25 = value;
	}

	inline static int32_t get_offset_of_verticalAreasSize_26() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___verticalAreasSize_26)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_verticalAreasSize_26() const { return ___verticalAreasSize_26; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_verticalAreasSize_26() { return &___verticalAreasSize_26; }
	inline void set_verticalAreasSize_26(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___verticalAreasSize_26 = value;
	}

	inline static int32_t get_offset_of_autoVerticalAreaOffset_27() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___autoVerticalAreaOffset_27)); }
	inline bool get_autoVerticalAreaOffset_27() const { return ___autoVerticalAreaOffset_27; }
	inline bool* get_address_of_autoVerticalAreaOffset_27() { return &___autoVerticalAreaOffset_27; }
	inline void set_autoVerticalAreaOffset_27(bool value)
	{
		___autoVerticalAreaOffset_27 = value;
	}

	inline static int32_t get_offset_of_verticalAreaOffset_28() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___verticalAreaOffset_28)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_verticalAreaOffset_28() const { return ___verticalAreaOffset_28; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_verticalAreaOffset_28() { return &___verticalAreaOffset_28; }
	inline void set_verticalAreaOffset_28(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___verticalAreaOffset_28 = value;
	}

	inline static int32_t get_offset_of_path_29() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___path_29)); }
	inline String_t* get_path_29() const { return ___path_29; }
	inline String_t** get_address_of_path_29() { return &___path_29; }
	inline void set_path_29(String_t* value)
	{
		___path_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_29), (void*)value);
	}

	inline static int32_t get_offset_of_image_30() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___image_30)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_image_30() const { return ___image_30; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_image_30() { return &___image_30; }
	inline void set_image_30(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___image_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_30), (void*)value);
	}

	inline static int32_t get_offset_of_puzzleGrid_31() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___puzzleGrid_31)); }
	inline PuzzleElementU5BU5D_tD49B6809D1D1034C1CE6130DDE04054CD6FD235B* get_puzzleGrid_31() const { return ___puzzleGrid_31; }
	inline PuzzleElementU5BU5D_tD49B6809D1D1034C1CE6130DDE04054CD6FD235B** get_address_of_puzzleGrid_31() { return &___puzzleGrid_31; }
	inline void set_puzzleGrid_31(PuzzleElementU5BU5D_tD49B6809D1D1034C1CE6130DDE04054CD6FD235B* value)
	{
		___puzzleGrid_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___puzzleGrid_31), (void*)value);
	}

	inline static int32_t get_offset_of_puzzle_32() { return static_cast<int32_t>(offsetof(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20, ___puzzle_32)); }
	inline PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364 * get_puzzle_32() const { return ___puzzle_32; }
	inline PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364 ** get_address_of_puzzle_32() { return &___puzzle_32; }
	inline void set_puzzle_32(PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364 * value)
	{
		___puzzle_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___puzzle_32), (void*)value);
	}
};


// RuntimeGeneration
struct RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Texture2D RuntimeGeneration::image
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___image_4;
	// System.Boolean RuntimeGeneration::generateBackground
	bool ___generateBackground_5;
	// System.Boolean RuntimeGeneration::clearOldSaves
	bool ___clearOldSaves_6;
	// System.String RuntimeGeneration::pathToImage
	String_t* ___pathToImage_7;
	// PuzzleGenerator_Runtime RuntimeGeneration::puzzleGenerator
	PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * ___puzzleGenerator_8;
	// GameController RuntimeGeneration::gameController
	GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * ___gameController_9;
	// UnityEngine.UI.Text RuntimeGeneration::rows
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___rows_10;
	// UnityEngine.UI.Text RuntimeGeneration::cols
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___cols_11;
	// UnityEngine.UI.Button RuntimeGeneration::shuffleButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___shuffleButton_12;

public:
	inline static int32_t get_offset_of_image_4() { return static_cast<int32_t>(offsetof(RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA, ___image_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_image_4() const { return ___image_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_image_4() { return &___image_4; }
	inline void set_image_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___image_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_4), (void*)value);
	}

	inline static int32_t get_offset_of_generateBackground_5() { return static_cast<int32_t>(offsetof(RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA, ___generateBackground_5)); }
	inline bool get_generateBackground_5() const { return ___generateBackground_5; }
	inline bool* get_address_of_generateBackground_5() { return &___generateBackground_5; }
	inline void set_generateBackground_5(bool value)
	{
		___generateBackground_5 = value;
	}

	inline static int32_t get_offset_of_clearOldSaves_6() { return static_cast<int32_t>(offsetof(RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA, ___clearOldSaves_6)); }
	inline bool get_clearOldSaves_6() const { return ___clearOldSaves_6; }
	inline bool* get_address_of_clearOldSaves_6() { return &___clearOldSaves_6; }
	inline void set_clearOldSaves_6(bool value)
	{
		___clearOldSaves_6 = value;
	}

	inline static int32_t get_offset_of_pathToImage_7() { return static_cast<int32_t>(offsetof(RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA, ___pathToImage_7)); }
	inline String_t* get_pathToImage_7() const { return ___pathToImage_7; }
	inline String_t** get_address_of_pathToImage_7() { return &___pathToImage_7; }
	inline void set_pathToImage_7(String_t* value)
	{
		___pathToImage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathToImage_7), (void*)value);
	}

	inline static int32_t get_offset_of_puzzleGenerator_8() { return static_cast<int32_t>(offsetof(RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA, ___puzzleGenerator_8)); }
	inline PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * get_puzzleGenerator_8() const { return ___puzzleGenerator_8; }
	inline PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 ** get_address_of_puzzleGenerator_8() { return &___puzzleGenerator_8; }
	inline void set_puzzleGenerator_8(PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * value)
	{
		___puzzleGenerator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___puzzleGenerator_8), (void*)value);
	}

	inline static int32_t get_offset_of_gameController_9() { return static_cast<int32_t>(offsetof(RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA, ___gameController_9)); }
	inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * get_gameController_9() const { return ___gameController_9; }
	inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 ** get_address_of_gameController_9() { return &___gameController_9; }
	inline void set_gameController_9(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * value)
	{
		___gameController_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameController_9), (void*)value);
	}

	inline static int32_t get_offset_of_rows_10() { return static_cast<int32_t>(offsetof(RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA, ___rows_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_rows_10() const { return ___rows_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_rows_10() { return &___rows_10; }
	inline void set_rows_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___rows_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rows_10), (void*)value);
	}

	inline static int32_t get_offset_of_cols_11() { return static_cast<int32_t>(offsetof(RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA, ___cols_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_cols_11() const { return ___cols_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_cols_11() { return &___cols_11; }
	inline void set_cols_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___cols_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cols_11), (void*)value);
	}

	inline static int32_t get_offset_of_shuffleButton_12() { return static_cast<int32_t>(offsetof(RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA, ___shuffleButton_12)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_shuffleButton_12() const { return ___shuffleButton_12; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_shuffleButton_12() { return &___shuffleButton_12; }
	inline void set_shuffleButton_12(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___shuffleButton_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shuffleButton_12), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
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
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  m_Items[1];

public:
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_m026509C15A1E58FC6461EE7EC336EC18C9C2271E (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * File_Open_mA9EF74B69D352F396FBD5225BCC3643D8063C002 (String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mC6F89939E04734FBEEA375D7E0FF9C042E4AB71A (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___output0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestTexture::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequestTexture_GetTexture_mAC8E7F560F2A5ED2B3DA19211968311DD6D56F37 (String_t* ___uri0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m0126D38DA9B39159CB12F8DE0C3962A4BEEE5C03 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isHttpError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isHttpError_m23ADCBE1CF082A940EF6AA75A15051583228B616 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * DownloadHandlerTexture_get_texture_m4A85047C91C2C15472D34043E1440845C87B709A (DownloadHandlerTexture_tA2708E80049AA58E9B0DBE9F5325CC9A1B487142 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___colors0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lhs0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// UnityEngine.Vector4 TextureUtility::ColorToHSBA(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  TextureUtility_ColorToHSBA_m22688DE3E900874074848CA544A95B55967936FC (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____color0, const RuntimeMethod* method);
// UnityEngine.Color TextureUtility::HSBAtoColor(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  TextureUtility_HSBAtoColor_mF18F62B4E77A743CFB2841C6B500EFCEE8675E2C (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___hsba0, const RuntimeMethod* method);
// UnityEngine.Color TextureUtility::GetAverageColor(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  TextureUtility_GetAverageColor_mEDD4FA83B191540DFAD7ED00470342FCC08AF490 (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____pixels0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_mEA2B0371D35EA2D6468DD2937D1DB95E79EAEF42 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___colors0, int32_t ___miplevel1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Texture2D::GetPixel(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___x0, int32_t ___y1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// UnityEngine.Texture2D TextureUtility::CreateTexture(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_CreateTexture_m01EA56BEF8CE0B637EF349C87F99F0D91F30C37E (int32_t ____width0, int32_t ____height1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____color2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_m802BA835119C0F93478BBA752BA23192013EA4F7 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___x0, int32_t ___y1, int32_t ___blockWidth2, int32_t ___blockHeight3, ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___colors4, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F (float ___f0, const RuntimeMethod* method);
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* Texture2D_GetPixels_m677BB0ECBC49B9BAC6C3AE78A916AFF126C62CD3 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___x0, int32_t ___y1, int32_t ___blockWidth2, int32_t ___blockHeight3, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Texture2D TextureUtility::Crop(UnityEngine.Texture2D,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_Crop_m7FAD6A69F9BEFE9787222C46B044B01C0F014CFA (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____source0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ____rect1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_op_Inequality_m6A9C7B9297D92024848ABFD305DDFE13DF40C86D (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lhs0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* Texture2D_GetPixels32_m419F7BF2D2D374C08247BE66838148DA485A6ECA (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels32_m6C2602EBE75F9C70DBC36D0B67EA4C12638518BB (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___colors0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Texture2D_GetPixelBilinear_mE25550DD7E9FD26DA7CB1E38FFCA2101F9D3D28D (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, float ___u0, float ___v1, const RuntimeMethod* method);
// UnityEngine.Color TextureUtility::BlendColors(UnityEngine.Color,UnityEngine.Color,TextureUtility/BlendMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  TextureUtility_BlendColors_m8F93EFCB84AA0825A5982642A28D9B61D26CC3C4 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____color10, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____color21, int32_t ____blendMode2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Division(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_op_Division_m3C9BBA6FEC1CBB84B0536599BA974AA963FAE094 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Addition(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_op_Addition_m791A7C77B17D4A49301A7D275E8E4D8B117415A8 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Subtraction(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_op_Subtraction_m1D412109F3F9264B0A4F1106D2FEB8A2746B3A0F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_op_Multiply_mFD03CB228034C2D37F326B7AFF27C861E95447B7 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void LoadGeneratedPuzzles::LoadGenerated(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadGeneratedPuzzles_LoadGenerated_mF96E558DCA1FC29CE6C35C6D4863AF4D9BBD08DC (LoadGeneratedPuzzles_t6B6700CAFB1128C3BF7E5DB61F43EAFDCA6C7CB8 * __this, String_t* ____name0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator PuzzleGenerator_Runtime::LoadTextureFromWeb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PuzzleGenerator_Runtime_LoadTextureFromWeb_m5A09E77DEF5489A84A6C94B59F3E817B57CB7007 (PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD (float ___f0, const RuntimeMethod* method);
// UnityEngine.Texture2D TextureUtility::Scale(UnityEngine.Texture2D,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_Scale_m818F04ED1B4C5DB9C62EBE68B3D11264C709A3C4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____source0, int32_t ____targetWidth1, int32_t ____targetHeight2, const RuntimeMethod* method);
// PuzzleController PuzzleGenerator_Runtime::CreatePuzzleFromImage(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364 * PuzzleGenerator_Runtime_CreatePuzzleFromImage_m04EA66F98C1D5EEE98B72D8C2FDE870B798499D4 (PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____image0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void PuzzlePiece::Assemble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuzzlePiece_Assemble_m047A4E9F676F7DF265079D173F3BFF0ECF577455 (PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteKey_mCEF6CE08D7D7670AD4072228E261A7E746030554 (String_t* ___key0, const RuntimeMethod* method);
// UnityEngine.Texture2D PuzzleGenerator_Runtime::GetSourceImage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * PuzzleGenerator_Runtime_GetSourceImage_mEC2B8ED8C1BBA69A300B70BB82CA54F0E066A4AC_inline (PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * __this, const RuntimeMethod* method);
// UnityEngine.SpriteRenderer PuzzleController::GenerateBackground(UnityEngine.Texture2D,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * PuzzleController_GenerateBackground_m0EC2C93A61065A1A358CEC13653DD2D44465623B (PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____image0, bool ____adjustToPuzzle1, bool ____centerAnchoring2, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TextureUtility::SaveAsPNG(UnityEngine.Texture2D,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtility_SaveAsPNG_mAA0D043ACEAA970A7037AD055C4829067D41F919 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____texture0, String_t* ____filename1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// var bytes = _texture.EncodeToPNG();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ____texture0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var file = File.Open(Application.dataPath + "/" + _filename + ".png", FileMode.Create);
		String_t* L_2;
		L_2 = Application_get_dataPath_m026509C15A1E58FC6461EE7EC336EC18C9C2271E(/*hidden argument*/NULL);
		String_t* L_3 = ____filename1;
		String_t* L_4;
		L_4 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_2, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_3, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, /*hidden argument*/NULL);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_5;
		L_5 = File_Open_mA9EF74B69D352F396FBD5225BCC3643D8063C002(L_4, 2, /*hidden argument*/NULL);
		// var binary = new BinaryWriter(file);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_6 = L_5;
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_7 = (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F *)il2cpp_codegen_object_new(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_mC6F89939E04734FBEEA375D7E0FF9C042E4AB71A(L_7, L_6, /*hidden argument*/NULL);
		// binary.Write(bytes);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_0;
		NullCheck(L_7);
		VirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_7, L_8);
		// file.Close();
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_6);
		// }
		return;
	}
}
// UnityEngine.Texture2D TextureUtility::LoadTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_LoadTexture_m47716D18D6827E1E1EB2E02A17256E4B6ED3B795 (String_t* ____path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerTexture_tA2708E80049AA58E9B0DBE9F5325CC9A1B487142_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53FBB52F0B65C7EC02331E9C7EEB9163B09372B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6995C8C5113D4496BCC8502AEF468B092E80791);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_1 = NULL;
	{
		// Texture2D texture = null;
		V_0 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
		// UnityWebRequest www = UnityWebRequestTexture.GetTexture(_path);
		String_t* L_0 = ____path0;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1;
		L_1 = UnityWebRequestTexture_GetTexture_mAC8E7F560F2A5ED2B3DA19211968311DD6D56F37(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		// if (www.isNetworkError || www.isHttpError)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_2 = V_1;
		NullCheck(L_2);
		bool L_3;
		L_3 = UnityWebRequest_get_isNetworkError_m0126D38DA9B39159CB12F8DE0C3962A4BEEE5C03(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = UnityWebRequest_get_isHttpError_m23ADCBE1CF082A940EF6AA75A15051583228B616(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0040;
		}
	}

IL_0019:
	{
		// Debug.LogWarning("Probably this is wrong external source: " + _path);
		String_t* L_6 = ____path0;
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE6995C8C5113D4496BCC8502AEF468B092E80791, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_7, /*hidden argument*/NULL);
		// Debug.Log("DON'T FORGET: the path should starts from 'http://'(for online image) or from 'file://'(for local)");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral53FBB52F0B65C7EC02331E9C7EEB9163B09372B5, /*hidden argument*/NULL);
		// Debug.Log(www.error);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_8, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_9, /*hidden argument*/NULL);
		// }
		goto IL_0051;
	}

IL_0040:
	{
		// texture = ((DownloadHandlerTexture)www.downloadHandler).texture;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_10 = V_1;
		NullCheck(L_10);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_11;
		L_11 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_10, /*hidden argument*/NULL);
		NullCheck(((DownloadHandlerTexture_tA2708E80049AA58E9B0DBE9F5325CC9A1B487142 *)CastclassSealed((RuntimeObject*)L_11, DownloadHandlerTexture_tA2708E80049AA58E9B0DBE9F5325CC9A1B487142_il2cpp_TypeInfo_var)));
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12;
		L_12 = DownloadHandlerTexture_get_texture_m4A85047C91C2C15472D34043E1440845C87B709A(((DownloadHandlerTexture_tA2708E80049AA58E9B0DBE9F5325CC9A1B487142 *)CastclassSealed((RuntimeObject*)L_11, DownloadHandlerTexture_tA2708E80049AA58E9B0DBE9F5325CC9A1B487142_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_12;
	}

IL_0051:
	{
		// return texture;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Texture2D TextureUtility::CreateTexture(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_CreateTexture_m01EA56BEF8CE0B637EF349C87F99F0D91F30C37E (int32_t ____width0, int32_t ____height1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____color2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Texture2D result = new Texture2D(_width, _height);
		int32_t L_0 = ____width0;
		int32_t L_1 = ____height1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Color[] resultPixels = new Color [_width * _height];
		int32_t L_3 = ____width0;
		int32_t L_4 = ____height1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_5 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)L_4)));
		V_1 = L_5;
		// for (int i = 0; i < resultPixels.Length; i++ )
		V_2 = 0;
		goto IL_0021;
	}

IL_0015:
	{
		// resultPixels[i] = _color;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_6 = V_1;
		int32_t L_7 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = ____color2;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_8);
		// for (int i = 0; i < resultPixels.Length; i++ )
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0021:
	{
		// for (int i = 0; i < resultPixels.Length; i++ )
		int32_t L_10 = V_2;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0015;
		}
	}
	{
		// result.SetPixels(resultPixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = V_0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_13 = V_1;
		NullCheck(L_12);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_12, L_13, /*hidden argument*/NULL);
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = V_0;
		NullCheck(L_14);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_14, /*hidden argument*/NULL);
		// return result;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.Color[] TextureUtility::CreatePixelArray(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* TextureUtility_CreatePixelArray_m481259C07F6A0E63E840B3343D4A4C42E40B1A0F (int32_t ____width0, int32_t ____height1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____color2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Color[] resultPixels = new Color [_width * _height];
		int32_t L_0 = ____width0;
		int32_t L_1 = ____height1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_2 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)));
		V_0 = L_2;
		// for (int i = 0; i < resultPixels.Length; i++ ) resultPixels[i] = _color;
		V_1 = 0;
		goto IL_0019;
	}

IL_000d:
	{
		// for (int i = 0; i < resultPixels.Length; i++ ) resultPixels[i] = _color;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_3 = V_0;
		int32_t L_4 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = ____color2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_5);
		// for (int i = 0; i < resultPixels.Length; i++ ) resultPixels[i] = _color;
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0019:
	{
		// for (int i = 0; i < resultPixels.Length; i++ ) resultPixels[i] = _color;
		int32_t L_7 = V_1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// return resultPixels;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Texture2D TextureUtility::Clear(UnityEngine.Texture2D,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_Clear_m0268999EE7B9BC59850EF5D41F7ED050676B58FA (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____source0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Texture2D result = new Texture2D(_source.width, _source.height);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ____source0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ____source0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_4, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// Color[] resultPixels = new Color [_source.width * _source.height];
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = ____source0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = ____source0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_9 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)L_8)));
		V_1 = L_9;
		// for (int i = 0; i < resultPixels.Length; i++ ) resultPixels[i] = _color;
		V_2 = 0;
		goto IL_0035;
	}

IL_0029:
	{
		// for (int i = 0; i < resultPixels.Length; i++ ) resultPixels[i] = _color;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_10 = V_1;
		int32_t L_11 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = ____color1;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_12);
		// for (int i = 0; i < resultPixels.Length; i++ ) resultPixels[i] = _color;
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0035:
	{
		// for (int i = 0; i < resultPixels.Length; i++ ) resultPixels[i] = _color;
		int32_t L_14 = V_2;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		// result.SetPixels(resultPixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16 = V_0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_17 = V_1;
		NullCheck(L_16);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_16, L_17, /*hidden argument*/NULL);
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = V_0;
		NullCheck(L_18);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_18, /*hidden argument*/NULL);
		// return result;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_19 = V_0;
		return L_19;
	}
}
// UnityEngine.Color[] TextureUtility::Clear(UnityEngine.Color[],UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* TextureUtility_Clear_m6EBF313EFA0D91F3CFD20BDE619A9F023541C6B8 (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____source0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____color1, const RuntimeMethod* method)
{
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Color[] resultPixels = _source;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_0 = ____source0;
		V_0 = L_0;
		// for (int i = 0; i < resultPixels.Length; i++ ) resultPixels[i] = _color;
		V_1 = 0;
		goto IL_0012;
	}

IL_0006:
	{
		// for (int i = 0; i < resultPixels.Length; i++ ) resultPixels[i] = _color;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_1 = V_0;
		int32_t L_2 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ____color1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_3);
		// for (int i = 0; i < resultPixels.Length; i++ ) resultPixels[i] = _color;
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0012:
	{
		// for (int i = 0; i < resultPixels.Length; i++ ) resultPixels[i] = _color;
		int32_t L_5 = V_1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_6 = V_0;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0006;
		}
	}
	{
		// return resultPixels;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Texture2D TextureUtility::InvertTransparency(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_InvertTransparency_m5991060DB328B42F631F108AEE6472947571AD77 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Color[] pixels = _source.GetPixels();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ____source0;
		NullCheck(L_0);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_1;
		L_1 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// for (int i = 0; i < pixels.Length; i++)
		V_1 = 0;
		goto IL_0032;
	}

IL_000b:
	{
		// pixels[i].a = Mathf.Abs(pixels[i].a - 1.0f);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_a_3();
		float L_7;
		L_7 = fabsf(((float)il2cpp_codegen_subtract((float)L_6, (float)(1.0f))));
		((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->set_a_3(L_7);
		// for (int i = 0; i < pixels.Length; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0032:
	{
		// for (int i = 0; i < pixels.Length; i++)
		int32_t L_9 = V_1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// Texture2D result = new Texture2D(_source.width, _source.height);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11 = ____source0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_13 = ____source0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_13);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_15, L_12, L_14, /*hidden argument*/NULL);
		// result.SetPixels(pixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16 = L_15;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_17 = V_0;
		NullCheck(L_16);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_16, L_17, /*hidden argument*/NULL);
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = L_16;
		NullCheck(L_18);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_18, /*hidden argument*/NULL);
		// return result;
		return L_18;
	}
}
// UnityEngine.Color[] TextureUtility::InvertTransparency(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* TextureUtility_InvertTransparency_mC9AAD074EE64DE212970E72C435EFBE1C7E14519 (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Color[] resultPixels = new Color[_source.Length];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_0 = ____source0;
		NullCheck(L_0);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_1 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_0 = L_1;
		// for (int i = 0; i < resultPixels.Length; i++) resultPixels[i].a = Mathf.Abs(_source[i].a - 1.0f);
		V_1 = 0;
		goto IL_0034;
	}

IL_000d:
	{
		// for (int i = 0; i < resultPixels.Length; i++) resultPixels[i].a = Mathf.Abs(_source[i].a - 1.0f);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_4 = ____source0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_a_3();
		float L_7;
		L_7 = fabsf(((float)il2cpp_codegen_subtract((float)L_6, (float)(1.0f))));
		((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->set_a_3(L_7);
		// for (int i = 0; i < resultPixels.Length; i++) resultPixels[i].a = Mathf.Abs(_source[i].a - 1.0f);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0034:
	{
		// for (int i = 0; i < resultPixels.Length; i++) resultPixels[i].a = Mathf.Abs(_source[i].a - 1.0f);
		int32_t L_9 = V_1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// return resultPixels;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_11 = V_0;
		return L_11;
	}
}
// UnityEngine.Texture2D TextureUtility::MakeColorTransparent(UnityEngine.Texture2D,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_MakeColorTransparent_mD0D4B06F5CBDEE60E1F45459BC0C8CF8D9B59B5B (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____source0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Color[] pixels = _source.GetPixels();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ____source0;
		NullCheck(L_0);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_1;
		L_1 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Texture2D result = new Texture2D(_source.width, _source.height);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ____source0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = ____source0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_6, L_3, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// for (int i = 0; i < pixels.Length; i++)
		V_2 = 0;
		goto IL_0041;
	}

IL_001d:
	{
		// if (pixels[i] == _color) pixels[i].a = 0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_7 = V_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11 = ____color1;
		bool L_12;
		L_12 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_003d;
		}
	}
	{
		// if (pixels[i] == _color) pixels[i].a = 0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_13 = V_0;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->set_a_3((0.0f));
	}

IL_003d:
	{
		// for (int i = 0; i < pixels.Length; i++)
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0041:
	{
		// for (int i = 0; i < pixels.Length; i++)
		int32_t L_16 = V_2;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_001d;
		}
	}
	{
		// result.SetPixels(pixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = V_1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_19 = V_0;
		NullCheck(L_18);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_18, L_19, /*hidden argument*/NULL);
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_20 = V_1;
		NullCheck(L_20);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_20, /*hidden argument*/NULL);
		// return result;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_21 = V_1;
		return L_21;
	}
}
// UnityEngine.Color[] TextureUtility::MakeColorTransparent(UnityEngine.Color[],UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* TextureUtility_MakeColorTransparent_m05164682CEE2B756F448E2B86BC8079558AB80FC (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____source0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Color[] resultPixels = new Color[_source.Length];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_0 = ____source0;
		NullCheck(L_0);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_1 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_0 = L_1;
		// for (int i = 0; i < resultPixels.Length; i++)
		V_1 = 0;
		goto IL_0031;
	}

IL_000d:
	{
		// if (resultPixels[i] == _color) _source[i].a = 0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = ____color1;
		bool L_7;
		L_7 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		// if (resultPixels[i] == _color) _source[i].a = 0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_8 = ____source0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->set_a_3((0.0f));
	}

IL_002d:
	{
		// for (int i = 0; i < resultPixels.Length; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0031:
	{
		// for (int i = 0; i < resultPixels.Length; i++)
		int32_t L_11 = V_1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// return resultPixels;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Texture2D TextureUtility::ChangeHSB(UnityEngine.Texture2D,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_ChangeHSB_m17698E81B244A2F4294E2701329AA9DC1C37E755 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____source0, float ____hue1, float ____saturation2, float ____brightness3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_1 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_2 = NULL;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		// Texture2D result = new Texture2D(_source.width, _source.height, TextureFormat.RGBA32, false);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ____source0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ____source0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_4, L_1, L_3, 4, (bool)0, /*hidden argument*/NULL);
		V_0 = L_4;
		// Color[] sourcePixels = _source.GetPixels();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = ____source0;
		NullCheck(L_5);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_6;
		L_6 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// Color[] resultPixels = new Color[_source.width * _source.height];
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = ____source0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_7);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = ____source0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_9);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_11 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)L_10)));
		V_2 = L_11;
		// for (int i = 0; i < sourcePixels.Length; i++)
		V_4 = 0;
		goto IL_0079;
	}

IL_0033:
	{
		// hsba = ColorToHSBA(sourcePixels[i]);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_16;
		L_16 = TextureUtility_ColorToHSBA_m22688DE3E900874074848CA544A95B55967936FC(L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		// hsba.x += _hue;
		float* L_17 = (&V_3)->get_address_of_x_1();
		float* L_18 = L_17;
		float L_19 = *((float*)L_18);
		float L_20 = ____hue1;
		*((float*)L_18) = (float)((float)il2cpp_codegen_add((float)L_19, (float)L_20));
		// hsba.y += _saturation;
		float* L_21 = (&V_3)->get_address_of_y_2();
		float* L_22 = L_21;
		float L_23 = *((float*)L_22);
		float L_24 = ____saturation2;
		*((float*)L_22) = (float)((float)il2cpp_codegen_add((float)L_23, (float)L_24));
		// hsba.z += _brightness;
		float* L_25 = (&V_3)->get_address_of_z_3();
		float* L_26 = L_25;
		float L_27 = *((float*)L_26);
		float L_28 = ____brightness3;
		*((float*)L_26) = (float)((float)il2cpp_codegen_add((float)L_27, (float)L_28));
		// resultPixels[i] = HSBAtoColor(hsba);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_29 = V_2;
		int32_t L_30 = V_4;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_31 = V_3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32;
		L_32 = TextureUtility_HSBAtoColor_mF18F62B4E77A743CFB2841C6B500EFCEE8675E2C(L_31, /*hidden argument*/NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_32);
		// for (int i = 0; i < sourcePixels.Length; i++)
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_0079:
	{
		// for (int i = 0; i < sourcePixels.Length; i++)
		int32_t L_34 = V_4;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_35 = V_1;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_0033;
		}
	}
	{
		// result.SetPixels(resultPixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_36 = V_0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_37 = V_2;
		NullCheck(L_36);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_36, L_37, /*hidden argument*/NULL);
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_38 = V_0;
		NullCheck(L_38);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_38, /*hidden argument*/NULL);
		// return result;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_39 = V_0;
		return L_39;
	}
}
// UnityEngine.Color[] TextureUtility::ChangeHSB(UnityEngine.Color[],System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* TextureUtility_ChangeHSB_mDD757EB950F9F6A985A79795F99D1BE4D4AEE81F (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____source0, float ____hue1, float ____saturation2, float ____brightness3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// Color[] resultPixels = new Color[_source.Length];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_0 = ____source0;
		NullCheck(L_0);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_1 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_0 = L_1;
		// for (int i = 0; i < _source.Length; i++)
		V_2 = 0;
		goto IL_004f;
	}

IL_000d:
	{
		// hsba = ColorToHSBA(_source[i]);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_2 = ____source0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6;
		L_6 = TextureUtility_ColorToHSBA_m22688DE3E900874074848CA544A95B55967936FC(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// hsba.x += _hue;
		float* L_7 = (&V_1)->get_address_of_x_1();
		float* L_8 = L_7;
		float L_9 = *((float*)L_8);
		float L_10 = ____hue1;
		*((float*)L_8) = (float)((float)il2cpp_codegen_add((float)L_9, (float)L_10));
		// hsba.y += _saturation;
		float* L_11 = (&V_1)->get_address_of_y_2();
		float* L_12 = L_11;
		float L_13 = *((float*)L_12);
		float L_14 = ____saturation2;
		*((float*)L_12) = (float)((float)il2cpp_codegen_add((float)L_13, (float)L_14));
		// hsba.z += _brightness;
		float* L_15 = (&V_1)->get_address_of_z_3();
		float* L_16 = L_15;
		float L_17 = *((float*)L_16);
		float L_18 = ____brightness3;
		*((float*)L_16) = (float)((float)il2cpp_codegen_add((float)L_17, (float)L_18));
		// resultPixels[i] = HSBAtoColor(hsba);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_19 = V_0;
		int32_t L_20 = V_2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_21 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22;
		L_22 = TextureUtility_HSBAtoColor_mF18F62B4E77A743CFB2841C6B500EFCEE8675E2C(L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_22);
		// for (int i = 0; i < _source.Length; i++)
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_004f:
	{
		// for (int i = 0; i < _source.Length; i++)
		int32_t L_24 = V_2;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_25 = ____source0;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// return resultPixels;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_26 = V_0;
		return L_26;
	}
}
// UnityEngine.Texture2D TextureUtility::Contrast(UnityEngine.Texture2D,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_Contrast_m0B1A0D27D97A2569EE4414E0C4934C8FE0999B33 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____source0, float ____contrast1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_1 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_2 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	float G_B3_0 = 0.0f;
	{
		// _contrast = _contrast < 0 ? 0: _contrast;
		float L_0 = ____contrast1;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_000b;
		}
	}
	{
		float L_1 = ____contrast1;
		G_B3_0 = L_1;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = (0.0f);
	}

IL_0010:
	{
		____contrast1 = G_B3_0;
		// Texture2D result = new Texture2D(_source.width, _source.height);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ____source0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = ____source0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_6, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// Color[] sourcePixels = _source.GetPixels();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = ____source0;
		NullCheck(L_7);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_8;
		L_8 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// Color[] resultPixels = new Color[_source.width * _source.height];
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = ____source0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11 = ____source0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_13 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_12)));
		V_2 = L_13;
		// Color averageColor = GetAverageColor(sourcePixels);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_14 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15;
		L_15 = TextureUtility_GetAverageColor_mEDD4FA83B191540DFAD7ED00470342FCC08AF490(L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		// for (int i = 0; i < sourcePixels.Length; i++)
		V_4 = 0;
		goto IL_00c1;
	}

IL_004a:
	{
		// resultPixels[i] = new Color(
		//                                 averageColor.r + (sourcePixels[i].r - averageColor.r) * _contrast,
		//                                 averageColor.g + (sourcePixels[i].g - averageColor.g) * _contrast,
		//                                 averageColor.b + (sourcePixels[i].b - averageColor.b) * _contrast,
		//                                 sourcePixels[i].a
		//                             );
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_16 = V_2;
		int32_t L_17 = V_4;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18 = V_3;
		float L_19 = L_18.get_r_0();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_20 = V_1;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		float L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23 = V_3;
		float L_24 = L_23.get_r_0();
		float L_25 = ____contrast1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26 = V_3;
		float L_27 = L_26.get_g_1();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_28 = V_1;
		int32_t L_29 = V_4;
		NullCheck(L_28);
		float L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31 = V_3;
		float L_32 = L_31.get_g_1();
		float L_33 = ____contrast1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_34 = V_3;
		float L_35 = L_34.get_b_2();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_36 = V_1;
		int32_t L_37 = V_4;
		NullCheck(L_36);
		float L_38 = ((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_39 = V_3;
		float L_40 = L_39.get_b_2();
		float L_41 = ____contrast1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_42 = V_1;
		int32_t L_43 = V_4;
		NullCheck(L_42);
		float L_44 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_45;
		memset((&L_45), 0, sizeof(L_45));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_45), ((float)il2cpp_codegen_add((float)L_19, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_22, (float)L_24)), (float)L_25)))), ((float)il2cpp_codegen_add((float)L_27, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_30, (float)L_32)), (float)L_33)))), ((float)il2cpp_codegen_add((float)L_35, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_38, (float)L_40)), (float)L_41)))), L_44, /*hidden argument*/NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_45);
		// for (int i = 0; i < sourcePixels.Length; i++)
		int32_t L_46 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_00c1:
	{
		// for (int i = 0; i < sourcePixels.Length; i++)
		int32_t L_47 = V_4;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_48 = V_1;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length))))))
		{
			goto IL_004a;
		}
	}
	{
		// result.SetPixels(resultPixels, 0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_49 = V_0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_50 = V_2;
		NullCheck(L_49);
		Texture2D_SetPixels_mEA2B0371D35EA2D6468DD2937D1DB95E79EAEF42(L_49, L_50, 0, /*hidden argument*/NULL);
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_51 = V_0;
		NullCheck(L_51);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_51, /*hidden argument*/NULL);
		// return result;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_52 = V_0;
		return L_52;
	}
}
// UnityEngine.Color[] TextureUtility::Contrast(UnityEngine.Color[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* TextureUtility_Contrast_m04C5A40D0C2619710B8978C138471AF0B3B1B7FE (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____source0, float ____contrast1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	float G_B3_0 = 0.0f;
	{
		// _contrast = _contrast < 0 ? 0: _contrast;
		float L_0 = ____contrast1;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_000b;
		}
	}
	{
		float L_1 = ____contrast1;
		G_B3_0 = L_1;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = (0.0f);
	}

IL_0010:
	{
		____contrast1 = G_B3_0;
		// Color[] resultPixels = new Color[_source.Length];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_2 = ____source0;
		NullCheck(L_2);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_3 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
		V_0 = L_3;
		// Color averageColor = GetAverageColor(_source);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_4 = ____source0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = TextureUtility_GetAverageColor_mEDD4FA83B191540DFAD7ED00470342FCC08AF490(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// for (int i = 0; i < _source.Length; i++)
		V_2 = 0;
		goto IL_0096;
	}

IL_0026:
	{
		// resultPixels[i] = new Color(
		//                                 averageColor.r + (_source[i].r - averageColor.r) * _contrast,
		//                                 averageColor.g + (_source[i].g - averageColor.g) * _contrast,
		//                                 averageColor.b + (_source[i].b - averageColor.b) * _contrast,
		//                                 _source[i].a
		//                             );
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_6 = V_0;
		int32_t L_7 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = V_1;
		float L_9 = L_8.get_r_0();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_10 = ____source0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13 = V_1;
		float L_14 = L_13.get_r_0();
		float L_15 = ____contrast1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16 = V_1;
		float L_17 = L_16.get_g_1();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_18 = ____source0;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		float L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21 = V_1;
		float L_22 = L_21.get_g_1();
		float L_23 = ____contrast1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24 = V_1;
		float L_25 = L_24.get_b_2();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_26 = ____source0;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		float L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_29 = V_1;
		float L_30 = L_29.get_b_2();
		float L_31 = ____contrast1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_32 = ____source0;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		float L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_35;
		memset((&L_35), 0, sizeof(L_35));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_35), ((float)il2cpp_codegen_add((float)L_9, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_20, (float)L_22)), (float)L_23)))), ((float)il2cpp_codegen_add((float)L_25, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_28, (float)L_30)), (float)L_31)))), L_34, /*hidden argument*/NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_35);
		// for (int i = 0; i < _source.Length; i++)
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_0096:
	{
		// for (int i = 0; i < _source.Length; i++)
		int32_t L_37 = V_2;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_38 = ____source0;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))))))
		{
			goto IL_0026;
		}
	}
	{
		// return resultPixels;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_39 = V_0;
		return L_39;
	}
}
// UnityEngine.Texture2D TextureUtility::ColorDiapason(UnityEngine.Texture2D,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_ColorDiapason_m0E5D3CC3B711E59B152D096DAC35BF5E5AA34768 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____source0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____colorStart1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____colorEnd2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_1 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_2 = NULL;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	{
		// Texture2D result = new Texture2D(_source.width, _source.height);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ____source0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ____source0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_4, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// Color[] sourcePixels = _source.GetPixels();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = ____source0;
		NullCheck(L_5);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_6;
		L_6 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// Color[] resultPixels = new Color[_source.width * _source.height];
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = ____source0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_7);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = ____source0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_9);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_11 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)L_10)));
		V_2 = L_11;
		// Vector2 hueDiapason = new Vector2(ColorToHSBA(_colorStart).x, ColorToHSBA(_colorEnd).x);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = ____colorStart1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13;
		L_13 = TextureUtility_ColorToHSBA_m22688DE3E900874074848CA544A95B55967936FC(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_x_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15 = ____colorEnd2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_16;
		L_16 = TextureUtility_ColorToHSBA_m22688DE3E900874074848CA544A95B55967936FC(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_x_1();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_5), L_14, L_17, /*hidden argument*/NULL);
		// for (int i = 0; i < sourcePixels.Length; i++)
		V_6 = 0;
		goto IL_00e0;
	}

IL_0051:
	{
		// pixelAverageIntensity = (sourcePixels[i].r + sourcePixels[i].g + sourcePixels[i].b) / 3;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_18 = V_1;
		int32_t L_19 = V_6;
		NullCheck(L_18);
		float L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_r_0();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_21 = V_1;
		int32_t L_22 = V_6;
		NullCheck(L_21);
		float L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->get_g_1();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_24 = V_1;
		int32_t L_25 = V_6;
		NullCheck(L_24);
		float L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_b_2();
		V_3 = ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_20, (float)L_23)), (float)L_26))/(float)(3.0f)));
		// pixelHue = ColorToHSBA(sourcePixels[i]).x;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_27 = V_1;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_31;
		L_31 = TextureUtility_ColorToHSBA_m22688DE3E900874074848CA544A95B55967936FC(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_x_1();
		V_4 = L_32;
		// if (pixelHue >= hueDiapason.x  &&  pixelHue <= hueDiapason.y)
		float L_33 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34 = V_5;
		float L_35 = L_34.get_x_0();
		if ((!(((float)L_33) >= ((float)L_35))))
		{
			goto IL_00bd;
		}
	}
	{
		float L_36 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37 = V_5;
		float L_38 = L_37.get_y_1();
		if ((!(((float)L_36) <= ((float)L_38))))
		{
			goto IL_00bd;
		}
	}
	{
		// resultPixels[i] = sourcePixels[i];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_39 = V_2;
		int32_t L_40 = V_6;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_41 = V_1;
		int32_t L_42 = V_6;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_44);
		goto IL_00da;
	}

IL_00bd:
	{
		// resultPixels[i] = new Color(
		//                                 pixelAverageIntensity,
		//                                 pixelAverageIntensity,
		//                                 pixelAverageIntensity,
		//                                 sourcePixels[i].a
		//                             );
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_45 = V_2;
		int32_t L_46 = V_6;
		float L_47 = V_3;
		float L_48 = V_3;
		float L_49 = V_3;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_50 = V_1;
		int32_t L_51 = V_6;
		NullCheck(L_50);
		float L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_53;
		memset((&L_53), 0, sizeof(L_53));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_53), L_47, L_48, L_49, L_52, /*hidden argument*/NULL);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_53);
	}

IL_00da:
	{
		// for (int i = 0; i < sourcePixels.Length; i++)
		int32_t L_54 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_00e0:
	{
		// for (int i = 0; i < sourcePixels.Length; i++)
		int32_t L_55 = V_6;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_56 = V_1;
		NullCheck(L_56);
		if ((((int32_t)L_55) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length))))))
		{
			goto IL_0051;
		}
	}
	{
		// result.SetPixels(resultPixels, 0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_57 = V_0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_58 = V_2;
		NullCheck(L_57);
		Texture2D_SetPixels_mEA2B0371D35EA2D6468DD2937D1DB95E79EAEF42(L_57, L_58, 0, /*hidden argument*/NULL);
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_59 = V_0;
		NullCheck(L_59);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_59, /*hidden argument*/NULL);
		// return result;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_60 = V_0;
		return L_60;
	}
}
// UnityEngine.Color[] TextureUtility::ColorDiapason(UnityEngine.Color[],UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* TextureUtility_ColorDiapason_m89787B48070395C0389A74DD8933DFB7892503BF (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____source0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____colorStart1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____colorEnd2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		// Color[] resultPixels = new Color[_source.Length];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_0 = ____source0;
		NullCheck(L_0);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_1 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_0 = L_1;
		// Vector2 hueDiapason = new Vector2(ColorToHSBA(_colorStart).x, ColorToHSBA(_colorEnd).x);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ____colorStart1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3;
		L_3 = TextureUtility_ColorToHSBA_m22688DE3E900874074848CA544A95B55967936FC(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = ____colorEnd2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6;
		L_6 = TextureUtility_ColorToHSBA_m22688DE3E900874074848CA544A95B55967936FC(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_x_1();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), L_4, L_7, /*hidden argument*/NULL);
		// for (int i = 0; i < _source.Length; i++)
		V_4 = 0;
		goto IL_00b8;
	}

IL_002e:
	{
		// pixelAverageIntensity = (_source[i].r + _source[i].g + _source[i].b) / 3;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_8 = ____source0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		float L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->get_r_0();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_11 = ____source0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		float L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->get_g_1();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_14 = ____source0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		float L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->get_b_2();
		V_1 = ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_10, (float)L_13)), (float)L_16))/(float)(3.0f)));
		// pixelHue = ColorToHSBA(_source[i]).x;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_17 = ____source0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_21;
		L_21 = TextureUtility_ColorToHSBA_m22688DE3E900874074848CA544A95B55967936FC(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_x_1();
		V_2 = L_22;
		// if (pixelHue >= hueDiapason.x  &&  pixelHue <= hueDiapason.y)
		float L_23 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24 = V_3;
		float L_25 = L_24.get_x_0();
		if ((!(((float)L_23) >= ((float)L_25))))
		{
			goto IL_0095;
		}
	}
	{
		float L_26 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = V_3;
		float L_28 = L_27.get_y_1();
		if ((!(((float)L_26) <= ((float)L_28))))
		{
			goto IL_0095;
		}
	}
	{
		// resultPixels[i] = _source[i];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_29 = V_0;
		int32_t L_30 = V_4;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_31 = ____source0;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_34);
		goto IL_00b2;
	}

IL_0095:
	{
		// resultPixels[i] = new Color(
		//                                 pixelAverageIntensity,
		//                                 pixelAverageIntensity,
		//                                 pixelAverageIntensity,
		//                                 _source[i].a
		//                             );
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_35 = V_0;
		int32_t L_36 = V_4;
		float L_37 = V_1;
		float L_38 = V_1;
		float L_39 = V_1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_40 = ____source0;
		int32_t L_41 = V_4;
		NullCheck(L_40);
		float L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43;
		memset((&L_43), 0, sizeof(L_43));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_43), L_37, L_38, L_39, L_42, /*hidden argument*/NULL);
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_43);
	}

IL_00b2:
	{
		// for (int i = 0; i < _source.Length; i++)
		int32_t L_44 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00b8:
	{
		// for (int i = 0; i < _source.Length; i++)
		int32_t L_45 = V_4;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_46 = ____source0;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		// return resultPixels;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_47 = V_0;
		return L_47;
	}
}
// UnityEngine.Texture2D TextureUtility::Colorize(UnityEngine.Texture2D,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_Colorize_m388C1C8A6B84B81F9EBA8F9F8DF8CC01B8067221 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____source0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____color1, float ____intensity2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_1 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_2 = NULL;
	int32_t V_3 = 0;
	float G_B3_0 = 0.0f;
	{
		// _intensity = _intensity < 0 ? 0: _intensity;
		float L_0 = ____intensity2;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_000b;
		}
	}
	{
		float L_1 = ____intensity2;
		G_B3_0 = L_1;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = (0.0f);
	}

IL_0010:
	{
		____intensity2 = G_B3_0;
		// Texture2D result = new Texture2D(_source.width, _source.height);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ____source0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = ____source0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_6, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// Color[] sourcePixels = _source.GetPixels();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = ____source0;
		NullCheck(L_7);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_8;
		L_8 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// Color[] resultPixels = new Color[_source.width * _source.height];
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = ____source0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11 = ____source0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_13 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_12)));
		V_2 = L_13;
		// for (int i = 0; i < sourcePixels.Length; i++)
		V_3 = 0;
		goto IL_009d;
	}

IL_0042:
	{
		// resultPixels[i] = new Color(
		//                                 sourcePixels[i].r * _color.r * _intensity,
		//                                 sourcePixels[i].g * _color.g * _intensity,
		//                                 sourcePixels[i].b * _color.b * _intensity,
		//                                 sourcePixels[i].a
		//                             );
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_14 = V_2;
		int32_t L_15 = V_3;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_16 = V_1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		float L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19 = ____color1;
		float L_20 = L_19.get_r_0();
		float L_21 = ____intensity2;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_22 = V_1;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		float L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25 = ____color1;
		float L_26 = L_25.get_g_1();
		float L_27 = ____intensity2;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_28 = V_1;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		float L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31 = ____color1;
		float L_32 = L_31.get_b_2();
		float L_33 = ____intensity2;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_34 = V_1;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		float L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_37), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_20)), (float)L_21)), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_24, (float)L_26)), (float)L_27)), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_30, (float)L_32)), (float)L_33)), L_36, /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_37);
		// for (int i = 0; i < sourcePixels.Length; i++)
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_009d:
	{
		// for (int i = 0; i < sourcePixels.Length; i++)
		int32_t L_39 = V_3;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_40 = V_1;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0042;
		}
	}
	{
		// result.SetPixels(resultPixels, 0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_41 = V_0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_42 = V_2;
		NullCheck(L_41);
		Texture2D_SetPixels_mEA2B0371D35EA2D6468DD2937D1DB95E79EAEF42(L_41, L_42, 0, /*hidden argument*/NULL);
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_43 = V_0;
		NullCheck(L_43);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_43, /*hidden argument*/NULL);
		// return result;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_44 = V_0;
		return L_44;
	}
}
// UnityEngine.Color[] TextureUtility::Colorize(UnityEngine.Color[],UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* TextureUtility_Colorize_m3B5D0BB246F15983C8327E500821311A63161BD4 (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____source0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____color1, float ____intensity2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	int32_t V_1 = 0;
	float G_B3_0 = 0.0f;
	{
		// Color[] resultPixels = new Color[_source.Length];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_0 = ____source0;
		NullCheck(L_0);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_1 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_0 = L_1;
		// _intensity = _intensity < 0 ? 0: _intensity;
		float L_2 = ____intensity2;
		if ((((float)L_2) < ((float)(0.0f))))
		{
			goto IL_0014;
		}
	}
	{
		float L_3 = ____intensity2;
		G_B3_0 = L_3;
		goto IL_0019;
	}

IL_0014:
	{
		G_B3_0 = (0.0f);
	}

IL_0019:
	{
		____intensity2 = G_B3_0;
		// for (int i = 0; i < _source.Length; i++)
		V_1 = 0;
		goto IL_007a;
	}

IL_001f:
	{
		// resultPixels[i] = new Color(
		//                                 _source[i].r * _color.r * _intensity,
		//                                 _source[i].g * _color.g * _intensity,
		//                                 _source[i].b * _color.b * _intensity,
		//                                 _source[i].a
		//                             );
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_4 = V_0;
		int32_t L_5 = V_1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_6 = ____source0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		float L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = ____color1;
		float L_10 = L_9.get_r_0();
		float L_11 = ____intensity2;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_12 = ____source0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		float L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15 = ____color1;
		float L_16 = L_15.get_g_1();
		float L_17 = ____intensity2;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_18 = ____source0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		float L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21 = ____color1;
		float L_22 = L_21.get_b_2();
		float L_23 = ____intensity2;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_24 = ____source0;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		float L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_27), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_10)), (float)L_11)), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_14, (float)L_16)), (float)L_17)), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_20, (float)L_22)), (float)L_23)), L_26, /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_27);
		// for (int i = 0; i < _source.Length; i++)
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_007a:
	{
		// for (int i = 0; i < _source.Length; i++)
		int32_t L_29 = V_1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_30 = ____source0;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		// return resultPixels;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_31 = V_0;
		return L_31;
	}
}
// UnityEngine.Texture2D TextureUtility::Grayscale(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_Grayscale_m72BDEAA2B00231032FC0E2A7B03558CA78E35D44 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_1 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_2 = NULL;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	{
		// Texture2D result = new Texture2D(_source.width, _source.height);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ____source0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ____source0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_4, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// Color[] sourcePixels = _source.GetPixels();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = ____source0;
		NullCheck(L_5);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_6;
		L_6 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// Color[] resultPixels = new Color[_source.width * _source.height];
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = ____source0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_7);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = ____source0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_9);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_11 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)L_10)));
		V_2 = L_11;
		// for (int i = 0; i < sourcePixels.Length; i++)
		V_4 = 0;
		goto IL_0084;
	}

IL_0031:
	{
		// pixelAverageIntensity = (sourcePixels[i].r + sourcePixels[i].g + sourcePixels[i].b) / 3;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		float L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->get_r_0();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->get_g_1();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_18 = V_1;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		float L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_b_2();
		V_3 = ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_14, (float)L_17)), (float)L_20))/(float)(3.0f)));
		// resultPixels[i] = new Color(
		//                                 pixelAverageIntensity,
		//                                 pixelAverageIntensity,
		//                                 pixelAverageIntensity,
		//                                 sourcePixels[i].a
		//                             );
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_21 = V_2;
		int32_t L_22 = V_4;
		float L_23 = V_3;
		float L_24 = V_3;
		float L_25 = V_3;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_26 = V_1;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		float L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_29), L_23, L_24, L_25, L_28, /*hidden argument*/NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_29);
		// for (int i = 0; i < sourcePixels.Length; i++)
		int32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_0084:
	{
		// for (int i = 0; i < sourcePixels.Length; i++)
		int32_t L_31 = V_4;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_32 = V_1;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		// result.SetPixels(resultPixels, 0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_33 = V_0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_34 = V_2;
		NullCheck(L_33);
		Texture2D_SetPixels_mEA2B0371D35EA2D6468DD2937D1DB95E79EAEF42(L_33, L_34, 0, /*hidden argument*/NULL);
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_35 = V_0;
		NullCheck(L_35);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_35, /*hidden argument*/NULL);
		// return result;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_36 = V_0;
		return L_36;
	}
}
// UnityEngine.Color[] TextureUtility::Grayscale(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* TextureUtility_Grayscale_m3A9978CC38F4B71A14E0F1015533BE1DE0CD27B2 (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		// Color[] resultPixels = new Color[_source.Length];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_0 = ____source0;
		NullCheck(L_0);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_1 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_0 = L_1;
		// for (int i = 0; i < _source.Length; i++)
		V_2 = 0;
		goto IL_0059;
	}

IL_000d:
	{
		// pixelAverageIntensity = (_source[i].r + _source[i].g + _source[i].b) / 3;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_2 = ____source0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		float L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->get_r_0();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_5 = ____source0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		float L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_g_1();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_8 = ____source0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		float L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->get_b_2();
		V_1 = ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_4, (float)L_7)), (float)L_10))/(float)(3.0f)));
		// resultPixels[i] = new Color(
		//                                 pixelAverageIntensity,
		//                                 pixelAverageIntensity,
		//                                 pixelAverageIntensity,
		//                                 _source[i].a
		//                             );
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_11 = V_0;
		int32_t L_12 = V_2;
		float L_13 = V_1;
		float L_14 = V_1;
		float L_15 = V_1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_16 = ____source0;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		float L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_19), L_13, L_14, L_15, L_18, /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_19);
		// for (int i = 0; i < _source.Length; i++)
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0059:
	{
		// for (int i = 0; i < _source.Length; i++)
		int32_t L_21 = V_2;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_22 = ____source0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// return resultPixels;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_23 = V_0;
		return L_23;
	}
}
// UnityEngine.Texture2D TextureUtility::Negative(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_Negative_m0B6D91B91B8F7836980CCF239F57351D9B5FE7CE (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_1 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_2 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		// Texture2D result = new Texture2D(_source.width, _source.height);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ____source0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ____source0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_4, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// Color[] sourcePixels = _source.GetPixels();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = ____source0;
		NullCheck(L_5);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_6;
		L_6 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// Color[] resultPixels = new Color[_source.width * _source.height];
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = ____source0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_7);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = ____source0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_9);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_11 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)L_10)));
		V_2 = L_11;
		// Color averageColor = GetAverageColor(sourcePixels);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_12 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = TextureUtility_GetAverageColor_mEDD4FA83B191540DFAD7ED00470342FCC08AF490(L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		// for (int i = 0; i < sourcePixels.Length; i++)
		V_4 = 0;
		goto IL_00d3;
	}

IL_003b:
	{
		// resultPixels[i] = new Color(
		//                                 sourcePixels[i].r - (sourcePixels[i].r - averageColor.r) * 3,
		//                                 sourcePixels[i].g - (sourcePixels[i].g - averageColor.g) * 3,
		//                                 sourcePixels[i].b - (sourcePixels[i].b - averageColor.b) * 3,
		//                                 sourcePixels[i].a
		//                             );
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_14 = V_2;
		int32_t L_15 = V_4;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_16 = V_1;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		float L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->get_r_0();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_19 = V_1;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		float L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22 = V_3;
		float L_23 = L_22.get_r_0();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_24 = V_1;
		int32_t L_25 = V_4;
		NullCheck(L_24);
		float L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_g_1();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_27 = V_1;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		float L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30 = V_3;
		float L_31 = L_30.get_g_1();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_32 = V_1;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		float L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->get_b_2();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_35 = V_1;
		int32_t L_36 = V_4;
		NullCheck(L_35);
		float L_37 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_38 = V_3;
		float L_39 = L_38.get_b_2();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_40 = V_1;
		int32_t L_41 = V_4;
		NullCheck(L_40);
		float L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43;
		memset((&L_43), 0, sizeof(L_43));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_43), ((float)il2cpp_codegen_subtract((float)L_18, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_21, (float)L_23)), (float)(3.0f))))), ((float)il2cpp_codegen_subtract((float)L_26, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_29, (float)L_31)), (float)(3.0f))))), ((float)il2cpp_codegen_subtract((float)L_34, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_37, (float)L_39)), (float)(3.0f))))), L_42, /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_43);
		// for (int i = 0; i < sourcePixels.Length; i++)
		int32_t L_44 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00d3:
	{
		// for (int i = 0; i < sourcePixels.Length; i++)
		int32_t L_45 = V_4;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_46 = V_1;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_003b;
		}
	}
	{
		// result.SetPixels(resultPixels, 0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_47 = V_0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_48 = V_2;
		NullCheck(L_47);
		Texture2D_SetPixels_mEA2B0371D35EA2D6468DD2937D1DB95E79EAEF42(L_47, L_48, 0, /*hidden argument*/NULL);
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_49 = V_0;
		NullCheck(L_49);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_49, /*hidden argument*/NULL);
		// return result;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_50 = V_0;
		return L_50;
	}
}
// UnityEngine.Color[] TextureUtility::Negative(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* TextureUtility_Negative_m84856F69D4C959AB64AA13C7D70D0ABF711790D0 (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// Color[] resultPixels = new Color[_source.Length];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_0 = ____source0;
		NullCheck(L_0);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_1 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_0 = L_1;
		// Color averageColor = GetAverageColor(_source);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_2 = ____source0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = TextureUtility_GetAverageColor_mEDD4FA83B191540DFAD7ED00470342FCC08AF490(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// for (int i = 0; i < _source.Length; i++)
		V_2 = 0;
		goto IL_00a5;
	}

IL_0017:
	{
		// resultPixels[i] = new Color(
		//                                 _source[i].r - (_source[i].r - averageColor.r) * 3,
		//                                 _source[i].g - (_source[i].g - averageColor.g) * 3,
		//                                 _source[i].b - (_source[i].b - averageColor.b) * 3,
		//                                 _source[i].a
		//                             );
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_4 = V_0;
		int32_t L_5 = V_2;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_6 = ____source0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		float L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->get_r_0();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_9 = ____source0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = V_1;
		float L_13 = L_12.get_r_0();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_14 = ____source0;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		float L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->get_g_1();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_17 = ____source0;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		float L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20 = V_1;
		float L_21 = L_20.get_g_1();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_22 = ____source0;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		float L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->get_b_2();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_25 = ____source0;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		float L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28 = V_1;
		float L_29 = L_28.get_b_2();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_30 = ____source0;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		float L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_33), ((float)il2cpp_codegen_subtract((float)L_8, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_11, (float)L_13)), (float)(3.0f))))), ((float)il2cpp_codegen_subtract((float)L_16, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)(3.0f))))), ((float)il2cpp_codegen_subtract((float)L_24, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_27, (float)L_29)), (float)(3.0f))))), L_32, /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_33);
		// for (int i = 0; i < _source.Length; i++)
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00a5:
	{
		// for (int i = 0; i < _source.Length; i++)
		int32_t L_35 = V_2;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_36 = ____source0;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		// return resultPixels;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_37 = V_0;
		return L_37;
	}
}
// UnityEngine.Texture2D TextureUtility::FlipHorizontally(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_FlipHorizontally_mAF4CF8986298DFF37CF283C0DD2C80682A672991 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Texture2D result = new Texture2D(_source.width, _source.height);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ____source0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ____source0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_4, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// for(int x = 0; x < _source.width; x++)
		V_1 = 0;
		goto IL_0044;
	}

IL_0016:
	{
		// for(int y = 0; y < _source.height; y++)
		V_2 = 0;
		goto IL_0037;
	}

IL_001a:
	{
		// result.SetPixel(_source.width-x-1, y, _source.GetPixel(x,y));
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = V_0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = ____source0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_6);
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_10 = ____source0;
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		NullCheck(L_10);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_10, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_5);
		Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92(L_5, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8)), (int32_t)1)), L_9, L_13, /*hidden argument*/NULL);
		// for(int y = 0; y < _source.height; y++)
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0037:
	{
		// for(int y = 0; y < _source.height; y++)
		int32_t L_15 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16 = ____source0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_001a;
		}
	}
	{
		// for(int x = 0; x < _source.width; x++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0044:
	{
		// for(int x = 0; x < _source.width; x++)
		int32_t L_19 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_20 = ____source0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_20);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0016;
		}
	}
	{
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_22 = V_0;
		NullCheck(L_22);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_22, /*hidden argument*/NULL);
		// return result;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_23 = V_0;
		return L_23;
	}
}
// UnityEngine.Texture2D TextureUtility::FlipVertically(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_FlipVertically_mF70675FD77FDEE9613AF5770297869C2ACCAB7D7 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Texture2D result = new Texture2D(_source.width, _source.height);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ____source0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ____source0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_4, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// for(int x = 0; x < _source.width; x++)
		V_1 = 0;
		goto IL_0044;
	}

IL_0016:
	{
		// for(int y = 0; y < _source.height; y++)
		V_2 = 0;
		goto IL_0037;
	}

IL_001a:
	{
		// result.SetPixel(x, _source.height-y-1, _source.GetPixel(x,y));
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = V_0;
		int32_t L_6 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = ____source0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		int32_t L_9 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_10 = ____source0;
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		NullCheck(L_10);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_10, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_5);
		Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92(L_5, L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)), (int32_t)1)), L_13, /*hidden argument*/NULL);
		// for(int y = 0; y < _source.height; y++)
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0037:
	{
		// for(int y = 0; y < _source.height; y++)
		int32_t L_15 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16 = ____source0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_001a;
		}
	}
	{
		// for(int x = 0; x < _source.width; x++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0044:
	{
		// for(int x = 0; x < _source.width; x++)
		int32_t L_19 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_20 = ____source0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_20);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0016;
		}
	}
	{
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_22 = V_0;
		NullCheck(L_22);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_22, /*hidden argument*/NULL);
		// return result;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_23 = V_0;
		return L_23;
	}
}
// UnityEngine.Texture2D TextureUtility::Expand(UnityEngine.Texture2D,System.Int32,System.Int32,TextureUtility/Alignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_Expand_m3FB46CA72EBB8D5C2FB82C8E82D969460FDC6B5B (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____source0, int32_t ____newWidth1, int32_t ____newHeight2, int32_t ____sourceAlignment3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C84F6630F9AA59CD9DFD40D0BAE5C01C080A49E);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_1 = NULL;
	{
		// if ((_newWidth < _source.width)  ||  (_newHeight < _source.height) )
		int32_t L_0 = ____newWidth1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1 = ____source0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_1);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = ____newHeight2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = ____source0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_001e;
		}
	}

IL_0012:
	{
		// Debug.LogWarning("Expand is impossible! New size should be bigger than _source rect");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral1C84F6630F9AA59CD9DFD40D0BAE5C01C080A49E, /*hidden argument*/NULL);
		// return null;
		return (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
	}

IL_001e:
	{
		// Color[] sourcePixels = _source.GetPixels();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = ____source0;
		NullCheck(L_6);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_7;
		L_7 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// Texture2D result = CreateTexture (_newWidth, _newHeight, new Color(1.0f, 0.0f, 0.0f, 0.0f));
		int32_t L_8 = ____newWidth1;
		int32_t L_9 = ____newHeight2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_10), (1.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11;
		L_11 = TextureUtility_CreateTexture_m01EA56BEF8CE0B637EF349C87F99F0D91F30C37E(L_8, L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		int32_t L_12 = ____sourceAlignment3;
		switch (L_12)
		{
			case 0:
			{
				goto IL_0069;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00af;
			}
			case 3:
			{
				goto IL_00d6;
			}
			case 4:
			{
				goto IL_00ed;
			}
			case 5:
			{
				goto IL_010b;
			}
		}
	}
	{
		goto IL_0129;
	}

IL_0069:
	{
		// result.SetPixels(0, _newHeight-_source.height, _source.width, _source.height, sourcePixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_13 = V_1;
		int32_t L_14 = ____newHeight2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = ____source0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_15);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_17 = ____source0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_17);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_19 = ____source0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_19);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_21 = V_0;
		NullCheck(L_13);
		Texture2D_SetPixels_m802BA835119C0F93478BBA752BA23192013EA4F7(L_13, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_16)), L_18, L_20, L_21, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_008a:
	{
		// result.SetPixels(_newWidth-_source.width, _newHeight-_source.height, _source.width, _source.height, sourcePixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_22 = V_1;
		int32_t L_23 = ____newWidth1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_24 = ____source0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_24);
		int32_t L_26 = ____newHeight2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_27 = ____source0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_27);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_29 = ____source0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_29);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_31 = ____source0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_31);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_33 = V_0;
		NullCheck(L_22);
		Texture2D_SetPixels_m802BA835119C0F93478BBA752BA23192013EA4F7(L_22, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_25)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)L_28)), L_30, L_32, L_33, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00af:
	{
		// result.SetPixels((_newWidth-_source.width)/2, _newHeight-_source.height, _source.width, _source.height, sourcePixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_34 = V_1;
		int32_t L_35 = ____newWidth1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_36 = ____source0;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_36);
		int32_t L_38 = ____newHeight2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_39 = ____source0;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_39);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_41 = ____source0;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_41);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_43 = ____source0;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_43);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_45 = V_0;
		NullCheck(L_34);
		Texture2D_SetPixels_m802BA835119C0F93478BBA752BA23192013EA4F7(L_34, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)L_37))/(int32_t)2)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)L_40)), L_42, L_44, L_45, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00d6:
	{
		// result.SetPixels(0, 0, _source.width, _source.height, sourcePixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_46 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_47 = ____source0;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_47);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_49 = ____source0;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_49);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_51 = V_0;
		NullCheck(L_46);
		Texture2D_SetPixels_m802BA835119C0F93478BBA752BA23192013EA4F7(L_46, 0, 0, L_48, L_50, L_51, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00ed:
	{
		// result.SetPixels(_newWidth-_source.width, 0, _source.width, _source.height, sourcePixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_52 = V_1;
		int32_t L_53 = ____newWidth1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_54 = ____source0;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_54);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_56 = ____source0;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_56);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_58 = ____source0;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_58);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_60 = V_0;
		NullCheck(L_52);
		Texture2D_SetPixels_m802BA835119C0F93478BBA752BA23192013EA4F7(L_52, ((int32_t)il2cpp_codegen_subtract((int32_t)L_53, (int32_t)L_55)), 0, L_57, L_59, L_60, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_010b:
	{
		// result.SetPixels((_newWidth-_source.width)/2, 0, _source.width, _source.height, sourcePixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_61 = V_1;
		int32_t L_62 = ____newWidth1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_63 = ____source0;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_63);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_65 = ____source0;
		NullCheck(L_65);
		int32_t L_66;
		L_66 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_65);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_67 = ____source0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_67);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_69 = V_0;
		NullCheck(L_61);
		Texture2D_SetPixels_m802BA835119C0F93478BBA752BA23192013EA4F7(L_61, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_62, (int32_t)L_64))/(int32_t)2)), 0, L_66, L_68, L_69, /*hidden argument*/NULL);
	}

IL_0129:
	{
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_70 = V_1;
		NullCheck(L_70);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_70, /*hidden argument*/NULL);
		// return result;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_71 = V_1;
		return L_71;
	}
}
// UnityEngine.Texture2D TextureUtility::Crop(UnityEngine.Texture2D,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_Crop_m7FAD6A69F9BEFE9787222C46B044B01C0F014CFA (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____source0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ____rect1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5932B7AE017B7A4832520DFEC31EB8390AFE674B);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	{
		// if (_rect.x < 0  ||  _rect.y < 0  ||  (_rect.width < 0 || (_rect.x+_rect.width > _source.width))  ||  (_rect.height<0 || (_rect.y+_rect.height > _source.height)) )
		float L_0;
		L_0 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&____rect1), /*hidden argument*/NULL);
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0068;
		}
	}
	{
		float L_1;
		L_1 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&____rect1), /*hidden argument*/NULL);
		if ((((float)L_1) < ((float)(0.0f))))
		{
			goto IL_0068;
		}
	}
	{
		float L_2;
		L_2 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&____rect1), /*hidden argument*/NULL);
		if ((((float)L_2) < ((float)(0.0f))))
		{
			goto IL_0068;
		}
	}
	{
		float L_3;
		L_3 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&____rect1), /*hidden argument*/NULL);
		float L_4;
		L_4 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&____rect1), /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = ____source0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		if ((((float)((float)il2cpp_codegen_add((float)L_3, (float)L_4))) > ((float)((float)((float)L_6)))))
		{
			goto IL_0068;
		}
	}
	{
		float L_7;
		L_7 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&____rect1), /*hidden argument*/NULL);
		if ((((float)L_7) < ((float)(0.0f))))
		{
			goto IL_0068;
		}
	}
	{
		float L_8;
		L_8 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&____rect1), /*hidden argument*/NULL);
		float L_9;
		L_9 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&____rect1), /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_10 = ____source0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_10);
		if ((!(((float)((float)il2cpp_codegen_add((float)L_8, (float)L_9))) > ((float)((float)((float)L_11))))))
		{
			goto IL_0074;
		}
	}

IL_0068:
	{
		// Debug.LogWarning("Crop is impossible! Crop _rect should be within _source rect");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral5932B7AE017B7A4832520DFEC31EB8390AFE674B, /*hidden argument*/NULL);
		// return null;
		return (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
	}

IL_0074:
	{
		// Color[] neededPixels = _source.GetPixels(Mathf.CeilToInt(_rect.x), Mathf.CeilToInt(_rect.y), Mathf.CeilToInt(_rect.width), Mathf.CeilToInt(_rect.height));
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = ____source0;
		float L_13;
		L_13 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&____rect1), /*hidden argument*/NULL);
		int32_t L_14;
		L_14 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(L_13, /*hidden argument*/NULL);
		float L_15;
		L_15 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&____rect1), /*hidden argument*/NULL);
		int32_t L_16;
		L_16 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(L_15, /*hidden argument*/NULL);
		float L_17;
		L_17 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&____rect1), /*hidden argument*/NULL);
		int32_t L_18;
		L_18 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(L_17, /*hidden argument*/NULL);
		float L_19;
		L_19 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&____rect1), /*hidden argument*/NULL);
		int32_t L_20;
		L_20 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(L_19, /*hidden argument*/NULL);
		NullCheck(L_12);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_21;
		L_21 = Texture2D_GetPixels_m677BB0ECBC49B9BAC6C3AE78A916AFF126C62CD3(L_12, L_14, L_16, L_18, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		// Texture2D result = new Texture2D(Mathf.CeilToInt(_rect.width), Mathf.CeilToInt(_rect.height));
		float L_22;
		L_22 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&____rect1), /*hidden argument*/NULL);
		int32_t L_23;
		L_23 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(L_22, /*hidden argument*/NULL);
		float L_24;
		L_24 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&____rect1), /*hidden argument*/NULL);
		int32_t L_25;
		L_25 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(L_24, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_26 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_26, L_23, L_25, /*hidden argument*/NULL);
		// result.SetPixels(neededPixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_27 = L_26;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_28 = V_0;
		NullCheck(L_27);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_27, L_28, /*hidden argument*/NULL);
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_29 = L_27;
		NullCheck(L_29);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_29, /*hidden argument*/NULL);
		// return result;
		return L_29;
	}
}
// UnityEngine.Texture2D TextureUtility::AutoCropTransparency(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_AutoCropTransparency_m136BE26650EDA01BBCED923AD5DB294A879A14B5 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____source0, const RuntimeMethod* method)
{
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// Color[] sourcePixels = _source.GetPixels();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ____source0;
		NullCheck(L_0);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_1;
		L_1 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Rect cropRect = new Rect (0, 0, _source.width, _source.height) ;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ____source0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = ____source0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), (0.0f), (0.0f), ((float)((float)L_3)), ((float)((float)L_5)), /*hidden argument*/NULL);
		// int x = 0;
		V_2 = 0;
		// int y = 0;
		V_3 = 0;
		goto IL_0066;
	}

IL_002c:
	{
		// for (y = 0; y < _source.height; y++)
		V_3 = 0;
		goto IL_0059;
	}

IL_0030:
	{
		// if (sourcePixels[y*_source.width + x].a != 0) cropRect.x = x;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_6 = V_0;
		int32_t L_7 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = ____source0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		int32_t L_10 = V_2;
		NullCheck(L_6);
		float L_11 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)L_9)), (int32_t)L_10)))))->get_a_3();
		if ((((float)L_11) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		// if (sourcePixels[y*_source.width + x].a != 0) cropRect.x = x;
		int32_t L_12 = V_2;
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), ((float)((float)L_12)), /*hidden argument*/NULL);
	}

IL_0055:
	{
		// for (y = 0; y < _source.height; y++)
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0059:
	{
		// for (y = 0; y < _source.height; y++)
		int32_t L_14 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = ____source0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_15);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0030;
		}
	}
	{
		// x++;
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0066:
	{
		// while (cropRect.x == 0 && x < _source.width)
		float L_18;
		L_18 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		if ((!(((float)L_18) == ((float)(0.0f)))))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_19 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_20 = ____source0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_20);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_002c;
		}
	}

IL_007d:
	{
		// x = _source.width;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_22 = ____source0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_22);
		V_2 = L_23;
		goto IL_00c8;
	}

IL_0086:
	{
		// x--;
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
		// for (y = 0; y < _source.height; y++)
		V_3 = 0;
		goto IL_00bf;
	}

IL_008e:
	{
		// if (sourcePixels[y*_source.width + x].a != 0) cropRect.width = x - cropRect.x;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_25 = V_0;
		int32_t L_26 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_27 = ____source0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_27);
		int32_t L_29 = V_2;
		NullCheck(L_25);
		float L_30 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_26, (int32_t)L_28)), (int32_t)L_29)))))->get_a_3();
		if ((((float)L_30) == ((float)(0.0f))))
		{
			goto IL_00bb;
		}
	}
	{
		// if (sourcePixels[y*_source.width + x].a != 0) cropRect.width = x - cropRect.x;
		int32_t L_31 = V_2;
		float L_32;
		L_32 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), ((float)il2cpp_codegen_subtract((float)((float)((float)L_31)), (float)L_32)), /*hidden argument*/NULL);
	}

IL_00bb:
	{
		// for (y = 0; y < _source.height; y++)
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00bf:
	{
		// for (y = 0; y < _source.height; y++)
		int32_t L_34 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_35 = ____source0;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_35);
		if ((((int32_t)L_34) < ((int32_t)L_36)))
		{
			goto IL_008e;
		}
	}

IL_00c8:
	{
		// while (cropRect.width == _source.width  &&  x > cropRect.x)
		float L_37;
		L_37 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_38 = ____source0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_38);
		if ((!(((float)L_37) == ((float)((float)((float)L_39))))))
		{
			goto IL_00e3;
		}
	}
	{
		int32_t L_40 = V_2;
		float L_41;
		L_41 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		if ((((float)((float)((float)L_40))) > ((float)L_41)))
		{
			goto IL_0086;
		}
	}

IL_00e3:
	{
		// y = 0;
		V_3 = 0;
		goto IL_0121;
	}

IL_00e7:
	{
		// for (x = 0; x < _source.width; x++)
		V_2 = 0;
		goto IL_0114;
	}

IL_00eb:
	{
		// if (sourcePixels[y*_source.width + x].a != 0) cropRect.y = y;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_42 = V_0;
		int32_t L_43 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_44 = ____source0;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_44);
		int32_t L_46 = V_2;
		NullCheck(L_42);
		float L_47 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_43, (int32_t)L_45)), (int32_t)L_46)))))->get_a_3();
		if ((((float)L_47) == ((float)(0.0f))))
		{
			goto IL_0110;
		}
	}
	{
		// if (sourcePixels[y*_source.width + x].a != 0) cropRect.y = y;
		int32_t L_48 = V_3;
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), ((float)((float)L_48)), /*hidden argument*/NULL);
	}

IL_0110:
	{
		// for (x = 0; x < _source.width; x++)
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_0114:
	{
		// for (x = 0; x < _source.width; x++)
		int32_t L_50 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_51 = ____source0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_51);
		if ((((int32_t)L_50) < ((int32_t)L_52)))
		{
			goto IL_00eb;
		}
	}
	{
		// y++;
		int32_t L_53 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_0121:
	{
		// while (cropRect.y == 0 && y < _source.height)
		float L_54;
		L_54 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		if ((!(((float)L_54) == ((float)(0.0f)))))
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_55 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_56 = ____source0;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_56);
		if ((((int32_t)L_55) < ((int32_t)L_57)))
		{
			goto IL_00e7;
		}
	}

IL_0138:
	{
		// y = _source.height;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_58 = ____source0;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_58);
		V_3 = L_59;
		goto IL_0183;
	}

IL_0141:
	{
		// y--;
		int32_t L_60 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_60, (int32_t)1));
		// for (x = 0; x < _source.width; x++)
		V_2 = 0;
		goto IL_017a;
	}

IL_0149:
	{
		// if (sourcePixels[y*_source.width + x].a != 0) cropRect.height = y - cropRect.y;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_61 = V_0;
		int32_t L_62 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_63 = ____source0;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_63);
		int32_t L_65 = V_2;
		NullCheck(L_61);
		float L_66 = ((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_62, (int32_t)L_64)), (int32_t)L_65)))))->get_a_3();
		if ((((float)L_66) == ((float)(0.0f))))
		{
			goto IL_0176;
		}
	}
	{
		// if (sourcePixels[y*_source.width + x].a != 0) cropRect.height = y - cropRect.y;
		int32_t L_67 = V_3;
		float L_68;
		L_68 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), ((float)il2cpp_codegen_subtract((float)((float)((float)L_67)), (float)L_68)), /*hidden argument*/NULL);
	}

IL_0176:
	{
		// for (x = 0; x < _source.width; x++)
		int32_t L_69 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
	}

IL_017a:
	{
		// for (x = 0; x < _source.width; x++)
		int32_t L_70 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_71 = ____source0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_71);
		if ((((int32_t)L_70) < ((int32_t)L_72)))
		{
			goto IL_0149;
		}
	}

IL_0183:
	{
		// while (cropRect.height == _source.height  &&  y > cropRect.y)
		float L_73;
		L_73 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_74 = ____source0;
		NullCheck(L_74);
		int32_t L_75;
		L_75 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_74);
		if ((!(((float)L_73) == ((float)((float)((float)L_75))))))
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_76 = V_3;
		float L_77;
		L_77 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		if ((((float)((float)((float)L_76))) > ((float)L_77)))
		{
			goto IL_0141;
		}
	}

IL_019e:
	{
		// return Crop (_source, cropRect);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_78 = ____source0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_79 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_80;
		L_80 = TextureUtility_Crop_m7FAD6A69F9BEFE9787222C46B044B01C0F014CFA(L_78, L_79, /*hidden argument*/NULL);
		return L_80;
	}
}
// UnityEngine.Texture2D TextureUtility::AutoCropColor(UnityEngine.Texture2D,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_AutoCropColor_mE18199539574AF65590943C126F96FFBFEC03240 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____source0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____color1, const RuntimeMethod* method)
{
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// Color[] sourcePixels = _source.GetPixels();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ____source0;
		NullCheck(L_0);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_1;
		L_1 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Rect cropRect = new Rect (0, 0, _source.width, _source.height) ;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ____source0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = ____source0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), (0.0f), (0.0f), ((float)((float)L_3)), ((float)((float)L_5)), /*hidden argument*/NULL);
		// int x = 0;
		V_2 = 0;
		// int y = 0;
		V_3 = 0;
		goto IL_0062;
	}

IL_002c:
	{
		// for (y = 0; y < _source.height; y++)
		V_3 = 0;
		goto IL_0055;
	}

IL_0030:
	{
		// if (sourcePixels[y*_source.width + x] != _color) cropRect.x = x;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_6 = V_0;
		int32_t L_7 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = ____source0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		int32_t L_10 = V_2;
		NullCheck(L_6);
		int32_t L_11 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)L_9)), (int32_t)L_10));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13 = ____color1;
		bool L_14;
		L_14 = Color_op_Inequality_m6A9C7B9297D92024848ABFD305DDFE13DF40C86D(L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0051;
		}
	}
	{
		// if (sourcePixels[y*_source.width + x] != _color) cropRect.x = x;
		int32_t L_15 = V_2;
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), ((float)((float)L_15)), /*hidden argument*/NULL);
	}

IL_0051:
	{
		// for (y = 0; y < _source.height; y++)
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0055:
	{
		// for (y = 0; y < _source.height; y++)
		int32_t L_17 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = ____source0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_18);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0030;
		}
	}
	{
		// x++;
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0062:
	{
		// while (cropRect.x == 0 && x < _source.width)
		float L_21;
		L_21 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		if ((!(((float)L_21) == ((float)(0.0f)))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_22 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_23 = ____source0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_23);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_002c;
		}
	}

IL_0079:
	{
		// x = _source.width;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_25 = ____source0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_25);
		V_2 = L_26;
		goto IL_00c0;
	}

IL_0082:
	{
		// x--;
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1));
		// for (y = 0; y < _source.height; y++)
		V_3 = 0;
		goto IL_00b7;
	}

IL_008a:
	{
		// if (sourcePixels[y*_source.width + x] != _color) cropRect.width = x - cropRect.x;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_28 = V_0;
		int32_t L_29 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_30 = ____source0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_30);
		int32_t L_32 = V_2;
		NullCheck(L_28);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)L_31)), (int32_t)L_32));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_34 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_35 = ____color1;
		bool L_36;
		L_36 = Color_op_Inequality_m6A9C7B9297D92024848ABFD305DDFE13DF40C86D(L_34, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_00b3;
		}
	}
	{
		// if (sourcePixels[y*_source.width + x] != _color) cropRect.width = x - cropRect.x;
		int32_t L_37 = V_2;
		float L_38;
		L_38 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), ((float)il2cpp_codegen_subtract((float)((float)((float)L_37)), (float)L_38)), /*hidden argument*/NULL);
	}

IL_00b3:
	{
		// for (y = 0; y < _source.height; y++)
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00b7:
	{
		// for (y = 0; y < _source.height; y++)
		int32_t L_40 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_41 = ____source0;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_41);
		if ((((int32_t)L_40) < ((int32_t)L_42)))
		{
			goto IL_008a;
		}
	}

IL_00c0:
	{
		// while (cropRect.width == _source.width  &&  x > cropRect.x)
		float L_43;
		L_43 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_44 = ____source0;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_44);
		if ((!(((float)L_43) == ((float)((float)((float)L_45))))))
		{
			goto IL_00db;
		}
	}
	{
		int32_t L_46 = V_2;
		float L_47;
		L_47 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		if ((((float)((float)((float)L_46))) > ((float)L_47)))
		{
			goto IL_0082;
		}
	}

IL_00db:
	{
		// y = 0;
		V_3 = 0;
		goto IL_0115;
	}

IL_00df:
	{
		// for (x = 0; x < _source.width; x++)
		V_2 = 0;
		goto IL_0108;
	}

IL_00e3:
	{
		// if (sourcePixels[y*_source.width + x] != _color) cropRect.y = y;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_48 = V_0;
		int32_t L_49 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_50 = ____source0;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_50);
		int32_t L_52 = V_2;
		NullCheck(L_48);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_49, (int32_t)L_51)), (int32_t)L_52));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_54 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_55 = ____color1;
		bool L_56;
		L_56 = Color_op_Inequality_m6A9C7B9297D92024848ABFD305DDFE13DF40C86D(L_54, L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0104;
		}
	}
	{
		// if (sourcePixels[y*_source.width + x] != _color) cropRect.y = y;
		int32_t L_57 = V_3;
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), ((float)((float)L_57)), /*hidden argument*/NULL);
	}

IL_0104:
	{
		// for (x = 0; x < _source.width; x++)
		int32_t L_58 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
	}

IL_0108:
	{
		// for (x = 0; x < _source.width; x++)
		int32_t L_59 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_60 = ____source0;
		NullCheck(L_60);
		int32_t L_61;
		L_61 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_60);
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_00e3;
		}
	}
	{
		// y++;
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
	}

IL_0115:
	{
		// while (cropRect.y == 0 && y < _source.height)
		float L_63;
		L_63 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		if ((!(((float)L_63) == ((float)(0.0f)))))
		{
			goto IL_012c;
		}
	}
	{
		int32_t L_64 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_65 = ____source0;
		NullCheck(L_65);
		int32_t L_66;
		L_66 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_65);
		if ((((int32_t)L_64) < ((int32_t)L_66)))
		{
			goto IL_00df;
		}
	}

IL_012c:
	{
		// y = _source.height;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_67 = ____source0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_67);
		V_3 = L_68;
		goto IL_0173;
	}

IL_0135:
	{
		// y--;
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_69, (int32_t)1));
		// for (x = 0; x < _source.width; x++)
		V_2 = 0;
		goto IL_016a;
	}

IL_013d:
	{
		// if (sourcePixels[y*_source.width + x] != _color) cropRect.height = y - cropRect.y;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_70 = V_0;
		int32_t L_71 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_72 = ____source0;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_72);
		int32_t L_74 = V_2;
		NullCheck(L_70);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_71, (int32_t)L_73)), (int32_t)L_74));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_76 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_77 = ____color1;
		bool L_78;
		L_78 = Color_op_Inequality_m6A9C7B9297D92024848ABFD305DDFE13DF40C86D(L_76, L_77, /*hidden argument*/NULL);
		if (!L_78)
		{
			goto IL_0166;
		}
	}
	{
		// if (sourcePixels[y*_source.width + x] != _color) cropRect.height = y - cropRect.y;
		int32_t L_79 = V_3;
		float L_80;
		L_80 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), ((float)il2cpp_codegen_subtract((float)((float)((float)L_79)), (float)L_80)), /*hidden argument*/NULL);
	}

IL_0166:
	{
		// for (x = 0; x < _source.width; x++)
		int32_t L_81 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
	}

IL_016a:
	{
		// for (x = 0; x < _source.width; x++)
		int32_t L_82 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_83 = ____source0;
		NullCheck(L_83);
		int32_t L_84;
		L_84 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_83);
		if ((((int32_t)L_82) < ((int32_t)L_84)))
		{
			goto IL_013d;
		}
	}

IL_0173:
	{
		// while (cropRect.height == _source.height  &&  y > cropRect.y)
		float L_85;
		L_85 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_86 = ____source0;
		NullCheck(L_86);
		int32_t L_87;
		L_87 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_86);
		if ((!(((float)L_85) == ((float)((float)((float)L_87))))))
		{
			goto IL_018e;
		}
	}
	{
		int32_t L_88 = V_3;
		float L_89;
		L_89 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		if ((((float)((float)((float)L_88))) > ((float)L_89)))
		{
			goto IL_0135;
		}
	}

IL_018e:
	{
		// return Crop (_source, cropRect);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_90 = ____source0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_91 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_92;
		L_92 = TextureUtility_Crop_m7FAD6A69F9BEFE9787222C46B044B01C0F014CFA(L_90, L_91, /*hidden argument*/NULL);
		return L_92;
	}
}
// UnityEngine.Texture2D TextureUtility::ApplyMask(UnityEngine.Texture2D,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_ApplyMask_mB90478406201544063FD67E92FBD1E02803B1D49 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____source0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____mask1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// Color[] pixels = _source.GetPixels();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ____source0;
		NullCheck(L_0);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_1;
		L_1 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Texture2D result = new Texture2D(_source.width, _source.height);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ____source0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = ____source0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_6, L_3, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// int width = result.width;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_7);
		V_2 = L_8;
		// int height = result.height;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_9);
		V_3 = L_10;
		// Color[] maskPixels = _mask.GetPixels ();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11 = ____mask1;
		NullCheck(L_11);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_12;
		L_12 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		// int maskWidth = _mask.width;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_13 = ____mask1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_13);
		V_5 = L_14;
		// int maskHeight = _mask.height;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = ____mask1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_15);
		V_6 = L_16;
		// for (int y = 0; y < height; y++)
		V_7 = 0;
		goto IL_008a;
	}

IL_0044:
	{
		// for (int x = 0; x < width; x++)
		V_8 = 0;
		goto IL_007f;
	}

IL_0049:
	{
		// pixels [y * width + x].a = maskPixels [(y * maskHeight / height) * maskWidth + (x * maskWidth / width)].a;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_17 = V_0;
		int32_t L_18 = V_7;
		int32_t L_19 = V_2;
		int32_t L_20 = V_8;
		NullCheck(L_17);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_21 = V_4;
		int32_t L_22 = V_7;
		int32_t L_23 = V_6;
		int32_t L_24 = V_3;
		int32_t L_25 = V_5;
		int32_t L_26 = V_8;
		int32_t L_27 = V_5;
		int32_t L_28 = V_2;
		NullCheck(L_21);
		float L_29 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_22, (int32_t)L_23))/(int32_t)L_24)), (int32_t)L_25)), (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_26, (int32_t)L_27))/(int32_t)L_28)))))))->get_a_3();
		((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)L_19)), (int32_t)L_20)))))->set_a_3(L_29);
		// for (int x = 0; x < width; x++)
		int32_t L_30 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_007f:
	{
		// for (int x = 0; x < width; x++)
		int32_t L_31 = V_8;
		int32_t L_32 = V_2;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0049;
		}
	}
	{
		// for (int y = 0; y < height; y++)
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_008a:
	{
		// for (int y = 0; y < height; y++)
		int32_t L_34 = V_7;
		int32_t L_35 = V_3;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0044;
		}
	}
	{
		// result.SetPixels(pixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_36 = V_1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_37 = V_0;
		NullCheck(L_36);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_36, L_37, /*hidden argument*/NULL);
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_38 = V_1;
		NullCheck(L_38);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_38, /*hidden argument*/NULL);
		// return result;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_39 = V_1;
		return L_39;
	}
}
// System.Void TextureUtility::ApplyMask(UnityEngine.Color[],UnityEngine.Texture2D,UnityEngine.Texture2D&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtility_ApplyMask_mF6C3C1E9FE822BF3CC9F9F6FFA6933C2B39CF05F (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____sourcePixels0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____mask1, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** ____result2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// int width = _result.width;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** L_0 = ____result2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1 = *((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF **)L_0);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_1);
		V_0 = L_2;
		// int height = _result.height;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** L_3 = ____result2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = *((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF **)L_3);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		V_1 = L_5;
		// Color[] maskPixels = _mask.GetPixels ();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = ____mask1;
		NullCheck(L_6);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_7;
		L_7 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// int maskWidth = _mask.width;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = ____mask1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		V_3 = L_9;
		// int maskHeight = _mask.height;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_10 = ____mask1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_10);
		V_4 = L_11;
		// for (int y = 0; y < height; y++)
		V_5 = 0;
		goto IL_006e;
	}

IL_002b:
	{
		// for (int x = 0; x < width; x++)
		V_6 = 0;
		goto IL_0063;
	}

IL_0030:
	{
		// _sourcePixels [y * width + x].a = maskPixels [(y * maskHeight / height) * maskWidth + (x * maskWidth / width)].a;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_12 = ____sourcePixels0;
		int32_t L_13 = V_5;
		int32_t L_14 = V_0;
		int32_t L_15 = V_6;
		NullCheck(L_12);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_16 = V_2;
		int32_t L_17 = V_5;
		int32_t L_18 = V_4;
		int32_t L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = V_6;
		int32_t L_22 = V_3;
		int32_t L_23 = V_0;
		NullCheck(L_16);
		float L_24 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)L_18))/(int32_t)L_19)), (int32_t)L_20)), (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_21, (int32_t)L_22))/(int32_t)L_23)))))))->get_a_3();
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)L_14)), (int32_t)L_15)))))->set_a_3(L_24);
		// for (int x = 0; x < width; x++)
		int32_t L_25 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0063:
	{
		// for (int x = 0; x < width; x++)
		int32_t L_26 = V_6;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0030;
		}
	}
	{
		// for (int y = 0; y < height; y++)
		int32_t L_28 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_006e:
	{
		// for (int y = 0; y < height; y++)
		int32_t L_29 = V_5;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_002b;
		}
	}
	{
		// _result.SetPixels(_sourcePixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** L_31 = ____result2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_32 = *((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF **)L_31);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_33 = ____sourcePixels0;
		NullCheck(L_32);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_32, L_33, /*hidden argument*/NULL);
		// _result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** L_34 = ____result2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_35 = *((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF **)L_34);
		NullCheck(L_35);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_35, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Texture2D TextureUtility::ApplyBooleanOperation(TextureUtility/BooleanOperation,UnityEngine.Texture2D,UnityEngine.Texture2D,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_ApplyBooleanOperation_m84835E2533EE3C716A63A3E8F995EC7E29BB26E9 (int32_t ____operationType0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____base1, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____addition2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____additionOffset3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_4 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_5 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_6 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_7 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_8;
	memset((&V_8), 0, sizeof(V_8));
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B2_0 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B3_1 = NULL;
	float G_B5_0 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B5_1 = NULL;
	float G_B4_0 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B4_1 = NULL;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B6_2 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B8_0 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B7_0 = NULL;
	float G_B9_0 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B9_1 = NULL;
	float G_B11_0 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B11_1 = NULL;
	float G_B10_0 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B10_1 = NULL;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B12_2 = NULL;
	int32_t G_B17_0 = 0;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* G_B17_1 = NULL;
	int32_t G_B15_0 = 0;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* G_B15_1 = NULL;
	int32_t G_B16_0 = 0;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* G_B16_1 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B18_0;
	memset((&G_B18_0), 0, sizeof(G_B18_0));
	int32_t G_B18_1 = 0;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* G_B18_2 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B27_0;
	memset((&G_B27_0), 0, sizeof(G_B27_0));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B37_0;
	memset((&G_B37_0), 0, sizeof(G_B37_0));
	{
		// _additionOffset = new Vector2 (Mathf.CeilToInt(_additionOffset.x), Mathf.CeilToInt(_additionOffset.y));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ____additionOffset3;
		float L_1 = L_0.get_x_0();
		int32_t L_2;
		L_2 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ____additionOffset3;
		float L_4 = L_3.get_y_1();
		int32_t L_5;
		L_5 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(L_4, /*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&____additionOffset3), ((float)((float)L_2)), ((float)((float)L_5)), /*hidden argument*/NULL);
		// Vector2 sizeIncrement      = new Vector2 (Mathf.Clamp(_addition.width + Mathf.Abs(_additionOffset.x) - _base.width, 0, Mathf.Infinity), Mathf.Clamp(_addition.height + Mathf.Abs(_additionOffset.y) - _base.height, 0, Mathf.Infinity));
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = ____addition2;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_6);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = ____additionOffset3;
		float L_9 = L_8.get_x_0();
		float L_10;
		L_10 = fabsf(L_9);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11 = ____base1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
		float L_13;
		L_13 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)((float)L_7)), (float)L_10)), (float)((float)((float)L_12)))), (0.0f), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = ____addition2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_14);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = ____additionOffset3;
		float L_17 = L_16.get_y_1();
		float L_18;
		L_18 = fabsf(L_17);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_19 = ____base1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_19);
		float L_21;
		L_21 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)((float)L_15)), (float)L_18)), (float)((float)((float)L_20)))), (0.0f), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), L_13, L_21, /*hidden argument*/NULL);
		// Vector2 resultSize          = new Vector2 (_base.width + sizeIncrement.x, _base.height + sizeIncrement.y);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_22 = ____base1;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_22);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24 = V_0;
		float L_25 = L_24.get_x_0();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_26 = ____base1;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_26);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = V_0;
		float L_29 = L_28.get_y_1();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), ((float)il2cpp_codegen_add((float)((float)((float)L_23)), (float)L_25)), ((float)il2cpp_codegen_add((float)((float)((float)L_27)), (float)L_29)), /*hidden argument*/NULL);
		// Vector2 basePosition     = new Vector2 (_additionOffset.x > 0 ? 0 : sizeIncrement.x, _additionOffset.y > 0 ? 0 : sizeIncrement.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30 = ____additionOffset3;
		float L_31 = L_30.get_x_0();
		G_B1_0 = (&V_2);
		if ((((float)L_31) > ((float)(0.0f))))
		{
			G_B2_0 = (&V_2);
			goto IL_00b4;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32 = V_0;
		float L_33 = L_32.get_x_0();
		G_B3_0 = L_33;
		G_B3_1 = G_B1_0;
		goto IL_00b9;
	}

IL_00b4:
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B2_0;
	}

IL_00b9:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34 = ____additionOffset3;
		float L_35 = L_34.get_y_1();
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		if ((((float)L_35) > ((float)(0.0f))))
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			goto IL_00ce;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36 = V_0;
		float L_37 = L_36.get_y_1();
		G_B6_0 = L_37;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_00d3;
	}

IL_00ce:
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_00d3:
	{
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)G_B6_2, G_B6_1, G_B6_0, /*hidden argument*/NULL);
		// Vector2 additionPosition = new Vector2 (_additionOffset.x > 0 ? Mathf.Abs(_additionOffset.x) : 0, _additionOffset.y > 0 ? Mathf.Abs(_additionOffset.y) : 0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38 = ____additionOffset3;
		float L_39 = L_38.get_x_0();
		G_B7_0 = (&V_3);
		if ((((float)L_39) > ((float)(0.0f))))
		{
			G_B8_0 = (&V_3);
			goto IL_00ee;
		}
	}
	{
		G_B9_0 = (0.0f);
		G_B9_1 = G_B7_0;
		goto IL_00f9;
	}

IL_00ee:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40 = ____additionOffset3;
		float L_41 = L_40.get_x_0();
		float L_42;
		L_42 = fabsf(L_41);
		G_B9_0 = L_42;
		G_B9_1 = G_B8_0;
	}

IL_00f9:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43 = ____additionOffset3;
		float L_44 = L_43.get_y_1();
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
		if ((((float)L_44) > ((float)(0.0f))))
		{
			G_B11_0 = G_B9_0;
			G_B11_1 = G_B9_1;
			goto IL_010d;
		}
	}
	{
		G_B12_0 = (0.0f);
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		goto IL_0118;
	}

IL_010d:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45 = ____additionOffset3;
		float L_46 = L_45.get_y_1();
		float L_47;
		L_47 = fabsf(L_46);
		G_B12_0 = L_47;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
	}

IL_0118:
	{
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)G_B12_2, G_B12_1, G_B12_0, /*hidden argument*/NULL);
		// Texture2D result         = new Texture2D(Mathf.CeilToInt(resultSize.x), Mathf.CeilToInt(resultSize.y));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_48 = V_1;
		float L_49 = L_48.get_x_0();
		int32_t L_50;
		L_50 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(L_49, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_51 = V_1;
		float L_52 = L_51.get_y_1();
		int32_t L_53;
		L_53 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(L_52, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_54 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_54, L_50, L_53, /*hidden argument*/NULL);
		V_4 = L_54;
		// Color[] resultPixels     = new Color[Mathf.CeilToInt(resultSize.x * resultSize.y)];
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_55 = V_1;
		float L_56 = L_55.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_57 = V_1;
		float L_58 = L_57.get_y_1();
		int32_t L_59;
		L_59 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)il2cpp_codegen_multiply((float)L_56, (float)L_58)), /*hidden argument*/NULL);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_60 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)L_59);
		V_5 = L_60;
		// Color[] basePixels         = _base.GetPixels();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_61 = ____base1;
		NullCheck(L_61);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_62;
		L_62 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_61, /*hidden argument*/NULL);
		V_6 = L_62;
		// Color[] additionPixels     = _addition.GetPixels();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_63 = ____addition2;
		NullCheck(L_63);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_64;
		L_64 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_63, /*hidden argument*/NULL);
		V_7 = L_64;
		// result.SetPixels(0, 0, Mathf.CeilToInt(resultSize.x), Mathf.CeilToInt(resultSize.y), resultPixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_65 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_66 = V_1;
		float L_67 = L_66.get_x_0();
		int32_t L_68;
		L_68 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(L_67, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_69 = V_1;
		float L_70 = L_69.get_y_1();
		int32_t L_71;
		L_71 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(L_70, /*hidden argument*/NULL);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_72 = V_5;
		NullCheck(L_65);
		Texture2D_SetPixels_m802BA835119C0F93478BBA752BA23192013EA4F7(L_65, 0, 0, L_68, L_71, L_72, /*hidden argument*/NULL);
		// result.SetPixels(Mathf.CeilToInt(basePosition.x), Mathf.CeilToInt(basePosition.y), Mathf.CeilToInt(_base.width), Mathf.CeilToInt(_base.height), basePixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_73 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_74 = V_2;
		float L_75 = L_74.get_x_0();
		int32_t L_76;
		L_76 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(L_75, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_77 = V_2;
		float L_78 = L_77.get_y_1();
		int32_t L_79;
		L_79 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(L_78, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_80 = ____base1;
		NullCheck(L_80);
		int32_t L_81;
		L_81 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_80);
		int32_t L_82;
		L_82 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)L_81)), /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_83 = ____base1;
		NullCheck(L_83);
		int32_t L_84;
		L_84 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_83);
		int32_t L_85;
		L_85 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)L_84)), /*hidden argument*/NULL);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_86 = V_6;
		NullCheck(L_73);
		Texture2D_SetPixels_m802BA835119C0F93478BBA752BA23192013EA4F7(L_73, L_76, L_79, L_82, L_85, L_86, /*hidden argument*/NULL);
		// resultPixels = result.GetPixels();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_87 = V_4;
		NullCheck(L_87);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_88;
		L_88 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_87, /*hidden argument*/NULL);
		V_5 = L_88;
		// if (_operationType == BooleanOperation.Intersection)
		int32_t L_89 = ____operationType0;
		if ((!(((uint32_t)L_89) == ((uint32_t)1))))
		{
			goto IL_02ec;
		}
	}
	{
		// Texture2D texture = new Texture2D(Mathf.CeilToInt(resultSize.x), Mathf.CeilToInt(resultSize.y));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_90 = V_1;
		float L_91 = L_90.get_x_0();
		int32_t L_92;
		L_92 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(L_91, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_93 = V_1;
		float L_94 = L_93.get_y_1();
		int32_t L_95;
		L_95 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(L_94, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_96 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_96, L_92, L_95, /*hidden argument*/NULL);
		// Color[] pixels = new Color[Mathf.CeilToInt(resultSize.x * resultSize.y)];
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_97 = V_1;
		float L_98 = L_97.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_99 = V_1;
		float L_100 = L_99.get_y_1();
		int32_t L_101;
		L_101 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)il2cpp_codegen_multiply((float)L_98, (float)L_100)), /*hidden argument*/NULL);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_102 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)L_101);
		V_9 = L_102;
		// texture.SetPixels(0, 0, Mathf.CeilToInt(resultSize.x), Mathf.CeilToInt(resultSize.y), pixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_103 = L_96;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_104 = V_1;
		float L_105 = L_104.get_x_0();
		int32_t L_106;
		L_106 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(L_105, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_107 = V_1;
		float L_108 = L_107.get_y_1();
		int32_t L_109;
		L_109 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(L_108, /*hidden argument*/NULL);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_110 = V_9;
		NullCheck(L_103);
		Texture2D_SetPixels_m802BA835119C0F93478BBA752BA23192013EA4F7(L_103, 0, 0, L_106, L_109, L_110, /*hidden argument*/NULL);
		// texture.SetPixels(Mathf.CeilToInt(additionPosition.x) , Mathf.CeilToInt(additionPosition.y), Mathf.CeilToInt(_addition.width), Mathf.CeilToInt(_addition.height), additionPixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_111 = L_103;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_112 = V_3;
		float L_113 = L_112.get_x_0();
		int32_t L_114;
		L_114 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(L_113, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_115 = V_3;
		float L_116 = L_115.get_y_1();
		int32_t L_117;
		L_117 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(L_116, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_118 = ____addition2;
		NullCheck(L_118);
		int32_t L_119;
		L_119 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_118);
		int32_t L_120;
		L_120 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)L_119)), /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_121 = ____addition2;
		NullCheck(L_121);
		int32_t L_122;
		L_122 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_121);
		int32_t L_123;
		L_123 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)L_122)), /*hidden argument*/NULL);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_124 = V_7;
		NullCheck(L_111);
		Texture2D_SetPixels_m802BA835119C0F93478BBA752BA23192013EA4F7(L_111, L_114, L_117, L_120, L_123, L_124, /*hidden argument*/NULL);
		// pixels = texture.GetPixels();
		NullCheck(L_111);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_125;
		L_125 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_111, /*hidden argument*/NULL);
		V_9 = L_125;
		// for (int i = 0; i < pixels.Length; i++)
		V_10 = 0;
		goto IL_02be;
	}

IL_0261:
	{
		// resultPixels[i] = (resultPixels[i].a == 0  ||  pixels[i].a == 0)  ?  new Color(0,0,0,0)  :  pixels[i];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_126 = V_5;
		int32_t L_127 = V_10;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_128 = V_5;
		int32_t L_129 = V_10;
		NullCheck(L_128);
		float L_130 = ((L_128)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_129)))->get_a_3();
		G_B15_0 = L_127;
		G_B15_1 = L_126;
		if ((((float)L_130) == ((float)(0.0f))))
		{
			G_B17_0 = L_127;
			G_B17_1 = L_126;
			goto IL_029a;
		}
	}
	{
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_131 = V_9;
		int32_t L_132 = V_10;
		NullCheck(L_131);
		float L_133 = ((L_131)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_132)))->get_a_3();
		G_B16_0 = G_B15_0;
		G_B16_1 = G_B15_1;
		if ((((float)L_133) == ((float)(0.0f))))
		{
			G_B17_0 = G_B15_0;
			G_B17_1 = G_B15_1;
			goto IL_029a;
		}
	}
	{
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_134 = V_9;
		int32_t L_135 = V_10;
		NullCheck(L_134);
		int32_t L_136 = L_135;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		G_B18_0 = L_137;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		goto IL_02b3;
	}

IL_029a:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_138;
		memset((&L_138), 0, sizeof(L_138));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_138), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		G_B18_0 = L_138;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
	}

IL_02b3:
	{
		NullCheck(G_B18_2);
		(G_B18_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B18_1), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )G_B18_0);
		// for (int i = 0; i < pixels.Length; i++)
		int32_t L_139 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)1));
	}

IL_02be:
	{
		// for (int i = 0; i < pixels.Length; i++)
		int32_t L_140 = V_10;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_141 = V_9;
		NullCheck(L_141);
		if ((((int32_t)L_140) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_141)->max_length))))))
		{
			goto IL_0261;
		}
	}
	{
		// result.SetPixels(0, 0, Mathf.CeilToInt(resultSize.x), Mathf.CeilToInt(resultSize.y), resultPixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_142 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_143 = V_1;
		float L_144 = L_143.get_x_0();
		int32_t L_145;
		L_145 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(L_144, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_146 = V_1;
		float L_147 = L_146.get_y_1();
		int32_t L_148;
		L_148 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(L_147, /*hidden argument*/NULL);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_149 = V_5;
		NullCheck(L_142);
		Texture2D_SetPixels_m802BA835119C0F93478BBA752BA23192013EA4F7(L_142, 0, 0, L_145, L_148, L_149, /*hidden argument*/NULL);
		// }
		goto IL_04de;
	}

IL_02ec:
	{
		// if (_operationType == BooleanOperation.Union)
		int32_t L_150 = ____operationType0;
		if (L_150)
		{
			goto IL_03b8;
		}
	}
	{
		// for (int y = 0; y < _addition.height; ++y)
		V_11 = 0;
		goto IL_03a6;
	}

IL_02fa:
	{
		// for (int x = 0; x < _addition.width; ++x)
		V_12 = 0;
		goto IL_0393;
	}

IL_0302:
	{
		// currentPixelColor = additionPixels[y*_addition.width + x].a == 0  ?  resultPixels[Mathf.CeilToInt((y+additionPosition.y)*resultSize.x + (x+additionPosition.x))]  :  additionPixels[Mathf.CeilToInt(y*_addition.width + x)];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_151 = V_7;
		int32_t L_152 = V_11;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_153 = ____addition2;
		NullCheck(L_153);
		int32_t L_154;
		L_154 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_153);
		int32_t L_155 = V_12;
		NullCheck(L_151);
		float L_156 = ((L_151)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_152, (int32_t)L_154)), (int32_t)L_155)))))->get_a_3();
		if ((((float)L_156) == ((float)(0.0f))))
		{
			goto IL_033c;
		}
	}
	{
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_157 = V_7;
		int32_t L_158 = V_11;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_159 = ____addition2;
		NullCheck(L_159);
		int32_t L_160;
		L_160 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_159);
		int32_t L_161 = V_12;
		int32_t L_162;
		L_162 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_158, (int32_t)L_160)), (int32_t)L_161)))), /*hidden argument*/NULL);
		NullCheck(L_157);
		int32_t L_163 = L_162;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_164 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		G_B27_0 = L_164;
		goto IL_0364;
	}

IL_033c:
	{
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_165 = V_5;
		int32_t L_166 = V_11;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_167 = V_3;
		float L_168 = L_167.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_169 = V_1;
		float L_170 = L_169.get_x_0();
		int32_t L_171 = V_12;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_172 = V_3;
		float L_173 = L_172.get_x_0();
		int32_t L_174;
		L_174 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)((float)L_166)), (float)L_168)), (float)L_170)), (float)((float)il2cpp_codegen_add((float)((float)((float)L_171)), (float)L_173)))), /*hidden argument*/NULL);
		NullCheck(L_165);
		int32_t L_175 = L_174;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_176 = (L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		G_B27_0 = L_176;
	}

IL_0364:
	{
		V_8 = G_B27_0;
		// result.SetPixel (Mathf.CeilToInt(x+additionPosition.x), Mathf.CeilToInt(y+additionPosition.y), currentPixelColor);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_177 = V_4;
		int32_t L_178 = V_12;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_179 = V_3;
		float L_180 = L_179.get_x_0();
		int32_t L_181;
		L_181 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)il2cpp_codegen_add((float)((float)((float)L_178)), (float)L_180)), /*hidden argument*/NULL);
		int32_t L_182 = V_11;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_183 = V_3;
		float L_184 = L_183.get_y_1();
		int32_t L_185;
		L_185 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)il2cpp_codegen_add((float)((float)((float)L_182)), (float)L_184)), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_186 = V_8;
		NullCheck(L_177);
		Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92(L_177, L_181, L_185, L_186, /*hidden argument*/NULL);
		// for (int x = 0; x < _addition.width; ++x)
		int32_t L_187 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_187, (int32_t)1));
	}

IL_0393:
	{
		// for (int x = 0; x < _addition.width; ++x)
		int32_t L_188 = V_12;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_189 = ____addition2;
		NullCheck(L_189);
		int32_t L_190;
		L_190 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_189);
		if ((((int32_t)L_188) < ((int32_t)L_190)))
		{
			goto IL_0302;
		}
	}
	{
		// for (int y = 0; y < _addition.height; ++y)
		int32_t L_191 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_191, (int32_t)1));
	}

IL_03a6:
	{
		// for (int y = 0; y < _addition.height; ++y)
		int32_t L_192 = V_11;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_193 = ____addition2;
		NullCheck(L_193);
		int32_t L_194;
		L_194 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_193);
		if ((((int32_t)L_192) < ((int32_t)L_194)))
		{
			goto IL_02fa;
		}
	}
	{
		// }
		goto IL_04de;
	}

IL_03b8:
	{
		// for (int y = 0; y < _addition.height; ++y)
		V_13 = 0;
		goto IL_04d1;
	}

IL_03c0:
	{
		// for (int x = 0; x < _addition.width; ++x)
		V_14 = 0;
		goto IL_04be;
	}

IL_03c8:
	{
		// currentPixelColor = additionPixels[y*_addition.width + x].a == 0  ?  resultPixels[Mathf.CeilToInt((y+additionPosition.y)*resultSize.x + (x+additionPosition.x))]  :  additionPixels[Mathf.CeilToInt(y*_addition.width + x)];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_195 = V_7;
		int32_t L_196 = V_13;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_197 = ____addition2;
		NullCheck(L_197);
		int32_t L_198;
		L_198 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_197);
		int32_t L_199 = V_14;
		NullCheck(L_195);
		float L_200 = ((L_195)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_196, (int32_t)L_198)), (int32_t)L_199)))))->get_a_3();
		if ((((float)L_200) == ((float)(0.0f))))
		{
			goto IL_0402;
		}
	}
	{
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_201 = V_7;
		int32_t L_202 = V_13;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_203 = ____addition2;
		NullCheck(L_203);
		int32_t L_204;
		L_204 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_203);
		int32_t L_205 = V_14;
		int32_t L_206;
		L_206 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_202, (int32_t)L_204)), (int32_t)L_205)))), /*hidden argument*/NULL);
		NullCheck(L_201);
		int32_t L_207 = L_206;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_208 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_207));
		G_B37_0 = L_208;
		goto IL_042a;
	}

IL_0402:
	{
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_209 = V_5;
		int32_t L_210 = V_13;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_211 = V_3;
		float L_212 = L_211.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_213 = V_1;
		float L_214 = L_213.get_x_0();
		int32_t L_215 = V_14;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_216 = V_3;
		float L_217 = L_216.get_x_0();
		int32_t L_218;
		L_218 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)((float)L_210)), (float)L_212)), (float)L_214)), (float)((float)il2cpp_codegen_add((float)((float)((float)L_215)), (float)L_217)))), /*hidden argument*/NULL);
		NullCheck(L_209);
		int32_t L_219 = L_218;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_220 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_219));
		G_B37_0 = L_220;
	}

IL_042a:
	{
		V_8 = G_B37_0;
		// if (resultPixels[Mathf.CeilToInt((y+additionPosition.y)*resultSize.x + (x+additionPosition.x))].a !=0  &&  additionPixels[Mathf.CeilToInt(y*_addition.width + x)].a != 0)
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_221 = V_5;
		int32_t L_222 = V_13;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_223 = V_3;
		float L_224 = L_223.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_225 = V_1;
		float L_226 = L_225.get_x_0();
		int32_t L_227 = V_14;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_228 = V_3;
		float L_229 = L_228.get_x_0();
		int32_t L_230;
		L_230 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)((float)L_222)), (float)L_224)), (float)L_226)), (float)((float)il2cpp_codegen_add((float)((float)((float)L_227)), (float)L_229)))), /*hidden argument*/NULL);
		NullCheck(L_221);
		float L_231 = ((L_221)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_230)))->get_a_3();
		if ((((float)L_231) == ((float)(0.0f))))
		{
			goto IL_0491;
		}
	}
	{
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_232 = V_7;
		int32_t L_233 = V_13;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_234 = ____addition2;
		NullCheck(L_234);
		int32_t L_235;
		L_235 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_234);
		int32_t L_236 = V_14;
		int32_t L_237;
		L_237 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_233, (int32_t)L_235)), (int32_t)L_236)))), /*hidden argument*/NULL);
		NullCheck(L_232);
		float L_238 = ((L_232)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_237)))->get_a_3();
		if ((((float)L_238) == ((float)(0.0f))))
		{
			goto IL_0491;
		}
	}
	{
		// currentPixelColor.a = 0;
		(&V_8)->set_a_3((0.0f));
	}

IL_0491:
	{
		// result.SetPixel (Mathf.CeilToInt(x+additionPosition.x), Mathf.CeilToInt(y+additionPosition.y), currentPixelColor);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_239 = V_4;
		int32_t L_240 = V_14;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_241 = V_3;
		float L_242 = L_241.get_x_0();
		int32_t L_243;
		L_243 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)il2cpp_codegen_add((float)((float)((float)L_240)), (float)L_242)), /*hidden argument*/NULL);
		int32_t L_244 = V_13;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_245 = V_3;
		float L_246 = L_245.get_y_1();
		int32_t L_247;
		L_247 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)il2cpp_codegen_add((float)((float)((float)L_244)), (float)L_246)), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_248 = V_8;
		NullCheck(L_239);
		Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92(L_239, L_243, L_247, L_248, /*hidden argument*/NULL);
		// for (int x = 0; x < _addition.width; ++x)
		int32_t L_249 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_249, (int32_t)1));
	}

IL_04be:
	{
		// for (int x = 0; x < _addition.width; ++x)
		int32_t L_250 = V_14;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_251 = ____addition2;
		NullCheck(L_251);
		int32_t L_252;
		L_252 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_251);
		if ((((int32_t)L_250) < ((int32_t)L_252)))
		{
			goto IL_03c8;
		}
	}
	{
		// for (int y = 0; y < _addition.height; ++y)
		int32_t L_253 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_253, (int32_t)1));
	}

IL_04d1:
	{
		// for (int y = 0; y < _addition.height; ++y)
		int32_t L_254 = V_13;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_255 = ____addition2;
		NullCheck(L_255);
		int32_t L_256;
		L_256 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_255);
		if ((((int32_t)L_254) < ((int32_t)L_256)))
		{
			goto IL_03c0;
		}
	}

IL_04de:
	{
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_257 = V_4;
		NullCheck(L_257);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_257, /*hidden argument*/NULL);
		// return result;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_258 = V_4;
		return L_258;
	}
}
// UnityEngine.Texture2D TextureUtility::Rotate(UnityEngine.Texture2D,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_Rotate_m5580F1BFE00058E21885967E2FB1771411789664 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____source0, float ____angle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_1 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// Color[] sourcePixels = _source.GetPixels();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ____source0;
		NullCheck(L_0);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_1;
		L_1 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Texture2D result = new Texture2D(_source.width, _source.height);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ____source0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = ____source0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_6, L_3, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// Color[] pixels = result.GetPixels();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = V_1;
		NullCheck(L_7);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_8;
		L_8 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// for (int y = 0; y < result.height; y++)
		V_5 = 0;
		goto IL_0165;
	}

IL_0028:
	{
		// for (int x = 0; x < result.width; x++)
		V_6 = 0;
		goto IL_0152;
	}

IL_0030:
	{
		// rotatedX = Mathf.CeilToInt(Mathf.Cos(Mathf.Deg2Rad*_angle) * (x-result.width/2)  +  Mathf.Sin(Mathf.Deg2Rad*_angle) * (y-result.height/2)  +  result.width/2);
		float L_9 = ____angle1;
		float L_10;
		L_10 = cosf(((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_9)));
		int32_t L_11 = V_6;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_12);
		float L_14 = ____angle1;
		float L_15;
		L_15 = sinf(((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_14)));
		int32_t L_16 = V_5;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_17);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_19);
		int32_t L_21;
		L_21 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_10, (float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)((int32_t)L_13/(int32_t)2)))))))), (float)((float)il2cpp_codegen_multiply((float)L_15, (float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)((int32_t)((int32_t)L_18/(int32_t)2)))))))))), (float)((float)((float)((int32_t)((int32_t)L_20/(int32_t)2)))))), /*hidden argument*/NULL);
		V_3 = L_21;
		// rotatedY = Mathf.CeilToInt(-Mathf.Sin(Mathf.Deg2Rad*_angle) * (x-result.width/2)  +  Mathf.Cos(Mathf.Deg2Rad*_angle) * (y-result.height/2)  +  result.height/2);
		float L_22 = ____angle1;
		float L_23;
		L_23 = sinf(((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_22)));
		int32_t L_24 = V_6;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_25);
		float L_27 = ____angle1;
		float L_28;
		L_28 = cosf(((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_27)));
		int32_t L_29 = V_5;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_30 = V_1;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_30);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_32);
		int32_t L_34;
		L_34 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((-L_23)), (float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)((int32_t)((int32_t)L_26/(int32_t)2)))))))), (float)((float)il2cpp_codegen_multiply((float)L_28, (float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)((int32_t)((int32_t)L_31/(int32_t)2)))))))))), (float)((float)((float)((int32_t)((int32_t)L_33/(int32_t)2)))))), /*hidden argument*/NULL);
		V_4 = L_34;
		// if (rotatedX > -1  &&  rotatedX < result.width  &&  rotatedY > -1  &&  rotatedY < result.height)
		int32_t L_35 = V_3;
		if ((((int32_t)L_35) <= ((int32_t)(-1))))
		{
			goto IL_0121;
		}
	}
	{
		int32_t L_36 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_37 = V_1;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_37);
		if ((((int32_t)L_36) >= ((int32_t)L_38)))
		{
			goto IL_0121;
		}
	}
	{
		int32_t L_39 = V_4;
		if ((((int32_t)L_39) <= ((int32_t)(-1))))
		{
			goto IL_0121;
		}
	}
	{
		int32_t L_40 = V_4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_41 = V_1;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_41);
		if ((((int32_t)L_40) >= ((int32_t)L_42)))
		{
			goto IL_0121;
		}
	}
	{
		// pixels[y*result.width + x] = sourcePixels[Mathf.CeilToInt(Mathf.Clamp(rotatedY, 0, result.height-1)*result.width + Mathf.Clamp(rotatedX, 0.0f, result.width-1))];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_43 = V_2;
		int32_t L_44 = V_5;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_45 = V_1;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_45);
		int32_t L_47 = V_6;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_48 = V_0;
		int32_t L_49 = V_4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_50 = V_1;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_50);
		int32_t L_52;
		L_52 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_49, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)1)), /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_53 = V_1;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_53);
		int32_t L_55 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_56 = V_1;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_56);
		float L_58;
		L_58 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)((float)L_55)), (0.0f), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)1)))), /*hidden argument*/NULL);
		int32_t L_59;
		L_59 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)il2cpp_codegen_add((float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_52, (int32_t)L_54)))), (float)L_58)), /*hidden argument*/NULL);
		NullCheck(L_48);
		int32_t L_60 = L_59;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_61 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_44, (int32_t)L_46)), (int32_t)L_47))), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_61);
		goto IL_014c;
	}

IL_0121:
	{
		// pixels[y*result.width + x] = new Color(0,0,0,0);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_62 = V_2;
		int32_t L_63 = V_5;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_64 = V_1;
		NullCheck(L_64);
		int32_t L_65;
		L_65 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_64);
		int32_t L_66 = V_6;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_67;
		memset((&L_67), 0, sizeof(L_67));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_67), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_63, (int32_t)L_65)), (int32_t)L_66))), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_67);
	}

IL_014c:
	{
		// for (int x = 0; x < result.width; x++)
		int32_t L_68 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1));
	}

IL_0152:
	{
		// for (int x = 0; x < result.width; x++)
		int32_t L_69 = V_6;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_70 = V_1;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_70);
		if ((((int32_t)L_69) < ((int32_t)L_71)))
		{
			goto IL_0030;
		}
	}
	{
		// for (int y = 0; y < result.height; y++)
		int32_t L_72 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
	}

IL_0165:
	{
		// for (int y = 0; y < result.height; y++)
		int32_t L_73 = V_5;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_74 = V_1;
		NullCheck(L_74);
		int32_t L_75;
		L_75 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_74);
		if ((((int32_t)L_73) < ((int32_t)L_75)))
		{
			goto IL_0028;
		}
	}
	{
		// result.SetPixels(pixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_76 = V_1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_77 = V_2;
		NullCheck(L_76);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_76, L_77, /*hidden argument*/NULL);
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_78 = V_1;
		NullCheck(L_78);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_78, /*hidden argument*/NULL);
		// return result;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_79 = V_1;
		return L_79;
	}
}
// UnityEngine.Texture2D TextureUtility::Rotate90(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_Rotate90_m24A89D06728A82B3E15148331E3891A0213C2FA2 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____source0, bool ____clockwise1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* V_0 = NULL;
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t G_B5_0 = 0;
	{
		// Color32[] original = _source.GetPixels32();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ____source0;
		NullCheck(L_0);
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_1;
		L_1 = Texture2D_GetPixels32_m419F7BF2D2D374C08247BE66838148DA485A6ECA(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Color32[] rotated = new Color32[original.Length];
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_2 = V_0;
		NullCheck(L_2);
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_3 = (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)SZArrayNew(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
		V_1 = L_3;
		// int width = _source.width;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = ____source0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_4);
		V_4 = L_5;
		// int height = _source.height;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = ____source0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		V_5 = L_7;
		// Texture2D result = new Texture2D(height, width);
		int32_t L_8 = V_5;
		int32_t L_9 = V_4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_10 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_10, L_8, L_9, /*hidden argument*/NULL);
		V_6 = L_10;
		// for (int y = 0; y < height; ++y)
		V_7 = 0;
		goto IL_007e;
	}

IL_0030:
	{
		// for (int x = 0; x < width; ++x)
		V_8 = 0;
		goto IL_0072;
	}

IL_0035:
	{
		// rotatedPixelId = (x + 1) * height - y - 1;
		int32_t L_11 = V_8;
		int32_t L_12 = V_5;
		int32_t L_13 = V_7;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)), (int32_t)L_12)), (int32_t)L_13)), (int32_t)1));
		// originalPixelId = _clockwise ? original.Length - 1 - (y * width + x) : y * width + x;
		bool L_14 = ____clockwise1;
		if (L_14)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_15 = V_7;
		int32_t L_16 = V_4;
		int32_t L_17 = V_8;
		G_B5_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)L_16)), (int32_t)L_17));
		goto IL_005d;
	}

IL_004f:
	{
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = V_7;
		int32_t L_20 = V_4;
		int32_t L_21 = V_8;
		G_B5_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))), (int32_t)1)), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20)), (int32_t)L_21))));
	}

IL_005d:
	{
		V_3 = G_B5_0;
		// rotated[rotatedPixelId] = original[originalPixelId];
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_22 = V_1;
		int32_t L_23 = V_2;
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_24 = V_0;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )L_27);
		// for (int x = 0; x < width; ++x)
		int32_t L_28 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0072:
	{
		// for (int x = 0; x < width; ++x)
		int32_t L_29 = V_8;
		int32_t L_30 = V_4;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0035;
		}
	}
	{
		// for (int y = 0; y < height; ++y)
		int32_t L_31 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_007e:
	{
		// for (int y = 0; y < height; ++y)
		int32_t L_32 = V_7;
		int32_t L_33 = V_5;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0030;
		}
	}
	{
		// result.SetPixels32(rotated);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_34 = V_6;
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_35 = V_1;
		NullCheck(L_34);
		Texture2D_SetPixels32_m6C2602EBE75F9C70DBC36D0B67EA4C12638518BB(L_34, L_35, /*hidden argument*/NULL);
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_36 = V_6;
		NullCheck(L_36);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_36, /*hidden argument*/NULL);
		// return result;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_37 = V_6;
		return L_37;
	}
}
// UnityEngine.Color[] TextureUtility::Rotate90(UnityEngine.Color[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* TextureUtility_Rotate90_m184AFFCA431401CFCA51C7AF2E17C720E02CBDF6 (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____source0, int32_t ____width1, int32_t ____height2, bool ____clockwise3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// Color[] result = new Color[_source.Length];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_0 = ____source0;
		NullCheck(L_0);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_1 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_0 = L_1;
		// if (_clockwise)
		bool L_2 = ____clockwise3;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		// for (int y = 0; y < _height; ++y)
		V_3 = 0;
		goto IL_004a;
	}

IL_0010:
	{
		// for (int x = 0; x < _width; ++x)
		V_4 = 0;
		goto IL_0041;
	}

IL_0015:
	{
		// rotatedPixelId = (x + 1) * _height - y - 1;
		int32_t L_3 = V_4;
		int32_t L_4 = ____height2;
		int32_t L_5 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), (int32_t)L_4)), (int32_t)L_5)), (int32_t)1));
		// originalPixelId = _source.Length - 1 - (y * _width + x);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_6 = ____source0;
		NullCheck(L_6);
		int32_t L_7 = V_3;
		int32_t L_8 = ____width1;
		int32_t L_9 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), (int32_t)1)), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)L_8)), (int32_t)L_9))));
		// result[rotatedPixelId] = _source[originalPixelId];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_10 = V_0;
		int32_t L_11 = V_1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_12 = ____source0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_15);
		// for (int x = 0; x < _width; ++x)
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0041:
	{
		// for (int x = 0; x < _width; ++x)
		int32_t L_17 = V_4;
		int32_t L_18 = ____width1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0015;
		}
	}
	{
		// for (int y = 0; y < _height; ++y)
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_004a:
	{
		// for (int y = 0; y < _height; ++y)
		int32_t L_20 = V_3;
		int32_t L_21 = ____height2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0092;
	}

IL_0050:
	{
		// for (int y = 0; y < _height; ++y)
		V_5 = 0;
		goto IL_008d;
	}

IL_0055:
	{
		// for (int x = 0; x < _width; ++x)
		V_6 = 0;
		goto IL_0082;
	}

IL_005a:
	{
		// rotatedPixelId = (x + 1) * _height - y - 1;
		int32_t L_22 = V_6;
		int32_t L_23 = ____height2;
		int32_t L_24 = V_5;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)), (int32_t)L_23)), (int32_t)L_24)), (int32_t)1));
		// originalPixelId = y * _width + x;
		int32_t L_25 = V_5;
		int32_t L_26 = ____width1;
		int32_t L_27 = V_6;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)L_26)), (int32_t)L_27));
		// result[rotatedPixelId] = _source[originalPixelId];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_28 = V_0;
		int32_t L_29 = V_1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_30 = ____source0;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_33);
		// for (int x = 0; x < _width; ++x)
		int32_t L_34 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_0082:
	{
		// for (int x = 0; x < _width; ++x)
		int32_t L_35 = V_6;
		int32_t L_36 = ____width1;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_005a;
		}
	}
	{
		// for (int y = 0; y < _height; ++y)
		int32_t L_37 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_008d:
	{
		// for (int y = 0; y < _height; ++y)
		int32_t L_38 = V_5;
		int32_t L_39 = ____height2;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0055;
		}
	}

IL_0092:
	{
		// return result;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_40 = V_0;
		return L_40;
	}
}
// UnityEngine.Texture2D TextureUtility::Scale(UnityEngine.Texture2D,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_Scale_m818F04ED1B4C5DB9C62EBE68B3D11264C709A3C4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____source0, int32_t ____targetWidth1, int32_t ____targetHeight2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA676CECF5D8D2E11B14CC10130B8AC8441383F1);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_1 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// if (_targetWidth <= 0  ||  _targetHeight <= 0)
		int32_t L_0 = ____targetWidth1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ____targetHeight2;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}

IL_0008:
	{
		// Debug.LogWarning("Scale is impossible! Target size should be at least 1x1");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralCA676CECF5D8D2E11B14CC10130B8AC8441383F1, /*hidden argument*/NULL);
		// return null;
		return (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
	}

IL_0014:
	{
		// Texture2D result = new Texture2D(_targetWidth, _targetHeight);
		int32_t L_2 = ____targetWidth1;
		int32_t L_3 = ____targetHeight2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_4, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// Color[] pixels = new Color[_targetWidth * _targetHeight];
		int32_t L_5 = ____targetWidth1;
		int32_t L_6 = ____targetHeight2;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_7 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_6)));
		V_1 = L_7;
		// for (int y = 0; y < result.height; y++)
		V_3 = 0;
		goto IL_009e;
	}

IL_0029:
	{
		// for (int x = 0; x < result.width; x++)
		V_4 = 0;
		goto IL_0090;
	}

IL_002e:
	{
		// fraction.x = Mathf.Clamp01 (x / (result.width + 0.0f));
		int32_t L_8 = V_4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
		float L_11;
		L_11 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)((float)((float)L_8))/(float)((float)il2cpp_codegen_add((float)((float)((float)L_10)), (float)(0.0f))))), /*hidden argument*/NULL);
		(&V_2)->set_x_0(L_11);
		// fraction.y = Mathf.Clamp01 (y / (result.height + 0.0f));
		int32_t L_12 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_13);
		float L_15;
		L_15 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)((float)((float)L_12))/(float)((float)il2cpp_codegen_add((float)((float)((float)L_14)), (float)(0.0f))))), /*hidden argument*/NULL);
		(&V_2)->set_y_1(L_15);
		// pixels[y * result.width + x] = _source.GetPixelBilinear(fraction.x, fraction.y);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_16 = V_1;
		int32_t L_17 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
		int32_t L_20 = V_4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_21 = ____source0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = V_2;
		float L_23 = L_22.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24 = V_2;
		float L_25 = L_24.get_y_1();
		NullCheck(L_21);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26;
		L_26 = Texture2D_GetPixelBilinear_mE25550DD7E9FD26DA7CB1E38FFCA2101F9D3D28D(L_21, L_23, L_25, /*hidden argument*/NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)L_19)), (int32_t)L_20))), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_26);
		// for (int x = 0; x < result.width; x++)
		int32_t L_27 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0090:
	{
		// for (int x = 0; x < result.width; x++)
		int32_t L_28 = V_4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_29);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_002e;
		}
	}
	{
		// for (int y = 0; y < result.height; y++)
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_009e:
	{
		// for (int y = 0; y < result.height; y++)
		int32_t L_32 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_33);
		if ((((int32_t)L_32) < ((int32_t)L_34)))
		{
			goto IL_0029;
		}
	}
	{
		// result.SetPixels(pixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_35 = V_0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_36 = V_1;
		NullCheck(L_35);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_35, L_36, /*hidden argument*/NULL);
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_37 = V_0;
		NullCheck(L_37);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_37, /*hidden argument*/NULL);
		// return result;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_38 = V_0;
		return L_38;
	}
}
// UnityEngine.Texture2D TextureUtility::Stroke(UnityEngine.Texture2D,System.Int32,UnityEngine.Color,TextureUtility/BlendMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtility_Stroke_mDF078ABA1A72FEA7ADD260A2E9A3F1EFF8006106 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____source0, int32_t ____thickness1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____color2, int32_t ____blendMode3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// Texture2D result = new Texture2D(_source.width, _source.height);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ____source0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ____source0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_4, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// Color[] pixels = _source.GetPixels();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = ____source0;
		NullCheck(L_5);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_6;
		L_6 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// for (int x = 0; x < result.width; x++)
		V_2 = 0;
		goto IL_0164;
	}

IL_0020:
	{
		// for (int y = 0; y < result.height; y++)
		V_3 = 0;
		goto IL_0154;
	}

IL_0027:
	{
		// for (int i = 0; i < _thickness; i++)
		V_4 = 0;
		goto IL_0148;
	}

IL_002f:
	{
		// if (
		//     pixels[y*result.width + x].a > 0.01f
		//       &&
		//     (
		//         (x+i < result.width  &&  pixels[y*result.width + x+i].a < 0.01f) ||
		//         (x-i >=0  &&  pixels[y*result.width + x-i].a < 0.01f) ||
		//         (y-i >=0  &&  pixels[(y-i)*result.width + x].a < 0.01f) ||
		//         (y+i < result.height &&  pixels[(y+i)*result.width + x].a < 0.01f) ||
		//         x-i == 0 || x+i == result.width-1  ||  y-i == 0 || y+i == result.height-1
		//     )
		// )
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_7 = V_1;
		int32_t L_8 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
		int32_t L_11 = V_2;
		NullCheck(L_7);
		float L_12 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)L_10)), (int32_t)L_11)))))->get_a_3();
		if ((!(((float)L_12) > ((float)(0.00999999978f)))))
		{
			goto IL_0142;
		}
	}
	{
		int32_t L_13 = V_2;
		int32_t L_14 = V_4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_15);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14))) >= ((int32_t)L_16)))
		{
			goto IL_007c;
		}
	}
	{
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_17 = V_1;
		int32_t L_18 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_19);
		int32_t L_21 = V_2;
		int32_t L_22 = V_4;
		NullCheck(L_17);
		float L_23 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)L_20)), (int32_t)L_21)), (int32_t)L_22)))))->get_a_3();
		if ((((float)L_23) < ((float)(0.00999999978f))))
		{
			goto IL_011b;
		}
	}

IL_007c:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25))) < ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_26 = V_1;
		int32_t L_27 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_28);
		int32_t L_30 = V_2;
		int32_t L_31 = V_4;
		NullCheck(L_26);
		float L_32 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)L_29)), (int32_t)L_30)), (int32_t)L_31)))))->get_a_3();
		if ((((float)L_32) < ((float)(0.00999999978f))))
		{
			goto IL_011b;
		}
	}

IL_00a2:
	{
		int32_t L_33 = V_3;
		int32_t L_34 = V_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)L_34))) < ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_35 = V_1;
		int32_t L_36 = V_3;
		int32_t L_37 = V_4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_38);
		int32_t L_40 = V_2;
		NullCheck(L_35);
		float L_41 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_37)), (int32_t)L_39)), (int32_t)L_40)))))->get_a_3();
		if ((((float)L_41) < ((float)(0.00999999978f))))
		{
			goto IL_011b;
		}
	}

IL_00c8:
	{
		int32_t L_42 = V_3;
		int32_t L_43 = V_4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_44);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)L_43))) >= ((int32_t)L_45)))
		{
			goto IL_00f3;
		}
	}
	{
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_46 = V_1;
		int32_t L_47 = V_3;
		int32_t L_48 = V_4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_49 = V_0;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_49);
		int32_t L_51 = V_2;
		NullCheck(L_46);
		float L_52 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)L_48)), (int32_t)L_50)), (int32_t)L_51)))))->get_a_3();
		if ((((float)L_52) < ((float)(0.00999999978f))))
		{
			goto IL_011b;
		}
	}

IL_00f3:
	{
		int32_t L_53 = V_2;
		int32_t L_54 = V_4;
		if (!((int32_t)il2cpp_codegen_subtract((int32_t)L_53, (int32_t)L_54)))
		{
			goto IL_011b;
		}
	}
	{
		int32_t L_55 = V_2;
		int32_t L_56 = V_4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_57 = V_0;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_57);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)L_56))) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)1)))))
		{
			goto IL_011b;
		}
	}
	{
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		if (!((int32_t)il2cpp_codegen_subtract((int32_t)L_59, (int32_t)L_60)))
		{
			goto IL_011b;
		}
	}
	{
		int32_t L_61 = V_3;
		int32_t L_62 = V_4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_63 = V_0;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_63);
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)L_62))) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_64, (int32_t)1))))))
		{
			goto IL_0142;
		}
	}

IL_011b:
	{
		// pixels[y*result.width + x] = BlendColors(pixels[y*result.width + x], _color, _blendMode);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_65 = V_1;
		int32_t L_66 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_67 = V_0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_67);
		int32_t L_69 = V_2;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_70 = V_1;
		int32_t L_71 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_72 = V_0;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_72);
		int32_t L_74 = V_2;
		NullCheck(L_70);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_71, (int32_t)L_73)), (int32_t)L_74));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_76 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_77 = ____color2;
		int32_t L_78 = ____blendMode3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_79;
		L_79 = TextureUtility_BlendColors_m8F93EFCB84AA0825A5982642A28D9B61D26CC3C4(L_76, L_77, L_78, /*hidden argument*/NULL);
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_66, (int32_t)L_68)), (int32_t)L_69))), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_79);
	}

IL_0142:
	{
		// for (int i = 0; i < _thickness; i++)
		int32_t L_80 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1));
	}

IL_0148:
	{
		// for (int i = 0; i < _thickness; i++)
		int32_t L_81 = V_4;
		int32_t L_82 = ____thickness1;
		if ((((int32_t)L_81) < ((int32_t)L_82)))
		{
			goto IL_002f;
		}
	}
	{
		// for (int y = 0; y < result.height; y++)
		int32_t L_83 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1));
	}

IL_0154:
	{
		// for (int y = 0; y < result.height; y++)
		int32_t L_84 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_85 = V_0;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_85);
		if ((((int32_t)L_84) < ((int32_t)L_86)))
		{
			goto IL_0027;
		}
	}
	{
		// for (int x = 0; x < result.width; x++)
		int32_t L_87 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1));
	}

IL_0164:
	{
		// for (int x = 0; x < result.width; x++)
		int32_t L_88 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_89 = V_0;
		NullCheck(L_89);
		int32_t L_90;
		L_90 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_89);
		if ((((int32_t)L_88) < ((int32_t)L_90)))
		{
			goto IL_0020;
		}
	}
	{
		// result.SetPixels(pixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_91 = V_0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_92 = V_1;
		NullCheck(L_91);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_91, L_92, /*hidden argument*/NULL);
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_93 = V_0;
		NullCheck(L_93);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_93, /*hidden argument*/NULL);
		// return result;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_94 = V_0;
		return L_94;
	}
}
// UnityEngine.Color TextureUtility::GetAverageColor(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  TextureUtility_GetAverageColor_mEDD4FA83B191540DFAD7ED00470342FCC08AF490 (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____pixels0, const RuntimeMethod* method)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Color averageColor = new Color();
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 ));
		// for (int i = 0; i < _pixels.Length; i++)
		V_1 = 0;
		goto IL_006c;
	}

IL_000c:
	{
		// averageColor.r += _pixels[i].r;
		float* L_0 = (&V_0)->get_address_of_r_0();
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_3 = ____pixels0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		float L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->get_r_0();
		*((float*)L_1) = (float)((float)il2cpp_codegen_add((float)L_2, (float)L_5));
		// averageColor.g += _pixels[i].g;
		float* L_6 = (&V_0)->get_address_of_g_1();
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_9 = ____pixels0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->get_g_1();
		*((float*)L_7) = (float)((float)il2cpp_codegen_add((float)L_8, (float)L_11));
		// averageColor.b += _pixels[i].b;
		float* L_12 = (&V_0)->get_address_of_b_2();
		float* L_13 = L_12;
		float L_14 = *((float*)L_13);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_15 = ____pixels0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->get_b_2();
		*((float*)L_13) = (float)((float)il2cpp_codegen_add((float)L_14, (float)L_17));
		// averageColor.a += _pixels[i].a;
		float* L_18 = (&V_0)->get_address_of_a_3();
		float* L_19 = L_18;
		float L_20 = *((float*)L_19);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_21 = ____pixels0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		float L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->get_a_3();
		*((float*)L_19) = (float)((float)il2cpp_codegen_add((float)L_20, (float)L_23));
		// for (int i = 0; i < _pixels.Length; i++)
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_006c:
	{
		// for (int i = 0; i < _pixels.Length; i++)
		int32_t L_25 = V_1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_26 = ____pixels0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))))
		{
			goto IL_000c;
		}
	}
	{
		// averageColor /= _pixels.Length;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27 = V_0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_28 = ____pixels0;
		NullCheck(L_28);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_29;
		L_29 = Color_op_Division_m3C9BBA6FEC1CBB84B0536599BA974AA963FAE094(L_27, ((float)((float)((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))), /*hidden argument*/NULL);
		V_0 = L_29;
		// return averageColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30 = V_0;
		return L_30;
	}
}
// UnityEngine.Color TextureUtility::BlendColors(UnityEngine.Color,UnityEngine.Color,TextureUtility/BlendMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  TextureUtility_BlendColors_m8F93EFCB84AA0825A5982642A28D9B61D26CC3C4 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____color10, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____color21, int32_t ____blendMode2, const RuntimeMethod* method)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color result = _color1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ____color10;
		V_0 = L_0;
		int32_t L_1 = ____blendMode2;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_0030;
			}
			case 3:
			{
				goto IL_003a;
			}
			case 4:
			{
				goto IL_0044;
			}
			case 5:
			{
				goto IL_008a;
			}
		}
	}
	{
		goto IL_0097;
	}

IL_0022:
	{
		// result = _color2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ____color21;
		V_0 = L_2;
		// break;
		goto IL_0097;
	}

IL_0026:
	{
		// result += _color2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ____color21;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = Color_op_Addition_m791A7C77B17D4A49301A7D275E8E4D8B117415A8(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// break;
		goto IL_0097;
	}

IL_0030:
	{
		// result -= _color2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = ____color21;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = Color_op_Subtraction_m1D412109F3F9264B0A4F1106D2FEB8A2746B3A0F(L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// break;
		goto IL_0097;
	}

IL_003a:
	{
		// result *= _color2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10 = ____color21;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = Color_op_Multiply_mFD03CB228034C2D37F326B7AFF27C861E95447B7(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// break;
		goto IL_0097;
	}

IL_0044:
	{
		// result.r /= _color2.r;
		float* L_12 = (&V_0)->get_address_of_r_0();
		float* L_13 = L_12;
		float L_14 = *((float*)L_13);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15 = ____color21;
		float L_16 = L_15.get_r_0();
		*((float*)L_13) = (float)((float)((float)L_14/(float)L_16));
		// result.g /= _color2.g;
		float* L_17 = (&V_0)->get_address_of_g_1();
		float* L_18 = L_17;
		float L_19 = *((float*)L_18);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20 = ____color21;
		float L_21 = L_20.get_g_1();
		*((float*)L_18) = (float)((float)((float)L_19/(float)L_21));
		// result.b /= _color2.b;
		float* L_22 = (&V_0)->get_address_of_b_2();
		float* L_23 = L_22;
		float L_24 = *((float*)L_23);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25 = ____color21;
		float L_26 = L_25.get_b_2();
		*((float*)L_23) = (float)((float)((float)L_24/(float)L_26));
		// result.a /= _color2.a;
		float* L_27 = (&V_0)->get_address_of_a_3();
		float* L_28 = L_27;
		float L_29 = *((float*)L_28);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30 = ____color21;
		float L_31 = L_30.get_a_3();
		*((float*)L_28) = (float)((float)((float)L_29/(float)L_31));
		// break;
		goto IL_0097;
	}

IL_008a:
	{
		// result.a = _color2.a;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32 = ____color21;
		float L_33 = L_32.get_a_3();
		(&V_0)->set_a_3(L_33);
	}

IL_0097:
	{
		// return result;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_34 = V_0;
		return L_34;
	}
}
// UnityEngine.Vector4 TextureUtility::ColorToHSBA(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  TextureUtility_ColorToHSBA_m22688DE3E900874074848CA544A95B55967936FC (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____color0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * G_B4_0 = NULL;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * G_B5_1 = NULL;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * G_B13_0 = NULL;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * G_B12_0 = NULL;
	float G_B14_0 = 0.0f;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * G_B14_1 = NULL;
	{
		// float minValue = Mathf.Min(_color.r, Mathf.Min(_color.g, _color.b));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ____color0;
		float L_1 = L_0.get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ____color0;
		float L_3 = L_2.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ____color0;
		float L_5 = L_4.get_b_2();
		float L_6;
		L_6 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_3, L_5, /*hidden argument*/NULL);
		float L_7;
		L_7 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_1, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// float maxValue = Mathf.Max(_color.r, Mathf.Max(_color.g, _color.b));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = ____color0;
		float L_9 = L_8.get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10 = ____color0;
		float L_11 = L_10.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = ____color0;
		float L_13 = L_12.get_b_2();
		float L_14;
		L_14 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_11, L_13, /*hidden argument*/NULL);
		float L_15;
		L_15 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_9, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		// float delta = maxValue - minValue;
		float L_16 = V_1;
		float L_17 = V_0;
		V_2 = ((float)il2cpp_codegen_subtract((float)L_16, (float)L_17));
		// Vector4 result = new Vector4 (0, 0, maxValue, _color.a);
		float L_18 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19 = ____color0;
		float L_20 = L_19.get_a_3();
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&V_3), (0.0f), (0.0f), L_18, L_20, /*hidden argument*/NULL);
		// if (maxValue == _color.r)
		float L_21 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22 = ____color0;
		float L_23 = L_22.get_r_0();
		if ((!(((float)L_21) == ((float)L_23))))
		{
			goto IL_00cf;
		}
	}
	{
		// if (_color.g >= _color.b)
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24 = ____color0;
		float L_25 = L_24.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26 = ____color0;
		float L_27 = L_26.get_b_2();
		if ((!(((float)L_25) >= ((float)L_27))))
		{
			goto IL_009d;
		}
	}
	{
		// result.x = (delta == 0) ? 0 : 60.0f * (_color.g - _color.b) / delta;
		float L_28 = V_2;
		G_B3_0 = (&V_3);
		if ((((float)L_28) == ((float)(0.0f))))
		{
			G_B4_0 = (&V_3);
			goto IL_008e;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_29 = ____color0;
		float L_30 = L_29.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31 = ____color0;
		float L_32 = L_31.get_b_2();
		float L_33 = V_2;
		G_B5_0 = ((float)((float)((float)il2cpp_codegen_multiply((float)(60.0f), (float)((float)il2cpp_codegen_subtract((float)L_30, (float)L_32))))/(float)L_33));
		G_B5_1 = G_B3_0;
		goto IL_0093;
	}

IL_008e:
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B4_0;
	}

IL_0093:
	{
		G_B5_1->set_x_1(G_B5_0);
		goto IL_011e;
	}

IL_009d:
	{
		// if (_color.g < _color.b)
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_34 = ____color0;
		float L_35 = L_34.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_36 = ____color0;
		float L_37 = L_36.get_b_2();
		if ((!(((float)L_35) < ((float)L_37))))
		{
			goto IL_011e;
		}
	}
	{
		// result.x = 60.0f * (_color.g - _color.b) / delta + 360;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_38 = ____color0;
		float L_39 = L_38.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_40 = ____color0;
		float L_41 = L_40.get_b_2();
		float L_42 = V_2;
		(&V_3)->set_x_1(((float)il2cpp_codegen_add((float)((float)((float)((float)il2cpp_codegen_multiply((float)(60.0f), (float)((float)il2cpp_codegen_subtract((float)L_39, (float)L_41))))/(float)L_42)), (float)(360.0f))));
		// }
		goto IL_011e;
	}

IL_00cf:
	{
		// if (maxValue == _color.g)
		float L_43 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_44 = ____color0;
		float L_45 = L_44.get_g_1();
		if ((!(((float)L_43) == ((float)L_45))))
		{
			goto IL_00fc;
		}
	}
	{
		// result.x = 60.0f * (_color.b - _color.r) / delta + 120;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_46 = ____color0;
		float L_47 = L_46.get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_48 = ____color0;
		float L_49 = L_48.get_r_0();
		float L_50 = V_2;
		(&V_3)->set_x_1(((float)il2cpp_codegen_add((float)((float)((float)((float)il2cpp_codegen_multiply((float)(60.0f), (float)((float)il2cpp_codegen_subtract((float)L_47, (float)L_49))))/(float)L_50)), (float)(120.0f))));
		goto IL_011e;
	}

IL_00fc:
	{
		// result.x = 60.0f * (_color.r - _color.g) / delta + 240;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_51 = ____color0;
		float L_52 = L_51.get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_53 = ____color0;
		float L_54 = L_53.get_g_1();
		float L_55 = V_2;
		(&V_3)->set_x_1(((float)il2cpp_codegen_add((float)((float)((float)((float)il2cpp_codegen_multiply((float)(60.0f), (float)((float)il2cpp_codegen_subtract((float)L_52, (float)L_54))))/(float)L_55)), (float)(240.0f))));
	}

IL_011e:
	{
		// result.x /= 360;
		float* L_56 = (&V_3)->get_address_of_x_1();
		float* L_57 = L_56;
		float L_58 = *((float*)L_57);
		*((float*)L_57) = (float)((float)((float)L_58/(float)(360.0f)));
		// result.y = (maxValue == 0)  ?  0  :  1.0f - (minValue / maxValue);
		float L_59 = V_1;
		G_B12_0 = (&V_3);
		if ((((float)L_59) == ((float)(0.0f))))
		{
			G_B13_0 = (&V_3);
			goto IL_0143;
		}
	}
	{
		float L_60 = V_0;
		float L_61 = V_1;
		G_B14_0 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)((float)L_60/(float)L_61))));
		G_B14_1 = G_B12_0;
		goto IL_0148;
	}

IL_0143:
	{
		G_B14_0 = (0.0f);
		G_B14_1 = G_B13_0;
	}

IL_0148:
	{
		G_B14_1->set_y_2(G_B14_0);
		// return result;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_62 = V_3;
		return L_62;
	}
}
// UnityEngine.Color TextureUtility::HSBAtoColor(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  TextureUtility_HSBAtoColor_mF18F62B4E77A743CFB2841C6B500EFCEE8675E2C (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___hsba0, const RuntimeMethod* method)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// Color result = new Color(hsba.z, hsba.z, hsba.z, hsba.w);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___hsba0;
		float L_1 = L_0.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = ___hsba0;
		float L_3 = L_2.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___hsba0;
		float L_5 = L_4.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6 = ___hsba0;
		float L_7 = L_6.get_w_4();
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_0), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		// if(hsba.y > 0)
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8 = ___hsba0;
		float L_9 = L_8.get_y_2();
		if ((!(((float)L_9) > ((float)(0.0f)))))
		{
			goto IL_0140;
		}
	}
	{
		// float secPos = (hsba.x * 360.0f) / 60.0f;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_10 = ___hsba0;
		float L_11 = L_10.get_x_1();
		// int secNr = Mathf.FloorToInt(secPos);
		float L_12 = ((float)((float)((float)il2cpp_codegen_multiply((float)L_11, (float)(360.0f)))/(float)(60.0f)));
		int32_t L_13;
		L_13 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		// float secPortion = secPos - secNr;
		int32_t L_14 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract((float)L_12, (float)((float)((float)L_14))));
		// float p = hsba.z * (1.0f - hsba.y);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_15 = ___hsba0;
		float L_16 = L_15.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_17 = ___hsba0;
		float L_18 = L_17.get_y_2();
		V_3 = ((float)il2cpp_codegen_multiply((float)L_16, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_18))));
		// float q = hsba.z * (1.0f - (hsba.y * secPortion));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_19 = ___hsba0;
		float L_20 = L_19.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_21 = ___hsba0;
		float L_22 = L_21.get_y_2();
		float L_23 = V_2;
		V_4 = ((float)il2cpp_codegen_multiply((float)L_20, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)L_22, (float)L_23))))));
		// float t = hsba.z * (1.0f - (hsba.y * (1.0f - secPortion)));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_24 = ___hsba0;
		float L_25 = L_24.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_26 = ___hsba0;
		float L_27 = L_26.get_y_2();
		float L_28 = V_2;
		V_5 = ((float)il2cpp_codegen_multiply((float)L_25, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)L_27, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_28))))))));
		int32_t L_29 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00b2;
			}
			case 1:
			{
				goto IL_00ca;
			}
			case 2:
			{
				goto IL_00e2;
			}
			case 3:
			{
				goto IL_00fa;
			}
			case 4:
			{
				goto IL_0112;
			}
		}
	}
	{
		goto IL_012a;
	}

IL_00b2:
	{
		// result = new Color(q, hsba.z, p, hsba.w);
		float L_30 = V_4;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_31 = ___hsba0;
		float L_32 = L_31.get_z_3();
		float L_33 = V_3;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_34 = ___hsba0;
		float L_35 = L_34.get_w_4();
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_0), L_30, L_32, L_33, L_35, /*hidden argument*/NULL);
		// break;
		goto IL_0140;
	}

IL_00ca:
	{
		// result = new Color(p, hsba.z, t, hsba.w);
		float L_36 = V_3;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_37 = ___hsba0;
		float L_38 = L_37.get_z_3();
		float L_39 = V_5;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_40 = ___hsba0;
		float L_41 = L_40.get_w_4();
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_0), L_36, L_38, L_39, L_41, /*hidden argument*/NULL);
		// break;
		goto IL_0140;
	}

IL_00e2:
	{
		// result = new Color(p, q, hsba.z, hsba.w);
		float L_42 = V_3;
		float L_43 = V_4;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_44 = ___hsba0;
		float L_45 = L_44.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_46 = ___hsba0;
		float L_47 = L_46.get_w_4();
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_0), L_42, L_43, L_45, L_47, /*hidden argument*/NULL);
		// break;
		goto IL_0140;
	}

IL_00fa:
	{
		// result = new Color(t, p, hsba.z, hsba.w);
		float L_48 = V_5;
		float L_49 = V_3;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_50 = ___hsba0;
		float L_51 = L_50.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_52 = ___hsba0;
		float L_53 = L_52.get_w_4();
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_0), L_48, L_49, L_51, L_53, /*hidden argument*/NULL);
		// break;
		goto IL_0140;
	}

IL_0112:
	{
		// result = new Color(hsba.z, p, q, hsba.w);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_54 = ___hsba0;
		float L_55 = L_54.get_z_3();
		float L_56 = V_3;
		float L_57 = V_4;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_58 = ___hsba0;
		float L_59 = L_58.get_w_4();
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_0), L_55, L_56, L_57, L_59, /*hidden argument*/NULL);
		// break;
		goto IL_0140;
	}

IL_012a:
	{
		// result = new Color(hsba.z, t, p, hsba.w);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_60 = ___hsba0;
		float L_61 = L_60.get_z_3();
		float L_62 = V_5;
		float L_63 = V_3;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_64 = ___hsba0;
		float L_65 = L_64.get_w_4();
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_0), L_61, L_62, L_63, L_65, /*hidden argument*/NULL);
	}

IL_0140:
	{
		// return result;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_66 = V_0;
		return L_66;
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
// System.Void ChoosePuzzleFromList/Puzzles::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Puzzles__ctor_m12184FE7C722F89D06779705A490ED5ED6DA0316 (Puzzles_tCD280D53A2110743E29742FE7496775B6E3DDC90 * __this, const RuntimeMethod* method)
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
// System.Void LoadGeneratedPuzzles/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m10BC775D923C123899D0C9BE89C2735116A7832F (U3CU3Ec__DisplayClass9_0_tB95B5A64166E765A9F8CD0E8B5F590DBD214C12A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LoadGeneratedPuzzles/<>c__DisplayClass9_0::<GenerateButton>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CGenerateButtonU3Eb__0_mBE259B48AEE4B21667A44258A0D06B9CF487946D (U3CU3Ec__DisplayClass9_0_tB95B5A64166E765A9F8CD0E8B5F590DBD214C12A * __this, const RuntimeMethod* method)
{
	{
		// button.onClick.AddListener(() => LoadGenerated(button.name));
		LoadGeneratedPuzzles_t6B6700CAFB1128C3BF7E5DB61F43EAFDCA6C7CB8 * L_0 = __this->get_U3CU3E4__this_0();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = __this->get_button_1();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		LoadGeneratedPuzzles_LoadGenerated_mF96E558DCA1FC29CE6C35C6D4863AF4D9BBD08DC(L_0, L_2, /*hidden argument*/NULL);
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
// System.Void PuzzleGenerator_Runtime/<LoadTextureFromWeb>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadTextureFromWebU3Ed__31__ctor_m0B1889BDA2F0C7E9677EDDFAD43097A68BA86B19 (U3CLoadTextureFromWebU3Ed__31_t55E8C42EA82904AE5DB8ACADC968CCA1E2C9A64A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PuzzleGenerator_Runtime/<LoadTextureFromWeb>d__31::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadTextureFromWebU3Ed__31_System_IDisposable_Dispose_mC76357BD4FF7666BFF7CE6D84A24137517BF27D0 (U3CLoadTextureFromWebU3Ed__31_t55E8C42EA82904AE5DB8ACADC968CCA1E2C9A64A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PuzzleGenerator_Runtime/<LoadTextureFromWeb>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadTextureFromWebU3Ed__31_MoveNext_m64EB12BD2220310920DA49D1674DAD0515685BC6 (U3CLoadTextureFromWebU3Ed__31_t55E8C42EA82904AE5DB8ACADC968CCA1E2C9A64A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerTexture_tA2708E80049AA58E9B0DBE9F5325CC9A1B487142_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53FBB52F0B65C7EC02331E9C7EEB9163B09372B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6995C8C5113D4496BCC8502AEF468B092E80791);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// UnityWebRequest www = UnityWebRequestTexture.GetTexture(path);
		PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_path_29();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6;
		L_6 = UnityWebRequestTexture_GetTexture_mAC8E7F560F2A5ED2B3DA19211968311DD6D56F37(L_5, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_3(L_6);
		// yield return www.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_7);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_8;
		L_8 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_7, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0049:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (www.isNetworkError || www.isHttpError)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_9);
		bool L_10;
		L_10 = UnityWebRequest_get_isNetworkError_m0126D38DA9B39159CB12F8DE0C3962A4BEEE5C03(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_006a;
		}
	}
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_11);
		bool L_12;
		L_12 = UnityWebRequest_get_isHttpError_m23ADCBE1CF082A940EF6AA75A15051583228B616(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00a7;
		}
	}

IL_006a:
	{
		// Debug.LogWarning("Probably this is wrong external source: " + path);
		PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14 = L_13->get_path_29();
		String_t* L_15;
		L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE6995C8C5113D4496BCC8502AEF468B092E80791, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_15, /*hidden argument*/NULL);
		// Debug.Log("DON'T FORGET: the path should starts from 'http://'(for online image) or from 'file://'(for local)");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral53FBB52F0B65C7EC02331E9C7EEB9163B09372B5, /*hidden argument*/NULL);
		// Debug.Log(www.error);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_16 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_16);
		String_t* L_17;
		L_17 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_16, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_17, /*hidden argument*/NULL);
		// StopCoroutine(LoadTextureFromWeb());
		PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * L_18 = V_1;
		PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * L_19 = V_1;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = PuzzleGenerator_Runtime_LoadTextureFromWeb_m5A09E77DEF5489A84A6C94B59F3E817B57CB7007(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B(L_18, L_20, /*hidden argument*/NULL);
		// }
		goto IL_011d;
	}

IL_00a7:
	{
		// image = ((DownloadHandlerTexture)www.downloadHandler).texture;
		PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * L_21 = V_1;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_22 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_22);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_23;
		L_23 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_22, /*hidden argument*/NULL);
		NullCheck(((DownloadHandlerTexture_tA2708E80049AA58E9B0DBE9F5325CC9A1B487142 *)CastclassSealed((RuntimeObject*)L_23, DownloadHandlerTexture_tA2708E80049AA58E9B0DBE9F5325CC9A1B487142_il2cpp_TypeInfo_var)));
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_24;
		L_24 = DownloadHandlerTexture_get_texture_m4A85047C91C2C15472D34043E1440845C87B709A(((DownloadHandlerTexture_tA2708E80049AA58E9B0DBE9F5325CC9A1B487142 *)CastclassSealed((RuntimeObject*)L_23, DownloadHandlerTexture_tA2708E80049AA58E9B0DBE9F5325CC9A1B487142_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->set_image_30(L_24);
		// if (imageScale != 1)
		PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * L_25 = V_1;
		NullCheck(L_25);
		float L_26 = L_25->get_imageScale_10();
		if ((((float)L_26) == ((float)(1.0f))))
		{
			goto IL_0110;
		}
	}
	{
		// image = TextureUtility.Scale(image, Mathf.RoundToInt(image.width * imageScale), Mathf.RoundToInt(image.height * imageScale));
		PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * L_27 = V_1;
		PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * L_28 = V_1;
		NullCheck(L_28);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_29 = L_28->get_image_30();
		PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * L_30 = V_1;
		NullCheck(L_30);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_31 = L_30->get_image_30();
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_31);
		PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * L_33 = V_1;
		NullCheck(L_33);
		float L_34 = L_33->get_imageScale_10();
		int32_t L_35;
		L_35 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_32)), (float)L_34)), /*hidden argument*/NULL);
		PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * L_36 = V_1;
		NullCheck(L_36);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_37 = L_36->get_image_30();
		NullCheck(L_37);
		int32_t L_38;
		L_38 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_37);
		PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * L_39 = V_1;
		NullCheck(L_39);
		float L_40 = L_39->get_imageScale_10();
		int32_t L_41;
		L_41 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_38)), (float)L_40)), /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_42;
		L_42 = TextureUtility_Scale_m818F04ED1B4C5DB9C62EBE68B3D11264C709A3C4(L_29, L_35, L_41, /*hidden argument*/NULL);
		NullCheck(L_27);
		L_27->set_image_30(L_42);
	}

IL_0110:
	{
		// CreatePuzzleFromImage(image);
		PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * L_43 = V_1;
		PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * L_44 = V_1;
		NullCheck(L_44);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_45 = L_44->get_image_30();
		NullCheck(L_43);
		PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364 * L_46;
		L_46 = PuzzleGenerator_Runtime_CreatePuzzleFromImage_m04EA66F98C1D5EEE98B72D8C2FDE870B798499D4(L_43, L_45, /*hidden argument*/NULL);
	}

IL_011d:
	{
		// }
		return (bool)0;
	}
}
// System.Object PuzzleGenerator_Runtime/<LoadTextureFromWeb>d__31::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadTextureFromWebU3Ed__31_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5B462ADFAC712C99603901B186B7BFFCE66F9A74 (U3CLoadTextureFromWebU3Ed__31_t55E8C42EA82904AE5DB8ACADC968CCA1E2C9A64A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PuzzleGenerator_Runtime/<LoadTextureFromWeb>d__31::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadTextureFromWebU3Ed__31_System_Collections_IEnumerator_Reset_m9ACEF633EF118089CA31A705CD2F304DF48A78C2 (U3CLoadTextureFromWebU3Ed__31_t55E8C42EA82904AE5DB8ACADC968CCA1E2C9A64A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadTextureFromWebU3Ed__31_System_Collections_IEnumerator_Reset_m9ACEF633EF118089CA31A705CD2F304DF48A78C2_RuntimeMethod_var)));
	}
}
// System.Object PuzzleGenerator_Runtime/<LoadTextureFromWeb>d__31::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadTextureFromWebU3Ed__31_System_Collections_IEnumerator_get_Current_m45E05602D47496EF87FFD8C8AF0ABF7B2C823EEB (U3CLoadTextureFromWebU3Ed__31_t55E8C42EA82904AE5DB8ACADC968CCA1E2C9A64A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void PuzzlePiece/<Move>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__10__ctor_m5998399D62D5103777CD38A3301143E967D63403 (U3CMoveU3Ed__10_tB03E83A1D88022CCB51F44761F329B27B36D0AAD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PuzzlePiece/<Move>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__10_System_IDisposable_Dispose_mE3C1E0A92402645B151993D9FC4953D7C7182342 (U3CMoveU3Ed__10_tB03E83A1D88022CCB51F44761F329B27B36D0AAD * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PuzzlePiece/<Move>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveU3Ed__10_MoveNext_m52CB5E5F54F725751BF08E3B0AC78CF68ED29CBC (U3CMoveU3Ed__10_tB03E83A1D88022CCB51F44761F329B27B36D0AAD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00c6;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// targetPosition = _targetPosition;
		PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * L_4 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get__targetPosition_3();
		NullCheck(L_4);
		L_4->set_targetPosition_3(L_5);
		// float movementTime = _movementTime;
		float L_6 = __this->get__movementTime_4();
		__this->set_U3CmovementTimeU3E5__2_6(L_6);
		// bool useLocalSpace = _inLocalSpace;
		bool L_7 = __this->get__inLocalSpace_5();
		__this->set_U3CuseLocalSpaceU3E5__3_7(L_7);
		// Vector3 velocity = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_U3CvelocityU3E5__4_8(L_8);
		goto IL_00cd;
	}

IL_0052:
	{
		// if (useLocalSpace)
		bool L_9 = __this->get_U3CuseLocalSpaceU3E5__3_7();
		if (!L_9)
		{
			goto IL_0089;
		}
	}
	{
		// transform.localPosition = Vector3.SmoothDamp(transform.localPosition, targetPosition, ref velocity, movementTime);
		PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * L_10 = V_1;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = L_10->get_transform_0();
		PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * L_12 = V_1;
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = L_12->get_transform_0();
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_13, /*hidden argument*/NULL);
		PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * L_15 = V_1;
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = L_15->get_targetPosition_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_17 = __this->get_address_of_U3CvelocityU3E5__4_8();
		float L_18 = __this->get_U3CmovementTimeU3E5__2_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627(L_14, L_16, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_11, L_19, /*hidden argument*/NULL);
		goto IL_00b6;
	}

IL_0089:
	{
		// transform.position = Vector3.SmoothDamp(transform.position, targetPosition, ref velocity, movementTime);
		PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * L_20 = V_1;
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = L_20->get_transform_0();
		PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * L_22 = V_1;
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23 = L_22->get_transform_0();
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * L_25 = V_1;
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = L_25->get_targetPosition_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_27 = __this->get_address_of_U3CvelocityU3E5__4_8();
		float L_28 = __this->get_U3CmovementTimeU3E5__2_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627(L_24, L_26, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_21, L_29, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00c6:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00cd:
	{
		// while ( ((useLocalSpace ? transform.localPosition : transform.position) - targetPosition).sqrMagnitude > 0.01f)
		bool L_30 = __this->get_U3CuseLocalSpaceU3E5__3_7();
		if (L_30)
		{
			goto IL_00e2;
		}
	}
	{
		PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * L_31 = V_1;
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32 = L_31->get_transform_0();
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		G_B12_0 = L_33;
		goto IL_00ed;
	}

IL_00e2:
	{
		PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * L_34 = V_1;
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35 = L_34->get_transform_0();
		NullCheck(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_35, /*hidden argument*/NULL);
		G_B12_0 = L_36;
	}

IL_00ed:
	{
		PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * L_37 = V_1;
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = L_37->get_targetPosition_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(G_B12_0, L_38, /*hidden argument*/NULL);
		V_2 = L_39;
		float L_40;
		L_40 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		if ((((float)L_40) > ((float)(0.00999999978f))))
		{
			goto IL_0052;
		}
	}
	{
		// if (useLocalSpace)
		bool L_41 = __this->get_U3CuseLocalSpaceU3E5__3_7();
		if (!L_41)
		{
			goto IL_0125;
		}
	}
	{
		// transform.localPosition = targetPosition;
		PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * L_42 = V_1;
		NullCheck(L_42);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43 = L_42->get_transform_0();
		PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * L_44 = V_1;
		NullCheck(L_44);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = L_44->get_targetPosition_3();
		NullCheck(L_43);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_43, L_45, /*hidden argument*/NULL);
		goto IL_0136;
	}

IL_0125:
	{
		// transform.position = targetPosition;
		PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * L_46 = V_1;
		NullCheck(L_46);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47 = L_46->get_transform_0();
		PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * L_48 = V_1;
		NullCheck(L_48);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49 = L_48->get_targetPosition_3();
		NullCheck(L_47);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_47, L_49, /*hidden argument*/NULL);
	}

IL_0136:
	{
		// if (targetPosition == startPosition)
		PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * L_50 = V_1;
		NullCheck(L_50);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51 = L_50->get_targetPosition_3();
		PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * L_52 = V_1;
		NullCheck(L_52);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53 = L_52->get_startPosition_1();
		bool L_54;
		L_54 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_51, L_53, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_014f;
		}
	}
	{
		// Assemble();
		PuzzlePiece_tE48F99699187D7049C9E31D20D805629E840644B * L_55 = V_1;
		NullCheck(L_55);
		PuzzlePiece_Assemble_m047A4E9F676F7DF265079D173F3BFF0ECF577455(L_55, /*hidden argument*/NULL);
	}

IL_014f:
	{
		// }
		return (bool)0;
	}
}
// System.Object PuzzlePiece/<Move>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0D2B0501FDA2B8658E3359F9C879566A16055DE0 (U3CMoveU3Ed__10_tB03E83A1D88022CCB51F44761F329B27B36D0AAD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PuzzlePiece/<Move>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__10_System_Collections_IEnumerator_Reset_m2A4CDA308C71B6BA1DB2919B7050CF133BA6DDA2 (U3CMoveU3Ed__10_tB03E83A1D88022CCB51F44761F329B27B36D0AAD * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveU3Ed__10_System_Collections_IEnumerator_Reset_m2A4CDA308C71B6BA1DB2919B7050CF133BA6DDA2_RuntimeMethod_var)));
	}
}
// System.Object PuzzlePiece/<Move>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveU3Ed__10_System_Collections_IEnumerator_get_Current_mA2690812A6DC8EF65DF0B09C09DA80A0EB47B55A (U3CMoveU3Ed__10_tB03E83A1D88022CCB51F44761F329B27B36D0AAD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void RuntimeGeneration/<StartPuzzleWhenReady>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartPuzzleWhenReadyU3Ed__10__ctor_m279E227C856664B68FD095F80383B64DB6E9082A (U3CStartPuzzleWhenReadyU3Ed__10_t715B312027DAFEC1FB4195CDBA10BD948C7E82C8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void RuntimeGeneration/<StartPuzzleWhenReady>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartPuzzleWhenReadyU3Ed__10_System_IDisposable_Dispose_m2E2EC5A11029D21A88492939E883FEBDCF83246D (U3CStartPuzzleWhenReadyU3Ed__10_t715B312027DAFEC1FB4195CDBA10BD948C7E82C8 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean RuntimeGeneration/<StartPuzzleWhenReady>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartPuzzleWhenReadyU3Ed__10_MoveNext_m63FDEBBCD45C2A1360D454EB5B59D06EE942A883 (U3CStartPuzzleWhenReadyU3Ed__10_t715B312027DAFEC1FB4195CDBA10BD948C7E82C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeGeneration_U3CStartPuzzleWhenReadyU3Eb__10_0_m5F859CF8736C1745E5C4E622510AC4FC29496D39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral737FC34A3ED8CDEF2A569A220D9DDC3D364C8176);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0037;
	}

IL_0020:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0037:
	{
		// while (puzzleGenerator.puzzle == null)
		RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * L_4 = V_1;
		NullCheck(L_4);
		PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * L_5 = L_4->get_puzzleGenerator_8();
		NullCheck(L_5);
		PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364 * L_6 = L_5->get_puzzle_32();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0020;
		}
	}
	{
		// if (clearOldSaves)
		RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = L_8->get_clearOldSaves_6();
		if (!L_9)
		{
			goto IL_0086;
		}
	}
	{
		// PlayerPrefs.DeleteKey(puzzleGenerator.puzzle.name);
		RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * L_10 = V_1;
		NullCheck(L_10);
		PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * L_11 = L_10->get_puzzleGenerator_8();
		NullCheck(L_11);
		PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364 * L_12 = L_11->get_puzzle_32();
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_12, /*hidden argument*/NULL);
		PlayerPrefs_DeleteKey_mCEF6CE08D7D7670AD4072228E261A7E746030554(L_13, /*hidden argument*/NULL);
		// PlayerPrefs.DeleteKey(puzzleGenerator.puzzle.name + "_Positions");
		RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * L_14 = V_1;
		NullCheck(L_14);
		PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * L_15 = L_14->get_puzzleGenerator_8();
		NullCheck(L_15);
		PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364 * L_16 = L_15->get_puzzle_32();
		NullCheck(L_16);
		String_t* L_17;
		L_17 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_16, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_17, _stringLiteral737FC34A3ED8CDEF2A569A220D9DDC3D364C8176, /*hidden argument*/NULL);
		PlayerPrefs_DeleteKey_mCEF6CE08D7D7670AD4072228E261A7E746030554(L_18, /*hidden argument*/NULL);
	}

IL_0086:
	{
		// gameController.puzzle = puzzleGenerator.puzzle;
		RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * L_19 = V_1;
		NullCheck(L_19);
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_20 = L_19->get_gameController_9();
		RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * L_21 = V_1;
		NullCheck(L_21);
		PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * L_22 = L_21->get_puzzleGenerator_8();
		NullCheck(L_22);
		PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364 * L_23 = L_22->get_puzzle_32();
		NullCheck(L_20);
		L_20->set_puzzle_5(L_23);
		// if (generateBackground)
		RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * L_24 = V_1;
		NullCheck(L_24);
		bool L_25 = L_24->get_generateBackground_5();
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		// gameController.background = puzzleGenerator.puzzle.GenerateBackground(puzzleGenerator.GetSourceImage(), true, (puzzleGenerator.anchoring == PuzzleAnchor.Center));
		RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * L_26 = V_1;
		NullCheck(L_26);
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_27 = L_26->get_gameController_9();
		RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * L_28 = V_1;
		NullCheck(L_28);
		PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * L_29 = L_28->get_puzzleGenerator_8();
		NullCheck(L_29);
		PuzzleController_t7F526755FD126BB6639D1AEA93F783DC96E74364 * L_30 = L_29->get_puzzle_32();
		RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * L_31 = V_1;
		NullCheck(L_31);
		PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * L_32 = L_31->get_puzzleGenerator_8();
		NullCheck(L_32);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_33;
		L_33 = PuzzleGenerator_Runtime_GetSourceImage_mEC2B8ED8C1BBA69A300B70BB82CA54F0E066A4AC_inline(L_32, /*hidden argument*/NULL);
		RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * L_34 = V_1;
		NullCheck(L_34);
		PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * L_35 = L_34->get_puzzleGenerator_8();
		NullCheck(L_35);
		int32_t L_36 = L_35->get_anchoring_9();
		NullCheck(L_30);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_37;
		L_37 = PuzzleController_GenerateBackground_m0EC2C93A61065A1A358CEC13653DD2D44465623B(L_30, L_33, (bool)1, (bool)((((int32_t)L_36) == ((int32_t)1))? 1 : 0), /*hidden argument*/NULL);
		NullCheck(L_27);
		L_27->set_background_9(L_37);
	}

IL_00d9:
	{
		// gameController.enabled = true;
		RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * L_38 = V_1;
		NullCheck(L_38);
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_39 = L_38->get_gameController_9();
		NullCheck(L_39);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_39, (bool)1, /*hidden argument*/NULL);
		// if (shuffleButton)
		RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * L_40 = V_1;
		NullCheck(L_40);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_41 = L_40->get_shuffleButton_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0113;
		}
	}
	{
		// shuffleButton.GetComponent<Button>().onClick.AddListener(delegate { puzzleGenerator.puzzle.ShufflePuzzle(); });
		RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * L_43 = V_1;
		NullCheck(L_43);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_44 = L_43->get_shuffleButton_12();
		NullCheck(L_44);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_45;
		L_45 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(L_44, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		NullCheck(L_45);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_46;
		L_46 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_45, /*hidden argument*/NULL);
		RuntimeGeneration_t01708D918A694084A565E7B32AD367767D4AD8CA * L_47 = V_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_48 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_48, L_47, (intptr_t)((intptr_t)RuntimeGeneration_U3CStartPuzzleWhenReadyU3Eb__10_0_m5F859CF8736C1745E5C4E622510AC4FC29496D39_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_46);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_46, L_48, /*hidden argument*/NULL);
	}

IL_0113:
	{
		// }
		return (bool)0;
	}
}
// System.Object RuntimeGeneration/<StartPuzzleWhenReady>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartPuzzleWhenReadyU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDA39FF789F9F8017D4666F8DFDA7F474F9594A5C (U3CStartPuzzleWhenReadyU3Ed__10_t715B312027DAFEC1FB4195CDBA10BD948C7E82C8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void RuntimeGeneration/<StartPuzzleWhenReady>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartPuzzleWhenReadyU3Ed__10_System_Collections_IEnumerator_Reset_m0FCD3381F61FEE0A6FEEB90A17D0425962583068 (U3CStartPuzzleWhenReadyU3Ed__10_t715B312027DAFEC1FB4195CDBA10BD948C7E82C8 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartPuzzleWhenReadyU3Ed__10_System_Collections_IEnumerator_Reset_m0FCD3381F61FEE0A6FEEB90A17D0425962583068_RuntimeMethod_var)));
	}
}
// System.Object RuntimeGeneration/<StartPuzzleWhenReady>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartPuzzleWhenReadyU3Ed__10_System_Collections_IEnumerator_get_Current_mE0711993ACB1415E969B22BFEE909B9030CEA3D5 (U3CStartPuzzleWhenReadyU3Ed__10_t715B312027DAFEC1FB4195CDBA10BD948C7E82C8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void SimpleDialog/DialogMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogMessage__ctor_mD45C498E2060A9D753D910C4EC591525A0BE01A8 (DialogMessage_t456F69FF439AD07903860DA1F97EF878F17DDF16 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * PuzzleGenerator_Runtime_GetSourceImage_mEC2B8ED8C1BBA69A300B70BB82CA54F0E066A4AC_inline (PuzzleGenerator_Runtime_tE86007CC205A9F9C923A0C3D5FADD071C8EF0A20 * __this, const RuntimeMethod* method)
{
	{
		// return image;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = __this->get_image_30();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
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
