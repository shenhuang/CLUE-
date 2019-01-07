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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// DataFetcher
struct DataFetcher_t164261030;
// DataFetcherParameters
struct DataFetcherParameters_t4072360282;
// Mapbox.Directions.Directions
struct Directions_t1397515081;
// Mapbox.Geocoding.Geocoder
struct Geocoder_t3195298050;
// Mapbox.Map.Tile
struct Tile_t1097901272;
// Mapbox.Map.TileErrorEventArgs
struct TileErrorEventArgs_t942940053;
// Mapbox.Map.VectorTile
struct VectorTile_t4284514353;
// Mapbox.MapMatching.MapMatcher
struct MapMatcher_t3570695288;
// Mapbox.Platform.Cache.CachingWebFileSource
struct CachingWebFileSource_t328893056;
// Mapbox.Platform.IAsyncRequest
struct IAsyncRequest_t3870285476;
// Mapbox.Platform.IFileSource
struct IFileSource_t3859839141;
// Mapbox.Platform.TilesetTileJSON.TileJSON
struct TileJSON_t3258390358;
// Mapbox.Tokens.MapboxTokenApi
struct MapboxTokenApi_t1223975188;
// Mapbox.Unity.Map.Style
struct Style_t3654124703;
// Mapbox.Unity.MapboxAccess
struct MapboxAccess_t3460807032;
// Mapbox.Unity.MapboxAccess/TokenValidationEvent
struct TokenValidationEvent_t3633566190;
// Mapbox.Unity.MapboxConfiguration
struct MapboxConfiguration_t2330578778;
// Mapbox.Unity.MeshGeneration.Data.UnityTile
struct UnityTile_t2405085845;
// Mapbox.Unity.Telemetry.ITelemetryLibrary
struct ITelemetryLibrary_t1008417135;
// Mapbox.VectorTile.VectorTile
struct VectorTile_t3467883484;
// System.Action
struct Action_t1264377477;
// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile>
struct Action_1_t2577553440;
// System.Action`1<UnityARInterface.BoundedPlane>
struct Action_1_t1099483977;
// System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile>
struct Action_2_t3936036094;
// System.Action`2<System.Object,System.Object>
struct Action_2_t2470008838;
// System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs>
struct Action_3_t1202789066;
// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_t3632554945;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t1182523073;
// System.Collections.Generic.IList`1<System.Exception>
struct IList_1_t3252057032;
// System.Collections.Generic.List`1<Mapbox.Map.Tile>
struct List_1_t2569976014;
// System.Collections.Generic.List`1<System.Exception>
struct List_1_t2908811991;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t2649313536;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Func`2<System.Exception,System.String>
struct Func_2_t905536786;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.MemoryStream
struct MemoryStream_t94973147;
// System.IO.Stream
struct Stream_t1273022909;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t3197753202;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3040401154;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t274213469;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Void
struct Void_t1185182177;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.MeshCollider
struct MeshCollider_t903564387;
// UnityEngine.MeshFilter
struct MeshFilter_t3523625662;
// UnityEngine.MeshRenderer
struct MeshRenderer_t587009260;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct PlayerConnection_t3081694049;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t2206337031;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.XR.iOS.ARFaceAnchor
struct ARFaceAnchor_t1844206636;
// UnityEngine.XR.iOS.ARFaceAnchor/DictionaryVisitorHandler
struct DictionaryVisitorHandler_t414487210;
// UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t2049372221;
// UnityEngine.XR.iOS.ARUserAnchor
struct ARUserAnchor_t1406831531;
// UnityEngine.XR.iOS.ConnectToEditor
struct ConnectToEditor_t595742893;
// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate
struct UnityARDirectionalLightEstimate_t2924556994;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t3929719369;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded
struct ARAnchorAdded_t1608557165;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved
struct ARAnchorRemoved_t4030593004;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated
struct ARAnchorUpdated_t3113222537;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded
struct ARFaceAnchorAdded_t3526051790;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved
struct ARFaceAnchorRemoved_t2550278937;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated
struct ARFaceAnchorUpdated_t3258688950;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate
struct ARFrameUpdate_t1157215840;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback
struct ARSessionCallback_t3772093212;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed
struct ARSessionFailed_t2125002991;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged
struct ARSessionTrackingChanged_t923029411;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded
struct ARUserAnchorAdded_t1851120876;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved
struct ARUserAnchorRemoved_t23344545;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated
struct ARUserAnchorUpdated_t4007601678;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded
struct internal_ARAnchorAdded_t1565083332;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved
struct internal_ARAnchorRemoved_t3371657877;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated
struct internal_ARAnchorUpdated_t2645242205;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorAdded
struct internal_ARFaceAnchorAdded_t1021040265;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorRemoved
struct internal_ARFaceAnchorRemoved_t2563439402;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorUpdated
struct internal_ARFaceAnchorUpdated_t3423900432;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate
struct internal_ARFrameUpdate_t3254989823;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged
struct internal_ARSessionTrackingChanged_t1988849735;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded
struct internal_ARUserAnchorAdded_t3285282493;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved
struct internal_ARUserAnchorRemoved_t386858594;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated
struct internal_ARUserAnchorUpdated_t3964727538;
// UnityEngine.XR.iOS.UnityARUserAnchorComponent
struct UnityARUserAnchorComponent_t969893952;
// UnityEngine.XR.iOS.UnityARUtility
struct UnityARUtility_t2509807446;
// UnityEngine.XR.iOS.UnityARVideo
struct UnityARVideo_t1146951207;
// UnityEngine.XR.iOS.UnityRemoteVideo
struct UnityRemoteVideo_t705138647;
// UnityPointCloudExample
struct UnityPointCloudExample_t3649008995;
// UpdateShaderCoordinatesByARPlane
struct UpdateShaderCoordinatesByARPlane_t405495776;
// Utils.SerializableVector4
struct SerializableVector4_t1862640084;
// Utils.serializableARKitInit
struct serializableARKitInit_t3885066048;
// Utils.serializableARSessionConfiguration
struct serializableARSessionConfiguration_t1467016906;
// Utils.serializableFromEditorMessage
struct serializableFromEditorMessage_t3245497382;
// Utils.serializablePointCloud
struct serializablePointCloud_t455238287;
// Utils.serializableSHC
struct serializableSHC_t2667429767;
// Utils.serializableUnityARCamera
struct serializableUnityARCamera_t4158151215;
// Utils.serializableUnityARLightData
struct serializableUnityARLightData_t3935513283;
// Utils.serializableUnityARMatrix4x4
struct serializableUnityARMatrix4x4_t78255337;
// Utils.serializableUnityARPlaneAnchor
struct serializableUnityARPlaneAnchor_t1446774435;
// VectorDataFetcher
struct VectorDataFetcher_t932344282;
// VectorDataFetcher/<FetchData>c__AnonStorey0
struct U3CFetchDataU3Ec__AnonStorey0_t1155300966;
// VectorDataFetcherParameters
struct VectorDataFetcherParameters_t1168113904;

extern RuntimeClass* ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var;
extern RuntimeClass* ARPlaneAnchor_t2049372221_il2cpp_TypeInfo_var;
extern RuntimeClass* ARPlaneHandler_t1247306374_il2cpp_TypeInfo_var;
extern RuntimeClass* ARUserAnchorRemoved_t23344545_il2cpp_TypeInfo_var;
extern RuntimeClass* ARUserAnchorUpdated_t4007601678_il2cpp_TypeInfo_var;
extern RuntimeClass* ARUserAnchor_t1406831531_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t1099483977_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_2_t3936036094_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_3_t1202789066_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern RuntimeClass* BinaryFormatter_t3197753202_il2cpp_TypeInfo_var;
extern RuntimeClass* BitConverter_t3118986983_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* CommandBuffer_t2206337031_il2cpp_TypeInfo_var;
extern RuntimeClass* Encoding_t1523322056_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2585711361_il2cpp_TypeInfo_var;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern RuntimeClass* Matrix4x4_t1817901843_il2cpp_TypeInfo_var;
extern RuntimeClass* MemoryStream_t94973147_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* SerializableVector4_t1862640084_il2cpp_TypeInfo_var;
extern RuntimeClass* SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TileErrorEventArgs_t942940053_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CFetchDataU3Ec__AnonStorey0_t1155300966_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityARAnchorData_t1157236668_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityARCamera_t2069150450_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityARDirectionalLightEstimate_t2924556994_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityARFaceAnchorData_t2028622935_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityARUserAnchorData_t1976826249_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityARUtility_t2509807446_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector4_t3319028937_il2cpp_TypeInfo_var;
extern RuntimeClass* VectorDataFetcherParameters_t1168113904_il2cpp_TypeInfo_var;
extern RuntimeClass* VectorDataFetcher_t932344282_il2cpp_TypeInfo_var;
extern RuntimeClass* VectorTile_t4284514353_il2cpp_TypeInfo_var;
extern RuntimeClass* internal_UnityARCamera_t3920739388_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableARSessionConfiguration_t1467016906_il2cpp_TypeInfo_var;
extern RuntimeClass* serializablePointCloud_t455238287_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableSHC_t2667429767_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableUnityARCamera_t4158151215_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableUnityARLightData_t3935513283_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableUnityARMatrix4x4_t78255337_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableUnityARPlaneAnchor_t1446774435_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1055189311;
extern String_t* _stringLiteral1432570861;
extern String_t* _stringLiteral2313301283;
extern String_t* _stringLiteral2774949250;
extern String_t* _stringLiteral3606922194;
extern String_t* _stringLiteral3984539697;
extern String_t* _stringLiteral54826001;
extern const RuntimeMethod* Action_1__ctor_m3806006932_RuntimeMethod_var;
extern const RuntimeMethod* Action_2_Invoke_m1484331405_RuntimeMethod_var;
extern const RuntimeMethod* Action_2__ctor_m3245614058_RuntimeMethod_var;
extern const RuntimeMethod* Action_3_Invoke_m1250411769_RuntimeMethod_var;
extern const RuntimeMethod* Action_3__ctor_m245262623_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisCamera_t4157153871_m4227149030_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponentInChildren_TisMeshFilter_t3523625662_m478508368_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2765963565_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1424466557_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3743125852_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const RuntimeMethod* U3CFetchDataU3Ec__AnonStorey0_U3CU3Em__0_m1371082452_RuntimeMethod_var;
extern const RuntimeMethod* UnityARUserAnchorComponent_AnchorRemoved_m2099527927_RuntimeMethod_var;
extern const RuntimeMethod* UnityARUserAnchorComponent_GameObjectAnchorUpdated_m1750428080_RuntimeMethod_var;
extern const RuntimeMethod* UnityARVideo_UpdateFrame_m3975841991_RuntimeMethod_var;
extern const RuntimeMethod* UnityPointCloudExample_ARFrameUpdated_m3531421433_RuntimeMethod_var;
extern const RuntimeMethod* UnityRemoteVideo_UpdateCamera_m873484480_RuntimeMethod_var;
extern const RuntimeMethod* UpdateShaderCoordinatesByARPlane_CheckCoordinates_m4286974174_RuntimeMethod_var;
extern const RuntimeMethod* UpdateShaderCoordinatesByARPlane_ResetShaderValues_m1593896542_RuntimeMethod_var;
extern const RuntimeMethod* VectorDataFetcher_U3CDataRecievedU3Em__0_m387369038_RuntimeMethod_var;
extern const RuntimeMethod* VectorDataFetcher_U3CFetchingErrorU3Em__1_m385984410_RuntimeMethod_var;
extern const uint32_t ARAnchorAdded_BeginInvoke_m2725108197_MetadataUsageId;
extern const uint32_t ARAnchorRemoved_BeginInvoke_m495283272_MetadataUsageId;
extern const uint32_t ARAnchorUpdated_BeginInvoke_m2773603932_MetadataUsageId;
extern const uint32_t ARFrameUpdate_BeginInvoke_m1285835900_MetadataUsageId;
extern const uint32_t ARSessionTrackingChanged_BeginInvoke_m3230226342_MetadataUsageId;
extern const uint32_t ARUserAnchorAdded_BeginInvoke_m4131496474_MetadataUsageId;
extern const uint32_t ARUserAnchorRemoved_BeginInvoke_m1997264703_MetadataUsageId;
extern const uint32_t ARUserAnchorUpdated_BeginInvoke_m1530922700_MetadataUsageId;
extern const uint32_t ObjectSerializationExtension_SerializeToByteArray_m579578536_MetadataUsageId;
extern const uint32_t SerializableVector4_ToString_m70901593_MetadataUsageId;
extern const uint32_t SerializableVector4_op_Implicit_m14360340_MetadataUsageId;
extern const uint32_t U3CFetchDataU3Ec__AnonStorey0_U3CU3Em__0_m1371082452_MetadataUsageId;
extern const uint32_t UnityARUserAnchorComponent_AnchorRemoved_m2099527927_MetadataUsageId;
extern const uint32_t UnityARUserAnchorComponent_Awake_m1256671643_MetadataUsageId;
extern const uint32_t UnityARUserAnchorComponent_OnDestroy_m1550181455_MetadataUsageId;
extern const uint32_t UnityARUserAnchorData_UnityARUserAnchorDataFromGameObject_m1971953404_MetadataUsageId;
extern const uint32_t UnityARUserAnchorData_get_identifierStr_m122781054_MetadataUsageId;
extern const uint32_t UnityARUtility_CreatePlaneInScene_m2158801296_MetadataUsageId;
extern const uint32_t UnityARUtility_InitializePlanePrefab_m2291423040_MetadataUsageId;
extern const uint32_t UnityARUtility_UpdatePlaneWithAnchorTransform_m2954036282_MetadataUsageId;
extern const uint32_t UnityARVideo_InitializeCommandBuffer_m1538546596_MetadataUsageId;
extern const uint32_t UnityARVideo_OnDestroy_m4099270667_MetadataUsageId;
extern const uint32_t UnityARVideo_OnPreRender_m1315675298_MetadataUsageId;
extern const uint32_t UnityARVideo_Start_m3116293614_MetadataUsageId;
extern const uint32_t UnityMarshalLightData_op_Implicit_m3999748056_MetadataUsageId;
extern const uint32_t UnityPointCloudExample_Start_m4202814548_MetadataUsageId;
extern const uint32_t UnityPointCloudExample_Update_m3072589646_MetadataUsageId;
extern const uint32_t UnityRemoteVideo_InitializeTextures_m1227954273_MetadataUsageId;
extern const uint32_t UnityRemoteVideo_OnDestroy_m2450575749_MetadataUsageId;
extern const uint32_t UnityRemoteVideo_OnPreRender_m1591030712_MetadataUsageId;
extern const uint32_t UnityRemoteVideo_Start_m768447242_MetadataUsageId;
extern const uint32_t UnityRemoteVideo_UpdateCamera_m873484480_MetadataUsageId;
extern const uint32_t UpdateShaderCoordinatesByARPlane_CheckCoordinates_m4286974174_MetadataUsageId;
extern const uint32_t UpdateShaderCoordinatesByARPlane_OnDisable_m3164814015_MetadataUsageId;
extern const uint32_t UpdateShaderCoordinatesByARPlane_Start_m2018740165_MetadataUsageId;
extern const uint32_t UpdateShaderCoordinatesByARPlane_UpdateShaderValues_m889279849_MetadataUsageId;
extern const uint32_t VectorDataFetcher_FetchData_m3939290115_MetadataUsageId;
extern const uint32_t VectorDataFetcher__ctor_m1051421980_MetadataUsageId;
extern const uint32_t internal_ARAnchorAdded_BeginInvoke_m4199645137_MetadataUsageId;
extern const uint32_t internal_ARAnchorRemoved_BeginInvoke_m2416400457_MetadataUsageId;
extern const uint32_t internal_ARAnchorUpdated_BeginInvoke_m3288631253_MetadataUsageId;
extern const uint32_t internal_ARFaceAnchorAdded_BeginInvoke_m899230624_MetadataUsageId;
extern const uint32_t internal_ARFaceAnchorRemoved_BeginInvoke_m2676213647_MetadataUsageId;
extern const uint32_t internal_ARFaceAnchorUpdated_BeginInvoke_m1736670652_MetadataUsageId;
extern const uint32_t internal_ARFrameUpdate_BeginInvoke_m2334992139_MetadataUsageId;
extern const uint32_t internal_ARSessionTrackingChanged_BeginInvoke_m453410478_MetadataUsageId;
extern const uint32_t internal_ARUserAnchorAdded_BeginInvoke_m3896873928_MetadataUsageId;
extern const uint32_t internal_ARUserAnchorRemoved_BeginInvoke_m2511948604_MetadataUsageId;
extern const uint32_t internal_ARUserAnchorUpdated_BeginInvoke_m3665399959_MetadataUsageId;
extern const uint32_t serializableARSessionConfiguration_op_Implicit_m1556611494_MetadataUsageId;
extern const uint32_t serializablePointCloud_op_Implicit_m1866692932_MetadataUsageId;
extern const uint32_t serializablePointCloud_op_Implicit_m463505948_MetadataUsageId;
extern const uint32_t serializableSHC_op_Implicit_m2638304907_MetadataUsageId;
extern const uint32_t serializableSHC_op_Implicit_m465874179_MetadataUsageId;
extern const uint32_t serializableUnityARCamera_op_Implicit_m1598722366_MetadataUsageId;
extern const uint32_t serializableUnityARLightData__ctor_m2554290283_MetadataUsageId;
extern const uint32_t serializableUnityARLightData_op_Implicit_m1050232524_MetadataUsageId;
extern const uint32_t serializableUnityARLightData_op_Implicit_m3789143495_MetadataUsageId;
extern const uint32_t serializableUnityARMatrix4x4_op_Implicit_m3556108972_MetadataUsageId;
extern const uint32_t serializableUnityARMatrix4x4_op_Implicit_m3630501456_MetadataUsageId;
extern const uint32_t serializableUnityARPlaneAnchor_op_Implicit_m217596632_MetadataUsageId;
extern const uint32_t serializableUnityARPlaneAnchor_op_Implicit_m57666075_MetadataUsageId;
struct ARPlaneAnchor_t2049372221;;
struct ARPlaneAnchor_t2049372221_marshaled_pinvoke;
struct ARPlaneAnchor_t2049372221_marshaled_pinvoke;;
struct ARUserAnchor_t1406831531;;
struct ARUserAnchor_t1406831531_marshaled_pinvoke;
struct ARUserAnchor_t1406831531_marshaled_pinvoke;;
struct Vector3_t3722313464 ;

struct ByteU5BU5D_t4116647657;
struct ObjectU5BU5D_t2843939325;
struct SingleU5BU5D_t1444911251;
struct Vector3U5BU5D_t1718750761;


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
#ifndef STYLE_T3654124703_H
#define STYLE_T3654124703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Map.Style
struct  Style_t3654124703  : public RuntimeObject
{
public:
	// System.String Mapbox.Unity.Map.Style::Name
	String_t* ___Name_0;
	// System.String Mapbox.Unity.Map.Style::Id
	String_t* ___Id_1;
	// System.String Mapbox.Unity.Map.Style::Modified
	String_t* ___Modified_2;
	// System.String Mapbox.Unity.Map.Style::UserName
	String_t* ___UserName_3;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Style_t3654124703, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Id_1() { return static_cast<int32_t>(offsetof(Style_t3654124703, ___Id_1)); }
	inline String_t* get_Id_1() const { return ___Id_1; }
	inline String_t** get_address_of_Id_1() { return &___Id_1; }
	inline void set_Id_1(String_t* value)
	{
		___Id_1 = value;
		Il2CppCodeGenWriteBarrier((&___Id_1), value);
	}

	inline static int32_t get_offset_of_Modified_2() { return static_cast<int32_t>(offsetof(Style_t3654124703, ___Modified_2)); }
	inline String_t* get_Modified_2() const { return ___Modified_2; }
	inline String_t** get_address_of_Modified_2() { return &___Modified_2; }
	inline void set_Modified_2(String_t* value)
	{
		___Modified_2 = value;
		Il2CppCodeGenWriteBarrier((&___Modified_2), value);
	}

	inline static int32_t get_offset_of_UserName_3() { return static_cast<int32_t>(offsetof(Style_t3654124703, ___UserName_3)); }
	inline String_t* get_UserName_3() const { return ___UserName_3; }
	inline String_t** get_address_of_UserName_3() { return &___UserName_3; }
	inline void set_UserName_3(String_t* value)
	{
		___UserName_3 = value;
		Il2CppCodeGenWriteBarrier((&___UserName_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STYLE_T3654124703_H
#ifndef MAPBOXACCESS_T3460807032_H
#define MAPBOXACCESS_T3460807032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MapboxAccess
struct  MapboxAccess_t3460807032  : public RuntimeObject
{
public:
	// Mapbox.Unity.Telemetry.ITelemetryLibrary Mapbox.Unity.MapboxAccess::_telemetryLibrary
	RuntimeObject* ____telemetryLibrary_0;
	// Mapbox.Platform.Cache.CachingWebFileSource Mapbox.Unity.MapboxAccess::_fileSource
	CachingWebFileSource_t328893056 * ____fileSource_1;
	// Mapbox.Unity.MapboxAccess/TokenValidationEvent Mapbox.Unity.MapboxAccess::OnTokenValidation
	TokenValidationEvent_t3633566190 * ___OnTokenValidation_2;
	// Mapbox.Unity.MapboxConfiguration Mapbox.Unity.MapboxAccess::_configuration
	MapboxConfiguration_t2330578778 * ____configuration_6;
	// System.String Mapbox.Unity.MapboxAccess::_tokenNotSetErrorMessage
	String_t* ____tokenNotSetErrorMessage_7;
	// Mapbox.Geocoding.Geocoder Mapbox.Unity.MapboxAccess::_geocoder
	Geocoder_t3195298050 * ____geocoder_8;
	// Mapbox.Directions.Directions Mapbox.Unity.MapboxAccess::_directions
	Directions_t1397515081 * ____directions_9;
	// Mapbox.MapMatching.MapMatcher Mapbox.Unity.MapboxAccess::_mapMatcher
	MapMatcher_t3570695288 * ____mapMatcher_10;
	// Mapbox.Tokens.MapboxTokenApi Mapbox.Unity.MapboxAccess::_tokenValidator
	MapboxTokenApi_t1223975188 * ____tokenValidator_11;
	// Mapbox.Platform.TilesetTileJSON.TileJSON Mapbox.Unity.MapboxAccess::_tileJson
	TileJSON_t3258390358 * ____tileJson_12;

public:
	inline static int32_t get_offset_of__telemetryLibrary_0() { return static_cast<int32_t>(offsetof(MapboxAccess_t3460807032, ____telemetryLibrary_0)); }
	inline RuntimeObject* get__telemetryLibrary_0() const { return ____telemetryLibrary_0; }
	inline RuntimeObject** get_address_of__telemetryLibrary_0() { return &____telemetryLibrary_0; }
	inline void set__telemetryLibrary_0(RuntimeObject* value)
	{
		____telemetryLibrary_0 = value;
		Il2CppCodeGenWriteBarrier((&____telemetryLibrary_0), value);
	}

	inline static int32_t get_offset_of__fileSource_1() { return static_cast<int32_t>(offsetof(MapboxAccess_t3460807032, ____fileSource_1)); }
	inline CachingWebFileSource_t328893056 * get__fileSource_1() const { return ____fileSource_1; }
	inline CachingWebFileSource_t328893056 ** get_address_of__fileSource_1() { return &____fileSource_1; }
	inline void set__fileSource_1(CachingWebFileSource_t328893056 * value)
	{
		____fileSource_1 = value;
		Il2CppCodeGenWriteBarrier((&____fileSource_1), value);
	}

	inline static int32_t get_offset_of_OnTokenValidation_2() { return static_cast<int32_t>(offsetof(MapboxAccess_t3460807032, ___OnTokenValidation_2)); }
	inline TokenValidationEvent_t3633566190 * get_OnTokenValidation_2() const { return ___OnTokenValidation_2; }
	inline TokenValidationEvent_t3633566190 ** get_address_of_OnTokenValidation_2() { return &___OnTokenValidation_2; }
	inline void set_OnTokenValidation_2(TokenValidationEvent_t3633566190 * value)
	{
		___OnTokenValidation_2 = value;
		Il2CppCodeGenWriteBarrier((&___OnTokenValidation_2), value);
	}

	inline static int32_t get_offset_of__configuration_6() { return static_cast<int32_t>(offsetof(MapboxAccess_t3460807032, ____configuration_6)); }
	inline MapboxConfiguration_t2330578778 * get__configuration_6() const { return ____configuration_6; }
	inline MapboxConfiguration_t2330578778 ** get_address_of__configuration_6() { return &____configuration_6; }
	inline void set__configuration_6(MapboxConfiguration_t2330578778 * value)
	{
		____configuration_6 = value;
		Il2CppCodeGenWriteBarrier((&____configuration_6), value);
	}

	inline static int32_t get_offset_of__tokenNotSetErrorMessage_7() { return static_cast<int32_t>(offsetof(MapboxAccess_t3460807032, ____tokenNotSetErrorMessage_7)); }
	inline String_t* get__tokenNotSetErrorMessage_7() const { return ____tokenNotSetErrorMessage_7; }
	inline String_t** get_address_of__tokenNotSetErrorMessage_7() { return &____tokenNotSetErrorMessage_7; }
	inline void set__tokenNotSetErrorMessage_7(String_t* value)
	{
		____tokenNotSetErrorMessage_7 = value;
		Il2CppCodeGenWriteBarrier((&____tokenNotSetErrorMessage_7), value);
	}

	inline static int32_t get_offset_of__geocoder_8() { return static_cast<int32_t>(offsetof(MapboxAccess_t3460807032, ____geocoder_8)); }
	inline Geocoder_t3195298050 * get__geocoder_8() const { return ____geocoder_8; }
	inline Geocoder_t3195298050 ** get_address_of__geocoder_8() { return &____geocoder_8; }
	inline void set__geocoder_8(Geocoder_t3195298050 * value)
	{
		____geocoder_8 = value;
		Il2CppCodeGenWriteBarrier((&____geocoder_8), value);
	}

	inline static int32_t get_offset_of__directions_9() { return static_cast<int32_t>(offsetof(MapboxAccess_t3460807032, ____directions_9)); }
	inline Directions_t1397515081 * get__directions_9() const { return ____directions_9; }
	inline Directions_t1397515081 ** get_address_of__directions_9() { return &____directions_9; }
	inline void set__directions_9(Directions_t1397515081 * value)
	{
		____directions_9 = value;
		Il2CppCodeGenWriteBarrier((&____directions_9), value);
	}

	inline static int32_t get_offset_of__mapMatcher_10() { return static_cast<int32_t>(offsetof(MapboxAccess_t3460807032, ____mapMatcher_10)); }
	inline MapMatcher_t3570695288 * get__mapMatcher_10() const { return ____mapMatcher_10; }
	inline MapMatcher_t3570695288 ** get_address_of__mapMatcher_10() { return &____mapMatcher_10; }
	inline void set__mapMatcher_10(MapMatcher_t3570695288 * value)
	{
		____mapMatcher_10 = value;
		Il2CppCodeGenWriteBarrier((&____mapMatcher_10), value);
	}

	inline static int32_t get_offset_of__tokenValidator_11() { return static_cast<int32_t>(offsetof(MapboxAccess_t3460807032, ____tokenValidator_11)); }
	inline MapboxTokenApi_t1223975188 * get__tokenValidator_11() const { return ____tokenValidator_11; }
	inline MapboxTokenApi_t1223975188 ** get_address_of__tokenValidator_11() { return &____tokenValidator_11; }
	inline void set__tokenValidator_11(MapboxTokenApi_t1223975188 * value)
	{
		____tokenValidator_11 = value;
		Il2CppCodeGenWriteBarrier((&____tokenValidator_11), value);
	}

	inline static int32_t get_offset_of__tileJson_12() { return static_cast<int32_t>(offsetof(MapboxAccess_t3460807032, ____tileJson_12)); }
	inline TileJSON_t3258390358 * get__tileJson_12() const { return ____tileJson_12; }
	inline TileJSON_t3258390358 ** get_address_of__tileJson_12() { return &____tileJson_12; }
	inline void set__tileJson_12(TileJSON_t3258390358 * value)
	{
		____tileJson_12 = value;
		Il2CppCodeGenWriteBarrier((&____tileJson_12), value);
	}
};

struct MapboxAccess_t3460807032_StaticFields
{
public:
	// Mapbox.Unity.MapboxAccess Mapbox.Unity.MapboxAccess::_instance
	MapboxAccess_t3460807032 * ____instance_3;
	// System.Boolean Mapbox.Unity.MapboxAccess::Configured
	bool ___Configured_4;
	// System.String Mapbox.Unity.MapboxAccess::ConfigurationJSON
	String_t* ___ConfigurationJSON_5;

public:
	inline static int32_t get_offset_of__instance_3() { return static_cast<int32_t>(offsetof(MapboxAccess_t3460807032_StaticFields, ____instance_3)); }
	inline MapboxAccess_t3460807032 * get__instance_3() const { return ____instance_3; }
	inline MapboxAccess_t3460807032 ** get_address_of__instance_3() { return &____instance_3; }
	inline void set__instance_3(MapboxAccess_t3460807032 * value)
	{
		____instance_3 = value;
		Il2CppCodeGenWriteBarrier((&____instance_3), value);
	}

	inline static int32_t get_offset_of_Configured_4() { return static_cast<int32_t>(offsetof(MapboxAccess_t3460807032_StaticFields, ___Configured_4)); }
	inline bool get_Configured_4() const { return ___Configured_4; }
	inline bool* get_address_of_Configured_4() { return &___Configured_4; }
	inline void set_Configured_4(bool value)
	{
		___Configured_4 = value;
	}

	inline static int32_t get_offset_of_ConfigurationJSON_5() { return static_cast<int32_t>(offsetof(MapboxAccess_t3460807032_StaticFields, ___ConfigurationJSON_5)); }
	inline String_t* get_ConfigurationJSON_5() const { return ___ConfigurationJSON_5; }
	inline String_t** get_address_of_ConfigurationJSON_5() { return &___ConfigurationJSON_5; }
	inline void set_ConfigurationJSON_5(String_t* value)
	{
		___ConfigurationJSON_5 = value;
		Il2CppCodeGenWriteBarrier((&___ConfigurationJSON_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPBOXACCESS_T3460807032_H
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
#ifndef LIST_1_T2585711361_H
#define LIST_1_T2585711361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t2585711361  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t3328599146* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____items_1)); }
	inline GameObjectU5BU5D_t3328599146* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t3328599146* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2585711361_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GameObjectU5BU5D_t3328599146* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2585711361_StaticFields, ___EmptyArray_4)); }
	inline GameObjectU5BU5D_t3328599146* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GameObjectU5BU5D_t3328599146* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2585711361_H
#ifndef READONLYCOLLECTION_1_T2649313536_H
#define READONLYCOLLECTION_1_T2649313536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct  ReadOnlyCollection_1_t2649313536  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t2649313536, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T2649313536_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
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
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3123823036 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1188251036 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoder_fallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoder_fallback_4)); }
	inline EncoderFallback_t1188251036 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1188251036 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2843939325* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1523322056 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1523322056 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1523322056 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1523322056 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1523322056 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t2843939325* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t2843939325* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t1523322056 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t1523322056 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t1523322056 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t1523322056 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t1523322056 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t1523322056 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t1523322056 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t1523322056 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t1523322056 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t1523322056 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t1523322056 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t1523322056 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t1523322056 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t1523322056 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t1523322056 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t1523322056 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t1523322056 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef UNITYARUTILITY_T2509807446_H
#define UNITYARUTILITY_T2509807446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUtility
struct  UnityARUtility_t2509807446  : public RuntimeObject
{
public:
	// UnityEngine.MeshCollider UnityEngine.XR.iOS.UnityARUtility::meshCollider
	MeshCollider_t903564387 * ___meshCollider_0;
	// UnityEngine.MeshFilter UnityEngine.XR.iOS.UnityARUtility::meshFilter
	MeshFilter_t3523625662 * ___meshFilter_1;

public:
	inline static int32_t get_offset_of_meshCollider_0() { return static_cast<int32_t>(offsetof(UnityARUtility_t2509807446, ___meshCollider_0)); }
	inline MeshCollider_t903564387 * get_meshCollider_0() const { return ___meshCollider_0; }
	inline MeshCollider_t903564387 ** get_address_of_meshCollider_0() { return &___meshCollider_0; }
	inline void set_meshCollider_0(MeshCollider_t903564387 * value)
	{
		___meshCollider_0 = value;
		Il2CppCodeGenWriteBarrier((&___meshCollider_0), value);
	}

	inline static int32_t get_offset_of_meshFilter_1() { return static_cast<int32_t>(offsetof(UnityARUtility_t2509807446, ___meshFilter_1)); }
	inline MeshFilter_t3523625662 * get_meshFilter_1() const { return ___meshFilter_1; }
	inline MeshFilter_t3523625662 ** get_address_of_meshFilter_1() { return &___meshFilter_1; }
	inline void set_meshFilter_1(MeshFilter_t3523625662 * value)
	{
		___meshFilter_1 = value;
		Il2CppCodeGenWriteBarrier((&___meshFilter_1), value);
	}
};

struct UnityARUtility_t2509807446_StaticFields
{
public:
	// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARUtility::planePrefab
	GameObject_t1113636619 * ___planePrefab_2;

public:
	inline static int32_t get_offset_of_planePrefab_2() { return static_cast<int32_t>(offsetof(UnityARUtility_t2509807446_StaticFields, ___planePrefab_2)); }
	inline GameObject_t1113636619 * get_planePrefab_2() const { return ___planePrefab_2; }
	inline GameObject_t1113636619 ** get_address_of_planePrefab_2() { return &___planePrefab_2; }
	inline void set_planePrefab_2(GameObject_t1113636619 * value)
	{
		___planePrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___planePrefab_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUTILITY_T2509807446_H
#ifndef OBJECTSERIALIZATIONEXTENSION_T1046383205_H
#define OBJECTSERIALIZATIONEXTENSION_T1046383205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.ObjectSerializationExtension
struct  ObjectSerializationExtension_t1046383205  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTSERIALIZATIONEXTENSION_T1046383205_H
#ifndef SERIALIZABLEVECTOR4_T1862640084_H
#define SERIALIZABLEVECTOR4_T1862640084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.SerializableVector4
struct  SerializableVector4_t1862640084  : public RuntimeObject
{
public:
	// System.Single Utils.SerializableVector4::x
	float ___x_0;
	// System.Single Utils.SerializableVector4::y
	float ___y_1;
	// System.Single Utils.SerializableVector4::z
	float ___z_2;
	// System.Single Utils.SerializableVector4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SerializableVector4_t1862640084, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SerializableVector4_t1862640084, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(SerializableVector4_t1862640084, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(SerializableVector4_t1862640084, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEVECTOR4_T1862640084_H
#ifndef SERIALIZABLEPOINTCLOUD_T455238287_H
#define SERIALIZABLEPOINTCLOUD_T455238287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializablePointCloud
struct  serializablePointCloud_t455238287  : public RuntimeObject
{
public:
	// System.Byte[] Utils.serializablePointCloud::pointCloudData
	ByteU5BU5D_t4116647657* ___pointCloudData_0;

public:
	inline static int32_t get_offset_of_pointCloudData_0() { return static_cast<int32_t>(offsetof(serializablePointCloud_t455238287, ___pointCloudData_0)); }
	inline ByteU5BU5D_t4116647657* get_pointCloudData_0() const { return ___pointCloudData_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_pointCloudData_0() { return &___pointCloudData_0; }
	inline void set_pointCloudData_0(ByteU5BU5D_t4116647657* value)
	{
		___pointCloudData_0 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEPOINTCLOUD_T455238287_H
#ifndef SERIALIZABLESHC_T2667429767_H
#define SERIALIZABLESHC_T2667429767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableSHC
struct  serializableSHC_t2667429767  : public RuntimeObject
{
public:
	// System.Byte[] Utils.serializableSHC::shcData
	ByteU5BU5D_t4116647657* ___shcData_0;

public:
	inline static int32_t get_offset_of_shcData_0() { return static_cast<int32_t>(offsetof(serializableSHC_t2667429767, ___shcData_0)); }
	inline ByteU5BU5D_t4116647657* get_shcData_0() const { return ___shcData_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_shcData_0() { return &___shcData_0; }
	inline void set_shcData_0(ByteU5BU5D_t4116647657* value)
	{
		___shcData_0 = value;
		Il2CppCodeGenWriteBarrier((&___shcData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLESHC_T2667429767_H
#ifndef SERIALIZABLEUNITYARMATRIX4X4_T78255337_H
#define SERIALIZABLEUNITYARMATRIX4X4_T78255337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARMatrix4x4
struct  serializableUnityARMatrix4x4_t78255337  : public RuntimeObject
{
public:
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column0
	SerializableVector4_t1862640084 * ___column0_0;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column1
	SerializableVector4_t1862640084 * ___column1_1;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column2
	SerializableVector4_t1862640084 * ___column2_2;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column3
	SerializableVector4_t1862640084 * ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t78255337, ___column0_0)); }
	inline SerializableVector4_t1862640084 * get_column0_0() const { return ___column0_0; }
	inline SerializableVector4_t1862640084 ** get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(SerializableVector4_t1862640084 * value)
	{
		___column0_0 = value;
		Il2CppCodeGenWriteBarrier((&___column0_0), value);
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t78255337, ___column1_1)); }
	inline SerializableVector4_t1862640084 * get_column1_1() const { return ___column1_1; }
	inline SerializableVector4_t1862640084 ** get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(SerializableVector4_t1862640084 * value)
	{
		___column1_1 = value;
		Il2CppCodeGenWriteBarrier((&___column1_1), value);
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t78255337, ___column2_2)); }
	inline SerializableVector4_t1862640084 * get_column2_2() const { return ___column2_2; }
	inline SerializableVector4_t1862640084 ** get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(SerializableVector4_t1862640084 * value)
	{
		___column2_2 = value;
		Il2CppCodeGenWriteBarrier((&___column2_2), value);
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t78255337, ___column3_3)); }
	inline SerializableVector4_t1862640084 * get_column3_3() const { return ___column3_3; }
	inline SerializableVector4_t1862640084 ** get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(SerializableVector4_t1862640084 * value)
	{
		___column3_3 = value;
		Il2CppCodeGenWriteBarrier((&___column3_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARMATRIX4X4_T78255337_H
#ifndef U3CFETCHDATAU3EC__ANONSTOREY0_T1155300966_H
#define U3CFETCHDATAU3EC__ANONSTOREY0_T1155300966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VectorDataFetcher/<FetchData>c__AnonStorey0
struct  U3CFetchDataU3Ec__AnonStorey0_t1155300966  : public RuntimeObject
{
public:
	// VectorDataFetcherParameters VectorDataFetcher/<FetchData>c__AnonStorey0::vectorDaraParameters
	VectorDataFetcherParameters_t1168113904 * ___vectorDaraParameters_0;
	// Mapbox.Map.VectorTile VectorDataFetcher/<FetchData>c__AnonStorey0::vectorTile
	VectorTile_t4284514353 * ___vectorTile_1;
	// VectorDataFetcher VectorDataFetcher/<FetchData>c__AnonStorey0::$this
	VectorDataFetcher_t932344282 * ___U24this_2;

public:
	inline static int32_t get_offset_of_vectorDaraParameters_0() { return static_cast<int32_t>(offsetof(U3CFetchDataU3Ec__AnonStorey0_t1155300966, ___vectorDaraParameters_0)); }
	inline VectorDataFetcherParameters_t1168113904 * get_vectorDaraParameters_0() const { return ___vectorDaraParameters_0; }
	inline VectorDataFetcherParameters_t1168113904 ** get_address_of_vectorDaraParameters_0() { return &___vectorDaraParameters_0; }
	inline void set_vectorDaraParameters_0(VectorDataFetcherParameters_t1168113904 * value)
	{
		___vectorDaraParameters_0 = value;
		Il2CppCodeGenWriteBarrier((&___vectorDaraParameters_0), value);
	}

	inline static int32_t get_offset_of_vectorTile_1() { return static_cast<int32_t>(offsetof(U3CFetchDataU3Ec__AnonStorey0_t1155300966, ___vectorTile_1)); }
	inline VectorTile_t4284514353 * get_vectorTile_1() const { return ___vectorTile_1; }
	inline VectorTile_t4284514353 ** get_address_of_vectorTile_1() { return &___vectorTile_1; }
	inline void set_vectorTile_1(VectorTile_t4284514353 * value)
	{
		___vectorTile_1 = value;
		Il2CppCodeGenWriteBarrier((&___vectorTile_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CFetchDataU3Ec__AnonStorey0_t1155300966, ___U24this_2)); }
	inline VectorDataFetcher_t932344282 * get_U24this_2() const { return ___U24this_2; }
	inline VectorDataFetcher_t932344282 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(VectorDataFetcher_t932344282 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFETCHDATAU3EC__ANONSTOREY0_T1155300966_H
#ifndef CANONICALTILEID_T4184902996_H
#define CANONICALTILEID_T4184902996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Map.CanonicalTileId
struct  CanonicalTileId_t4184902996 
{
public:
	// System.Int32 Mapbox.Map.CanonicalTileId::Z
	int32_t ___Z_0;
	// System.Int32 Mapbox.Map.CanonicalTileId::X
	int32_t ___X_1;
	// System.Int32 Mapbox.Map.CanonicalTileId::Y
	int32_t ___Y_2;

public:
	inline static int32_t get_offset_of_Z_0() { return static_cast<int32_t>(offsetof(CanonicalTileId_t4184902996, ___Z_0)); }
	inline int32_t get_Z_0() const { return ___Z_0; }
	inline int32_t* get_address_of_Z_0() { return &___Z_0; }
	inline void set_Z_0(int32_t value)
	{
		___Z_0 = value;
	}

	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(CanonicalTileId_t4184902996, ___X_1)); }
	inline int32_t get_X_1() const { return ___X_1; }
	inline int32_t* get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(int32_t value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(CanonicalTileId_t4184902996, ___Y_2)); }
	inline int32_t get_Y_2() const { return ___Y_2; }
	inline int32_t* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(int32_t value)
	{
		___Y_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANONICALTILEID_T4184902996_H
#ifndef UNWRAPPEDTILEID_T2586853537_H
#define UNWRAPPEDTILEID_T2586853537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Map.UnwrappedTileId
struct  UnwrappedTileId_t2586853537 
{
public:
	// System.Int32 Mapbox.Map.UnwrappedTileId::Z
	int32_t ___Z_0;
	// System.Int32 Mapbox.Map.UnwrappedTileId::X
	int32_t ___X_1;
	// System.Int32 Mapbox.Map.UnwrappedTileId::Y
	int32_t ___Y_2;

public:
	inline static int32_t get_offset_of_Z_0() { return static_cast<int32_t>(offsetof(UnwrappedTileId_t2586853537, ___Z_0)); }
	inline int32_t get_Z_0() const { return ___Z_0; }
	inline int32_t* get_address_of_Z_0() { return &___Z_0; }
	inline void set_Z_0(int32_t value)
	{
		___Z_0 = value;
	}

	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(UnwrappedTileId_t2586853537, ___X_1)); }
	inline int32_t get_X_1() const { return ___X_1; }
	inline int32_t* get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(int32_t value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(UnwrappedTileId_t2586853537, ___Y_2)); }
	inline int32_t get_Y_2() const { return ___Y_2; }
	inline int32_t* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(int32_t value)
	{
		___Y_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNWRAPPEDTILEID_T2586853537_H
#ifndef VECTOR2D_T1865246568_H
#define VECTOR2D_T1865246568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Utils.Vector2d
struct  Vector2d_t1865246568 
{
public:
	// System.Double Mapbox.Utils.Vector2d::x
	double ___x_1;
	// System.Double Mapbox.Utils.Vector2d::y
	double ___y_2;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector2d_t1865246568, ___x_1)); }
	inline double get_x_1() const { return ___x_1; }
	inline double* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(double value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector2d_t1865246568, ___y_2)); }
	inline double get_y_2() const { return ___y_2; }
	inline double* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(double value)
	{
		___y_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2D_T1865246568_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef MEMORYSTREAM_T94973147_H
#define MEMORYSTREAM_T94973147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MemoryStream
struct  MemoryStream_t94973147  : public Stream_t1273022909
{
public:
	// System.Boolean System.IO.MemoryStream::canWrite
	bool ___canWrite_1;
	// System.Boolean System.IO.MemoryStream::allowGetBuffer
	bool ___allowGetBuffer_2;
	// System.Int32 System.IO.MemoryStream::capacity
	int32_t ___capacity_3;
	// System.Int32 System.IO.MemoryStream::length
	int32_t ___length_4;
	// System.Byte[] System.IO.MemoryStream::internalBuffer
	ByteU5BU5D_t4116647657* ___internalBuffer_5;
	// System.Int32 System.IO.MemoryStream::initialIndex
	int32_t ___initialIndex_6;
	// System.Boolean System.IO.MemoryStream::expandable
	bool ___expandable_7;
	// System.Boolean System.IO.MemoryStream::streamClosed
	bool ___streamClosed_8;
	// System.Int32 System.IO.MemoryStream::position
	int32_t ___position_9;
	// System.Int32 System.IO.MemoryStream::dirty_bytes
	int32_t ___dirty_bytes_10;

public:
	inline static int32_t get_offset_of_canWrite_1() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___canWrite_1)); }
	inline bool get_canWrite_1() const { return ___canWrite_1; }
	inline bool* get_address_of_canWrite_1() { return &___canWrite_1; }
	inline void set_canWrite_1(bool value)
	{
		___canWrite_1 = value;
	}

	inline static int32_t get_offset_of_allowGetBuffer_2() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___allowGetBuffer_2)); }
	inline bool get_allowGetBuffer_2() const { return ___allowGetBuffer_2; }
	inline bool* get_address_of_allowGetBuffer_2() { return &___allowGetBuffer_2; }
	inline void set_allowGetBuffer_2(bool value)
	{
		___allowGetBuffer_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_internalBuffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___internalBuffer_5)); }
	inline ByteU5BU5D_t4116647657* get_internalBuffer_5() const { return ___internalBuffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_internalBuffer_5() { return &___internalBuffer_5; }
	inline void set_internalBuffer_5(ByteU5BU5D_t4116647657* value)
	{
		___internalBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___internalBuffer_5), value);
	}

	inline static int32_t get_offset_of_initialIndex_6() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___initialIndex_6)); }
	inline int32_t get_initialIndex_6() const { return ___initialIndex_6; }
	inline int32_t* get_address_of_initialIndex_6() { return &___initialIndex_6; }
	inline void set_initialIndex_6(int32_t value)
	{
		___initialIndex_6 = value;
	}

	inline static int32_t get_offset_of_expandable_7() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___expandable_7)); }
	inline bool get_expandable_7() const { return ___expandable_7; }
	inline bool* get_address_of_expandable_7() { return &___expandable_7; }
	inline void set_expandable_7(bool value)
	{
		___expandable_7 = value;
	}

	inline static int32_t get_offset_of_streamClosed_8() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___streamClosed_8)); }
	inline bool get_streamClosed_8() const { return ___streamClosed_8; }
	inline bool* get_address_of_streamClosed_8() { return &___streamClosed_8; }
	inline void set_streamClosed_8(bool value)
	{
		___streamClosed_8 = value;
	}

	inline static int32_t get_offset_of_position_9() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___position_9)); }
	inline int32_t get_position_9() const { return ___position_9; }
	inline int32_t* get_address_of_position_9() { return &___position_9; }
	inline void set_position_9(int32_t value)
	{
		___position_9 = value;
	}

	inline static int32_t get_offset_of_dirty_bytes_10() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___dirty_bytes_10)); }
	inline int32_t get_dirty_bytes_10() const { return ___dirty_bytes_10; }
	inline int32_t* get_address_of_dirty_bytes_10() { return &___dirty_bytes_10; }
	inline void set_dirty_bytes_10(int32_t value)
	{
		___dirty_bytes_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYSTREAM_T94973147_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
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
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
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
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef RESOLUTION_T2487619763_H
#define RESOLUTION_T2487619763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resolution
struct  Resolution_t2487619763 
{
public:
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;

public:
	inline static int32_t get_offset_of_m_Width_0() { return static_cast<int32_t>(offsetof(Resolution_t2487619763, ___m_Width_0)); }
	inline int32_t get_m_Width_0() const { return ___m_Width_0; }
	inline int32_t* get_address_of_m_Width_0() { return &___m_Width_0; }
	inline void set_m_Width_0(int32_t value)
	{
		___m_Width_0 = value;
	}

	inline static int32_t get_offset_of_m_Height_1() { return static_cast<int32_t>(offsetof(Resolution_t2487619763, ___m_Height_1)); }
	inline int32_t get_m_Height_1() const { return ___m_Height_1; }
	inline int32_t* get_address_of_m_Height_1() { return &___m_Height_1; }
	inline void set_m_Height_1(int32_t value)
	{
		___m_Height_1 = value;
	}

	inline static int32_t get_offset_of_m_RefreshRate_2() { return static_cast<int32_t>(offsetof(Resolution_t2487619763, ___m_RefreshRate_2)); }
	inline int32_t get_m_RefreshRate_2() const { return ___m_RefreshRate_2; }
	inline int32_t* get_address_of_m_RefreshRate_2() { return &___m_RefreshRate_2; }
	inline void set_m_RefreshRate_2(int32_t value)
	{
		___m_RefreshRate_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLUTION_T2487619763_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef UNITYARLIGHTESTIMATE_T1498306117_H
#define UNITYARLIGHTESTIMATE_T1498306117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightEstimate
struct  UnityARLightEstimate_t1498306117 
{
public:
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientColorTemperature
	float ___ambientColorTemperature_1;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t1498306117, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t1498306117, ___ambientColorTemperature_1)); }
	inline float get_ambientColorTemperature_1() const { return ___ambientColorTemperature_1; }
	inline float* get_address_of_ambientColorTemperature_1() { return &___ambientColorTemperature_1; }
	inline void set_ambientColorTemperature_1(float value)
	{
		___ambientColorTemperature_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARLIGHTESTIMATE_T1498306117_H
#ifndef DATAFETCHERPARAMETERS_T4072360282_H
#define DATAFETCHERPARAMETERS_T4072360282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DataFetcherParameters
struct  DataFetcherParameters_t4072360282  : public RuntimeObject
{
public:
	// Mapbox.Map.CanonicalTileId DataFetcherParameters::canonicalTileId
	CanonicalTileId_t4184902996  ___canonicalTileId_0;
	// System.String DataFetcherParameters::mapid
	String_t* ___mapid_1;
	// Mapbox.Unity.MeshGeneration.Data.UnityTile DataFetcherParameters::tile
	UnityTile_t2405085845 * ___tile_2;

public:
	inline static int32_t get_offset_of_canonicalTileId_0() { return static_cast<int32_t>(offsetof(DataFetcherParameters_t4072360282, ___canonicalTileId_0)); }
	inline CanonicalTileId_t4184902996  get_canonicalTileId_0() const { return ___canonicalTileId_0; }
	inline CanonicalTileId_t4184902996 * get_address_of_canonicalTileId_0() { return &___canonicalTileId_0; }
	inline void set_canonicalTileId_0(CanonicalTileId_t4184902996  value)
	{
		___canonicalTileId_0 = value;
	}

	inline static int32_t get_offset_of_mapid_1() { return static_cast<int32_t>(offsetof(DataFetcherParameters_t4072360282, ___mapid_1)); }
	inline String_t* get_mapid_1() const { return ___mapid_1; }
	inline String_t** get_address_of_mapid_1() { return &___mapid_1; }
	inline void set_mapid_1(String_t* value)
	{
		___mapid_1 = value;
		Il2CppCodeGenWriteBarrier((&___mapid_1), value);
	}

	inline static int32_t get_offset_of_tile_2() { return static_cast<int32_t>(offsetof(DataFetcherParameters_t4072360282, ___tile_2)); }
	inline UnityTile_t2405085845 * get_tile_2() const { return ___tile_2; }
	inline UnityTile_t2405085845 ** get_address_of_tile_2() { return &___tile_2; }
	inline void set_tile_2(UnityTile_t2405085845 * value)
	{
		___tile_2 = value;
		Il2CppCodeGenWriteBarrier((&___tile_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAFETCHERPARAMETERS_T4072360282_H
#ifndef STATE_T2862325545_H
#define STATE_T2862325545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Map.Tile/State
struct  State_t2862325545 
{
public:
	// System.Int32 Mapbox.Map.Tile/State::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(State_t2862325545, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATE_T2862325545_H
#ifndef TILEERROREVENTARGS_T942940053_H
#define TILEERROREVENTARGS_T942940053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Map.TileErrorEventArgs
struct  TileErrorEventArgs_t942940053  : public EventArgs_t3591816995
{
public:
	// Mapbox.Map.CanonicalTileId Mapbox.Map.TileErrorEventArgs::TileId
	CanonicalTileId_t4184902996  ___TileId_1;
	// System.Collections.Generic.List`1<System.Exception> Mapbox.Map.TileErrorEventArgs::Exceptions
	List_1_t2908811991 * ___Exceptions_2;
	// Mapbox.Unity.MeshGeneration.Data.UnityTile Mapbox.Map.TileErrorEventArgs::UnityTileInstance
	UnityTile_t2405085845 * ___UnityTileInstance_3;
	// System.Type Mapbox.Map.TileErrorEventArgs::TileType
	Type_t * ___TileType_4;

public:
	inline static int32_t get_offset_of_TileId_1() { return static_cast<int32_t>(offsetof(TileErrorEventArgs_t942940053, ___TileId_1)); }
	inline CanonicalTileId_t4184902996  get_TileId_1() const { return ___TileId_1; }
	inline CanonicalTileId_t4184902996 * get_address_of_TileId_1() { return &___TileId_1; }
	inline void set_TileId_1(CanonicalTileId_t4184902996  value)
	{
		___TileId_1 = value;
	}

	inline static int32_t get_offset_of_Exceptions_2() { return static_cast<int32_t>(offsetof(TileErrorEventArgs_t942940053, ___Exceptions_2)); }
	inline List_1_t2908811991 * get_Exceptions_2() const { return ___Exceptions_2; }
	inline List_1_t2908811991 ** get_address_of_Exceptions_2() { return &___Exceptions_2; }
	inline void set_Exceptions_2(List_1_t2908811991 * value)
	{
		___Exceptions_2 = value;
		Il2CppCodeGenWriteBarrier((&___Exceptions_2), value);
	}

	inline static int32_t get_offset_of_UnityTileInstance_3() { return static_cast<int32_t>(offsetof(TileErrorEventArgs_t942940053, ___UnityTileInstance_3)); }
	inline UnityTile_t2405085845 * get_UnityTileInstance_3() const { return ___UnityTileInstance_3; }
	inline UnityTile_t2405085845 ** get_address_of_UnityTileInstance_3() { return &___UnityTileInstance_3; }
	inline void set_UnityTileInstance_3(UnityTile_t2405085845 * value)
	{
		___UnityTileInstance_3 = value;
		Il2CppCodeGenWriteBarrier((&___UnityTileInstance_3), value);
	}

	inline static int32_t get_offset_of_TileType_4() { return static_cast<int32_t>(offsetof(TileErrorEventArgs_t942940053, ___TileType_4)); }
	inline Type_t * get_TileType_4() const { return ___TileType_4; }
	inline Type_t ** get_address_of_TileType_4() { return &___TileType_4; }
	inline void set_TileType_4(Type_t * value)
	{
		___TileType_4 = value;
		Il2CppCodeGenWriteBarrier((&___TileType_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILEERROREVENTARGS_T942940053_H
#ifndef TILETERRAINTYPE_T1728794826_H
#define TILETERRAINTYPE_T1728794826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Map.TileTerrainType
struct  TileTerrainType_t1728794826 
{
public:
	// System.Int32 Mapbox.Unity.Map.TileTerrainType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TileTerrainType_t1728794826, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILETERRAINTYPE_T1728794826_H
#ifndef TILEPROPERTYSTATE_T855605749_H
#define TILEPROPERTYSTATE_T855605749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState
struct  TilePropertyState_t855605749 
{
public:
	// System.Int32 Mapbox.Unity.MeshGeneration.Enums.TilePropertyState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TilePropertyState_t855605749, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILEPROPERTYSTATE_T855605749_H
#ifndef RECTD_T151583371_H
#define RECTD_T151583371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Utils.RectD
struct  RectD_t151583371 
{
public:
	// Mapbox.Utils.Vector2d Mapbox.Utils.RectD::<Min>k__BackingField
	Vector2d_t1865246568  ___U3CMinU3Ek__BackingField_0;
	// Mapbox.Utils.Vector2d Mapbox.Utils.RectD::<Max>k__BackingField
	Vector2d_t1865246568  ___U3CMaxU3Ek__BackingField_1;
	// Mapbox.Utils.Vector2d Mapbox.Utils.RectD::<Size>k__BackingField
	Vector2d_t1865246568  ___U3CSizeU3Ek__BackingField_2;
	// Mapbox.Utils.Vector2d Mapbox.Utils.RectD::<Center>k__BackingField
	Vector2d_t1865246568  ___U3CCenterU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CMinU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RectD_t151583371, ___U3CMinU3Ek__BackingField_0)); }
	inline Vector2d_t1865246568  get_U3CMinU3Ek__BackingField_0() const { return ___U3CMinU3Ek__BackingField_0; }
	inline Vector2d_t1865246568 * get_address_of_U3CMinU3Ek__BackingField_0() { return &___U3CMinU3Ek__BackingField_0; }
	inline void set_U3CMinU3Ek__BackingField_0(Vector2d_t1865246568  value)
	{
		___U3CMinU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMaxU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RectD_t151583371, ___U3CMaxU3Ek__BackingField_1)); }
	inline Vector2d_t1865246568  get_U3CMaxU3Ek__BackingField_1() const { return ___U3CMaxU3Ek__BackingField_1; }
	inline Vector2d_t1865246568 * get_address_of_U3CMaxU3Ek__BackingField_1() { return &___U3CMaxU3Ek__BackingField_1; }
	inline void set_U3CMaxU3Ek__BackingField_1(Vector2d_t1865246568  value)
	{
		___U3CMaxU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSizeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RectD_t151583371, ___U3CSizeU3Ek__BackingField_2)); }
	inline Vector2d_t1865246568  get_U3CSizeU3Ek__BackingField_2() const { return ___U3CSizeU3Ek__BackingField_2; }
	inline Vector2d_t1865246568 * get_address_of_U3CSizeU3Ek__BackingField_2() { return &___U3CSizeU3Ek__BackingField_2; }
	inline void set_U3CSizeU3Ek__BackingField_2(Vector2d_t1865246568  value)
	{
		___U3CSizeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CCenterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RectD_t151583371, ___U3CCenterU3Ek__BackingField_3)); }
	inline Vector2d_t1865246568  get_U3CCenterU3Ek__BackingField_3() const { return ___U3CCenterU3Ek__BackingField_3; }
	inline Vector2d_t1865246568 * get_address_of_U3CCenterU3Ek__BackingField_3() { return &___U3CCenterU3Ek__BackingField_3; }
	inline void set_U3CCenterU3Ek__BackingField_3(Vector2d_t1865246568  value)
	{
		___U3CCenterU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTD_T151583371_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef GCHANDLETYPE_T3432586689_H
#define GCHANDLETYPE_T3432586689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t3432586689 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GCHandleType_t3432586689, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLETYPE_T3432586689_H
#ifndef FORMATTERASSEMBLYSTYLE_T868039825_H
#define FORMATTERASSEMBLYSTYLE_T868039825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_t868039825 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t868039825, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERASSEMBLYSTYLE_T868039825_H
#ifndef FORMATTERTYPESTYLE_T3400733584_H
#define FORMATTERTYPESTYLE_T3400733584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct  FormatterTypeStyle_t3400733584 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_t3400733584, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERTYPESTYLE_T3400733584_H
#ifndef TYPEFILTERLEVEL_T977535029_H
#define TYPEFILTERLEVEL_T977535029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.TypeFilterLevel
struct  TypeFilterLevel_t977535029 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.TypeFilterLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeFilterLevel_t977535029, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFILTERLEVEL_T977535029_H
#ifndef STREAMINGCONTEXTSTATES_T3580100459_H
#define STREAMINGCONTEXTSTATES_T3580100459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t3580100459 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t3580100459, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGCONTEXTSTATES_T3580100459_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef BOUNDEDPLANE_T927016382_H
#define BOUNDEDPLANE_T927016382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARInterface.BoundedPlane
struct  BoundedPlane_t927016382 
{
public:
	// System.String UnityARInterface.BoundedPlane::id
	String_t* ___id_0;
	// UnityEngine.Vector3 UnityARInterface.BoundedPlane::center
	Vector3_t3722313464  ___center_1;
	// UnityEngine.Vector2 UnityARInterface.BoundedPlane::extents
	Vector2_t2156229523  ___extents_2;
	// UnityEngine.Quaternion UnityARInterface.BoundedPlane::rotation
	Quaternion_t2301928331  ___rotation_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t927016382, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((&___id_0), value);
	}

	inline static int32_t get_offset_of_center_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t927016382, ___center_1)); }
	inline Vector3_t3722313464  get_center_1() const { return ___center_1; }
	inline Vector3_t3722313464 * get_address_of_center_1() { return &___center_1; }
	inline void set_center_1(Vector3_t3722313464  value)
	{
		___center_1 = value;
	}

	inline static int32_t get_offset_of_extents_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t927016382, ___extents_2)); }
	inline Vector2_t2156229523  get_extents_2() const { return ___extents_2; }
	inline Vector2_t2156229523 * get_address_of_extents_2() { return &___extents_2; }
	inline void set_extents_2(Vector2_t2156229523  value)
	{
		___extents_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t927016382, ___rotation_3)); }
	inline Quaternion_t2301928331  get_rotation_3() const { return ___rotation_3; }
	inline Quaternion_t2301928331 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(Quaternion_t2301928331  value)
	{
		___rotation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityARInterface.BoundedPlane
struct BoundedPlane_t927016382_marshaled_pinvoke
{
	char* ___id_0;
	Vector3_t3722313464  ___center_1;
	Vector2_t2156229523  ___extents_2;
	Quaternion_t2301928331  ___rotation_3;
};
// Native definition for COM marshalling of UnityARInterface.BoundedPlane
struct BoundedPlane_t927016382_marshaled_com
{
	Il2CppChar* ___id_0;
	Vector3_t3722313464  ___center_1;
	Vector2_t2156229523  ___extents_2;
	Quaternion_t2301928331  ___rotation_3;
};
#endif // BOUNDEDPLANE_T927016382_H
#ifndef CUBEMAPFACE_T1358225318_H
#define CUBEMAPFACE_T1358225318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CubemapFace
struct  CubemapFace_t1358225318 
{
public:
	// System.Int32 UnityEngine.CubemapFace::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CubemapFace_t1358225318, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUBEMAPFACE_T1358225318_H
#ifndef FILTERMODE_T3761284007_H
#define FILTERMODE_T3761284007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FilterMode
struct  FilterMode_t3761284007 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FilterMode_t3761284007, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILTERMODE_T3761284007_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef BUILTINRENDERTEXTURETYPE_T2399837169_H
#define BUILTINRENDERTEXTURETYPE_T2399837169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.BuiltinRenderTextureType
struct  BuiltinRenderTextureType_t2399837169 
{
public:
	// System.Int32 UnityEngine.Rendering.BuiltinRenderTextureType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BuiltinRenderTextureType_t2399837169, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILTINRENDERTEXTURETYPE_T2399837169_H
#ifndef CAMERAEVENT_T2033959522_H
#define CAMERAEVENT_T2033959522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CameraEvent
struct  CameraEvent_t2033959522 
{
public:
	// System.Int32 UnityEngine.Rendering.CameraEvent::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraEvent_t2033959522, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAEVENT_T2033959522_H
#ifndef COMMANDBUFFER_T2206337031_H
#define COMMANDBUFFER_T2206337031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CommandBuffer
struct  CommandBuffer_t2206337031  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CommandBuffer_t2206337031, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMANDBUFFER_T2206337031_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef TEXTUREWRAPMODE_T584250749_H
#define TEXTUREWRAPMODE_T584250749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t584250749 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureWrapMode_t584250749, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREWRAPMODE_T584250749_H
#ifndef ARPLANEANCHORALIGNMENT_T2311256121_H
#define ARPLANEANCHORALIGNMENT_T2311256121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchorAlignment
struct  ARPlaneAnchorAlignment_t2311256121 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARPlaneAnchorAlignment::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARPlaneAnchorAlignment_t2311256121, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEANCHORALIGNMENT_T2311256121_H
#ifndef ARTEXTUREHANDLES_T852411561_H
#define ARTEXTUREHANDLES_T852411561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTextureHandles
struct  ARTextureHandles_t852411561 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.ARTextureHandles::textureY
	intptr_t ___textureY_0;
	// System.IntPtr UnityEngine.XR.iOS.ARTextureHandles::textureCbCr
	intptr_t ___textureCbCr_1;

public:
	inline static int32_t get_offset_of_textureY_0() { return static_cast<int32_t>(offsetof(ARTextureHandles_t852411561, ___textureY_0)); }
	inline intptr_t get_textureY_0() const { return ___textureY_0; }
	inline intptr_t* get_address_of_textureY_0() { return &___textureY_0; }
	inline void set_textureY_0(intptr_t value)
	{
		___textureY_0 = value;
	}

	inline static int32_t get_offset_of_textureCbCr_1() { return static_cast<int32_t>(offsetof(ARTextureHandles_t852411561, ___textureCbCr_1)); }
	inline intptr_t get_textureCbCr_1() const { return ___textureCbCr_1; }
	inline intptr_t* get_address_of_textureCbCr_1() { return &___textureCbCr_1; }
	inline void set_textureCbCr_1(intptr_t value)
	{
		___textureCbCr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTEXTUREHANDLES_T852411561_H
#ifndef ARTRACKINGSTATE_T3182235352_H
#define ARTRACKINGSTATE_T3182235352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingState
struct  ARTrackingState_t3182235352 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingState_t3182235352, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTRACKINGSTATE_T3182235352_H
#ifndef ARTRACKINGSTATEREASON_T2348933773_H
#define ARTRACKINGSTATEREASON_T2348933773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingStateReason
struct  ARTrackingStateReason_t2348933773 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingStateReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingStateReason_t2348933773, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTRACKINGSTATEREASON_T2348933773_H
#ifndef ARUSERANCHOR_T1406831531_H
#define ARUSERANCHOR_T1406831531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARUserAnchor
struct  ARUserAnchor_t1406831531 
{
public:
	// System.String UnityEngine.XR.iOS.ARUserAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARUserAnchor::transform
	Matrix4x4_t1817901843  ___transform_1;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARUserAnchor_t1406831531, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___identifier_0), value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARUserAnchor_t1406831531, ___transform_1)); }
	inline Matrix4x4_t1817901843  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t1817901843 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t1817901843  value)
	{
		___transform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARUserAnchor
struct ARUserAnchor_t1406831531_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t1817901843  ___transform_1;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARUserAnchor
struct ARUserAnchor_t1406831531_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t1817901843  ___transform_1;
};
#endif // ARUSERANCHOR_T1406831531_H
#ifndef LIGHTDATATYPE_T2323651587_H
#define LIGHTDATATYPE_T2323651587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.LightDataType
struct  LightDataType_t2323651587 
{
public:
	// System.Int32 UnityEngine.XR.iOS.LightDataType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LightDataType_t2323651587, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHTDATATYPE_T2323651587_H
#ifndef MARSHALDIRECTIONALLIGHTESTIMATE_T3803901471_H
#define MARSHALDIRECTIONALLIGHTESTIMATE_T3803901471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.MarshalDirectionalLightEstimate
struct  MarshalDirectionalLightEstimate_t3803901471 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.MarshalDirectionalLightEstimate::primaryDirAndIntensity
	Vector4_t3319028937  ___primaryDirAndIntensity_0;
	// System.IntPtr UnityEngine.XR.iOS.MarshalDirectionalLightEstimate::sphericalHarmonicCoefficientsPtr
	intptr_t ___sphericalHarmonicCoefficientsPtr_1;

public:
	inline static int32_t get_offset_of_primaryDirAndIntensity_0() { return static_cast<int32_t>(offsetof(MarshalDirectionalLightEstimate_t3803901471, ___primaryDirAndIntensity_0)); }
	inline Vector4_t3319028937  get_primaryDirAndIntensity_0() const { return ___primaryDirAndIntensity_0; }
	inline Vector4_t3319028937 * get_address_of_primaryDirAndIntensity_0() { return &___primaryDirAndIntensity_0; }
	inline void set_primaryDirAndIntensity_0(Vector4_t3319028937  value)
	{
		___primaryDirAndIntensity_0 = value;
	}

	inline static int32_t get_offset_of_sphericalHarmonicCoefficientsPtr_1() { return static_cast<int32_t>(offsetof(MarshalDirectionalLightEstimate_t3803901471, ___sphericalHarmonicCoefficientsPtr_1)); }
	inline intptr_t get_sphericalHarmonicCoefficientsPtr_1() const { return ___sphericalHarmonicCoefficientsPtr_1; }
	inline intptr_t* get_address_of_sphericalHarmonicCoefficientsPtr_1() { return &___sphericalHarmonicCoefficientsPtr_1; }
	inline void set_sphericalHarmonicCoefficientsPtr_1(intptr_t value)
	{
		___sphericalHarmonicCoefficientsPtr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALDIRECTIONALLIGHTESTIMATE_T3803901471_H
#ifndef UNITYARALIGNMENT_T3792119710_H
#define UNITYARALIGNMENT_T3792119710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAlignment
struct  UnityARAlignment_t3792119710 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARAlignment::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARAlignment_t3792119710, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARALIGNMENT_T3792119710_H
#ifndef UNITYARDIRECTIONALLIGHTESTIMATE_T2924556994_H
#define UNITYARDIRECTIONALLIGHTESTIMATE_T2924556994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate
struct  UnityARDirectionalLightEstimate_t2924556994  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::primaryLightDirection
	Vector3_t3722313464  ___primaryLightDirection_0;
	// System.Single UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::primaryLightIntensity
	float ___primaryLightIntensity_1;
	// System.Single[] UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::sphericalHarmonicsCoefficients
	SingleU5BU5D_t1444911251* ___sphericalHarmonicsCoefficients_2;

public:
	inline static int32_t get_offset_of_primaryLightDirection_0() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_t2924556994, ___primaryLightDirection_0)); }
	inline Vector3_t3722313464  get_primaryLightDirection_0() const { return ___primaryLightDirection_0; }
	inline Vector3_t3722313464 * get_address_of_primaryLightDirection_0() { return &___primaryLightDirection_0; }
	inline void set_primaryLightDirection_0(Vector3_t3722313464  value)
	{
		___primaryLightDirection_0 = value;
	}

	inline static int32_t get_offset_of_primaryLightIntensity_1() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_t2924556994, ___primaryLightIntensity_1)); }
	inline float get_primaryLightIntensity_1() const { return ___primaryLightIntensity_1; }
	inline float* get_address_of_primaryLightIntensity_1() { return &___primaryLightIntensity_1; }
	inline void set_primaryLightIntensity_1(float value)
	{
		___primaryLightIntensity_1 = value;
	}

	inline static int32_t get_offset_of_sphericalHarmonicsCoefficients_2() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_t2924556994, ___sphericalHarmonicsCoefficients_2)); }
	inline SingleU5BU5D_t1444911251* get_sphericalHarmonicsCoefficients_2() const { return ___sphericalHarmonicsCoefficients_2; }
	inline SingleU5BU5D_t1444911251** get_address_of_sphericalHarmonicsCoefficients_2() { return &___sphericalHarmonicsCoefficients_2; }
	inline void set_sphericalHarmonicsCoefficients_2(SingleU5BU5D_t1444911251* value)
	{
		___sphericalHarmonicsCoefficients_2 = value;
		Il2CppCodeGenWriteBarrier((&___sphericalHarmonicsCoefficients_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARDIRECTIONALLIGHTESTIMATE_T2924556994_H
#ifndef UNITYARFACEGEOMETRY_T4178775532_H
#define UNITYARFACEGEOMETRY_T4178775532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARFaceGeometry
struct  UnityARFaceGeometry_t4178775532 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARFaceGeometry::vertexCount
	int32_t ___vertexCount_0;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceGeometry::vertices
	intptr_t ___vertices_1;
	// System.Int32 UnityEngine.XR.iOS.UnityARFaceGeometry::textureCoordinateCount
	int32_t ___textureCoordinateCount_2;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceGeometry::textureCoordinates
	intptr_t ___textureCoordinates_3;
	// System.Int32 UnityEngine.XR.iOS.UnityARFaceGeometry::triangleCount
	int32_t ___triangleCount_4;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceGeometry::triangleIndices
	intptr_t ___triangleIndices_5;

public:
	inline static int32_t get_offset_of_vertexCount_0() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___vertexCount_0)); }
	inline int32_t get_vertexCount_0() const { return ___vertexCount_0; }
	inline int32_t* get_address_of_vertexCount_0() { return &___vertexCount_0; }
	inline void set_vertexCount_0(int32_t value)
	{
		___vertexCount_0 = value;
	}

	inline static int32_t get_offset_of_vertices_1() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___vertices_1)); }
	inline intptr_t get_vertices_1() const { return ___vertices_1; }
	inline intptr_t* get_address_of_vertices_1() { return &___vertices_1; }
	inline void set_vertices_1(intptr_t value)
	{
		___vertices_1 = value;
	}

	inline static int32_t get_offset_of_textureCoordinateCount_2() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___textureCoordinateCount_2)); }
	inline int32_t get_textureCoordinateCount_2() const { return ___textureCoordinateCount_2; }
	inline int32_t* get_address_of_textureCoordinateCount_2() { return &___textureCoordinateCount_2; }
	inline void set_textureCoordinateCount_2(int32_t value)
	{
		___textureCoordinateCount_2 = value;
	}

	inline static int32_t get_offset_of_textureCoordinates_3() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___textureCoordinates_3)); }
	inline intptr_t get_textureCoordinates_3() const { return ___textureCoordinates_3; }
	inline intptr_t* get_address_of_textureCoordinates_3() { return &___textureCoordinates_3; }
	inline void set_textureCoordinates_3(intptr_t value)
	{
		___textureCoordinates_3 = value;
	}

	inline static int32_t get_offset_of_triangleCount_4() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___triangleCount_4)); }
	inline int32_t get_triangleCount_4() const { return ___triangleCount_4; }
	inline int32_t* get_address_of_triangleCount_4() { return &___triangleCount_4; }
	inline void set_triangleCount_4(int32_t value)
	{
		___triangleCount_4 = value;
	}

	inline static int32_t get_offset_of_triangleIndices_5() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___triangleIndices_5)); }
	inline intptr_t get_triangleIndices_5() const { return ___triangleIndices_5; }
	inline intptr_t* get_address_of_triangleIndices_5() { return &___triangleIndices_5; }
	inline void set_triangleIndices_5(intptr_t value)
	{
		___triangleIndices_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARFACEGEOMETRY_T4178775532_H
#ifndef UNITYARMATRIX4X4_T4073345847_H
#define UNITYARMATRIX4X4_T4073345847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrix4x4
struct  UnityARMatrix4x4_t4073345847 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column0
	Vector4_t3319028937  ___column0_0;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column1
	Vector4_t3319028937  ___column1_1;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column2
	Vector4_t3319028937  ___column2_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column3
	Vector4_t3319028937  ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column0_0)); }
	inline Vector4_t3319028937  get_column0_0() const { return ___column0_0; }
	inline Vector4_t3319028937 * get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(Vector4_t3319028937  value)
	{
		___column0_0 = value;
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column1_1)); }
	inline Vector4_t3319028937  get_column1_1() const { return ___column1_1; }
	inline Vector4_t3319028937 * get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(Vector4_t3319028937  value)
	{
		___column1_1 = value;
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column2_2)); }
	inline Vector4_t3319028937  get_column2_2() const { return ___column2_2; }
	inline Vector4_t3319028937 * get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(Vector4_t3319028937  value)
	{
		___column2_2 = value;
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column3_3)); }
	inline Vector4_t3319028937  get_column3_3() const { return ___column3_3; }
	inline Vector4_t3319028937 * get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(Vector4_t3319028937  value)
	{
		___column3_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIX4X4_T4073345847_H
#ifndef UNITYARPLANEDETECTION_T1367733575_H
#define UNITYARPLANEDETECTION_T1367733575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARPlaneDetection
struct  UnityARPlaneDetection_t1367733575 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneDetection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARPlaneDetection_t1367733575, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARPLANEDETECTION_T1367733575_H
#ifndef UNITYARSESSIONRUNOPTION_T942967030_H
#define UNITYARSESSIONRUNOPTION_T942967030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionRunOption
struct  UnityARSessionRunOption_t942967030 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARSessionRunOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARSessionRunOption_t942967030, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARSESSIONRUNOPTION_T942967030_H
#ifndef UNITYVIDEOPARAMS_T4155354995_H
#define UNITYVIDEOPARAMS_T4155354995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityVideoParams
struct  UnityVideoParams_t4155354995 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yWidth
	int32_t ___yWidth_0;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yHeight
	int32_t ___yHeight_1;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::screenOrientation
	int32_t ___screenOrientation_2;
	// System.Single UnityEngine.XR.iOS.UnityVideoParams::texCoordScale
	float ___texCoordScale_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityVideoParams::cvPixelBufferPtr
	intptr_t ___cvPixelBufferPtr_4;

public:
	inline static int32_t get_offset_of_yWidth_0() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___yWidth_0)); }
	inline int32_t get_yWidth_0() const { return ___yWidth_0; }
	inline int32_t* get_address_of_yWidth_0() { return &___yWidth_0; }
	inline void set_yWidth_0(int32_t value)
	{
		___yWidth_0 = value;
	}

	inline static int32_t get_offset_of_yHeight_1() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___yHeight_1)); }
	inline int32_t get_yHeight_1() const { return ___yHeight_1; }
	inline int32_t* get_address_of_yHeight_1() { return &___yHeight_1; }
	inline void set_yHeight_1(int32_t value)
	{
		___yHeight_1 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_2() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___screenOrientation_2)); }
	inline int32_t get_screenOrientation_2() const { return ___screenOrientation_2; }
	inline int32_t* get_address_of_screenOrientation_2() { return &___screenOrientation_2; }
	inline void set_screenOrientation_2(int32_t value)
	{
		___screenOrientation_2 = value;
	}

	inline static int32_t get_offset_of_texCoordScale_3() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___texCoordScale_3)); }
	inline float get_texCoordScale_3() const { return ___texCoordScale_3; }
	inline float* get_address_of_texCoordScale_3() { return &___texCoordScale_3; }
	inline void set_texCoordScale_3(float value)
	{
		___texCoordScale_3 = value;
	}

	inline static int32_t get_offset_of_cvPixelBufferPtr_4() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___cvPixelBufferPtr_4)); }
	inline intptr_t get_cvPixelBufferPtr_4() const { return ___cvPixelBufferPtr_4; }
	inline intptr_t* get_address_of_cvPixelBufferPtr_4() { return &___cvPixelBufferPtr_4; }
	inline void set_cvPixelBufferPtr_4(intptr_t value)
	{
		___cvPixelBufferPtr_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYVIDEOPARAMS_T4155354995_H
#ifndef SERIALIZABLEFROMEDITORMESSAGE_T3245497382_H
#define SERIALIZABLEFROMEDITORMESSAGE_T3245497382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableFromEditorMessage
struct  serializableFromEditorMessage_t3245497382  : public RuntimeObject
{
public:
	// System.Guid Utils.serializableFromEditorMessage::subMessageId
	Guid_t  ___subMessageId_0;
	// Utils.serializableARKitInit Utils.serializableFromEditorMessage::arkitConfigMsg
	serializableARKitInit_t3885066048 * ___arkitConfigMsg_1;

public:
	inline static int32_t get_offset_of_subMessageId_0() { return static_cast<int32_t>(offsetof(serializableFromEditorMessage_t3245497382, ___subMessageId_0)); }
	inline Guid_t  get_subMessageId_0() const { return ___subMessageId_0; }
	inline Guid_t * get_address_of_subMessageId_0() { return &___subMessageId_0; }
	inline void set_subMessageId_0(Guid_t  value)
	{
		___subMessageId_0 = value;
	}

	inline static int32_t get_offset_of_arkitConfigMsg_1() { return static_cast<int32_t>(offsetof(serializableFromEditorMessage_t3245497382, ___arkitConfigMsg_1)); }
	inline serializableARKitInit_t3885066048 * get_arkitConfigMsg_1() const { return ___arkitConfigMsg_1; }
	inline serializableARKitInit_t3885066048 ** get_address_of_arkitConfigMsg_1() { return &___arkitConfigMsg_1; }
	inline void set_arkitConfigMsg_1(serializableARKitInit_t3885066048 * value)
	{
		___arkitConfigMsg_1 = value;
		Il2CppCodeGenWriteBarrier((&___arkitConfigMsg_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEFROMEDITORMESSAGE_T3245497382_H
#ifndef TILE_T1097901272_H
#define TILE_T1097901272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Map.Tile
struct  Tile_t1097901272  : public RuntimeObject
{
public:
	// Mapbox.Map.CanonicalTileId Mapbox.Map.Tile::_id
	CanonicalTileId_t4184902996  ____id_0;
	// System.Collections.Generic.List`1<System.Exception> Mapbox.Map.Tile::_exceptions
	List_1_t2908811991 * ____exceptions_1;
	// Mapbox.Map.Tile/State Mapbox.Map.Tile::_state
	int32_t ____state_2;
	// Mapbox.Platform.IAsyncRequest Mapbox.Map.Tile::_request
	RuntimeObject* ____request_3;
	// System.Action Mapbox.Map.Tile::_callback
	Action_t1264377477 * ____callback_4;
	// System.Collections.Generic.List`1<System.String> Mapbox.Map.Tile::ids
	List_1_t3319525431 * ___ids_5;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(Tile_t1097901272, ____id_0)); }
	inline CanonicalTileId_t4184902996  get__id_0() const { return ____id_0; }
	inline CanonicalTileId_t4184902996 * get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(CanonicalTileId_t4184902996  value)
	{
		____id_0 = value;
	}

	inline static int32_t get_offset_of__exceptions_1() { return static_cast<int32_t>(offsetof(Tile_t1097901272, ____exceptions_1)); }
	inline List_1_t2908811991 * get__exceptions_1() const { return ____exceptions_1; }
	inline List_1_t2908811991 ** get_address_of__exceptions_1() { return &____exceptions_1; }
	inline void set__exceptions_1(List_1_t2908811991 * value)
	{
		____exceptions_1 = value;
		Il2CppCodeGenWriteBarrier((&____exceptions_1), value);
	}

	inline static int32_t get_offset_of__state_2() { return static_cast<int32_t>(offsetof(Tile_t1097901272, ____state_2)); }
	inline int32_t get__state_2() const { return ____state_2; }
	inline int32_t* get_address_of__state_2() { return &____state_2; }
	inline void set__state_2(int32_t value)
	{
		____state_2 = value;
	}

	inline static int32_t get_offset_of__request_3() { return static_cast<int32_t>(offsetof(Tile_t1097901272, ____request_3)); }
	inline RuntimeObject* get__request_3() const { return ____request_3; }
	inline RuntimeObject** get_address_of__request_3() { return &____request_3; }
	inline void set__request_3(RuntimeObject* value)
	{
		____request_3 = value;
		Il2CppCodeGenWriteBarrier((&____request_3), value);
	}

	inline static int32_t get_offset_of__callback_4() { return static_cast<int32_t>(offsetof(Tile_t1097901272, ____callback_4)); }
	inline Action_t1264377477 * get__callback_4() const { return ____callback_4; }
	inline Action_t1264377477 ** get_address_of__callback_4() { return &____callback_4; }
	inline void set__callback_4(Action_t1264377477 * value)
	{
		____callback_4 = value;
		Il2CppCodeGenWriteBarrier((&____callback_4), value);
	}

	inline static int32_t get_offset_of_ids_5() { return static_cast<int32_t>(offsetof(Tile_t1097901272, ___ids_5)); }
	inline List_1_t3319525431 * get_ids_5() const { return ___ids_5; }
	inline List_1_t3319525431 ** get_address_of_ids_5() { return &___ids_5; }
	inline void set_ids_5(List_1_t3319525431 * value)
	{
		___ids_5 = value;
		Il2CppCodeGenWriteBarrier((&___ids_5), value);
	}
};

struct Tile_t1097901272_StaticFields
{
public:
	// System.Func`2<System.Exception,System.String> Mapbox.Map.Tile::<>f__am$cache0
	Func_2_t905536786 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(Tile_t1097901272_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Func_2_t905536786 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Func_2_t905536786 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Func_2_t905536786 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILE_T1097901272_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef STREAMINGCONTEXT_T3711869237_H
#define STREAMINGCONTEXT_T3711869237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3711869237 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T3711869237_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef RENDERTARGETIDENTIFIER_T2079184500_H
#define RENDERTARGETIDENTIFIER_T2079184500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.RenderTargetIdentifier
struct  RenderTargetIdentifier_t2079184500 
{
public:
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_0;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_2;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_3;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_4;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_5;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_6;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_NameID_1() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_NameID_1)); }
	inline int32_t get_m_NameID_1() const { return ___m_NameID_1; }
	inline int32_t* get_address_of_m_NameID_1() { return &___m_NameID_1; }
	inline void set_m_NameID_1(int32_t value)
	{
		___m_NameID_1 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_2() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_InstanceID_2)); }
	inline int32_t get_m_InstanceID_2() const { return ___m_InstanceID_2; }
	inline int32_t* get_address_of_m_InstanceID_2() { return &___m_InstanceID_2; }
	inline void set_m_InstanceID_2(int32_t value)
	{
		___m_InstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_BufferPointer_3() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_BufferPointer_3)); }
	inline intptr_t get_m_BufferPointer_3() const { return ___m_BufferPointer_3; }
	inline intptr_t* get_address_of_m_BufferPointer_3() { return &___m_BufferPointer_3; }
	inline void set_m_BufferPointer_3(intptr_t value)
	{
		___m_BufferPointer_3 = value;
	}

	inline static int32_t get_offset_of_m_MipLevel_4() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_MipLevel_4)); }
	inline int32_t get_m_MipLevel_4() const { return ___m_MipLevel_4; }
	inline int32_t* get_address_of_m_MipLevel_4() { return &___m_MipLevel_4; }
	inline void set_m_MipLevel_4(int32_t value)
	{
		___m_MipLevel_4 = value;
	}

	inline static int32_t get_offset_of_m_CubeFace_5() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_CubeFace_5)); }
	inline int32_t get_m_CubeFace_5() const { return ___m_CubeFace_5; }
	inline int32_t* get_address_of_m_CubeFace_5() { return &___m_CubeFace_5; }
	inline void set_m_CubeFace_5(int32_t value)
	{
		___m_CubeFace_5 = value;
	}

	inline static int32_t get_offset_of_m_DepthSlice_6() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_DepthSlice_6)); }
	inline int32_t get_m_DepthSlice_6() const { return ___m_DepthSlice_6; }
	inline int32_t* get_address_of_m_DepthSlice_6() { return &___m_DepthSlice_6; }
	inline void set_m_DepthSlice_6(int32_t value)
	{
		___m_DepthSlice_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTARGETIDENTIFIER_T2079184500_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef ARKITWORLDTRACKINGSESSIONCONFIGURATION_T273386347_H
#define ARKITWORLDTRACKINGSESSIONCONFIGURATION_T273386347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct  ARKitWorldTrackingSessionConfiguration_t273386347 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::alignment
	int32_t ___alignment_0;
	// UnityEngine.XR.iOS.UnityARPlaneDetection UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::planeDetection
	int32_t ___planeDetection_1;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_2;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_3;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_planeDetection_1() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___planeDetection_1)); }
	inline int32_t get_planeDetection_1() const { return ___planeDetection_1; }
	inline int32_t* get_address_of_planeDetection_1() { return &___planeDetection_1; }
	inline void set_planeDetection_1(int32_t value)
	{
		___planeDetection_1 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_2() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___getPointCloudData_2)); }
	inline bool get_getPointCloudData_2() const { return ___getPointCloudData_2; }
	inline bool* get_address_of_getPointCloudData_2() { return &___getPointCloudData_2; }
	inline void set_getPointCloudData_2(bool value)
	{
		___getPointCloudData_2 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_3() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___enableLightEstimation_3)); }
	inline bool get_enableLightEstimation_3() const { return ___enableLightEstimation_3; }
	inline bool* get_address_of_enableLightEstimation_3() { return &___enableLightEstimation_3; }
	inline void set_enableLightEstimation_3(bool value)
	{
		___enableLightEstimation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
};
#endif // ARKITWORLDTRACKINGSESSIONCONFIGURATION_T273386347_H
#ifndef ARPLANEANCHOR_T2049372221_H
#define ARPLANEANCHOR_T2049372221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchor
struct  ARPlaneAnchor_t2049372221 
{
public:
	// System.String UnityEngine.XR.iOS.ARPlaneAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARPlaneAnchor::transform
	Matrix4x4_t1817901843  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.ARPlaneAnchor::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::center
	Vector3_t3722313464  ___center_3;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::extent
	Vector3_t3722313464  ___extent_4;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2049372221, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___identifier_0), value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2049372221, ___transform_1)); }
	inline Matrix4x4_t1817901843  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t1817901843 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t1817901843  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2049372221, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2049372221, ___center_3)); }
	inline Vector3_t3722313464  get_center_3() const { return ___center_3; }
	inline Vector3_t3722313464 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector3_t3722313464  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2049372221, ___extent_4)); }
	inline Vector3_t3722313464  get_extent_4() const { return ___extent_4; }
	inline Vector3_t3722313464 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector3_t3722313464  value)
	{
		___extent_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t2049372221_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t1817901843  ___transform_1;
	int64_t ___alignment_2;
	Vector3_t3722313464  ___center_3;
	Vector3_t3722313464  ___extent_4;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t2049372221_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t1817901843  ___transform_1;
	int64_t ___alignment_2;
	Vector3_t3722313464  ___center_3;
	Vector3_t3722313464  ___extent_4;
};
#endif // ARPLANEANCHOR_T2049372221_H
#ifndef UNITYARANCHORDATA_T1157236668_H
#define UNITYARANCHORDATA_T1157236668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAnchorData
struct  UnityARAnchorData_t1157236668 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARAnchorData::transform
	UnityARMatrix4x4_t4073345847  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.UnityARAnchorData::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::center
	Vector4_t3319028937  ___center_3;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::extent
	Vector4_t3319028937  ___extent_4;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___transform_1)); }
	inline UnityARMatrix4x4_t4073345847  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t4073345847  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___center_3)); }
	inline Vector4_t3319028937  get_center_3() const { return ___center_3; }
	inline Vector4_t3319028937 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector4_t3319028937  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___extent_4)); }
	inline Vector4_t3319028937  get_extent_4() const { return ___extent_4; }
	inline Vector4_t3319028937 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector4_t3319028937  value)
	{
		___extent_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARANCHORDATA_T1157236668_H
#ifndef UNITYARFACEANCHORDATA_T2028622935_H
#define UNITYARFACEANCHORDATA_T2028622935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARFaceAnchorData
struct  UnityARFaceAnchorData_t2028622935 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARFaceAnchorData::transform
	UnityARMatrix4x4_t4073345847  ___transform_1;
	// UnityEngine.XR.iOS.UnityARFaceGeometry UnityEngine.XR.iOS.UnityARFaceAnchorData::faceGeometry
	UnityARFaceGeometry_t4178775532  ___faceGeometry_2;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceAnchorData::blendShapes
	intptr_t ___blendShapes_3;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2028622935, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2028622935, ___transform_1)); }
	inline UnityARMatrix4x4_t4073345847  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t4073345847  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_faceGeometry_2() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2028622935, ___faceGeometry_2)); }
	inline UnityARFaceGeometry_t4178775532  get_faceGeometry_2() const { return ___faceGeometry_2; }
	inline UnityARFaceGeometry_t4178775532 * get_address_of_faceGeometry_2() { return &___faceGeometry_2; }
	inline void set_faceGeometry_2(UnityARFaceGeometry_t4178775532  value)
	{
		___faceGeometry_2 = value;
	}

	inline static int32_t get_offset_of_blendShapes_3() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2028622935, ___blendShapes_3)); }
	inline intptr_t get_blendShapes_3() const { return ___blendShapes_3; }
	inline intptr_t* get_address_of_blendShapes_3() { return &___blendShapes_3; }
	inline void set_blendShapes_3(intptr_t value)
	{
		___blendShapes_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARFACEANCHORDATA_T2028622935_H
#ifndef UNITYARLIGHTDATA_T2160616730_H
#define UNITYARLIGHTDATA_T2160616730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightData
struct  UnityARLightData_t2160616730 
{
public:
	// UnityEngine.XR.iOS.LightDataType UnityEngine.XR.iOS.UnityARLightData::arLightingType
	int32_t ___arLightingType_0;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityARLightData::arLightEstimate
	UnityARLightEstimate_t1498306117  ___arLightEstimate_1;
	// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate UnityEngine.XR.iOS.UnityARLightData::arDirectonalLightEstimate
	UnityARDirectionalLightEstimate_t2924556994 * ___arDirectonalLightEstimate_2;

public:
	inline static int32_t get_offset_of_arLightingType_0() { return static_cast<int32_t>(offsetof(UnityARLightData_t2160616730, ___arLightingType_0)); }
	inline int32_t get_arLightingType_0() const { return ___arLightingType_0; }
	inline int32_t* get_address_of_arLightingType_0() { return &___arLightingType_0; }
	inline void set_arLightingType_0(int32_t value)
	{
		___arLightingType_0 = value;
	}

	inline static int32_t get_offset_of_arLightEstimate_1() { return static_cast<int32_t>(offsetof(UnityARLightData_t2160616730, ___arLightEstimate_1)); }
	inline UnityARLightEstimate_t1498306117  get_arLightEstimate_1() const { return ___arLightEstimate_1; }
	inline UnityARLightEstimate_t1498306117 * get_address_of_arLightEstimate_1() { return &___arLightEstimate_1; }
	inline void set_arLightEstimate_1(UnityARLightEstimate_t1498306117  value)
	{
		___arLightEstimate_1 = value;
	}

	inline static int32_t get_offset_of_arDirectonalLightEstimate_2() { return static_cast<int32_t>(offsetof(UnityARLightData_t2160616730, ___arDirectonalLightEstimate_2)); }
	inline UnityARDirectionalLightEstimate_t2924556994 * get_arDirectonalLightEstimate_2() const { return ___arDirectonalLightEstimate_2; }
	inline UnityARDirectionalLightEstimate_t2924556994 ** get_address_of_arDirectonalLightEstimate_2() { return &___arDirectonalLightEstimate_2; }
	inline void set_arDirectonalLightEstimate_2(UnityARDirectionalLightEstimate_t2924556994 * value)
	{
		___arDirectonalLightEstimate_2 = value;
		Il2CppCodeGenWriteBarrier((&___arDirectonalLightEstimate_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARLightData
struct UnityARLightData_t2160616730_marshaled_pinvoke
{
	int32_t ___arLightingType_0;
	UnityARLightEstimate_t1498306117  ___arLightEstimate_1;
	UnityARDirectionalLightEstimate_t2924556994 * ___arDirectonalLightEstimate_2;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARLightData
struct UnityARLightData_t2160616730_marshaled_com
{
	int32_t ___arLightingType_0;
	UnityARLightEstimate_t1498306117  ___arLightEstimate_1;
	UnityARDirectionalLightEstimate_t2924556994 * ___arDirectonalLightEstimate_2;
};
#endif // UNITYARLIGHTDATA_T2160616730_H
#ifndef UNITYARUSERANCHORDATA_T1976826249_H
#define UNITYARUSERANCHORDATA_T1976826249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUserAnchorData
struct  UnityARUserAnchorData_t1976826249 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARUserAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARUserAnchorData::transform
	UnityARMatrix4x4_t4073345847  ___transform_1;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t1976826249, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t1976826249, ___transform_1)); }
	inline UnityARMatrix4x4_t4073345847  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t4073345847  value)
	{
		___transform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUSERANCHORDATA_T1976826249_H
#ifndef UNITYMARSHALLIGHTDATA_T1623228070_H
#define UNITYMARSHALLIGHTDATA_T1623228070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityMarshalLightData
struct  UnityMarshalLightData_t1623228070 
{
public:
	// UnityEngine.XR.iOS.LightDataType UnityEngine.XR.iOS.UnityMarshalLightData::arLightingType
	int32_t ___arLightingType_0;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityMarshalLightData::arLightEstimate
	UnityARLightEstimate_t1498306117  ___arLightEstimate_1;
	// UnityEngine.XR.iOS.MarshalDirectionalLightEstimate UnityEngine.XR.iOS.UnityMarshalLightData::arDirectonalLightEstimate
	MarshalDirectionalLightEstimate_t3803901471  ___arDirectonalLightEstimate_2;

public:
	inline static int32_t get_offset_of_arLightingType_0() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_t1623228070, ___arLightingType_0)); }
	inline int32_t get_arLightingType_0() const { return ___arLightingType_0; }
	inline int32_t* get_address_of_arLightingType_0() { return &___arLightingType_0; }
	inline void set_arLightingType_0(int32_t value)
	{
		___arLightingType_0 = value;
	}

	inline static int32_t get_offset_of_arLightEstimate_1() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_t1623228070, ___arLightEstimate_1)); }
	inline UnityARLightEstimate_t1498306117  get_arLightEstimate_1() const { return ___arLightEstimate_1; }
	inline UnityARLightEstimate_t1498306117 * get_address_of_arLightEstimate_1() { return &___arLightEstimate_1; }
	inline void set_arLightEstimate_1(UnityARLightEstimate_t1498306117  value)
	{
		___arLightEstimate_1 = value;
	}

	inline static int32_t get_offset_of_arDirectonalLightEstimate_2() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_t1623228070, ___arDirectonalLightEstimate_2)); }
	inline MarshalDirectionalLightEstimate_t3803901471  get_arDirectonalLightEstimate_2() const { return ___arDirectonalLightEstimate_2; }
	inline MarshalDirectionalLightEstimate_t3803901471 * get_address_of_arDirectonalLightEstimate_2() { return &___arDirectonalLightEstimate_2; }
	inline void set_arDirectonalLightEstimate_2(MarshalDirectionalLightEstimate_t3803901471  value)
	{
		___arDirectonalLightEstimate_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYMARSHALLIGHTDATA_T1623228070_H
#ifndef SERIALIZABLEARKITINIT_T3885066048_H
#define SERIALIZABLEARKITINIT_T3885066048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableARKitInit
struct  serializableARKitInit_t3885066048  : public RuntimeObject
{
public:
	// Utils.serializableARSessionConfiguration Utils.serializableARKitInit::config
	serializableARSessionConfiguration_t1467016906 * ___config_0;
	// UnityEngine.XR.iOS.UnityARSessionRunOption Utils.serializableARKitInit::runOption
	int32_t ___runOption_1;

public:
	inline static int32_t get_offset_of_config_0() { return static_cast<int32_t>(offsetof(serializableARKitInit_t3885066048, ___config_0)); }
	inline serializableARSessionConfiguration_t1467016906 * get_config_0() const { return ___config_0; }
	inline serializableARSessionConfiguration_t1467016906 ** get_address_of_config_0() { return &___config_0; }
	inline void set_config_0(serializableARSessionConfiguration_t1467016906 * value)
	{
		___config_0 = value;
		Il2CppCodeGenWriteBarrier((&___config_0), value);
	}

	inline static int32_t get_offset_of_runOption_1() { return static_cast<int32_t>(offsetof(serializableARKitInit_t3885066048, ___runOption_1)); }
	inline int32_t get_runOption_1() const { return ___runOption_1; }
	inline int32_t* get_address_of_runOption_1() { return &___runOption_1; }
	inline void set_runOption_1(int32_t value)
	{
		___runOption_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEARKITINIT_T3885066048_H
#ifndef SERIALIZABLEARSESSIONCONFIGURATION_T1467016906_H
#define SERIALIZABLEARSESSIONCONFIGURATION_T1467016906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableARSessionConfiguration
struct  serializableARSessionConfiguration_t1467016906  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment Utils.serializableARSessionConfiguration::alignment
	int32_t ___alignment_0;
	// UnityEngine.XR.iOS.UnityARPlaneDetection Utils.serializableARSessionConfiguration::planeDetection
	int32_t ___planeDetection_1;
	// System.Boolean Utils.serializableARSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_2;
	// System.Boolean Utils.serializableARSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_3;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t1467016906, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_planeDetection_1() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t1467016906, ___planeDetection_1)); }
	inline int32_t get_planeDetection_1() const { return ___planeDetection_1; }
	inline int32_t* get_address_of_planeDetection_1() { return &___planeDetection_1; }
	inline void set_planeDetection_1(int32_t value)
	{
		___planeDetection_1 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_2() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t1467016906, ___getPointCloudData_2)); }
	inline bool get_getPointCloudData_2() const { return ___getPointCloudData_2; }
	inline bool* get_address_of_getPointCloudData_2() { return &___getPointCloudData_2; }
	inline void set_getPointCloudData_2(bool value)
	{
		___getPointCloudData_2 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_3() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t1467016906, ___enableLightEstimation_3)); }
	inline bool get_enableLightEstimation_3() const { return ___enableLightEstimation_3; }
	inline bool* get_address_of_enableLightEstimation_3() { return &___enableLightEstimation_3; }
	inline void set_enableLightEstimation_3(bool value)
	{
		___enableLightEstimation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEARSESSIONCONFIGURATION_T1467016906_H
#ifndef SERIALIZABLEUNITYARCAMERA_T4158151215_H
#define SERIALIZABLEUNITYARCAMERA_T4158151215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARCamera
struct  serializableUnityARCamera_t4158151215  : public RuntimeObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::worldTransform
	serializableUnityARMatrix4x4_t78255337 * ___worldTransform_0;
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::projectionMatrix
	serializableUnityARMatrix4x4_t78255337 * ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState Utils.serializableUnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason Utils.serializableUnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams Utils.serializableUnityARCamera::videoParams
	UnityVideoParams_t4155354995  ___videoParams_4;
	// Utils.serializableUnityARLightData Utils.serializableUnityARCamera::lightData
	serializableUnityARLightData_t3935513283 * ___lightData_5;
	// Utils.serializablePointCloud Utils.serializableUnityARCamera::pointCloud
	serializablePointCloud_t455238287 * ___pointCloud_6;
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::displayTransform
	serializableUnityARMatrix4x4_t78255337 * ___displayTransform_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t4158151215, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t78255337 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t78255337 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t78255337 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t4158151215, ___projectionMatrix_1)); }
	inline serializableUnityARMatrix4x4_t78255337 * get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline serializableUnityARMatrix4x4_t78255337 ** get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(serializableUnityARMatrix4x4_t78255337 * value)
	{
		___projectionMatrix_1 = value;
		Il2CppCodeGenWriteBarrier((&___projectionMatrix_1), value);
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t4158151215, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t4158151215, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t4158151215, ___videoParams_4)); }
	inline UnityVideoParams_t4155354995  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t4155354995 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t4155354995  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t4158151215, ___lightData_5)); }
	inline serializableUnityARLightData_t3935513283 * get_lightData_5() const { return ___lightData_5; }
	inline serializableUnityARLightData_t3935513283 ** get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(serializableUnityARLightData_t3935513283 * value)
	{
		___lightData_5 = value;
		Il2CppCodeGenWriteBarrier((&___lightData_5), value);
	}

	inline static int32_t get_offset_of_pointCloud_6() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t4158151215, ___pointCloud_6)); }
	inline serializablePointCloud_t455238287 * get_pointCloud_6() const { return ___pointCloud_6; }
	inline serializablePointCloud_t455238287 ** get_address_of_pointCloud_6() { return &___pointCloud_6; }
	inline void set_pointCloud_6(serializablePointCloud_t455238287 * value)
	{
		___pointCloud_6 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloud_6), value);
	}

	inline static int32_t get_offset_of_displayTransform_7() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t4158151215, ___displayTransform_7)); }
	inline serializableUnityARMatrix4x4_t78255337 * get_displayTransform_7() const { return ___displayTransform_7; }
	inline serializableUnityARMatrix4x4_t78255337 ** get_address_of_displayTransform_7() { return &___displayTransform_7; }
	inline void set_displayTransform_7(serializableUnityARMatrix4x4_t78255337 * value)
	{
		___displayTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___displayTransform_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARCAMERA_T4158151215_H
#ifndef SERIALIZABLEUNITYARLIGHTDATA_T3935513283_H
#define SERIALIZABLEUNITYARLIGHTDATA_T3935513283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARLightData
struct  serializableUnityARLightData_t3935513283  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.LightDataType Utils.serializableUnityARLightData::whichLight
	int32_t ___whichLight_0;
	// Utils.serializableSHC Utils.serializableUnityARLightData::lightSHC
	serializableSHC_t2667429767 * ___lightSHC_1;
	// Utils.SerializableVector4 Utils.serializableUnityARLightData::primaryLightDirAndIntensity
	SerializableVector4_t1862640084 * ___primaryLightDirAndIntensity_2;
	// System.Single Utils.serializableUnityARLightData::ambientIntensity
	float ___ambientIntensity_3;
	// System.Single Utils.serializableUnityARLightData::ambientColorTemperature
	float ___ambientColorTemperature_4;

public:
	inline static int32_t get_offset_of_whichLight_0() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t3935513283, ___whichLight_0)); }
	inline int32_t get_whichLight_0() const { return ___whichLight_0; }
	inline int32_t* get_address_of_whichLight_0() { return &___whichLight_0; }
	inline void set_whichLight_0(int32_t value)
	{
		___whichLight_0 = value;
	}

	inline static int32_t get_offset_of_lightSHC_1() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t3935513283, ___lightSHC_1)); }
	inline serializableSHC_t2667429767 * get_lightSHC_1() const { return ___lightSHC_1; }
	inline serializableSHC_t2667429767 ** get_address_of_lightSHC_1() { return &___lightSHC_1; }
	inline void set_lightSHC_1(serializableSHC_t2667429767 * value)
	{
		___lightSHC_1 = value;
		Il2CppCodeGenWriteBarrier((&___lightSHC_1), value);
	}

	inline static int32_t get_offset_of_primaryLightDirAndIntensity_2() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t3935513283, ___primaryLightDirAndIntensity_2)); }
	inline SerializableVector4_t1862640084 * get_primaryLightDirAndIntensity_2() const { return ___primaryLightDirAndIntensity_2; }
	inline SerializableVector4_t1862640084 ** get_address_of_primaryLightDirAndIntensity_2() { return &___primaryLightDirAndIntensity_2; }
	inline void set_primaryLightDirAndIntensity_2(SerializableVector4_t1862640084 * value)
	{
		___primaryLightDirAndIntensity_2 = value;
		Il2CppCodeGenWriteBarrier((&___primaryLightDirAndIntensity_2), value);
	}

	inline static int32_t get_offset_of_ambientIntensity_3() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t3935513283, ___ambientIntensity_3)); }
	inline float get_ambientIntensity_3() const { return ___ambientIntensity_3; }
	inline float* get_address_of_ambientIntensity_3() { return &___ambientIntensity_3; }
	inline void set_ambientIntensity_3(float value)
	{
		___ambientIntensity_3 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_4() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t3935513283, ___ambientColorTemperature_4)); }
	inline float get_ambientColorTemperature_4() const { return ___ambientColorTemperature_4; }
	inline float* get_address_of_ambientColorTemperature_4() { return &___ambientColorTemperature_4; }
	inline void set_ambientColorTemperature_4(float value)
	{
		___ambientColorTemperature_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARLIGHTDATA_T3935513283_H
#ifndef SERIALIZABLEUNITYARPLANEANCHOR_T1446774435_H
#define SERIALIZABLEUNITYARPLANEANCHOR_T1446774435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARPlaneAnchor
struct  serializableUnityARPlaneAnchor_t1446774435  : public RuntimeObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARPlaneAnchor::worldTransform
	serializableUnityARMatrix4x4_t78255337 * ___worldTransform_0;
	// Utils.SerializableVector4 Utils.serializableUnityARPlaneAnchor::center
	SerializableVector4_t1862640084 * ___center_1;
	// Utils.SerializableVector4 Utils.serializableUnityARPlaneAnchor::extent
	SerializableVector4_t1862640084 * ___extent_2;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment Utils.serializableUnityARPlaneAnchor::planeAlignment
	int64_t ___planeAlignment_3;
	// System.Byte[] Utils.serializableUnityARPlaneAnchor::identifierStr
	ByteU5BU5D_t4116647657* ___identifierStr_4;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t1446774435, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t78255337 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t78255337 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t78255337 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_center_1() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t1446774435, ___center_1)); }
	inline SerializableVector4_t1862640084 * get_center_1() const { return ___center_1; }
	inline SerializableVector4_t1862640084 ** get_address_of_center_1() { return &___center_1; }
	inline void set_center_1(SerializableVector4_t1862640084 * value)
	{
		___center_1 = value;
		Il2CppCodeGenWriteBarrier((&___center_1), value);
	}

	inline static int32_t get_offset_of_extent_2() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t1446774435, ___extent_2)); }
	inline SerializableVector4_t1862640084 * get_extent_2() const { return ___extent_2; }
	inline SerializableVector4_t1862640084 ** get_address_of_extent_2() { return &___extent_2; }
	inline void set_extent_2(SerializableVector4_t1862640084 * value)
	{
		___extent_2 = value;
		Il2CppCodeGenWriteBarrier((&___extent_2), value);
	}

	inline static int32_t get_offset_of_planeAlignment_3() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t1446774435, ___planeAlignment_3)); }
	inline int64_t get_planeAlignment_3() const { return ___planeAlignment_3; }
	inline int64_t* get_address_of_planeAlignment_3() { return &___planeAlignment_3; }
	inline void set_planeAlignment_3(int64_t value)
	{
		___planeAlignment_3 = value;
	}

	inline static int32_t get_offset_of_identifierStr_4() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t1446774435, ___identifierStr_4)); }
	inline ByteU5BU5D_t4116647657* get_identifierStr_4() const { return ___identifierStr_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_identifierStr_4() { return &___identifierStr_4; }
	inline void set_identifierStr_4(ByteU5BU5D_t4116647657* value)
	{
		___identifierStr_4 = value;
		Il2CppCodeGenWriteBarrier((&___identifierStr_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARPLANEANCHOR_T1446774435_H
#ifndef VECTORDATAFETCHERPARAMETERS_T1168113904_H
#define VECTORDATAFETCHERPARAMETERS_T1168113904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VectorDataFetcherParameters
struct  VectorDataFetcherParameters_t1168113904  : public DataFetcherParameters_t4072360282
{
public:
	// System.Boolean VectorDataFetcherParameters::useOptimizedStyle
	bool ___useOptimizedStyle_3;
	// Mapbox.Unity.Map.Style VectorDataFetcherParameters::style
	Style_t3654124703 * ___style_4;

public:
	inline static int32_t get_offset_of_useOptimizedStyle_3() { return static_cast<int32_t>(offsetof(VectorDataFetcherParameters_t1168113904, ___useOptimizedStyle_3)); }
	inline bool get_useOptimizedStyle_3() const { return ___useOptimizedStyle_3; }
	inline bool* get_address_of_useOptimizedStyle_3() { return &___useOptimizedStyle_3; }
	inline void set_useOptimizedStyle_3(bool value)
	{
		___useOptimizedStyle_3 = value;
	}

	inline static int32_t get_offset_of_style_4() { return static_cast<int32_t>(offsetof(VectorDataFetcherParameters_t1168113904, ___style_4)); }
	inline Style_t3654124703 * get_style_4() const { return ___style_4; }
	inline Style_t3654124703 ** get_address_of_style_4() { return &___style_4; }
	inline void set_style_4(Style_t3654124703 * value)
	{
		___style_4 = value;
		Il2CppCodeGenWriteBarrier((&___style_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTORDATAFETCHERPARAMETERS_T1168113904_H
#ifndef DATAFETCHER_T164261030_H
#define DATAFETCHER_T164261030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DataFetcher
struct  DataFetcher_t164261030  : public ScriptableObject_t2528358522
{
public:
	// Mapbox.Unity.MapboxAccess DataFetcher::_fileSource
	MapboxAccess_t3460807032 * ____fileSource_4;

public:
	inline static int32_t get_offset_of__fileSource_4() { return static_cast<int32_t>(offsetof(DataFetcher_t164261030, ____fileSource_4)); }
	inline MapboxAccess_t3460807032 * get__fileSource_4() const { return ____fileSource_4; }
	inline MapboxAccess_t3460807032 ** get_address_of__fileSource_4() { return &____fileSource_4; }
	inline void set__fileSource_4(MapboxAccess_t3460807032 * value)
	{
		____fileSource_4 = value;
		Il2CppCodeGenWriteBarrier((&____fileSource_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAFETCHER_T164261030_H
#ifndef VECTORTILE_T4284514353_H
#define VECTORTILE_T4284514353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Map.VectorTile
struct  VectorTile_t4284514353  : public Tile_t1097901272
{
public:
	// Mapbox.VectorTile.VectorTile Mapbox.Map.VectorTile::data
	VectorTile_t3467883484 * ___data_7;
	// System.Boolean Mapbox.Map.VectorTile::_isStyleOptimized
	bool ____isStyleOptimized_8;
	// System.String Mapbox.Map.VectorTile::_optimizedStyleId
	String_t* ____optimizedStyleId_9;
	// System.String Mapbox.Map.VectorTile::_modifiedDate
	String_t* ____modifiedDate_10;
	// System.Boolean Mapbox.Map.VectorTile::isDisposed
	bool ___isDisposed_11;

public:
	inline static int32_t get_offset_of_data_7() { return static_cast<int32_t>(offsetof(VectorTile_t4284514353, ___data_7)); }
	inline VectorTile_t3467883484 * get_data_7() const { return ___data_7; }
	inline VectorTile_t3467883484 ** get_address_of_data_7() { return &___data_7; }
	inline void set_data_7(VectorTile_t3467883484 * value)
	{
		___data_7 = value;
		Il2CppCodeGenWriteBarrier((&___data_7), value);
	}

	inline static int32_t get_offset_of__isStyleOptimized_8() { return static_cast<int32_t>(offsetof(VectorTile_t4284514353, ____isStyleOptimized_8)); }
	inline bool get__isStyleOptimized_8() const { return ____isStyleOptimized_8; }
	inline bool* get_address_of__isStyleOptimized_8() { return &____isStyleOptimized_8; }
	inline void set__isStyleOptimized_8(bool value)
	{
		____isStyleOptimized_8 = value;
	}

	inline static int32_t get_offset_of__optimizedStyleId_9() { return static_cast<int32_t>(offsetof(VectorTile_t4284514353, ____optimizedStyleId_9)); }
	inline String_t* get__optimizedStyleId_9() const { return ____optimizedStyleId_9; }
	inline String_t** get_address_of__optimizedStyleId_9() { return &____optimizedStyleId_9; }
	inline void set__optimizedStyleId_9(String_t* value)
	{
		____optimizedStyleId_9 = value;
		Il2CppCodeGenWriteBarrier((&____optimizedStyleId_9), value);
	}

	inline static int32_t get_offset_of__modifiedDate_10() { return static_cast<int32_t>(offsetof(VectorTile_t4284514353, ____modifiedDate_10)); }
	inline String_t* get__modifiedDate_10() const { return ____modifiedDate_10; }
	inline String_t** get_address_of__modifiedDate_10() { return &____modifiedDate_10; }
	inline void set__modifiedDate_10(String_t* value)
	{
		____modifiedDate_10 = value;
		Il2CppCodeGenWriteBarrier((&____modifiedDate_10), value);
	}

	inline static int32_t get_offset_of_isDisposed_11() { return static_cast<int32_t>(offsetof(VectorTile_t4284514353, ___isDisposed_11)); }
	inline bool get_isDisposed_11() const { return ___isDisposed_11; }
	inline bool* get_address_of_isDisposed_11() { return &___isDisposed_11; }
	inline void set_isDisposed_11(bool value)
	{
		___isDisposed_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTORTILE_T4284514353_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef ACTION_1_T1099483977_H
#define ACTION_1_T1099483977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityARInterface.BoundedPlane>
struct  Action_1_t1099483977  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1099483977_H
#ifndef ACTION_2_T3936036094_H
#define ACTION_2_T3936036094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile>
struct  Action_2_t3936036094  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T3936036094_H
#ifndef ACTION_3_T1202789066_H
#define ACTION_3_T1202789066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs>
struct  Action_3_t1202789066  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_T1202789066_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef BINARYFORMATTER_T3197753202_H
#define BINARYFORMATTER_T3197753202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct  BinaryFormatter_t3197753202  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::assembly_format
	int32_t ___assembly_format_0;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::binder
	SerializationBinder_t274213469 * ___binder_1;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::context
	StreamingContext_t3711869237  ___context_2;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::surrogate_selector
	RuntimeObject* ___surrogate_selector_3;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::type_format
	int32_t ___type_format_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::filter_level
	int32_t ___filter_level_5;

public:
	inline static int32_t get_offset_of_assembly_format_0() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3197753202, ___assembly_format_0)); }
	inline int32_t get_assembly_format_0() const { return ___assembly_format_0; }
	inline int32_t* get_address_of_assembly_format_0() { return &___assembly_format_0; }
	inline void set_assembly_format_0(int32_t value)
	{
		___assembly_format_0 = value;
	}

	inline static int32_t get_offset_of_binder_1() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3197753202, ___binder_1)); }
	inline SerializationBinder_t274213469 * get_binder_1() const { return ___binder_1; }
	inline SerializationBinder_t274213469 ** get_address_of_binder_1() { return &___binder_1; }
	inline void set_binder_1(SerializationBinder_t274213469 * value)
	{
		___binder_1 = value;
		Il2CppCodeGenWriteBarrier((&___binder_1), value);
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3197753202, ___context_2)); }
	inline StreamingContext_t3711869237  get_context_2() const { return ___context_2; }
	inline StreamingContext_t3711869237 * get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(StreamingContext_t3711869237  value)
	{
		___context_2 = value;
	}

	inline static int32_t get_offset_of_surrogate_selector_3() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3197753202, ___surrogate_selector_3)); }
	inline RuntimeObject* get_surrogate_selector_3() const { return ___surrogate_selector_3; }
	inline RuntimeObject** get_address_of_surrogate_selector_3() { return &___surrogate_selector_3; }
	inline void set_surrogate_selector_3(RuntimeObject* value)
	{
		___surrogate_selector_3 = value;
		Il2CppCodeGenWriteBarrier((&___surrogate_selector_3), value);
	}

	inline static int32_t get_offset_of_type_format_4() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3197753202, ___type_format_4)); }
	inline int32_t get_type_format_4() const { return ___type_format_4; }
	inline int32_t* get_address_of_type_format_4() { return &___type_format_4; }
	inline void set_type_format_4(int32_t value)
	{
		___type_format_4 = value;
	}

	inline static int32_t get_offset_of_filter_level_5() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3197753202, ___filter_level_5)); }
	inline int32_t get_filter_level_5() const { return ___filter_level_5; }
	inline int32_t* get_address_of_filter_level_5() { return &___filter_level_5; }
	inline void set_filter_level_5(int32_t value)
	{
		___filter_level_5 = value;
	}
};

struct BinaryFormatter_t3197753202_StaticFields
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::<DefaultSurrogateSelector>k__BackingField
	RuntimeObject* ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3197753202_StaticFields, ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() const { return ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return &___U3CDefaultSurrogateSelectorU3Ek__BackingField_6; }
	inline void set_U3CDefaultSurrogateSelectorU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CDefaultSurrogateSelectorU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultSurrogateSelectorU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYFORMATTER_T3197753202_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MESHFILTER_T3523625662_H
#define MESHFILTER_T3523625662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t3523625662  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T3523625662_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:
	// System.Int32 UnityEngine.Transform::<hierarchyCount>k__BackingField
	int32_t ___U3ChierarchyCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ChierarchyCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Transform_t3600365921, ___U3ChierarchyCountU3Ek__BackingField_4)); }
	inline int32_t get_U3ChierarchyCountU3Ek__BackingField_4() const { return ___U3ChierarchyCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3ChierarchyCountU3Ek__BackingField_4() { return &___U3ChierarchyCountU3Ek__BackingField_4; }
	inline void set_U3ChierarchyCountU3Ek__BackingField_4(int32_t value)
	{
		___U3ChierarchyCountU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef ARFACEANCHOR_T1844206636_H
#define ARFACEANCHOR_T1844206636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARFaceAnchor
struct  ARFaceAnchor_t1844206636  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARFaceAnchorData UnityEngine.XR.iOS.ARFaceAnchor::faceAnchorData
	UnityARFaceAnchorData_t2028622935  ___faceAnchorData_0;

public:
	inline static int32_t get_offset_of_faceAnchorData_0() { return static_cast<int32_t>(offsetof(ARFaceAnchor_t1844206636, ___faceAnchorData_0)); }
	inline UnityARFaceAnchorData_t2028622935  get_faceAnchorData_0() const { return ___faceAnchorData_0; }
	inline UnityARFaceAnchorData_t2028622935 * get_address_of_faceAnchorData_0() { return &___faceAnchorData_0; }
	inline void set_faceAnchorData_0(UnityARFaceAnchorData_t2028622935  value)
	{
		___faceAnchorData_0 = value;
	}
};

struct ARFaceAnchor_t1844206636_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> UnityEngine.XR.iOS.ARFaceAnchor::blendshapesDictionary
	Dictionary_2_t1182523073 * ___blendshapesDictionary_1;
	// UnityEngine.XR.iOS.ARFaceAnchor/DictionaryVisitorHandler UnityEngine.XR.iOS.ARFaceAnchor::<>f__mg$cache0
	DictionaryVisitorHandler_t414487210 * ___U3CU3Ef__mgU24cache0_2;

public:
	inline static int32_t get_offset_of_blendshapesDictionary_1() { return static_cast<int32_t>(offsetof(ARFaceAnchor_t1844206636_StaticFields, ___blendshapesDictionary_1)); }
	inline Dictionary_2_t1182523073 * get_blendshapesDictionary_1() const { return ___blendshapesDictionary_1; }
	inline Dictionary_2_t1182523073 ** get_address_of_blendshapesDictionary_1() { return &___blendshapesDictionary_1; }
	inline void set_blendshapesDictionary_1(Dictionary_2_t1182523073 * value)
	{
		___blendshapesDictionary_1 = value;
		Il2CppCodeGenWriteBarrier((&___blendshapesDictionary_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_2() { return static_cast<int32_t>(offsetof(ARFaceAnchor_t1844206636_StaticFields, ___U3CU3Ef__mgU24cache0_2)); }
	inline DictionaryVisitorHandler_t414487210 * get_U3CU3Ef__mgU24cache0_2() const { return ___U3CU3Ef__mgU24cache0_2; }
	inline DictionaryVisitorHandler_t414487210 ** get_address_of_U3CU3Ef__mgU24cache0_2() { return &___U3CU3Ef__mgU24cache0_2; }
	inline void set_U3CU3Ef__mgU24cache0_2(DictionaryVisitorHandler_t414487210 * value)
	{
		___U3CU3Ef__mgU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFACEANCHOR_T1844206636_H
#ifndef UNITYARCAMERA_T2069150450_H
#define UNITYARCAMERA_T2069150450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARCamera
struct  UnityARCamera_t2069150450 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::worldTransform
	UnityARMatrix4x4_t4073345847  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t4073345847  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.UnityARCamera::videoParams
	UnityVideoParams_t4155354995  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightData UnityEngine.XR.iOS.UnityARCamera::lightData
	UnityARLightData_t2160616730  ___lightData_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::displayTransform
	UnityARMatrix4x4_t4073345847  ___displayTransform_6;
	// UnityEngine.Vector3[] UnityEngine.XR.iOS.UnityARCamera::pointCloudData
	Vector3U5BU5D_t1718750761* ___pointCloudData_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t4073345847  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t4073345847  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t4073345847  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t4073345847  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___videoParams_4)); }
	inline UnityVideoParams_t4155354995  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t4155354995 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t4155354995  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___lightData_5)); }
	inline UnityARLightData_t2160616730  get_lightData_5() const { return ___lightData_5; }
	inline UnityARLightData_t2160616730 * get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(UnityARLightData_t2160616730  value)
	{
		___lightData_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___displayTransform_6)); }
	inline UnityARMatrix4x4_t4073345847  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_t4073345847  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_pointCloudData_7() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___pointCloudData_7)); }
	inline Vector3U5BU5D_t1718750761* get_pointCloudData_7() const { return ___pointCloudData_7; }
	inline Vector3U5BU5D_t1718750761** get_address_of_pointCloudData_7() { return &___pointCloudData_7; }
	inline void set_pointCloudData_7(Vector3U5BU5D_t1718750761* value)
	{
		___pointCloudData_7 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudData_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t2069150450_marshaled_pinvoke
{
	UnityARMatrix4x4_t4073345847  ___worldTransform_0;
	UnityARMatrix4x4_t4073345847  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t4155354995  ___videoParams_4;
	UnityARLightData_t2160616730_marshaled_pinvoke ___lightData_5;
	UnityARMatrix4x4_t4073345847  ___displayTransform_6;
	Vector3_t3722313464 * ___pointCloudData_7;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t2069150450_marshaled_com
{
	UnityARMatrix4x4_t4073345847  ___worldTransform_0;
	UnityARMatrix4x4_t4073345847  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t4155354995  ___videoParams_4;
	UnityARLightData_t2160616730_marshaled_com ___lightData_5;
	UnityARMatrix4x4_t4073345847  ___displayTransform_6;
	Vector3_t3722313464 * ___pointCloudData_7;
};
#endif // UNITYARCAMERA_T2069150450_H
#ifndef ARANCHORADDED_T1608557165_H
#define ARANCHORADDED_T1608557165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded
struct  ARAnchorAdded_t1608557165  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARANCHORADDED_T1608557165_H
#ifndef ARANCHORREMOVED_T4030593004_H
#define ARANCHORREMOVED_T4030593004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved
struct  ARAnchorRemoved_t4030593004  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARANCHORREMOVED_T4030593004_H
#ifndef ARANCHORUPDATED_T3113222537_H
#define ARANCHORUPDATED_T3113222537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated
struct  ARAnchorUpdated_t3113222537  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARANCHORUPDATED_T3113222537_H
#ifndef ARFACEANCHORADDED_T3526051790_H
#define ARFACEANCHORADDED_T3526051790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded
struct  ARFaceAnchorAdded_t3526051790  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFACEANCHORADDED_T3526051790_H
#ifndef ARFACEANCHORREMOVED_T2550278937_H
#define ARFACEANCHORREMOVED_T2550278937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved
struct  ARFaceAnchorRemoved_t2550278937  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFACEANCHORREMOVED_T2550278937_H
#ifndef ARFACEANCHORUPDATED_T3258688950_H
#define ARFACEANCHORUPDATED_T3258688950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated
struct  ARFaceAnchorUpdated_t3258688950  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFACEANCHORUPDATED_T3258688950_H
#ifndef ARSESSIONCALLBACK_T3772093212_H
#define ARSESSIONCALLBACK_T3772093212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback
struct  ARSessionCallback_t3772093212  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSESSIONCALLBACK_T3772093212_H
#ifndef ARSESSIONFAILED_T2125002991_H
#define ARSESSIONFAILED_T2125002991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed
struct  ARSessionFailed_t2125002991  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSESSIONFAILED_T2125002991_H
#ifndef ARUSERANCHORADDED_T1851120876_H
#define ARUSERANCHORADDED_T1851120876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded
struct  ARUserAnchorAdded_t1851120876  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARUSERANCHORADDED_T1851120876_H
#ifndef ARUSERANCHORREMOVED_T23344545_H
#define ARUSERANCHORREMOVED_T23344545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved
struct  ARUserAnchorRemoved_t23344545  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARUSERANCHORREMOVED_T23344545_H
#ifndef ARUSERANCHORUPDATED_T4007601678_H
#define ARUSERANCHORUPDATED_T4007601678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated
struct  ARUserAnchorUpdated_t4007601678  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARUSERANCHORUPDATED_T4007601678_H
#ifndef INTERNAL_ARANCHORADDED_T1565083332_H
#define INTERNAL_ARANCHORADDED_T1565083332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded
struct  internal_ARAnchorAdded_t1565083332  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARANCHORADDED_T1565083332_H
#ifndef INTERNAL_ARANCHORREMOVED_T3371657877_H
#define INTERNAL_ARANCHORREMOVED_T3371657877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved
struct  internal_ARAnchorRemoved_t3371657877  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARANCHORREMOVED_T3371657877_H
#ifndef INTERNAL_ARANCHORUPDATED_T2645242205_H
#define INTERNAL_ARANCHORUPDATED_T2645242205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated
struct  internal_ARAnchorUpdated_t2645242205  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARANCHORUPDATED_T2645242205_H
#ifndef INTERNAL_ARFACEANCHORADDED_T1021040265_H
#define INTERNAL_ARFACEANCHORADDED_T1021040265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorAdded
struct  internal_ARFaceAnchorAdded_t1021040265  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARFACEANCHORADDED_T1021040265_H
#ifndef INTERNAL_ARFACEANCHORREMOVED_T2563439402_H
#define INTERNAL_ARFACEANCHORREMOVED_T2563439402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorRemoved
struct  internal_ARFaceAnchorRemoved_t2563439402  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARFACEANCHORREMOVED_T2563439402_H
#ifndef INTERNAL_ARFACEANCHORUPDATED_T3423900432_H
#define INTERNAL_ARFACEANCHORUPDATED_T3423900432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorUpdated
struct  internal_ARFaceAnchorUpdated_t3423900432  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARFACEANCHORUPDATED_T3423900432_H
#ifndef INTERNAL_ARUSERANCHORADDED_T3285282493_H
#define INTERNAL_ARUSERANCHORADDED_T3285282493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded
struct  internal_ARUserAnchorAdded_t3285282493  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORADDED_T3285282493_H
#ifndef INTERNAL_ARUSERANCHORREMOVED_T386858594_H
#define INTERNAL_ARUSERANCHORREMOVED_T386858594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved
struct  internal_ARUserAnchorRemoved_t386858594  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORREMOVED_T386858594_H
#ifndef INTERNAL_ARUSERANCHORUPDATED_T3964727538_H
#define INTERNAL_ARUSERANCHORUPDATED_T3964727538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated
struct  internal_ARUserAnchorUpdated_t3964727538  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORUPDATED_T3964727538_H
#ifndef INTERNAL_UNITYARCAMERA_T3920739388_H
#define INTERNAL_UNITYARCAMERA_T3920739388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.internal_UnityARCamera
struct  internal_UnityARCamera_t3920739388 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::worldTransform
	UnityARMatrix4x4_t4073345847  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t4073345847  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.internal_UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.internal_UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.internal_UnityARCamera::videoParams
	UnityVideoParams_t4155354995  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityMarshalLightData UnityEngine.XR.iOS.internal_UnityARCamera::lightData
	UnityMarshalLightData_t1623228070  ___lightData_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::displayTransform
	UnityARMatrix4x4_t4073345847  ___displayTransform_6;
	// System.UInt32 UnityEngine.XR.iOS.internal_UnityARCamera::getPointCloudData
	uint32_t ___getPointCloudData_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t4073345847  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t4073345847  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t4073345847  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t4073345847  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___videoParams_4)); }
	inline UnityVideoParams_t4155354995  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t4155354995 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t4155354995  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___lightData_5)); }
	inline UnityMarshalLightData_t1623228070  get_lightData_5() const { return ___lightData_5; }
	inline UnityMarshalLightData_t1623228070 * get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(UnityMarshalLightData_t1623228070  value)
	{
		___lightData_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___displayTransform_6)); }
	inline UnityARMatrix4x4_t4073345847  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_t4073345847  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_7() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___getPointCloudData_7)); }
	inline uint32_t get_getPointCloudData_7() const { return ___getPointCloudData_7; }
	inline uint32_t* get_address_of_getPointCloudData_7() { return &___getPointCloudData_7; }
	inline void set_getPointCloudData_7(uint32_t value)
	{
		___getPointCloudData_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_UNITYARCAMERA_T3920739388_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef UNITYARSESSIONNATIVEINTERFACE_T3929719369_H
#define UNITYARSESSIONNATIVEINTERFACE_T3929719369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct  UnityARSessionNativeInterface_t3929719369  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARSessionNativeInterface::m_NativeARSession
	intptr_t ___m_NativeARSession_14;

public:
	inline static int32_t get_offset_of_m_NativeARSession_14() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369, ___m_NativeARSession_14)); }
	inline intptr_t get_m_NativeARSession_14() const { return ___m_NativeARSession_14; }
	inline intptr_t* get_address_of_m_NativeARSession_14() { return &___m_NativeARSession_14; }
	inline void set_m_NativeARSession_14(intptr_t value)
	{
		___m_NativeARSession_14 = value;
	}
};

struct UnityARSessionNativeInterface_t3929719369_StaticFields
{
public:
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFrameUpdatedEvent
	ARFrameUpdate_t1157215840 * ___ARFrameUpdatedEvent_0;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorAddedEvent
	ARAnchorAdded_t1608557165 * ___ARAnchorAddedEvent_1;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorUpdatedEvent
	ARAnchorUpdated_t3113222537 * ___ARAnchorUpdatedEvent_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorRemovedEvent
	ARAnchorRemoved_t4030593004 * ___ARAnchorRemovedEvent_3;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorAddedEvent
	ARUserAnchorAdded_t1851120876 * ___ARUserAnchorAddedEvent_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorUpdatedEvent
	ARUserAnchorUpdated_t4007601678 * ___ARUserAnchorUpdatedEvent_5;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorRemovedEvent
	ARUserAnchorRemoved_t23344545 * ___ARUserAnchorRemovedEvent_6;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorAddedEvent
	ARFaceAnchorAdded_t3526051790 * ___ARFaceAnchorAddedEvent_7;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorUpdatedEvent
	ARFaceAnchorUpdated_t3258688950 * ___ARFaceAnchorUpdatedEvent_8;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorRemovedEvent
	ARFaceAnchorRemoved_t2550278937 * ___ARFaceAnchorRemovedEvent_9;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionFailedEvent
	ARSessionFailed_t2125002991 * ___ARSessionFailedEvent_10;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionInterruptedEvent
	ARSessionCallback_t3772093212 * ___ARSessionInterruptedEvent_11;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessioninterruptionEndedEvent
	ARSessionCallback_t3772093212 * ___ARSessioninterruptionEndedEvent_12;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionTrackingChangedEvent
	ARSessionTrackingChanged_t923029411 * ___ARSessionTrackingChangedEvent_13;
	// UnityEngine.XR.iOS.UnityARCamera UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_Camera
	UnityARCamera_t2069150450  ___s_Camera_15;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_UnityARSessionNativeInterface
	UnityARSessionNativeInterface_t3929719369 * ___s_UnityARSessionNativeInterface_16;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache0
	internal_ARFrameUpdate_t3254989823 * ___U3CU3Ef__mgU24cache0_17;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache1
	ARSessionFailed_t2125002991 * ___U3CU3Ef__mgU24cache1_18;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache2
	ARSessionCallback_t3772093212 * ___U3CU3Ef__mgU24cache2_19;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache3
	ARSessionCallback_t3772093212 * ___U3CU3Ef__mgU24cache3_20;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache4
	internal_ARSessionTrackingChanged_t1988849735 * ___U3CU3Ef__mgU24cache4_21;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache5
	internal_ARAnchorAdded_t1565083332 * ___U3CU3Ef__mgU24cache5_22;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache6
	internal_ARAnchorUpdated_t2645242205 * ___U3CU3Ef__mgU24cache6_23;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache7
	internal_ARAnchorRemoved_t3371657877 * ___U3CU3Ef__mgU24cache7_24;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache8
	internal_ARUserAnchorAdded_t3285282493 * ___U3CU3Ef__mgU24cache8_25;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache9
	internal_ARUserAnchorUpdated_t3964727538 * ___U3CU3Ef__mgU24cache9_26;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheA
	internal_ARUserAnchorRemoved_t386858594 * ___U3CU3Ef__mgU24cacheA_27;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheB
	internal_ARFaceAnchorAdded_t1021040265 * ___U3CU3Ef__mgU24cacheB_28;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheC
	internal_ARFaceAnchorUpdated_t3423900432 * ___U3CU3Ef__mgU24cacheC_29;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheD
	internal_ARFaceAnchorRemoved_t2563439402 * ___U3CU3Ef__mgU24cacheD_30;

public:
	inline static int32_t get_offset_of_ARFrameUpdatedEvent_0() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARFrameUpdatedEvent_0)); }
	inline ARFrameUpdate_t1157215840 * get_ARFrameUpdatedEvent_0() const { return ___ARFrameUpdatedEvent_0; }
	inline ARFrameUpdate_t1157215840 ** get_address_of_ARFrameUpdatedEvent_0() { return &___ARFrameUpdatedEvent_0; }
	inline void set_ARFrameUpdatedEvent_0(ARFrameUpdate_t1157215840 * value)
	{
		___ARFrameUpdatedEvent_0 = value;
		Il2CppCodeGenWriteBarrier((&___ARFrameUpdatedEvent_0), value);
	}

	inline static int32_t get_offset_of_ARAnchorAddedEvent_1() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARAnchorAddedEvent_1)); }
	inline ARAnchorAdded_t1608557165 * get_ARAnchorAddedEvent_1() const { return ___ARAnchorAddedEvent_1; }
	inline ARAnchorAdded_t1608557165 ** get_address_of_ARAnchorAddedEvent_1() { return &___ARAnchorAddedEvent_1; }
	inline void set_ARAnchorAddedEvent_1(ARAnchorAdded_t1608557165 * value)
	{
		___ARAnchorAddedEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorAddedEvent_1), value);
	}

	inline static int32_t get_offset_of_ARAnchorUpdatedEvent_2() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARAnchorUpdatedEvent_2)); }
	inline ARAnchorUpdated_t3113222537 * get_ARAnchorUpdatedEvent_2() const { return ___ARAnchorUpdatedEvent_2; }
	inline ARAnchorUpdated_t3113222537 ** get_address_of_ARAnchorUpdatedEvent_2() { return &___ARAnchorUpdatedEvent_2; }
	inline void set_ARAnchorUpdatedEvent_2(ARAnchorUpdated_t3113222537 * value)
	{
		___ARAnchorUpdatedEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorUpdatedEvent_2), value);
	}

	inline static int32_t get_offset_of_ARAnchorRemovedEvent_3() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARAnchorRemovedEvent_3)); }
	inline ARAnchorRemoved_t4030593004 * get_ARAnchorRemovedEvent_3() const { return ___ARAnchorRemovedEvent_3; }
	inline ARAnchorRemoved_t4030593004 ** get_address_of_ARAnchorRemovedEvent_3() { return &___ARAnchorRemovedEvent_3; }
	inline void set_ARAnchorRemovedEvent_3(ARAnchorRemoved_t4030593004 * value)
	{
		___ARAnchorRemovedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorRemovedEvent_3), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorAddedEvent_4() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARUserAnchorAddedEvent_4)); }
	inline ARUserAnchorAdded_t1851120876 * get_ARUserAnchorAddedEvent_4() const { return ___ARUserAnchorAddedEvent_4; }
	inline ARUserAnchorAdded_t1851120876 ** get_address_of_ARUserAnchorAddedEvent_4() { return &___ARUserAnchorAddedEvent_4; }
	inline void set_ARUserAnchorAddedEvent_4(ARUserAnchorAdded_t1851120876 * value)
	{
		___ARUserAnchorAddedEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorAddedEvent_4), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorUpdatedEvent_5() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARUserAnchorUpdatedEvent_5)); }
	inline ARUserAnchorUpdated_t4007601678 * get_ARUserAnchorUpdatedEvent_5() const { return ___ARUserAnchorUpdatedEvent_5; }
	inline ARUserAnchorUpdated_t4007601678 ** get_address_of_ARUserAnchorUpdatedEvent_5() { return &___ARUserAnchorUpdatedEvent_5; }
	inline void set_ARUserAnchorUpdatedEvent_5(ARUserAnchorUpdated_t4007601678 * value)
	{
		___ARUserAnchorUpdatedEvent_5 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorUpdatedEvent_5), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorRemovedEvent_6() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARUserAnchorRemovedEvent_6)); }
	inline ARUserAnchorRemoved_t23344545 * get_ARUserAnchorRemovedEvent_6() const { return ___ARUserAnchorRemovedEvent_6; }
	inline ARUserAnchorRemoved_t23344545 ** get_address_of_ARUserAnchorRemovedEvent_6() { return &___ARUserAnchorRemovedEvent_6; }
	inline void set_ARUserAnchorRemovedEvent_6(ARUserAnchorRemoved_t23344545 * value)
	{
		___ARUserAnchorRemovedEvent_6 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorRemovedEvent_6), value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorAddedEvent_7() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARFaceAnchorAddedEvent_7)); }
	inline ARFaceAnchorAdded_t3526051790 * get_ARFaceAnchorAddedEvent_7() const { return ___ARFaceAnchorAddedEvent_7; }
	inline ARFaceAnchorAdded_t3526051790 ** get_address_of_ARFaceAnchorAddedEvent_7() { return &___ARFaceAnchorAddedEvent_7; }
	inline void set_ARFaceAnchorAddedEvent_7(ARFaceAnchorAdded_t3526051790 * value)
	{
		___ARFaceAnchorAddedEvent_7 = value;
		Il2CppCodeGenWriteBarrier((&___ARFaceAnchorAddedEvent_7), value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorUpdatedEvent_8() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARFaceAnchorUpdatedEvent_8)); }
	inline ARFaceAnchorUpdated_t3258688950 * get_ARFaceAnchorUpdatedEvent_8() const { return ___ARFaceAnchorUpdatedEvent_8; }
	inline ARFaceAnchorUpdated_t3258688950 ** get_address_of_ARFaceAnchorUpdatedEvent_8() { return &___ARFaceAnchorUpdatedEvent_8; }
	inline void set_ARFaceAnchorUpdatedEvent_8(ARFaceAnchorUpdated_t3258688950 * value)
	{
		___ARFaceAnchorUpdatedEvent_8 = value;
		Il2CppCodeGenWriteBarrier((&___ARFaceAnchorUpdatedEvent_8), value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorRemovedEvent_9() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARFaceAnchorRemovedEvent_9)); }
	inline ARFaceAnchorRemoved_t2550278937 * get_ARFaceAnchorRemovedEvent_9() const { return ___ARFaceAnchorRemovedEvent_9; }
	inline ARFaceAnchorRemoved_t2550278937 ** get_address_of_ARFaceAnchorRemovedEvent_9() { return &___ARFaceAnchorRemovedEvent_9; }
	inline void set_ARFaceAnchorRemovedEvent_9(ARFaceAnchorRemoved_t2550278937 * value)
	{
		___ARFaceAnchorRemovedEvent_9 = value;
		Il2CppCodeGenWriteBarrier((&___ARFaceAnchorRemovedEvent_9), value);
	}

	inline static int32_t get_offset_of_ARSessionFailedEvent_10() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARSessionFailedEvent_10)); }
	inline ARSessionFailed_t2125002991 * get_ARSessionFailedEvent_10() const { return ___ARSessionFailedEvent_10; }
	inline ARSessionFailed_t2125002991 ** get_address_of_ARSessionFailedEvent_10() { return &___ARSessionFailedEvent_10; }
	inline void set_ARSessionFailedEvent_10(ARSessionFailed_t2125002991 * value)
	{
		___ARSessionFailedEvent_10 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionFailedEvent_10), value);
	}

	inline static int32_t get_offset_of_ARSessionInterruptedEvent_11() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARSessionInterruptedEvent_11)); }
	inline ARSessionCallback_t3772093212 * get_ARSessionInterruptedEvent_11() const { return ___ARSessionInterruptedEvent_11; }
	inline ARSessionCallback_t3772093212 ** get_address_of_ARSessionInterruptedEvent_11() { return &___ARSessionInterruptedEvent_11; }
	inline void set_ARSessionInterruptedEvent_11(ARSessionCallback_t3772093212 * value)
	{
		___ARSessionInterruptedEvent_11 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionInterruptedEvent_11), value);
	}

	inline static int32_t get_offset_of_ARSessioninterruptionEndedEvent_12() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARSessioninterruptionEndedEvent_12)); }
	inline ARSessionCallback_t3772093212 * get_ARSessioninterruptionEndedEvent_12() const { return ___ARSessioninterruptionEndedEvent_12; }
	inline ARSessionCallback_t3772093212 ** get_address_of_ARSessioninterruptionEndedEvent_12() { return &___ARSessioninterruptionEndedEvent_12; }
	inline void set_ARSessioninterruptionEndedEvent_12(ARSessionCallback_t3772093212 * value)
	{
		___ARSessioninterruptionEndedEvent_12 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessioninterruptionEndedEvent_12), value);
	}

	inline static int32_t get_offset_of_ARSessionTrackingChangedEvent_13() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARSessionTrackingChangedEvent_13)); }
	inline ARSessionTrackingChanged_t923029411 * get_ARSessionTrackingChangedEvent_13() const { return ___ARSessionTrackingChangedEvent_13; }
	inline ARSessionTrackingChanged_t923029411 ** get_address_of_ARSessionTrackingChangedEvent_13() { return &___ARSessionTrackingChangedEvent_13; }
	inline void set_ARSessionTrackingChangedEvent_13(ARSessionTrackingChanged_t923029411 * value)
	{
		___ARSessionTrackingChangedEvent_13 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionTrackingChangedEvent_13), value);
	}

	inline static int32_t get_offset_of_s_Camera_15() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___s_Camera_15)); }
	inline UnityARCamera_t2069150450  get_s_Camera_15() const { return ___s_Camera_15; }
	inline UnityARCamera_t2069150450 * get_address_of_s_Camera_15() { return &___s_Camera_15; }
	inline void set_s_Camera_15(UnityARCamera_t2069150450  value)
	{
		___s_Camera_15 = value;
	}

	inline static int32_t get_offset_of_s_UnityARSessionNativeInterface_16() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___s_UnityARSessionNativeInterface_16)); }
	inline UnityARSessionNativeInterface_t3929719369 * get_s_UnityARSessionNativeInterface_16() const { return ___s_UnityARSessionNativeInterface_16; }
	inline UnityARSessionNativeInterface_t3929719369 ** get_address_of_s_UnityARSessionNativeInterface_16() { return &___s_UnityARSessionNativeInterface_16; }
	inline void set_s_UnityARSessionNativeInterface_16(UnityARSessionNativeInterface_t3929719369 * value)
	{
		___s_UnityARSessionNativeInterface_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_UnityARSessionNativeInterface_16), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_17() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache0_17)); }
	inline internal_ARFrameUpdate_t3254989823 * get_U3CU3Ef__mgU24cache0_17() const { return ___U3CU3Ef__mgU24cache0_17; }
	inline internal_ARFrameUpdate_t3254989823 ** get_address_of_U3CU3Ef__mgU24cache0_17() { return &___U3CU3Ef__mgU24cache0_17; }
	inline void set_U3CU3Ef__mgU24cache0_17(internal_ARFrameUpdate_t3254989823 * value)
	{
		___U3CU3Ef__mgU24cache0_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_17), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_18() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache1_18)); }
	inline ARSessionFailed_t2125002991 * get_U3CU3Ef__mgU24cache1_18() const { return ___U3CU3Ef__mgU24cache1_18; }
	inline ARSessionFailed_t2125002991 ** get_address_of_U3CU3Ef__mgU24cache1_18() { return &___U3CU3Ef__mgU24cache1_18; }
	inline void set_U3CU3Ef__mgU24cache1_18(ARSessionFailed_t2125002991 * value)
	{
		___U3CU3Ef__mgU24cache1_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_19() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache2_19)); }
	inline ARSessionCallback_t3772093212 * get_U3CU3Ef__mgU24cache2_19() const { return ___U3CU3Ef__mgU24cache2_19; }
	inline ARSessionCallback_t3772093212 ** get_address_of_U3CU3Ef__mgU24cache2_19() { return &___U3CU3Ef__mgU24cache2_19; }
	inline void set_U3CU3Ef__mgU24cache2_19(ARSessionCallback_t3772093212 * value)
	{
		___U3CU3Ef__mgU24cache2_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_20() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache3_20)); }
	inline ARSessionCallback_t3772093212 * get_U3CU3Ef__mgU24cache3_20() const { return ___U3CU3Ef__mgU24cache3_20; }
	inline ARSessionCallback_t3772093212 ** get_address_of_U3CU3Ef__mgU24cache3_20() { return &___U3CU3Ef__mgU24cache3_20; }
	inline void set_U3CU3Ef__mgU24cache3_20(ARSessionCallback_t3772093212 * value)
	{
		___U3CU3Ef__mgU24cache3_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_21() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache4_21)); }
	inline internal_ARSessionTrackingChanged_t1988849735 * get_U3CU3Ef__mgU24cache4_21() const { return ___U3CU3Ef__mgU24cache4_21; }
	inline internal_ARSessionTrackingChanged_t1988849735 ** get_address_of_U3CU3Ef__mgU24cache4_21() { return &___U3CU3Ef__mgU24cache4_21; }
	inline void set_U3CU3Ef__mgU24cache4_21(internal_ARSessionTrackingChanged_t1988849735 * value)
	{
		___U3CU3Ef__mgU24cache4_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_22() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache5_22)); }
	inline internal_ARAnchorAdded_t1565083332 * get_U3CU3Ef__mgU24cache5_22() const { return ___U3CU3Ef__mgU24cache5_22; }
	inline internal_ARAnchorAdded_t1565083332 ** get_address_of_U3CU3Ef__mgU24cache5_22() { return &___U3CU3Ef__mgU24cache5_22; }
	inline void set_U3CU3Ef__mgU24cache5_22(internal_ARAnchorAdded_t1565083332 * value)
	{
		___U3CU3Ef__mgU24cache5_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_23() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache6_23)); }
	inline internal_ARAnchorUpdated_t2645242205 * get_U3CU3Ef__mgU24cache6_23() const { return ___U3CU3Ef__mgU24cache6_23; }
	inline internal_ARAnchorUpdated_t2645242205 ** get_address_of_U3CU3Ef__mgU24cache6_23() { return &___U3CU3Ef__mgU24cache6_23; }
	inline void set_U3CU3Ef__mgU24cache6_23(internal_ARAnchorUpdated_t2645242205 * value)
	{
		___U3CU3Ef__mgU24cache6_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_24() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache7_24)); }
	inline internal_ARAnchorRemoved_t3371657877 * get_U3CU3Ef__mgU24cache7_24() const { return ___U3CU3Ef__mgU24cache7_24; }
	inline internal_ARAnchorRemoved_t3371657877 ** get_address_of_U3CU3Ef__mgU24cache7_24() { return &___U3CU3Ef__mgU24cache7_24; }
	inline void set_U3CU3Ef__mgU24cache7_24(internal_ARAnchorRemoved_t3371657877 * value)
	{
		___U3CU3Ef__mgU24cache7_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_25() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache8_25)); }
	inline internal_ARUserAnchorAdded_t3285282493 * get_U3CU3Ef__mgU24cache8_25() const { return ___U3CU3Ef__mgU24cache8_25; }
	inline internal_ARUserAnchorAdded_t3285282493 ** get_address_of_U3CU3Ef__mgU24cache8_25() { return &___U3CU3Ef__mgU24cache8_25; }
	inline void set_U3CU3Ef__mgU24cache8_25(internal_ARUserAnchorAdded_t3285282493 * value)
	{
		___U3CU3Ef__mgU24cache8_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_25), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_26() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache9_26)); }
	inline internal_ARUserAnchorUpdated_t3964727538 * get_U3CU3Ef__mgU24cache9_26() const { return ___U3CU3Ef__mgU24cache9_26; }
	inline internal_ARUserAnchorUpdated_t3964727538 ** get_address_of_U3CU3Ef__mgU24cache9_26() { return &___U3CU3Ef__mgU24cache9_26; }
	inline void set_U3CU3Ef__mgU24cache9_26(internal_ARUserAnchorUpdated_t3964727538 * value)
	{
		___U3CU3Ef__mgU24cache9_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9_26), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_27() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheA_27)); }
	inline internal_ARUserAnchorRemoved_t386858594 * get_U3CU3Ef__mgU24cacheA_27() const { return ___U3CU3Ef__mgU24cacheA_27; }
	inline internal_ARUserAnchorRemoved_t386858594 ** get_address_of_U3CU3Ef__mgU24cacheA_27() { return &___U3CU3Ef__mgU24cacheA_27; }
	inline void set_U3CU3Ef__mgU24cacheA_27(internal_ARUserAnchorRemoved_t386858594 * value)
	{
		___U3CU3Ef__mgU24cacheA_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA_27), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_28() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheB_28)); }
	inline internal_ARFaceAnchorAdded_t1021040265 * get_U3CU3Ef__mgU24cacheB_28() const { return ___U3CU3Ef__mgU24cacheB_28; }
	inline internal_ARFaceAnchorAdded_t1021040265 ** get_address_of_U3CU3Ef__mgU24cacheB_28() { return &___U3CU3Ef__mgU24cacheB_28; }
	inline void set_U3CU3Ef__mgU24cacheB_28(internal_ARFaceAnchorAdded_t1021040265 * value)
	{
		___U3CU3Ef__mgU24cacheB_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_29() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheC_29)); }
	inline internal_ARFaceAnchorUpdated_t3423900432 * get_U3CU3Ef__mgU24cacheC_29() const { return ___U3CU3Ef__mgU24cacheC_29; }
	inline internal_ARFaceAnchorUpdated_t3423900432 ** get_address_of_U3CU3Ef__mgU24cacheC_29() { return &___U3CU3Ef__mgU24cacheC_29; }
	inline void set_U3CU3Ef__mgU24cacheC_29(internal_ARFaceAnchorUpdated_t3423900432 * value)
	{
		___U3CU3Ef__mgU24cacheC_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheC_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_30() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheD_30)); }
	inline internal_ARFaceAnchorRemoved_t2563439402 * get_U3CU3Ef__mgU24cacheD_30() const { return ___U3CU3Ef__mgU24cacheD_30; }
	inline internal_ARFaceAnchorRemoved_t2563439402 ** get_address_of_U3CU3Ef__mgU24cacheD_30() { return &___U3CU3Ef__mgU24cacheD_30; }
	inline void set_U3CU3Ef__mgU24cacheD_30(internal_ARFaceAnchorRemoved_t2563439402 * value)
	{
		___U3CU3Ef__mgU24cacheD_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheD_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARSESSIONNATIVEINTERFACE_T3929719369_H
#ifndef ARFRAMEUPDATE_T1157215840_H
#define ARFRAMEUPDATE_T1157215840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate
struct  ARFrameUpdate_t1157215840  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFRAMEUPDATE_T1157215840_H
#ifndef ARSESSIONTRACKINGCHANGED_T923029411_H
#define ARSESSIONTRACKINGCHANGED_T923029411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged
struct  ARSessionTrackingChanged_t923029411  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSESSIONTRACKINGCHANGED_T923029411_H
#ifndef INTERNAL_ARFRAMEUPDATE_T3254989823_H
#define INTERNAL_ARFRAMEUPDATE_T3254989823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate
struct  internal_ARFrameUpdate_t3254989823  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARFRAMEUPDATE_T3254989823_H
#ifndef INTERNAL_ARSESSIONTRACKINGCHANGED_T1988849735_H
#define INTERNAL_ARSESSIONTRACKINGCHANGED_T1988849735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged
struct  internal_ARSessionTrackingChanged_t1988849735  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARSESSIONTRACKINGCHANGED_T1988849735_H
#ifndef VECTORDATAFETCHER_T932344282_H
#define VECTORDATAFETCHER_T932344282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VectorDataFetcher
struct  VectorDataFetcher_t932344282  : public DataFetcher_t164261030
{
public:
	// System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile> VectorDataFetcher::DataRecieved
	Action_2_t3936036094 * ___DataRecieved_5;
	// System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs> VectorDataFetcher::FetchingError
	Action_3_t1202789066 * ___FetchingError_6;

public:
	inline static int32_t get_offset_of_DataRecieved_5() { return static_cast<int32_t>(offsetof(VectorDataFetcher_t932344282, ___DataRecieved_5)); }
	inline Action_2_t3936036094 * get_DataRecieved_5() const { return ___DataRecieved_5; }
	inline Action_2_t3936036094 ** get_address_of_DataRecieved_5() { return &___DataRecieved_5; }
	inline void set_DataRecieved_5(Action_2_t3936036094 * value)
	{
		___DataRecieved_5 = value;
		Il2CppCodeGenWriteBarrier((&___DataRecieved_5), value);
	}

	inline static int32_t get_offset_of_FetchingError_6() { return static_cast<int32_t>(offsetof(VectorDataFetcher_t932344282, ___FetchingError_6)); }
	inline Action_3_t1202789066 * get_FetchingError_6() const { return ___FetchingError_6; }
	inline Action_3_t1202789066 ** get_address_of_FetchingError_6() { return &___FetchingError_6; }
	inline void set_FetchingError_6(Action_3_t1202789066 * value)
	{
		___FetchingError_6 = value;
		Il2CppCodeGenWriteBarrier((&___FetchingError_6), value);
	}
};

struct VectorDataFetcher_t932344282_StaticFields
{
public:
	// System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile> VectorDataFetcher::<>f__am$cache0
	Action_2_t3936036094 * ___U3CU3Ef__amU24cache0_7;
	// System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs> VectorDataFetcher::<>f__am$cache1
	Action_3_t1202789066 * ___U3CU3Ef__amU24cache1_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(VectorDataFetcher_t932344282_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Action_2_t3936036094 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Action_2_t3936036094 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Action_2_t3936036094 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_8() { return static_cast<int32_t>(offsetof(VectorDataFetcher_t932344282_StaticFields, ___U3CU3Ef__amU24cache1_8)); }
	inline Action_3_t1202789066 * get_U3CU3Ef__amU24cache1_8() const { return ___U3CU3Ef__amU24cache1_8; }
	inline Action_3_t1202789066 ** get_address_of_U3CU3Ef__amU24cache1_8() { return &___U3CU3Ef__amU24cache1_8; }
	inline void set_U3CU3Ef__amU24cache1_8(Action_3_t1202789066 * value)
	{
		___U3CU3Ef__amU24cache1_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTORDATAFETCHER_T932344282_H
#ifndef UNITYTILE_T2405085845_H
#define UNITYTILE_T2405085845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.Data.UnityTile
struct  UnityTile_t2405085845  : public MonoBehaviour_t3962482529
{
public:
	// Mapbox.Unity.Map.TileTerrainType Mapbox.Unity.MeshGeneration.Data.UnityTile::ElevationType
	int32_t ___ElevationType_4;
	// UnityEngine.Texture2D Mapbox.Unity.MeshGeneration.Data.UnityTile::_rasterData
	Texture2D_t3840446185 * ____rasterData_5;
	// Mapbox.Map.VectorTile Mapbox.Unity.MeshGeneration.Data.UnityTile::<VectorData>k__BackingField
	VectorTile_t4284514353 * ___U3CVectorDataU3Ek__BackingField_6;
	// UnityEngine.Texture2D Mapbox.Unity.MeshGeneration.Data.UnityTile::_heightTexture
	Texture2D_t3840446185 * ____heightTexture_7;
	// System.Single[] Mapbox.Unity.MeshGeneration.Data.UnityTile::_heightData
	SingleU5BU5D_t1444911251* ____heightData_8;
	// UnityEngine.Texture2D Mapbox.Unity.MeshGeneration.Data.UnityTile::_loadingTexture
	Texture2D_t3840446185 * ____loadingTexture_9;
	// System.Collections.Generic.List`1<Mapbox.Map.Tile> Mapbox.Unity.MeshGeneration.Data.UnityTile::_tiles
	List_1_t2569976014 * ____tiles_10;
	// System.Boolean Mapbox.Unity.MeshGeneration.Data.UnityTile::IsRecycled
	bool ___IsRecycled_11;
	// UnityEngine.MeshRenderer Mapbox.Unity.MeshGeneration.Data.UnityTile::_meshRenderer
	MeshRenderer_t587009260 * ____meshRenderer_12;
	// UnityEngine.MeshFilter Mapbox.Unity.MeshGeneration.Data.UnityTile::_meshFilter
	MeshFilter_t3523625662 * ____meshFilter_13;
	// UnityEngine.Collider Mapbox.Unity.MeshGeneration.Data.UnityTile::_collider
	Collider_t1773347010 * ____collider_14;
	// Mapbox.Utils.RectD Mapbox.Unity.MeshGeneration.Data.UnityTile::<Rect>k__BackingField
	RectD_t151583371  ___U3CRectU3Ek__BackingField_15;
	// System.Int32 Mapbox.Unity.MeshGeneration.Data.UnityTile::<InitialZoom>k__BackingField
	int32_t ___U3CInitialZoomU3Ek__BackingField_16;
	// System.Int32 Mapbox.Unity.MeshGeneration.Data.UnityTile::<CurrentZoom>k__BackingField
	int32_t ___U3CCurrentZoomU3Ek__BackingField_17;
	// System.Single Mapbox.Unity.MeshGeneration.Data.UnityTile::<TileScale>k__BackingField
	float ___U3CTileScaleU3Ek__BackingField_18;
	// Mapbox.Map.UnwrappedTileId Mapbox.Unity.MeshGeneration.Data.UnityTile::<UnwrappedTileId>k__BackingField
	UnwrappedTileId_t2586853537  ___U3CUnwrappedTileIdU3Ek__BackingField_19;
	// Mapbox.Map.CanonicalTileId Mapbox.Unity.MeshGeneration.Data.UnityTile::<CanonicalTileId>k__BackingField
	CanonicalTileId_t4184902996  ___U3CCanonicalTileIdU3Ek__BackingField_20;
	// System.Single Mapbox.Unity.MeshGeneration.Data.UnityTile::_relativeScale
	float ____relativeScale_21;
	// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState Mapbox.Unity.MeshGeneration.Data.UnityTile::_rasterDataState
	int32_t ____rasterDataState_22;
	// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState Mapbox.Unity.MeshGeneration.Data.UnityTile::_heightDataState
	int32_t ____heightDataState_23;
	// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState Mapbox.Unity.MeshGeneration.Data.UnityTile::_vectorDataState
	int32_t ____vectorDataState_24;
	// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState Mapbox.Unity.MeshGeneration.Data.UnityTile::_tileState
	int32_t ____tileState_25;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::OnHeightDataChanged
	Action_1_t2577553440 * ___OnHeightDataChanged_26;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::OnRasterDataChanged
	Action_1_t2577553440 * ___OnRasterDataChanged_27;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::OnVectorDataChanged
	Action_1_t2577553440 * ___OnVectorDataChanged_28;
	// System.Boolean Mapbox.Unity.MeshGeneration.Data.UnityTile::_isInitialized
	bool ____isInitialized_29;

public:
	inline static int32_t get_offset_of_ElevationType_4() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ___ElevationType_4)); }
	inline int32_t get_ElevationType_4() const { return ___ElevationType_4; }
	inline int32_t* get_address_of_ElevationType_4() { return &___ElevationType_4; }
	inline void set_ElevationType_4(int32_t value)
	{
		___ElevationType_4 = value;
	}

	inline static int32_t get_offset_of__rasterData_5() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ____rasterData_5)); }
	inline Texture2D_t3840446185 * get__rasterData_5() const { return ____rasterData_5; }
	inline Texture2D_t3840446185 ** get_address_of__rasterData_5() { return &____rasterData_5; }
	inline void set__rasterData_5(Texture2D_t3840446185 * value)
	{
		____rasterData_5 = value;
		Il2CppCodeGenWriteBarrier((&____rasterData_5), value);
	}

	inline static int32_t get_offset_of_U3CVectorDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ___U3CVectorDataU3Ek__BackingField_6)); }
	inline VectorTile_t4284514353 * get_U3CVectorDataU3Ek__BackingField_6() const { return ___U3CVectorDataU3Ek__BackingField_6; }
	inline VectorTile_t4284514353 ** get_address_of_U3CVectorDataU3Ek__BackingField_6() { return &___U3CVectorDataU3Ek__BackingField_6; }
	inline void set_U3CVectorDataU3Ek__BackingField_6(VectorTile_t4284514353 * value)
	{
		___U3CVectorDataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CVectorDataU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of__heightTexture_7() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ____heightTexture_7)); }
	inline Texture2D_t3840446185 * get__heightTexture_7() const { return ____heightTexture_7; }
	inline Texture2D_t3840446185 ** get_address_of__heightTexture_7() { return &____heightTexture_7; }
	inline void set__heightTexture_7(Texture2D_t3840446185 * value)
	{
		____heightTexture_7 = value;
		Il2CppCodeGenWriteBarrier((&____heightTexture_7), value);
	}

	inline static int32_t get_offset_of__heightData_8() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ____heightData_8)); }
	inline SingleU5BU5D_t1444911251* get__heightData_8() const { return ____heightData_8; }
	inline SingleU5BU5D_t1444911251** get_address_of__heightData_8() { return &____heightData_8; }
	inline void set__heightData_8(SingleU5BU5D_t1444911251* value)
	{
		____heightData_8 = value;
		Il2CppCodeGenWriteBarrier((&____heightData_8), value);
	}

	inline static int32_t get_offset_of__loadingTexture_9() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ____loadingTexture_9)); }
	inline Texture2D_t3840446185 * get__loadingTexture_9() const { return ____loadingTexture_9; }
	inline Texture2D_t3840446185 ** get_address_of__loadingTexture_9() { return &____loadingTexture_9; }
	inline void set__loadingTexture_9(Texture2D_t3840446185 * value)
	{
		____loadingTexture_9 = value;
		Il2CppCodeGenWriteBarrier((&____loadingTexture_9), value);
	}

	inline static int32_t get_offset_of__tiles_10() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ____tiles_10)); }
	inline List_1_t2569976014 * get__tiles_10() const { return ____tiles_10; }
	inline List_1_t2569976014 ** get_address_of__tiles_10() { return &____tiles_10; }
	inline void set__tiles_10(List_1_t2569976014 * value)
	{
		____tiles_10 = value;
		Il2CppCodeGenWriteBarrier((&____tiles_10), value);
	}

	inline static int32_t get_offset_of_IsRecycled_11() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ___IsRecycled_11)); }
	inline bool get_IsRecycled_11() const { return ___IsRecycled_11; }
	inline bool* get_address_of_IsRecycled_11() { return &___IsRecycled_11; }
	inline void set_IsRecycled_11(bool value)
	{
		___IsRecycled_11 = value;
	}

	inline static int32_t get_offset_of__meshRenderer_12() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ____meshRenderer_12)); }
	inline MeshRenderer_t587009260 * get__meshRenderer_12() const { return ____meshRenderer_12; }
	inline MeshRenderer_t587009260 ** get_address_of__meshRenderer_12() { return &____meshRenderer_12; }
	inline void set__meshRenderer_12(MeshRenderer_t587009260 * value)
	{
		____meshRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((&____meshRenderer_12), value);
	}

	inline static int32_t get_offset_of__meshFilter_13() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ____meshFilter_13)); }
	inline MeshFilter_t3523625662 * get__meshFilter_13() const { return ____meshFilter_13; }
	inline MeshFilter_t3523625662 ** get_address_of__meshFilter_13() { return &____meshFilter_13; }
	inline void set__meshFilter_13(MeshFilter_t3523625662 * value)
	{
		____meshFilter_13 = value;
		Il2CppCodeGenWriteBarrier((&____meshFilter_13), value);
	}

	inline static int32_t get_offset_of__collider_14() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ____collider_14)); }
	inline Collider_t1773347010 * get__collider_14() const { return ____collider_14; }
	inline Collider_t1773347010 ** get_address_of__collider_14() { return &____collider_14; }
	inline void set__collider_14(Collider_t1773347010 * value)
	{
		____collider_14 = value;
		Il2CppCodeGenWriteBarrier((&____collider_14), value);
	}

	inline static int32_t get_offset_of_U3CRectU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ___U3CRectU3Ek__BackingField_15)); }
	inline RectD_t151583371  get_U3CRectU3Ek__BackingField_15() const { return ___U3CRectU3Ek__BackingField_15; }
	inline RectD_t151583371 * get_address_of_U3CRectU3Ek__BackingField_15() { return &___U3CRectU3Ek__BackingField_15; }
	inline void set_U3CRectU3Ek__BackingField_15(RectD_t151583371  value)
	{
		___U3CRectU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CInitialZoomU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ___U3CInitialZoomU3Ek__BackingField_16)); }
	inline int32_t get_U3CInitialZoomU3Ek__BackingField_16() const { return ___U3CInitialZoomU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CInitialZoomU3Ek__BackingField_16() { return &___U3CInitialZoomU3Ek__BackingField_16; }
	inline void set_U3CInitialZoomU3Ek__BackingField_16(int32_t value)
	{
		___U3CInitialZoomU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentZoomU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ___U3CCurrentZoomU3Ek__BackingField_17)); }
	inline int32_t get_U3CCurrentZoomU3Ek__BackingField_17() const { return ___U3CCurrentZoomU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CCurrentZoomU3Ek__BackingField_17() { return &___U3CCurrentZoomU3Ek__BackingField_17; }
	inline void set_U3CCurrentZoomU3Ek__BackingField_17(int32_t value)
	{
		___U3CCurrentZoomU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CTileScaleU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ___U3CTileScaleU3Ek__BackingField_18)); }
	inline float get_U3CTileScaleU3Ek__BackingField_18() const { return ___U3CTileScaleU3Ek__BackingField_18; }
	inline float* get_address_of_U3CTileScaleU3Ek__BackingField_18() { return &___U3CTileScaleU3Ek__BackingField_18; }
	inline void set_U3CTileScaleU3Ek__BackingField_18(float value)
	{
		___U3CTileScaleU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CUnwrappedTileIdU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ___U3CUnwrappedTileIdU3Ek__BackingField_19)); }
	inline UnwrappedTileId_t2586853537  get_U3CUnwrappedTileIdU3Ek__BackingField_19() const { return ___U3CUnwrappedTileIdU3Ek__BackingField_19; }
	inline UnwrappedTileId_t2586853537 * get_address_of_U3CUnwrappedTileIdU3Ek__BackingField_19() { return &___U3CUnwrappedTileIdU3Ek__BackingField_19; }
	inline void set_U3CUnwrappedTileIdU3Ek__BackingField_19(UnwrappedTileId_t2586853537  value)
	{
		___U3CUnwrappedTileIdU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CCanonicalTileIdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ___U3CCanonicalTileIdU3Ek__BackingField_20)); }
	inline CanonicalTileId_t4184902996  get_U3CCanonicalTileIdU3Ek__BackingField_20() const { return ___U3CCanonicalTileIdU3Ek__BackingField_20; }
	inline CanonicalTileId_t4184902996 * get_address_of_U3CCanonicalTileIdU3Ek__BackingField_20() { return &___U3CCanonicalTileIdU3Ek__BackingField_20; }
	inline void set_U3CCanonicalTileIdU3Ek__BackingField_20(CanonicalTileId_t4184902996  value)
	{
		___U3CCanonicalTileIdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of__relativeScale_21() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ____relativeScale_21)); }
	inline float get__relativeScale_21() const { return ____relativeScale_21; }
	inline float* get_address_of__relativeScale_21() { return &____relativeScale_21; }
	inline void set__relativeScale_21(float value)
	{
		____relativeScale_21 = value;
	}

	inline static int32_t get_offset_of__rasterDataState_22() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ____rasterDataState_22)); }
	inline int32_t get__rasterDataState_22() const { return ____rasterDataState_22; }
	inline int32_t* get_address_of__rasterDataState_22() { return &____rasterDataState_22; }
	inline void set__rasterDataState_22(int32_t value)
	{
		____rasterDataState_22 = value;
	}

	inline static int32_t get_offset_of__heightDataState_23() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ____heightDataState_23)); }
	inline int32_t get__heightDataState_23() const { return ____heightDataState_23; }
	inline int32_t* get_address_of__heightDataState_23() { return &____heightDataState_23; }
	inline void set__heightDataState_23(int32_t value)
	{
		____heightDataState_23 = value;
	}

	inline static int32_t get_offset_of__vectorDataState_24() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ____vectorDataState_24)); }
	inline int32_t get__vectorDataState_24() const { return ____vectorDataState_24; }
	inline int32_t* get_address_of__vectorDataState_24() { return &____vectorDataState_24; }
	inline void set__vectorDataState_24(int32_t value)
	{
		____vectorDataState_24 = value;
	}

	inline static int32_t get_offset_of__tileState_25() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ____tileState_25)); }
	inline int32_t get__tileState_25() const { return ____tileState_25; }
	inline int32_t* get_address_of__tileState_25() { return &____tileState_25; }
	inline void set__tileState_25(int32_t value)
	{
		____tileState_25 = value;
	}

	inline static int32_t get_offset_of_OnHeightDataChanged_26() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ___OnHeightDataChanged_26)); }
	inline Action_1_t2577553440 * get_OnHeightDataChanged_26() const { return ___OnHeightDataChanged_26; }
	inline Action_1_t2577553440 ** get_address_of_OnHeightDataChanged_26() { return &___OnHeightDataChanged_26; }
	inline void set_OnHeightDataChanged_26(Action_1_t2577553440 * value)
	{
		___OnHeightDataChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___OnHeightDataChanged_26), value);
	}

	inline static int32_t get_offset_of_OnRasterDataChanged_27() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ___OnRasterDataChanged_27)); }
	inline Action_1_t2577553440 * get_OnRasterDataChanged_27() const { return ___OnRasterDataChanged_27; }
	inline Action_1_t2577553440 ** get_address_of_OnRasterDataChanged_27() { return &___OnRasterDataChanged_27; }
	inline void set_OnRasterDataChanged_27(Action_1_t2577553440 * value)
	{
		___OnRasterDataChanged_27 = value;
		Il2CppCodeGenWriteBarrier((&___OnRasterDataChanged_27), value);
	}

	inline static int32_t get_offset_of_OnVectorDataChanged_28() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ___OnVectorDataChanged_28)); }
	inline Action_1_t2577553440 * get_OnVectorDataChanged_28() const { return ___OnVectorDataChanged_28; }
	inline Action_1_t2577553440 ** get_address_of_OnVectorDataChanged_28() { return &___OnVectorDataChanged_28; }
	inline void set_OnVectorDataChanged_28(Action_1_t2577553440 * value)
	{
		___OnVectorDataChanged_28 = value;
		Il2CppCodeGenWriteBarrier((&___OnVectorDataChanged_28), value);
	}

	inline static int32_t get_offset_of__isInitialized_29() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845, ____isInitialized_29)); }
	inline bool get__isInitialized_29() const { return ____isInitialized_29; }
	inline bool* get_address_of__isInitialized_29() { return &____isInitialized_29; }
	inline void set__isInitialized_29(bool value)
	{
		____isInitialized_29 = value;
	}
};

struct UnityTile_t2405085845_StaticFields
{
public:
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::<>f__am$cache0
	Action_1_t2577553440 * ___U3CU3Ef__amU24cache0_30;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::<>f__am$cache1
	Action_1_t2577553440 * ___U3CU3Ef__amU24cache1_31;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::<>f__am$cache2
	Action_1_t2577553440 * ___U3CU3Ef__amU24cache2_32;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::<>f__am$cache3
	Action_1_t2577553440 * ___U3CU3Ef__amU24cache3_33;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::<>f__am$cache4
	Action_1_t2577553440 * ___U3CU3Ef__amU24cache4_34;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::<>f__am$cache5
	Action_1_t2577553440 * ___U3CU3Ef__amU24cache5_35;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_30() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845_StaticFields, ___U3CU3Ef__amU24cache0_30)); }
	inline Action_1_t2577553440 * get_U3CU3Ef__amU24cache0_30() const { return ___U3CU3Ef__amU24cache0_30; }
	inline Action_1_t2577553440 ** get_address_of_U3CU3Ef__amU24cache0_30() { return &___U3CU3Ef__amU24cache0_30; }
	inline void set_U3CU3Ef__amU24cache0_30(Action_1_t2577553440 * value)
	{
		___U3CU3Ef__amU24cache0_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_31() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845_StaticFields, ___U3CU3Ef__amU24cache1_31)); }
	inline Action_1_t2577553440 * get_U3CU3Ef__amU24cache1_31() const { return ___U3CU3Ef__amU24cache1_31; }
	inline Action_1_t2577553440 ** get_address_of_U3CU3Ef__amU24cache1_31() { return &___U3CU3Ef__amU24cache1_31; }
	inline void set_U3CU3Ef__amU24cache1_31(Action_1_t2577553440 * value)
	{
		___U3CU3Ef__amU24cache1_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_32() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845_StaticFields, ___U3CU3Ef__amU24cache2_32)); }
	inline Action_1_t2577553440 * get_U3CU3Ef__amU24cache2_32() const { return ___U3CU3Ef__amU24cache2_32; }
	inline Action_1_t2577553440 ** get_address_of_U3CU3Ef__amU24cache2_32() { return &___U3CU3Ef__amU24cache2_32; }
	inline void set_U3CU3Ef__amU24cache2_32(Action_1_t2577553440 * value)
	{
		___U3CU3Ef__amU24cache2_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_33() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845_StaticFields, ___U3CU3Ef__amU24cache3_33)); }
	inline Action_1_t2577553440 * get_U3CU3Ef__amU24cache3_33() const { return ___U3CU3Ef__amU24cache3_33; }
	inline Action_1_t2577553440 ** get_address_of_U3CU3Ef__amU24cache3_33() { return &___U3CU3Ef__amU24cache3_33; }
	inline void set_U3CU3Ef__amU24cache3_33(Action_1_t2577553440 * value)
	{
		___U3CU3Ef__amU24cache3_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_34() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845_StaticFields, ___U3CU3Ef__amU24cache4_34)); }
	inline Action_1_t2577553440 * get_U3CU3Ef__amU24cache4_34() const { return ___U3CU3Ef__amU24cache4_34; }
	inline Action_1_t2577553440 ** get_address_of_U3CU3Ef__amU24cache4_34() { return &___U3CU3Ef__amU24cache4_34; }
	inline void set_U3CU3Ef__amU24cache4_34(Action_1_t2577553440 * value)
	{
		___U3CU3Ef__amU24cache4_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache4_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_35() { return static_cast<int32_t>(offsetof(UnityTile_t2405085845_StaticFields, ___U3CU3Ef__amU24cache5_35)); }
	inline Action_1_t2577553440 * get_U3CU3Ef__amU24cache5_35() const { return ___U3CU3Ef__amU24cache5_35; }
	inline Action_1_t2577553440 ** get_address_of_U3CU3Ef__amU24cache5_35() { return &___U3CU3Ef__amU24cache5_35; }
	inline void set_U3CU3Ef__amU24cache5_35(Action_1_t2577553440 * value)
	{
		___U3CU3Ef__amU24cache5_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache5_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYTILE_T2405085845_H
#ifndef ARPLANEHANDLER_T1247306374_H
#define ARPLANEHANDLER_T1247306374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARInterface.ARPlaneHandler
struct  ARPlaneHandler_t1247306374  : public MonoBehaviour_t3962482529
{
public:
	// System.String UnityARInterface.ARPlaneHandler::_planeId
	String_t* ____planeId_6;
	// UnityARInterface.BoundedPlane UnityARInterface.ARPlaneHandler::_cachedARPlane
	BoundedPlane_t927016382  ____cachedARPlane_7;

public:
	inline static int32_t get_offset_of__planeId_6() { return static_cast<int32_t>(offsetof(ARPlaneHandler_t1247306374, ____planeId_6)); }
	inline String_t* get__planeId_6() const { return ____planeId_6; }
	inline String_t** get_address_of__planeId_6() { return &____planeId_6; }
	inline void set__planeId_6(String_t* value)
	{
		____planeId_6 = value;
		Il2CppCodeGenWriteBarrier((&____planeId_6), value);
	}

	inline static int32_t get_offset_of__cachedARPlane_7() { return static_cast<int32_t>(offsetof(ARPlaneHandler_t1247306374, ____cachedARPlane_7)); }
	inline BoundedPlane_t927016382  get__cachedARPlane_7() const { return ____cachedARPlane_7; }
	inline BoundedPlane_t927016382 * get_address_of__cachedARPlane_7() { return &____cachedARPlane_7; }
	inline void set__cachedARPlane_7(BoundedPlane_t927016382  value)
	{
		____cachedARPlane_7 = value;
	}
};

struct ARPlaneHandler_t1247306374_StaticFields
{
public:
	// System.Action UnityARInterface.ARPlaneHandler::resetARPlane
	Action_t1264377477 * ___resetARPlane_4;
	// System.Action`1<UnityARInterface.BoundedPlane> UnityARInterface.ARPlaneHandler::returnARPlane
	Action_1_t1099483977 * ___returnARPlane_5;

public:
	inline static int32_t get_offset_of_resetARPlane_4() { return static_cast<int32_t>(offsetof(ARPlaneHandler_t1247306374_StaticFields, ___resetARPlane_4)); }
	inline Action_t1264377477 * get_resetARPlane_4() const { return ___resetARPlane_4; }
	inline Action_t1264377477 ** get_address_of_resetARPlane_4() { return &___resetARPlane_4; }
	inline void set_resetARPlane_4(Action_t1264377477 * value)
	{
		___resetARPlane_4 = value;
		Il2CppCodeGenWriteBarrier((&___resetARPlane_4), value);
	}

	inline static int32_t get_offset_of_returnARPlane_5() { return static_cast<int32_t>(offsetof(ARPlaneHandler_t1247306374_StaticFields, ___returnARPlane_5)); }
	inline Action_1_t1099483977 * get_returnARPlane_5() const { return ___returnARPlane_5; }
	inline Action_1_t1099483977 ** get_address_of_returnARPlane_5() { return &___returnARPlane_5; }
	inline void set_returnARPlane_5(Action_1_t1099483977 * value)
	{
		___returnARPlane_5 = value;
		Il2CppCodeGenWriteBarrier((&___returnARPlane_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEHANDLER_T1247306374_H
#ifndef CONNECTTOEDITOR_T595742893_H
#define CONNECTTOEDITOR_T595742893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ConnectToEditor
struct  ConnectToEditor_t595742893  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.XR.iOS.ConnectToEditor::playerConnection
	PlayerConnection_t3081694049 * ___playerConnection_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.ConnectToEditor::m_session
	UnityARSessionNativeInterface_t3929719369 * ___m_session_5;
	// System.Int32 UnityEngine.XR.iOS.ConnectToEditor::editorID
	int32_t ___editorID_6;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.ConnectToEditor::frameBufferTex
	Texture2D_t3840446185 * ___frameBufferTex_7;

public:
	inline static int32_t get_offset_of_playerConnection_4() { return static_cast<int32_t>(offsetof(ConnectToEditor_t595742893, ___playerConnection_4)); }
	inline PlayerConnection_t3081694049 * get_playerConnection_4() const { return ___playerConnection_4; }
	inline PlayerConnection_t3081694049 ** get_address_of_playerConnection_4() { return &___playerConnection_4; }
	inline void set_playerConnection_4(PlayerConnection_t3081694049 * value)
	{
		___playerConnection_4 = value;
		Il2CppCodeGenWriteBarrier((&___playerConnection_4), value);
	}

	inline static int32_t get_offset_of_m_session_5() { return static_cast<int32_t>(offsetof(ConnectToEditor_t595742893, ___m_session_5)); }
	inline UnityARSessionNativeInterface_t3929719369 * get_m_session_5() const { return ___m_session_5; }
	inline UnityARSessionNativeInterface_t3929719369 ** get_address_of_m_session_5() { return &___m_session_5; }
	inline void set_m_session_5(UnityARSessionNativeInterface_t3929719369 * value)
	{
		___m_session_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_session_5), value);
	}

	inline static int32_t get_offset_of_editorID_6() { return static_cast<int32_t>(offsetof(ConnectToEditor_t595742893, ___editorID_6)); }
	inline int32_t get_editorID_6() const { return ___editorID_6; }
	inline int32_t* get_address_of_editorID_6() { return &___editorID_6; }
	inline void set_editorID_6(int32_t value)
	{
		___editorID_6 = value;
	}

	inline static int32_t get_offset_of_frameBufferTex_7() { return static_cast<int32_t>(offsetof(ConnectToEditor_t595742893, ___frameBufferTex_7)); }
	inline Texture2D_t3840446185 * get_frameBufferTex_7() const { return ___frameBufferTex_7; }
	inline Texture2D_t3840446185 ** get_address_of_frameBufferTex_7() { return &___frameBufferTex_7; }
	inline void set_frameBufferTex_7(Texture2D_t3840446185 * value)
	{
		___frameBufferTex_7 = value;
		Il2CppCodeGenWriteBarrier((&___frameBufferTex_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTTOEDITOR_T595742893_H
#ifndef UNITYARUSERANCHORCOMPONENT_T969893952_H
#define UNITYARUSERANCHORCOMPONENT_T969893952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUserAnchorComponent
struct  UnityARUserAnchorComponent_t969893952  : public MonoBehaviour_t3962482529
{
public:
	// System.String UnityEngine.XR.iOS.UnityARUserAnchorComponent::m_AnchorId
	String_t* ___m_AnchorId_4;

public:
	inline static int32_t get_offset_of_m_AnchorId_4() { return static_cast<int32_t>(offsetof(UnityARUserAnchorComponent_t969893952, ___m_AnchorId_4)); }
	inline String_t* get_m_AnchorId_4() const { return ___m_AnchorId_4; }
	inline String_t** get_address_of_m_AnchorId_4() { return &___m_AnchorId_4; }
	inline void set_m_AnchorId_4(String_t* value)
	{
		___m_AnchorId_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnchorId_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUSERANCHORCOMPONENT_T969893952_H
#ifndef UNITYARVIDEO_T1146951207_H
#define UNITYARVIDEO_T1146951207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARVideo
struct  UnityARVideo_t1146951207  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Material UnityEngine.XR.iOS.UnityARVideo::m_ClearMaterial
	Material_t340375123 * ___m_ClearMaterial_4;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.XR.iOS.UnityARVideo::m_VideoCommandBuffer
	CommandBuffer_t2206337031 * ___m_VideoCommandBuffer_5;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.UnityARVideo::_videoTextureY
	Texture2D_t3840446185 * ____videoTextureY_6;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.UnityARVideo::_videoTextureCbCr
	Texture2D_t3840446185 * ____videoTextureCbCr_7;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.UnityARVideo::_displayTransform
	Matrix4x4_t1817901843  ____displayTransform_8;
	// System.Boolean UnityEngine.XR.iOS.UnityARVideo::bCommandBufferInitialized
	bool ___bCommandBufferInitialized_9;

public:
	inline static int32_t get_offset_of_m_ClearMaterial_4() { return static_cast<int32_t>(offsetof(UnityARVideo_t1146951207, ___m_ClearMaterial_4)); }
	inline Material_t340375123 * get_m_ClearMaterial_4() const { return ___m_ClearMaterial_4; }
	inline Material_t340375123 ** get_address_of_m_ClearMaterial_4() { return &___m_ClearMaterial_4; }
	inline void set_m_ClearMaterial_4(Material_t340375123 * value)
	{
		___m_ClearMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClearMaterial_4), value);
	}

	inline static int32_t get_offset_of_m_VideoCommandBuffer_5() { return static_cast<int32_t>(offsetof(UnityARVideo_t1146951207, ___m_VideoCommandBuffer_5)); }
	inline CommandBuffer_t2206337031 * get_m_VideoCommandBuffer_5() const { return ___m_VideoCommandBuffer_5; }
	inline CommandBuffer_t2206337031 ** get_address_of_m_VideoCommandBuffer_5() { return &___m_VideoCommandBuffer_5; }
	inline void set_m_VideoCommandBuffer_5(CommandBuffer_t2206337031 * value)
	{
		___m_VideoCommandBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_VideoCommandBuffer_5), value);
	}

	inline static int32_t get_offset_of__videoTextureY_6() { return static_cast<int32_t>(offsetof(UnityARVideo_t1146951207, ____videoTextureY_6)); }
	inline Texture2D_t3840446185 * get__videoTextureY_6() const { return ____videoTextureY_6; }
	inline Texture2D_t3840446185 ** get_address_of__videoTextureY_6() { return &____videoTextureY_6; }
	inline void set__videoTextureY_6(Texture2D_t3840446185 * value)
	{
		____videoTextureY_6 = value;
		Il2CppCodeGenWriteBarrier((&____videoTextureY_6), value);
	}

	inline static int32_t get_offset_of__videoTextureCbCr_7() { return static_cast<int32_t>(offsetof(UnityARVideo_t1146951207, ____videoTextureCbCr_7)); }
	inline Texture2D_t3840446185 * get__videoTextureCbCr_7() const { return ____videoTextureCbCr_7; }
	inline Texture2D_t3840446185 ** get_address_of__videoTextureCbCr_7() { return &____videoTextureCbCr_7; }
	inline void set__videoTextureCbCr_7(Texture2D_t3840446185 * value)
	{
		____videoTextureCbCr_7 = value;
		Il2CppCodeGenWriteBarrier((&____videoTextureCbCr_7), value);
	}

	inline static int32_t get_offset_of__displayTransform_8() { return static_cast<int32_t>(offsetof(UnityARVideo_t1146951207, ____displayTransform_8)); }
	inline Matrix4x4_t1817901843  get__displayTransform_8() const { return ____displayTransform_8; }
	inline Matrix4x4_t1817901843 * get_address_of__displayTransform_8() { return &____displayTransform_8; }
	inline void set__displayTransform_8(Matrix4x4_t1817901843  value)
	{
		____displayTransform_8 = value;
	}

	inline static int32_t get_offset_of_bCommandBufferInitialized_9() { return static_cast<int32_t>(offsetof(UnityARVideo_t1146951207, ___bCommandBufferInitialized_9)); }
	inline bool get_bCommandBufferInitialized_9() const { return ___bCommandBufferInitialized_9; }
	inline bool* get_address_of_bCommandBufferInitialized_9() { return &___bCommandBufferInitialized_9; }
	inline void set_bCommandBufferInitialized_9(bool value)
	{
		___bCommandBufferInitialized_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARVIDEO_T1146951207_H
#ifndef UNITYREMOTEVIDEO_T705138647_H
#define UNITYREMOTEVIDEO_T705138647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityRemoteVideo
struct  UnityRemoteVideo_t705138647  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.XR.iOS.ConnectToEditor UnityEngine.XR.iOS.UnityRemoteVideo::connectToEditor
	ConnectToEditor_t595742893 * ___connectToEditor_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityRemoteVideo::m_Session
	UnityARSessionNativeInterface_t3929719369 * ___m_Session_5;
	// System.Boolean UnityEngine.XR.iOS.UnityRemoteVideo::bTexturesInitialized
	bool ___bTexturesInitialized_6;
	// System.Int32 UnityEngine.XR.iOS.UnityRemoteVideo::currentFrameIndex
	int32_t ___currentFrameIndex_7;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureYBytes
	ByteU5BU5D_t4116647657* ___m_textureYBytes_8;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureUVBytes
	ByteU5BU5D_t4116647657* ___m_textureUVBytes_9;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureYBytes2
	ByteU5BU5D_t4116647657* ___m_textureYBytes2_10;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureUVBytes2
	ByteU5BU5D_t4116647657* ___m_textureUVBytes2_11;
	// System.Runtime.InteropServices.GCHandle UnityEngine.XR.iOS.UnityRemoteVideo::m_pinnedYArray
	GCHandle_t3351438187  ___m_pinnedYArray_12;
	// System.Runtime.InteropServices.GCHandle UnityEngine.XR.iOS.UnityRemoteVideo::m_pinnedUVArray
	GCHandle_t3351438187  ___m_pinnedUVArray_13;

public:
	inline static int32_t get_offset_of_connectToEditor_4() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___connectToEditor_4)); }
	inline ConnectToEditor_t595742893 * get_connectToEditor_4() const { return ___connectToEditor_4; }
	inline ConnectToEditor_t595742893 ** get_address_of_connectToEditor_4() { return &___connectToEditor_4; }
	inline void set_connectToEditor_4(ConnectToEditor_t595742893 * value)
	{
		___connectToEditor_4 = value;
		Il2CppCodeGenWriteBarrier((&___connectToEditor_4), value);
	}

	inline static int32_t get_offset_of_m_Session_5() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___m_Session_5)); }
	inline UnityARSessionNativeInterface_t3929719369 * get_m_Session_5() const { return ___m_Session_5; }
	inline UnityARSessionNativeInterface_t3929719369 ** get_address_of_m_Session_5() { return &___m_Session_5; }
	inline void set_m_Session_5(UnityARSessionNativeInterface_t3929719369 * value)
	{
		___m_Session_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Session_5), value);
	}

	inline static int32_t get_offset_of_bTexturesInitialized_6() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___bTexturesInitialized_6)); }
	inline bool get_bTexturesInitialized_6() const { return ___bTexturesInitialized_6; }
	inline bool* get_address_of_bTexturesInitialized_6() { return &___bTexturesInitialized_6; }
	inline void set_bTexturesInitialized_6(bool value)
	{
		___bTexturesInitialized_6 = value;
	}

	inline static int32_t get_offset_of_currentFrameIndex_7() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___currentFrameIndex_7)); }
	inline int32_t get_currentFrameIndex_7() const { return ___currentFrameIndex_7; }
	inline int32_t* get_address_of_currentFrameIndex_7() { return &___currentFrameIndex_7; }
	inline void set_currentFrameIndex_7(int32_t value)
	{
		___currentFrameIndex_7 = value;
	}

	inline static int32_t get_offset_of_m_textureYBytes_8() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___m_textureYBytes_8)); }
	inline ByteU5BU5D_t4116647657* get_m_textureYBytes_8() const { return ___m_textureYBytes_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_textureYBytes_8() { return &___m_textureYBytes_8; }
	inline void set_m_textureYBytes_8(ByteU5BU5D_t4116647657* value)
	{
		___m_textureYBytes_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureYBytes_8), value);
	}

	inline static int32_t get_offset_of_m_textureUVBytes_9() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___m_textureUVBytes_9)); }
	inline ByteU5BU5D_t4116647657* get_m_textureUVBytes_9() const { return ___m_textureUVBytes_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_textureUVBytes_9() { return &___m_textureUVBytes_9; }
	inline void set_m_textureUVBytes_9(ByteU5BU5D_t4116647657* value)
	{
		___m_textureUVBytes_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureUVBytes_9), value);
	}

	inline static int32_t get_offset_of_m_textureYBytes2_10() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___m_textureYBytes2_10)); }
	inline ByteU5BU5D_t4116647657* get_m_textureYBytes2_10() const { return ___m_textureYBytes2_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_textureYBytes2_10() { return &___m_textureYBytes2_10; }
	inline void set_m_textureYBytes2_10(ByteU5BU5D_t4116647657* value)
	{
		___m_textureYBytes2_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureYBytes2_10), value);
	}

	inline static int32_t get_offset_of_m_textureUVBytes2_11() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___m_textureUVBytes2_11)); }
	inline ByteU5BU5D_t4116647657* get_m_textureUVBytes2_11() const { return ___m_textureUVBytes2_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_textureUVBytes2_11() { return &___m_textureUVBytes2_11; }
	inline void set_m_textureUVBytes2_11(ByteU5BU5D_t4116647657* value)
	{
		___m_textureUVBytes2_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureUVBytes2_11), value);
	}

	inline static int32_t get_offset_of_m_pinnedYArray_12() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___m_pinnedYArray_12)); }
	inline GCHandle_t3351438187  get_m_pinnedYArray_12() const { return ___m_pinnedYArray_12; }
	inline GCHandle_t3351438187 * get_address_of_m_pinnedYArray_12() { return &___m_pinnedYArray_12; }
	inline void set_m_pinnedYArray_12(GCHandle_t3351438187  value)
	{
		___m_pinnedYArray_12 = value;
	}

	inline static int32_t get_offset_of_m_pinnedUVArray_13() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___m_pinnedUVArray_13)); }
	inline GCHandle_t3351438187  get_m_pinnedUVArray_13() const { return ___m_pinnedUVArray_13; }
	inline GCHandle_t3351438187 * get_address_of_m_pinnedUVArray_13() { return &___m_pinnedUVArray_13; }
	inline void set_m_pinnedUVArray_13(GCHandle_t3351438187  value)
	{
		___m_pinnedUVArray_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYREMOTEVIDEO_T705138647_H
#ifndef UNITYPOINTCLOUDEXAMPLE_T3649008995_H
#define UNITYPOINTCLOUDEXAMPLE_T3649008995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityPointCloudExample
struct  UnityPointCloudExample_t3649008995  : public MonoBehaviour_t3962482529
{
public:
	// System.UInt32 UnityPointCloudExample::numPointsToShow
	uint32_t ___numPointsToShow_4;
	// UnityEngine.GameObject UnityPointCloudExample::PointCloudPrefab
	GameObject_t1113636619 * ___PointCloudPrefab_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityPointCloudExample::pointCloudObjects
	List_1_t2585711361 * ___pointCloudObjects_6;
	// UnityEngine.Vector3[] UnityPointCloudExample::m_PointCloudData
	Vector3U5BU5D_t1718750761* ___m_PointCloudData_7;

public:
	inline static int32_t get_offset_of_numPointsToShow_4() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3649008995, ___numPointsToShow_4)); }
	inline uint32_t get_numPointsToShow_4() const { return ___numPointsToShow_4; }
	inline uint32_t* get_address_of_numPointsToShow_4() { return &___numPointsToShow_4; }
	inline void set_numPointsToShow_4(uint32_t value)
	{
		___numPointsToShow_4 = value;
	}

	inline static int32_t get_offset_of_PointCloudPrefab_5() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3649008995, ___PointCloudPrefab_5)); }
	inline GameObject_t1113636619 * get_PointCloudPrefab_5() const { return ___PointCloudPrefab_5; }
	inline GameObject_t1113636619 ** get_address_of_PointCloudPrefab_5() { return &___PointCloudPrefab_5; }
	inline void set_PointCloudPrefab_5(GameObject_t1113636619 * value)
	{
		___PointCloudPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___PointCloudPrefab_5), value);
	}

	inline static int32_t get_offset_of_pointCloudObjects_6() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3649008995, ___pointCloudObjects_6)); }
	inline List_1_t2585711361 * get_pointCloudObjects_6() const { return ___pointCloudObjects_6; }
	inline List_1_t2585711361 ** get_address_of_pointCloudObjects_6() { return &___pointCloudObjects_6; }
	inline void set_pointCloudObjects_6(List_1_t2585711361 * value)
	{
		___pointCloudObjects_6 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudObjects_6), value);
	}

	inline static int32_t get_offset_of_m_PointCloudData_7() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3649008995, ___m_PointCloudData_7)); }
	inline Vector3U5BU5D_t1718750761* get_m_PointCloudData_7() const { return ___m_PointCloudData_7; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_PointCloudData_7() { return &___m_PointCloudData_7; }
	inline void set_m_PointCloudData_7(Vector3U5BU5D_t1718750761* value)
	{
		___m_PointCloudData_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointCloudData_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYPOINTCLOUDEXAMPLE_T3649008995_H
#ifndef UPDATESHADERCOORDINATESBYARPLANE_T405495776_H
#define UPDATESHADERCOORDINATESBYARPLANE_T405495776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpdateShaderCoordinatesByARPlane
struct  UpdateShaderCoordinatesByARPlane_t405495776  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Quaternion UpdateShaderCoordinatesByARPlane::_rotation
	Quaternion_t2301928331  ____rotation_4;
	// UnityEngine.Vector3 UpdateShaderCoordinatesByARPlane::_localScale
	Vector3_t3722313464  ____localScale_5;
	// UnityEngine.Vector3 UpdateShaderCoordinatesByARPlane::_position
	Vector3_t3722313464  ____position_6;

public:
	inline static int32_t get_offset_of__rotation_4() { return static_cast<int32_t>(offsetof(UpdateShaderCoordinatesByARPlane_t405495776, ____rotation_4)); }
	inline Quaternion_t2301928331  get__rotation_4() const { return ____rotation_4; }
	inline Quaternion_t2301928331 * get_address_of__rotation_4() { return &____rotation_4; }
	inline void set__rotation_4(Quaternion_t2301928331  value)
	{
		____rotation_4 = value;
	}

	inline static int32_t get_offset_of__localScale_5() { return static_cast<int32_t>(offsetof(UpdateShaderCoordinatesByARPlane_t405495776, ____localScale_5)); }
	inline Vector3_t3722313464  get__localScale_5() const { return ____localScale_5; }
	inline Vector3_t3722313464 * get_address_of__localScale_5() { return &____localScale_5; }
	inline void set__localScale_5(Vector3_t3722313464  value)
	{
		____localScale_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(UpdateShaderCoordinatesByARPlane_t405495776, ____position_6)); }
	inline Vector3_t3722313464  get__position_6() const { return ____position_6; }
	inline Vector3_t3722313464 * get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(Vector3_t3722313464  value)
	{
		____position_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATESHADERCOORDINATESBYARPLANE_T405495776_H
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
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
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

extern "C" void ARPlaneAnchor_t2049372221_marshal_pinvoke(const ARPlaneAnchor_t2049372221& unmarshaled, ARPlaneAnchor_t2049372221_marshaled_pinvoke& marshaled);
extern "C" void ARPlaneAnchor_t2049372221_marshal_pinvoke_back(const ARPlaneAnchor_t2049372221_marshaled_pinvoke& marshaled, ARPlaneAnchor_t2049372221& unmarshaled);
extern "C" void ARPlaneAnchor_t2049372221_marshal_pinvoke_cleanup(ARPlaneAnchor_t2049372221_marshaled_pinvoke& marshaled);
extern "C" void ARUserAnchor_t1406831531_marshal_pinvoke(const ARUserAnchor_t1406831531& unmarshaled, ARUserAnchor_t1406831531_marshaled_pinvoke& marshaled);
extern "C" void ARUserAnchor_t1406831531_marshal_pinvoke_back(const ARUserAnchor_t1406831531_marshaled_pinvoke& marshaled, ARUserAnchor_t1406831531& unmarshaled);
extern "C" void ARUserAnchor_t1406831531_marshal_pinvoke_cleanup(ARUserAnchor_t1406831531_marshaled_pinvoke& marshaled);

// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m1513755678_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityARInterface.BoundedPlane>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m3806006932_gshared (Action_1_t1099483977 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_2__ctor_m465026036_gshared (Action_2_t2470008838 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_3__ctor_m967275408_gshared (Action_3_t3632554945 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Object,System.Object,System.Object>::Invoke(!0,!1,!2)
extern "C" IL2CPP_METHOD_ATTR void Action_3_Invoke_m3948987085_gshared (Action_3_t3632554945 * __this, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::Invoke(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Action_2_Invoke_m3043915573_gshared (Action_2_t2470008838 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);

// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded::Invoke(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C" IL2CPP_METHOD_ATTR void ARAnchorAdded_Invoke_m3997182965 (ARAnchorAdded_t1608557165 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved::Invoke(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C" IL2CPP_METHOD_ATTR void ARAnchorRemoved_Invoke_m2507577298 (ARAnchorRemoved_t4030593004 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated::Invoke(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C" IL2CPP_METHOD_ATTR void ARAnchorUpdated_Invoke_m4060209543 (ARAnchorUpdated_t3113222537 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded::Invoke(UnityEngine.XR.iOS.ARFaceAnchor)
extern "C" IL2CPP_METHOD_ATTR void ARFaceAnchorAdded_Invoke_m2621285646 (ARFaceAnchorAdded_t3526051790 * __this, ARFaceAnchor_t1844206636 * ___anchorData0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved::Invoke(UnityEngine.XR.iOS.ARFaceAnchor)
extern "C" IL2CPP_METHOD_ATTR void ARFaceAnchorRemoved_Invoke_m1750686678 (ARFaceAnchorRemoved_t2550278937 * __this, ARFaceAnchor_t1844206636 * ___anchorData0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated::Invoke(UnityEngine.XR.iOS.ARFaceAnchor)
extern "C" IL2CPP_METHOD_ATTR void ARFaceAnchorUpdated_Invoke_m653826901 (ARFaceAnchorUpdated_t3258688950 * __this, ARFaceAnchor_t1844206636 * ___anchorData0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate::Invoke(UnityEngine.XR.iOS.UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR void ARFrameUpdate_Invoke_m2222676468 (ARFrameUpdate_t1157215840 * __this, UnityARCamera_t2069150450  ___camera0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback::Invoke()
extern "C" IL2CPP_METHOD_ATTR void ARSessionCallback_Invoke_m75738571 (ARSessionCallback_t3772093212 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed::Invoke(System.String)
extern "C" IL2CPP_METHOD_ATTR void ARSessionFailed_Invoke_m4221473546 (ARSessionFailed_t2125002991 * __this, String_t* ___error0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged::Invoke(UnityEngine.XR.iOS.UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR void ARSessionTrackingChanged_Invoke_m4139867491 (ARSessionTrackingChanged_t923029411 * __this, UnityARCamera_t2069150450  ___camera0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded::Invoke(UnityEngine.XR.iOS.ARUserAnchor)
extern "C" IL2CPP_METHOD_ATTR void ARUserAnchorAdded_Invoke_m555329492 (ARUserAnchorAdded_t1851120876 * __this, ARUserAnchor_t1406831531  ___anchorData0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved::Invoke(UnityEngine.XR.iOS.ARUserAnchor)
extern "C" IL2CPP_METHOD_ATTR void ARUserAnchorRemoved_Invoke_m460985818 (ARUserAnchorRemoved_t23344545 * __this, ARUserAnchor_t1406831531  ___anchorData0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated::Invoke(UnityEngine.XR.iOS.ARUserAnchor)
extern "C" IL2CPP_METHOD_ATTR void ARUserAnchorUpdated_Invoke_m2571719984 (ARUserAnchorUpdated_t4007601678 * __this, ARUserAnchor_t1406831531  ___anchorData0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded::Invoke(UnityEngine.XR.iOS.UnityARAnchorData)
extern "C" IL2CPP_METHOD_ATTR void internal_ARAnchorAdded_Invoke_m3392910336 (internal_ARAnchorAdded_t1565083332 * __this, UnityARAnchorData_t1157236668  ___anchorData0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved::Invoke(UnityEngine.XR.iOS.UnityARAnchorData)
extern "C" IL2CPP_METHOD_ATTR void internal_ARAnchorRemoved_Invoke_m1866298684 (internal_ARAnchorRemoved_t3371657877 * __this, UnityARAnchorData_t1157236668  ___anchorData0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated::Invoke(UnityEngine.XR.iOS.UnityARAnchorData)
extern "C" IL2CPP_METHOD_ATTR void internal_ARAnchorUpdated_Invoke_m351385753 (internal_ARAnchorUpdated_t2645242205 * __this, UnityARAnchorData_t1157236668  ___anchorData0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorAdded::Invoke(UnityEngine.XR.iOS.UnityARFaceAnchorData)
extern "C" IL2CPP_METHOD_ATTR void internal_ARFaceAnchorAdded_Invoke_m1293004774 (internal_ARFaceAnchorAdded_t1021040265 * __this, UnityARFaceAnchorData_t2028622935  ___anchorData0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorRemoved::Invoke(UnityEngine.XR.iOS.UnityARFaceAnchorData)
extern "C" IL2CPP_METHOD_ATTR void internal_ARFaceAnchorRemoved_Invoke_m4281757167 (internal_ARFaceAnchorRemoved_t2563439402 * __this, UnityARFaceAnchorData_t2028622935  ___anchorData0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorUpdated::Invoke(UnityEngine.XR.iOS.UnityARFaceAnchorData)
extern "C" IL2CPP_METHOD_ATTR void internal_ARFaceAnchorUpdated_Invoke_m1347290919 (internal_ARFaceAnchorUpdated_t3423900432 * __this, UnityARFaceAnchorData_t2028622935  ___anchorData0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate::Invoke(UnityEngine.XR.iOS.internal_UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR void internal_ARFrameUpdate_Invoke_m4026855931 (internal_ARFrameUpdate_t3254989823 * __this, internal_UnityARCamera_t3920739388  ___camera0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged::Invoke(UnityEngine.XR.iOS.internal_UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR void internal_ARSessionTrackingChanged_Invoke_m2960819036 (internal_ARSessionTrackingChanged_t1988849735 * __this, internal_UnityARCamera_t3920739388  ___camera0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded::Invoke(UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C" IL2CPP_METHOD_ATTR void internal_ARUserAnchorAdded_Invoke_m3060859101 (internal_ARUserAnchorAdded_t3285282493 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved::Invoke(UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C" IL2CPP_METHOD_ATTR void internal_ARUserAnchorRemoved_Invoke_m1810838433 (internal_ARUserAnchorRemoved_t386858594 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated::Invoke(UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C" IL2CPP_METHOD_ATTR void internal_ARUserAnchorUpdated_Invoke_m1125450612 (internal_ARUserAnchorUpdated_t3964727538 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARUserAnchorUpdated__ctor_m4059084489 (ARUserAnchorUpdated_t4007601678 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARUserAnchorUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated)
extern "C" IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_add_ARUserAnchorUpdatedEvent_m3620938119 (RuntimeObject * __this /* static, unused */, ARUserAnchorUpdated_t4007601678 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARUserAnchorRemoved__ctor_m586540762 (ARUserAnchorRemoved_t23344545 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARUserAnchorRemovedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved)
extern "C" IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_add_ARUserAnchorRemovedEvent_m3520224501 (RuntimeObject * __this /* static, unused */, ARUserAnchorRemoved_t23344545 * ___value0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetARSessionNativeInterface()
extern "C" IL2CPP_METHOD_ATTR UnityARSessionNativeInterface_t3929719369 * UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.XR.iOS.UnityARUserAnchorData UnityEngine.XR.iOS.UnityARSessionNativeInterface::AddUserAnchorFromGameObject(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR UnityARUserAnchorData_t1976826249  UnityARSessionNativeInterface_AddUserAnchorFromGameObject_m3087613556 (UnityARSessionNativeInterface_t3929719369 * __this, GameObject_t1113636619 * ___go0, const RuntimeMethod* method);
// System.String UnityEngine.XR.iOS.UnityARUserAnchorData::get_identifierStr()
extern "C" IL2CPP_METHOD_ATTR String_t* UnityARUserAnchorData_get_identifierStr_m122781054 (UnityARUserAnchorData_t1976826249 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARUserAnchorUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated)
extern "C" IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_remove_ARUserAnchorUpdatedEvent_m2181757746 (RuntimeObject * __this /* static, unused */, ARUserAnchorUpdated_t4007601678 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARUserAnchorRemovedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved)
extern "C" IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_remove_ARUserAnchorRemovedEvent_m2042627006 (RuntimeObject * __this /* static, unused */, ARUserAnchorRemoved_t23344545 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::RemoveUserAnchor(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_RemoveUserAnchor_m1246452311 (UnityARSessionNativeInterface_t3929719369 * __this, String_t* ___anchorIdentifier0, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAuto(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAuto_m3648166035 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  Matrix4x4_TRS_m3801934620 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Quaternion_t2301928331  p1, Vector3_t3722313464  p2, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Matrix4x4_GetColumn_m461504848 (Matrix4x4_t1817901843 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_t1113636619 * Object_Instantiate_TisGameObject_t1113636619_m4070250708 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method);
}
// System.Void UnityEngine.GameObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m3707688467 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Object_set_name_m291480324 (Object_t631007953 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARUtility::UpdatePlaneWithAnchorTransform(UnityEngine.GameObject,UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * UnityARUtility_UpdatePlaneWithAnchorTransform_m2954036282 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___plane0, ARPlaneAnchor_t2049372221  ___arPlaneAnchor1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.iOS.UnityARMatrixOps::GetPosition(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  UnityARMatrixOps_GetPosition_m296874797 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___matrix0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.XR.iOS.UnityARMatrixOps::GetRotation(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  UnityARMatrixOps_GetRotation_m1192521266 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___matrix0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.MeshFilter>()
inline MeshFilter_t3523625662 * GameObject_GetComponentInChildren_TisMeshFilter_t3523625662_m478508368 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t3523625662 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_m1513755678_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARFrameUpdate__ctor_m3633991724 (ARFrameUpdate_t1157215840 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARFrameUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate)
extern "C" IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m3366057771 (RuntimeObject * __this /* static, unused */, ARFrameUpdate_t1157215840 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR void Matrix4x4_SetColumn_m2328592759 (Matrix4x4_t1817901843 * __this, int32_t p0, Vector4_t3319028937  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer__ctor_m3028411456 (CommandBuffer_t2206337031 * __this, const RuntimeMethod* method);
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(UnityEngine.Rendering.BuiltinRenderTextureType)
extern "C" IL2CPP_METHOD_ATTR RenderTargetIdentifier_t2079184500  RenderTargetIdentifier_op_Implicit_m2644497587 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::Blit(UnityEngine.Texture,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_Blit_m1578015716 (CommandBuffer_t2206337031 * __this, Texture_t3661962703 * p0, RenderTargetIdentifier_t2079184500  p1, Material_t340375123 * p2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_t4157153871 * Component_GetComponent_TisCamera_t4157153871_m4227149030 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Camera_t4157153871 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.Camera::AddCommandBuffer(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
extern "C" IL2CPP_METHOD_ATTR void Camera_AddCommandBuffer_m1363239337 (Camera_t4157153871 * __this, int32_t p0, CommandBuffer_t2206337031 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::RemoveCommandBuffer(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
extern "C" IL2CPP_METHOD_ATTR void Camera_RemoveCommandBuffer_m773243127 (Camera_t4157153871 * __this, int32_t p0, CommandBuffer_t2206337031 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARFrameUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate)
extern "C" IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_remove_ARFrameUpdatedEvent_m772523965 (RuntimeObject * __this /* static, unused */, ARFrameUpdate_t1157215840 * ___value0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.ARTextureHandles UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetARVideoTextureHandles()
extern "C" IL2CPP_METHOD_ATTR ARTextureHandles_t852411561  UnityARSessionNativeInterface_GetARVideoTextureHandles_m1964002027 (UnityARSessionNativeInterface_t3929719369 * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m408849716 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARVideo::InitializeCommandBuffer()
extern "C" IL2CPP_METHOD_ATTR void UnityARVideo_InitializeCommandBuffer_m1538546596 (UnityARVideo_t1146951207 * __this, const RuntimeMethod* method);
// UnityEngine.Resolution UnityEngine.Screen::get_currentResolution()
extern "C" IL2CPP_METHOD_ATTR Resolution_t2487619763  Screen_get_currentResolution_m1680624610 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Resolution::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Resolution_get_width_m400677188 (Resolution_t2487619763 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Resolution::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Resolution_get_height_m933996501 (Resolution_t2487619763 * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Texture2D::CreateExternalTexture(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * Texture2D_CreateExternalTexture_m2529687473 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, int32_t p2, bool p3, bool p4, intptr_t p5, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
extern "C" IL2CPP_METHOD_ATTR void Texture_set_filterMode_m3078068058 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
extern "C" IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m587872754 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void Material_SetTexture_m1829349465 (Material_t340375123 * __this, String_t* p0, Texture_t3661962703 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::UpdateExternalTexture(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_UpdateExternalTexture_m2829146467 (Texture2D_t3840446185 * __this, intptr_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR void Material_SetMatrix_m4094650785 (Material_t340375123 * __this, String_t* p0, Matrix4x4_t1817901843  p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityMarshalLightData::.ctor(UnityEngine.XR.iOS.LightDataType,UnityEngine.XR.iOS.UnityARLightEstimate,UnityEngine.XR.iOS.MarshalDirectionalLightEstimate)
extern "C" IL2CPP_METHOD_ATTR void UnityMarshalLightData__ctor_m1643561199 (UnityMarshalLightData_t1623228070 * __this, int32_t ___ldt0, UnityARLightEstimate_t1498306117  ___ule1, MarshalDirectionalLightEstimate_t3803901471  ___mdle2, const RuntimeMethod* method);
// System.Single[] UnityEngine.XR.iOS.MarshalDirectionalLightEstimate::get_SphericalHarmonicCoefficients()
extern "C" IL2CPP_METHOD_ATTR SingleU5BU5D_t1444911251* MarshalDirectionalLightEstimate_get_SphericalHarmonicCoefficients_m156075873 (MarshalDirectionalLightEstimate_t3803901471 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::.ctor(System.Single[],UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void UnityARDirectionalLightEstimate__ctor_m3248127264 (UnityARDirectionalLightEstimate_t2924556994 * __this, SingleU5BU5D_t1444911251* ___SHC0, Vector3_t3722313464  ___direction1, float ___intensity2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARLightData::.ctor(UnityEngine.XR.iOS.LightDataType,UnityEngine.XR.iOS.UnityARLightEstimate,UnityEngine.XR.iOS.UnityARDirectionalLightEstimate)
extern "C" IL2CPP_METHOD_ATTR void UnityARLightData__ctor_m4238079321 (UnityARLightData_t2160616730 * __this, int32_t ___ldt0, UnityARLightEstimate_t1498306117  ___ule1, UnityARDirectionalLightEstimate_t2924556994 * ___udle2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::InitializeTextures(UnityEngine.XR.iOS.UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR void UnityRemoteVideo_InitializeTextures_m1227954273 (UnityRemoteVideo_t705138647 * __this, UnityARCamera_t2069150450  ___camera0, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
extern "C" IL2CPP_METHOD_ATTR GCHandle_t3351438187  GCHandle_Alloc_m3053200191 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C" IL2CPP_METHOD_ATTR void GCHandle_Free_m1457699368 (GCHandle_t3351438187 * __this, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" IL2CPP_METHOD_ATTR GCHandle_t3351438187  GCHandle_Alloc_m3823409740 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
extern "C" IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m3427142301 (GCHandle_t3351438187 * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::ByteArrayForFrame(System.Int32,System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* UnityRemoteVideo_ByteArrayForFrame_m1687071501 (UnityRemoteVideo_t705138647 * __this, int32_t ___frame0, ByteU5BU5D_t4116647657* ___array01, ByteU5BU5D_t4116647657* ___array12, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::SetCapturePixelData(System.Boolean,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_SetCapturePixelData_m3385125279 (UnityARSessionNativeInterface_t3929719369 * __this, bool ___enable0, intptr_t ___pYByteArray1, intptr_t ___pUVByteArray2, const RuntimeMethod* method);
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::YByteArrayForFrame(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* UnityRemoteVideo_YByteArrayForFrame_m3411529770 (UnityRemoteVideo_t705138647 * __this, int32_t ___frame0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.iOS.UnityRemoteVideo::PinByteArray(System.Runtime.InteropServices.GCHandle&,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR intptr_t UnityRemoteVideo_PinByteArray_m562672237 (UnityRemoteVideo_t705138647 * __this, GCHandle_t3351438187 * ___handle0, ByteU5BU5D_t4116647657* ___array1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::UVByteArrayForFrame(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* UnityRemoteVideo_UVByteArrayForFrame_m4228667374 (UnityRemoteVideo_t705138647 * __this, int32_t ___frame0, const RuntimeMethod* method);
// System.Guid UnityEngine.XR.iOS.ConnectionMessageIds::get_screenCaptureYMsgId()
extern "C" IL2CPP_METHOD_ATTR Guid_t  ConnectionMessageIds_get_screenCaptureYMsgId_m3024188835 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.ConnectToEditor::SendToEditor(System.Guid,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void ConnectToEditor_SendToEditor_m2358646039 (ConnectToEditor_t595742893 * __this, Guid_t  ___msgId0, ByteU5BU5D_t4116647657* ___data1, const RuntimeMethod* method);
// System.Guid UnityEngine.XR.iOS.ConnectionMessageIds::get_screenCaptureUVMsgId()
extern "C" IL2CPP_METHOD_ATTR Guid_t  ConnectionMessageIds_get_screenCaptureUVMsgId_m596317401 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m1424466557 (List_1_t2585711361 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m2765963565 (List_1_t2585711361 * __this, GameObject_t1113636619 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2585711361 *, GameObject_t1113636619 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Vector4_op_Implicit_m2966035112 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t1113636619 * List_1_get_Item_m3743125852 (List_1_t2585711361 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (List_1_t2585711361 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Int64 System.Math::Min(System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR int64_t Math_Min_m2427345610 (RuntimeObject * __this /* static, unused */, int64_t p0, int64_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityARInterface.BoundedPlane>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m3806006932 (Action_1_t1099483977 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1099483977 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m3806006932_gshared)(__this, p0, p1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action__ctor_m2994342681 (Action_t1264377477 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_Inverse_m1311579081 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// System.Void UpdateShaderCoordinatesByARPlane::UpdateShaderValues(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void UpdateShaderCoordinatesByARPlane_UpdateShaderValues_m889279849 (UpdateShaderCoordinatesByARPlane_t405495776 * __this, Vector3_t3722313464  ___position0, Vector3_t3722313464  ___localScale1, Quaternion_t2301928331  ___rotation2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector4__ctor_m2498754347 (Vector4_t3319028937 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.Shader::SetGlobalVector(System.String,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR void Shader_SetGlobalVector_m3544469942 (RuntimeObject * __this /* static, unused */, String_t* p0, Vector4_t3319028937  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Quaternion_get_eulerAngles_m3425202016 (Quaternion_t2301928331 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Quaternion__ctor_m435141806 (Quaternion_t2301928331 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BinaryFormatter__ctor_m971003555 (BinaryFormatter_t3197753202 * __this, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MemoryStream__ctor_m2678285228 (MemoryStream_t94973147 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
extern "C" IL2CPP_METHOD_ATTR void BinaryFormatter_Serialize_m1744386044 (BinaryFormatter_t3197753202 * __this, Stream_t1273022909 * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void Utils.SerializableVector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SerializableVector4__ctor_m3231681896 (SerializableVector4_t1862640084 * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const RuntimeMethod* method);
// System.Void Utils.serializableARSessionConfiguration::.ctor(UnityEngine.XR.iOS.UnityARAlignment,UnityEngine.XR.iOS.UnityARPlaneDetection,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void serializableARSessionConfiguration__ctor_m1685433052 (serializableARSessionConfiguration_t1467016906 * __this, int32_t ___align0, int32_t ___planeDet1, bool ___getPtCloud2, bool ___enableLightEst3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::.ctor(UnityEngine.XR.iOS.UnityARAlignment,UnityEngine.XR.iOS.UnityARPlaneDetection,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ARKitWorldTrackingSessionConfiguration__ctor_m2019856913 (ARKitWorldTrackingSessionConfiguration_t273386347 * __this, int32_t ___alignment0, int32_t ___planeDetection1, bool ___getPointCloudData2, bool ___enableLightEstimation3, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Single)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* BitConverter_GetBytes_m692533364 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2884209081 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Void Utils.serializablePointCloud::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializablePointCloud__ctor_m3190919572 (serializablePointCloud_t455238287 * __this, ByteU5BU5D_t4116647657* ___inputPoints0, const RuntimeMethod* method);
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR float BitConverter_ToSingle_m2597008633 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method);
// System.Void Utils.serializableSHC::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableSHC__ctor_m1921836760 (serializableSHC_t2667429767 * __this, ByteU5BU5D_t4116647657* ___inputSHCData0, const RuntimeMethod* method);
// Utils.serializableUnityARLightData Utils.serializableUnityARLightData::op_Implicit(UnityEngine.XR.iOS.UnityARLightData)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARLightData_t3935513283 * serializableUnityARLightData_op_Implicit_m1050232524 (RuntimeObject * __this /* static, unused */, UnityARLightData_t2160616730  ___rValue0, const RuntimeMethod* method);
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.XR.iOS.UnityARMatrix4x4)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARMatrix4x4_t78255337 * serializableUnityARMatrix4x4_op_Implicit_m3630501456 (RuntimeObject * __this /* static, unused */, UnityARMatrix4x4_t4073345847  ___rValue0, const RuntimeMethod* method);
// Utils.serializablePointCloud Utils.serializablePointCloud::op_Implicit(UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR serializablePointCloud_t455238287 * serializablePointCloud_op_Implicit_m463505948 (RuntimeObject * __this /* static, unused */, Vector3U5BU5D_t1718750761* ___vecPointCloud0, const RuntimeMethod* method);
// System.Void Utils.serializableUnityARCamera::.ctor(Utils.serializableUnityARMatrix4x4,Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.ARTrackingState,UnityEngine.XR.iOS.ARTrackingStateReason,UnityEngine.XR.iOS.UnityVideoParams,UnityEngine.XR.iOS.UnityARLightData,Utils.serializableUnityARMatrix4x4,Utils.serializablePointCloud)
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARCamera__ctor_m992171076 (serializableUnityARCamera_t4158151215 * __this, serializableUnityARMatrix4x4_t78255337 * ___wt0, serializableUnityARMatrix4x4_t78255337 * ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t4155354995  ___uvp4, UnityARLightData_t2160616730  ___lightDat5, serializableUnityARMatrix4x4_t78255337 * ___dt6, serializablePointCloud_t455238287 * ___spc7, const RuntimeMethod* method);
// UnityEngine.XR.iOS.UnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
extern "C" IL2CPP_METHOD_ATTR UnityARMatrix4x4_t4073345847  serializableUnityARMatrix4x4_op_Implicit_m2311882771 (RuntimeObject * __this /* static, unused */, serializableUnityARMatrix4x4_t78255337 * ___rValue0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.UnityARLightData Utils.serializableUnityARLightData::op_Implicit(Utils.serializableUnityARLightData)
extern "C" IL2CPP_METHOD_ATTR UnityARLightData_t2160616730  serializableUnityARLightData_op_Implicit_m3789143495 (RuntimeObject * __this /* static, unused */, serializableUnityARLightData_t3935513283 * ___rValue0, const RuntimeMethod* method);
// UnityEngine.Vector3[] Utils.serializablePointCloud::op_Implicit(Utils.serializablePointCloud)
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_t1718750761* serializablePointCloud_op_Implicit_m1866692932 (RuntimeObject * __this /* static, unused */, serializablePointCloud_t455238287 * ___spc0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARCamera::.ctor(UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.XR.iOS.ARTrackingState,UnityEngine.XR.iOS.ARTrackingStateReason,UnityEngine.XR.iOS.UnityVideoParams,UnityEngine.XR.iOS.UnityARLightData,UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR void UnityARCamera__ctor_m3730109421 (UnityARCamera_t2069150450 * __this, UnityARMatrix4x4_t4073345847  ___wt0, UnityARMatrix4x4_t4073345847  ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t4155354995  ___uvp4, UnityARLightData_t2160616730  ___lightDat5, UnityARMatrix4x4_t4073345847  ___dt6, Vector3U5BU5D_t1718750761* ___pointCloud7, const RuntimeMethod* method);
// Utils.serializableSHC Utils.serializableSHC::op_Implicit(System.Single[])
extern "C" IL2CPP_METHOD_ATTR serializableSHC_t2667429767 * serializableSHC_op_Implicit_m2638304907 (RuntimeObject * __this /* static, unused */, SingleU5BU5D_t1444911251* ___floatsSHC0, const RuntimeMethod* method);
// System.Void Utils.serializableUnityARLightData::.ctor(UnityEngine.XR.iOS.UnityARLightData)
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARLightData__ctor_m2554290283 (serializableUnityARLightData_t3935513283 * __this, UnityARLightData_t2160616730  ___lightData0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARLightEstimate::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void UnityARLightEstimate__ctor_m1412967459 (UnityARLightEstimate_t1498306117 * __this, float ___intensity0, float ___temperature1, const RuntimeMethod* method);
// System.Single[] Utils.serializableSHC::op_Implicit(Utils.serializableSHC)
extern "C" IL2CPP_METHOD_ATTR SingleU5BU5D_t1444911251* serializableSHC_op_Implicit_m465874179 (RuntimeObject * __this /* static, unused */, serializableSHC_t2667429767 * ___spc0, const RuntimeMethod* method);
// Utils.SerializableVector4 Utils.SerializableVector4::op_Implicit(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR SerializableVector4_t1862640084 * SerializableVector4_op_Implicit_m14360340 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  ___rValue0, const RuntimeMethod* method);
// System.Void Utils.serializableUnityARMatrix4x4::.ctor(Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4)
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARMatrix4x4__ctor_m3496280910 (serializableUnityARMatrix4x4_t78255337 * __this, SerializableVector4_t1862640084 * ___v00, SerializableVector4_t1862640084 * ___v11, SerializableVector4_t1862640084 * ___v22, SerializableVector4_t1862640084 * ___v33, const RuntimeMethod* method);
// UnityEngine.Vector4 Utils.SerializableVector4::op_Implicit(Utils.SerializableVector4)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  SerializableVector4_op_Implicit_m3519692110 (RuntimeObject * __this /* static, unused */, SerializableVector4_t1862640084 * ___rValue0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARMatrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR void UnityARMatrix4x4__ctor_m3835909947 (UnityARMatrix4x4_t4073345847 * __this, Vector4_t3319028937  ___c00, Vector4_t3319028937  ___c11, Vector4_t3319028937  ___c22, Vector4_t3319028937  ___c33, const RuntimeMethod* method);
// System.Void UnityEngine.Matrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR void Matrix4x4__ctor_m53065545 (Matrix4x4_t1817901843 * __this, Vector4_t3319028937  p0, Vector4_t3319028937  p1, Vector4_t3319028937  p2, Vector4_t3319028937  p3, const RuntimeMethod* method);
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARMatrix4x4_t78255337 * serializableUnityARMatrix4x4_op_Implicit_m3556108972 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___rValue0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Utils.serializableUnityARPlaneAnchor::.ctor(Utils.serializableUnityARMatrix4x4,Utils.SerializableVector4,Utils.SerializableVector4,UnityEngine.XR.iOS.ARPlaneAnchorAlignment,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARPlaneAnchor__ctor_m182203902 (serializableUnityARPlaneAnchor_t1446774435 * __this, serializableUnityARMatrix4x4_t78255337 * ___wt0, SerializableVector4_t1862640084 * ___ctr1, SerializableVector4_t1862640084 * ___ext2, int64_t ___apaa3, ByteU5BU5D_t4116647657* ___idstr4, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  serializableUnityARMatrix4x4_op_Implicit_m456506418 (RuntimeObject * __this /* static, unused */, serializableUnityARMatrix4x4_t78255337 * ___rValue0, const RuntimeMethod* method);
// System.Void System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m3245614058 (Action_2_t3936036094 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3936036094 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m465026036_gshared)(__this, p0, p1, method);
}
// System.Void System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_m245262623 (Action_3_t1202789066 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t1202789066 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_3__ctor_m967275408_gshared)(__this, p0, p1, method);
}
// System.Void DataFetcher::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DataFetcher__ctor_m3595091311 (DataFetcher_t164261030 * __this, const RuntimeMethod* method);
// System.Void VectorDataFetcher/<FetchData>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFetchDataU3Ec__AnonStorey0__ctor_m3199237040 (U3CFetchDataU3Ec__AnonStorey0_t1155300966 * __this, const RuntimeMethod* method);
// System.Void Mapbox.Map.VectorTile::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void VectorTile__ctor_m3869536636 (VectorTile_t4284514353 * __this, String_t* ___styleId0, String_t* ___modifiedDate1, const RuntimeMethod* method);
// System.Void Mapbox.Map.VectorTile::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VectorTile__ctor_m1060793044 (VectorTile_t4284514353 * __this, const RuntimeMethod* method);
// System.Void Mapbox.Unity.MeshGeneration.Data.UnityTile::AddTile(Mapbox.Map.Tile)
extern "C" IL2CPP_METHOD_ATTR void UnityTile_AddTile_m2551386100 (UnityTile_t2405085845 * __this, Tile_t1097901272 * ___tile0, const RuntimeMethod* method);
// Mapbox.Map.CanonicalTileId Mapbox.Unity.MeshGeneration.Data.UnityTile::get_CanonicalTileId()
extern "C" IL2CPP_METHOD_ATTR CanonicalTileId_t4184902996  UnityTile_get_CanonicalTileId_m1261252210 (UnityTile_t2405085845 * __this, const RuntimeMethod* method);
// System.Void Mapbox.Map.Tile::Initialize(Mapbox.Platform.IFileSource,Mapbox.Map.CanonicalTileId,System.String,System.Action)
extern "C" IL2CPP_METHOD_ATTR void Tile_Initialize_m4175325424 (Tile_t1097901272 * __this, RuntimeObject* ___fileSource0, CanonicalTileId_t4184902996  ___canonicalTileId1, String_t* ___mapId2, Action_t1264377477 * ___p3, const RuntimeMethod* method);
// Mapbox.Map.CanonicalTileId Mapbox.Map.Tile::get_Id()
extern "C" IL2CPP_METHOD_ATTR CanonicalTileId_t4184902996  Tile_get_Id_m1719117786 (Tile_t1097901272 * __this, const RuntimeMethod* method);
// System.Boolean Mapbox.Map.CanonicalTileId::op_Inequality(Mapbox.Map.CanonicalTileId,Mapbox.Map.CanonicalTileId)
extern "C" IL2CPP_METHOD_ATTR bool CanonicalTileId_op_Inequality_m3364665322 (RuntimeObject * __this /* static, unused */, CanonicalTileId_t4184902996  ___a0, CanonicalTileId_t4184902996  ___b1, const RuntimeMethod* method);
// System.Boolean Mapbox.Map.Tile::get_HasError()
extern "C" IL2CPP_METHOD_ATTR bool Tile_get_HasError_m2239433266 (Tile_t1097901272 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> Mapbox.Map.Tile::get_Exceptions()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t2649313536 * Tile_get_Exceptions_m393066583 (Tile_t1097901272 * __this, const RuntimeMethod* method);
// System.Void Mapbox.Map.TileErrorEventArgs::.ctor(Mapbox.Map.CanonicalTileId,System.Type,Mapbox.Unity.MeshGeneration.Data.UnityTile,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>)
extern "C" IL2CPP_METHOD_ATTR void TileErrorEventArgs__ctor_m416772456 (TileErrorEventArgs_t942940053 * __this, CanonicalTileId_t4184902996  ___TileId0, Type_t * ___TileType1, UnityTile_t2405085845 * ___UnityTileInstance2, ReadOnlyCollection_1_t2649313536 * ___Exceptions3, const RuntimeMethod* method);
// System.Void System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_m1250411769 (Action_3_t1202789066 * __this, UnityTile_t2405085845 * p0, VectorTile_t4284514353 * p1, TileErrorEventArgs_t942940053 * p2, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t1202789066 *, UnityTile_t2405085845 *, VectorTile_t4284514353 *, TileErrorEventArgs_t942940053 *, const RuntimeMethod*))Action_3_Invoke_m3948987085_gshared)(__this, p0, p1, p2, method);
}
// System.Void System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile>::Invoke(!0,!1)
inline void Action_2_Invoke_m1484331405 (Action_2_t3936036094 * __this, UnityTile_t2405085845 * p0, VectorTile_t4284514353 * p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3936036094 *, UnityTile_t2405085845 *, VectorTile_t4284514353 *, const RuntimeMethod*))Action_2_Invoke_m3043915573_gshared)(__this, p0, p1, method);
}
// System.Void DataFetcherParameters::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DataFetcherParameters__ctor_m2914842882 (DataFetcherParameters_t4072360282 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_ARAnchorAdded_t1608557165 (ARAnchorAdded_t1608557165 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(ARPlaneAnchor_t2049372221_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___anchorData0' to native representation
	ARPlaneAnchor_t2049372221_marshaled_pinvoke ____anchorData0_marshaled = {};
	ARPlaneAnchor_t2049372221_marshal_pinvoke(___anchorData0, ____anchorData0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____anchorData0_marshaled);

	// Marshaling cleanup of parameter '___anchorData0' native representation
	ARPlaneAnchor_t2049372221_marshal_pinvoke_cleanup(____anchorData0_marshaled);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARAnchorAdded__ctor_m2575305337 (ARAnchorAdded_t1608557165 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded::Invoke(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C" IL2CPP_METHOD_ATTR void ARAnchorAdded_Invoke_m3997182965 (ARAnchorAdded_t1608557165 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARAnchorAdded_Invoke_m3997182965((ARAnchorAdded_t1608557165 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, ARPlaneAnchor_t2049372221 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, ARPlaneAnchor_t2049372221 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ARPlaneAnchor_t2049372221  >::Invoke(targetMethod, targetThis, ___anchorData0);
					else
						GenericVirtActionInvoker1< ARPlaneAnchor_t2049372221  >::Invoke(targetMethod, targetThis, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ARPlaneAnchor_t2049372221  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
					else
						VirtActionInvoker1< ARPlaneAnchor_t2049372221  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, ARPlaneAnchor_t2049372221 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded::BeginInvoke(UnityEngine.XR.iOS.ARPlaneAnchor,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ARAnchorAdded_BeginInvoke_m2725108197 (ARAnchorAdded_t1608557165 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARAnchorAdded_BeginInvoke_m2725108197_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ARPlaneAnchor_t2049372221_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ARAnchorAdded_EndInvoke_m1659109961 (ARAnchorAdded_t1608557165 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_ARAnchorRemoved_t4030593004 (ARAnchorRemoved_t4030593004 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(ARPlaneAnchor_t2049372221_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___anchorData0' to native representation
	ARPlaneAnchor_t2049372221_marshaled_pinvoke ____anchorData0_marshaled = {};
	ARPlaneAnchor_t2049372221_marshal_pinvoke(___anchorData0, ____anchorData0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____anchorData0_marshaled);

	// Marshaling cleanup of parameter '___anchorData0' native representation
	ARPlaneAnchor_t2049372221_marshal_pinvoke_cleanup(____anchorData0_marshaled);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARAnchorRemoved__ctor_m498665711 (ARAnchorRemoved_t4030593004 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved::Invoke(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C" IL2CPP_METHOD_ATTR void ARAnchorRemoved_Invoke_m2507577298 (ARAnchorRemoved_t4030593004 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARAnchorRemoved_Invoke_m2507577298((ARAnchorRemoved_t4030593004 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, ARPlaneAnchor_t2049372221 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, ARPlaneAnchor_t2049372221 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ARPlaneAnchor_t2049372221  >::Invoke(targetMethod, targetThis, ___anchorData0);
					else
						GenericVirtActionInvoker1< ARPlaneAnchor_t2049372221  >::Invoke(targetMethod, targetThis, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ARPlaneAnchor_t2049372221  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
					else
						VirtActionInvoker1< ARPlaneAnchor_t2049372221  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, ARPlaneAnchor_t2049372221 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved::BeginInvoke(UnityEngine.XR.iOS.ARPlaneAnchor,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ARAnchorRemoved_BeginInvoke_m495283272 (ARAnchorRemoved_t4030593004 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARAnchorRemoved_BeginInvoke_m495283272_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ARPlaneAnchor_t2049372221_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ARAnchorRemoved_EndInvoke_m271550196 (ARAnchorRemoved_t4030593004 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_ARAnchorUpdated_t3113222537 (ARAnchorUpdated_t3113222537 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(ARPlaneAnchor_t2049372221_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___anchorData0' to native representation
	ARPlaneAnchor_t2049372221_marshaled_pinvoke ____anchorData0_marshaled = {};
	ARPlaneAnchor_t2049372221_marshal_pinvoke(___anchorData0, ____anchorData0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____anchorData0_marshaled);

	// Marshaling cleanup of parameter '___anchorData0' native representation
	ARPlaneAnchor_t2049372221_marshal_pinvoke_cleanup(____anchorData0_marshaled);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARAnchorUpdated__ctor_m4197086648 (ARAnchorUpdated_t3113222537 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated::Invoke(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C" IL2CPP_METHOD_ATTR void ARAnchorUpdated_Invoke_m4060209543 (ARAnchorUpdated_t3113222537 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARAnchorUpdated_Invoke_m4060209543((ARAnchorUpdated_t3113222537 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, ARPlaneAnchor_t2049372221 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, ARPlaneAnchor_t2049372221 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ARPlaneAnchor_t2049372221  >::Invoke(targetMethod, targetThis, ___anchorData0);
					else
						GenericVirtActionInvoker1< ARPlaneAnchor_t2049372221  >::Invoke(targetMethod, targetThis, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ARPlaneAnchor_t2049372221  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
					else
						VirtActionInvoker1< ARPlaneAnchor_t2049372221  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, ARPlaneAnchor_t2049372221 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated::BeginInvoke(UnityEngine.XR.iOS.ARPlaneAnchor,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ARAnchorUpdated_BeginInvoke_m2773603932 (ARAnchorUpdated_t3113222537 * __this, ARPlaneAnchor_t2049372221  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARAnchorUpdated_BeginInvoke_m2773603932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ARPlaneAnchor_t2049372221_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ARAnchorUpdated_EndInvoke_m3227110389 (ARAnchorUpdated_t3113222537 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARFaceAnchorAdded__ctor_m1429680355 (ARFaceAnchorAdded_t3526051790 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded::Invoke(UnityEngine.XR.iOS.ARFaceAnchor)
extern "C" IL2CPP_METHOD_ATTR void ARFaceAnchorAdded_Invoke_m2621285646 (ARFaceAnchorAdded_t3526051790 * __this, ARFaceAnchor_t1844206636 * ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARFaceAnchorAdded_Invoke_m2621285646((ARFaceAnchorAdded_t3526051790 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, ARFaceAnchor_t1844206636 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, ARFaceAnchor_t1844206636 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ARFaceAnchor_t1844206636 * >::Invoke(targetMethod, targetThis, ___anchorData0);
					else
						GenericVirtActionInvoker1< ARFaceAnchor_t1844206636 * >::Invoke(targetMethod, targetThis, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ARFaceAnchor_t1844206636 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
					else
						VirtActionInvoker1< ARFaceAnchor_t1844206636 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, ARFaceAnchor_t1844206636 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___anchorData0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___anchorData0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ARFaceAnchor_t1844206636 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded::BeginInvoke(UnityEngine.XR.iOS.ARFaceAnchor,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ARFaceAnchorAdded_BeginInvoke_m3969772933 (ARFaceAnchorAdded_t3526051790 * __this, ARFaceAnchor_t1844206636 * ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___anchorData0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ARFaceAnchorAdded_EndInvoke_m2882613967 (ARFaceAnchorAdded_t3526051790 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARFaceAnchorRemoved__ctor_m2470011458 (ARFaceAnchorRemoved_t2550278937 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved::Invoke(UnityEngine.XR.iOS.ARFaceAnchor)
extern "C" IL2CPP_METHOD_ATTR void ARFaceAnchorRemoved_Invoke_m1750686678 (ARFaceAnchorRemoved_t2550278937 * __this, ARFaceAnchor_t1844206636 * ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARFaceAnchorRemoved_Invoke_m1750686678((ARFaceAnchorRemoved_t2550278937 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, ARFaceAnchor_t1844206636 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, ARFaceAnchor_t1844206636 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ARFaceAnchor_t1844206636 * >::Invoke(targetMethod, targetThis, ___anchorData0);
					else
						GenericVirtActionInvoker1< ARFaceAnchor_t1844206636 * >::Invoke(targetMethod, targetThis, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ARFaceAnchor_t1844206636 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
					else
						VirtActionInvoker1< ARFaceAnchor_t1844206636 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, ARFaceAnchor_t1844206636 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___anchorData0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___anchorData0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ARFaceAnchor_t1844206636 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved::BeginInvoke(UnityEngine.XR.iOS.ARFaceAnchor,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ARFaceAnchorRemoved_BeginInvoke_m1443680959 (ARFaceAnchorRemoved_t2550278937 * __this, ARFaceAnchor_t1844206636 * ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___anchorData0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ARFaceAnchorRemoved_EndInvoke_m3905662100 (ARFaceAnchorRemoved_t2550278937 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARFaceAnchorUpdated__ctor_m3658882913 (ARFaceAnchorUpdated_t3258688950 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated::Invoke(UnityEngine.XR.iOS.ARFaceAnchor)
extern "C" IL2CPP_METHOD_ATTR void ARFaceAnchorUpdated_Invoke_m653826901 (ARFaceAnchorUpdated_t3258688950 * __this, ARFaceAnchor_t1844206636 * ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARFaceAnchorUpdated_Invoke_m653826901((ARFaceAnchorUpdated_t3258688950 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, ARFaceAnchor_t1844206636 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, ARFaceAnchor_t1844206636 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ARFaceAnchor_t1844206636 * >::Invoke(targetMethod, targetThis, ___anchorData0);
					else
						GenericVirtActionInvoker1< ARFaceAnchor_t1844206636 * >::Invoke(targetMethod, targetThis, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ARFaceAnchor_t1844206636 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
					else
						VirtActionInvoker1< ARFaceAnchor_t1844206636 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, ARFaceAnchor_t1844206636 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___anchorData0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___anchorData0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ARFaceAnchor_t1844206636 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated::BeginInvoke(UnityEngine.XR.iOS.ARFaceAnchor,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ARFaceAnchorUpdated_BeginInvoke_m3460353881 (ARFaceAnchorUpdated_t3258688950 * __this, ARFaceAnchor_t1844206636 * ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___anchorData0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ARFaceAnchorUpdated_EndInvoke_m564314618 (ARFaceAnchorUpdated_t3258688950 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARFrameUpdate__ctor_m3633991724 (ARFrameUpdate_t1157215840 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate::Invoke(UnityEngine.XR.iOS.UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR void ARFrameUpdate_Invoke_m2222676468 (ARFrameUpdate_t1157215840 * __this, UnityARCamera_t2069150450  ___camera0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARFrameUpdate_Invoke_m2222676468((ARFrameUpdate_t1157215840 *)__this->get_prev_9(), ___camera0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, UnityARCamera_t2069150450 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___camera0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARCamera_t2069150450 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___camera0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UnityARCamera_t2069150450  >::Invoke(targetMethod, targetThis, ___camera0);
					else
						GenericVirtActionInvoker1< UnityARCamera_t2069150450  >::Invoke(targetMethod, targetThis, ___camera0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnityARCamera_t2069150450  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___camera0);
					else
						VirtActionInvoker1< UnityARCamera_t2069150450  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___camera0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UnityARCamera_t2069150450 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___camera0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate::BeginInvoke(UnityEngine.XR.iOS.UnityARCamera,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ARFrameUpdate_BeginInvoke_m1285835900 (ARFrameUpdate_t1157215840 * __this, UnityARCamera_t2069150450  ___camera0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARFrameUpdate_BeginInvoke_m1285835900_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARCamera_t2069150450_il2cpp_TypeInfo_var, &___camera0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ARFrameUpdate_EndInvoke_m3103104593 (ARFrameUpdate_t1157215840 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_ARSessionCallback_t3772093212 (ARSessionCallback_t3772093212 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARSessionCallback__ctor_m1721563304 (ARSessionCallback_t3772093212 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback::Invoke()
extern "C" IL2CPP_METHOD_ATTR void ARSessionCallback_Invoke_m75738571 (ARSessionCallback_t3772093212 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARSessionCallback_Invoke_m75738571((ARSessionCallback_t3772093212 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
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
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ARSessionCallback_BeginInvoke_m3583497996 (ARSessionCallback_t3772093212 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ARSessionCallback_EndInvoke_m2992524101 (ARSessionCallback_t3772093212 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_ARSessionFailed_t2125002991 (ARSessionFailed_t2125002991 * __this, String_t* ___error0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___error0' to native representation
	char* ____error0_marshaled = NULL;
	____error0_marshaled = il2cpp_codegen_marshal_string(___error0);

	// Native function invocation
	il2cppPInvokeFunc(____error0_marshaled);

	// Marshaling cleanup of parameter '___error0' native representation
	il2cpp_codegen_marshal_free(____error0_marshaled);
	____error0_marshaled = NULL;

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARSessionFailed__ctor_m2525034792 (ARSessionFailed_t2125002991 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed::Invoke(System.String)
extern "C" IL2CPP_METHOD_ATTR void ARSessionFailed_Invoke_m4221473546 (ARSessionFailed_t2125002991 * __this, String_t* ___error0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARSessionFailed_Invoke_m4221473546((ARSessionFailed_t2125002991 *)__this->get_prev_9(), ___error0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___error0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___error0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___error0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___error0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___error0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___error0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___error0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___error0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___error0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___error0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ARSessionFailed_BeginInvoke_m2689286745 (ARSessionFailed_t2125002991 * __this, String_t* ___error0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___error0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ARSessionFailed_EndInvoke_m3590783759 (ARSessionFailed_t2125002991 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARSessionTrackingChanged__ctor_m1089589162 (ARSessionTrackingChanged_t923029411 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged::Invoke(UnityEngine.XR.iOS.UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR void ARSessionTrackingChanged_Invoke_m4139867491 (ARSessionTrackingChanged_t923029411 * __this, UnityARCamera_t2069150450  ___camera0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARSessionTrackingChanged_Invoke_m4139867491((ARSessionTrackingChanged_t923029411 *)__this->get_prev_9(), ___camera0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, UnityARCamera_t2069150450 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___camera0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARCamera_t2069150450 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___camera0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UnityARCamera_t2069150450  >::Invoke(targetMethod, targetThis, ___camera0);
					else
						GenericVirtActionInvoker1< UnityARCamera_t2069150450  >::Invoke(targetMethod, targetThis, ___camera0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnityARCamera_t2069150450  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___camera0);
					else
						VirtActionInvoker1< UnityARCamera_t2069150450  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___camera0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UnityARCamera_t2069150450 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___camera0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged::BeginInvoke(UnityEngine.XR.iOS.UnityARCamera,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ARSessionTrackingChanged_BeginInvoke_m3230226342 (ARSessionTrackingChanged_t923029411 * __this, UnityARCamera_t2069150450  ___camera0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSessionTrackingChanged_BeginInvoke_m3230226342_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARCamera_t2069150450_il2cpp_TypeInfo_var, &___camera0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ARSessionTrackingChanged_EndInvoke_m1705581440 (ARSessionTrackingChanged_t923029411 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_ARUserAnchorAdded_t1851120876 (ARUserAnchorAdded_t1851120876 * __this, ARUserAnchor_t1406831531  ___anchorData0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(ARUserAnchor_t1406831531_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___anchorData0' to native representation
	ARUserAnchor_t1406831531_marshaled_pinvoke ____anchorData0_marshaled = {};
	ARUserAnchor_t1406831531_marshal_pinvoke(___anchorData0, ____anchorData0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____anchorData0_marshaled);

	// Marshaling cleanup of parameter '___anchorData0' native representation
	ARUserAnchor_t1406831531_marshal_pinvoke_cleanup(____anchorData0_marshaled);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARUserAnchorAdded__ctor_m456065574 (ARUserAnchorAdded_t1851120876 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded::Invoke(UnityEngine.XR.iOS.ARUserAnchor)
extern "C" IL2CPP_METHOD_ATTR void ARUserAnchorAdded_Invoke_m555329492 (ARUserAnchorAdded_t1851120876 * __this, ARUserAnchor_t1406831531  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARUserAnchorAdded_Invoke_m555329492((ARUserAnchorAdded_t1851120876 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, ARUserAnchor_t1406831531 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, ARUserAnchor_t1406831531 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ARUserAnchor_t1406831531  >::Invoke(targetMethod, targetThis, ___anchorData0);
					else
						GenericVirtActionInvoker1< ARUserAnchor_t1406831531  >::Invoke(targetMethod, targetThis, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ARUserAnchor_t1406831531  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
					else
						VirtActionInvoker1< ARUserAnchor_t1406831531  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, ARUserAnchor_t1406831531 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded::BeginInvoke(UnityEngine.XR.iOS.ARUserAnchor,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ARUserAnchorAdded_BeginInvoke_m4131496474 (ARUserAnchorAdded_t1851120876 * __this, ARUserAnchor_t1406831531  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARUserAnchorAdded_BeginInvoke_m4131496474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ARUserAnchor_t1406831531_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ARUserAnchorAdded_EndInvoke_m2977675665 (ARUserAnchorAdded_t1851120876 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_ARUserAnchorRemoved_t23344545 (ARUserAnchorRemoved_t23344545 * __this, ARUserAnchor_t1406831531  ___anchorData0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(ARUserAnchor_t1406831531_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___anchorData0' to native representation
	ARUserAnchor_t1406831531_marshaled_pinvoke ____anchorData0_marshaled = {};
	ARUserAnchor_t1406831531_marshal_pinvoke(___anchorData0, ____anchorData0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____anchorData0_marshaled);

	// Marshaling cleanup of parameter '___anchorData0' native representation
	ARUserAnchor_t1406831531_marshal_pinvoke_cleanup(____anchorData0_marshaled);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARUserAnchorRemoved__ctor_m586540762 (ARUserAnchorRemoved_t23344545 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved::Invoke(UnityEngine.XR.iOS.ARUserAnchor)
extern "C" IL2CPP_METHOD_ATTR void ARUserAnchorRemoved_Invoke_m460985818 (ARUserAnchorRemoved_t23344545 * __this, ARUserAnchor_t1406831531  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARUserAnchorRemoved_Invoke_m460985818((ARUserAnchorRemoved_t23344545 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, ARUserAnchor_t1406831531 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, ARUserAnchor_t1406831531 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ARUserAnchor_t1406831531  >::Invoke(targetMethod, targetThis, ___anchorData0);
					else
						GenericVirtActionInvoker1< ARUserAnchor_t1406831531  >::Invoke(targetMethod, targetThis, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ARUserAnchor_t1406831531  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
					else
						VirtActionInvoker1< ARUserAnchor_t1406831531  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, ARUserAnchor_t1406831531 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved::BeginInvoke(UnityEngine.XR.iOS.ARUserAnchor,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ARUserAnchorRemoved_BeginInvoke_m1997264703 (ARUserAnchorRemoved_t23344545 * __this, ARUserAnchor_t1406831531  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARUserAnchorRemoved_BeginInvoke_m1997264703_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ARUserAnchor_t1406831531_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ARUserAnchorRemoved_EndInvoke_m1217075522 (ARUserAnchorRemoved_t23344545 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_ARUserAnchorUpdated_t4007601678 (ARUserAnchorUpdated_t4007601678 * __this, ARUserAnchor_t1406831531  ___anchorData0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(ARUserAnchor_t1406831531_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___anchorData0' to native representation
	ARUserAnchor_t1406831531_marshaled_pinvoke ____anchorData0_marshaled = {};
	ARUserAnchor_t1406831531_marshal_pinvoke(___anchorData0, ____anchorData0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____anchorData0_marshaled);

	// Marshaling cleanup of parameter '___anchorData0' native representation
	ARUserAnchor_t1406831531_marshal_pinvoke_cleanup(____anchorData0_marshaled);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARUserAnchorUpdated__ctor_m4059084489 (ARUserAnchorUpdated_t4007601678 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated::Invoke(UnityEngine.XR.iOS.ARUserAnchor)
extern "C" IL2CPP_METHOD_ATTR void ARUserAnchorUpdated_Invoke_m2571719984 (ARUserAnchorUpdated_t4007601678 * __this, ARUserAnchor_t1406831531  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ARUserAnchorUpdated_Invoke_m2571719984((ARUserAnchorUpdated_t4007601678 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, ARUserAnchor_t1406831531 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, ARUserAnchor_t1406831531 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ARUserAnchor_t1406831531  >::Invoke(targetMethod, targetThis, ___anchorData0);
					else
						GenericVirtActionInvoker1< ARUserAnchor_t1406831531  >::Invoke(targetMethod, targetThis, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ARUserAnchor_t1406831531  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
					else
						VirtActionInvoker1< ARUserAnchor_t1406831531  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, ARUserAnchor_t1406831531 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated::BeginInvoke(UnityEngine.XR.iOS.ARUserAnchor,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ARUserAnchorUpdated_BeginInvoke_m1530922700 (ARUserAnchorUpdated_t4007601678 * __this, ARUserAnchor_t1406831531  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARUserAnchorUpdated_BeginInvoke_m1530922700_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ARUserAnchor_t1406831531_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ARUserAnchorUpdated_EndInvoke_m4259755685 (ARUserAnchorUpdated_t4007601678 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_internal_ARAnchorAdded_t1565083332 (internal_ARAnchorAdded_t1565083332 * __this, UnityARAnchorData_t1157236668  ___anchorData0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(UnityARAnchorData_t1157236668 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___anchorData0);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void internal_ARAnchorAdded__ctor_m274816883 (internal_ARAnchorAdded_t1565083332 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded::Invoke(UnityEngine.XR.iOS.UnityARAnchorData)
extern "C" IL2CPP_METHOD_ATTR void internal_ARAnchorAdded_Invoke_m3392910336 (internal_ARAnchorAdded_t1565083332 * __this, UnityARAnchorData_t1157236668  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		internal_ARAnchorAdded_Invoke_m3392910336((internal_ARAnchorAdded_t1565083332 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, UnityARAnchorData_t1157236668 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARAnchorData_t1157236668 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UnityARAnchorData_t1157236668  >::Invoke(targetMethod, targetThis, ___anchorData0);
					else
						GenericVirtActionInvoker1< UnityARAnchorData_t1157236668  >::Invoke(targetMethod, targetThis, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnityARAnchorData_t1157236668  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
					else
						VirtActionInvoker1< UnityARAnchorData_t1157236668  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UnityARAnchorData_t1157236668 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded::BeginInvoke(UnityEngine.XR.iOS.UnityARAnchorData,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* internal_ARAnchorAdded_BeginInvoke_m4199645137 (internal_ARAnchorAdded_t1565083332 * __this, UnityARAnchorData_t1157236668  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (internal_ARAnchorAdded_BeginInvoke_m4199645137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARAnchorData_t1157236668_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void internal_ARAnchorAdded_EndInvoke_m3739984561 (internal_ARAnchorAdded_t1565083332 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_internal_ARAnchorRemoved_t3371657877 (internal_ARAnchorRemoved_t3371657877 * __this, UnityARAnchorData_t1157236668  ___anchorData0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(UnityARAnchorData_t1157236668 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___anchorData0);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void internal_ARAnchorRemoved__ctor_m3323216282 (internal_ARAnchorRemoved_t3371657877 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved::Invoke(UnityEngine.XR.iOS.UnityARAnchorData)
extern "C" IL2CPP_METHOD_ATTR void internal_ARAnchorRemoved_Invoke_m1866298684 (internal_ARAnchorRemoved_t3371657877 * __this, UnityARAnchorData_t1157236668  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		internal_ARAnchorRemoved_Invoke_m1866298684((internal_ARAnchorRemoved_t3371657877 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, UnityARAnchorData_t1157236668 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARAnchorData_t1157236668 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UnityARAnchorData_t1157236668  >::Invoke(targetMethod, targetThis, ___anchorData0);
					else
						GenericVirtActionInvoker1< UnityARAnchorData_t1157236668  >::Invoke(targetMethod, targetThis, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnityARAnchorData_t1157236668  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
					else
						VirtActionInvoker1< UnityARAnchorData_t1157236668  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UnityARAnchorData_t1157236668 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved::BeginInvoke(UnityEngine.XR.iOS.UnityARAnchorData,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* internal_ARAnchorRemoved_BeginInvoke_m2416400457 (internal_ARAnchorRemoved_t3371657877 * __this, UnityARAnchorData_t1157236668  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (internal_ARAnchorRemoved_BeginInvoke_m2416400457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARAnchorData_t1157236668_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void internal_ARAnchorRemoved_EndInvoke_m3457463466 (internal_ARAnchorRemoved_t3371657877 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_internal_ARAnchorUpdated_t2645242205 (internal_ARAnchorUpdated_t2645242205 * __this, UnityARAnchorData_t1157236668  ___anchorData0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(UnityARAnchorData_t1157236668 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___anchorData0);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void internal_ARAnchorUpdated__ctor_m1065112067 (internal_ARAnchorUpdated_t2645242205 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated::Invoke(UnityEngine.XR.iOS.UnityARAnchorData)
extern "C" IL2CPP_METHOD_ATTR void internal_ARAnchorUpdated_Invoke_m351385753 (internal_ARAnchorUpdated_t2645242205 * __this, UnityARAnchorData_t1157236668  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		internal_ARAnchorUpdated_Invoke_m351385753((internal_ARAnchorUpdated_t2645242205 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, UnityARAnchorData_t1157236668 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARAnchorData_t1157236668 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UnityARAnchorData_t1157236668  >::Invoke(targetMethod, targetThis, ___anchorData0);
					else
						GenericVirtActionInvoker1< UnityARAnchorData_t1157236668  >::Invoke(targetMethod, targetThis, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnityARAnchorData_t1157236668  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
					else
						VirtActionInvoker1< UnityARAnchorData_t1157236668  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UnityARAnchorData_t1157236668 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated::BeginInvoke(UnityEngine.XR.iOS.UnityARAnchorData,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* internal_ARAnchorUpdated_BeginInvoke_m3288631253 (internal_ARAnchorUpdated_t2645242205 * __this, UnityARAnchorData_t1157236668  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (internal_ARAnchorUpdated_BeginInvoke_m3288631253_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARAnchorData_t1157236668_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void internal_ARAnchorUpdated_EndInvoke_m3829388073 (internal_ARAnchorUpdated_t2645242205 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_internal_ARFaceAnchorAdded_t1021040265 (internal_ARFaceAnchorAdded_t1021040265 * __this, UnityARFaceAnchorData_t2028622935  ___anchorData0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(UnityARFaceAnchorData_t2028622935 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___anchorData0);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorAdded::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void internal_ARFaceAnchorAdded__ctor_m3982544947 (internal_ARFaceAnchorAdded_t1021040265 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorAdded::Invoke(UnityEngine.XR.iOS.UnityARFaceAnchorData)
extern "C" IL2CPP_METHOD_ATTR void internal_ARFaceAnchorAdded_Invoke_m1293004774 (internal_ARFaceAnchorAdded_t1021040265 * __this, UnityARFaceAnchorData_t2028622935  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		internal_ARFaceAnchorAdded_Invoke_m1293004774((internal_ARFaceAnchorAdded_t1021040265 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, UnityARFaceAnchorData_t2028622935 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARFaceAnchorData_t2028622935 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UnityARFaceAnchorData_t2028622935  >::Invoke(targetMethod, targetThis, ___anchorData0);
					else
						GenericVirtActionInvoker1< UnityARFaceAnchorData_t2028622935  >::Invoke(targetMethod, targetThis, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnityARFaceAnchorData_t2028622935  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
					else
						VirtActionInvoker1< UnityARFaceAnchorData_t2028622935  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UnityARFaceAnchorData_t2028622935 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorAdded::BeginInvoke(UnityEngine.XR.iOS.UnityARFaceAnchorData,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* internal_ARFaceAnchorAdded_BeginInvoke_m899230624 (internal_ARFaceAnchorAdded_t1021040265 * __this, UnityARFaceAnchorData_t2028622935  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (internal_ARFaceAnchorAdded_BeginInvoke_m899230624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARFaceAnchorData_t2028622935_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorAdded::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void internal_ARFaceAnchorAdded_EndInvoke_m1334687505 (internal_ARFaceAnchorAdded_t1021040265 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_internal_ARFaceAnchorRemoved_t2563439402 (internal_ARFaceAnchorRemoved_t2563439402 * __this, UnityARFaceAnchorData_t2028622935  ___anchorData0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(UnityARFaceAnchorData_t2028622935 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___anchorData0);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorRemoved::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void internal_ARFaceAnchorRemoved__ctor_m2410475246 (internal_ARFaceAnchorRemoved_t2563439402 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorRemoved::Invoke(UnityEngine.XR.iOS.UnityARFaceAnchorData)
extern "C" IL2CPP_METHOD_ATTR void internal_ARFaceAnchorRemoved_Invoke_m4281757167 (internal_ARFaceAnchorRemoved_t2563439402 * __this, UnityARFaceAnchorData_t2028622935  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		internal_ARFaceAnchorRemoved_Invoke_m4281757167((internal_ARFaceAnchorRemoved_t2563439402 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, UnityARFaceAnchorData_t2028622935 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARFaceAnchorData_t2028622935 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UnityARFaceAnchorData_t2028622935  >::Invoke(targetMethod, targetThis, ___anchorData0);
					else
						GenericVirtActionInvoker1< UnityARFaceAnchorData_t2028622935  >::Invoke(targetMethod, targetThis, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnityARFaceAnchorData_t2028622935  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
					else
						VirtActionInvoker1< UnityARFaceAnchorData_t2028622935  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UnityARFaceAnchorData_t2028622935 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorRemoved::BeginInvoke(UnityEngine.XR.iOS.UnityARFaceAnchorData,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* internal_ARFaceAnchorRemoved_BeginInvoke_m2676213647 (internal_ARFaceAnchorRemoved_t2563439402 * __this, UnityARFaceAnchorData_t2028622935  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (internal_ARFaceAnchorRemoved_BeginInvoke_m2676213647_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARFaceAnchorData_t2028622935_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorRemoved::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void internal_ARFaceAnchorRemoved_EndInvoke_m1768892286 (internal_ARFaceAnchorRemoved_t2563439402 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_internal_ARFaceAnchorUpdated_t3423900432 (internal_ARFaceAnchorUpdated_t3423900432 * __this, UnityARFaceAnchorData_t2028622935  ___anchorData0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(UnityARFaceAnchorData_t2028622935 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___anchorData0);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorUpdated::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void internal_ARFaceAnchorUpdated__ctor_m2354080171 (internal_ARFaceAnchorUpdated_t3423900432 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorUpdated::Invoke(UnityEngine.XR.iOS.UnityARFaceAnchorData)
extern "C" IL2CPP_METHOD_ATTR void internal_ARFaceAnchorUpdated_Invoke_m1347290919 (internal_ARFaceAnchorUpdated_t3423900432 * __this, UnityARFaceAnchorData_t2028622935  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		internal_ARFaceAnchorUpdated_Invoke_m1347290919((internal_ARFaceAnchorUpdated_t3423900432 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, UnityARFaceAnchorData_t2028622935 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARFaceAnchorData_t2028622935 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UnityARFaceAnchorData_t2028622935  >::Invoke(targetMethod, targetThis, ___anchorData0);
					else
						GenericVirtActionInvoker1< UnityARFaceAnchorData_t2028622935  >::Invoke(targetMethod, targetThis, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnityARFaceAnchorData_t2028622935  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
					else
						VirtActionInvoker1< UnityARFaceAnchorData_t2028622935  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UnityARFaceAnchorData_t2028622935 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorUpdated::BeginInvoke(UnityEngine.XR.iOS.UnityARFaceAnchorData,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* internal_ARFaceAnchorUpdated_BeginInvoke_m1736670652 (internal_ARFaceAnchorUpdated_t3423900432 * __this, UnityARFaceAnchorData_t2028622935  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (internal_ARFaceAnchorUpdated_BeginInvoke_m1736670652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARFaceAnchorData_t2028622935_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorUpdated::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void internal_ARFaceAnchorUpdated_EndInvoke_m951123071 (internal_ARFaceAnchorUpdated_t3423900432 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_internal_ARFrameUpdate_t3254989823 (internal_ARFrameUpdate_t3254989823 * __this, internal_UnityARCamera_t3920739388  ___camera0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(internal_UnityARCamera_t3920739388 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___camera0);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void internal_ARFrameUpdate__ctor_m2823389890 (internal_ARFrameUpdate_t3254989823 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate::Invoke(UnityEngine.XR.iOS.internal_UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR void internal_ARFrameUpdate_Invoke_m4026855931 (internal_ARFrameUpdate_t3254989823 * __this, internal_UnityARCamera_t3920739388  ___camera0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		internal_ARFrameUpdate_Invoke_m4026855931((internal_ARFrameUpdate_t3254989823 *)__this->get_prev_9(), ___camera0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, internal_UnityARCamera_t3920739388 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___camera0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, internal_UnityARCamera_t3920739388 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___camera0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< internal_UnityARCamera_t3920739388  >::Invoke(targetMethod, targetThis, ___camera0);
					else
						GenericVirtActionInvoker1< internal_UnityARCamera_t3920739388  >::Invoke(targetMethod, targetThis, ___camera0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< internal_UnityARCamera_t3920739388  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___camera0);
					else
						VirtActionInvoker1< internal_UnityARCamera_t3920739388  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___camera0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, internal_UnityARCamera_t3920739388 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___camera0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate::BeginInvoke(UnityEngine.XR.iOS.internal_UnityARCamera,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* internal_ARFrameUpdate_BeginInvoke_m2334992139 (internal_ARFrameUpdate_t3254989823 * __this, internal_UnityARCamera_t3920739388  ___camera0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (internal_ARFrameUpdate_BeginInvoke_m2334992139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(internal_UnityARCamera_t3920739388_il2cpp_TypeInfo_var, &___camera0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void internal_ARFrameUpdate_EndInvoke_m1285402019 (internal_ARFrameUpdate_t3254989823 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_internal_ARSessionTrackingChanged_t1988849735 (internal_ARSessionTrackingChanged_t1988849735 * __this, internal_UnityARCamera_t3920739388  ___camera0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(internal_UnityARCamera_t3920739388 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___camera0);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void internal_ARSessionTrackingChanged__ctor_m3350968246 (internal_ARSessionTrackingChanged_t1988849735 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged::Invoke(UnityEngine.XR.iOS.internal_UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR void internal_ARSessionTrackingChanged_Invoke_m2960819036 (internal_ARSessionTrackingChanged_t1988849735 * __this, internal_UnityARCamera_t3920739388  ___camera0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		internal_ARSessionTrackingChanged_Invoke_m2960819036((internal_ARSessionTrackingChanged_t1988849735 *)__this->get_prev_9(), ___camera0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, internal_UnityARCamera_t3920739388 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___camera0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, internal_UnityARCamera_t3920739388 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___camera0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< internal_UnityARCamera_t3920739388  >::Invoke(targetMethod, targetThis, ___camera0);
					else
						GenericVirtActionInvoker1< internal_UnityARCamera_t3920739388  >::Invoke(targetMethod, targetThis, ___camera0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< internal_UnityARCamera_t3920739388  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___camera0);
					else
						VirtActionInvoker1< internal_UnityARCamera_t3920739388  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___camera0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, internal_UnityARCamera_t3920739388 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___camera0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged::BeginInvoke(UnityEngine.XR.iOS.internal_UnityARCamera,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* internal_ARSessionTrackingChanged_BeginInvoke_m453410478 (internal_ARSessionTrackingChanged_t1988849735 * __this, internal_UnityARCamera_t3920739388  ___camera0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (internal_ARSessionTrackingChanged_BeginInvoke_m453410478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(internal_UnityARCamera_t3920739388_il2cpp_TypeInfo_var, &___camera0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void internal_ARSessionTrackingChanged_EndInvoke_m905534625 (internal_ARSessionTrackingChanged_t1988849735 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_internal_ARUserAnchorAdded_t3285282493 (internal_ARUserAnchorAdded_t3285282493 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(UnityARUserAnchorData_t1976826249 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___anchorData0);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void internal_ARUserAnchorAdded__ctor_m1954806258 (internal_ARUserAnchorAdded_t3285282493 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded::Invoke(UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C" IL2CPP_METHOD_ATTR void internal_ARUserAnchorAdded_Invoke_m3060859101 (internal_ARUserAnchorAdded_t3285282493 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		internal_ARUserAnchorAdded_Invoke_m3060859101((internal_ARUserAnchorAdded_t3285282493 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, UnityARUserAnchorData_t1976826249 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARUserAnchorData_t1976826249 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UnityARUserAnchorData_t1976826249  >::Invoke(targetMethod, targetThis, ___anchorData0);
					else
						GenericVirtActionInvoker1< UnityARUserAnchorData_t1976826249  >::Invoke(targetMethod, targetThis, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnityARUserAnchorData_t1976826249  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
					else
						VirtActionInvoker1< UnityARUserAnchorData_t1976826249  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UnityARUserAnchorData_t1976826249 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded::BeginInvoke(UnityEngine.XR.iOS.UnityARUserAnchorData,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* internal_ARUserAnchorAdded_BeginInvoke_m3896873928 (internal_ARUserAnchorAdded_t3285282493 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (internal_ARUserAnchorAdded_BeginInvoke_m3896873928_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARUserAnchorData_t1976826249_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void internal_ARUserAnchorAdded_EndInvoke_m1612333521 (internal_ARUserAnchorAdded_t3285282493 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_internal_ARUserAnchorRemoved_t386858594 (internal_ARUserAnchorRemoved_t386858594 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(UnityARUserAnchorData_t1976826249 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___anchorData0);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void internal_ARUserAnchorRemoved__ctor_m3250994366 (internal_ARUserAnchorRemoved_t386858594 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved::Invoke(UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C" IL2CPP_METHOD_ATTR void internal_ARUserAnchorRemoved_Invoke_m1810838433 (internal_ARUserAnchorRemoved_t386858594 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		internal_ARUserAnchorRemoved_Invoke_m1810838433((internal_ARUserAnchorRemoved_t386858594 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, UnityARUserAnchorData_t1976826249 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARUserAnchorData_t1976826249 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UnityARUserAnchorData_t1976826249  >::Invoke(targetMethod, targetThis, ___anchorData0);
					else
						GenericVirtActionInvoker1< UnityARUserAnchorData_t1976826249  >::Invoke(targetMethod, targetThis, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnityARUserAnchorData_t1976826249  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
					else
						VirtActionInvoker1< UnityARUserAnchorData_t1976826249  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UnityARUserAnchorData_t1976826249 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved::BeginInvoke(UnityEngine.XR.iOS.UnityARUserAnchorData,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* internal_ARUserAnchorRemoved_BeginInvoke_m2511948604 (internal_ARUserAnchorRemoved_t386858594 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (internal_ARUserAnchorRemoved_BeginInvoke_m2511948604_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARUserAnchorData_t1976826249_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void internal_ARUserAnchorRemoved_EndInvoke_m1427522325 (internal_ARUserAnchorRemoved_t386858594 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_internal_ARUserAnchorUpdated_t3964727538 (internal_ARUserAnchorUpdated_t3964727538 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(UnityARUserAnchorData_t1976826249 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___anchorData0);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void internal_ARUserAnchorUpdated__ctor_m1485411968 (internal_ARUserAnchorUpdated_t3964727538 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated::Invoke(UnityEngine.XR.iOS.UnityARUserAnchorData)
extern "C" IL2CPP_METHOD_ATTR void internal_ARUserAnchorUpdated_Invoke_m1125450612 (internal_ARUserAnchorUpdated_t3964727538 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		internal_ARUserAnchorUpdated_Invoke_m1125450612((internal_ARUserAnchorUpdated_t3964727538 *)__this->get_prev_9(), ___anchorData0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, UnityARUserAnchorData_t1976826249 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARUserAnchorData_t1976826249 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___anchorData0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UnityARUserAnchorData_t1976826249  >::Invoke(targetMethod, targetThis, ___anchorData0);
					else
						GenericVirtActionInvoker1< UnityARUserAnchorData_t1976826249  >::Invoke(targetMethod, targetThis, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnityARUserAnchorData_t1976826249  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
					else
						VirtActionInvoker1< UnityARUserAnchorData_t1976826249  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UnityARUserAnchorData_t1976826249 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated::BeginInvoke(UnityEngine.XR.iOS.UnityARUserAnchorData,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* internal_ARUserAnchorUpdated_BeginInvoke_m3665399959 (internal_ARUserAnchorUpdated_t3964727538 * __this, UnityARUserAnchorData_t1976826249  ___anchorData0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (internal_ARUserAnchorUpdated_BeginInvoke_m3665399959_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARUserAnchorData_t1976826249_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void internal_ARUserAnchorUpdated_EndInvoke_m1479927878 (internal_ARUserAnchorUpdated_t3964727538 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.XR.iOS.UnityARUserAnchorComponent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityARUserAnchorComponent__ctor_m446199219 (UnityARUserAnchorComponent_t969893952 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.XR.iOS.UnityARUserAnchorComponent::get_AnchorId()
extern "C" IL2CPP_METHOD_ATTR String_t* UnityARUserAnchorComponent_get_AnchorId_m2938657237 (UnityARUserAnchorComponent_t969893952 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_AnchorId_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARUserAnchorComponent::Awake()
extern "C" IL2CPP_METHOD_ATTR void UnityARUserAnchorComponent_Awake_m1256671643 (UnityARUserAnchorComponent_t969893952 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUserAnchorComponent_Awake_m1256671643_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityARUserAnchorData_t1976826249  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = (intptr_t)UnityARUserAnchorComponent_GameObjectAnchorUpdated_m1750428080_RuntimeMethod_var;
		ARUserAnchorUpdated_t4007601678 * L_1 = (ARUserAnchorUpdated_t4007601678 *)il2cpp_codegen_object_new(ARUserAnchorUpdated_t4007601678_il2cpp_TypeInfo_var);
		ARUserAnchorUpdated__ctor_m4059084489(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_add_ARUserAnchorUpdatedEvent_m3620938119(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		intptr_t L_2 = (intptr_t)UnityARUserAnchorComponent_AnchorRemoved_m2099527927_RuntimeMethod_var;
		ARUserAnchorRemoved_t23344545 * L_3 = (ARUserAnchorRemoved_t23344545 *)il2cpp_codegen_object_new(ARUserAnchorRemoved_t23344545_il2cpp_TypeInfo_var);
		ARUserAnchorRemoved__ctor_m586540762(L_3, __this, L_2, /*hidden argument*/NULL);
		UnityARSessionNativeInterface_add_ARUserAnchorRemovedEvent_m3520224501(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		UnityARSessionNativeInterface_t3929719369 * L_4 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityARUserAnchorData_t1976826249  L_6 = UnityARSessionNativeInterface_AddUserAnchorFromGameObject_m3087613556(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = UnityARUserAnchorData_get_identifierStr_m122781054((UnityARUserAnchorData_t1976826249 *)(&V_0), /*hidden argument*/NULL);
		__this->set_m_AnchorId_4(L_7);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARUserAnchorComponent::Start()
extern "C" IL2CPP_METHOD_ATTR void UnityARUserAnchorComponent_Start_m756554043 (UnityARUserAnchorComponent_t969893952 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARUserAnchorComponent::AnchorRemoved(UnityEngine.XR.iOS.ARUserAnchor)
extern "C" IL2CPP_METHOD_ATTR void UnityARUserAnchorComponent_AnchorRemoved_m2099527927 (UnityARUserAnchorComponent_t969893952 * __this, ARUserAnchor_t1406831531  ___anchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUserAnchorComponent_AnchorRemoved_m2099527927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = (&___anchor0)->get_identifier_0();
		String_t* L_1 = __this->get_m_AnchorId_4();
		NullCheck(L_0);
		bool L_2 = String_Equals_m2270643605(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARUserAnchorComponent::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void UnityARUserAnchorComponent_OnDestroy_m1550181455 (UnityARUserAnchorComponent_t969893952 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUserAnchorComponent_OnDestroy_m1550181455_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)UnityARUserAnchorComponent_GameObjectAnchorUpdated_m1750428080_RuntimeMethod_var;
		ARUserAnchorUpdated_t4007601678 * L_1 = (ARUserAnchorUpdated_t4007601678 *)il2cpp_codegen_object_new(ARUserAnchorUpdated_t4007601678_il2cpp_TypeInfo_var);
		ARUserAnchorUpdated__ctor_m4059084489(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_remove_ARUserAnchorUpdatedEvent_m2181757746(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		intptr_t L_2 = (intptr_t)UnityARUserAnchorComponent_AnchorRemoved_m2099527927_RuntimeMethod_var;
		ARUserAnchorRemoved_t23344545 * L_3 = (ARUserAnchorRemoved_t23344545 *)il2cpp_codegen_object_new(ARUserAnchorRemoved_t23344545_il2cpp_TypeInfo_var);
		ARUserAnchorRemoved__ctor_m586540762(L_3, __this, L_2, /*hidden argument*/NULL);
		UnityARSessionNativeInterface_remove_ARUserAnchorRemovedEvent_m2042627006(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		UnityARSessionNativeInterface_t3929719369 * L_4 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = __this->get_m_AnchorId_4();
		NullCheck(L_4);
		UnityARSessionNativeInterface_RemoveUserAnchor_m1246452311(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARUserAnchorComponent::GameObjectAnchorUpdated(UnityEngine.XR.iOS.ARUserAnchor)
extern "C" IL2CPP_METHOD_ATTR void UnityARUserAnchorComponent_GameObjectAnchorUpdated_m1750428080 (UnityARUserAnchorComponent_t969893952 * __this, ARUserAnchor_t1406831531  ___anchor0, const RuntimeMethod* method)
{
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
// System.String UnityEngine.XR.iOS.UnityARUserAnchorData::get_identifierStr()
extern "C" IL2CPP_METHOD_ATTR String_t* UnityARUserAnchorData_get_identifierStr_m122781054 (UnityARUserAnchorData_t1976826249 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUserAnchorData_get_identifierStr_m122781054_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_ptrIdentifier_0();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		String_t* L_1 = Marshal_PtrToStringAuto_m3648166035(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UnityARUserAnchorData_get_identifierStr_m122781054_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	UnityARUserAnchorData_t1976826249 * _thisAdjusted = reinterpret_cast<UnityARUserAnchorData_t1976826249 *>(__this + 1);
	return UnityARUserAnchorData_get_identifierStr_m122781054(_thisAdjusted, method);
}
// UnityEngine.XR.iOS.UnityARUserAnchorData UnityEngine.XR.iOS.UnityARUserAnchorData::UnityARUserAnchorDataFromGameObject(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR UnityARUserAnchorData_t1976826249  UnityARUserAnchorData_UnityARUserAnchorDataFromGameObject_m1971953404 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUserAnchorData_UnityARUserAnchorDataFromGameObject_m1971953404_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t1817901843  V_0;
	memset(&V_0, 0, sizeof(V_0));
	UnityARUserAnchorData_t1976826249  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		GameObject_t1113636619 * L_0 = ___go0;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = ___go0;
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t2301928331  L_5 = Transform_get_rotation_m3502953881(L_4, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = ___go0;
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_localScale_m129152068(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t1817901843_il2cpp_TypeInfo_var);
		Matrix4x4_t1817901843  L_9 = Matrix4x4_TRS_m3801934620(NULL /*static, unused*/, L_2, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		il2cpp_codegen_initobj((&V_1), sizeof(UnityARUserAnchorData_t1976826249 ));
		UnityARMatrix4x4_t4073345847 * L_10 = (&V_1)->get_address_of_transform_1();
		Vector4_t3319028937  L_11 = Matrix4x4_GetColumn_m461504848((Matrix4x4_t1817901843 *)(&V_0), 0, /*hidden argument*/NULL);
		L_10->set_column0_0(L_11);
		UnityARMatrix4x4_t4073345847 * L_12 = (&V_1)->get_address_of_transform_1();
		Vector4_t3319028937  L_13 = Matrix4x4_GetColumn_m461504848((Matrix4x4_t1817901843 *)(&V_0), 1, /*hidden argument*/NULL);
		L_12->set_column1_1(L_13);
		UnityARMatrix4x4_t4073345847 * L_14 = (&V_1)->get_address_of_transform_1();
		Vector4_t3319028937  L_15 = Matrix4x4_GetColumn_m461504848((Matrix4x4_t1817901843 *)(&V_0), 2, /*hidden argument*/NULL);
		L_14->set_column2_2(L_15);
		UnityARMatrix4x4_t4073345847 * L_16 = (&V_1)->get_address_of_transform_1();
		Vector4_t3319028937  L_17 = Matrix4x4_GetColumn_m461504848((Matrix4x4_t1817901843 *)(&V_0), 3, /*hidden argument*/NULL);
		L_16->set_column3_3(L_17);
		UnityARUserAnchorData_t1976826249  L_18 = V_1;
		return L_18;
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
// System.Void UnityEngine.XR.iOS.UnityARUtility::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityARUtility__ctor_m2741473109 (UnityARUtility_t2509807446 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARUtility::InitializePlanePrefab(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void UnityARUtility_InitializePlanePrefab_m2291423040 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUtility_InitializePlanePrefab_m2291423040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = ___go0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARUtility_t2509807446_il2cpp_TypeInfo_var);
		((UnityARUtility_t2509807446_StaticFields*)il2cpp_codegen_static_fields_for(UnityARUtility_t2509807446_il2cpp_TypeInfo_var))->set_planePrefab_2(L_0);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARUtility::CreatePlaneInScene(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * UnityARUtility_CreatePlaneInScene_m2158801296 (RuntimeObject * __this /* static, unused */, ARPlaneAnchor_t2049372221  ___arPlaneAnchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUtility_CreatePlaneInScene_m2158801296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARUtility_t2509807446_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_0 = ((UnityARUtility_t2509807446_StaticFields*)il2cpp_codegen_static_fields_for(UnityARUtility_t2509807446_il2cpp_TypeInfo_var))->get_planePrefab_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARUtility_t2509807446_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_2 = ((UnityARUtility_t2509807446_StaticFields*)il2cpp_codegen_static_fields_for(UnityARUtility_t2509807446_il2cpp_TypeInfo_var))->get_planePrefab_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_3 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_0026;
	}

IL_0020:
	{
		GameObject_t1113636619 * L_4 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m3707688467(L_4, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0026:
	{
		GameObject_t1113636619 * L_5 = V_0;
		String_t* L_6 = (&___arPlaneAnchor0)->get_identifier_0();
		NullCheck(L_5);
		Object_set_name_m291480324(L_5, L_6, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_7 = V_0;
		ARPlaneAnchor_t2049372221  L_8 = ___arPlaneAnchor0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARUtility_t2509807446_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_9 = UnityARUtility_UpdatePlaneWithAnchorTransform_m2954036282(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARUtility::UpdatePlaneWithAnchorTransform(UnityEngine.GameObject,UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * UnityARUtility_UpdatePlaneWithAnchorTransform_m2954036282 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___plane0, ARPlaneAnchor_t2049372221  ___arPlaneAnchor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUtility_UpdatePlaneWithAnchorTransform_m2954036282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MeshFilter_t3523625662 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___plane0;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		Matrix4x4_t1817901843  L_2 = (&___arPlaneAnchor1)->get_transform_1();
		Vector3_t3722313464  L_3 = UnityARMatrixOps_GetPosition_m296874797(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_m3387557959(L_1, L_3, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = ___plane0;
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		Matrix4x4_t1817901843  L_6 = (&___arPlaneAnchor1)->get_transform_1();
		Quaternion_t2301928331  L_7 = UnityARMatrixOps_GetRotation_m1192521266(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_rotation_m3524318132(L_5, L_7, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = ___plane0;
		NullCheck(L_8);
		MeshFilter_t3523625662 * L_9 = GameObject_GetComponentInChildren_TisMeshFilter_t3523625662_m478508368(L_8, /*hidden argument*/GameObject_GetComponentInChildren_TisMeshFilter_t3523625662_m478508368_RuntimeMethod_var);
		V_0 = L_9;
		MeshFilter_t3523625662 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_10, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00c6;
		}
	}
	{
		MeshFilter_t3523625662 * L_12 = V_0;
		NullCheck(L_12);
		GameObject_t1113636619 * L_13 = Component_get_gameObject_m442555142(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_t3600365921 * L_14 = GameObject_get_transform_m1369836730(L_13, /*hidden argument*/NULL);
		Vector3_t3722313464 * L_15 = (&___arPlaneAnchor1)->get_address_of_extent_4();
		float L_16 = L_15->get_x_2();
		Vector3_t3722313464 * L_17 = (&___arPlaneAnchor1)->get_address_of_extent_4();
		float L_18 = L_17->get_y_3();
		Vector3_t3722313464 * L_19 = (&___arPlaneAnchor1)->get_address_of_extent_4();
		float L_20 = L_19->get_z_4();
		Vector3_t3722313464  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Vector3__ctor_m3353183577((&L_21), ((float)il2cpp_codegen_multiply((float)L_16, (float)(0.1f))), ((float)il2cpp_codegen_multiply((float)L_18, (float)(0.1f))), ((float)il2cpp_codegen_multiply((float)L_20, (float)(0.1f))), /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localScale_m3053443106(L_14, L_21, /*hidden argument*/NULL);
		MeshFilter_t3523625662 * L_22 = V_0;
		NullCheck(L_22);
		GameObject_t1113636619 * L_23 = Component_get_gameObject_m442555142(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_t3600365921 * L_24 = GameObject_get_transform_m1369836730(L_23, /*hidden argument*/NULL);
		Vector3_t3722313464 * L_25 = (&___arPlaneAnchor1)->get_address_of_center_3();
		float L_26 = L_25->get_x_2();
		Vector3_t3722313464 * L_27 = (&___arPlaneAnchor1)->get_address_of_center_3();
		float L_28 = L_27->get_y_3();
		Vector3_t3722313464 * L_29 = (&___arPlaneAnchor1)->get_address_of_center_3();
		float L_30 = L_29->get_z_4();
		Vector3_t3722313464  L_31;
		memset(&L_31, 0, sizeof(L_31));
		Vector3__ctor_m3353183577((&L_31), L_26, L_28, ((-L_30)), /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localPosition_m4128471975(L_24, L_31, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		GameObject_t1113636619 * L_32 = ___plane0;
		return L_32;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARUtility::.cctor()
extern "C" IL2CPP_METHOD_ATTR void UnityARUtility__cctor_m3742647908 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
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
// System.Void UnityEngine.XR.iOS.UnityARVideo::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityARVideo__ctor_m1829799440 (UnityARVideo_t1146951207 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARVideo::Start()
extern "C" IL2CPP_METHOD_ATTR void UnityARVideo_Start_m3116293614 (UnityARVideo_t1146951207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARVideo_Start_m3116293614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)UnityARVideo_UpdateFrame_m3975841991_RuntimeMethod_var;
		ARFrameUpdate_t1157215840 * L_1 = (ARFrameUpdate_t1157215840 *)il2cpp_codegen_object_new(ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m3633991724(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m3366057771(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->set_bCommandBufferInitialized_9((bool)0);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARVideo::UpdateFrame(UnityEngine.XR.iOS.UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR void UnityARVideo_UpdateFrame_m3975841991 (UnityARVideo_t1146951207 * __this, UnityARCamera_t2069150450  ___cam0, const RuntimeMethod* method)
{
	Matrix4x4_t1817901843  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_t1817901843 ));
		Matrix4x4_t1817901843  L_0 = V_0;
		__this->set__displayTransform_8(L_0);
		Matrix4x4_t1817901843 * L_1 = __this->get_address_of__displayTransform_8();
		UnityARMatrix4x4_t4073345847 * L_2 = (&___cam0)->get_address_of_displayTransform_6();
		Vector4_t3319028937  L_3 = L_2->get_column0_0();
		Matrix4x4_SetColumn_m2328592759((Matrix4x4_t1817901843 *)L_1, 0, L_3, /*hidden argument*/NULL);
		Matrix4x4_t1817901843 * L_4 = __this->get_address_of__displayTransform_8();
		UnityARMatrix4x4_t4073345847 * L_5 = (&___cam0)->get_address_of_displayTransform_6();
		Vector4_t3319028937  L_6 = L_5->get_column1_1();
		Matrix4x4_SetColumn_m2328592759((Matrix4x4_t1817901843 *)L_4, 1, L_6, /*hidden argument*/NULL);
		Matrix4x4_t1817901843 * L_7 = __this->get_address_of__displayTransform_8();
		UnityARMatrix4x4_t4073345847 * L_8 = (&___cam0)->get_address_of_displayTransform_6();
		Vector4_t3319028937  L_9 = L_8->get_column2_2();
		Matrix4x4_SetColumn_m2328592759((Matrix4x4_t1817901843 *)L_7, 2, L_9, /*hidden argument*/NULL);
		Matrix4x4_t1817901843 * L_10 = __this->get_address_of__displayTransform_8();
		UnityARMatrix4x4_t4073345847 * L_11 = (&___cam0)->get_address_of_displayTransform_6();
		Vector4_t3319028937  L_12 = L_11->get_column3_3();
		Matrix4x4_SetColumn_m2328592759((Matrix4x4_t1817901843 *)L_10, 3, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARVideo::InitializeCommandBuffer()
extern "C" IL2CPP_METHOD_ATTR void UnityARVideo_InitializeCommandBuffer_m1538546596 (UnityARVideo_t1146951207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARVideo_InitializeCommandBuffer_m1538546596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommandBuffer_t2206337031 * L_0 = (CommandBuffer_t2206337031 *)il2cpp_codegen_object_new(CommandBuffer_t2206337031_il2cpp_TypeInfo_var);
		CommandBuffer__ctor_m3028411456(L_0, /*hidden argument*/NULL);
		__this->set_m_VideoCommandBuffer_5(L_0);
		CommandBuffer_t2206337031 * L_1 = __this->get_m_VideoCommandBuffer_5();
		RenderTargetIdentifier_t2079184500  L_2 = RenderTargetIdentifier_op_Implicit_m2644497587(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		Material_t340375123 * L_3 = __this->get_m_ClearMaterial_4();
		NullCheck(L_1);
		CommandBuffer_Blit_m1578015716(L_1, (Texture_t3661962703 *)NULL, L_2, L_3, /*hidden argument*/NULL);
		Camera_t4157153871 * L_4 = Component_GetComponent_TisCamera_t4157153871_m4227149030(__this, /*hidden argument*/Component_GetComponent_TisCamera_t4157153871_m4227149030_RuntimeMethod_var);
		CommandBuffer_t2206337031 * L_5 = __this->get_m_VideoCommandBuffer_5();
		NullCheck(L_4);
		Camera_AddCommandBuffer_m1363239337(L_4, ((int32_t)10), L_5, /*hidden argument*/NULL);
		__this->set_bCommandBufferInitialized_9((bool)1);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARVideo::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void UnityARVideo_OnDestroy_m4099270667 (UnityARVideo_t1146951207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARVideo_OnDestroy_m4099270667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t4157153871 * L_0 = Component_GetComponent_TisCamera_t4157153871_m4227149030(__this, /*hidden argument*/Component_GetComponent_TisCamera_t4157153871_m4227149030_RuntimeMethod_var);
		CommandBuffer_t2206337031 * L_1 = __this->get_m_VideoCommandBuffer_5();
		NullCheck(L_0);
		Camera_RemoveCommandBuffer_m773243127(L_0, ((int32_t)10), L_1, /*hidden argument*/NULL);
		intptr_t L_2 = (intptr_t)UnityARVideo_UpdateFrame_m3975841991_RuntimeMethod_var;
		ARFrameUpdate_t1157215840 * L_3 = (ARFrameUpdate_t1157215840 *)il2cpp_codegen_object_new(ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m3633991724(L_3, __this, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_remove_ARFrameUpdatedEvent_m772523965(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->set_bCommandBufferInitialized_9((bool)0);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARVideo::OnPreRender()
extern "C" IL2CPP_METHOD_ATTR void UnityARVideo_OnPreRender_m1315675298 (UnityARVideo_t1146951207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARVideo_OnPreRender_m1315675298_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARTextureHandles_t852411561  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Resolution_t2487619763  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_t3929719369 * L_0 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ARTextureHandles_t852411561  L_1 = UnityARSessionNativeInterface_GetARVideoTextureHandles_m1964002027(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		intptr_t L_2 = (&V_0)->get_textureY_0();
		bool L_3 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		intptr_t L_4 = (&V_0)->get_textureCbCr_1();
		bool L_5 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}

IL_0037:
	{
		return;
	}

IL_0038:
	{
		bool L_6 = __this->get_bCommandBufferInitialized_9();
		if (L_6)
		{
			goto IL_0049;
		}
	}
	{
		UnityARVideo_InitializeCommandBuffer_m1538546596(__this, /*hidden argument*/NULL);
	}

IL_0049:
	{
		Resolution_t2487619763  L_7 = Screen_get_currentResolution_m1680624610(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_7;
		Texture2D_t3840446185 * L_8 = __this->get__videoTextureY_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_10 = Resolution_get_width_m400677188((Resolution_t2487619763 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_11 = Resolution_get_height_m933996501((Resolution_t2487619763 *)(&V_1), /*hidden argument*/NULL);
		intptr_t L_12 = (&V_0)->get_textureY_0();
		Texture2D_t3840446185 * L_13 = Texture2D_CreateExternalTexture_m2529687473(NULL /*static, unused*/, L_10, L_11, ((int32_t)63), (bool)0, (bool)0, L_12, /*hidden argument*/NULL);
		__this->set__videoTextureY_6(L_13);
		Texture2D_t3840446185 * L_14 = __this->get__videoTextureY_6();
		NullCheck(L_14);
		Texture_set_filterMode_m3078068058(L_14, 1, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_15 = __this->get__videoTextureY_6();
		NullCheck(L_15);
		Texture_set_wrapMode_m587872754(L_15, 0, /*hidden argument*/NULL);
		Material_t340375123 * L_16 = __this->get_m_ClearMaterial_4();
		Texture2D_t3840446185 * L_17 = __this->get__videoTextureY_6();
		NullCheck(L_16);
		Material_SetTexture_m1829349465(L_16, _stringLiteral2313301283, L_17, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		Texture2D_t3840446185 * L_18 = __this->get__videoTextureCbCr_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_18, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_20 = Resolution_get_width_m400677188((Resolution_t2487619763 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_21 = Resolution_get_height_m933996501((Resolution_t2487619763 *)(&V_1), /*hidden argument*/NULL);
		intptr_t L_22 = (&V_0)->get_textureCbCr_1();
		Texture2D_t3840446185 * L_23 = Texture2D_CreateExternalTexture_m2529687473(NULL /*static, unused*/, L_20, L_21, ((int32_t)62), (bool)0, (bool)0, L_22, /*hidden argument*/NULL);
		__this->set__videoTextureCbCr_7(L_23);
		Texture2D_t3840446185 * L_24 = __this->get__videoTextureCbCr_7();
		NullCheck(L_24);
		Texture_set_filterMode_m3078068058(L_24, 1, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_25 = __this->get__videoTextureCbCr_7();
		NullCheck(L_25);
		Texture_set_wrapMode_m587872754(L_25, 0, /*hidden argument*/NULL);
		Material_t340375123 * L_26 = __this->get_m_ClearMaterial_4();
		Texture2D_t3840446185 * L_27 = __this->get__videoTextureCbCr_7();
		NullCheck(L_26);
		Material_SetTexture_m1829349465(L_26, _stringLiteral3606922194, L_27, /*hidden argument*/NULL);
	}

IL_0115:
	{
		Texture2D_t3840446185 * L_28 = __this->get__videoTextureY_6();
		intptr_t L_29 = (&V_0)->get_textureY_0();
		NullCheck(L_28);
		Texture2D_UpdateExternalTexture_m2829146467(L_28, L_29, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_30 = __this->get__videoTextureCbCr_7();
		intptr_t L_31 = (&V_0)->get_textureCbCr_1();
		NullCheck(L_30);
		Texture2D_UpdateExternalTexture_m2829146467(L_30, L_31, /*hidden argument*/NULL);
		Material_t340375123 * L_32 = __this->get_m_ClearMaterial_4();
		Matrix4x4_t1817901843  L_33 = __this->get__displayTransform_8();
		NullCheck(L_32);
		Material_SetMatrix_m4094650785(L_32, _stringLiteral1055189311, L_33, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.iOS.UnityMarshalLightData::.ctor(UnityEngine.XR.iOS.LightDataType,UnityEngine.XR.iOS.UnityARLightEstimate,UnityEngine.XR.iOS.MarshalDirectionalLightEstimate)
extern "C" IL2CPP_METHOD_ATTR void UnityMarshalLightData__ctor_m1643561199 (UnityMarshalLightData_t1623228070 * __this, int32_t ___ldt0, UnityARLightEstimate_t1498306117  ___ule1, MarshalDirectionalLightEstimate_t3803901471  ___mdle2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___ldt0;
		__this->set_arLightingType_0(L_0);
		UnityARLightEstimate_t1498306117  L_1 = ___ule1;
		__this->set_arLightEstimate_1(L_1);
		MarshalDirectionalLightEstimate_t3803901471  L_2 = ___mdle2;
		__this->set_arDirectonalLightEstimate_2(L_2);
		return;
	}
}
extern "C"  void UnityMarshalLightData__ctor_m1643561199_AdjustorThunk (RuntimeObject * __this, int32_t ___ldt0, UnityARLightEstimate_t1498306117  ___ule1, MarshalDirectionalLightEstimate_t3803901471  ___mdle2, const RuntimeMethod* method)
{
	UnityMarshalLightData_t1623228070 * _thisAdjusted = reinterpret_cast<UnityMarshalLightData_t1623228070 *>(__this + 1);
	UnityMarshalLightData__ctor_m1643561199(_thisAdjusted, ___ldt0, ___ule1, ___mdle2, method);
}
// UnityEngine.XR.iOS.UnityARLightData UnityEngine.XR.iOS.UnityMarshalLightData::op_Implicit(UnityEngine.XR.iOS.UnityMarshalLightData)
extern "C" IL2CPP_METHOD_ATTR UnityARLightData_t2160616730  UnityMarshalLightData_op_Implicit_m3999748056 (RuntimeObject * __this /* static, unused */, UnityMarshalLightData_t1623228070  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityMarshalLightData_op_Implicit_m3999748056_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityARDirectionalLightEstimate_t2924556994 * V_0 = NULL;
	Vector4_t3319028937  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	SingleU5BU5D_t1444911251* V_3 = NULL;
	{
		V_0 = (UnityARDirectionalLightEstimate_t2924556994 *)NULL;
		int32_t L_0 = (&___rValue0)->get_arLightingType_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0054;
		}
	}
	{
		MarshalDirectionalLightEstimate_t3803901471 * L_1 = (&___rValue0)->get_address_of_arDirectonalLightEstimate_2();
		Vector4_t3319028937  L_2 = L_1->get_primaryDirAndIntensity_0();
		V_1 = L_2;
		float L_3 = (&V_1)->get_x_1();
		float L_4 = (&V_1)->get_y_2();
		float L_5 = (&V_1)->get_z_3();
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_2), L_3, L_4, L_5, /*hidden argument*/NULL);
		MarshalDirectionalLightEstimate_t3803901471 * L_6 = (&___rValue0)->get_address_of_arDirectonalLightEstimate_2();
		SingleU5BU5D_t1444911251* L_7 = MarshalDirectionalLightEstimate_get_SphericalHarmonicCoefficients_m156075873((MarshalDirectionalLightEstimate_t3803901471 *)L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		SingleU5BU5D_t1444911251* L_8 = V_3;
		Vector3_t3722313464  L_9 = V_2;
		float L_10 = (&V_1)->get_w_4();
		UnityARDirectionalLightEstimate_t2924556994 * L_11 = (UnityARDirectionalLightEstimate_t2924556994 *)il2cpp_codegen_object_new(UnityARDirectionalLightEstimate_t2924556994_il2cpp_TypeInfo_var);
		UnityARDirectionalLightEstimate__ctor_m3248127264(L_11, L_8, L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_0054:
	{
		int32_t L_12 = (&___rValue0)->get_arLightingType_0();
		UnityARLightEstimate_t1498306117  L_13 = (&___rValue0)->get_arLightEstimate_1();
		UnityARDirectionalLightEstimate_t2924556994 * L_14 = V_0;
		UnityARLightData_t2160616730  L_15;
		memset(&L_15, 0, sizeof(L_15));
		UnityARLightData__ctor_m4238079321((&L_15), L_12, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
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
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityRemoteVideo__ctor_m1516762280 (UnityRemoteVideo_t705138647 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::Start()
extern "C" IL2CPP_METHOD_ATTR void UnityRemoteVideo_Start_m768447242 (UnityRemoteVideo_t705138647 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRemoteVideo_Start_m768447242_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_t3929719369 * L_0 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Session_5(L_0);
		intptr_t L_1 = (intptr_t)UnityRemoteVideo_UpdateCamera_m873484480_RuntimeMethod_var;
		ARFrameUpdate_t1157215840 * L_2 = (ARFrameUpdate_t1157215840 *)il2cpp_codegen_object_new(ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m3633991724(L_2, __this, L_1, /*hidden argument*/NULL);
		UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m3366057771(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_currentFrameIndex_7(0);
		__this->set_bTexturesInitialized_6((bool)0);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::UpdateCamera(UnityEngine.XR.iOS.UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR void UnityRemoteVideo_UpdateCamera_m873484480 (UnityRemoteVideo_t705138647 * __this, UnityARCamera_t2069150450  ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRemoteVideo_UpdateCamera_m873484480_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_bTexturesInitialized_6();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		UnityARCamera_t2069150450  L_1 = ___camera0;
		UnityRemoteVideo_InitializeTextures_m1227954273(__this, L_1, /*hidden argument*/NULL);
	}

IL_0012:
	{
		intptr_t L_2 = (intptr_t)UnityRemoteVideo_UpdateCamera_m873484480_RuntimeMethod_var;
		ARFrameUpdate_t1157215840 * L_3 = (ARFrameUpdate_t1157215840 *)il2cpp_codegen_object_new(ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m3633991724(L_3, __this, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_remove_ARFrameUpdatedEvent_m772523965(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::InitializeTextures(UnityEngine.XR.iOS.UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR void UnityRemoteVideo_InitializeTextures_m1227954273 (UnityRemoteVideo_t705138647 * __this, UnityARCamera_t2069150450  ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRemoteVideo_InitializeTextures_m1227954273_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnityVideoParams_t4155354995 * L_0 = (&___camera0)->get_address_of_videoParams_4();
		int32_t L_1 = L_0->get_yWidth_0();
		UnityVideoParams_t4155354995 * L_2 = (&___camera0)->get_address_of_videoParams_4();
		int32_t L_3 = L_2->get_yHeight_1();
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_3));
		UnityVideoParams_t4155354995 * L_4 = (&___camera0)->get_address_of_videoParams_4();
		int32_t L_5 = L_4->get_yWidth_0();
		UnityVideoParams_t4155354995 * L_6 = (&___camera0)->get_address_of_videoParams_4();
		int32_t L_7 = L_6->get_yHeight_1();
		V_1 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_7))/(int32_t)2));
		int32_t L_8 = V_0;
		ByteU5BU5D_t4116647657* L_9 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->set_m_textureYBytes_8(L_9);
		int32_t L_10 = V_1;
		ByteU5BU5D_t4116647657* L_11 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->set_m_textureUVBytes_9(L_11);
		int32_t L_12 = V_0;
		ByteU5BU5D_t4116647657* L_13 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_12);
		__this->set_m_textureYBytes2_10(L_13);
		int32_t L_14 = V_1;
		ByteU5BU5D_t4116647657* L_15 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_14);
		__this->set_m_textureUVBytes2_11(L_15);
		ByteU5BU5D_t4116647657* L_16 = __this->get_m_textureYBytes_8();
		GCHandle_t3351438187  L_17 = GCHandle_Alloc_m3053200191(NULL /*static, unused*/, (RuntimeObject *)(RuntimeObject *)L_16, /*hidden argument*/NULL);
		__this->set_m_pinnedYArray_12(L_17);
		ByteU5BU5D_t4116647657* L_18 = __this->get_m_textureUVBytes_9();
		GCHandle_t3351438187  L_19 = GCHandle_Alloc_m3053200191(NULL /*static, unused*/, (RuntimeObject *)(RuntimeObject *)L_18, /*hidden argument*/NULL);
		__this->set_m_pinnedUVArray_13(L_19);
		__this->set_bTexturesInitialized_6((bool)1);
		return;
	}
}
// System.IntPtr UnityEngine.XR.iOS.UnityRemoteVideo::PinByteArray(System.Runtime.InteropServices.GCHandle&,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR intptr_t UnityRemoteVideo_PinByteArray_m562672237 (UnityRemoteVideo_t705138647 * __this, GCHandle_t3351438187 * ___handle0, ByteU5BU5D_t4116647657* ___array1, const RuntimeMethod* method)
{
	{
		GCHandle_t3351438187 * L_0 = ___handle0;
		GCHandle_Free_m1457699368((GCHandle_t3351438187 *)L_0, /*hidden argument*/NULL);
		GCHandle_t3351438187 * L_1 = ___handle0;
		ByteU5BU5D_t4116647657* L_2 = ___array1;
		GCHandle_t3351438187  L_3 = GCHandle_Alloc_m3823409740(NULL /*static, unused*/, (RuntimeObject *)(RuntimeObject *)L_2, 3, /*hidden argument*/NULL);
		*(GCHandle_t3351438187 *)L_1 = L_3;
		GCHandle_t3351438187 * L_4 = ___handle0;
		intptr_t L_5 = GCHandle_AddrOfPinnedObject_m3427142301((GCHandle_t3351438187 *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::ByteArrayForFrame(System.Int32,System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* UnityRemoteVideo_ByteArrayForFrame_m1687071501 (UnityRemoteVideo_t705138647 * __this, int32_t ___frame0, ByteU5BU5D_t4116647657* ___array01, ByteU5BU5D_t4116647657* ___array12, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* G_B3_0 = NULL;
	{
		int32_t L_0 = ___frame0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___array12;
		G_B3_0 = L_1;
		goto IL_000e;
	}

IL_000d:
	{
		ByteU5BU5D_t4116647657* L_2 = ___array01;
		G_B3_0 = L_2;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::YByteArrayForFrame(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* UnityRemoteVideo_YByteArrayForFrame_m3411529770 (UnityRemoteVideo_t705138647 * __this, int32_t ___frame0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___frame0;
		ByteU5BU5D_t4116647657* L_1 = __this->get_m_textureYBytes_8();
		ByteU5BU5D_t4116647657* L_2 = __this->get_m_textureYBytes2_10();
		ByteU5BU5D_t4116647657* L_3 = UnityRemoteVideo_ByteArrayForFrame_m1687071501(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::UVByteArrayForFrame(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* UnityRemoteVideo_UVByteArrayForFrame_m4228667374 (UnityRemoteVideo_t705138647 * __this, int32_t ___frame0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___frame0;
		ByteU5BU5D_t4116647657* L_1 = __this->get_m_textureUVBytes_9();
		ByteU5BU5D_t4116647657* L_2 = __this->get_m_textureUVBytes2_11();
		ByteU5BU5D_t4116647657* L_3 = UnityRemoteVideo_ByteArrayForFrame_m1687071501(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void UnityRemoteVideo_OnDestroy_m2450575749 (UnityRemoteVideo_t705138647 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRemoteVideo_OnDestroy_m2450575749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityARSessionNativeInterface_t3929719369 * L_0 = __this->get_m_Session_5();
		NullCheck(L_0);
		UnityARSessionNativeInterface_SetCapturePixelData_m3385125279(L_0, (bool)0, (intptr_t)(0), (intptr_t)(0), /*hidden argument*/NULL);
		GCHandle_t3351438187 * L_1 = __this->get_address_of_m_pinnedYArray_12();
		GCHandle_Free_m1457699368((GCHandle_t3351438187 *)L_1, /*hidden argument*/NULL);
		GCHandle_t3351438187 * L_2 = __this->get_address_of_m_pinnedUVArray_13();
		GCHandle_Free_m1457699368((GCHandle_t3351438187 *)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::OnPreRender()
extern "C" IL2CPP_METHOD_ATTR void UnityRemoteVideo_OnPreRender_m1591030712 (UnityRemoteVideo_t705138647 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRemoteVideo_OnPreRender_m1591030712_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARTextureHandles_t852411561  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Resolution_t2487619763  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		UnityARSessionNativeInterface_t3929719369 * L_0 = __this->get_m_Session_5();
		NullCheck(L_0);
		ARTextureHandles_t852411561  L_1 = UnityARSessionNativeInterface_GetARVideoTextureHandles_m1964002027(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		intptr_t L_2 = (&V_0)->get_textureY_0();
		bool L_3 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0038;
		}
	}
	{
		intptr_t L_4 = (&V_0)->get_textureCbCr_1();
		bool L_5 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}

IL_0038:
	{
		return;
	}

IL_0039:
	{
		bool L_6 = __this->get_bTexturesInitialized_6();
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		return;
	}

IL_0045:
	{
		int32_t L_7 = __this->get_currentFrameIndex_7();
		__this->set_currentFrameIndex_7(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1))%(int32_t)2)));
		Resolution_t2487619763  L_8 = Screen_get_currentResolution_m1680624610(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_8;
		UnityARSessionNativeInterface_t3929719369 * L_9 = __this->get_m_Session_5();
		GCHandle_t3351438187 * L_10 = __this->get_address_of_m_pinnedYArray_12();
		int32_t L_11 = __this->get_currentFrameIndex_7();
		ByteU5BU5D_t4116647657* L_12 = UnityRemoteVideo_YByteArrayForFrame_m3411529770(__this, L_11, /*hidden argument*/NULL);
		intptr_t L_13 = UnityRemoteVideo_PinByteArray_m562672237(__this, (GCHandle_t3351438187 *)L_10, L_12, /*hidden argument*/NULL);
		GCHandle_t3351438187 * L_14 = __this->get_address_of_m_pinnedUVArray_13();
		int32_t L_15 = __this->get_currentFrameIndex_7();
		ByteU5BU5D_t4116647657* L_16 = UnityRemoteVideo_UVByteArrayForFrame_m4228667374(__this, L_15, /*hidden argument*/NULL);
		intptr_t L_17 = UnityRemoteVideo_PinByteArray_m562672237(__this, (GCHandle_t3351438187 *)L_14, L_16, /*hidden argument*/NULL);
		NullCheck(L_9);
		UnityARSessionNativeInterface_SetCapturePixelData_m3385125279(L_9, (bool)1, L_13, L_17, /*hidden argument*/NULL);
		ConnectToEditor_t595742893 * L_18 = __this->get_connectToEditor_4();
		Guid_t  L_19 = ConnectionMessageIds_get_screenCaptureYMsgId_m3024188835(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_20 = __this->get_currentFrameIndex_7();
		ByteU5BU5D_t4116647657* L_21 = UnityRemoteVideo_YByteArrayForFrame_m3411529770(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)1, (int32_t)L_20)), /*hidden argument*/NULL);
		NullCheck(L_18);
		ConnectToEditor_SendToEditor_m2358646039(L_18, L_19, L_21, /*hidden argument*/NULL);
		ConnectToEditor_t595742893 * L_22 = __this->get_connectToEditor_4();
		Guid_t  L_23 = ConnectionMessageIds_get_screenCaptureUVMsgId_m596317401(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_24 = __this->get_currentFrameIndex_7();
		ByteU5BU5D_t4116647657* L_25 = UnityRemoteVideo_UVByteArrayForFrame_m4228667374(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)1, (int32_t)L_24)), /*hidden argument*/NULL);
		NullCheck(L_22);
		ConnectToEditor_SendToEditor_m2358646039(L_22, L_23, L_25, /*hidden argument*/NULL);
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
// System.Void UnityPointCloudExample::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityPointCloudExample__ctor_m3444243678 (UnityPointCloudExample_t3649008995 * __this, const RuntimeMethod* method)
{
	{
		__this->set_numPointsToShow_4(((int32_t)100));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityPointCloudExample::Start()
extern "C" IL2CPP_METHOD_ATTR void UnityPointCloudExample_Start_m4202814548 (UnityPointCloudExample_t3649008995 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityPointCloudExample_Start_m4202814548_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		intptr_t L_0 = (intptr_t)UnityPointCloudExample_ARFrameUpdated_m3531421433_RuntimeMethod_var;
		ARFrameUpdate_t1157215840 * L_1 = (ARFrameUpdate_t1157215840 *)il2cpp_codegen_object_new(ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m3633991724(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m3366057771(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_PointCloudPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005c;
		}
	}
	{
		List_1_t2585711361 * L_4 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m1424466557(L_4, /*hidden argument*/List_1__ctor_m1424466557_RuntimeMethod_var);
		__this->set_pointCloudObjects_6(L_4);
		V_0 = 0;
		goto IL_004e;
	}

IL_0034:
	{
		List_1_t2585711361 * L_5 = __this->get_pointCloudObjects_6();
		GameObject_t1113636619 * L_6 = __this->get_PointCloudPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_7 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		NullCheck(L_5);
		List_1_Add_m2765963565(L_5, L_7, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_004e:
	{
		int32_t L_9 = V_0;
		uint32_t L_10 = __this->get_numPointsToShow_4();
		if ((((int64_t)(((int64_t)((int64_t)L_9)))) < ((int64_t)(((int64_t)((uint64_t)L_10))))))
		{
			goto IL_0034;
		}
	}

IL_005c:
	{
		return;
	}
}
// System.Void UnityPointCloudExample::ARFrameUpdated(UnityEngine.XR.iOS.UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR void UnityPointCloudExample_ARFrameUpdated_m3531421433 (UnityPointCloudExample_t3649008995 * __this, UnityARCamera_t2069150450  ___camera0, const RuntimeMethod* method)
{
	{
		Vector3U5BU5D_t1718750761* L_0 = (&___camera0)->get_pointCloudData_7();
		__this->set_m_PointCloudData_7(L_0);
		return;
	}
}
// System.Void UnityPointCloudExample::Update()
extern "C" IL2CPP_METHOD_ATTR void UnityPointCloudExample_Update_m3072589646 (UnityPointCloudExample_t3649008995 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityPointCloudExample_Update_m3072589646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector4_t3319028937  V_1;
	memset(&V_1, 0, sizeof(V_1));
	GameObject_t1113636619 * V_2 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_PointCloudPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_008c;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_2 = __this->get_m_PointCloudData_7();
		if (!L_2)
		{
			goto IL_008c;
		}
	}
	{
		V_0 = 0;
		goto IL_0070;
	}

IL_0023:
	{
		Vector3U5BU5D_t1718750761* L_3 = __this->get_m_PointCloudData_7();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_5 = Vector4_op_Implicit_m2966035112(NULL /*static, unused*/, (*(Vector3_t3722313464 *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))), /*hidden argument*/NULL);
		V_1 = L_5;
		List_1_t2585711361 * L_6 = __this->get_pointCloudObjects_6();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		GameObject_t1113636619 * L_8 = List_1_get_Item_m3743125852(L_6, L_7, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		V_2 = L_8;
		GameObject_t1113636619 * L_9 = V_2;
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = GameObject_get_transform_m1369836730(L_9, /*hidden argument*/NULL);
		float L_11 = (&V_1)->get_x_1();
		float L_12 = (&V_1)->get_y_2();
		float L_13 = (&V_1)->get_z_3();
		Vector3_t3722313464  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector3__ctor_m3353183577((&L_14), L_11, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_m3387557959(L_10, L_14, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0070:
	{
		int32_t L_16 = V_0;
		Vector3U5BU5D_t1718750761* L_17 = __this->get_m_PointCloudData_7();
		NullCheck(L_17);
		uint32_t L_18 = __this->get_numPointsToShow_4();
		int64_t L_19 = Math_Min_m2427345610(NULL /*static, unused*/, (((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length))))))), (((int64_t)((uint64_t)L_18))), /*hidden argument*/NULL);
		if ((((int64_t)(((int64_t)((int64_t)L_16)))) < ((int64_t)L_19)))
		{
			goto IL_0023;
		}
	}

IL_008c:
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
// System.Void UpdateShaderCoordinatesByARPlane::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UpdateShaderCoordinatesByARPlane__ctor_m473637495 (UpdateShaderCoordinatesByARPlane_t405495776 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UpdateShaderCoordinatesByARPlane::Start()
extern "C" IL2CPP_METHOD_ATTR void UpdateShaderCoordinatesByARPlane_Start_m2018740165 (UpdateShaderCoordinatesByARPlane_t405495776 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UpdateShaderCoordinatesByARPlane_Start_m2018740165_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t1099483977 * L_0 = ((ARPlaneHandler_t1247306374_StaticFields*)il2cpp_codegen_static_fields_for(ARPlaneHandler_t1247306374_il2cpp_TypeInfo_var))->get_returnARPlane_5();
		intptr_t L_1 = (intptr_t)UpdateShaderCoordinatesByARPlane_CheckCoordinates_m4286974174_RuntimeMethod_var;
		Action_1_t1099483977 * L_2 = (Action_1_t1099483977 *)il2cpp_codegen_object_new(Action_1_t1099483977_il2cpp_TypeInfo_var);
		Action_1__ctor_m3806006932(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m3806006932_RuntimeMethod_var);
		Delegate_t1188392813 * L_3 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		((ARPlaneHandler_t1247306374_StaticFields*)il2cpp_codegen_static_fields_for(ARPlaneHandler_t1247306374_il2cpp_TypeInfo_var))->set_returnARPlane_5(((Action_1_t1099483977 *)CastclassSealed((RuntimeObject*)L_3, Action_1_t1099483977_il2cpp_TypeInfo_var)));
		Action_t1264377477 * L_4 = ((ARPlaneHandler_t1247306374_StaticFields*)il2cpp_codegen_static_fields_for(ARPlaneHandler_t1247306374_il2cpp_TypeInfo_var))->get_resetARPlane_4();
		intptr_t L_5 = (intptr_t)UpdateShaderCoordinatesByARPlane_ResetShaderValues_m1593896542_RuntimeMethod_var;
		Action_t1264377477 * L_6 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_6, __this, L_5, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_7 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		((ARPlaneHandler_t1247306374_StaticFields*)il2cpp_codegen_static_fields_for(ARPlaneHandler_t1247306374_il2cpp_TypeInfo_var))->set_resetARPlane_4(((Action_t1264377477 *)CastclassSealed((RuntimeObject*)L_7, Action_t1264377477_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void UpdateShaderCoordinatesByARPlane::CheckCoordinates(UnityARInterface.BoundedPlane)
extern "C" IL2CPP_METHOD_ATTR void UpdateShaderCoordinatesByARPlane_CheckCoordinates_m4286974174 (UpdateShaderCoordinatesByARPlane_t405495776 * __this, BoundedPlane_t927016382  ___plane0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UpdateShaderCoordinatesByARPlane_CheckCoordinates_m4286974174_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464  L_0 = (&___plane0)->get_center_1();
		__this->set__position_6(L_0);
		Quaternion_t2301928331  L_1 = (&___plane0)->get_rotation_3();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_2 = Quaternion_Inverse_m1311579081(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->set__rotation_4(L_2);
		Vector2_t2156229523 * L_3 = (&___plane0)->get_address_of_extents_2();
		float L_4 = L_3->get_x_0();
		Vector2_t2156229523 * L_5 = (&___plane0)->get_address_of_extents_2();
		float L_6 = L_5->get_y_1();
		Vector3_t3722313464  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m3353183577((&L_7), L_4, (10.0f), L_6, /*hidden argument*/NULL);
		__this->set__localScale_5(L_7);
		Vector3_t3722313464  L_8 = __this->get__position_6();
		Vector3_t3722313464  L_9 = __this->get__localScale_5();
		Quaternion_t2301928331  L_10 = __this->get__rotation_4();
		UpdateShaderCoordinatesByARPlane_UpdateShaderValues_m889279849(__this, L_8, L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UpdateShaderCoordinatesByARPlane::UpdateShaderValues(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void UpdateShaderCoordinatesByARPlane_UpdateShaderValues_m889279849 (UpdateShaderCoordinatesByARPlane_t405495776 * __this, Vector3_t3722313464  ___position0, Vector3_t3722313464  ___localScale1, Quaternion_t2301928331  ___rotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UpdateShaderCoordinatesByARPlane_UpdateShaderValues_m889279849_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		float L_0 = (&___position0)->get_x_2();
		float L_1 = (&___position0)->get_y_3();
		float L_2 = (&___position0)->get_z_4();
		Vector4_t3319028937  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector4__ctor_m2498754347((&L_3), L_0, L_1, L_2, (0.0f), /*hidden argument*/NULL);
		Shader_SetGlobalVector_m3544469942(NULL /*static, unused*/, _stringLiteral2774949250, L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Quaternion_get_eulerAngles_m3425202016((Quaternion_t2301928331 *)(&___rotation2), /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = (&V_0)->get_x_2();
		Vector3_t3722313464  L_6 = Quaternion_get_eulerAngles_m3425202016((Quaternion_t2301928331 *)(&___rotation2), /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = (&V_1)->get_y_3();
		Vector3_t3722313464  L_8 = Quaternion_get_eulerAngles_m3425202016((Quaternion_t2301928331 *)(&___rotation2), /*hidden argument*/NULL);
		V_2 = L_8;
		float L_9 = (&V_2)->get_z_4();
		Vector4_t3319028937  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector4__ctor_m2498754347((&L_10), L_5, L_7, L_9, (0.0f), /*hidden argument*/NULL);
		Shader_SetGlobalVector_m3544469942(NULL /*static, unused*/, _stringLiteral3984539697, L_10, /*hidden argument*/NULL);
		float L_11 = (&___localScale1)->get_x_2();
		float L_12 = (&___localScale1)->get_y_3();
		float L_13 = (&___localScale1)->get_z_4();
		Vector4_t3319028937  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector4__ctor_m2498754347((&L_14), L_11, L_12, L_13, (0.0f), /*hidden argument*/NULL);
		Shader_SetGlobalVector_m3544469942(NULL /*static, unused*/, _stringLiteral54826001, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UpdateShaderCoordinatesByARPlane::ResetShaderValues()
extern "C" IL2CPP_METHOD_ATTR void UpdateShaderCoordinatesByARPlane_ResetShaderValues_m1593896542 (UpdateShaderCoordinatesByARPlane_t405495776 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion__ctor_m435141806((Quaternion_t2301928331 *)(&V_1), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		Vector3_t3722313464  L_1 = V_0;
		Quaternion_t2301928331  L_2 = V_1;
		UpdateShaderCoordinatesByARPlane_UpdateShaderValues_m889279849(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UpdateShaderCoordinatesByARPlane::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void UpdateShaderCoordinatesByARPlane_OnDisable_m3164814015 (UpdateShaderCoordinatesByARPlane_t405495776 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UpdateShaderCoordinatesByARPlane_OnDisable_m3164814015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t1099483977 * L_0 = ((ARPlaneHandler_t1247306374_StaticFields*)il2cpp_codegen_static_fields_for(ARPlaneHandler_t1247306374_il2cpp_TypeInfo_var))->get_returnARPlane_5();
		intptr_t L_1 = (intptr_t)UpdateShaderCoordinatesByARPlane_CheckCoordinates_m4286974174_RuntimeMethod_var;
		Action_1_t1099483977 * L_2 = (Action_1_t1099483977 *)il2cpp_codegen_object_new(Action_1_t1099483977_il2cpp_TypeInfo_var);
		Action_1__ctor_m3806006932(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m3806006932_RuntimeMethod_var);
		Delegate_t1188392813 * L_3 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		((ARPlaneHandler_t1247306374_StaticFields*)il2cpp_codegen_static_fields_for(ARPlaneHandler_t1247306374_il2cpp_TypeInfo_var))->set_returnARPlane_5(((Action_1_t1099483977 *)CastclassSealed((RuntimeObject*)L_3, Action_1_t1099483977_il2cpp_TypeInfo_var)));
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
// System.Byte[] Utils.ObjectSerializationExtension::SerializeToByteArray(System.Object)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* ObjectSerializationExtension_SerializeToByteArray_m579578536 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectSerializationExtension_SerializeToByteArray_m579578536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BinaryFormatter_t3197753202 * V_0 = NULL;
	MemoryStream_t94973147 * V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_0008:
	{
		BinaryFormatter_t3197753202 * L_1 = (BinaryFormatter_t3197753202 *)il2cpp_codegen_object_new(BinaryFormatter_t3197753202_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m971003555(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		MemoryStream_t94973147 * L_2 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2678285228(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		BinaryFormatter_t3197753202 * L_3 = V_0;
		MemoryStream_t94973147 * L_4 = V_1;
		RuntimeObject * L_5 = ___obj0;
		NullCheck(L_3);
		BinaryFormatter_Serialize_m1744386044(L_3, L_4, L_5, /*hidden argument*/NULL);
		MemoryStream_t94973147 * L_6 = V_1;
		NullCheck(L_6);
		ByteU5BU5D_t4116647657* L_7 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(28 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_6);
		V_2 = L_7;
		IL2CPP_LEAVE(0x35, FINALLY_0028);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t94973147 * L_8 = V_1;
			if (!L_8)
			{
				goto IL_0034;
			}
		}

IL_002e:
		{
			MemoryStream_t94973147 * L_9 = V_1;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_9);
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(40)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0035:
	{
		ByteU5BU5D_t4116647657* L_10 = V_2;
		return L_10;
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
// System.Void Utils.SerializableVector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SerializableVector4__ctor_m3231681896 (SerializableVector4_t1862640084 * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		float L_0 = ___rX0;
		__this->set_x_0(L_0);
		float L_1 = ___rY1;
		__this->set_y_1(L_1);
		float L_2 = ___rZ2;
		__this->set_z_2(L_2);
		float L_3 = ___rW3;
		__this->set_w_3(L_3);
		return;
	}
}
// System.String Utils.SerializableVector4::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* SerializableVector4_ToString_m70901593 (SerializableVector4_t1862640084 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializableVector4_ToString_m70901593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		float L_2 = __this->get_x_0();
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		float L_6 = __this->get_y_1();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_5;
		float L_10 = __this->get_z_2();
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = L_9;
		float L_14 = __this->get_w_3();
		float L_15 = L_14;
		RuntimeObject * L_16 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral1432570861, L_13, /*hidden argument*/NULL);
		return L_17;
	}
}
// UnityEngine.Vector4 Utils.SerializableVector4::op_Implicit(Utils.SerializableVector4)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  SerializableVector4_op_Implicit_m3519692110 (RuntimeObject * __this /* static, unused */, SerializableVector4_t1862640084 * ___rValue0, const RuntimeMethod* method)
{
	{
		SerializableVector4_t1862640084 * L_0 = ___rValue0;
		NullCheck(L_0);
		float L_1 = L_0->get_x_0();
		SerializableVector4_t1862640084 * L_2 = ___rValue0;
		NullCheck(L_2);
		float L_3 = L_2->get_y_1();
		SerializableVector4_t1862640084 * L_4 = ___rValue0;
		NullCheck(L_4);
		float L_5 = L_4->get_z_2();
		SerializableVector4_t1862640084 * L_6 = ___rValue0;
		NullCheck(L_6);
		float L_7 = L_6->get_w_3();
		Vector4_t3319028937  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector4__ctor_m2498754347((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Utils.SerializableVector4 Utils.SerializableVector4::op_Implicit(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR SerializableVector4_t1862640084 * SerializableVector4_op_Implicit_m14360340 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializableVector4_op_Implicit_m14360340_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = (&___rValue0)->get_x_1();
		float L_1 = (&___rValue0)->get_y_2();
		float L_2 = (&___rValue0)->get_z_3();
		float L_3 = (&___rValue0)->get_w_4();
		SerializableVector4_t1862640084 * L_4 = (SerializableVector4_t1862640084 *)il2cpp_codegen_object_new(SerializableVector4_t1862640084_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m3231681896(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
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
// System.Void Utils.serializableARKitInit::.ctor(Utils.serializableARSessionConfiguration,UnityEngine.XR.iOS.UnityARSessionRunOption)
extern "C" IL2CPP_METHOD_ATTR void serializableARKitInit__ctor_m2106601498 (serializableARKitInit_t3885066048 * __this, serializableARSessionConfiguration_t1467016906 * ___cfg0, int32_t ___option1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		serializableARSessionConfiguration_t1467016906 * L_0 = ___cfg0;
		__this->set_config_0(L_0);
		int32_t L_1 = ___option1;
		__this->set_runOption_1(L_1);
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
// System.Void Utils.serializableARSessionConfiguration::.ctor(UnityEngine.XR.iOS.UnityARAlignment,UnityEngine.XR.iOS.UnityARPlaneDetection,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void serializableARSessionConfiguration__ctor_m1685433052 (serializableARSessionConfiguration_t1467016906 * __this, int32_t ___align0, int32_t ___planeDet1, bool ___getPtCloud2, bool ___enableLightEst3, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___align0;
		__this->set_alignment_0(L_0);
		int32_t L_1 = ___planeDet1;
		__this->set_planeDetection_1(L_1);
		bool L_2 = ___getPtCloud2;
		__this->set_getPointCloudData_2(L_2);
		bool L_3 = ___enableLightEst3;
		__this->set_enableLightEstimation_3(L_3);
		return;
	}
}
// Utils.serializableARSessionConfiguration Utils.serializableARSessionConfiguration::op_Implicit(UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration)
extern "C" IL2CPP_METHOD_ATTR serializableARSessionConfiguration_t1467016906 * serializableARSessionConfiguration_op_Implicit_m1556611494 (RuntimeObject * __this /* static, unused */, ARKitWorldTrackingSessionConfiguration_t273386347  ___awtsc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableARSessionConfiguration_op_Implicit_m1556611494_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (&___awtsc0)->get_alignment_0();
		int32_t L_1 = (&___awtsc0)->get_planeDetection_1();
		bool L_2 = (&___awtsc0)->get_getPointCloudData_2();
		bool L_3 = (&___awtsc0)->get_enableLightEstimation_3();
		serializableARSessionConfiguration_t1467016906 * L_4 = (serializableARSessionConfiguration_t1467016906 *)il2cpp_codegen_object_new(serializableARSessionConfiguration_t1467016906_il2cpp_TypeInfo_var);
		serializableARSessionConfiguration__ctor_m1685433052(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration Utils.serializableARSessionConfiguration::op_Implicit(Utils.serializableARSessionConfiguration)
extern "C" IL2CPP_METHOD_ATTR ARKitWorldTrackingSessionConfiguration_t273386347  serializableARSessionConfiguration_op_Implicit_m1847618679 (RuntimeObject * __this /* static, unused */, serializableARSessionConfiguration_t1467016906 * ___sasc0, const RuntimeMethod* method)
{
	{
		serializableARSessionConfiguration_t1467016906 * L_0 = ___sasc0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_alignment_0();
		serializableARSessionConfiguration_t1467016906 * L_2 = ___sasc0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_planeDetection_1();
		serializableARSessionConfiguration_t1467016906 * L_4 = ___sasc0;
		NullCheck(L_4);
		bool L_5 = L_4->get_getPointCloudData_2();
		serializableARSessionConfiguration_t1467016906 * L_6 = ___sasc0;
		NullCheck(L_6);
		bool L_7 = L_6->get_enableLightEstimation_3();
		ARKitWorldTrackingSessionConfiguration_t273386347  L_8;
		memset(&L_8, 0, sizeof(L_8));
		ARKitWorldTrackingSessionConfiguration__ctor_m2019856913((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
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
// System.Void Utils.serializableFromEditorMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void serializableFromEditorMessage__ctor_m2220754625 (serializableFromEditorMessage_t3245497382 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void Utils.serializablePointCloud::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializablePointCloud__ctor_m3190919572 (serializablePointCloud_t455238287 * __this, ByteU5BU5D_t4116647657* ___inputPoints0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___inputPoints0;
		__this->set_pointCloudData_0(L_0);
		return;
	}
}
// Utils.serializablePointCloud Utils.serializablePointCloud::op_Implicit(UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR serializablePointCloud_t455238287 * serializablePointCloud_op_Implicit_m463505948 (RuntimeObject * __this /* static, unused */, Vector3U5BU5D_t1718750761* ___vecPointCloud0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializablePointCloud_op_Implicit_m463505948_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Vector3U5BU5D_t1718750761* L_0 = ___vecPointCloud0;
		if (!L_0)
		{
			goto IL_008a;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_1 = ___vecPointCloud0;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), (int32_t)4)), (int32_t)3)));
		V_0 = L_2;
		V_1 = 0;
		goto IL_007a;
	}

IL_001a:
	{
		int32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)3));
		Vector3U5BU5D_t1718750761* L_4 = ___vecPointCloud0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_7 = BitConverter_GetBytes_m692533364(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_8 = V_0;
		int32_t L_9 = V_2;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_7, 0, (RuntimeArray *)(RuntimeArray *)L_8, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)4)), 4, /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_10 = ___vecPointCloud0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->get_y_3();
		ByteU5BU5D_t4116647657* L_13 = BitConverter_GetBytes_m692533364(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_14 = V_0;
		int32_t L_15 = V_2;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_13, 0, (RuntimeArray *)(RuntimeArray *)L_14, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)), (int32_t)4)), 4, /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_16 = ___vecPointCloud0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		float L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->get_z_4();
		ByteU5BU5D_t4116647657* L_19 = BitConverter_GetBytes_m692533364(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_20 = V_0;
		int32_t L_21 = V_2;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_19, 0, (RuntimeArray *)(RuntimeArray *)L_20, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)2)), (int32_t)4)), 4, /*hidden argument*/NULL);
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_007a:
	{
		int32_t L_23 = V_1;
		Vector3U5BU5D_t1718750761* L_24 = ___vecPointCloud0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_25 = V_0;
		serializablePointCloud_t455238287 * L_26 = (serializablePointCloud_t455238287 *)il2cpp_codegen_object_new(serializablePointCloud_t455238287_il2cpp_TypeInfo_var);
		serializablePointCloud__ctor_m3190919572(L_26, L_25, /*hidden argument*/NULL);
		return L_26;
	}

IL_008a:
	{
		serializablePointCloud_t455238287 * L_27 = (serializablePointCloud_t455238287 *)il2cpp_codegen_object_new(serializablePointCloud_t455238287_il2cpp_TypeInfo_var);
		serializablePointCloud__ctor_m3190919572(L_27, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, /*hidden argument*/NULL);
		return L_27;
	}
}
// UnityEngine.Vector3[] Utils.serializablePointCloud::op_Implicit(Utils.serializablePointCloud)
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_t1718750761* serializablePointCloud_op_Implicit_m1866692932 (RuntimeObject * __this /* static, unused */, serializablePointCloud_t455238287 * ___spc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializablePointCloud_op_Implicit_m1866692932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3U5BU5D_t1718750761* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		serializablePointCloud_t455238287 * L_0 = ___spc0;
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_1 = L_0->get_pointCloudData_0();
		if (!L_1)
		{
			goto IL_0088;
		}
	}
	{
		serializablePointCloud_t455238287 * L_2 = ___spc0;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_3 = L_2->get_pointCloudData_0();
		NullCheck(L_3);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))/(int32_t)((int32_t)12)));
		int32_t L_4 = V_0;
		Vector3U5BU5D_t1718750761* L_5 = (Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		V_2 = 0;
		goto IL_007f;
	}

IL_0025:
	{
		int32_t L_6 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)3));
		Vector3U5BU5D_t1718750761* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		serializablePointCloud_t455238287 * L_9 = ___spc0;
		NullCheck(L_9);
		ByteU5BU5D_t4116647657* L_10 = L_9->get_pointCloudData_0();
		int32_t L_11 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		float L_12 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_10, ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)4)), /*hidden argument*/NULL);
		((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->set_x_2(L_12);
		Vector3U5BU5D_t1718750761* L_13 = V_1;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		serializablePointCloud_t455238287 * L_15 = ___spc0;
		NullCheck(L_15);
		ByteU5BU5D_t4116647657* L_16 = L_15->get_pointCloudData_0();
		int32_t L_17 = V_3;
		float L_18 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_16, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)), (int32_t)4)), /*hidden argument*/NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->set_y_3(L_18);
		Vector3U5BU5D_t1718750761* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		serializablePointCloud_t455238287 * L_21 = ___spc0;
		NullCheck(L_21);
		ByteU5BU5D_t4116647657* L_22 = L_21->get_pointCloudData_0();
		int32_t L_23 = V_3;
		float L_24 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_22, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)2)), (int32_t)4)), /*hidden argument*/NULL);
		((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->set_z_4(L_24);
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_007f:
	{
		int32_t L_26 = V_2;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0025;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_28 = V_1;
		return L_28;
	}

IL_0088:
	{
		return (Vector3U5BU5D_t1718750761*)NULL;
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
// System.Void Utils.serializableSHC::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableSHC__ctor_m1921836760 (serializableSHC_t2667429767 * __this, ByteU5BU5D_t4116647657* ___inputSHCData0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___inputSHCData0;
		__this->set_shcData_0(L_0);
		return;
	}
}
// Utils.serializableSHC Utils.serializableSHC::op_Implicit(System.Single[])
extern "C" IL2CPP_METHOD_ATTR serializableSHC_t2667429767 * serializableSHC_op_Implicit_m2638304907 (RuntimeObject * __this /* static, unused */, SingleU5BU5D_t1444911251* ___floatsSHC0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableSHC_op_Implicit_m2638304907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	{
		SingleU5BU5D_t1444911251* L_0 = ___floatsSHC0;
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		SingleU5BU5D_t1444911251* L_1 = ___floatsSHC0;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), (int32_t)4)));
		V_0 = L_2;
		V_1 = 0;
		goto IL_002f;
	}

IL_0018:
	{
		SingleU5BU5D_t1444911251* L_3 = ___floatsSHC0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		float L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_7 = BitConverter_GetBytes_m692533364(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_8 = V_0;
		int32_t L_9 = V_1;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_7, 0, (RuntimeArray *)(RuntimeArray *)L_8, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)4)), 4, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002f:
	{
		int32_t L_11 = V_1;
		SingleU5BU5D_t1444911251* L_12 = ___floatsSHC0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_13 = V_0;
		serializableSHC_t2667429767 * L_14 = (serializableSHC_t2667429767 *)il2cpp_codegen_object_new(serializableSHC_t2667429767_il2cpp_TypeInfo_var);
		serializableSHC__ctor_m1921836760(L_14, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_003f:
	{
		serializableSHC_t2667429767 * L_15 = (serializableSHC_t2667429767 *)il2cpp_codegen_object_new(serializableSHC_t2667429767_il2cpp_TypeInfo_var);
		serializableSHC__ctor_m1921836760(L_15, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Single[] Utils.serializableSHC::op_Implicit(Utils.serializableSHC)
extern "C" IL2CPP_METHOD_ATTR SingleU5BU5D_t1444911251* serializableSHC_op_Implicit_m465874179 (RuntimeObject * __this /* static, unused */, serializableSHC_t2667429767 * ___spc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableSHC_op_Implicit_m465874179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SingleU5BU5D_t1444911251* V_1 = NULL;
	int32_t V_2 = 0;
	{
		serializableSHC_t2667429767 * L_0 = ___spc0;
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_1 = L_0->get_shcData_0();
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		serializableSHC_t2667429767 * L_2 = ___spc0;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_3 = L_2->get_shcData_0();
		NullCheck(L_3);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))/(int32_t)4));
		int32_t L_4 = V_0;
		SingleU5BU5D_t1444911251* L_5 = (SingleU5BU5D_t1444911251*)SZArrayNew(SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0039;
	}

IL_0024:
	{
		SingleU5BU5D_t1444911251* L_6 = V_1;
		int32_t L_7 = V_2;
		serializableSHC_t2667429767 * L_8 = ___spc0;
		NullCheck(L_8);
		ByteU5BU5D_t4116647657* L_9 = L_8->get_shcData_0();
		int32_t L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		float L_11 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_9, ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)4)), /*hidden argument*/NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (float)L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0024;
		}
	}
	{
		SingleU5BU5D_t1444911251* L_15 = V_1;
		return L_15;
	}

IL_0042:
	{
		return (SingleU5BU5D_t1444911251*)NULL;
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
// System.Void Utils.serializableUnityARCamera::.ctor(Utils.serializableUnityARMatrix4x4,Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.ARTrackingState,UnityEngine.XR.iOS.ARTrackingStateReason,UnityEngine.XR.iOS.UnityVideoParams,UnityEngine.XR.iOS.UnityARLightData,Utils.serializableUnityARMatrix4x4,Utils.serializablePointCloud)
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARCamera__ctor_m992171076 (serializableUnityARCamera_t4158151215 * __this, serializableUnityARMatrix4x4_t78255337 * ___wt0, serializableUnityARMatrix4x4_t78255337 * ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t4155354995  ___uvp4, UnityARLightData_t2160616730  ___lightDat5, serializableUnityARMatrix4x4_t78255337 * ___dt6, serializablePointCloud_t455238287 * ___spc7, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_0 = ___wt0;
		__this->set_worldTransform_0(L_0);
		serializableUnityARMatrix4x4_t78255337 * L_1 = ___pm1;
		__this->set_projectionMatrix_1(L_1);
		int32_t L_2 = ___ats2;
		__this->set_trackingState_2(L_2);
		int32_t L_3 = ___atsr3;
		__this->set_trackingReason_3(L_3);
		UnityVideoParams_t4155354995  L_4 = ___uvp4;
		__this->set_videoParams_4(L_4);
		UnityARLightData_t2160616730  L_5 = ___lightDat5;
		serializableUnityARLightData_t3935513283 * L_6 = serializableUnityARLightData_op_Implicit_m1050232524(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->set_lightData_5(L_6);
		serializableUnityARMatrix4x4_t78255337 * L_7 = ___dt6;
		__this->set_displayTransform_7(L_7);
		serializablePointCloud_t455238287 * L_8 = ___spc7;
		__this->set_pointCloud_6(L_8);
		return;
	}
}
// Utils.serializableUnityARCamera Utils.serializableUnityARCamera::op_Implicit(UnityEngine.XR.iOS.UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARCamera_t4158151215 * serializableUnityARCamera_op_Implicit_m1598722366 (RuntimeObject * __this /* static, unused */, UnityARCamera_t2069150450  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARCamera_op_Implicit_m1598722366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityARMatrix4x4_t4073345847  L_0 = (&___rValue0)->get_worldTransform_0();
		serializableUnityARMatrix4x4_t78255337 * L_1 = serializableUnityARMatrix4x4_op_Implicit_m3630501456(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		UnityARMatrix4x4_t4073345847  L_2 = (&___rValue0)->get_projectionMatrix_1();
		serializableUnityARMatrix4x4_t78255337 * L_3 = serializableUnityARMatrix4x4_op_Implicit_m3630501456(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		int32_t L_4 = (&___rValue0)->get_trackingState_2();
		int32_t L_5 = (&___rValue0)->get_trackingReason_3();
		UnityVideoParams_t4155354995  L_6 = (&___rValue0)->get_videoParams_4();
		UnityARLightData_t2160616730  L_7 = (&___rValue0)->get_lightData_5();
		UnityARMatrix4x4_t4073345847  L_8 = (&___rValue0)->get_displayTransform_6();
		serializableUnityARMatrix4x4_t78255337 * L_9 = serializableUnityARMatrix4x4_op_Implicit_m3630501456(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_10 = (&___rValue0)->get_pointCloudData_7();
		serializablePointCloud_t455238287 * L_11 = serializablePointCloud_op_Implicit_m463505948(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		serializableUnityARCamera_t4158151215 * L_12 = (serializableUnityARCamera_t4158151215 *)il2cpp_codegen_object_new(serializableUnityARCamera_t4158151215_il2cpp_TypeInfo_var);
		serializableUnityARCamera__ctor_m992171076(L_12, L_1, L_3, L_4, L_5, L_6, L_7, L_9, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.XR.iOS.UnityARCamera Utils.serializableUnityARCamera::op_Implicit(Utils.serializableUnityARCamera)
extern "C" IL2CPP_METHOD_ATTR UnityARCamera_t2069150450  serializableUnityARCamera_op_Implicit_m2839687167 (RuntimeObject * __this /* static, unused */, serializableUnityARCamera_t4158151215 * ___rValue0, const RuntimeMethod* method)
{
	{
		serializableUnityARCamera_t4158151215 * L_0 = ___rValue0;
		NullCheck(L_0);
		serializableUnityARMatrix4x4_t78255337 * L_1 = L_0->get_worldTransform_0();
		UnityARMatrix4x4_t4073345847  L_2 = serializableUnityARMatrix4x4_op_Implicit_m2311882771(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		serializableUnityARCamera_t4158151215 * L_3 = ___rValue0;
		NullCheck(L_3);
		serializableUnityARMatrix4x4_t78255337 * L_4 = L_3->get_projectionMatrix_1();
		UnityARMatrix4x4_t4073345847  L_5 = serializableUnityARMatrix4x4_op_Implicit_m2311882771(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		serializableUnityARCamera_t4158151215 * L_6 = ___rValue0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_trackingState_2();
		serializableUnityARCamera_t4158151215 * L_8 = ___rValue0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_trackingReason_3();
		serializableUnityARCamera_t4158151215 * L_10 = ___rValue0;
		NullCheck(L_10);
		UnityVideoParams_t4155354995  L_11 = L_10->get_videoParams_4();
		serializableUnityARCamera_t4158151215 * L_12 = ___rValue0;
		NullCheck(L_12);
		serializableUnityARLightData_t3935513283 * L_13 = L_12->get_lightData_5();
		UnityARLightData_t2160616730  L_14 = serializableUnityARLightData_op_Implicit_m3789143495(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		serializableUnityARCamera_t4158151215 * L_15 = ___rValue0;
		NullCheck(L_15);
		serializableUnityARMatrix4x4_t78255337 * L_16 = L_15->get_displayTransform_7();
		UnityARMatrix4x4_t4073345847  L_17 = serializableUnityARMatrix4x4_op_Implicit_m2311882771(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		serializableUnityARCamera_t4158151215 * L_18 = ___rValue0;
		NullCheck(L_18);
		serializablePointCloud_t455238287 * L_19 = L_18->get_pointCloud_6();
		Vector3U5BU5D_t1718750761* L_20 = serializablePointCloud_op_Implicit_m1866692932(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		UnityARCamera_t2069150450  L_21;
		memset(&L_21, 0, sizeof(L_21));
		UnityARCamera__ctor_m3730109421((&L_21), L_2, L_5, L_7, L_9, L_11, L_14, L_17, L_20, /*hidden argument*/NULL);
		return L_21;
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
// System.Void Utils.serializableUnityARLightData::.ctor(UnityEngine.XR.iOS.UnityARLightData)
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARLightData__ctor_m2554290283 (serializableUnityARLightData_t3935513283 * __this, UnityARLightData_t2160616730  ___lightData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARLightData__ctor_m2554290283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = (&___lightData0)->get_arLightingType_0();
		__this->set_whichLight_0(L_0);
		int32_t L_1 = __this->get_whichLight_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0076;
		}
	}
	{
		UnityARDirectionalLightEstimate_t2924556994 * L_2 = (&___lightData0)->get_arDirectonalLightEstimate_2();
		NullCheck(L_2);
		SingleU5BU5D_t1444911251* L_3 = L_2->get_sphericalHarmonicsCoefficients_2();
		serializableSHC_t2667429767 * L_4 = serializableSHC_op_Implicit_m2638304907(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->set_lightSHC_1(L_4);
		UnityARDirectionalLightEstimate_t2924556994 * L_5 = (&___lightData0)->get_arDirectonalLightEstimate_2();
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = L_5->get_primaryLightDirection_0();
		V_0 = L_6;
		UnityARDirectionalLightEstimate_t2924556994 * L_7 = (&___lightData0)->get_arDirectonalLightEstimate_2();
		NullCheck(L_7);
		float L_8 = L_7->get_primaryLightIntensity_1();
		V_1 = L_8;
		float L_9 = (&V_0)->get_x_2();
		float L_10 = (&V_0)->get_y_3();
		float L_11 = (&V_0)->get_z_4();
		float L_12 = V_1;
		SerializableVector4_t1862640084 * L_13 = (SerializableVector4_t1862640084 *)il2cpp_codegen_object_new(SerializableVector4_t1862640084_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m3231681896(L_13, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		__this->set_primaryLightDirAndIntensity_2(L_13);
		goto IL_009a;
	}

IL_0076:
	{
		UnityARLightEstimate_t1498306117 * L_14 = (&___lightData0)->get_address_of_arLightEstimate_1();
		float L_15 = L_14->get_ambientIntensity_0();
		__this->set_ambientIntensity_3(L_15);
		UnityARLightEstimate_t1498306117 * L_16 = (&___lightData0)->get_address_of_arLightEstimate_1();
		float L_17 = L_16->get_ambientColorTemperature_1();
		__this->set_ambientColorTemperature_4(L_17);
	}

IL_009a:
	{
		return;
	}
}
// Utils.serializableUnityARLightData Utils.serializableUnityARLightData::op_Implicit(UnityEngine.XR.iOS.UnityARLightData)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARLightData_t3935513283 * serializableUnityARLightData_op_Implicit_m1050232524 (RuntimeObject * __this /* static, unused */, UnityARLightData_t2160616730  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARLightData_op_Implicit_m1050232524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityARLightData_t2160616730  L_0 = ___rValue0;
		serializableUnityARLightData_t3935513283 * L_1 = (serializableUnityARLightData_t3935513283 *)il2cpp_codegen_object_new(serializableUnityARLightData_t3935513283_il2cpp_TypeInfo_var);
		serializableUnityARLightData__ctor_m2554290283(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.XR.iOS.UnityARLightData Utils.serializableUnityARLightData::op_Implicit(Utils.serializableUnityARLightData)
extern "C" IL2CPP_METHOD_ATTR UnityARLightData_t2160616730  serializableUnityARLightData_op_Implicit_m3789143495 (RuntimeObject * __this /* static, unused */, serializableUnityARLightData_t3935513283 * ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARLightData_op_Implicit_m3789143495_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityARDirectionalLightEstimate_t2924556994 * V_0 = NULL;
	UnityARLightEstimate_t1498306117  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = (UnityARDirectionalLightEstimate_t2924556994 *)NULL;
		serializableUnityARLightData_t3935513283 * L_0 = ___rValue0;
		NullCheck(L_0);
		float L_1 = L_0->get_ambientIntensity_3();
		serializableUnityARLightData_t3935513283 * L_2 = ___rValue0;
		NullCheck(L_2);
		float L_3 = L_2->get_ambientColorTemperature_4();
		UnityARLightEstimate__ctor_m1412967459((UnityARLightEstimate_t1498306117 *)(&V_1), L_1, L_3, /*hidden argument*/NULL);
		serializableUnityARLightData_t3935513283 * L_4 = ___rValue0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_whichLight_0();
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0066;
		}
	}
	{
		serializableUnityARLightData_t3935513283 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t1862640084 * L_7 = L_6->get_primaryLightDirAndIntensity_2();
		NullCheck(L_7);
		float L_8 = L_7->get_x_0();
		serializableUnityARLightData_t3935513283 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t1862640084 * L_10 = L_9->get_primaryLightDirAndIntensity_2();
		NullCheck(L_10);
		float L_11 = L_10->get_y_1();
		serializableUnityARLightData_t3935513283 * L_12 = ___rValue0;
		NullCheck(L_12);
		SerializableVector4_t1862640084 * L_13 = L_12->get_primaryLightDirAndIntensity_2();
		NullCheck(L_13);
		float L_14 = L_13->get_z_2();
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_2), L_8, L_11, L_14, /*hidden argument*/NULL);
		serializableUnityARLightData_t3935513283 * L_15 = ___rValue0;
		NullCheck(L_15);
		serializableSHC_t2667429767 * L_16 = L_15->get_lightSHC_1();
		SingleU5BU5D_t1444911251* L_17 = serializableSHC_op_Implicit_m465874179(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = V_2;
		serializableUnityARLightData_t3935513283 * L_19 = ___rValue0;
		NullCheck(L_19);
		SerializableVector4_t1862640084 * L_20 = L_19->get_primaryLightDirAndIntensity_2();
		NullCheck(L_20);
		float L_21 = L_20->get_w_3();
		UnityARDirectionalLightEstimate_t2924556994 * L_22 = (UnityARDirectionalLightEstimate_t2924556994 *)il2cpp_codegen_object_new(UnityARDirectionalLightEstimate_t2924556994_il2cpp_TypeInfo_var);
		UnityARDirectionalLightEstimate__ctor_m3248127264(L_22, L_17, L_18, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
	}

IL_0066:
	{
		serializableUnityARLightData_t3935513283 * L_23 = ___rValue0;
		NullCheck(L_23);
		int32_t L_24 = L_23->get_whichLight_0();
		UnityARLightEstimate_t1498306117  L_25 = V_1;
		UnityARDirectionalLightEstimate_t2924556994 * L_26 = V_0;
		UnityARLightData_t2160616730  L_27;
		memset(&L_27, 0, sizeof(L_27));
		UnityARLightData__ctor_m4238079321((&L_27), L_24, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
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
// System.Void Utils.serializableUnityARMatrix4x4::.ctor(Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4)
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARMatrix4x4__ctor_m3496280910 (serializableUnityARMatrix4x4_t78255337 * __this, SerializableVector4_t1862640084 * ___v00, SerializableVector4_t1862640084 * ___v11, SerializableVector4_t1862640084 * ___v22, SerializableVector4_t1862640084 * ___v33, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		SerializableVector4_t1862640084 * L_0 = ___v00;
		__this->set_column0_0(L_0);
		SerializableVector4_t1862640084 * L_1 = ___v11;
		__this->set_column1_1(L_1);
		SerializableVector4_t1862640084 * L_2 = ___v22;
		__this->set_column2_2(L_2);
		SerializableVector4_t1862640084 * L_3 = ___v33;
		__this->set_column3_3(L_3);
		return;
	}
}
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.XR.iOS.UnityARMatrix4x4)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARMatrix4x4_t78255337 * serializableUnityARMatrix4x4_op_Implicit_m3630501456 (RuntimeObject * __this /* static, unused */, UnityARMatrix4x4_t4073345847  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARMatrix4x4_op_Implicit_m3630501456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t3319028937  L_0 = (&___rValue0)->get_column0_0();
		SerializableVector4_t1862640084 * L_1 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Vector4_t3319028937  L_2 = (&___rValue0)->get_column1_1();
		SerializableVector4_t1862640084 * L_3 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Vector4_t3319028937  L_4 = (&___rValue0)->get_column2_2();
		SerializableVector4_t1862640084 * L_5 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Vector4_t3319028937  L_6 = (&___rValue0)->get_column3_3();
		SerializableVector4_t1862640084 * L_7 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_8 = (serializableUnityARMatrix4x4_t78255337 *)il2cpp_codegen_object_new(serializableUnityARMatrix4x4_t78255337_il2cpp_TypeInfo_var);
		serializableUnityARMatrix4x4__ctor_m3496280910(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.XR.iOS.UnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
extern "C" IL2CPP_METHOD_ATTR UnityARMatrix4x4_t4073345847  serializableUnityARMatrix4x4_op_Implicit_m2311882771 (RuntimeObject * __this /* static, unused */, serializableUnityARMatrix4x4_t78255337 * ___rValue0, const RuntimeMethod* method)
{
	{
		serializableUnityARMatrix4x4_t78255337 * L_0 = ___rValue0;
		NullCheck(L_0);
		SerializableVector4_t1862640084 * L_1 = L_0->get_column0_0();
		Vector4_t3319028937  L_2 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_3 = ___rValue0;
		NullCheck(L_3);
		SerializableVector4_t1862640084 * L_4 = L_3->get_column1_1();
		Vector4_t3319028937  L_5 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t1862640084 * L_7 = L_6->get_column2_2();
		Vector4_t3319028937  L_8 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t1862640084 * L_10 = L_9->get_column3_3();
		Vector4_t3319028937  L_11 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		UnityARMatrix4x4_t4073345847  L_12;
		memset(&L_12, 0, sizeof(L_12));
		UnityARMatrix4x4__ctor_m3835909947((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARMatrix4x4_t78255337 * serializableUnityARMatrix4x4_op_Implicit_m3556108972 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARMatrix4x4_op_Implicit_m3556108972_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t3319028937  L_0 = Matrix4x4_GetColumn_m461504848((Matrix4x4_t1817901843 *)(&___rValue0), 0, /*hidden argument*/NULL);
		SerializableVector4_t1862640084 * L_1 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Vector4_t3319028937  L_2 = Matrix4x4_GetColumn_m461504848((Matrix4x4_t1817901843 *)(&___rValue0), 1, /*hidden argument*/NULL);
		SerializableVector4_t1862640084 * L_3 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Vector4_t3319028937  L_4 = Matrix4x4_GetColumn_m461504848((Matrix4x4_t1817901843 *)(&___rValue0), 2, /*hidden argument*/NULL);
		SerializableVector4_t1862640084 * L_5 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Vector4_t3319028937  L_6 = Matrix4x4_GetColumn_m461504848((Matrix4x4_t1817901843 *)(&___rValue0), 3, /*hidden argument*/NULL);
		SerializableVector4_t1862640084 * L_7 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_8 = (serializableUnityARMatrix4x4_t78255337 *)il2cpp_codegen_object_new(serializableUnityARMatrix4x4_t78255337_il2cpp_TypeInfo_var);
		serializableUnityARMatrix4x4__ctor_m3496280910(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Matrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  serializableUnityARMatrix4x4_op_Implicit_m456506418 (RuntimeObject * __this /* static, unused */, serializableUnityARMatrix4x4_t78255337 * ___rValue0, const RuntimeMethod* method)
{
	{
		serializableUnityARMatrix4x4_t78255337 * L_0 = ___rValue0;
		NullCheck(L_0);
		SerializableVector4_t1862640084 * L_1 = L_0->get_column0_0();
		Vector4_t3319028937  L_2 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_3 = ___rValue0;
		NullCheck(L_3);
		SerializableVector4_t1862640084 * L_4 = L_3->get_column1_1();
		Vector4_t3319028937  L_5 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t1862640084 * L_7 = L_6->get_column2_2();
		Vector4_t3319028937  L_8 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t1862640084 * L_10 = L_9->get_column3_3();
		Vector4_t3319028937  L_11 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		Matrix4x4_t1817901843  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Matrix4x4__ctor_m53065545((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
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
// System.Void Utils.serializableUnityARPlaneAnchor::.ctor(Utils.serializableUnityARMatrix4x4,Utils.SerializableVector4,Utils.SerializableVector4,UnityEngine.XR.iOS.ARPlaneAnchorAlignment,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARPlaneAnchor__ctor_m182203902 (serializableUnityARPlaneAnchor_t1446774435 * __this, serializableUnityARMatrix4x4_t78255337 * ___wt0, SerializableVector4_t1862640084 * ___ctr1, SerializableVector4_t1862640084 * ___ext2, int64_t ___apaa3, ByteU5BU5D_t4116647657* ___idstr4, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_0 = ___wt0;
		__this->set_worldTransform_0(L_0);
		SerializableVector4_t1862640084 * L_1 = ___ctr1;
		__this->set_center_1(L_1);
		SerializableVector4_t1862640084 * L_2 = ___ext2;
		__this->set_extent_2(L_2);
		int64_t L_3 = ___apaa3;
		__this->set_planeAlignment_3(L_3);
		ByteU5BU5D_t4116647657* L_4 = ___idstr4;
		__this->set_identifierStr_4(L_4);
		return;
	}
}
// Utils.serializableUnityARPlaneAnchor Utils.serializableUnityARPlaneAnchor::op_Implicit(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARPlaneAnchor_t1446774435 * serializableUnityARPlaneAnchor_op_Implicit_m57666075 (RuntimeObject * __this /* static, unused */, ARPlaneAnchor_t2049372221  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARPlaneAnchor_op_Implicit_m57666075_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	serializableUnityARMatrix4x4_t78255337 * V_0 = NULL;
	SerializableVector4_t1862640084 * V_1 = NULL;
	SerializableVector4_t1862640084 * V_2 = NULL;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	{
		Matrix4x4_t1817901843  L_0 = (&___rValue0)->get_transform_1();
		serializableUnityARMatrix4x4_t78255337 * L_1 = serializableUnityARMatrix4x4_op_Implicit_m3556108972(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_t3722313464 * L_2 = (&___rValue0)->get_address_of_center_3();
		float L_3 = L_2->get_x_2();
		Vector3_t3722313464 * L_4 = (&___rValue0)->get_address_of_center_3();
		float L_5 = L_4->get_y_3();
		Vector3_t3722313464 * L_6 = (&___rValue0)->get_address_of_center_3();
		float L_7 = L_6->get_z_4();
		SerializableVector4_t1862640084 * L_8 = (SerializableVector4_t1862640084 *)il2cpp_codegen_object_new(SerializableVector4_t1862640084_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m3231681896(L_8, L_3, L_5, L_7, (1.0f), /*hidden argument*/NULL);
		V_1 = L_8;
		Vector3_t3722313464 * L_9 = (&___rValue0)->get_address_of_extent_4();
		float L_10 = L_9->get_x_2();
		Vector3_t3722313464 * L_11 = (&___rValue0)->get_address_of_extent_4();
		float L_12 = L_11->get_y_3();
		Vector3_t3722313464 * L_13 = (&___rValue0)->get_address_of_extent_4();
		float L_14 = L_13->get_z_4();
		SerializableVector4_t1862640084 * L_15 = (SerializableVector4_t1862640084 *)il2cpp_codegen_object_new(SerializableVector4_t1862640084_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m3231681896(L_15, L_10, L_12, L_14, (1.0f), /*hidden argument*/NULL);
		V_2 = L_15;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_16 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_17 = (&___rValue0)->get_identifier_0();
		NullCheck(L_16);
		ByteU5BU5D_t4116647657* L_18 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_16, L_17);
		V_3 = L_18;
		serializableUnityARMatrix4x4_t78255337 * L_19 = V_0;
		SerializableVector4_t1862640084 * L_20 = V_1;
		SerializableVector4_t1862640084 * L_21 = V_2;
		int64_t L_22 = (&___rValue0)->get_alignment_2();
		ByteU5BU5D_t4116647657* L_23 = V_3;
		serializableUnityARPlaneAnchor_t1446774435 * L_24 = (serializableUnityARPlaneAnchor_t1446774435 *)il2cpp_codegen_object_new(serializableUnityARPlaneAnchor_t1446774435_il2cpp_TypeInfo_var);
		serializableUnityARPlaneAnchor__ctor_m182203902(L_24, L_19, L_20, L_21, L_22, L_23, /*hidden argument*/NULL);
		return L_24;
	}
}
// UnityEngine.XR.iOS.ARPlaneAnchor Utils.serializableUnityARPlaneAnchor::op_Implicit(Utils.serializableUnityARPlaneAnchor)
extern "C" IL2CPP_METHOD_ATTR ARPlaneAnchor_t2049372221  serializableUnityARPlaneAnchor_op_Implicit_m217596632 (RuntimeObject * __this /* static, unused */, serializableUnityARPlaneAnchor_t1446774435 * ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARPlaneAnchor_op_Implicit_m217596632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARPlaneAnchor_t2049372221  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_0 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		serializableUnityARPlaneAnchor_t1446774435 * L_1 = ___rValue0;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = L_1->get_identifierStr_4();
		NullCheck(L_0);
		String_t* L_3 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(23 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_2);
		(&V_0)->set_identifier_0(L_3);
		serializableUnityARPlaneAnchor_t1446774435 * L_4 = ___rValue0;
		NullCheck(L_4);
		SerializableVector4_t1862640084 * L_5 = L_4->get_center_1();
		NullCheck(L_5);
		float L_6 = L_5->get_x_0();
		serializableUnityARPlaneAnchor_t1446774435 * L_7 = ___rValue0;
		NullCheck(L_7);
		SerializableVector4_t1862640084 * L_8 = L_7->get_center_1();
		NullCheck(L_8);
		float L_9 = L_8->get_y_1();
		serializableUnityARPlaneAnchor_t1446774435 * L_10 = ___rValue0;
		NullCheck(L_10);
		SerializableVector4_t1862640084 * L_11 = L_10->get_center_1();
		NullCheck(L_11);
		float L_12 = L_11->get_z_2();
		Vector3_t3722313464  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m3353183577((&L_13), L_6, L_9, L_12, /*hidden argument*/NULL);
		(&V_0)->set_center_3(L_13);
		serializableUnityARPlaneAnchor_t1446774435 * L_14 = ___rValue0;
		NullCheck(L_14);
		SerializableVector4_t1862640084 * L_15 = L_14->get_extent_2();
		NullCheck(L_15);
		float L_16 = L_15->get_x_0();
		serializableUnityARPlaneAnchor_t1446774435 * L_17 = ___rValue0;
		NullCheck(L_17);
		SerializableVector4_t1862640084 * L_18 = L_17->get_extent_2();
		NullCheck(L_18);
		float L_19 = L_18->get_y_1();
		serializableUnityARPlaneAnchor_t1446774435 * L_20 = ___rValue0;
		NullCheck(L_20);
		SerializableVector4_t1862640084 * L_21 = L_20->get_extent_2();
		NullCheck(L_21);
		float L_22 = L_21->get_z_2();
		Vector3_t3722313464  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector3__ctor_m3353183577((&L_23), L_16, L_19, L_22, /*hidden argument*/NULL);
		(&V_0)->set_extent_4(L_23);
		serializableUnityARPlaneAnchor_t1446774435 * L_24 = ___rValue0;
		NullCheck(L_24);
		int64_t L_25 = L_24->get_planeAlignment_3();
		(&V_0)->set_alignment_2(L_25);
		serializableUnityARPlaneAnchor_t1446774435 * L_26 = ___rValue0;
		NullCheck(L_26);
		serializableUnityARMatrix4x4_t78255337 * L_27 = L_26->get_worldTransform_0();
		Matrix4x4_t1817901843  L_28 = serializableUnityARMatrix4x4_op_Implicit_m456506418(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		(&V_0)->set_transform_1(L_28);
		ARPlaneAnchor_t2049372221  L_29 = V_0;
		return L_29;
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
// System.Void VectorDataFetcher::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VectorDataFetcher__ctor_m1051421980 (VectorDataFetcher_t932344282 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorDataFetcher__ctor_m1051421980_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VectorDataFetcher_t932344282 * G_B2_0 = NULL;
	VectorDataFetcher_t932344282 * G_B1_0 = NULL;
	VectorDataFetcher_t932344282 * G_B4_0 = NULL;
	VectorDataFetcher_t932344282 * G_B3_0 = NULL;
	{
		Action_2_t3936036094 * L_0 = ((VectorDataFetcher_t932344282_StaticFields*)il2cpp_codegen_static_fields_for(VectorDataFetcher_t932344282_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_7();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)VectorDataFetcher_U3CDataRecievedU3Em__0_m387369038_RuntimeMethod_var;
		Action_2_t3936036094 * L_2 = (Action_2_t3936036094 *)il2cpp_codegen_object_new(Action_2_t3936036094_il2cpp_TypeInfo_var);
		Action_2__ctor_m3245614058(L_2, NULL, L_1, /*hidden argument*/Action_2__ctor_m3245614058_RuntimeMethod_var);
		((VectorDataFetcher_t932344282_StaticFields*)il2cpp_codegen_static_fields_for(VectorDataFetcher_t932344282_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_7(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		Action_2_t3936036094 * L_3 = ((VectorDataFetcher_t932344282_StaticFields*)il2cpp_codegen_static_fields_for(VectorDataFetcher_t932344282_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_7();
		NullCheck(G_B2_0);
		G_B2_0->set_DataRecieved_5(L_3);
		Action_3_t1202789066 * L_4 = ((VectorDataFetcher_t932344282_StaticFields*)il2cpp_codegen_static_fields_for(VectorDataFetcher_t932344282_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_8();
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_003c;
		}
	}
	{
		intptr_t L_5 = (intptr_t)VectorDataFetcher_U3CFetchingErrorU3Em__1_m385984410_RuntimeMethod_var;
		Action_3_t1202789066 * L_6 = (Action_3_t1202789066 *)il2cpp_codegen_object_new(Action_3_t1202789066_il2cpp_TypeInfo_var);
		Action_3__ctor_m245262623(L_6, NULL, L_5, /*hidden argument*/Action_3__ctor_m245262623_RuntimeMethod_var);
		((VectorDataFetcher_t932344282_StaticFields*)il2cpp_codegen_static_fields_for(VectorDataFetcher_t932344282_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_8(L_6);
		G_B4_0 = G_B3_0;
	}

IL_003c:
	{
		Action_3_t1202789066 * L_7 = ((VectorDataFetcher_t932344282_StaticFields*)il2cpp_codegen_static_fields_for(VectorDataFetcher_t932344282_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_8();
		NullCheck(G_B4_0);
		G_B4_0->set_FetchingError_6(L_7);
		DataFetcher__ctor_m3595091311(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VectorDataFetcher::FetchData(DataFetcherParameters)
extern "C" IL2CPP_METHOD_ATTR void VectorDataFetcher_FetchData_m3939290115 (VectorDataFetcher_t932344282 * __this, DataFetcherParameters_t4072360282 * ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorDataFetcher_FetchData_m3939290115_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CFetchDataU3Ec__AnonStorey0_t1155300966 * V_0 = NULL;
	U3CFetchDataU3Ec__AnonStorey0_t1155300966 * G_B4_0 = NULL;
	U3CFetchDataU3Ec__AnonStorey0_t1155300966 * G_B3_0 = NULL;
	VectorTile_t4284514353 * G_B5_0 = NULL;
	U3CFetchDataU3Ec__AnonStorey0_t1155300966 * G_B5_1 = NULL;
	{
		U3CFetchDataU3Ec__AnonStorey0_t1155300966 * L_0 = (U3CFetchDataU3Ec__AnonStorey0_t1155300966 *)il2cpp_codegen_object_new(U3CFetchDataU3Ec__AnonStorey0_t1155300966_il2cpp_TypeInfo_var);
		U3CFetchDataU3Ec__AnonStorey0__ctor_m3199237040(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFetchDataU3Ec__AnonStorey0_t1155300966 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_2(__this);
		U3CFetchDataU3Ec__AnonStorey0_t1155300966 * L_2 = V_0;
		DataFetcherParameters_t4072360282 * L_3 = ___parameters0;
		NullCheck(L_2);
		L_2->set_vectorDaraParameters_0(((VectorDataFetcherParameters_t1168113904 *)IsInstClass((RuntimeObject*)L_3, VectorDataFetcherParameters_t1168113904_il2cpp_TypeInfo_var)));
		U3CFetchDataU3Ec__AnonStorey0_t1155300966 * L_4 = V_0;
		NullCheck(L_4);
		VectorDataFetcherParameters_t1168113904 * L_5 = L_4->get_vectorDaraParameters_0();
		if (L_5)
		{
			goto IL_0025;
		}
	}
	{
		return;
	}

IL_0025:
	{
		U3CFetchDataU3Ec__AnonStorey0_t1155300966 * L_6 = V_0;
		U3CFetchDataU3Ec__AnonStorey0_t1155300966 * L_7 = V_0;
		NullCheck(L_7);
		VectorDataFetcherParameters_t1168113904 * L_8 = L_7->get_vectorDaraParameters_0();
		NullCheck(L_8);
		bool L_9 = L_8->get_useOptimizedStyle_3();
		G_B3_0 = L_6;
		if (!L_9)
		{
			G_B4_0 = L_6;
			goto IL_0060;
		}
	}
	{
		U3CFetchDataU3Ec__AnonStorey0_t1155300966 * L_10 = V_0;
		NullCheck(L_10);
		VectorDataFetcherParameters_t1168113904 * L_11 = L_10->get_vectorDaraParameters_0();
		NullCheck(L_11);
		Style_t3654124703 * L_12 = L_11->get_style_4();
		NullCheck(L_12);
		String_t* L_13 = L_12->get_Id_1();
		U3CFetchDataU3Ec__AnonStorey0_t1155300966 * L_14 = V_0;
		NullCheck(L_14);
		VectorDataFetcherParameters_t1168113904 * L_15 = L_14->get_vectorDaraParameters_0();
		NullCheck(L_15);
		Style_t3654124703 * L_16 = L_15->get_style_4();
		NullCheck(L_16);
		String_t* L_17 = L_16->get_Modified_2();
		VectorTile_t4284514353 * L_18 = (VectorTile_t4284514353 *)il2cpp_codegen_object_new(VectorTile_t4284514353_il2cpp_TypeInfo_var);
		VectorTile__ctor_m3869536636(L_18, L_13, L_17, /*hidden argument*/NULL);
		G_B5_0 = L_18;
		G_B5_1 = G_B3_0;
		goto IL_0065;
	}

IL_0060:
	{
		VectorTile_t4284514353 * L_19 = (VectorTile_t4284514353 *)il2cpp_codegen_object_new(VectorTile_t4284514353_il2cpp_TypeInfo_var);
		VectorTile__ctor_m1060793044(L_19, /*hidden argument*/NULL);
		G_B5_0 = L_19;
		G_B5_1 = G_B4_0;
	}

IL_0065:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_vectorTile_1(G_B5_0);
		U3CFetchDataU3Ec__AnonStorey0_t1155300966 * L_20 = V_0;
		NullCheck(L_20);
		VectorDataFetcherParameters_t1168113904 * L_21 = L_20->get_vectorDaraParameters_0();
		NullCheck(L_21);
		UnityTile_t2405085845 * L_22 = ((DataFetcherParameters_t4072360282 *)L_21)->get_tile_2();
		U3CFetchDataU3Ec__AnonStorey0_t1155300966 * L_23 = V_0;
		NullCheck(L_23);
		VectorTile_t4284514353 * L_24 = L_23->get_vectorTile_1();
		NullCheck(L_22);
		UnityTile_AddTile_m2551386100(L_22, L_24, /*hidden argument*/NULL);
		U3CFetchDataU3Ec__AnonStorey0_t1155300966 * L_25 = V_0;
		NullCheck(L_25);
		VectorTile_t4284514353 * L_26 = L_25->get_vectorTile_1();
		MapboxAccess_t3460807032 * L_27 = ((DataFetcher_t164261030 *)__this)->get__fileSource_4();
		U3CFetchDataU3Ec__AnonStorey0_t1155300966 * L_28 = V_0;
		NullCheck(L_28);
		VectorDataFetcherParameters_t1168113904 * L_29 = L_28->get_vectorDaraParameters_0();
		NullCheck(L_29);
		UnityTile_t2405085845 * L_30 = ((DataFetcherParameters_t4072360282 *)L_29)->get_tile_2();
		NullCheck(L_30);
		CanonicalTileId_t4184902996  L_31 = UnityTile_get_CanonicalTileId_m1261252210(L_30, /*hidden argument*/NULL);
		U3CFetchDataU3Ec__AnonStorey0_t1155300966 * L_32 = V_0;
		NullCheck(L_32);
		VectorDataFetcherParameters_t1168113904 * L_33 = L_32->get_vectorDaraParameters_0();
		NullCheck(L_33);
		String_t* L_34 = ((DataFetcherParameters_t4072360282 *)L_33)->get_mapid_1();
		U3CFetchDataU3Ec__AnonStorey0_t1155300966 * L_35 = V_0;
		intptr_t L_36 = (intptr_t)U3CFetchDataU3Ec__AnonStorey0_U3CU3Em__0_m1371082452_RuntimeMethod_var;
		Action_t1264377477 * L_37 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_37, L_35, L_36, /*hidden argument*/NULL);
		NullCheck(L_26);
		Tile_Initialize_m4175325424(L_26, L_27, L_31, L_34, L_37, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VectorDataFetcher::<DataRecieved>m__0(Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile)
extern "C" IL2CPP_METHOD_ATTR void VectorDataFetcher_U3CDataRecievedU3Em__0_m387369038 (RuntimeObject * __this /* static, unused */, UnityTile_t2405085845 * ___t0, VectorTile_t4284514353 * ___s1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void VectorDataFetcher::<FetchingError>m__1(Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs)
extern "C" IL2CPP_METHOD_ATTR void VectorDataFetcher_U3CFetchingErrorU3Em__1_m385984410 (RuntimeObject * __this /* static, unused */, UnityTile_t2405085845 * ___t0, VectorTile_t4284514353 * ___r1, TileErrorEventArgs_t942940053 * ___s2, const RuntimeMethod* method)
{
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
// System.Void VectorDataFetcher/<FetchData>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFetchDataU3Ec__AnonStorey0__ctor_m3199237040 (U3CFetchDataU3Ec__AnonStorey0_t1155300966 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VectorDataFetcher/<FetchData>c__AnonStorey0::<>m__0()
extern "C" IL2CPP_METHOD_ATTR void U3CFetchDataU3Ec__AnonStorey0_U3CU3Em__0_m1371082452 (U3CFetchDataU3Ec__AnonStorey0_t1155300966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFetchDataU3Ec__AnonStorey0_U3CU3Em__0_m1371082452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VectorDataFetcherParameters_t1168113904 * L_0 = __this->get_vectorDaraParameters_0();
		NullCheck(L_0);
		UnityTile_t2405085845 * L_1 = ((DataFetcherParameters_t4072360282 *)L_0)->get_tile_2();
		NullCheck(L_1);
		CanonicalTileId_t4184902996  L_2 = UnityTile_get_CanonicalTileId_m1261252210(L_1, /*hidden argument*/NULL);
		VectorTile_t4284514353 * L_3 = __this->get_vectorTile_1();
		NullCheck(L_3);
		CanonicalTileId_t4184902996  L_4 = Tile_get_Id_m1719117786(L_3, /*hidden argument*/NULL);
		bool L_5 = CanonicalTileId_op_Inequality_m3364665322(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		VectorTile_t4284514353 * L_6 = __this->get_vectorTile_1();
		NullCheck(L_6);
		bool L_7 = Tile_get_HasError_m2239433266(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0092;
		}
	}
	{
		VectorDataFetcher_t932344282 * L_8 = __this->get_U24this_2();
		NullCheck(L_8);
		Action_3_t1202789066 * L_9 = L_8->get_FetchingError_6();
		VectorDataFetcherParameters_t1168113904 * L_10 = __this->get_vectorDaraParameters_0();
		NullCheck(L_10);
		UnityTile_t2405085845 * L_11 = ((DataFetcherParameters_t4072360282 *)L_10)->get_tile_2();
		VectorTile_t4284514353 * L_12 = __this->get_vectorTile_1();
		VectorDataFetcherParameters_t1168113904 * L_13 = __this->get_vectorDaraParameters_0();
		NullCheck(L_13);
		UnityTile_t2405085845 * L_14 = ((DataFetcherParameters_t4072360282 *)L_13)->get_tile_2();
		NullCheck(L_14);
		CanonicalTileId_t4184902996  L_15 = UnityTile_get_CanonicalTileId_m1261252210(L_14, /*hidden argument*/NULL);
		VectorTile_t4284514353 * L_16 = __this->get_vectorTile_1();
		NullCheck(L_16);
		Type_t * L_17 = Object_GetType_m88164663(L_16, /*hidden argument*/NULL);
		VectorDataFetcherParameters_t1168113904 * L_18 = __this->get_vectorDaraParameters_0();
		NullCheck(L_18);
		UnityTile_t2405085845 * L_19 = ((DataFetcherParameters_t4072360282 *)L_18)->get_tile_2();
		VectorTile_t4284514353 * L_20 = __this->get_vectorTile_1();
		NullCheck(L_20);
		ReadOnlyCollection_1_t2649313536 * L_21 = Tile_get_Exceptions_m393066583(L_20, /*hidden argument*/NULL);
		TileErrorEventArgs_t942940053 * L_22 = (TileErrorEventArgs_t942940053 *)il2cpp_codegen_object_new(TileErrorEventArgs_t942940053_il2cpp_TypeInfo_var);
		TileErrorEventArgs__ctor_m416772456(L_22, L_15, L_17, L_19, L_21, /*hidden argument*/NULL);
		NullCheck(L_9);
		Action_3_Invoke_m1250411769(L_9, L_11, L_12, L_22, /*hidden argument*/Action_3_Invoke_m1250411769_RuntimeMethod_var);
		goto IL_00b3;
	}

IL_0092:
	{
		VectorDataFetcher_t932344282 * L_23 = __this->get_U24this_2();
		NullCheck(L_23);
		Action_2_t3936036094 * L_24 = L_23->get_DataRecieved_5();
		VectorDataFetcherParameters_t1168113904 * L_25 = __this->get_vectorDaraParameters_0();
		NullCheck(L_25);
		UnityTile_t2405085845 * L_26 = ((DataFetcherParameters_t4072360282 *)L_25)->get_tile_2();
		VectorTile_t4284514353 * L_27 = __this->get_vectorTile_1();
		NullCheck(L_24);
		Action_2_Invoke_m1484331405(L_24, L_26, L_27, /*hidden argument*/Action_2_Invoke_m1484331405_RuntimeMethod_var);
	}

IL_00b3:
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
// System.Void VectorDataFetcherParameters::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VectorDataFetcherParameters__ctor_m3048313784 (VectorDataFetcherParameters_t1168113904 * __this, const RuntimeMethod* method)
{
	{
		DataFetcherParameters__ctor_m2914842882(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
