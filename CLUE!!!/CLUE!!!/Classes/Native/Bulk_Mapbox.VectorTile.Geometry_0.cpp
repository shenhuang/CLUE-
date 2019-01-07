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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper
struct Clipper_t4158555122;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase
struct ClipperBase_t2411222589;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperException
struct ClipperException_t3118674656;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint[]
struct IntPointU5BU5D_t569179734;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode
struct IntersectNode_t3379514219;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode[]
struct IntersectNodeU5BU5D_t443366026;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join
struct Join_t2349011362;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join[]
struct JoinU5BU5D_t2818349463;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima
struct LocalMinima_t86068969;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima
struct Maxima_t4278896992;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/MyIntersectNodeSort
struct MyIntersectNodeSort_t682547759;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt
struct OutPt_t2591102706;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec
struct OutRec_t316877671;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec[]
struct OutRecU5BU5D_t2422427422;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode
struct PolyNode_t1300984468;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode[]
struct PolyNodeU5BU5D_t2840898717;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyTree
struct PolyTree_t3708317675;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Scanbeam
struct Scanbeam_t3952834741;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge
struct TEdge_t1694054893;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge[]
struct TEdgeU5BU5D_t2504951744;
// Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>[]
struct Point2d_1U5BU5D_t4077844604;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.IComparer`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode>
struct IComparer_1_t338812402;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t39404347;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>
struct List_1_t3799647877;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>[]
struct List_1U5BU5D_t3764764104;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode>
struct List_1_t556621665;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join>
struct List_1_t3821086104;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec>
struct List_1_t1788952413;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode>
struct List_1_t2773059210;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge>
struct List_1_t3166129635;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge>[]
struct List_1U5BU5D_t1405568818;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>
struct List_1_t1902671575;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>[]
struct List_1U5BU5D_t2978461678;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>
struct List_1_t976755323;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge>>
struct List_1_t343237081;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>
struct List_1_t3374746317;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t4032136720;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Exception
struct Exception_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.ValueType
struct ValueType_t3640485471;

extern RuntimeClass* ClipperException_t3118674656_il2cpp_TypeInfo_var;
extern RuntimeClass* Clipper_t4158555122_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern RuntimeClass* Int128_t2615162842_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPoint_t2327573135_il2cpp_TypeInfo_var;
extern RuntimeClass* IntersectNode_t3379514219_il2cpp_TypeInfo_var;
extern RuntimeClass* Join_t2349011362_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1788952413_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1902671575_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2773059210_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3166129635_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3374746317_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t343237081_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3799647877_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3821086104_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t556621665_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t976755323_il2cpp_TypeInfo_var;
extern RuntimeClass* LocalMinima_t86068969_il2cpp_TypeInfo_var;
extern RuntimeClass* Maxima_t4278896992_il2cpp_TypeInfo_var;
extern RuntimeClass* MyIntersectNodeSort_t682547759_il2cpp_TypeInfo_var;
extern RuntimeClass* NumberFormatInfo_t435877138_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* OutPt_t2591102706_il2cpp_TypeInfo_var;
extern RuntimeClass* OutRec_t316877671_il2cpp_TypeInfo_var;
extern RuntimeClass* Point2d_1_t430596833_il2cpp_TypeInfo_var;
extern RuntimeClass* PolyNode_t1300984468_il2cpp_TypeInfo_var;
extern RuntimeClass* PolyTree_t3708317675_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* Scanbeam_t3952834741_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TEdge_t1694054893_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1120288260;
extern String_t* _stringLiteral2047889476;
extern String_t* _stringLiteral2165825057;
extern String_t* _stringLiteral2966909069;
extern String_t* _stringLiteral301130788;
extern String_t* _stringLiteral3599782859;
extern String_t* _stringLiteral3795700735;
extern const RuntimeMethod* ClipperBase_AddPath_m2715758810_RuntimeMethod_var;
extern const RuntimeMethod* ClipperBase_RangeTest_m3418353231_RuntimeMethod_var;
extern const RuntimeMethod* ClipperBase_UpdateEdgeIntoAEL_m4154808885_RuntimeMethod_var;
extern const RuntimeMethod* Clipper_DoMaxima_m1252131532_RuntimeMethod_var;
extern const RuntimeMethod* Clipper_Execute_m3531475587_RuntimeMethod_var;
extern const RuntimeMethod* Clipper_ProcessIntersections_m1183388747_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1296738317_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1629134392_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1989455672_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2177275941_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3359721649_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3919971796_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1025732668_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3241215966_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3252576324_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3894297936_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m46597772_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m47157718_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m187002534_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2305517609_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2583456201_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2674871075_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3843371202_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m713232202_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1923741412_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2003227107_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2426393733_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2443849649_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2506364138_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2668163909_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3136544709_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3668970390_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m4058561955_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m525322066_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m2105155972_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m2318313165_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m3783374028_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m3859123311_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m4286208124_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1025021732_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m168500892_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1925293548_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2038359400_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m3370282004_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m531684481_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Insert_m2826020932_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Sort_m2745252250_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1623597007_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2370664853_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3071334132_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3309552129_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3363723201_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m360321660_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3752433088_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3761227160_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3781015769_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3836626604_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m4019536950_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m662080189_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1457723948_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2984725346_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3865745726_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m4196692370_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m4197570038_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m5074056_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m603191597_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m613940410_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1111031903_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1520513517_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1875842425_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m229336946_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2314576275_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2952603493_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2977464905_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m350034741_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m809167354_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Capacity_m2501598686_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Capacity_m3226384709_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Capacity_m3969153757_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m1412177478_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m1646382115_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m2160825928_RuntimeMethod_var;
extern const uint32_t ClipperBase_AddPath_m2715758810_MetadataUsageId;
extern const uint32_t ClipperBase_AddPaths_m736258290_MetadataUsageId;
extern const uint32_t ClipperBase_CreateOutRec_m1973586272_MetadataUsageId;
extern const uint32_t ClipperBase_DisposeOutRec_m3331437289_MetadataUsageId;
extern const uint32_t ClipperBase_InsertScanbeam_m3852300338_MetadataUsageId;
extern const uint32_t ClipperBase_ProcessBound_m943447758_MetadataUsageId;
extern const uint32_t ClipperBase_RangeTest_m3418353231_MetadataUsageId;
extern const uint32_t ClipperBase_UpdateEdgeIntoAEL_m4154808885_MetadataUsageId;
extern const uint32_t ClipperBase__ctor_m2145184280_MetadataUsageId;
extern const uint32_t Clipper_AddGhostJoin_m2741223903_MetadataUsageId;
extern const uint32_t Clipper_AddJoin_m2179968199_MetadataUsageId;
extern const uint32_t Clipper_AddOutPt_m2431700953_MetadataUsageId;
extern const uint32_t Clipper_AddPolyNodeToPaths_m3146024136_MetadataUsageId;
extern const uint32_t Clipper_AppendPolygon_m1774317356_MetadataUsageId;
extern const uint32_t Clipper_BuildIntersectList_m1749992062_MetadataUsageId;
extern const uint32_t Clipper_BuildResult2_m908624350_MetadataUsageId;
extern const uint32_t Clipper_BuildResult_m1357438491_MetadataUsageId;
extern const uint32_t Clipper_DisposeAllPolyPts_m1270209170_MetadataUsageId;
extern const uint32_t Clipper_DoMaxima_m1252131532_MetadataUsageId;
extern const uint32_t Clipper_DoSimplePolygons_m1601434794_MetadataUsageId;
extern const uint32_t Clipper_DupOutPt_m3532774569_MetadataUsageId;
extern const uint32_t Clipper_ExecuteInternal_m1456444849_MetadataUsageId;
extern const uint32_t Clipper_Execute_m3531475587_MetadataUsageId;
extern const uint32_t Clipper_FixupFirstLefts1_m1272006617_MetadataUsageId;
extern const uint32_t Clipper_FixupFirstLefts2_m1781451389_MetadataUsageId;
extern const uint32_t Clipper_FixupFirstLefts3_m2591927432_MetadataUsageId;
extern const uint32_t Clipper_FixupIntersectionOrder_m704608269_MetadataUsageId;
extern const uint32_t Clipper_GetLastOutPt_m3778549639_MetadataUsageId;
extern const uint32_t Clipper_GetOutRec_m2429750861_MetadataUsageId;
extern const uint32_t Clipper_InsertLocalMinimaIntoAEL_m294675678_MetadataUsageId;
extern const uint32_t Clipper_InsertMaxima_m906955032_MetadataUsageId;
extern const uint32_t Clipper_JoinCommonEdges_m2915269750_MetadataUsageId;
extern const uint32_t Clipper_PolyTreeToPaths_m2508326341_MetadataUsageId;
extern const uint32_t Clipper_ProcessIntersectList_m3289731701_MetadataUsageId;
extern const uint32_t Clipper_ProcessIntersections_m1183388747_MetadataUsageId;
extern const uint32_t Clipper_SetHoleState_m684540413_MetadataUsageId;
extern const uint32_t Clipper__ctor_m4161462815_MetadataUsageId;
extern const uint32_t DecodeGeometry_GetGeometry_m4217266931_MetadataUsageId;
extern const uint32_t Int128_Equals_m2161341553_MetadataUsageId;
extern const uint32_t Int128_op_Equality_m3178062132_MetadataUsageId;
extern const uint32_t IntPoint_Equals_m2959216444_MetadataUsageId;
extern const uint32_t IntPoint_GetHashCode_m897251063_MetadataUsageId;
extern const uint32_t LatLng_ToString_m2732242640_MetadataUsageId;
extern const uint32_t PolyNode_AddChild_m3254340323_MetadataUsageId;
extern const uint32_t PolyNode__ctor_m395933230_MetadataUsageId;
extern const uint32_t PolyTree_Clear_m2732860785_MetadataUsageId;
extern const uint32_t PolyTree__ctor_m3193473443_MetadataUsageId;
extern const uint32_t PolyTree_get_Total_m3533407708_MetadataUsageId;
extern const uint32_t UtilGeom_ClipGeometries_m3460887927_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;


#ifndef U3CMODULEU3E_T692745538_H
#define U3CMODULEU3E_T692745538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745538 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745538_H
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
#ifndef DECODEGEOMETRY_T3735437420_H
#define DECODEGEOMETRY_T3735437420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.DecodeGeometry
struct  DecodeGeometry_t3735437420  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEGEOMETRY_T3735437420_H
#ifndef INTERNALCLIPPER_T4127247543_H
#define INTERNALCLIPPER_T4127247543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper
struct  InternalClipper_t4127247543  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALCLIPPER_T4127247543_H
#ifndef CLIPPERBASE_T2411222589_H
#define CLIPPERBASE_T2411222589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase
struct  ClipperBase_t2411222589  : public RuntimeObject
{
public:
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::m_MinimaList
	LocalMinima_t86068969 * ___m_MinimaList_0;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::m_CurrentLM
	LocalMinima_t86068969 * ___m_CurrentLM_1;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge>> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::m_edges
	List_1_t343237081 * ___m_edges_2;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Scanbeam Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::m_Scanbeam
	Scanbeam_t3952834741 * ___m_Scanbeam_3;
	// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::m_PolyOuts
	List_1_t1788952413 * ___m_PolyOuts_4;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::m_ActiveEdges
	TEdge_t1694054893 * ___m_ActiveEdges_5;
	// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::m_UseFullRange
	bool ___m_UseFullRange_6;
	// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::m_HasOpenPaths
	bool ___m_HasOpenPaths_7;
	// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::<PreserveCollinear>k__BackingField
	bool ___U3CPreserveCollinearU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_m_MinimaList_0() { return static_cast<int32_t>(offsetof(ClipperBase_t2411222589, ___m_MinimaList_0)); }
	inline LocalMinima_t86068969 * get_m_MinimaList_0() const { return ___m_MinimaList_0; }
	inline LocalMinima_t86068969 ** get_address_of_m_MinimaList_0() { return &___m_MinimaList_0; }
	inline void set_m_MinimaList_0(LocalMinima_t86068969 * value)
	{
		___m_MinimaList_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_MinimaList_0), value);
	}

	inline static int32_t get_offset_of_m_CurrentLM_1() { return static_cast<int32_t>(offsetof(ClipperBase_t2411222589, ___m_CurrentLM_1)); }
	inline LocalMinima_t86068969 * get_m_CurrentLM_1() const { return ___m_CurrentLM_1; }
	inline LocalMinima_t86068969 ** get_address_of_m_CurrentLM_1() { return &___m_CurrentLM_1; }
	inline void set_m_CurrentLM_1(LocalMinima_t86068969 * value)
	{
		___m_CurrentLM_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentLM_1), value);
	}

	inline static int32_t get_offset_of_m_edges_2() { return static_cast<int32_t>(offsetof(ClipperBase_t2411222589, ___m_edges_2)); }
	inline List_1_t343237081 * get_m_edges_2() const { return ___m_edges_2; }
	inline List_1_t343237081 ** get_address_of_m_edges_2() { return &___m_edges_2; }
	inline void set_m_edges_2(List_1_t343237081 * value)
	{
		___m_edges_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_edges_2), value);
	}

	inline static int32_t get_offset_of_m_Scanbeam_3() { return static_cast<int32_t>(offsetof(ClipperBase_t2411222589, ___m_Scanbeam_3)); }
	inline Scanbeam_t3952834741 * get_m_Scanbeam_3() const { return ___m_Scanbeam_3; }
	inline Scanbeam_t3952834741 ** get_address_of_m_Scanbeam_3() { return &___m_Scanbeam_3; }
	inline void set_m_Scanbeam_3(Scanbeam_t3952834741 * value)
	{
		___m_Scanbeam_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Scanbeam_3), value);
	}

	inline static int32_t get_offset_of_m_PolyOuts_4() { return static_cast<int32_t>(offsetof(ClipperBase_t2411222589, ___m_PolyOuts_4)); }
	inline List_1_t1788952413 * get_m_PolyOuts_4() const { return ___m_PolyOuts_4; }
	inline List_1_t1788952413 ** get_address_of_m_PolyOuts_4() { return &___m_PolyOuts_4; }
	inline void set_m_PolyOuts_4(List_1_t1788952413 * value)
	{
		___m_PolyOuts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_PolyOuts_4), value);
	}

	inline static int32_t get_offset_of_m_ActiveEdges_5() { return static_cast<int32_t>(offsetof(ClipperBase_t2411222589, ___m_ActiveEdges_5)); }
	inline TEdge_t1694054893 * get_m_ActiveEdges_5() const { return ___m_ActiveEdges_5; }
	inline TEdge_t1694054893 ** get_address_of_m_ActiveEdges_5() { return &___m_ActiveEdges_5; }
	inline void set_m_ActiveEdges_5(TEdge_t1694054893 * value)
	{
		___m_ActiveEdges_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActiveEdges_5), value);
	}

	inline static int32_t get_offset_of_m_UseFullRange_6() { return static_cast<int32_t>(offsetof(ClipperBase_t2411222589, ___m_UseFullRange_6)); }
	inline bool get_m_UseFullRange_6() const { return ___m_UseFullRange_6; }
	inline bool* get_address_of_m_UseFullRange_6() { return &___m_UseFullRange_6; }
	inline void set_m_UseFullRange_6(bool value)
	{
		___m_UseFullRange_6 = value;
	}

	inline static int32_t get_offset_of_m_HasOpenPaths_7() { return static_cast<int32_t>(offsetof(ClipperBase_t2411222589, ___m_HasOpenPaths_7)); }
	inline bool get_m_HasOpenPaths_7() const { return ___m_HasOpenPaths_7; }
	inline bool* get_address_of_m_HasOpenPaths_7() { return &___m_HasOpenPaths_7; }
	inline void set_m_HasOpenPaths_7(bool value)
	{
		___m_HasOpenPaths_7 = value;
	}

	inline static int32_t get_offset_of_U3CPreserveCollinearU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ClipperBase_t2411222589, ___U3CPreserveCollinearU3Ek__BackingField_8)); }
	inline bool get_U3CPreserveCollinearU3Ek__BackingField_8() const { return ___U3CPreserveCollinearU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CPreserveCollinearU3Ek__BackingField_8() { return &___U3CPreserveCollinearU3Ek__BackingField_8; }
	inline void set_U3CPreserveCollinearU3Ek__BackingField_8(bool value)
	{
		___U3CPreserveCollinearU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIPPERBASE_T2411222589_H
#ifndef LOCALMINIMA_T86068969_H
#define LOCALMINIMA_T86068969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima
struct  LocalMinima_t86068969  : public RuntimeObject
{
public:
	// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima::Y
	int64_t ___Y_0;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima::LeftBound
	TEdge_t1694054893 * ___LeftBound_1;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima::RightBound
	TEdge_t1694054893 * ___RightBound_2;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima::Next
	LocalMinima_t86068969 * ___Next_3;

public:
	inline static int32_t get_offset_of_Y_0() { return static_cast<int32_t>(offsetof(LocalMinima_t86068969, ___Y_0)); }
	inline int64_t get_Y_0() const { return ___Y_0; }
	inline int64_t* get_address_of_Y_0() { return &___Y_0; }
	inline void set_Y_0(int64_t value)
	{
		___Y_0 = value;
	}

	inline static int32_t get_offset_of_LeftBound_1() { return static_cast<int32_t>(offsetof(LocalMinima_t86068969, ___LeftBound_1)); }
	inline TEdge_t1694054893 * get_LeftBound_1() const { return ___LeftBound_1; }
	inline TEdge_t1694054893 ** get_address_of_LeftBound_1() { return &___LeftBound_1; }
	inline void set_LeftBound_1(TEdge_t1694054893 * value)
	{
		___LeftBound_1 = value;
		Il2CppCodeGenWriteBarrier((&___LeftBound_1), value);
	}

	inline static int32_t get_offset_of_RightBound_2() { return static_cast<int32_t>(offsetof(LocalMinima_t86068969, ___RightBound_2)); }
	inline TEdge_t1694054893 * get_RightBound_2() const { return ___RightBound_2; }
	inline TEdge_t1694054893 ** get_address_of_RightBound_2() { return &___RightBound_2; }
	inline void set_RightBound_2(TEdge_t1694054893 * value)
	{
		___RightBound_2 = value;
		Il2CppCodeGenWriteBarrier((&___RightBound_2), value);
	}

	inline static int32_t get_offset_of_Next_3() { return static_cast<int32_t>(offsetof(LocalMinima_t86068969, ___Next_3)); }
	inline LocalMinima_t86068969 * get_Next_3() const { return ___Next_3; }
	inline LocalMinima_t86068969 ** get_address_of_Next_3() { return &___Next_3; }
	inline void set_Next_3(LocalMinima_t86068969 * value)
	{
		___Next_3 = value;
		Il2CppCodeGenWriteBarrier((&___Next_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALMINIMA_T86068969_H
#ifndef MAXIMA_T4278896992_H
#define MAXIMA_T4278896992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima
struct  Maxima_t4278896992  : public RuntimeObject
{
public:
	// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima::X
	int64_t ___X_0;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima::Next
	Maxima_t4278896992 * ___Next_1;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima::Prev
	Maxima_t4278896992 * ___Prev_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Maxima_t4278896992, ___X_0)); }
	inline int64_t get_X_0() const { return ___X_0; }
	inline int64_t* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(int64_t value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Maxima_t4278896992, ___Next_1)); }
	inline Maxima_t4278896992 * get_Next_1() const { return ___Next_1; }
	inline Maxima_t4278896992 ** get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(Maxima_t4278896992 * value)
	{
		___Next_1 = value;
		Il2CppCodeGenWriteBarrier((&___Next_1), value);
	}

	inline static int32_t get_offset_of_Prev_2() { return static_cast<int32_t>(offsetof(Maxima_t4278896992, ___Prev_2)); }
	inline Maxima_t4278896992 * get_Prev_2() const { return ___Prev_2; }
	inline Maxima_t4278896992 ** get_address_of_Prev_2() { return &___Prev_2; }
	inline void set_Prev_2(Maxima_t4278896992 * value)
	{
		___Prev_2 = value;
		Il2CppCodeGenWriteBarrier((&___Prev_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAXIMA_T4278896992_H
#ifndef MYINTERSECTNODESORT_T682547759_H
#define MYINTERSECTNODESORT_T682547759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/MyIntersectNodeSort
struct  MyIntersectNodeSort_t682547759  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MYINTERSECTNODESORT_T682547759_H
#ifndef OUTREC_T316877671_H
#define OUTREC_T316877671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec
struct  OutRec_t316877671  : public RuntimeObject
{
public:
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec::Idx
	int32_t ___Idx_0;
	// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec::IsHole
	bool ___IsHole_1;
	// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec::IsOpen
	bool ___IsOpen_2;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec::FirstLeft
	OutRec_t316877671 * ___FirstLeft_3;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec::Pts
	OutPt_t2591102706 * ___Pts_4;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec::BottomPt
	OutPt_t2591102706 * ___BottomPt_5;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec::PolyNode
	PolyNode_t1300984468 * ___PolyNode_6;

public:
	inline static int32_t get_offset_of_Idx_0() { return static_cast<int32_t>(offsetof(OutRec_t316877671, ___Idx_0)); }
	inline int32_t get_Idx_0() const { return ___Idx_0; }
	inline int32_t* get_address_of_Idx_0() { return &___Idx_0; }
	inline void set_Idx_0(int32_t value)
	{
		___Idx_0 = value;
	}

	inline static int32_t get_offset_of_IsHole_1() { return static_cast<int32_t>(offsetof(OutRec_t316877671, ___IsHole_1)); }
	inline bool get_IsHole_1() const { return ___IsHole_1; }
	inline bool* get_address_of_IsHole_1() { return &___IsHole_1; }
	inline void set_IsHole_1(bool value)
	{
		___IsHole_1 = value;
	}

	inline static int32_t get_offset_of_IsOpen_2() { return static_cast<int32_t>(offsetof(OutRec_t316877671, ___IsOpen_2)); }
	inline bool get_IsOpen_2() const { return ___IsOpen_2; }
	inline bool* get_address_of_IsOpen_2() { return &___IsOpen_2; }
	inline void set_IsOpen_2(bool value)
	{
		___IsOpen_2 = value;
	}

	inline static int32_t get_offset_of_FirstLeft_3() { return static_cast<int32_t>(offsetof(OutRec_t316877671, ___FirstLeft_3)); }
	inline OutRec_t316877671 * get_FirstLeft_3() const { return ___FirstLeft_3; }
	inline OutRec_t316877671 ** get_address_of_FirstLeft_3() { return &___FirstLeft_3; }
	inline void set_FirstLeft_3(OutRec_t316877671 * value)
	{
		___FirstLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___FirstLeft_3), value);
	}

	inline static int32_t get_offset_of_Pts_4() { return static_cast<int32_t>(offsetof(OutRec_t316877671, ___Pts_4)); }
	inline OutPt_t2591102706 * get_Pts_4() const { return ___Pts_4; }
	inline OutPt_t2591102706 ** get_address_of_Pts_4() { return &___Pts_4; }
	inline void set_Pts_4(OutPt_t2591102706 * value)
	{
		___Pts_4 = value;
		Il2CppCodeGenWriteBarrier((&___Pts_4), value);
	}

	inline static int32_t get_offset_of_BottomPt_5() { return static_cast<int32_t>(offsetof(OutRec_t316877671, ___BottomPt_5)); }
	inline OutPt_t2591102706 * get_BottomPt_5() const { return ___BottomPt_5; }
	inline OutPt_t2591102706 ** get_address_of_BottomPt_5() { return &___BottomPt_5; }
	inline void set_BottomPt_5(OutPt_t2591102706 * value)
	{
		___BottomPt_5 = value;
		Il2CppCodeGenWriteBarrier((&___BottomPt_5), value);
	}

	inline static int32_t get_offset_of_PolyNode_6() { return static_cast<int32_t>(offsetof(OutRec_t316877671, ___PolyNode_6)); }
	inline PolyNode_t1300984468 * get_PolyNode_6() const { return ___PolyNode_6; }
	inline PolyNode_t1300984468 ** get_address_of_PolyNode_6() { return &___PolyNode_6; }
	inline void set_PolyNode_6(PolyNode_t1300984468 * value)
	{
		___PolyNode_6 = value;
		Il2CppCodeGenWriteBarrier((&___PolyNode_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTREC_T316877671_H
#ifndef POLYNODE_T1300984468_H
#define POLYNODE_T1300984468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode
struct  PolyNode_t1300984468  : public RuntimeObject
{
public:
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::m_Parent
	PolyNode_t1300984468 * ___m_Parent_0;
	// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::m_polygon
	List_1_t3799647877 * ___m_polygon_1;
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::m_Index
	int32_t ___m_Index_2;
	// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::m_Childs
	List_1_t2773059210 * ___m_Childs_3;
	// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::<IsOpen>k__BackingField
	bool ___U3CIsOpenU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_m_Parent_0() { return static_cast<int32_t>(offsetof(PolyNode_t1300984468, ___m_Parent_0)); }
	inline PolyNode_t1300984468 * get_m_Parent_0() const { return ___m_Parent_0; }
	inline PolyNode_t1300984468 ** get_address_of_m_Parent_0() { return &___m_Parent_0; }
	inline void set_m_Parent_0(PolyNode_t1300984468 * value)
	{
		___m_Parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Parent_0), value);
	}

	inline static int32_t get_offset_of_m_polygon_1() { return static_cast<int32_t>(offsetof(PolyNode_t1300984468, ___m_polygon_1)); }
	inline List_1_t3799647877 * get_m_polygon_1() const { return ___m_polygon_1; }
	inline List_1_t3799647877 ** get_address_of_m_polygon_1() { return &___m_polygon_1; }
	inline void set_m_polygon_1(List_1_t3799647877 * value)
	{
		___m_polygon_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_polygon_1), value);
	}

	inline static int32_t get_offset_of_m_Index_2() { return static_cast<int32_t>(offsetof(PolyNode_t1300984468, ___m_Index_2)); }
	inline int32_t get_m_Index_2() const { return ___m_Index_2; }
	inline int32_t* get_address_of_m_Index_2() { return &___m_Index_2; }
	inline void set_m_Index_2(int32_t value)
	{
		___m_Index_2 = value;
	}

	inline static int32_t get_offset_of_m_Childs_3() { return static_cast<int32_t>(offsetof(PolyNode_t1300984468, ___m_Childs_3)); }
	inline List_1_t2773059210 * get_m_Childs_3() const { return ___m_Childs_3; }
	inline List_1_t2773059210 ** get_address_of_m_Childs_3() { return &___m_Childs_3; }
	inline void set_m_Childs_3(List_1_t2773059210 * value)
	{
		___m_Childs_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Childs_3), value);
	}

	inline static int32_t get_offset_of_U3CIsOpenU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PolyNode_t1300984468, ___U3CIsOpenU3Ek__BackingField_4)); }
	inline bool get_U3CIsOpenU3Ek__BackingField_4() const { return ___U3CIsOpenU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsOpenU3Ek__BackingField_4() { return &___U3CIsOpenU3Ek__BackingField_4; }
	inline void set_U3CIsOpenU3Ek__BackingField_4(bool value)
	{
		___U3CIsOpenU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLYNODE_T1300984468_H
#ifndef SCANBEAM_T3952834741_H
#define SCANBEAM_T3952834741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Scanbeam
struct  Scanbeam_t3952834741  : public RuntimeObject
{
public:
	// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Scanbeam::Y
	int64_t ___Y_0;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Scanbeam Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Scanbeam::Next
	Scanbeam_t3952834741 * ___Next_1;

public:
	inline static int32_t get_offset_of_Y_0() { return static_cast<int32_t>(offsetof(Scanbeam_t3952834741, ___Y_0)); }
	inline int64_t get_Y_0() const { return ___Y_0; }
	inline int64_t* get_address_of_Y_0() { return &___Y_0; }
	inline void set_Y_0(int64_t value)
	{
		___Y_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Scanbeam_t3952834741, ___Next_1)); }
	inline Scanbeam_t3952834741 * get_Next_1() const { return ___Next_1; }
	inline Scanbeam_t3952834741 ** get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(Scanbeam_t3952834741 * value)
	{
		___Next_1 = value;
		Il2CppCodeGenWriteBarrier((&___Next_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCANBEAM_T3952834741_H
#ifndef UTILGEOM_T2066125609_H
#define UTILGEOM_T2066125609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.UtilGeom
struct  UtilGeom_t2066125609  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILGEOM_T2066125609_H
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
#ifndef LIST_1_T3799647877_H
#define LIST_1_T3799647877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>
struct  List_1_t3799647877  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IntPointU5BU5D_t569179734* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3799647877, ____items_1)); }
	inline IntPointU5BU5D_t569179734* get__items_1() const { return ____items_1; }
	inline IntPointU5BU5D_t569179734** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IntPointU5BU5D_t569179734* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3799647877, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3799647877, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3799647877_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	IntPointU5BU5D_t569179734* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3799647877_StaticFields, ___EmptyArray_4)); }
	inline IntPointU5BU5D_t569179734* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline IntPointU5BU5D_t569179734** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(IntPointU5BU5D_t569179734* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3799647877_H
#ifndef LIST_1_T556621665_H
#define LIST_1_T556621665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode>
struct  List_1_t556621665  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IntersectNodeU5BU5D_t443366026* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t556621665, ____items_1)); }
	inline IntersectNodeU5BU5D_t443366026* get__items_1() const { return ____items_1; }
	inline IntersectNodeU5BU5D_t443366026** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IntersectNodeU5BU5D_t443366026* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t556621665, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t556621665, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t556621665_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	IntersectNodeU5BU5D_t443366026* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t556621665_StaticFields, ___EmptyArray_4)); }
	inline IntersectNodeU5BU5D_t443366026* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline IntersectNodeU5BU5D_t443366026** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(IntersectNodeU5BU5D_t443366026* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T556621665_H
#ifndef LIST_1_T3821086104_H
#define LIST_1_T3821086104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join>
struct  List_1_t3821086104  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JoinU5BU5D_t2818349463* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3821086104, ____items_1)); }
	inline JoinU5BU5D_t2818349463* get__items_1() const { return ____items_1; }
	inline JoinU5BU5D_t2818349463** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JoinU5BU5D_t2818349463* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3821086104, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3821086104, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3821086104_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	JoinU5BU5D_t2818349463* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3821086104_StaticFields, ___EmptyArray_4)); }
	inline JoinU5BU5D_t2818349463* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline JoinU5BU5D_t2818349463** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(JoinU5BU5D_t2818349463* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3821086104_H
#ifndef LIST_1_T1788952413_H
#define LIST_1_T1788952413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec>
struct  List_1_t1788952413  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	OutRecU5BU5D_t2422427422* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1788952413, ____items_1)); }
	inline OutRecU5BU5D_t2422427422* get__items_1() const { return ____items_1; }
	inline OutRecU5BU5D_t2422427422** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(OutRecU5BU5D_t2422427422* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1788952413, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1788952413, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1788952413_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	OutRecU5BU5D_t2422427422* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1788952413_StaticFields, ___EmptyArray_4)); }
	inline OutRecU5BU5D_t2422427422* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline OutRecU5BU5D_t2422427422** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(OutRecU5BU5D_t2422427422* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1788952413_H
#ifndef LIST_1_T2773059210_H
#define LIST_1_T2773059210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode>
struct  List_1_t2773059210  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PolyNodeU5BU5D_t2840898717* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2773059210, ____items_1)); }
	inline PolyNodeU5BU5D_t2840898717* get__items_1() const { return ____items_1; }
	inline PolyNodeU5BU5D_t2840898717** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PolyNodeU5BU5D_t2840898717* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2773059210, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2773059210, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2773059210_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	PolyNodeU5BU5D_t2840898717* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2773059210_StaticFields, ___EmptyArray_4)); }
	inline PolyNodeU5BU5D_t2840898717* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline PolyNodeU5BU5D_t2840898717** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(PolyNodeU5BU5D_t2840898717* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2773059210_H
#ifndef LIST_1_T3166129635_H
#define LIST_1_T3166129635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge>
struct  List_1_t3166129635  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TEdgeU5BU5D_t2504951744* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3166129635, ____items_1)); }
	inline TEdgeU5BU5D_t2504951744* get__items_1() const { return ____items_1; }
	inline TEdgeU5BU5D_t2504951744** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TEdgeU5BU5D_t2504951744* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3166129635, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3166129635, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3166129635_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TEdgeU5BU5D_t2504951744* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3166129635_StaticFields, ___EmptyArray_4)); }
	inline TEdgeU5BU5D_t2504951744* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TEdgeU5BU5D_t2504951744** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TEdgeU5BU5D_t2504951744* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3166129635_H
#ifndef LIST_1_T1902671575_H
#define LIST_1_T1902671575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>
struct  List_1_t1902671575  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Point2d_1U5BU5D_t4077844604* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1902671575, ____items_1)); }
	inline Point2d_1U5BU5D_t4077844604* get__items_1() const { return ____items_1; }
	inline Point2d_1U5BU5D_t4077844604** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Point2d_1U5BU5D_t4077844604* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1902671575, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1902671575, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1902671575_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Point2d_1U5BU5D_t4077844604* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1902671575_StaticFields, ___EmptyArray_4)); }
	inline Point2d_1U5BU5D_t4077844604* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Point2d_1U5BU5D_t4077844604** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Point2d_1U5BU5D_t4077844604* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1902671575_H
#ifndef LIST_1_T976755323_H
#define LIST_1_T976755323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>
struct  List_1_t976755323  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t3764764104* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t976755323, ____items_1)); }
	inline List_1U5BU5D_t3764764104* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_t3764764104** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_t3764764104* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t976755323, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t976755323, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t976755323_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	List_1U5BU5D_t3764764104* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t976755323_StaticFields, ___EmptyArray_4)); }
	inline List_1U5BU5D_t3764764104* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline List_1U5BU5D_t3764764104** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(List_1U5BU5D_t3764764104* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T976755323_H
#ifndef LIST_1_T343237081_H
#define LIST_1_T343237081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge>>
struct  List_1_t343237081  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t1405568818* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t343237081, ____items_1)); }
	inline List_1U5BU5D_t1405568818* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_t1405568818** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_t1405568818* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t343237081, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t343237081, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t343237081_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	List_1U5BU5D_t1405568818* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t343237081_StaticFields, ___EmptyArray_4)); }
	inline List_1U5BU5D_t1405568818* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline List_1U5BU5D_t1405568818** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(List_1U5BU5D_t1405568818* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T343237081_H
#ifndef LIST_1_T3374746317_H
#define LIST_1_T3374746317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>
struct  List_1_t3374746317  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t2978461678* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3374746317, ____items_1)); }
	inline List_1U5BU5D_t2978461678* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_t2978461678** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_t2978461678* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3374746317, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3374746317, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3374746317_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	List_1U5BU5D_t2978461678* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3374746317_StaticFields, ___EmptyArray_4)); }
	inline List_1U5BU5D_t2978461678* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline List_1U5BU5D_t2978461678** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(List_1U5BU5D_t2978461678* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3374746317_H
#ifndef LIST_1_T4032136720_H
#define LIST_1_T4032136720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.UInt32>
struct  List_1_t4032136720  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt32U5BU5D_t2770800703* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4032136720, ____items_1)); }
	inline UInt32U5BU5D_t2770800703* get__items_1() const { return ____items_1; }
	inline UInt32U5BU5D_t2770800703** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt32U5BU5D_t2770800703* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4032136720, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4032136720, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4032136720_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	UInt32U5BU5D_t2770800703* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4032136720_StaticFields, ___EmptyArray_4)); }
	inline UInt32U5BU5D_t2770800703* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline UInt32U5BU5D_t2770800703** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(UInt32U5BU5D_t2770800703* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4032136720_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef NUMBERFORMATINFO_T435877138_H
#define NUMBERFORMATINFO_T435877138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_t435877138  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_0;
	// System.String System.Globalization.NumberFormatInfo::decimalFormats
	String_t* ___decimalFormats_1;
	// System.String System.Globalization.NumberFormatInfo::currencyFormats
	String_t* ___currencyFormats_2;
	// System.String System.Globalization.NumberFormatInfo::percentFormats
	String_t* ___percentFormats_3;
	// System.String System.Globalization.NumberFormatInfo::digitPattern
	String_t* ___digitPattern_4;
	// System.String System.Globalization.NumberFormatInfo::zeroPattern
	String_t* ___zeroPattern_5;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_6;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t385246372* ___currencyGroupSizes_9;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_10;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_11;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_12;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_15;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_16;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_17;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_18;
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t385246372* ___numberGroupSizes_19;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_20;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_21;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_22;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_23;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t385246372* ___percentGroupSizes_24;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_27;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_28;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_29;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_30;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_31;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_32;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_34;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_35;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t1281789340* ___nativeDigits_36;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_37;

public:
	inline static int32_t get_offset_of_isReadOnly_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___isReadOnly_0)); }
	inline bool get_isReadOnly_0() const { return ___isReadOnly_0; }
	inline bool* get_address_of_isReadOnly_0() { return &___isReadOnly_0; }
	inline void set_isReadOnly_0(bool value)
	{
		___isReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_decimalFormats_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___decimalFormats_1)); }
	inline String_t* get_decimalFormats_1() const { return ___decimalFormats_1; }
	inline String_t** get_address_of_decimalFormats_1() { return &___decimalFormats_1; }
	inline void set_decimalFormats_1(String_t* value)
	{
		___decimalFormats_1 = value;
		Il2CppCodeGenWriteBarrier((&___decimalFormats_1), value);
	}

	inline static int32_t get_offset_of_currencyFormats_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyFormats_2)); }
	inline String_t* get_currencyFormats_2() const { return ___currencyFormats_2; }
	inline String_t** get_address_of_currencyFormats_2() { return &___currencyFormats_2; }
	inline void set_currencyFormats_2(String_t* value)
	{
		___currencyFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___currencyFormats_2), value);
	}

	inline static int32_t get_offset_of_percentFormats_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentFormats_3)); }
	inline String_t* get_percentFormats_3() const { return ___percentFormats_3; }
	inline String_t** get_address_of_percentFormats_3() { return &___percentFormats_3; }
	inline void set_percentFormats_3(String_t* value)
	{
		___percentFormats_3 = value;
		Il2CppCodeGenWriteBarrier((&___percentFormats_3), value);
	}

	inline static int32_t get_offset_of_digitPattern_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___digitPattern_4)); }
	inline String_t* get_digitPattern_4() const { return ___digitPattern_4; }
	inline String_t** get_address_of_digitPattern_4() { return &___digitPattern_4; }
	inline void set_digitPattern_4(String_t* value)
	{
		___digitPattern_4 = value;
		Il2CppCodeGenWriteBarrier((&___digitPattern_4), value);
	}

	inline static int32_t get_offset_of_zeroPattern_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___zeroPattern_5)); }
	inline String_t* get_zeroPattern_5() const { return ___zeroPattern_5; }
	inline String_t** get_address_of_zeroPattern_5() { return &___zeroPattern_5; }
	inline void set_zeroPattern_5(String_t* value)
	{
		___zeroPattern_5 = value;
		Il2CppCodeGenWriteBarrier((&___zeroPattern_5), value);
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyDecimalDigits_6)); }
	inline int32_t get_currencyDecimalDigits_6() const { return ___currencyDecimalDigits_6; }
	inline int32_t* get_address_of_currencyDecimalDigits_6() { return &___currencyDecimalDigits_6; }
	inline void set_currencyDecimalDigits_6(int32_t value)
	{
		___currencyDecimalDigits_6 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyDecimalSeparator_7)); }
	inline String_t* get_currencyDecimalSeparator_7() const { return ___currencyDecimalSeparator_7; }
	inline String_t** get_address_of_currencyDecimalSeparator_7() { return &___currencyDecimalSeparator_7; }
	inline void set_currencyDecimalSeparator_7(String_t* value)
	{
		___currencyDecimalSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((&___currencyDecimalSeparator_7), value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSeparator_8), value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyGroupSizes_9)); }
	inline Int32U5BU5D_t385246372* get_currencyGroupSizes_9() const { return ___currencyGroupSizes_9; }
	inline Int32U5BU5D_t385246372** get_address_of_currencyGroupSizes_9() { return &___currencyGroupSizes_9; }
	inline void set_currencyGroupSizes_9(Int32U5BU5D_t385246372* value)
	{
		___currencyGroupSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSizes_9), value);
	}

	inline static int32_t get_offset_of_currencyNegativePattern_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyNegativePattern_10)); }
	inline int32_t get_currencyNegativePattern_10() const { return ___currencyNegativePattern_10; }
	inline int32_t* get_address_of_currencyNegativePattern_10() { return &___currencyNegativePattern_10; }
	inline void set_currencyNegativePattern_10(int32_t value)
	{
		___currencyNegativePattern_10 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyPositivePattern_11)); }
	inline int32_t get_currencyPositivePattern_11() const { return ___currencyPositivePattern_11; }
	inline int32_t* get_address_of_currencyPositivePattern_11() { return &___currencyPositivePattern_11; }
	inline void set_currencyPositivePattern_11(int32_t value)
	{
		___currencyPositivePattern_11 = value;
	}

	inline static int32_t get_offset_of_currencySymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencySymbol_12)); }
	inline String_t* get_currencySymbol_12() const { return ___currencySymbol_12; }
	inline String_t** get_address_of_currencySymbol_12() { return &___currencySymbol_12; }
	inline void set_currencySymbol_12(String_t* value)
	{
		___currencySymbol_12 = value;
		Il2CppCodeGenWriteBarrier((&___currencySymbol_12), value);
	}

	inline static int32_t get_offset_of_nanSymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___nanSymbol_13)); }
	inline String_t* get_nanSymbol_13() const { return ___nanSymbol_13; }
	inline String_t** get_address_of_nanSymbol_13() { return &___nanSymbol_13; }
	inline void set_nanSymbol_13(String_t* value)
	{
		___nanSymbol_13 = value;
		Il2CppCodeGenWriteBarrier((&___nanSymbol_13), value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((&___negativeInfinitySymbol_14), value);
	}

	inline static int32_t get_offset_of_negativeSign_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___negativeSign_15)); }
	inline String_t* get_negativeSign_15() const { return ___negativeSign_15; }
	inline String_t** get_address_of_negativeSign_15() { return &___negativeSign_15; }
	inline void set_negativeSign_15(String_t* value)
	{
		___negativeSign_15 = value;
		Il2CppCodeGenWriteBarrier((&___negativeSign_15), value);
	}

	inline static int32_t get_offset_of_numberDecimalDigits_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberDecimalDigits_16)); }
	inline int32_t get_numberDecimalDigits_16() const { return ___numberDecimalDigits_16; }
	inline int32_t* get_address_of_numberDecimalDigits_16() { return &___numberDecimalDigits_16; }
	inline void set_numberDecimalDigits_16(int32_t value)
	{
		___numberDecimalDigits_16 = value;
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberDecimalSeparator_17)); }
	inline String_t* get_numberDecimalSeparator_17() const { return ___numberDecimalSeparator_17; }
	inline String_t** get_address_of_numberDecimalSeparator_17() { return &___numberDecimalSeparator_17; }
	inline void set_numberDecimalSeparator_17(String_t* value)
	{
		___numberDecimalSeparator_17 = value;
		Il2CppCodeGenWriteBarrier((&___numberDecimalSeparator_17), value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberGroupSeparator_18)); }
	inline String_t* get_numberGroupSeparator_18() const { return ___numberGroupSeparator_18; }
	inline String_t** get_address_of_numberGroupSeparator_18() { return &___numberGroupSeparator_18; }
	inline void set_numberGroupSeparator_18(String_t* value)
	{
		___numberGroupSeparator_18 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSeparator_18), value);
	}

	inline static int32_t get_offset_of_numberGroupSizes_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberGroupSizes_19)); }
	inline Int32U5BU5D_t385246372* get_numberGroupSizes_19() const { return ___numberGroupSizes_19; }
	inline Int32U5BU5D_t385246372** get_address_of_numberGroupSizes_19() { return &___numberGroupSizes_19; }
	inline void set_numberGroupSizes_19(Int32U5BU5D_t385246372* value)
	{
		___numberGroupSizes_19 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSizes_19), value);
	}

	inline static int32_t get_offset_of_numberNegativePattern_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberNegativePattern_20)); }
	inline int32_t get_numberNegativePattern_20() const { return ___numberNegativePattern_20; }
	inline int32_t* get_address_of_numberNegativePattern_20() { return &___numberNegativePattern_20; }
	inline void set_numberNegativePattern_20(int32_t value)
	{
		___numberNegativePattern_20 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentDecimalDigits_21)); }
	inline int32_t get_percentDecimalDigits_21() const { return ___percentDecimalDigits_21; }
	inline int32_t* get_address_of_percentDecimalDigits_21() { return &___percentDecimalDigits_21; }
	inline void set_percentDecimalDigits_21(int32_t value)
	{
		___percentDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentDecimalSeparator_22)); }
	inline String_t* get_percentDecimalSeparator_22() const { return ___percentDecimalSeparator_22; }
	inline String_t** get_address_of_percentDecimalSeparator_22() { return &___percentDecimalSeparator_22; }
	inline void set_percentDecimalSeparator_22(String_t* value)
	{
		___percentDecimalSeparator_22 = value;
		Il2CppCodeGenWriteBarrier((&___percentDecimalSeparator_22), value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentGroupSeparator_23)); }
	inline String_t* get_percentGroupSeparator_23() const { return ___percentGroupSeparator_23; }
	inline String_t** get_address_of_percentGroupSeparator_23() { return &___percentGroupSeparator_23; }
	inline void set_percentGroupSeparator_23(String_t* value)
	{
		___percentGroupSeparator_23 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSeparator_23), value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentGroupSizes_24)); }
	inline Int32U5BU5D_t385246372* get_percentGroupSizes_24() const { return ___percentGroupSizes_24; }
	inline Int32U5BU5D_t385246372** get_address_of_percentGroupSizes_24() { return &___percentGroupSizes_24; }
	inline void set_percentGroupSizes_24(Int32U5BU5D_t385246372* value)
	{
		___percentGroupSizes_24 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSizes_24), value);
	}

	inline static int32_t get_offset_of_percentNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentNegativePattern_25)); }
	inline int32_t get_percentNegativePattern_25() const { return ___percentNegativePattern_25; }
	inline int32_t* get_address_of_percentNegativePattern_25() { return &___percentNegativePattern_25; }
	inline void set_percentNegativePattern_25(int32_t value)
	{
		___percentNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentSymbol_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentSymbol_27)); }
	inline String_t* get_percentSymbol_27() const { return ___percentSymbol_27; }
	inline String_t** get_address_of_percentSymbol_27() { return &___percentSymbol_27; }
	inline void set_percentSymbol_27(String_t* value)
	{
		___percentSymbol_27 = value;
		Il2CppCodeGenWriteBarrier((&___percentSymbol_27), value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___perMilleSymbol_28)); }
	inline String_t* get_perMilleSymbol_28() const { return ___perMilleSymbol_28; }
	inline String_t** get_address_of_perMilleSymbol_28() { return &___perMilleSymbol_28; }
	inline void set_perMilleSymbol_28(String_t* value)
	{
		___perMilleSymbol_28 = value;
		Il2CppCodeGenWriteBarrier((&___perMilleSymbol_28), value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___positiveInfinitySymbol_29)); }
	inline String_t* get_positiveInfinitySymbol_29() const { return ___positiveInfinitySymbol_29; }
	inline String_t** get_address_of_positiveInfinitySymbol_29() { return &___positiveInfinitySymbol_29; }
	inline void set_positiveInfinitySymbol_29(String_t* value)
	{
		___positiveInfinitySymbol_29 = value;
		Il2CppCodeGenWriteBarrier((&___positiveInfinitySymbol_29), value);
	}

	inline static int32_t get_offset_of_positiveSign_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___positiveSign_30)); }
	inline String_t* get_positiveSign_30() const { return ___positiveSign_30; }
	inline String_t** get_address_of_positiveSign_30() { return &___positiveSign_30; }
	inline void set_positiveSign_30(String_t* value)
	{
		___positiveSign_30 = value;
		Il2CppCodeGenWriteBarrier((&___positiveSign_30), value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___ansiCurrencySymbol_31)); }
	inline String_t* get_ansiCurrencySymbol_31() const { return ___ansiCurrencySymbol_31; }
	inline String_t** get_address_of_ansiCurrencySymbol_31() { return &___ansiCurrencySymbol_31; }
	inline void set_ansiCurrencySymbol_31(String_t* value)
	{
		___ansiCurrencySymbol_31 = value;
		Il2CppCodeGenWriteBarrier((&___ansiCurrencySymbol_31), value);
	}

	inline static int32_t get_offset_of_m_dataItem_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_dataItem_32)); }
	inline int32_t get_m_dataItem_32() const { return ___m_dataItem_32; }
	inline int32_t* get_address_of_m_dataItem_32() { return &___m_dataItem_32; }
	inline void set_m_dataItem_32(int32_t value)
	{
		___m_dataItem_32 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_useUserOverride_33)); }
	inline bool get_m_useUserOverride_33() const { return ___m_useUserOverride_33; }
	inline bool* get_address_of_m_useUserOverride_33() { return &___m_useUserOverride_33; }
	inline void set_m_useUserOverride_33(bool value)
	{
		___m_useUserOverride_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___validForParseAsNumber_34)); }
	inline bool get_validForParseAsNumber_34() const { return ___validForParseAsNumber_34; }
	inline bool* get_address_of_validForParseAsNumber_34() { return &___validForParseAsNumber_34; }
	inline void set_validForParseAsNumber_34(bool value)
	{
		___validForParseAsNumber_34 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_35() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___validForParseAsCurrency_35)); }
	inline bool get_validForParseAsCurrency_35() const { return ___validForParseAsCurrency_35; }
	inline bool* get_address_of_validForParseAsCurrency_35() { return &___validForParseAsCurrency_35; }
	inline void set_validForParseAsCurrency_35(bool value)
	{
		___validForParseAsCurrency_35 = value;
	}

	inline static int32_t get_offset_of_nativeDigits_36() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___nativeDigits_36)); }
	inline StringU5BU5D_t1281789340* get_nativeDigits_36() const { return ___nativeDigits_36; }
	inline StringU5BU5D_t1281789340** get_address_of_nativeDigits_36() { return &___nativeDigits_36; }
	inline void set_nativeDigits_36(StringU5BU5D_t1281789340* value)
	{
		___nativeDigits_36 = value;
		Il2CppCodeGenWriteBarrier((&___nativeDigits_36), value);
	}

	inline static int32_t get_offset_of_digitSubstitution_37() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___digitSubstitution_37)); }
	inline int32_t get_digitSubstitution_37() const { return ___digitSubstitution_37; }
	inline int32_t* get_address_of_digitSubstitution_37() { return &___digitSubstitution_37; }
	inline void set_digitSubstitution_37(int32_t value)
	{
		___digitSubstitution_37 = value;
	}
};

struct NumberFormatInfo_t435877138_StaticFields
{
public:
	// System.String[] System.Globalization.NumberFormatInfo::invariantNativeDigits
	StringU5BU5D_t1281789340* ___invariantNativeDigits_38;

public:
	inline static int32_t get_offset_of_invariantNativeDigits_38() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138_StaticFields, ___invariantNativeDigits_38)); }
	inline StringU5BU5D_t1281789340* get_invariantNativeDigits_38() const { return ___invariantNativeDigits_38; }
	inline StringU5BU5D_t1281789340** get_address_of_invariantNativeDigits_38() { return &___invariantNativeDigits_38; }
	inline void set_invariantNativeDigits_38(StringU5BU5D_t1281789340* value)
	{
		___invariantNativeDigits_38 = value;
		Il2CppCodeGenWriteBarrier((&___invariantNativeDigits_38), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATINFO_T435877138_H
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
#ifndef CLIPPEREXCEPTION_T3118674656_H
#define CLIPPEREXCEPTION_T3118674656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperException
struct  ClipperException_t3118674656  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIPPEREXCEPTION_T3118674656_H
#ifndef INT128_T2615162842_H
#define INT128_T2615162842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128
struct  Int128_t2615162842 
{
public:
	// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128::hi
	int64_t ___hi_0;
	// System.UInt64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128::lo
	uint64_t ___lo_1;

public:
	inline static int32_t get_offset_of_hi_0() { return static_cast<int32_t>(offsetof(Int128_t2615162842, ___hi_0)); }
	inline int64_t get_hi_0() const { return ___hi_0; }
	inline int64_t* get_address_of_hi_0() { return &___hi_0; }
	inline void set_hi_0(int64_t value)
	{
		___hi_0 = value;
	}

	inline static int32_t get_offset_of_lo_1() { return static_cast<int32_t>(offsetof(Int128_t2615162842, ___lo_1)); }
	inline uint64_t get_lo_1() const { return ___lo_1; }
	inline uint64_t* get_address_of_lo_1() { return &___lo_1; }
	inline void set_lo_1(uint64_t value)
	{
		___lo_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT128_T2615162842_H
#ifndef INTPOINT_T2327573135_H
#define INTPOINT_T2327573135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint
struct  IntPoint_t2327573135 
{
public:
	// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint::X
	int64_t ___X_0;
	// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint::Y
	int64_t ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(IntPoint_t2327573135, ___X_0)); }
	inline int64_t get_X_0() const { return ___X_0; }
	inline int64_t* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(int64_t value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(IntPoint_t2327573135, ___Y_1)); }
	inline int64_t get_Y_1() const { return ___Y_1; }
	inline int64_t* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(int64_t value)
	{
		___Y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPOINT_T2327573135_H
#ifndef POLYTREE_T3708317675_H
#define POLYTREE_T3708317675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyTree
struct  PolyTree_t3708317675  : public PolyNode_t1300984468
{
public:
	// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyTree::m_AllPolys
	List_1_t2773059210 * ___m_AllPolys_5;

public:
	inline static int32_t get_offset_of_m_AllPolys_5() { return static_cast<int32_t>(offsetof(PolyTree_t3708317675, ___m_AllPolys_5)); }
	inline List_1_t2773059210 * get_m_AllPolys_5() const { return ___m_AllPolys_5; }
	inline List_1_t2773059210 ** get_address_of_m_AllPolys_5() { return &___m_AllPolys_5; }
	inline void set_m_AllPolys_5(List_1_t2773059210 * value)
	{
		___m_AllPolys_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_AllPolys_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLYTREE_T3708317675_H
#ifndef LATLNG_T1304626312_H
#define LATLNG_T1304626312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.LatLng
struct  LatLng_t1304626312 
{
public:
	// System.Double Mapbox.VectorTile.Geometry.LatLng::<Lat>k__BackingField
	double ___U3CLatU3Ek__BackingField_0;
	// System.Double Mapbox.VectorTile.Geometry.LatLng::<Lng>k__BackingField
	double ___U3CLngU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLatU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LatLng_t1304626312, ___U3CLatU3Ek__BackingField_0)); }
	inline double get_U3CLatU3Ek__BackingField_0() const { return ___U3CLatU3Ek__BackingField_0; }
	inline double* get_address_of_U3CLatU3Ek__BackingField_0() { return &___U3CLatU3Ek__BackingField_0; }
	inline void set_U3CLatU3Ek__BackingField_0(double value)
	{
		___U3CLatU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLngU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LatLng_t1304626312, ___U3CLngU3Ek__BackingField_1)); }
	inline double get_U3CLngU3Ek__BackingField_1() const { return ___U3CLngU3Ek__BackingField_1; }
	inline double* get_address_of_U3CLngU3Ek__BackingField_1() { return &___U3CLngU3Ek__BackingField_1; }
	inline void set_U3CLngU3Ek__BackingField_1(double value)
	{
		___U3CLngU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LATLNG_T1304626312_H
#ifndef POINT2D_1_T430596833_H
#define POINT2D_1_T430596833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>
struct  Point2d_1_t430596833 
{
public:
	// T Mapbox.VectorTile.Geometry.Point2d`1::X
	int64_t ___X_0;
	// T Mapbox.VectorTile.Geometry.Point2d`1::Y
	int64_t ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Point2d_1_t430596833, ___X_0)); }
	inline int64_t get_X_0() const { return ___X_0; }
	inline int64_t* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(int64_t value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Point2d_1_t430596833, ___Y_1)); }
	inline int64_t get_Y_1() const { return ___Y_1; }
	inline int64_t* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(int64_t value)
	{
		___Y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINT2D_1_T430596833_H
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
#ifndef ENUMERATOR_T3678196290_H
#define ENUMERATOR_T3678196290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec>
struct  Enumerator_t3678196290 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1788952413 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	OutRec_t316877671 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3678196290, ___l_0)); }
	inline List_1_t1788952413 * get_l_0() const { return ___l_0; }
	inline List_1_t1788952413 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1788952413 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3678196290, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3678196290, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3678196290, ___current_3)); }
	inline OutRec_t316877671 * get_current_3() const { return ___current_3; }
	inline OutRec_t316877671 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(OutRec_t316877671 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3678196290_H
#ifndef ENUMERATOR_T367335791_H
#define ENUMERATOR_T367335791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode>
struct  Enumerator_t367335791 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2773059210 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	PolyNode_t1300984468 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t367335791, ___l_0)); }
	inline List_1_t2773059210 * get_l_0() const { return ___l_0; }
	inline List_1_t2773059210 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2773059210 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t367335791, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t367335791, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t367335791, ___current_3)); }
	inline PolyNode_t1300984468 * get_current_3() const { return ___current_3; }
	inline PolyNode_t1300984468 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(PolyNode_t1300984468 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T367335791_H
#ifndef ENUMERATOR_T2865999200_H
#define ENUMERATOR_T2865999200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>
struct  Enumerator_t2865999200 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t976755323 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	List_1_t3799647877 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2865999200, ___l_0)); }
	inline List_1_t976755323 * get_l_0() const { return ___l_0; }
	inline List_1_t976755323 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t976755323 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2865999200, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2865999200, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2865999200, ___current_3)); }
	inline List_1_t3799647877 * get_current_3() const { return ___current_3; }
	inline List_1_t3799647877 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(List_1_t3799647877 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2865999200_H
#ifndef ENUMERATOR_T969022898_H
#define ENUMERATOR_T969022898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>
struct  Enumerator_t969022898 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3374746317 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	List_1_t1902671575 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t969022898, ___l_0)); }
	inline List_1_t3374746317 * get_l_0() const { return ___l_0; }
	inline List_1_t3374746317 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3374746317 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t969022898, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t969022898, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t969022898, ___current_3)); }
	inline List_1_t1902671575 * get_current_3() const { return ___current_3; }
	inline List_1_t1902671575 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(List_1_t1902671575 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T969022898_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
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
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_2)); }
	inline uint64_t get_m_value_2() const { return ___m_value_2; }
	inline uint64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
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
#ifndef COMMANDS_T1803779524_H
#define COMMANDS_T1803779524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Contants.Commands
struct  Commands_t1803779524 
{
public:
	// System.Int32 Mapbox.VectorTile.Contants.Commands::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Commands_t1803779524, ___value___1)); }
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
#endif // COMMANDS_T1803779524_H
#ifndef GEOMTYPE_T3056663235_H
#define GEOMTYPE_T3056663235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.GeomType
struct  GeomType_t3056663235 
{
public:
	// System.Int32 Mapbox.VectorTile.Geometry.GeomType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GeomType_t3056663235, ___value___1)); }
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
#endif // GEOMTYPE_T3056663235_H
#ifndef CLIPTYPE_T1616702040_H
#define CLIPTYPE_T1616702040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipType
struct  ClipType_t1616702040 
{
public:
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ClipType_t1616702040, ___value___1)); }
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
#endif // CLIPTYPE_T1616702040_H
#ifndef NODETYPE_T363087472_H
#define NODETYPE_T363087472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper/NodeType
struct  NodeType_t363087472 
{
public:
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper/NodeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NodeType_t363087472, ___value___1)); }
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
#endif // NODETYPE_T363087472_H
#ifndef DIRECTION_T4237952965_H
#define DIRECTION_T4237952965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Direction
struct  Direction_t4237952965 
{
public:
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Direction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Direction_t4237952965, ___value___1)); }
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
#endif // DIRECTION_T4237952965_H
#ifndef EDGESIDE_T2739901735_H
#define EDGESIDE_T2739901735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/EdgeSide
struct  EdgeSide_t2739901735 
{
public:
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/EdgeSide::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EdgeSide_t2739901735, ___value___1)); }
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
#endif // EDGESIDE_T2739901735_H
#ifndef INTERSECTNODE_T3379514219_H
#define INTERSECTNODE_T3379514219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode
struct  IntersectNode_t3379514219  : public RuntimeObject
{
public:
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode::Edge1
	TEdge_t1694054893 * ___Edge1_0;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode::Edge2
	TEdge_t1694054893 * ___Edge2_1;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode::Pt
	IntPoint_t2327573135  ___Pt_2;

public:
	inline static int32_t get_offset_of_Edge1_0() { return static_cast<int32_t>(offsetof(IntersectNode_t3379514219, ___Edge1_0)); }
	inline TEdge_t1694054893 * get_Edge1_0() const { return ___Edge1_0; }
	inline TEdge_t1694054893 ** get_address_of_Edge1_0() { return &___Edge1_0; }
	inline void set_Edge1_0(TEdge_t1694054893 * value)
	{
		___Edge1_0 = value;
		Il2CppCodeGenWriteBarrier((&___Edge1_0), value);
	}

	inline static int32_t get_offset_of_Edge2_1() { return static_cast<int32_t>(offsetof(IntersectNode_t3379514219, ___Edge2_1)); }
	inline TEdge_t1694054893 * get_Edge2_1() const { return ___Edge2_1; }
	inline TEdge_t1694054893 ** get_address_of_Edge2_1() { return &___Edge2_1; }
	inline void set_Edge2_1(TEdge_t1694054893 * value)
	{
		___Edge2_1 = value;
		Il2CppCodeGenWriteBarrier((&___Edge2_1), value);
	}

	inline static int32_t get_offset_of_Pt_2() { return static_cast<int32_t>(offsetof(IntersectNode_t3379514219, ___Pt_2)); }
	inline IntPoint_t2327573135  get_Pt_2() const { return ___Pt_2; }
	inline IntPoint_t2327573135 * get_address_of_Pt_2() { return &___Pt_2; }
	inline void set_Pt_2(IntPoint_t2327573135  value)
	{
		___Pt_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERSECTNODE_T3379514219_H
#ifndef JOIN_T2349011362_H
#define JOIN_T2349011362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join
struct  Join_t2349011362  : public RuntimeObject
{
public:
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join::OutPt1
	OutPt_t2591102706 * ___OutPt1_0;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join::OutPt2
	OutPt_t2591102706 * ___OutPt2_1;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join::OffPt
	IntPoint_t2327573135  ___OffPt_2;

public:
	inline static int32_t get_offset_of_OutPt1_0() { return static_cast<int32_t>(offsetof(Join_t2349011362, ___OutPt1_0)); }
	inline OutPt_t2591102706 * get_OutPt1_0() const { return ___OutPt1_0; }
	inline OutPt_t2591102706 ** get_address_of_OutPt1_0() { return &___OutPt1_0; }
	inline void set_OutPt1_0(OutPt_t2591102706 * value)
	{
		___OutPt1_0 = value;
		Il2CppCodeGenWriteBarrier((&___OutPt1_0), value);
	}

	inline static int32_t get_offset_of_OutPt2_1() { return static_cast<int32_t>(offsetof(Join_t2349011362, ___OutPt2_1)); }
	inline OutPt_t2591102706 * get_OutPt2_1() const { return ___OutPt2_1; }
	inline OutPt_t2591102706 ** get_address_of_OutPt2_1() { return &___OutPt2_1; }
	inline void set_OutPt2_1(OutPt_t2591102706 * value)
	{
		___OutPt2_1 = value;
		Il2CppCodeGenWriteBarrier((&___OutPt2_1), value);
	}

	inline static int32_t get_offset_of_OffPt_2() { return static_cast<int32_t>(offsetof(Join_t2349011362, ___OffPt_2)); }
	inline IntPoint_t2327573135  get_OffPt_2() const { return ___OffPt_2; }
	inline IntPoint_t2327573135 * get_address_of_OffPt_2() { return &___OffPt_2; }
	inline void set_OffPt_2(IntPoint_t2327573135  value)
	{
		___OffPt_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOIN_T2349011362_H
#ifndef OUTPT_T2591102706_H
#define OUTPT_T2591102706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt
struct  OutPt_t2591102706  : public RuntimeObject
{
public:
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt::Idx
	int32_t ___Idx_0;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt::Pt
	IntPoint_t2327573135  ___Pt_1;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt::Next
	OutPt_t2591102706 * ___Next_2;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt::Prev
	OutPt_t2591102706 * ___Prev_3;

public:
	inline static int32_t get_offset_of_Idx_0() { return static_cast<int32_t>(offsetof(OutPt_t2591102706, ___Idx_0)); }
	inline int32_t get_Idx_0() const { return ___Idx_0; }
	inline int32_t* get_address_of_Idx_0() { return &___Idx_0; }
	inline void set_Idx_0(int32_t value)
	{
		___Idx_0 = value;
	}

	inline static int32_t get_offset_of_Pt_1() { return static_cast<int32_t>(offsetof(OutPt_t2591102706, ___Pt_1)); }
	inline IntPoint_t2327573135  get_Pt_1() const { return ___Pt_1; }
	inline IntPoint_t2327573135 * get_address_of_Pt_1() { return &___Pt_1; }
	inline void set_Pt_1(IntPoint_t2327573135  value)
	{
		___Pt_1 = value;
	}

	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(OutPt_t2591102706, ___Next_2)); }
	inline OutPt_t2591102706 * get_Next_2() const { return ___Next_2; }
	inline OutPt_t2591102706 ** get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(OutPt_t2591102706 * value)
	{
		___Next_2 = value;
		Il2CppCodeGenWriteBarrier((&___Next_2), value);
	}

	inline static int32_t get_offset_of_Prev_3() { return static_cast<int32_t>(offsetof(OutPt_t2591102706, ___Prev_3)); }
	inline OutPt_t2591102706 * get_Prev_3() const { return ___Prev_3; }
	inline OutPt_t2591102706 ** get_address_of_Prev_3() { return &___Prev_3; }
	inline void set_Prev_3(OutPt_t2591102706 * value)
	{
		___Prev_3 = value;
		Il2CppCodeGenWriteBarrier((&___Prev_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTPT_T2591102706_H
#ifndef POLYFILLTYPE_T2091732334_H
#define POLYFILLTYPE_T2091732334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyFillType
struct  PolyFillType_t2091732334 
{
public:
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyFillType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PolyFillType_t2091732334, ___value___1)); }
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
#endif // POLYFILLTYPE_T2091732334_H
#ifndef POLYTYPE_T1741373358_H
#define POLYTYPE_T1741373358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyType
struct  PolyType_t1741373358 
{
public:
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PolyType_t1741373358, ___value___1)); }
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
#endif // POLYTYPE_T1741373358_H
#ifndef ENUMERATOR_T1393924458_H
#define ENUMERATOR_T1393924458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>
struct  Enumerator_t1393924458 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3799647877 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	IntPoint_t2327573135  ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1393924458, ___l_0)); }
	inline List_1_t3799647877 * get_l_0() const { return ___l_0; }
	inline List_1_t3799647877 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3799647877 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1393924458, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1393924458, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1393924458, ___current_3)); }
	inline IntPoint_t2327573135  get_current_3() const { return ___current_3; }
	inline IntPoint_t2327573135 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(IntPoint_t2327573135  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1393924458_H
#ifndef ENUMERATOR_T3791915452_H
#define ENUMERATOR_T3791915452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>
struct  Enumerator_t3791915452 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1902671575 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Point2d_1_t430596833  ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3791915452, ___l_0)); }
	inline List_1_t1902671575 * get_l_0() const { return ___l_0; }
	inline List_1_t1902671575 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1902671575 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3791915452, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3791915452, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3791915452, ___current_3)); }
	inline Point2d_1_t430596833  get_current_3() const { return ___current_3; }
	inline Point2d_1_t430596833 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Point2d_1_t430596833  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3791915452_H
#ifndef CLIPPER_T4158555122_H
#define CLIPPER_T4158555122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper
struct  Clipper_t4158555122  : public ClipperBase_t2411222589
{
public:
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipType Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::m_ClipType
	int32_t ___m_ClipType_9;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::m_Maxima
	Maxima_t4278896992 * ___m_Maxima_10;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::m_SortedEdges
	TEdge_t1694054893 * ___m_SortedEdges_11;
	// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::m_IntersectList
	List_1_t556621665 * ___m_IntersectList_12;
	// System.Collections.Generic.IComparer`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::m_IntersectNodeComparer
	RuntimeObject* ___m_IntersectNodeComparer_13;
	// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::m_ExecuteLocked
	bool ___m_ExecuteLocked_14;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyFillType Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::m_ClipFillType
	int32_t ___m_ClipFillType_15;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyFillType Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::m_SubjFillType
	int32_t ___m_SubjFillType_16;
	// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::m_Joins
	List_1_t3821086104 * ___m_Joins_17;
	// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::m_GhostJoins
	List_1_t3821086104 * ___m_GhostJoins_18;
	// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::m_UsingPolyTree
	bool ___m_UsingPolyTree_19;
	// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::<ReverseSolution>k__BackingField
	bool ___U3CReverseSolutionU3Ek__BackingField_20;
	// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::<StrictlySimple>k__BackingField
	bool ___U3CStrictlySimpleU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of_m_ClipType_9() { return static_cast<int32_t>(offsetof(Clipper_t4158555122, ___m_ClipType_9)); }
	inline int32_t get_m_ClipType_9() const { return ___m_ClipType_9; }
	inline int32_t* get_address_of_m_ClipType_9() { return &___m_ClipType_9; }
	inline void set_m_ClipType_9(int32_t value)
	{
		___m_ClipType_9 = value;
	}

	inline static int32_t get_offset_of_m_Maxima_10() { return static_cast<int32_t>(offsetof(Clipper_t4158555122, ___m_Maxima_10)); }
	inline Maxima_t4278896992 * get_m_Maxima_10() const { return ___m_Maxima_10; }
	inline Maxima_t4278896992 ** get_address_of_m_Maxima_10() { return &___m_Maxima_10; }
	inline void set_m_Maxima_10(Maxima_t4278896992 * value)
	{
		___m_Maxima_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Maxima_10), value);
	}

	inline static int32_t get_offset_of_m_SortedEdges_11() { return static_cast<int32_t>(offsetof(Clipper_t4158555122, ___m_SortedEdges_11)); }
	inline TEdge_t1694054893 * get_m_SortedEdges_11() const { return ___m_SortedEdges_11; }
	inline TEdge_t1694054893 ** get_address_of_m_SortedEdges_11() { return &___m_SortedEdges_11; }
	inline void set_m_SortedEdges_11(TEdge_t1694054893 * value)
	{
		___m_SortedEdges_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_SortedEdges_11), value);
	}

	inline static int32_t get_offset_of_m_IntersectList_12() { return static_cast<int32_t>(offsetof(Clipper_t4158555122, ___m_IntersectList_12)); }
	inline List_1_t556621665 * get_m_IntersectList_12() const { return ___m_IntersectList_12; }
	inline List_1_t556621665 ** get_address_of_m_IntersectList_12() { return &___m_IntersectList_12; }
	inline void set_m_IntersectList_12(List_1_t556621665 * value)
	{
		___m_IntersectList_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_IntersectList_12), value);
	}

	inline static int32_t get_offset_of_m_IntersectNodeComparer_13() { return static_cast<int32_t>(offsetof(Clipper_t4158555122, ___m_IntersectNodeComparer_13)); }
	inline RuntimeObject* get_m_IntersectNodeComparer_13() const { return ___m_IntersectNodeComparer_13; }
	inline RuntimeObject** get_address_of_m_IntersectNodeComparer_13() { return &___m_IntersectNodeComparer_13; }
	inline void set_m_IntersectNodeComparer_13(RuntimeObject* value)
	{
		___m_IntersectNodeComparer_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_IntersectNodeComparer_13), value);
	}

	inline static int32_t get_offset_of_m_ExecuteLocked_14() { return static_cast<int32_t>(offsetof(Clipper_t4158555122, ___m_ExecuteLocked_14)); }
	inline bool get_m_ExecuteLocked_14() const { return ___m_ExecuteLocked_14; }
	inline bool* get_address_of_m_ExecuteLocked_14() { return &___m_ExecuteLocked_14; }
	inline void set_m_ExecuteLocked_14(bool value)
	{
		___m_ExecuteLocked_14 = value;
	}

	inline static int32_t get_offset_of_m_ClipFillType_15() { return static_cast<int32_t>(offsetof(Clipper_t4158555122, ___m_ClipFillType_15)); }
	inline int32_t get_m_ClipFillType_15() const { return ___m_ClipFillType_15; }
	inline int32_t* get_address_of_m_ClipFillType_15() { return &___m_ClipFillType_15; }
	inline void set_m_ClipFillType_15(int32_t value)
	{
		___m_ClipFillType_15 = value;
	}

	inline static int32_t get_offset_of_m_SubjFillType_16() { return static_cast<int32_t>(offsetof(Clipper_t4158555122, ___m_SubjFillType_16)); }
	inline int32_t get_m_SubjFillType_16() const { return ___m_SubjFillType_16; }
	inline int32_t* get_address_of_m_SubjFillType_16() { return &___m_SubjFillType_16; }
	inline void set_m_SubjFillType_16(int32_t value)
	{
		___m_SubjFillType_16 = value;
	}

	inline static int32_t get_offset_of_m_Joins_17() { return static_cast<int32_t>(offsetof(Clipper_t4158555122, ___m_Joins_17)); }
	inline List_1_t3821086104 * get_m_Joins_17() const { return ___m_Joins_17; }
	inline List_1_t3821086104 ** get_address_of_m_Joins_17() { return &___m_Joins_17; }
	inline void set_m_Joins_17(List_1_t3821086104 * value)
	{
		___m_Joins_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_Joins_17), value);
	}

	inline static int32_t get_offset_of_m_GhostJoins_18() { return static_cast<int32_t>(offsetof(Clipper_t4158555122, ___m_GhostJoins_18)); }
	inline List_1_t3821086104 * get_m_GhostJoins_18() const { return ___m_GhostJoins_18; }
	inline List_1_t3821086104 ** get_address_of_m_GhostJoins_18() { return &___m_GhostJoins_18; }
	inline void set_m_GhostJoins_18(List_1_t3821086104 * value)
	{
		___m_GhostJoins_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_GhostJoins_18), value);
	}

	inline static int32_t get_offset_of_m_UsingPolyTree_19() { return static_cast<int32_t>(offsetof(Clipper_t4158555122, ___m_UsingPolyTree_19)); }
	inline bool get_m_UsingPolyTree_19() const { return ___m_UsingPolyTree_19; }
	inline bool* get_address_of_m_UsingPolyTree_19() { return &___m_UsingPolyTree_19; }
	inline void set_m_UsingPolyTree_19(bool value)
	{
		___m_UsingPolyTree_19 = value;
	}

	inline static int32_t get_offset_of_U3CReverseSolutionU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Clipper_t4158555122, ___U3CReverseSolutionU3Ek__BackingField_20)); }
	inline bool get_U3CReverseSolutionU3Ek__BackingField_20() const { return ___U3CReverseSolutionU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CReverseSolutionU3Ek__BackingField_20() { return &___U3CReverseSolutionU3Ek__BackingField_20; }
	inline void set_U3CReverseSolutionU3Ek__BackingField_20(bool value)
	{
		___U3CReverseSolutionU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CStrictlySimpleU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(Clipper_t4158555122, ___U3CStrictlySimpleU3Ek__BackingField_21)); }
	inline bool get_U3CStrictlySimpleU3Ek__BackingField_21() const { return ___U3CStrictlySimpleU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CStrictlySimpleU3Ek__BackingField_21() { return &___U3CStrictlySimpleU3Ek__BackingField_21; }
	inline void set_U3CStrictlySimpleU3Ek__BackingField_21(bool value)
	{
		___U3CStrictlySimpleU3Ek__BackingField_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIPPER_T4158555122_H
#ifndef TEDGE_T1694054893_H
#define TEDGE_T1694054893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge
struct  TEdge_t1694054893  : public RuntimeObject
{
public:
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Bot
	IntPoint_t2327573135  ___Bot_0;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Curr
	IntPoint_t2327573135  ___Curr_1;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Top
	IntPoint_t2327573135  ___Top_2;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Delta
	IntPoint_t2327573135  ___Delta_3;
	// System.Double Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Dx
	double ___Dx_4;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyType Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::PolyTyp
	int32_t ___PolyTyp_5;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/EdgeSide Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Side
	int32_t ___Side_6;
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::WindDelta
	int32_t ___WindDelta_7;
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::WindCnt
	int32_t ___WindCnt_8;
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::WindCnt2
	int32_t ___WindCnt2_9;
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::OutIdx
	int32_t ___OutIdx_10;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Next
	TEdge_t1694054893 * ___Next_11;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Prev
	TEdge_t1694054893 * ___Prev_12;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::NextInLML
	TEdge_t1694054893 * ___NextInLML_13;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::NextInAEL
	TEdge_t1694054893 * ___NextInAEL_14;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::PrevInAEL
	TEdge_t1694054893 * ___PrevInAEL_15;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::NextInSEL
	TEdge_t1694054893 * ___NextInSEL_16;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::PrevInSEL
	TEdge_t1694054893 * ___PrevInSEL_17;

public:
	inline static int32_t get_offset_of_Bot_0() { return static_cast<int32_t>(offsetof(TEdge_t1694054893, ___Bot_0)); }
	inline IntPoint_t2327573135  get_Bot_0() const { return ___Bot_0; }
	inline IntPoint_t2327573135 * get_address_of_Bot_0() { return &___Bot_0; }
	inline void set_Bot_0(IntPoint_t2327573135  value)
	{
		___Bot_0 = value;
	}

	inline static int32_t get_offset_of_Curr_1() { return static_cast<int32_t>(offsetof(TEdge_t1694054893, ___Curr_1)); }
	inline IntPoint_t2327573135  get_Curr_1() const { return ___Curr_1; }
	inline IntPoint_t2327573135 * get_address_of_Curr_1() { return &___Curr_1; }
	inline void set_Curr_1(IntPoint_t2327573135  value)
	{
		___Curr_1 = value;
	}

	inline static int32_t get_offset_of_Top_2() { return static_cast<int32_t>(offsetof(TEdge_t1694054893, ___Top_2)); }
	inline IntPoint_t2327573135  get_Top_2() const { return ___Top_2; }
	inline IntPoint_t2327573135 * get_address_of_Top_2() { return &___Top_2; }
	inline void set_Top_2(IntPoint_t2327573135  value)
	{
		___Top_2 = value;
	}

	inline static int32_t get_offset_of_Delta_3() { return static_cast<int32_t>(offsetof(TEdge_t1694054893, ___Delta_3)); }
	inline IntPoint_t2327573135  get_Delta_3() const { return ___Delta_3; }
	inline IntPoint_t2327573135 * get_address_of_Delta_3() { return &___Delta_3; }
	inline void set_Delta_3(IntPoint_t2327573135  value)
	{
		___Delta_3 = value;
	}

	inline static int32_t get_offset_of_Dx_4() { return static_cast<int32_t>(offsetof(TEdge_t1694054893, ___Dx_4)); }
	inline double get_Dx_4() const { return ___Dx_4; }
	inline double* get_address_of_Dx_4() { return &___Dx_4; }
	inline void set_Dx_4(double value)
	{
		___Dx_4 = value;
	}

	inline static int32_t get_offset_of_PolyTyp_5() { return static_cast<int32_t>(offsetof(TEdge_t1694054893, ___PolyTyp_5)); }
	inline int32_t get_PolyTyp_5() const { return ___PolyTyp_5; }
	inline int32_t* get_address_of_PolyTyp_5() { return &___PolyTyp_5; }
	inline void set_PolyTyp_5(int32_t value)
	{
		___PolyTyp_5 = value;
	}

	inline static int32_t get_offset_of_Side_6() { return static_cast<int32_t>(offsetof(TEdge_t1694054893, ___Side_6)); }
	inline int32_t get_Side_6() const { return ___Side_6; }
	inline int32_t* get_address_of_Side_6() { return &___Side_6; }
	inline void set_Side_6(int32_t value)
	{
		___Side_6 = value;
	}

	inline static int32_t get_offset_of_WindDelta_7() { return static_cast<int32_t>(offsetof(TEdge_t1694054893, ___WindDelta_7)); }
	inline int32_t get_WindDelta_7() const { return ___WindDelta_7; }
	inline int32_t* get_address_of_WindDelta_7() { return &___WindDelta_7; }
	inline void set_WindDelta_7(int32_t value)
	{
		___WindDelta_7 = value;
	}

	inline static int32_t get_offset_of_WindCnt_8() { return static_cast<int32_t>(offsetof(TEdge_t1694054893, ___WindCnt_8)); }
	inline int32_t get_WindCnt_8() const { return ___WindCnt_8; }
	inline int32_t* get_address_of_WindCnt_8() { return &___WindCnt_8; }
	inline void set_WindCnt_8(int32_t value)
	{
		___WindCnt_8 = value;
	}

	inline static int32_t get_offset_of_WindCnt2_9() { return static_cast<int32_t>(offsetof(TEdge_t1694054893, ___WindCnt2_9)); }
	inline int32_t get_WindCnt2_9() const { return ___WindCnt2_9; }
	inline int32_t* get_address_of_WindCnt2_9() { return &___WindCnt2_9; }
	inline void set_WindCnt2_9(int32_t value)
	{
		___WindCnt2_9 = value;
	}

	inline static int32_t get_offset_of_OutIdx_10() { return static_cast<int32_t>(offsetof(TEdge_t1694054893, ___OutIdx_10)); }
	inline int32_t get_OutIdx_10() const { return ___OutIdx_10; }
	inline int32_t* get_address_of_OutIdx_10() { return &___OutIdx_10; }
	inline void set_OutIdx_10(int32_t value)
	{
		___OutIdx_10 = value;
	}

	inline static int32_t get_offset_of_Next_11() { return static_cast<int32_t>(offsetof(TEdge_t1694054893, ___Next_11)); }
	inline TEdge_t1694054893 * get_Next_11() const { return ___Next_11; }
	inline TEdge_t1694054893 ** get_address_of_Next_11() { return &___Next_11; }
	inline void set_Next_11(TEdge_t1694054893 * value)
	{
		___Next_11 = value;
		Il2CppCodeGenWriteBarrier((&___Next_11), value);
	}

	inline static int32_t get_offset_of_Prev_12() { return static_cast<int32_t>(offsetof(TEdge_t1694054893, ___Prev_12)); }
	inline TEdge_t1694054893 * get_Prev_12() const { return ___Prev_12; }
	inline TEdge_t1694054893 ** get_address_of_Prev_12() { return &___Prev_12; }
	inline void set_Prev_12(TEdge_t1694054893 * value)
	{
		___Prev_12 = value;
		Il2CppCodeGenWriteBarrier((&___Prev_12), value);
	}

	inline static int32_t get_offset_of_NextInLML_13() { return static_cast<int32_t>(offsetof(TEdge_t1694054893, ___NextInLML_13)); }
	inline TEdge_t1694054893 * get_NextInLML_13() const { return ___NextInLML_13; }
	inline TEdge_t1694054893 ** get_address_of_NextInLML_13() { return &___NextInLML_13; }
	inline void set_NextInLML_13(TEdge_t1694054893 * value)
	{
		___NextInLML_13 = value;
		Il2CppCodeGenWriteBarrier((&___NextInLML_13), value);
	}

	inline static int32_t get_offset_of_NextInAEL_14() { return static_cast<int32_t>(offsetof(TEdge_t1694054893, ___NextInAEL_14)); }
	inline TEdge_t1694054893 * get_NextInAEL_14() const { return ___NextInAEL_14; }
	inline TEdge_t1694054893 ** get_address_of_NextInAEL_14() { return &___NextInAEL_14; }
	inline void set_NextInAEL_14(TEdge_t1694054893 * value)
	{
		___NextInAEL_14 = value;
		Il2CppCodeGenWriteBarrier((&___NextInAEL_14), value);
	}

	inline static int32_t get_offset_of_PrevInAEL_15() { return static_cast<int32_t>(offsetof(TEdge_t1694054893, ___PrevInAEL_15)); }
	inline TEdge_t1694054893 * get_PrevInAEL_15() const { return ___PrevInAEL_15; }
	inline TEdge_t1694054893 ** get_address_of_PrevInAEL_15() { return &___PrevInAEL_15; }
	inline void set_PrevInAEL_15(TEdge_t1694054893 * value)
	{
		___PrevInAEL_15 = value;
		Il2CppCodeGenWriteBarrier((&___PrevInAEL_15), value);
	}

	inline static int32_t get_offset_of_NextInSEL_16() { return static_cast<int32_t>(offsetof(TEdge_t1694054893, ___NextInSEL_16)); }
	inline TEdge_t1694054893 * get_NextInSEL_16() const { return ___NextInSEL_16; }
	inline TEdge_t1694054893 ** get_address_of_NextInSEL_16() { return &___NextInSEL_16; }
	inline void set_NextInSEL_16(TEdge_t1694054893 * value)
	{
		___NextInSEL_16 = value;
		Il2CppCodeGenWriteBarrier((&___NextInSEL_16), value);
	}

	inline static int32_t get_offset_of_PrevInSEL_17() { return static_cast<int32_t>(offsetof(TEdge_t1694054893, ___PrevInSEL_17)); }
	inline TEdge_t1694054893 * get_PrevInSEL_17() const { return ___PrevInSEL_17; }
	inline TEdge_t1694054893 ** get_address_of_PrevInSEL_17() { return &___PrevInSEL_17; }
	inline void set_PrevInSEL_17(TEdge_t1694054893 * value)
	{
		___PrevInSEL_17 = value;
		Il2CppCodeGenWriteBarrier((&___PrevInSEL_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEDGE_T1694054893_H
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m3071334132_gshared (List_1_t1902671575 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m603191597_gshared (List_1_t4032136720 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.UInt32>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint32_t List_1_get_Item_m809167354_gshared (List_1_t4032136720 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5074056_gshared (List_1_t1902671575 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m525322066_gshared (List_1_t1902671575 * __this, Point2d_1_t430596833  p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Point2d_1_t430596833  List_1_get_Item_m1111031903_gshared (List_1_t1902671575 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_Sort_m3841873687_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Item_m1979164443_gshared (List_1_t257213610 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Capacity_m2372349928_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m3836626604_gshared (List_1_t3799647877 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m2426393733_gshared (List_1_t3799647877 * __this, IntPoint_t2327573135  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>::set_Capacity(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Capacity_m3226384709_gshared (List_1_t3799647877 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m1457723948_gshared (List_1_t3799647877 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR IntPoint_t2327573135  List_1_get_Item_m2977464905_gshared (List_1_t3799647877 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m3947764094_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m662080189_gshared (List_1_t3799647877 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t3791915452  List_1_GetEnumerator_m168500892_gshared (List_1_t1902671575 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>::get_Current()
extern "C" IL2CPP_METHOD_ATTR Point2d_1_t430596833  Enumerator_get_Current_m3843371202_gshared (Enumerator_t3791915452 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3252576324_gshared (Enumerator_t3791915452 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m1629134392_gshared (Enumerator_t3791915452 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t1393924458  List_1_GetEnumerator_m531684481_gshared (List_1_t3799647877 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>::get_Current()
extern "C" IL2CPP_METHOD_ATTR IntPoint_t2327573135  Enumerator_get_Current_m713232202_gshared (Enumerator_t1393924458 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m47157718_gshared (Enumerator_t1393924458 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m1296738317_gshared (Enumerator_t1393924458 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>::Insert(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Insert_m2826020932_gshared (List_1_t1902671575 * __this, int32_t p0, Point2d_1_t430596833  p1, const RuntimeMethod* method);

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>::.ctor()
inline void List_1__ctor_m3363723201 (List_1_t3374746317 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3374746317 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>::.ctor()
inline void List_1__ctor_m3071334132 (List_1_t1902671575 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1902671575 *, const RuntimeMethod*))List_1__ctor_m3071334132_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Count()
inline int32_t List_1_get_Count_m603191597 (List_1_t4032136720 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4032136720 *, const RuntimeMethod*))List_1_get_Count_m603191597_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.UInt32>::get_Item(System.Int32)
inline uint32_t List_1_get_Item_m809167354 (List_1_t4032136720 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (List_1_t4032136720 *, int32_t, const RuntimeMethod*))List_1_get_Item_m809167354_gshared)(__this, p0, method);
}
// Mapbox.VectorTile.Geometry.Point2d`1<System.Int64> Mapbox.VectorTile.Geometry.DecodeGeometry::zigzagDecode(System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR Point2d_1_t430596833  DecodeGeometry_zigzagDecode_m937525462 (RuntimeObject * __this /* static, unused */, int64_t ___x0, int64_t ___y1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>::get_Count()
inline int32_t List_1_get_Count_m5074056 (List_1_t1902671575 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1902671575 *, const RuntimeMethod*))List_1_get_Count_m5074056_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>::Add(!0)
inline void List_1_Add_m4058561955 (List_1_t3374746317 * __this, List_1_t1902671575 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3374746317 *, List_1_t1902671575 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>::Add(!0)
inline void List_1_Add_m525322066 (List_1_t1902671575 * __this, Point2d_1_t430596833  p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1902671575 *, Point2d_1_t430596833 , const RuntimeMethod*))List_1_Add_m525322066_gshared)(__this, p0, method);
}
// !0 System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>::get_Item(System.Int32)
inline Point2d_1_t430596833  List_1_get_Item_m1111031903 (List_1_t1902671575 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Point2d_1_t430596833  (*) (List_1_t1902671575 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1111031903_gshared)(__this, p0, method);
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ClipperBase__ctor_m2145184280 (ClipperBase_t2411222589 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode>::.ctor()
inline void List_1__ctor_m3752433088 (List_1_t556621665 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t556621665 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/MyIntersectNodeSort::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MyIntersectNodeSort__ctor_m928340280 (MyIntersectNodeSort_t682547759 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec>::.ctor()
inline void List_1__ctor_m3309552129 (List_1_t1788952413 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1788952413 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join>::.ctor()
inline void List_1__ctor_m3761227160 (List_1_t3821086104 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3821086104 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::set_ReverseSolution(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Clipper_set_ReverseSolution_m2878224228 (Clipper_t4158555122 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::set_StrictlySimple(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Clipper_set_StrictlySimple_m1584829957 (Clipper_t4158555122 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::set_PreserveCollinear(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_set_PreserveCollinear_m475506320 (ClipperBase_t2411222589 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Maxima__ctor_m3291383381 (Maxima_t4278896992 * __this, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ClipperException__ctor_m1990918546 (ClipperException_t3118674656 * __this, String_t* ___description0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>::Clear()
inline void List_1_Clear_m3859123311 (List_1_t976755323 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t976755323 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method);
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::ExecuteInternal()
extern "C" IL2CPP_METHOD_ATTR bool Clipper_ExecuteInternal_m1456444849 (Clipper_t4158555122 * __this, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::BuildResult(System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>)
extern "C" IL2CPP_METHOD_ATTR void Clipper_BuildResult_m1357438491 (Clipper_t4158555122 * __this, List_1_t976755323 * ___polyg0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::DisposeAllPolyPts()
extern "C" IL2CPP_METHOD_ATTR void Clipper_DisposeAllPolyPts_m1270209170 (Clipper_t4158555122 * __this, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::BuildResult2(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyTree)
extern "C" IL2CPP_METHOD_ATTR void Clipper_BuildResult2_m908624350 (Clipper_t4158555122 * __this, PolyTree_t3708317675 * ___polytree0, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::PopScanbeam(System.Int64&)
extern "C" IL2CPP_METHOD_ATTR bool ClipperBase_PopScanbeam_m1570193237 (ClipperBase_t2411222589 * __this, int64_t* ___Y0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::InsertLocalMinimaIntoAEL(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Clipper_InsertLocalMinimaIntoAEL_m294675678 (Clipper_t4158555122 * __this, int64_t ___botY0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::ProcessHorizontals()
extern "C" IL2CPP_METHOD_ATTR void Clipper_ProcessHorizontals_m128429225 (Clipper_t4158555122 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join>::Clear()
inline void List_1_Clear_m2318313165 (List_1_t3821086104 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3821086104 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method);
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::ProcessIntersections(System.Int64)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_ProcessIntersections_m1183388747 (Clipper_t4158555122 * __this, int64_t ___topY0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::ProcessEdgesAtTopOfScanbeam(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Clipper_ProcessEdgesAtTopOfScanbeam_m194700658 (Clipper_t4158555122 * __this, int64_t ___topY0, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::LocalMinimaPending()
extern "C" IL2CPP_METHOD_ATTR bool ClipperBase_LocalMinimaPending_m2619425210 (ClipperBase_t2411222589 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec>::GetEnumerator()
inline Enumerator_t3678196290  List_1_GetEnumerator_m3370282004 (List_1_t1788952413 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3678196290  (*) (List_1_t1788952413 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec>::get_Current()
inline OutRec_t316877671 * Enumerator_get_Current_m187002534 (Enumerator_t3678196290 * __this, const RuntimeMethod* method)
{
	return ((  OutRec_t316877671 * (*) (Enumerator_t3678196290 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::get_ReverseSolution()
extern "C" IL2CPP_METHOD_ATTR bool Clipper_get_ReverseSolution_m605749754 (Clipper_t4158555122 * __this, const RuntimeMethod* method);
// System.Double Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::Area(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR double Clipper_Area_m2096448732 (Clipper_t4158555122 * __this, OutRec_t316877671 * ___outRec0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::ReversePolyPtLinks(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt)
extern "C" IL2CPP_METHOD_ATTR void Clipper_ReversePolyPtLinks_m7158408 (Clipper_t4158555122 * __this, OutPt_t2591102706 * ___pp0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec>::MoveNext()
inline bool Enumerator_MoveNext_m46597772 (Enumerator_t3678196290 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3678196290 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec>::Dispose()
inline void Enumerator_Dispose_m1989455672 (Enumerator_t3678196290 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3678196290 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::JoinCommonEdges()
extern "C" IL2CPP_METHOD_ATTR void Clipper_JoinCommonEdges_m2915269750 (Clipper_t4158555122 * __this, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::FixupOutPolyline(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR void Clipper_FixupOutPolyline_m4149716164 (Clipper_t4158555122 * __this, OutRec_t316877671 * ___outrec0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::FixupOutPolygon(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR void Clipper_FixupOutPolygon_m1262056334 (Clipper_t4158555122 * __this, OutRec_t316877671 * ___outRec0, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::get_StrictlySimple()
extern "C" IL2CPP_METHOD_ATTR bool Clipper_get_StrictlySimple_m970398697 (Clipper_t4158555122 * __this, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::DoSimplePolygons()
extern "C" IL2CPP_METHOD_ATTR void Clipper_DoSimplePolygons_m1601434794 (Clipper_t4158555122 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec>::get_Count()
inline int32_t List_1_get_Count_m4196692370 (List_1_t1788952413 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1788952413 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::DisposeOutRec(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_DisposeOutRec_m3331437289 (ClipperBase_t2411222589 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec>::Clear()
inline void List_1_Clear_m2105155972 (List_1_t1788952413 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1788952413 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method);
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Join__ctor_m316918409 (Join_t2349011362 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join>::Add(!0)
inline void List_1_Add_m3668970390 (List_1_t3821086104 * __this, Join_t2349011362 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3821086104 *, Join_t2349011362 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::InsertEdgeIntoAEL(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void Clipper_InsertEdgeIntoAEL_m2975059490 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___edge0, TEdge_t1694054893 * ___startEdge1, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::SetWindingCount(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void Clipper_SetWindingCount_m3553783045 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___edge0, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::IsContributing(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_IsContributing_m1843582661 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___edge0, const RuntimeMethod* method);
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::AddOutPt(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR OutPt_t2591102706 * Clipper_AddOutPt_m2431700953 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e0, IntPoint_t2327573135  ___pt1, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::InsertScanbeam(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_InsertScanbeam_m3852300338 (ClipperBase_t2411222589 * __this, int64_t ___Y0, const RuntimeMethod* method);
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::AddLocalMinPoly(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR OutPt_t2591102706 * Clipper_AddLocalMinPoly_m3826382306 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e10, TEdge_t1694054893 * ___e21, IntPoint_t2327573135  ___pt2, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::IsHorizontal(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR bool ClipperBase_IsHorizontal_m234918052 (RuntimeObject * __this /* static, unused */, TEdge_t1694054893 * ___e0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::AddEdgeToSEL(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void Clipper_AddEdgeToSEL_m475729562 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___edge0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join>::get_Count()
inline int32_t List_1_get_Count_m4197570038 (List_1_t3821086104 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3821086104 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join>::get_Item(System.Int32)
inline Join_t2349011362 * List_1_get_Item_m1875842425 (List_1_t3821086104 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Join_t2349011362 * (*) (List_1_t3821086104 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::HorzSegmentsOverlap(System.Int64,System.Int64,System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_HorzSegmentsOverlap_m2026014840 (Clipper_t4158555122 * __this, int64_t ___seg1a0, int64_t ___seg1b1, int64_t ___seg2a2, int64_t ___seg2b3, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::AddJoin(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR void Clipper_AddJoin_m2179968199 (Clipper_t4158555122 * __this, OutPt_t2591102706 * ___Op10, OutPt_t2591102706 * ___Op21, IntPoint_t2327573135  ___OffPt2, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::SlopesEqual(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ClipperBase_SlopesEqual_m2195603954 (RuntimeObject * __this /* static, unused */, IntPoint_t2327573135  ___pt10, IntPoint_t2327573135  ___pt21, IntPoint_t2327573135  ___pt32, IntPoint_t2327573135  ___pt43, bool ___UseFullRange4, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::IntersectEdges(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR void Clipper_IntersectEdges_m4288628979 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e10, TEdge_t1694054893 * ___e21, IntPoint_t2327573135  ___pt2, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::PopLocalMinima(System.Int64,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima&)
extern "C" IL2CPP_METHOD_ATTR bool ClipperBase_PopLocalMinima_m1590347675 (ClipperBase_t2411222589 * __this, int64_t ___Y0, LocalMinima_t86068969 ** ___current1, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::E2InsertsBeforeE1(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_E2InsertsBeforeE1_m638832314 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e10, TEdge_t1694054893 * ___e21, const RuntimeMethod* method);
// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::TopX(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,System.Int64)
extern "C" IL2CPP_METHOD_ATTR int64_t Clipper_TopX_m2701964852 (RuntimeObject * __this /* static, unused */, TEdge_t1694054893 * ___edge0, int64_t ___currentY1, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::IsEvenOddFillType(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_IsEvenOddFillType_m1354744549 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___edge0, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::IsEvenOddAltFillType(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_IsEvenOddAltFillType_m4123805980 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___edge0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::AppendPolygon(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void Clipper_AppendPolygon_m1774317356 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e10, TEdge_t1694054893 * ___e21, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint::.ctor(System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void IntPoint__ctor_m3815773329 (IntPoint_t2327573135 * __this, int64_t ___X0, int64_t ___Y1, const RuntimeMethod* method);
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::CreateOutRec()
extern "C" IL2CPP_METHOD_ATTR OutRec_t316877671 * ClipperBase_CreateOutRec_m1973586272 (ClipperBase_t2411222589 * __this, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt::.ctor()
extern "C" IL2CPP_METHOD_ATTR void OutPt__ctor_m2666169316 (OutPt_t2591102706 * __this, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::SetHoleState(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR void Clipper_SetHoleState_m684540413 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e0, OutRec_t316877671 * ___outRec1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec>::get_Item(System.Int32)
inline OutRec_t316877671 * List_1_get_Item_m350034741 (List_1_t1788952413 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  OutRec_t316877671 * (*) (List_1_t1788952413 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint::op_Equality(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR bool IntPoint_op_Equality_m246719467 (RuntimeObject * __this /* static, unused */, IntPoint_t2327573135  ___a0, IntPoint_t2327573135  ___b1, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::Swap(System.Int64&,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_Swap_m3891450181 (ClipperBase_t2411222589 * __this, int64_t* ___val10, int64_t* ___val21, const RuntimeMethod* method);
// System.Double Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::GetDx(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR double Clipper_GetDx_m3298892655 (Clipper_t4158555122 * __this, IntPoint_t2327573135  ___pt10, IntPoint_t2327573135  ___pt21, const RuntimeMethod* method);
// System.Double System.Math::Max(System.Double,System.Double)
extern "C" IL2CPP_METHOD_ATTR double Math_Max_m3148697491 (RuntimeObject * __this /* static, unused */, double p0, double p1, const RuntimeMethod* method);
// System.Double System.Math::Min(System.Double,System.Double)
extern "C" IL2CPP_METHOD_ATTR double Math_Min_m2185697350 (RuntimeObject * __this /* static, unused */, double p0, double p1, const RuntimeMethod* method);
// System.Double Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::Area(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt)
extern "C" IL2CPP_METHOD_ATTR double Clipper_Area_m360288272 (Clipper_t4158555122 * __this, OutPt_t2591102706 * ___op0, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::FirstIsBottomPt(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_FirstIsBottomPt_m3226782377 (Clipper_t4158555122 * __this, OutPt_t2591102706 * ___btmPt10, OutPt_t2591102706 * ___btmPt21, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint::op_Inequality(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR bool IntPoint_op_Inequality_m2137021658 (RuntimeObject * __this /* static, unused */, IntPoint_t2327573135  ___a0, IntPoint_t2327573135  ___b1, const RuntimeMethod* method);
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::GetBottomPt(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt)
extern "C" IL2CPP_METHOD_ATTR OutPt_t2591102706 * Clipper_GetBottomPt_m2609315760 (Clipper_t4158555122 * __this, OutPt_t2591102706 * ___pp0, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::OutRec1RightOfOutRec2(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_OutRec1RightOfOutRec2_m3908483916 (Clipper_t4158555122 * __this, OutRec_t316877671 * ___outRec10, OutRec_t316877671 * ___outRec21, const RuntimeMethod* method);
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::GetLowermostRec(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR OutRec_t316877671 * Clipper_GetLowermostRec_m731535806 (Clipper_t4158555122 * __this, OutRec_t316877671 * ___outRec10, OutRec_t316877671 * ___outRec21, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::AddLocalMaxPoly(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR void Clipper_AddLocalMaxPoly_m2387891006 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e10, TEdge_t1694054893 * ___e21, IntPoint_t2327573135  ___pt2, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::SwapSides(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void Clipper_SwapSides_m1090722918 (RuntimeObject * __this /* static, unused */, TEdge_t1694054893 * ___edge10, TEdge_t1694054893 * ___edge21, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::SwapPolyIndexes(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void Clipper_SwapPolyIndexes_m805866805 (RuntimeObject * __this /* static, unused */, TEdge_t1694054893 * ___edge10, TEdge_t1694054893 * ___edge21, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::ProcessHorizontal(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void Clipper_ProcessHorizontal_m678935575 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___horzEdge0, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::PopEdgeFromSEL(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge&)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_PopEdgeFromSEL_m2875851177 (Clipper_t4158555122 * __this, TEdge_t1694054893 ** ___e0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::GetHorzDirection(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Direction&,System.Int64&,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR void Clipper_GetHorzDirection_m1143700396 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___HorzEdge0, int32_t* ___Dir1, int64_t* ___Left2, int64_t* ___Right3, const RuntimeMethod* method);
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::GetMaximaPair(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR TEdge_t1694054893 * Clipper_GetMaximaPair_m1622679443 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e0, const RuntimeMethod* method);
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::GetNextInAEL(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Direction)
extern "C" IL2CPP_METHOD_ATTR TEdge_t1694054893 * Clipper_GetNextInAEL_m97829742 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e0, int32_t ___Direction1, const RuntimeMethod* method);
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::GetLastOutPt(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR OutPt_t2591102706 * Clipper_GetLastOutPt_m3778549639 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::AddGhostJoin(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR void Clipper_AddGhostJoin_m2741223903 (Clipper_t4158555122 * __this, OutPt_t2591102706 * ___Op0, IntPoint_t2327573135  ___OffPt1, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::DeleteFromAEL(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_DeleteFromAEL_m216615416 (ClipperBase_t2411222589 * __this, TEdge_t1694054893 * ___e0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::SwapPositionsInAEL(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_SwapPositionsInAEL_m2341169767 (ClipperBase_t2411222589 * __this, TEdge_t1694054893 * ___edge10, TEdge_t1694054893 * ___edge21, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::UpdateEdgeIntoAEL(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge&)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_UpdateEdgeIntoAEL_m4154808885 (ClipperBase_t2411222589 * __this, TEdge_t1694054893 ** ___e0, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::SlopesEqual(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ClipperBase_SlopesEqual_m2620772186 (RuntimeObject * __this /* static, unused */, TEdge_t1694054893 * ___e10, TEdge_t1694054893 * ___e21, bool ___UseFullRange2, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::BuildIntersectList(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Clipper_BuildIntersectList_m1749992062 (Clipper_t4158555122 * __this, int64_t ___topY0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode>::get_Count()
inline int32_t List_1_get_Count_m2984725346 (List_1_t556621665 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t556621665 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::FixupIntersectionOrder()
extern "C" IL2CPP_METHOD_ATTR bool Clipper_FixupIntersectionOrder_m704608269 (Clipper_t4158555122 * __this, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::ProcessIntersectList()
extern "C" IL2CPP_METHOD_ATTR void Clipper_ProcessIntersectList_m3289731701 (Clipper_t4158555122 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode>::Clear()
inline void List_1_Clear_m3783374028 (List_1_t556621665 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t556621665 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method);
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::IntersectPoint(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint&)
extern "C" IL2CPP_METHOD_ATTR void Clipper_IntersectPoint_m1381152703 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___edge10, TEdge_t1694054893 * ___edge21, IntPoint_t2327573135 * ___ip2, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IntersectNode__ctor_m896529871 (IntersectNode_t3379514219 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode>::Add(!0)
inline void List_1_Add_m1923741412 (List_1_t556621665 * __this, IntersectNode_t3379514219 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t556621665 *, IntersectNode_t3379514219 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::SwapPositionsInSEL(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void Clipper_SwapPositionsInSEL_m1038129781 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___edge10, TEdge_t1694054893 * ___edge21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode>::Sort(System.Collections.Generic.IComparer`1<!0>)
inline void List_1_Sort_m2745252250 (List_1_t556621665 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t556621665 *, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m3841873687_gshared)(__this, p0, method);
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::CopyAELToSEL()
extern "C" IL2CPP_METHOD_ATTR void Clipper_CopyAELToSEL_m3587611428 (Clipper_t4158555122 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode>::get_Item(System.Int32)
inline IntersectNode_t3379514219 * List_1_get_Item_m2314576275 (List_1_t556621665 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  IntersectNode_t3379514219 * (*) (List_1_t556621665 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::EdgesAdjacent(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_EdgesAdjacent_m3553825355 (Clipper_t4158555122 * __this, IntersectNode_t3379514219 * ___inode0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m1412177478 (List_1_t556621665 * __this, int32_t p0, IntersectNode_t3379514219 * p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t556621665 *, int32_t, IntersectNode_t3379514219 *, const RuntimeMethod*))List_1_set_Item_m1979164443_gshared)(__this, p0, p1, method);
}
// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::Round(System.Double)
extern "C" IL2CPP_METHOD_ATTR int64_t Clipper_Round_m2303120780 (RuntimeObject * __this /* static, unused */, double ___value0, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::IsMaxima(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,System.Double)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_IsMaxima_m1397546823 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e0, double ___Y1, const RuntimeMethod* method);
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::GetMaximaPairEx(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR TEdge_t1694054893 * Clipper_GetMaximaPairEx_m542542616 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::InsertMaxima(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Clipper_InsertMaxima_m906955032 (Clipper_t4158555122 * __this, int64_t ___X0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::DoMaxima(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void Clipper_DoMaxima_m1252131532 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e0, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::IsIntermediate(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,System.Double)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_IsIntermediate_m3498560226 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e0, double ___Y1, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint::.ctor(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR void IntPoint__ctor_m1795439093 (IntPoint_t2327573135 * __this, IntPoint_t2327573135  ___pt0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m3969153757 (List_1_t976755323 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t976755323 *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m2372349928_gshared)(__this, p0, method);
}
// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::PointCount(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt)
extern "C" IL2CPP_METHOD_ATTR int32_t Clipper_PointCount_m1327256642 (Clipper_t4158555122 * __this, OutPt_t2591102706 * ___pts0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>::.ctor(System.Int32)
inline void List_1__ctor_m3836626604 (List_1_t3799647877 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3799647877 *, int32_t, const RuntimeMethod*))List_1__ctor_m3836626604_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>::Add(!0)
inline void List_1_Add_m2426393733 (List_1_t3799647877 * __this, IntPoint_t2327573135  p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3799647877 *, IntPoint_t2327573135 , const RuntimeMethod*))List_1_Add_m2426393733_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>::Add(!0)
inline void List_1_Add_m2003227107 (List_1_t976755323 * __this, List_1_t3799647877 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t976755323 *, List_1_t3799647877 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyTree::Clear()
extern "C" IL2CPP_METHOD_ATTR void PolyTree_Clear_m2732860785 (PolyTree_t3708317675 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m2501598686 (List_1_t2773059210 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2773059210 *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m2372349928_gshared)(__this, p0, method);
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::FixHoleLinkage(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR void Clipper_FixHoleLinkage_m2496390730 (Clipper_t4158555122 * __this, OutRec_t316877671 * ___outRec0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PolyNode__ctor_m395933230 (PolyNode_t1300984468 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode>::Add(!0)
inline void List_1_Add_m2668163909 (List_1_t2773059210 * __this, PolyNode_t1300984468 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2773059210 *, PolyNode_t1300984468 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m3226384709 (List_1_t3799647877 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3799647877 *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m3226384709_gshared)(__this, p0, method);
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::set_IsOpen(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void PolyNode_set_IsOpen_m638335 (PolyNode_t1300984468 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::AddChild(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode)
extern "C" IL2CPP_METHOD_ATTR void PolyNode_AddChild_m3254340323 (PolyNode_t1300984468 * __this, PolyNode_t1300984468 * ___Child0, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::get_PreserveCollinear()
extern "C" IL2CPP_METHOD_ATTR bool ClipperBase_get_PreserveCollinear_m3706547670 (ClipperBase_t2411222589 * __this, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::SlopesEqual(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ClipperBase_SlopesEqual_m89433242 (RuntimeObject * __this /* static, unused */, IntPoint_t2327573135  ___pt10, IntPoint_t2327573135  ___pt21, IntPoint_t2327573135  ___pt32, bool ___UseFullRange3, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::Pt2IsBetweenPt1AndPt3(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR bool ClipperBase_Pt2IsBetweenPt1AndPt3_m2502305590 (ClipperBase_t2411222589 * __this, IntPoint_t2327573135  ___pt10, IntPoint_t2327573135  ___pt21, IntPoint_t2327573135  ___pt32, const RuntimeMethod* method);
// System.Int64 System.Math::Max(System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR int64_t Math_Max_m3392967427 (RuntimeObject * __this /* static, unused */, int64_t p0, int64_t p1, const RuntimeMethod* method);
// System.Int64 System.Math::Min(System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR int64_t Math_Min_m2427345610 (RuntimeObject * __this /* static, unused */, int64_t p0, int64_t p1, const RuntimeMethod* method);
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::DupOutPt(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR OutPt_t2591102706 * Clipper_DupOutPt_m3532774569 (Clipper_t4158555122 * __this, OutPt_t2591102706 * ___outPt0, bool ___InsertAfter1, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::GetOverlap(System.Int64,System.Int64,System.Int64,System.Int64,System.Int64&,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_GetOverlap_m1773269826 (Clipper_t4158555122 * __this, int64_t ___a10, int64_t ___a21, int64_t ___b12, int64_t ___b23, int64_t* ___Left4, int64_t* ___Right5, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::JoinHorz(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_JoinHorz_m1088565330 (Clipper_t4158555122 * __this, OutPt_t2591102706 * ___op10, OutPt_t2591102706 * ___op1b1, OutPt_t2591102706 * ___op22, OutPt_t2591102706 * ___op2b3, IntPoint_t2327573135  ___Pt4, bool ___DiscardLeft5, const RuntimeMethod* method);
// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::PointInPolygon(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt)
extern "C" IL2CPP_METHOD_ATTR int32_t Clipper_PointInPolygon_m3646946292 (RuntimeObject * __this /* static, unused */, IntPoint_t2327573135  ___pt0, OutPt_t2591102706 * ___op1, const RuntimeMethod* method);
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::ParseFirstLeft(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR OutRec_t316877671 * Clipper_ParseFirstLeft_m184863688 (RuntimeObject * __this /* static, unused */, OutRec_t316877671 * ___FirstLeft0, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::Poly2ContainsPoly1(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_Poly2ContainsPoly1_m3485490509 (RuntimeObject * __this /* static, unused */, OutPt_t2591102706 * ___outPt10, OutPt_t2591102706 * ___outPt21, const RuntimeMethod* method);
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::GetOutRec(System.Int32)
extern "C" IL2CPP_METHOD_ATTR OutRec_t316877671 * Clipper_GetOutRec_m2429750861 (Clipper_t4158555122 * __this, int32_t ___idx0, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::JoinPoints(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_JoinPoints_m3293732783 (Clipper_t4158555122 * __this, Join_t2349011362 * ___j0, OutRec_t316877671 * ___outRec11, OutRec_t316877671 * ___outRec22, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::UpdateOutPtIdxs(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR void Clipper_UpdateOutPtIdxs_m4256085062 (Clipper_t4158555122 * __this, OutRec_t316877671 * ___outrec0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::FixupFirstLefts2(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR void Clipper_FixupFirstLefts2_m1781451389 (Clipper_t4158555122 * __this, OutRec_t316877671 * ___innerOutRec0, OutRec_t316877671 * ___outerOutRec1, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::FixupFirstLefts1(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR void Clipper_FixupFirstLefts1_m1272006617 (Clipper_t4158555122 * __this, OutRec_t316877671 * ___OldOutRec0, OutRec_t316877671 * ___NewOutRec1, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::FixupFirstLefts3(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR void Clipper_FixupFirstLefts3_m2591927432 (Clipper_t4158555122 * __this, OutRec_t316877671 * ___OldOutRec0, OutRec_t316877671 * ___NewOutRec1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>::.ctor()
inline void List_1__ctor_m1623597007 (List_1_t976755323 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t976755323 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyTree::get_Total()
extern "C" IL2CPP_METHOD_ATTR int32_t PolyTree_get_Total_m3533407708 (PolyTree_t3708317675 * __this, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::AddPolyNodeToPaths(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper/NodeType,System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>)
extern "C" IL2CPP_METHOD_ATTR void Clipper_AddPolyNodeToPaths_m3146024136 (RuntimeObject * __this /* static, unused */, PolyNode_t1300984468 * ___polynode0, int32_t ___nt1, List_1_t976755323 * ___paths2, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::get_IsOpen()
extern "C" IL2CPP_METHOD_ATTR bool PolyNode_get_IsOpen_m135974531 (PolyNode_t1300984468 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>::get_Count()
inline int32_t List_1_get_Count_m1457723948 (List_1_t3799647877 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3799647877 *, const RuntimeMethod*))List_1_get_Count_m1457723948_gshared)(__this, method);
}
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::get_Childs()
extern "C" IL2CPP_METHOD_ATTR List_1_t2773059210 * PolyNode_get_Childs_m1719303521 (PolyNode_t1300984468 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode>::GetEnumerator()
inline Enumerator_t367335791  List_1_GetEnumerator_m1925293548 (List_1_t2773059210 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t367335791  (*) (List_1_t2773059210 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode>::get_Current()
inline PolyNode_t1300984468 * Enumerator_get_Current_m2674871075 (Enumerator_t367335791 * __this, const RuntimeMethod* method)
{
	return ((  PolyNode_t1300984468 * (*) (Enumerator_t367335791 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode>::MoveNext()
inline bool Enumerator_MoveNext_m3894297936 (Enumerator_t367335791 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t367335791 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode>::Dispose()
inline void Enumerator_Dispose_m2177275941 (Enumerator_t367335791 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t367335791 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128::Int128Mul(System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR Int128_t2615162842  Int128_Int128Mul_m3068794394 (RuntimeObject * __this /* static, unused */, int64_t ___lhs0, int64_t ___rhs1, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128::op_Equality(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128)
extern "C" IL2CPP_METHOD_ATTR bool Int128_op_Equality_m3178062132 (RuntimeObject * __this /* static, unused */, Int128_t2615162842  ___val10, Int128_t2615162842  ___val21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge>>::.ctor()
inline void List_1__ctor_m360321660 (List_1_t343237081 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t343237081 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::RangeTest(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_RangeTest_m3418353231 (ClipperBase_t2411222589 * __this, IntPoint_t2327573135  ___Pt0, bool* ___useFullRange1, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::SetDx(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_SetDx_m2904531036 (ClipperBase_t2411222589 * __this, TEdge_t1694054893 * ___e0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LocalMinima__ctor_m2131346182 (LocalMinima_t86068969 * __this, const RuntimeMethod* method);
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::ProcessBound(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR TEdge_t1694054893 * ClipperBase_ProcessBound_m943447758 (ClipperBase_t2411222589 * __this, TEdge_t1694054893 * ___E0, bool ___LeftBoundIsForward1, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::InsertLocalMinima(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_InsertLocalMinima_m285067343 (ClipperBase_t2411222589 * __this, LocalMinima_t86068969 * ___newLm0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::ReverseHorizontal(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_ReverseHorizontal_m2772901178 (ClipperBase_t2411222589 * __this, TEdge_t1694054893 * ___e0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>::get_Item(System.Int32)
inline IntPoint_t2327573135  List_1_get_Item_m2977464905 (List_1_t3799647877 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  IntPoint_t2327573135  (*) (List_1_t3799647877 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2977464905_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge>::.ctor(System.Int32)
inline void List_1__ctor_m3781015769 (List_1_t3166129635 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3166129635 *, int32_t, const RuntimeMethod*))List_1__ctor_m3947764094_gshared)(__this, p0, method);
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TEdge__ctor_m2585461453 (TEdge_t1694054893 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge>::Add(!0)
inline void List_1_Add_m3136544709 (List_1_t3166129635 * __this, TEdge_t1694054893 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3166129635 *, TEdge_t1694054893 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// !0 System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge>::get_Item(System.Int32)
inline TEdge_t1694054893 * List_1_get_Item_m1520513517 (List_1_t3166129635 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  TEdge_t1694054893 * (*) (List_1_t3166129635 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::InitEdge(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_InitEdge_m4160041665 (ClipperBase_t2411222589 * __this, TEdge_t1694054893 * ___e0, TEdge_t1694054893 * ___eNext1, TEdge_t1694054893 * ___ePrev2, IntPoint_t2327573135  ___pt3, const RuntimeMethod* method);
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::RemoveEdge(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR TEdge_t1694054893 * ClipperBase_RemoveEdge_m3101975860 (ClipperBase_t2411222589 * __this, TEdge_t1694054893 * ___e0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::InitEdge2(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyType)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_InitEdge2_m4245291815 (ClipperBase_t2411222589 * __this, TEdge_t1694054893 * ___e0, int32_t ___polyType1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge>>::Add(!0)
inline void List_1_Add_m2506364138 (List_1_t343237081 * __this, List_1_t3166129635 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t343237081 *, List_1_t3166129635 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::FindNextLocMin(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR TEdge_t1694054893 * ClipperBase_FindNextLocMin_m1040214851 (ClipperBase_t2411222589 * __this, TEdge_t1694054893 * ___E0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>::get_Count()
inline int32_t List_1_get_Count_m3865745726 (List_1_t976755323 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t976755323 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>::get_Item(System.Int32)
inline List_1_t3799647877 * List_1_get_Item_m2952603493 (List_1_t976755323 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  List_1_t3799647877 * (*) (List_1_t976755323 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::AddPath(System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyType,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ClipperBase_AddPath_m2715758810 (ClipperBase_t2411222589 * __this, List_1_t3799647877 * ___pg0, int32_t ___polyType1, bool ___Closed2, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Scanbeam::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Scanbeam__ctor_m2134228870 (Scanbeam_t3952834741 * __this, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec::.ctor()
extern "C" IL2CPP_METHOD_ATTR void OutRec__ctor_m289344415 (OutRec_t316877671 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec>::Add(!0)
inline void List_1_Add_m2443849649 (List_1_t1788952413 * __this, OutRec_t316877671 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1788952413 *, OutRec_t316877671 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m2160825928 (List_1_t1788952413 * __this, int32_t p0, OutRec_t316877671 * p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1788952413 *, int32_t, OutRec_t316877671 *, const RuntimeMethod*))List_1_set_Item_m1979164443_gshared)(__this, p0, p1, method);
}
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128::.ctor(System.Int64,System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void Int128__ctor_m1790720025 (Int128_t2615162842 * __this, int64_t ____hi0, uint64_t ____lo1, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Int128_Equals_m2161341553 (Int128_t2615162842 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Int64::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_m703091690 (int64_t* __this, const RuntimeMethod* method);
// System.Int32 System.UInt64::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m4209760355 (uint64_t* __this, const RuntimeMethod* method);
// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Int128_GetHashCode_m948042182 (Int128_t2615162842 * __this, const RuntimeMethod* method);
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128::op_UnaryNegation(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128)
extern "C" IL2CPP_METHOD_ATTR Int128_t2615162842  Int128_op_UnaryNegation_m2590084368 (RuntimeObject * __this /* static, unused */, Int128_t2615162842  ___val0, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool IntPoint_Equals_m2959216444 (IntPoint_t2327573135 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.ValueType::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t ValueType_GetHashCode_m715362416 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t IntPoint_GetHashCode_m897251063 (IntPoint_t2327573135 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode>::get_Count()
inline int32_t List_1_get_Count_m613940410 (List_1_t2773059210 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2773059210 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>::.ctor()
inline void List_1__ctor_m662080189 (List_1_t3799647877 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3799647877 *, const RuntimeMethod*))List_1__ctor_m662080189_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode>::.ctor()
inline void List_1__ctor_m2370664853 (List_1_t2773059210 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2773059210 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m1646382115 (List_1_t2773059210 * __this, int32_t p0, PolyNode_t1300984468 * p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2773059210 *, int32_t, PolyNode_t1300984468 *, const RuntimeMethod*))List_1_set_Item_m1979164443_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode>::Clear()
inline void List_1_Clear_m4286208124 (List_1_t2773059210 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2773059210 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode>::get_Item(System.Int32)
inline PolyNode_t1300984468 * List_1_get_Item_m229336946 (List_1_t2773059210 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  PolyNode_t1300984468 * (*) (List_1_t2773059210 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Double Mapbox.VectorTile.Geometry.LatLng::get_Lat()
extern "C" IL2CPP_METHOD_ATTR double LatLng_get_Lat_m4162783761 (LatLng_t1304626312 * __this, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.LatLng::set_Lat(System.Double)
extern "C" IL2CPP_METHOD_ATTR void LatLng_set_Lat_m1802382718 (LatLng_t1304626312 * __this, double ___value0, const RuntimeMethod* method);
// System.Double Mapbox.VectorTile.Geometry.LatLng::get_Lng()
extern "C" IL2CPP_METHOD_ATTR double LatLng_get_Lng_m3070828082 (LatLng_t1304626312 * __this, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.LatLng::set_Lng(System.Double)
extern "C" IL2CPP_METHOD_ATTR void LatLng_set_Lng_m4213309140 (LatLng_t1304626312 * __this, double ___value0, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
extern "C" IL2CPP_METHOD_ATTR NumberFormatInfo_t435877138 * NumberFormatInfo_get_InvariantInfo_m349577018 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m1881875187 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, String_t* p1, ObjectU5BU5D_t2843939325* p2, const RuntimeMethod* method);
// System.String Mapbox.VectorTile.Geometry.LatLng::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* LatLng_ToString_m2732242640 (LatLng_t1304626312 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>::GetEnumerator()
inline Enumerator_t969022898  List_1_GetEnumerator_m2038359400 (List_1_t3374746317 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t969022898  (*) (List_1_t3374746317 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>::get_Current()
inline List_1_t1902671575 * Enumerator_get_Current_m2305517609 (Enumerator_t969022898 * __this, const RuntimeMethod* method)
{
	return ((  List_1_t1902671575 * (*) (Enumerator_t969022898 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>::GetEnumerator()
inline Enumerator_t3791915452  List_1_GetEnumerator_m168500892 (List_1_t1902671575 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3791915452  (*) (List_1_t1902671575 *, const RuntimeMethod*))List_1_GetEnumerator_m168500892_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>::get_Current()
inline Point2d_1_t430596833  Enumerator_get_Current_m3843371202 (Enumerator_t3791915452 * __this, const RuntimeMethod* method)
{
	return ((  Point2d_1_t430596833  (*) (Enumerator_t3791915452 *, const RuntimeMethod*))Enumerator_get_Current_m3843371202_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>::MoveNext()
inline bool Enumerator_MoveNext_m3252576324 (Enumerator_t3791915452 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3791915452 *, const RuntimeMethod*))Enumerator_MoveNext_m3252576324_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>::Dispose()
inline void Enumerator_Dispose_m1629134392 (Enumerator_t3791915452 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3791915452 *, const RuntimeMethod*))Enumerator_Dispose_m1629134392_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>::MoveNext()
inline bool Enumerator_MoveNext_m3241215966 (Enumerator_t969022898 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t969022898 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>::Dispose()
inline void Enumerator_Dispose_m3919971796 (Enumerator_t969022898 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t969022898 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>::.ctor(System.Int32)
inline void List_1__ctor_m4019536950 (List_1_t976755323 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t976755323 *, int32_t, const RuntimeMethod*))List_1__ctor_m3947764094_gshared)(__this, p0, method);
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Clipper__ctor_m4161462815 (Clipper_t4158555122 * __this, int32_t ___InitOptions0, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::AddPaths(System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyType,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ClipperBase_AddPaths_m736258290 (ClipperBase_t2411222589 * __this, List_1_t976755323 * ___ppg0, int32_t ___polyType1, bool ___closed2, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyTree::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PolyTree__ctor_m3193473443 (PolyTree_t3708317675 * __this, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::Execute(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipType,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyTree,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyFillType,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyFillType)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_Execute_m84679915 (Clipper_t4158555122 * __this, int32_t ___clipType0, PolyTree_t3708317675 * ___polytree1, int32_t ___subjFillType2, int32_t ___clipFillType3, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::PolyTreeToPaths(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyTree)
extern "C" IL2CPP_METHOD_ATTR List_1_t976755323 * Clipper_PolyTreeToPaths_m2508326341 (RuntimeObject * __this /* static, unused */, PolyTree_t3708317675 * ___polytree0, const RuntimeMethod* method);
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::Execute(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipType,System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyFillType,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyFillType)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_Execute_m3531475587 (Clipper_t4158555122 * __this, int32_t ___clipType0, List_1_t976755323 * ___solution1, int32_t ___subjFillType2, int32_t ___clipFillType3, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>::GetEnumerator()
inline Enumerator_t2865999200  List_1_GetEnumerator_m1025021732 (List_1_t976755323 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2865999200  (*) (List_1_t976755323 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>::get_Current()
inline List_1_t3799647877 * Enumerator_get_Current_m2583456201 (Enumerator_t2865999200 * __this, const RuntimeMethod* method)
{
	return ((  List_1_t3799647877 * (*) (Enumerator_t2865999200 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>::GetEnumerator()
inline Enumerator_t1393924458  List_1_GetEnumerator_m531684481 (List_1_t3799647877 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1393924458  (*) (List_1_t3799647877 *, const RuntimeMethod*))List_1_GetEnumerator_m531684481_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>::get_Current()
inline IntPoint_t2327573135  Enumerator_get_Current_m713232202 (Enumerator_t1393924458 * __this, const RuntimeMethod* method)
{
	return ((  IntPoint_t2327573135  (*) (Enumerator_t1393924458 *, const RuntimeMethod*))Enumerator_get_Current_m713232202_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>::MoveNext()
inline bool Enumerator_MoveNext_m47157718 (Enumerator_t1393924458 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1393924458 *, const RuntimeMethod*))Enumerator_MoveNext_m47157718_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>::Dispose()
inline void Enumerator_Dispose_m1296738317 (Enumerator_t1393924458 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1393924458 *, const RuntimeMethod*))Enumerator_Dispose_m1296738317_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>::Insert(System.Int32,!0)
inline void List_1_Insert_m2826020932 (List_1_t1902671575 * __this, int32_t p0, Point2d_1_t430596833  p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1902671575 *, int32_t, Point2d_1_t430596833 , const RuntimeMethod*))List_1_Insert_m2826020932_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>::MoveNext()
inline bool Enumerator_MoveNext_m1025732668 (Enumerator_t2865999200 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2865999200 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>::Dispose()
inline void Enumerator_Dispose_m3359721649 (Enumerator_t2865999200 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2865999200 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
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
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>> Mapbox.VectorTile.Geometry.DecodeGeometry::GetGeometry(System.UInt64,Mapbox.VectorTile.Geometry.GeomType,System.Collections.Generic.List`1<System.UInt32>,System.Single)
extern "C" IL2CPP_METHOD_ATTR List_1_t3374746317 * DecodeGeometry_GetGeometry_m4217266931 (RuntimeObject * __this /* static, unused */, uint64_t ___extent0, int32_t ___geomType1, List_1_t4032136720 * ___geometryCommands2, float ___scale3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DecodeGeometry_GetGeometry_m4217266931_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3374746317 * V_0 = NULL;
	List_1_t1902671575 * V_1 = NULL;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	int32_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	Point2d_1_t430596833  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Point2d_1_t430596833  V_12;
	memset(&V_12, 0, sizeof(V_12));
	bool V_13 = false;
	Point2d_1_t430596833  V_14;
	memset(&V_14, 0, sizeof(V_14));
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	List_1_t3374746317 * V_20 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B18_0 = 0;
	{
		List_1_t3374746317 * L_0 = (List_1_t3374746317 *)il2cpp_codegen_object_new(List_1_t3374746317_il2cpp_TypeInfo_var);
		List_1__ctor_m3363723201(L_0, /*hidden argument*/List_1__ctor_m3363723201_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t1902671575 * L_1 = (List_1_t1902671575 *)il2cpp_codegen_object_new(List_1_t1902671575_il2cpp_TypeInfo_var);
		List_1__ctor_m3071334132(L_1, /*hidden argument*/List_1__ctor_m3071334132_RuntimeMethod_var);
		V_1 = L_1;
		V_2 = (((int64_t)((int64_t)0)));
		V_3 = (((int64_t)((int64_t)0)));
		List_1_t4032136720 * L_2 = ___geometryCommands2;
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m603191597(L_2, /*hidden argument*/List_1_get_Count_m603191597_RuntimeMethod_var);
		V_4 = L_3;
		V_5 = 0;
		goto IL_0130;
	}

IL_0023:
	{
		List_1_t4032136720 * L_4 = ___geometryCommands2;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		uint32_t L_6 = List_1_get_Item_m809167354(L_4, L_5, /*hidden argument*/List_1_get_Item_m809167354_RuntimeMethod_var);
		V_6 = L_6;
		uint32_t L_7 = V_6;
		V_7 = ((int32_t)((int32_t)L_7&(int32_t)7));
		uint32_t L_8 = V_6;
		V_8 = ((int32_t)((uint32_t)L_8>>3));
		int32_t L_9 = V_7;
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_10 = V_7;
		G_B4_0 = ((((int32_t)L_10) == ((int32_t)2))? 1 : 0);
		goto IL_0047;
	}

IL_0046:
	{
		G_B4_0 = 1;
	}

IL_0047:
	{
		V_9 = (bool)G_B4_0;
		bool L_11 = V_9;
		if (!L_11)
		{
			goto IL_00f6;
		}
	}
	{
		V_10 = 0;
		goto IL_00e4;
	}

IL_0059:
	{
		List_1_t4032136720 * L_12 = ___geometryCommands2;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		uint32_t L_14 = List_1_get_Item_m809167354(L_12, ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), /*hidden argument*/List_1_get_Item_m809167354_RuntimeMethod_var);
		List_1_t4032136720 * L_15 = ___geometryCommands2;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		uint32_t L_17 = List_1_get_Item_m809167354(L_15, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)2)), /*hidden argument*/List_1_get_Item_m809167354_RuntimeMethod_var);
		Point2d_1_t430596833  L_18 = DecodeGeometry_zigzagDecode_m937525462(NULL /*static, unused*/, (((int64_t)((uint64_t)L_14))), (((int64_t)((uint64_t)L_17))), /*hidden argument*/NULL);
		V_11 = L_18;
		int64_t L_19 = V_2;
		Point2d_1_t430596833  L_20 = V_11;
		int64_t L_21 = L_20.get_X_0();
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_19, (int64_t)L_21));
		int64_t L_22 = V_3;
		Point2d_1_t430596833  L_23 = V_11;
		int64_t L_24 = L_23.get_Y_1();
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_22, (int64_t)L_24));
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)2));
		int32_t L_26 = V_7;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_00a1;
		}
	}
	{
		List_1_t1902671575 * L_27 = V_1;
		NullCheck(L_27);
		int32_t L_28 = List_1_get_Count_m5074056(L_27, /*hidden argument*/List_1_get_Count_m5074056_RuntimeMethod_var);
		G_B9_0 = ((((int32_t)L_28) > ((int32_t)0))? 1 : 0);
		goto IL_00a2;
	}

IL_00a1:
	{
		G_B9_0 = 0;
	}

IL_00a2:
	{
		V_13 = (bool)G_B9_0;
		bool L_29 = V_13;
		if (!L_29)
		{
			goto IL_00b8;
		}
	}
	{
		List_1_t3374746317 * L_30 = V_0;
		List_1_t1902671575 * L_31 = V_1;
		NullCheck(L_30);
		List_1_Add_m4058561955(L_30, L_31, /*hidden argument*/List_1_Add_m4058561955_RuntimeMethod_var);
		List_1_t1902671575 * L_32 = (List_1_t1902671575 *)il2cpp_codegen_object_new(List_1_t1902671575_il2cpp_TypeInfo_var);
		List_1__ctor_m3071334132(L_32, /*hidden argument*/List_1__ctor_m3071334132_RuntimeMethod_var);
		V_1 = L_32;
	}

IL_00b8:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(Point2d_1_t430596833 ));
		int64_t L_33 = V_2;
		(&V_14)->set_X_0(L_33);
		int64_t L_34 = V_3;
		(&V_14)->set_Y_1(L_34);
		Point2d_1_t430596833  L_35 = V_14;
		V_12 = L_35;
		List_1_t1902671575 * L_36 = V_1;
		Point2d_1_t430596833  L_37 = V_12;
		NullCheck(L_36);
		List_1_Add_m525322066(L_36, L_37, /*hidden argument*/List_1_Add_m525322066_RuntimeMethod_var);
		int32_t L_38 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00e4:
	{
		int32_t L_39 = V_10;
		uint32_t L_40 = V_8;
		V_15 = (bool)((((int64_t)(((int64_t)((int64_t)L_39)))) < ((int64_t)(((int64_t)((uint64_t)L_40)))))? 1 : 0);
		bool L_41 = V_15;
		if (L_41)
		{
			goto IL_0059;
		}
	}
	{
	}

IL_00f6:
	{
		int32_t L_42 = V_7;
		V_16 = (bool)((((int32_t)L_42) == ((int32_t)7))? 1 : 0);
		bool L_43 = V_16;
		if (!L_43)
		{
			goto IL_0129;
		}
	}
	{
		int32_t L_44 = ___geomType1;
		if ((!(((uint32_t)L_44) == ((uint32_t)3))))
		{
			goto IL_0111;
		}
	}
	{
		List_1_t1902671575 * L_45 = V_1;
		NullCheck(L_45);
		int32_t L_46 = List_1_get_Count_m5074056(L_45, /*hidden argument*/List_1_get_Count_m5074056_RuntimeMethod_var);
		G_B18_0 = ((((int32_t)L_46) > ((int32_t)0))? 1 : 0);
		goto IL_0112;
	}

IL_0111:
	{
		G_B18_0 = 0;
	}

IL_0112:
	{
		V_17 = (bool)G_B18_0;
		bool L_47 = V_17;
		if (!L_47)
		{
			goto IL_0128;
		}
	}
	{
		List_1_t1902671575 * L_48 = V_1;
		List_1_t1902671575 * L_49 = V_1;
		NullCheck(L_49);
		Point2d_1_t430596833  L_50 = List_1_get_Item_m1111031903(L_49, 0, /*hidden argument*/List_1_get_Item_m1111031903_RuntimeMethod_var);
		NullCheck(L_48);
		List_1_Add_m525322066(L_48, L_50, /*hidden argument*/List_1_Add_m525322066_RuntimeMethod_var);
	}

IL_0128:
	{
	}

IL_0129:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_0130:
	{
		int32_t L_52 = V_5;
		int32_t L_53 = V_4;
		V_18 = (bool)((((int32_t)L_52) < ((int32_t)L_53))? 1 : 0);
		bool L_54 = V_18;
		if (L_54)
		{
			goto IL_0023;
		}
	}
	{
		List_1_t1902671575 * L_55 = V_1;
		NullCheck(L_55);
		int32_t L_56 = List_1_get_Count_m5074056(L_55, /*hidden argument*/List_1_get_Count_m5074056_RuntimeMethod_var);
		V_19 = (bool)((((int32_t)L_56) > ((int32_t)0))? 1 : 0);
		bool L_57 = V_19;
		if (!L_57)
		{
			goto IL_0158;
		}
	}
	{
		List_1_t3374746317 * L_58 = V_0;
		List_1_t1902671575 * L_59 = V_1;
		NullCheck(L_58);
		List_1_Add_m4058561955(L_58, L_59, /*hidden argument*/List_1_Add_m4058561955_RuntimeMethod_var);
	}

IL_0158:
	{
		List_1_t3374746317 * L_60 = V_0;
		V_20 = L_60;
		goto IL_015d;
	}

IL_015d:
	{
		List_1_t3374746317 * L_61 = V_20;
		return L_61;
	}
}
// Mapbox.VectorTile.Geometry.Point2d`1<System.Int64> Mapbox.VectorTile.Geometry.DecodeGeometry::zigzagDecode(System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR Point2d_1_t430596833  DecodeGeometry_zigzagDecode_m937525462 (RuntimeObject * __this /* static, unused */, int64_t ___x0, int64_t ___y1, const RuntimeMethod* method)
{
	Point2d_1_t430596833  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Point2d_1_t430596833  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Point2d_1_t430596833 ));
		int64_t L_0 = ___x0;
		int64_t L_1 = ___x0;
		(&V_0)->set_X_0(((int64_t)((int64_t)((int64_t)((int64_t)L_0>>(int32_t)1))^(int64_t)((-((int64_t)((int64_t)L_1&(int64_t)(((int64_t)((int64_t)1))))))))));
		int64_t L_2 = ___y1;
		int64_t L_3 = ___y1;
		(&V_0)->set_Y_1(((int64_t)((int64_t)((int64_t)((int64_t)L_2>>(int32_t)1))^(int64_t)((-((int64_t)((int64_t)L_3&(int64_t)(((int64_t)((int64_t)1))))))))));
		Point2d_1_t430596833  L_4 = V_0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		Point2d_1_t430596833  L_5 = V_1;
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
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Clipper__ctor_m4161462815 (Clipper_t4158555122 * __this, int32_t ___InitOptions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper__ctor_m4161462815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ClipperBase__ctor_m2145184280(__this, /*hidden argument*/NULL);
		((ClipperBase_t2411222589 *)__this)->set_m_Scanbeam_3((Scanbeam_t3952834741 *)NULL);
		__this->set_m_Maxima_10((Maxima_t4278896992 *)NULL);
		((ClipperBase_t2411222589 *)__this)->set_m_ActiveEdges_5((TEdge_t1694054893 *)NULL);
		__this->set_m_SortedEdges_11((TEdge_t1694054893 *)NULL);
		List_1_t556621665 * L_0 = (List_1_t556621665 *)il2cpp_codegen_object_new(List_1_t556621665_il2cpp_TypeInfo_var);
		List_1__ctor_m3752433088(L_0, /*hidden argument*/List_1__ctor_m3752433088_RuntimeMethod_var);
		__this->set_m_IntersectList_12(L_0);
		MyIntersectNodeSort_t682547759 * L_1 = (MyIntersectNodeSort_t682547759 *)il2cpp_codegen_object_new(MyIntersectNodeSort_t682547759_il2cpp_TypeInfo_var);
		MyIntersectNodeSort__ctor_m928340280(L_1, /*hidden argument*/NULL);
		__this->set_m_IntersectNodeComparer_13(L_1);
		__this->set_m_ExecuteLocked_14((bool)0);
		__this->set_m_UsingPolyTree_19((bool)0);
		List_1_t1788952413 * L_2 = (List_1_t1788952413 *)il2cpp_codegen_object_new(List_1_t1788952413_il2cpp_TypeInfo_var);
		List_1__ctor_m3309552129(L_2, /*hidden argument*/List_1__ctor_m3309552129_RuntimeMethod_var);
		((ClipperBase_t2411222589 *)__this)->set_m_PolyOuts_4(L_2);
		List_1_t3821086104 * L_3 = (List_1_t3821086104 *)il2cpp_codegen_object_new(List_1_t3821086104_il2cpp_TypeInfo_var);
		List_1__ctor_m3761227160(L_3, /*hidden argument*/List_1__ctor_m3761227160_RuntimeMethod_var);
		__this->set_m_Joins_17(L_3);
		List_1_t3821086104 * L_4 = (List_1_t3821086104 *)il2cpp_codegen_object_new(List_1_t3821086104_il2cpp_TypeInfo_var);
		List_1__ctor_m3761227160(L_4, /*hidden argument*/List_1__ctor_m3761227160_RuntimeMethod_var);
		__this->set_m_GhostJoins_18(L_4);
		int32_t L_5 = ___InitOptions0;
		Clipper_set_ReverseSolution_m2878224228(__this, (bool)((!(((uint32_t)((int32_t)((int32_t)1&(int32_t)L_5))) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_6 = ___InitOptions0;
		Clipper_set_StrictlySimple_m1584829957(__this, (bool)((!(((uint32_t)((int32_t)((int32_t)2&(int32_t)L_6))) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_7 = ___InitOptions0;
		ClipperBase_set_PreserveCollinear_m475506320(__this, (bool)((!(((uint32_t)((int32_t)((int32_t)4&(int32_t)L_7))) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::InsertMaxima(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Clipper_InsertMaxima_m906955032 (Clipper_t4158555122 * __this, int64_t ___X0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_InsertMaxima_m906955032_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Maxima_t4278896992 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Maxima_t4278896992 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B9_0 = 0;
	{
		Maxima_t4278896992 * L_0 = (Maxima_t4278896992 *)il2cpp_codegen_object_new(Maxima_t4278896992_il2cpp_TypeInfo_var);
		Maxima__ctor_m3291383381(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Maxima_t4278896992 * L_1 = V_0;
		int64_t L_2 = ___X0;
		NullCheck(L_1);
		L_1->set_X_0(L_2);
		Maxima_t4278896992 * L_3 = __this->get_m_Maxima_10();
		V_1 = (bool)((((RuntimeObject*)(Maxima_t4278896992 *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		Maxima_t4278896992 * L_5 = V_0;
		__this->set_m_Maxima_10(L_5);
		Maxima_t4278896992 * L_6 = __this->get_m_Maxima_10();
		NullCheck(L_6);
		L_6->set_Next_1((Maxima_t4278896992 *)NULL);
		Maxima_t4278896992 * L_7 = __this->get_m_Maxima_10();
		NullCheck(L_7);
		L_7->set_Prev_2((Maxima_t4278896992 *)NULL);
		goto IL_00eb;
	}

IL_0041:
	{
		int64_t L_8 = ___X0;
		Maxima_t4278896992 * L_9 = __this->get_m_Maxima_10();
		NullCheck(L_9);
		int64_t L_10 = L_9->get_X_0();
		V_2 = (bool)((((int64_t)L_8) < ((int64_t)L_10))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		Maxima_t4278896992 * L_12 = V_0;
		Maxima_t4278896992 * L_13 = __this->get_m_Maxima_10();
		NullCheck(L_12);
		L_12->set_Next_1(L_13);
		Maxima_t4278896992 * L_14 = V_0;
		NullCheck(L_14);
		L_14->set_Prev_2((Maxima_t4278896992 *)NULL);
		Maxima_t4278896992 * L_15 = V_0;
		__this->set_m_Maxima_10(L_15);
		goto IL_00eb;
	}

IL_0071:
	{
		Maxima_t4278896992 * L_16 = __this->get_m_Maxima_10();
		V_3 = L_16;
		goto IL_0082;
	}

IL_007b:
	{
		Maxima_t4278896992 * L_17 = V_3;
		NullCheck(L_17);
		Maxima_t4278896992 * L_18 = L_17->get_Next_1();
		V_3 = L_18;
	}

IL_0082:
	{
		Maxima_t4278896992 * L_19 = V_3;
		NullCheck(L_19);
		Maxima_t4278896992 * L_20 = L_19->get_Next_1();
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		int64_t L_21 = ___X0;
		Maxima_t4278896992 * L_22 = V_3;
		NullCheck(L_22);
		Maxima_t4278896992 * L_23 = L_22->get_Next_1();
		NullCheck(L_23);
		int64_t L_24 = L_23->get_X_0();
		G_B9_0 = ((((int32_t)((((int64_t)L_21) < ((int64_t)L_24))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_009e;
	}

IL_009d:
	{
		G_B9_0 = 0;
	}

IL_009e:
	{
		V_4 = (bool)G_B9_0;
		bool L_25 = V_4;
		if (L_25)
		{
			goto IL_007b;
		}
	}
	{
		int64_t L_26 = ___X0;
		Maxima_t4278896992 * L_27 = V_3;
		NullCheck(L_27);
		int64_t L_28 = L_27->get_X_0();
		V_5 = (bool)((((int64_t)L_26) == ((int64_t)L_28))? 1 : 0);
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_00eb;
	}

IL_00b5:
	{
		Maxima_t4278896992 * L_30 = V_0;
		Maxima_t4278896992 * L_31 = V_3;
		NullCheck(L_31);
		Maxima_t4278896992 * L_32 = L_31->get_Next_1();
		NullCheck(L_30);
		L_30->set_Next_1(L_32);
		Maxima_t4278896992 * L_33 = V_0;
		Maxima_t4278896992 * L_34 = V_3;
		NullCheck(L_33);
		L_33->set_Prev_2(L_34);
		Maxima_t4278896992 * L_35 = V_3;
		NullCheck(L_35);
		Maxima_t4278896992 * L_36 = L_35->get_Next_1();
		V_6 = (bool)((!(((RuntimeObject*)(Maxima_t4278896992 *)L_36) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_37 = V_6;
		if (!L_37)
		{
			goto IL_00e3;
		}
	}
	{
		Maxima_t4278896992 * L_38 = V_3;
		NullCheck(L_38);
		Maxima_t4278896992 * L_39 = L_38->get_Next_1();
		Maxima_t4278896992 * L_40 = V_0;
		NullCheck(L_39);
		L_39->set_Prev_2(L_40);
	}

IL_00e3:
	{
		Maxima_t4278896992 * L_41 = V_3;
		Maxima_t4278896992 * L_42 = V_0;
		NullCheck(L_41);
		L_41->set_Next_1(L_42);
	}

IL_00eb:
	{
		return;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::get_ReverseSolution()
extern "C" IL2CPP_METHOD_ATTR bool Clipper_get_ReverseSolution_m605749754 (Clipper_t4158555122 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CReverseSolutionU3Ek__BackingField_20();
		return L_0;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::set_ReverseSolution(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Clipper_set_ReverseSolution_m2878224228 (Clipper_t4158555122 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CReverseSolutionU3Ek__BackingField_20(L_0);
		return;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::get_StrictlySimple()
extern "C" IL2CPP_METHOD_ATTR bool Clipper_get_StrictlySimple_m970398697 (Clipper_t4158555122 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CStrictlySimpleU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::set_StrictlySimple(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Clipper_set_StrictlySimple_m1584829957 (Clipper_t4158555122 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CStrictlySimpleU3Ek__BackingField_21(L_0);
		return;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::Execute(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipType,System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyFillType,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyFillType)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_Execute_m3531475587 (Clipper_t4158555122 * __this, int32_t ___clipType0, List_1_t976755323 * ___solution1, int32_t ___subjFillType2, int32_t ___clipFillType3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_Execute_m3531475587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get_m_ExecuteLocked_14();
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_007e;
	}

IL_000f:
	{
		bool L_2 = ((ClipperBase_t2411222589 *)__this)->get_m_HasOpenPaths_7();
		V_3 = L_2;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		ClipperException_t3118674656 * L_4 = (ClipperException_t3118674656 *)il2cpp_codegen_object_new(ClipperException_t3118674656_il2cpp_TypeInfo_var);
		ClipperException__ctor_m1990918546(L_4, _stringLiteral2966909069, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, Clipper_Execute_m3531475587_RuntimeMethod_var);
	}

IL_0024:
	{
		__this->set_m_ExecuteLocked_14((bool)1);
		List_1_t976755323 * L_5 = ___solution1;
		NullCheck(L_5);
		List_1_Clear_m3859123311(L_5, /*hidden argument*/List_1_Clear_m3859123311_RuntimeMethod_var);
		int32_t L_6 = ___subjFillType2;
		__this->set_m_SubjFillType_16(L_6);
		int32_t L_7 = ___clipFillType3;
		__this->set_m_ClipFillType_15(L_7);
		int32_t L_8 = ___clipType0;
		__this->set_m_ClipType_9(L_8);
		__this->set_m_UsingPolyTree_19((bool)0);
	}

IL_004f:
	try
	{ // begin try (depth: 1)
		{
			bool L_9 = Clipper_ExecuteInternal_m1456444849(__this, /*hidden argument*/NULL);
			V_0 = L_9;
			bool L_10 = V_0;
			V_4 = L_10;
			bool L_11 = V_4;
			if (!L_11)
			{
				goto IL_0066;
			}
		}

IL_005e:
		{
			List_1_t976755323 * L_12 = ___solution1;
			Clipper_BuildResult_m1357438491(__this, L_12, /*hidden argument*/NULL);
		}

IL_0066:
		{
			IL2CPP_LEAVE(0x7A, FINALLY_0069);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0069;
	}

FINALLY_0069:
	{ // begin finally (depth: 1)
		Clipper_DisposeAllPolyPts_m1270209170(__this, /*hidden argument*/NULL);
		__this->set_m_ExecuteLocked_14((bool)0);
		IL2CPP_END_FINALLY(105)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(105)
	{
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007a:
	{
		bool L_13 = V_0;
		V_2 = L_13;
		goto IL_007e;
	}

IL_007e:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::Execute(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipType,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyTree,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyFillType,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyFillType)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_Execute_m84679915 (Clipper_t4158555122 * __this, int32_t ___clipType0, PolyTree_t3708317675 * ___polytree1, int32_t ___subjFillType2, int32_t ___clipFillType3, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get_m_ExecuteLocked_14();
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0060;
	}

IL_000f:
	{
		__this->set_m_ExecuteLocked_14((bool)1);
		int32_t L_2 = ___subjFillType2;
		__this->set_m_SubjFillType_16(L_2);
		int32_t L_3 = ___clipFillType3;
		__this->set_m_ClipFillType_15(L_3);
		int32_t L_4 = ___clipType0;
		__this->set_m_ClipType_9(L_4);
		__this->set_m_UsingPolyTree_19((bool)1);
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			bool L_5 = Clipper_ExecuteInternal_m1456444849(__this, /*hidden argument*/NULL);
			V_0 = L_5;
			bool L_6 = V_0;
			V_3 = L_6;
			bool L_7 = V_3;
			if (!L_7)
			{
				goto IL_0048;
			}
		}

IL_0040:
		{
			PolyTree_t3708317675 * L_8 = ___polytree1;
			Clipper_BuildResult2_m908624350(__this, L_8, /*hidden argument*/NULL);
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_004b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004b;
	}

FINALLY_004b:
	{ // begin finally (depth: 1)
		Clipper_DisposeAllPolyPts_m1270209170(__this, /*hidden argument*/NULL);
		__this->set_m_ExecuteLocked_14((bool)0);
		IL2CPP_END_FINALLY(75)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005c:
	{
		bool L_9 = V_0;
		V_2 = L_9;
		goto IL_0060;
	}

IL_0060:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::FixHoleLinkage(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR void Clipper_FixHoleLinkage_m2496390730 (Clipper_t4158555122 * __this, OutRec_t316877671 * ___outRec0, const RuntimeMethod* method)
{
	OutRec_t316877671 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B16_0 = 0;
	{
		OutRec_t316877671 * L_0 = ___outRec0;
		NullCheck(L_0);
		OutRec_t316877671 * L_1 = L_0->get_FirstLeft_3();
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		OutRec_t316877671 * L_2 = ___outRec0;
		NullCheck(L_2);
		bool L_3 = L_2->get_IsHole_1();
		OutRec_t316877671 * L_4 = ___outRec0;
		NullCheck(L_4);
		OutRec_t316877671 * L_5 = L_4->get_FirstLeft_3();
		NullCheck(L_5);
		bool L_6 = L_5->get_IsHole_1();
		if ((((int32_t)L_3) == ((int32_t)L_6)))
		{
			goto IL_002c;
		}
	}
	{
		OutRec_t316877671 * L_7 = ___outRec0;
		NullCheck(L_7);
		OutRec_t316877671 * L_8 = L_7->get_FirstLeft_3();
		NullCheck(L_8);
		OutPt_t2591102706 * L_9 = L_8->get_Pts_4();
		G_B4_0 = ((!(((RuntimeObject*)(OutPt_t2591102706 *)L_9) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B4_0 = 0;
	}

IL_002d:
	{
		G_B6_0 = G_B4_0;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 1;
	}

IL_0030:
	{
		V_1 = (bool)G_B6_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0071;
	}

IL_0036:
	{
		OutRec_t316877671 * L_11 = ___outRec0;
		NullCheck(L_11);
		OutRec_t316877671 * L_12 = L_11->get_FirstLeft_3();
		V_0 = L_12;
		goto IL_0046;
	}

IL_003f:
	{
		OutRec_t316877671 * L_13 = V_0;
		NullCheck(L_13);
		OutRec_t316877671 * L_14 = L_13->get_FirstLeft_3();
		V_0 = L_14;
	}

IL_0046:
	{
		OutRec_t316877671 * L_15 = V_0;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		OutRec_t316877671 * L_16 = V_0;
		NullCheck(L_16);
		bool L_17 = L_16->get_IsHole_1();
		OutRec_t316877671 * L_18 = ___outRec0;
		NullCheck(L_18);
		bool L_19 = L_18->get_IsHole_1();
		if ((((int32_t)L_17) == ((int32_t)L_19)))
		{
			goto IL_0062;
		}
	}
	{
		OutRec_t316877671 * L_20 = V_0;
		NullCheck(L_20);
		OutPt_t2591102706 * L_21 = L_20->get_Pts_4();
		G_B14_0 = ((((RuntimeObject*)(OutPt_t2591102706 *)L_21) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0063;
	}

IL_0062:
	{
		G_B14_0 = 1;
	}

IL_0063:
	{
		G_B16_0 = G_B14_0;
		goto IL_0066;
	}

IL_0065:
	{
		G_B16_0 = 0;
	}

IL_0066:
	{
		V_2 = (bool)G_B16_0;
		bool L_22 = V_2;
		if (L_22)
		{
			goto IL_003f;
		}
	}
	{
		OutRec_t316877671 * L_23 = ___outRec0;
		OutRec_t316877671 * L_24 = V_0;
		NullCheck(L_23);
		L_23->set_FirstLeft_3(L_24);
	}

IL_0071:
	{
		return;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::ExecuteInternal()
extern "C" IL2CPP_METHOD_ATTR bool Clipper_ExecuteInternal_m1456444849 (Clipper_t4158555122 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_ExecuteInternal_m1456444849_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Enumerator_t3678196290  V_6;
	memset(&V_6, 0, sizeof(V_6));
	OutRec_t316877671 * V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	Enumerator_t3678196290  V_10;
	memset(&V_10, 0, sizeof(V_10));
	OutRec_t316877671 * V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B10_0 = 0;
	int32_t G_B16_0 = 0;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			VirtActionInvoker0::Invoke(4 /* System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::Reset() */, __this);
			__this->set_m_SortedEdges_11((TEdge_t1694054893 *)NULL);
			__this->set_m_Maxima_10((Maxima_t4278896992 *)NULL);
			bool L_0 = ClipperBase_PopScanbeam_m1570193237(__this, (int64_t*)(&V_0), /*hidden argument*/NULL);
			V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
			bool L_1 = V_2;
			if (!L_1)
			{
				goto IL_002d;
			}
		}

IL_0026:
		{
			V_3 = (bool)0;
			IL2CPP_LEAVE(0x1B6, FINALLY_019b);
		}

IL_002d:
		{
			int64_t L_2 = V_0;
			Clipper_InsertLocalMinimaIntoAEL_m294675678(__this, L_2, /*hidden argument*/NULL);
			goto IL_0075;
		}

IL_0037:
		{
			Clipper_ProcessHorizontals_m128429225(__this, /*hidden argument*/NULL);
			List_1_t3821086104 * L_3 = __this->get_m_GhostJoins_18();
			NullCheck(L_3);
			List_1_Clear_m2318313165(L_3, /*hidden argument*/List_1_Clear_m2318313165_RuntimeMethod_var);
			int64_t L_4 = V_1;
			bool L_5 = Clipper_ProcessIntersections_m1183388747(__this, L_4, /*hidden argument*/NULL);
			V_4 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
			bool L_6 = V_4;
			if (!L_6)
			{
				goto IL_0062;
			}
		}

IL_005b:
		{
			V_3 = (bool)0;
			IL2CPP_LEAVE(0x1B6, FINALLY_019b);
		}

IL_0062:
		{
			int64_t L_7 = V_1;
			Clipper_ProcessEdgesAtTopOfScanbeam_m194700658(__this, L_7, /*hidden argument*/NULL);
			int64_t L_8 = V_1;
			V_0 = L_8;
			int64_t L_9 = V_0;
			Clipper_InsertLocalMinimaIntoAEL_m294675678(__this, L_9, /*hidden argument*/NULL);
		}

IL_0075:
		{
			bool L_10 = ClipperBase_PopScanbeam_m1570193237(__this, (int64_t*)(&V_1), /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0087;
			}
		}

IL_007f:
		{
			bool L_11 = ClipperBase_LocalMinimaPending_m2619425210(__this, /*hidden argument*/NULL);
			G_B10_0 = ((int32_t)(L_11));
			goto IL_0088;
		}

IL_0087:
		{
			G_B10_0 = 1;
		}

IL_0088:
		{
			V_5 = (bool)G_B10_0;
			bool L_12 = V_5;
			if (L_12)
			{
				goto IL_0037;
			}
		}

IL_008e:
		{
			List_1_t1788952413 * L_13 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
			NullCheck(L_13);
			Enumerator_t3678196290  L_14 = List_1_GetEnumerator_m3370282004(L_13, /*hidden argument*/List_1_GetEnumerator_m3370282004_RuntimeMethod_var);
			V_6 = L_14;
		}

IL_009c:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00fb;
			}

IL_009e:
			{
				OutRec_t316877671 * L_15 = Enumerator_get_Current_m187002534((Enumerator_t3678196290 *)(&V_6), /*hidden argument*/Enumerator_get_Current_m187002534_RuntimeMethod_var);
				V_7 = L_15;
				OutRec_t316877671 * L_16 = V_7;
				NullCheck(L_16);
				OutPt_t2591102706 * L_17 = L_16->get_Pts_4();
				if (!L_17)
				{
					goto IL_00ba;
				}
			}

IL_00b1:
			{
				OutRec_t316877671 * L_18 = V_7;
				NullCheck(L_18);
				bool L_19 = L_18->get_IsOpen_2();
				G_B16_0 = ((int32_t)(L_19));
				goto IL_00bb;
			}

IL_00ba:
			{
				G_B16_0 = 1;
			}

IL_00bb:
			{
				V_8 = (bool)G_B16_0;
				bool L_20 = V_8;
				if (!L_20)
				{
					goto IL_00c3;
				}
			}

IL_00c1:
			{
				goto IL_00fb;
			}

IL_00c3:
			{
				OutRec_t316877671 * L_21 = V_7;
				NullCheck(L_21);
				bool L_22 = L_21->get_IsHole_1();
				bool L_23 = Clipper_get_ReverseSolution_m605749754(__this, /*hidden argument*/NULL);
				OutRec_t316877671 * L_24 = V_7;
				double L_25 = Clipper_Area_m2096448732(__this, L_24, /*hidden argument*/NULL);
				V_9 = (bool)((((int32_t)((int32_t)((int32_t)L_22^(int32_t)L_23))) == ((int32_t)((((double)L_25) > ((double)(0.0)))? 1 : 0)))? 1 : 0);
				bool L_26 = V_9;
				if (!L_26)
				{
					goto IL_00fa;
				}
			}

IL_00ec:
			{
				OutRec_t316877671 * L_27 = V_7;
				NullCheck(L_27);
				OutPt_t2591102706 * L_28 = L_27->get_Pts_4();
				Clipper_ReversePolyPtLinks_m7158408(__this, L_28, /*hidden argument*/NULL);
			}

IL_00fa:
			{
			}

IL_00fb:
			{
				bool L_29 = Enumerator_MoveNext_m46597772((Enumerator_t3678196290 *)(&V_6), /*hidden argument*/Enumerator_MoveNext_m46597772_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_009e;
				}
			}

IL_0104:
			{
				IL2CPP_LEAVE(0x115, FINALLY_0106);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0106;
		}

FINALLY_0106:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m1989455672((Enumerator_t3678196290 *)(&V_6), /*hidden argument*/Enumerator_Dispose_m1989455672_RuntimeMethod_var);
			IL2CPP_END_FINALLY(262)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(262)
		{
			IL2CPP_JUMP_TBL(0x115, IL_0115)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0115:
		{
			Clipper_JoinCommonEdges_m2915269750(__this, /*hidden argument*/NULL);
			List_1_t1788952413 * L_30 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
			NullCheck(L_30);
			Enumerator_t3678196290  L_31 = List_1_GetEnumerator_m3370282004(L_30, /*hidden argument*/List_1_GetEnumerator_m3370282004_RuntimeMethod_var);
			V_10 = L_31;
		}

IL_012a:
		try
		{ // begin try (depth: 2)
			{
				goto IL_016a;
			}

IL_012c:
			{
				OutRec_t316877671 * L_32 = Enumerator_get_Current_m187002534((Enumerator_t3678196290 *)(&V_10), /*hidden argument*/Enumerator_get_Current_m187002534_RuntimeMethod_var);
				V_11 = L_32;
				OutRec_t316877671 * L_33 = V_11;
				NullCheck(L_33);
				OutPt_t2591102706 * L_34 = L_33->get_Pts_4();
				V_12 = (bool)((((RuntimeObject*)(OutPt_t2591102706 *)L_34) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
				bool L_35 = V_12;
				if (!L_35)
				{
					goto IL_0148;
				}
			}

IL_0146:
			{
				goto IL_016a;
			}

IL_0148:
			{
				OutRec_t316877671 * L_36 = V_11;
				NullCheck(L_36);
				bool L_37 = L_36->get_IsOpen_2();
				V_13 = L_37;
				bool L_38 = V_13;
				if (!L_38)
				{
					goto IL_0160;
				}
			}

IL_0155:
			{
				OutRec_t316877671 * L_39 = V_11;
				Clipper_FixupOutPolyline_m4149716164(__this, L_39, /*hidden argument*/NULL);
				goto IL_0169;
			}

IL_0160:
			{
				OutRec_t316877671 * L_40 = V_11;
				Clipper_FixupOutPolygon_m1262056334(__this, L_40, /*hidden argument*/NULL);
			}

IL_0169:
			{
			}

IL_016a:
			{
				bool L_41 = Enumerator_MoveNext_m46597772((Enumerator_t3678196290 *)(&V_10), /*hidden argument*/Enumerator_MoveNext_m46597772_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_012c;
				}
			}

IL_0173:
			{
				IL2CPP_LEAVE(0x184, FINALLY_0175);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0175;
		}

FINALLY_0175:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m1989455672((Enumerator_t3678196290 *)(&V_10), /*hidden argument*/Enumerator_Dispose_m1989455672_RuntimeMethod_var);
			IL2CPP_END_FINALLY(373)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(373)
		{
			IL2CPP_JUMP_TBL(0x184, IL_0184)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0184:
		{
			bool L_42 = Clipper_get_StrictlySimple_m970398697(__this, /*hidden argument*/NULL);
			V_14 = L_42;
			bool L_43 = V_14;
			if (!L_43)
			{
				goto IL_0197;
			}
		}

IL_0190:
		{
			Clipper_DoSimplePolygons_m1601434794(__this, /*hidden argument*/NULL);
		}

IL_0197:
		{
			V_3 = (bool)1;
			IL2CPP_LEAVE(0x1B6, FINALLY_019b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_019b;
	}

FINALLY_019b:
	{ // begin finally (depth: 1)
		List_1_t3821086104 * L_44 = __this->get_m_Joins_17();
		NullCheck(L_44);
		List_1_Clear_m2318313165(L_44, /*hidden argument*/List_1_Clear_m2318313165_RuntimeMethod_var);
		List_1_t3821086104 * L_45 = __this->get_m_GhostJoins_18();
		NullCheck(L_45);
		List_1_Clear_m2318313165(L_45, /*hidden argument*/List_1_Clear_m2318313165_RuntimeMethod_var);
		IL2CPP_END_FINALLY(411)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(411)
	{
		IL2CPP_JUMP_TBL(0x1B6, IL_01b6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01b6:
	{
		bool L_46 = V_3;
		return L_46;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::DisposeAllPolyPts()
extern "C" IL2CPP_METHOD_ATTR void Clipper_DisposeAllPolyPts_m1270209170 (Clipper_t4158555122 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_DisposeAllPolyPts_m1270209170_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		List_1_t1788952413 * L_0 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m4196692370(L_0, /*hidden argument*/List_1_get_Count_m4196692370_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_001f;
	}

IL_0011:
	{
		int32_t L_2 = V_1;
		ClipperBase_DisposeOutRec_m3331437289(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_001f:
	{
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (L_6)
		{
			goto IL_0011;
		}
	}
	{
		List_1_t1788952413 * L_7 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		NullCheck(L_7);
		List_1_Clear_m2105155972(L_7, /*hidden argument*/List_1_Clear_m2105155972_RuntimeMethod_var);
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::AddJoin(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR void Clipper_AddJoin_m2179968199 (Clipper_t4158555122 * __this, OutPt_t2591102706 * ___Op10, OutPt_t2591102706 * ___Op21, IntPoint_t2327573135  ___OffPt2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_AddJoin_m2179968199_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Join_t2349011362 * V_0 = NULL;
	{
		Join_t2349011362 * L_0 = (Join_t2349011362 *)il2cpp_codegen_object_new(Join_t2349011362_il2cpp_TypeInfo_var);
		Join__ctor_m316918409(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Join_t2349011362 * L_1 = V_0;
		OutPt_t2591102706 * L_2 = ___Op10;
		NullCheck(L_1);
		L_1->set_OutPt1_0(L_2);
		Join_t2349011362 * L_3 = V_0;
		OutPt_t2591102706 * L_4 = ___Op21;
		NullCheck(L_3);
		L_3->set_OutPt2_1(L_4);
		Join_t2349011362 * L_5 = V_0;
		IntPoint_t2327573135  L_6 = ___OffPt2;
		NullCheck(L_5);
		L_5->set_OffPt_2(L_6);
		List_1_t3821086104 * L_7 = __this->get_m_Joins_17();
		Join_t2349011362 * L_8 = V_0;
		NullCheck(L_7);
		List_1_Add_m3668970390(L_7, L_8, /*hidden argument*/List_1_Add_m3668970390_RuntimeMethod_var);
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::AddGhostJoin(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR void Clipper_AddGhostJoin_m2741223903 (Clipper_t4158555122 * __this, OutPt_t2591102706 * ___Op0, IntPoint_t2327573135  ___OffPt1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_AddGhostJoin_m2741223903_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Join_t2349011362 * V_0 = NULL;
	{
		Join_t2349011362 * L_0 = (Join_t2349011362 *)il2cpp_codegen_object_new(Join_t2349011362_il2cpp_TypeInfo_var);
		Join__ctor_m316918409(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Join_t2349011362 * L_1 = V_0;
		OutPt_t2591102706 * L_2 = ___Op0;
		NullCheck(L_1);
		L_1->set_OutPt1_0(L_2);
		Join_t2349011362 * L_3 = V_0;
		IntPoint_t2327573135  L_4 = ___OffPt1;
		NullCheck(L_3);
		L_3->set_OffPt_2(L_4);
		List_1_t3821086104 * L_5 = __this->get_m_GhostJoins_18();
		Join_t2349011362 * L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_m3668970390(L_5, L_6, /*hidden argument*/List_1_Add_m3668970390_RuntimeMethod_var);
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::InsertLocalMinimaIntoAEL(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Clipper_InsertLocalMinimaIntoAEL_m294675678 (Clipper_t4158555122 * __this, int64_t ___botY0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_InsertLocalMinimaIntoAEL_m294675678_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LocalMinima_t86068969 * V_0 = NULL;
	TEdge_t1694054893 * V_1 = NULL;
	TEdge_t1694054893 * V_2 = NULL;
	OutPt_t2591102706 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	Join_t2349011362 * V_16 = NULL;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	OutPt_t2591102706 * V_20 = NULL;
	bool V_21 = false;
	TEdge_t1694054893 * V_22 = NULL;
	bool V_23 = false;
	OutPt_t2591102706 * V_24 = NULL;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B44_0 = 0;
	int32_t G_B53_0 = 0;
	{
		goto IL_03be;
	}

IL_0006:
	{
		LocalMinima_t86068969 * L_0 = V_0;
		NullCheck(L_0);
		TEdge_t1694054893 * L_1 = L_0->get_LeftBound_1();
		V_1 = L_1;
		LocalMinima_t86068969 * L_2 = V_0;
		NullCheck(L_2);
		TEdge_t1694054893 * L_3 = L_2->get_RightBound_2();
		V_2 = L_3;
		V_3 = (OutPt_t2591102706 *)NULL;
		TEdge_t1694054893 * L_4 = V_1;
		V_4 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		TEdge_t1694054893 * L_6 = V_2;
		Clipper_InsertEdgeIntoAEL_m2975059490(__this, L_6, (TEdge_t1694054893 *)NULL, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_7 = V_2;
		Clipper_SetWindingCount_m3553783045(__this, L_7, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_8 = V_2;
		bool L_9 = Clipper_IsContributing_m1843582661(__this, L_8, /*hidden argument*/NULL);
		V_5 = L_9;
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		TEdge_t1694054893 * L_11 = V_2;
		TEdge_t1694054893 * L_12 = V_2;
		NullCheck(L_12);
		IntPoint_t2327573135  L_13 = L_12->get_Bot_0();
		OutPt_t2591102706 * L_14 = Clipper_AddOutPt_m2431700953(__this, L_11, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
	}

IL_004e:
	{
		goto IL_0102;
	}

IL_0054:
	{
		TEdge_t1694054893 * L_15 = V_2;
		V_6 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_15) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00a0;
		}
	}
	{
		TEdge_t1694054893 * L_17 = V_1;
		Clipper_InsertEdgeIntoAEL_m2975059490(__this, L_17, (TEdge_t1694054893 *)NULL, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_18 = V_1;
		Clipper_SetWindingCount_m3553783045(__this, L_18, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_19 = V_1;
		bool L_20 = Clipper_IsContributing_m1843582661(__this, L_19, /*hidden argument*/NULL);
		V_7 = L_20;
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_008b;
		}
	}
	{
		TEdge_t1694054893 * L_22 = V_1;
		TEdge_t1694054893 * L_23 = V_1;
		NullCheck(L_23);
		IntPoint_t2327573135  L_24 = L_23->get_Bot_0();
		OutPt_t2591102706 * L_25 = Clipper_AddOutPt_m2431700953(__this, L_22, L_24, /*hidden argument*/NULL);
		V_3 = L_25;
	}

IL_008b:
	{
		TEdge_t1694054893 * L_26 = V_1;
		NullCheck(L_26);
		IntPoint_t2327573135 * L_27 = L_26->get_address_of_Top_2();
		int64_t L_28 = L_27->get_Y_1();
		ClipperBase_InsertScanbeam_m3852300338(__this, L_28, /*hidden argument*/NULL);
		goto IL_0102;
	}

IL_00a0:
	{
		TEdge_t1694054893 * L_29 = V_1;
		Clipper_InsertEdgeIntoAEL_m2975059490(__this, L_29, (TEdge_t1694054893 *)NULL, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_30 = V_2;
		TEdge_t1694054893 * L_31 = V_1;
		Clipper_InsertEdgeIntoAEL_m2975059490(__this, L_30, L_31, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_32 = V_1;
		Clipper_SetWindingCount_m3553783045(__this, L_32, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_33 = V_2;
		TEdge_t1694054893 * L_34 = V_1;
		NullCheck(L_34);
		int32_t L_35 = L_34->get_WindCnt_8();
		NullCheck(L_33);
		L_33->set_WindCnt_8(L_35);
		TEdge_t1694054893 * L_36 = V_2;
		TEdge_t1694054893 * L_37 = V_1;
		NullCheck(L_37);
		int32_t L_38 = L_37->get_WindCnt2_9();
		NullCheck(L_36);
		L_36->set_WindCnt2_9(L_38);
		TEdge_t1694054893 * L_39 = V_1;
		bool L_40 = Clipper_IsContributing_m1843582661(__this, L_39, /*hidden argument*/NULL);
		V_8 = L_40;
		bool L_41 = V_8;
		if (!L_41)
		{
			goto IL_00ef;
		}
	}
	{
		TEdge_t1694054893 * L_42 = V_1;
		TEdge_t1694054893 * L_43 = V_2;
		TEdge_t1694054893 * L_44 = V_1;
		NullCheck(L_44);
		IntPoint_t2327573135  L_45 = L_44->get_Bot_0();
		OutPt_t2591102706 * L_46 = Clipper_AddLocalMinPoly_m3826382306(__this, L_42, L_43, L_45, /*hidden argument*/NULL);
		V_3 = L_46;
	}

IL_00ef:
	{
		TEdge_t1694054893 * L_47 = V_1;
		NullCheck(L_47);
		IntPoint_t2327573135 * L_48 = L_47->get_address_of_Top_2();
		int64_t L_49 = L_48->get_Y_1();
		ClipperBase_InsertScanbeam_m3852300338(__this, L_49, /*hidden argument*/NULL);
	}

IL_0102:
	{
		TEdge_t1694054893 * L_50 = V_2;
		V_9 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_50) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_51 = V_9;
		if (!L_51)
		{
			goto IL_015e;
		}
	}
	{
		TEdge_t1694054893 * L_52 = V_2;
		bool L_53 = ClipperBase_IsHorizontal_m234918052(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		V_10 = L_53;
		bool L_54 = V_10;
		if (!L_54)
		{
			goto IL_014b;
		}
	}
	{
		TEdge_t1694054893 * L_55 = V_2;
		NullCheck(L_55);
		TEdge_t1694054893 * L_56 = L_55->get_NextInLML_13();
		V_11 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_56) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_0140;
		}
	}
	{
		TEdge_t1694054893 * L_58 = V_2;
		NullCheck(L_58);
		TEdge_t1694054893 * L_59 = L_58->get_NextInLML_13();
		NullCheck(L_59);
		IntPoint_t2327573135 * L_60 = L_59->get_address_of_Top_2();
		int64_t L_61 = L_60->get_Y_1();
		ClipperBase_InsertScanbeam_m3852300338(__this, L_61, /*hidden argument*/NULL);
	}

IL_0140:
	{
		TEdge_t1694054893 * L_62 = V_2;
		Clipper_AddEdgeToSEL_m475729562(__this, L_62, /*hidden argument*/NULL);
		goto IL_015d;
	}

IL_014b:
	{
		TEdge_t1694054893 * L_63 = V_2;
		NullCheck(L_63);
		IntPoint_t2327573135 * L_64 = L_63->get_address_of_Top_2();
		int64_t L_65 = L_64->get_Y_1();
		ClipperBase_InsertScanbeam_m3852300338(__this, L_65, /*hidden argument*/NULL);
	}

IL_015d:
	{
	}

IL_015e:
	{
		TEdge_t1694054893 * L_66 = V_1;
		if (!L_66)
		{
			goto IL_0167;
		}
	}
	{
		TEdge_t1694054893 * L_67 = V_2;
		G_B22_0 = ((((RuntimeObject*)(TEdge_t1694054893 *)L_67) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0168;
	}

IL_0167:
	{
		G_B22_0 = 1;
	}

IL_0168:
	{
		V_12 = (bool)G_B22_0;
		bool L_68 = V_12;
		if (!L_68)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_03be;
	}

IL_0173:
	{
		OutPt_t2591102706 * L_69 = V_3;
		if (!L_69)
		{
			goto IL_0197;
		}
	}
	{
		TEdge_t1694054893 * L_70 = V_2;
		bool L_71 = ClipperBase_IsHorizontal_m234918052(NULL /*static, unused*/, L_70, /*hidden argument*/NULL);
		if (!L_71)
		{
			goto IL_0197;
		}
	}
	{
		List_1_t3821086104 * L_72 = __this->get_m_GhostJoins_18();
		NullCheck(L_72);
		int32_t L_73 = List_1_get_Count_m4197570038(L_72, /*hidden argument*/List_1_get_Count_m4197570038_RuntimeMethod_var);
		if ((((int32_t)L_73) <= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		TEdge_t1694054893 * L_74 = V_2;
		NullCheck(L_74);
		int32_t L_75 = L_74->get_WindDelta_7();
		G_B29_0 = ((!(((uint32_t)L_75) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0198;
	}

IL_0197:
	{
		G_B29_0 = 0;
	}

IL_0198:
	{
		V_13 = (bool)G_B29_0;
		bool L_76 = V_13;
		if (!L_76)
		{
			goto IL_022d;
		}
	}
	{
		List_1_t3821086104 * L_77 = __this->get_m_GhostJoins_18();
		NullCheck(L_77);
		int32_t L_78 = List_1_get_Count_m4197570038(L_77, /*hidden argument*/List_1_get_Count_m4197570038_RuntimeMethod_var);
		V_14 = L_78;
		V_15 = 0;
		goto IL_0220;
	}

IL_01b4:
	{
		List_1_t3821086104 * L_79 = __this->get_m_GhostJoins_18();
		int32_t L_80 = V_15;
		NullCheck(L_79);
		Join_t2349011362 * L_81 = List_1_get_Item_m1875842425(L_79, L_80, /*hidden argument*/List_1_get_Item_m1875842425_RuntimeMethod_var);
		V_16 = L_81;
		Join_t2349011362 * L_82 = V_16;
		NullCheck(L_82);
		OutPt_t2591102706 * L_83 = L_82->get_OutPt1_0();
		NullCheck(L_83);
		IntPoint_t2327573135 * L_84 = L_83->get_address_of_Pt_1();
		int64_t L_85 = L_84->get_X_0();
		Join_t2349011362 * L_86 = V_16;
		NullCheck(L_86);
		IntPoint_t2327573135 * L_87 = L_86->get_address_of_OffPt_2();
		int64_t L_88 = L_87->get_X_0();
		TEdge_t1694054893 * L_89 = V_2;
		NullCheck(L_89);
		IntPoint_t2327573135 * L_90 = L_89->get_address_of_Bot_0();
		int64_t L_91 = L_90->get_X_0();
		TEdge_t1694054893 * L_92 = V_2;
		NullCheck(L_92);
		IntPoint_t2327573135 * L_93 = L_92->get_address_of_Top_2();
		int64_t L_94 = L_93->get_X_0();
		bool L_95 = Clipper_HorzSegmentsOverlap_m2026014840(__this, L_85, L_88, L_91, L_94, /*hidden argument*/NULL);
		V_17 = L_95;
		bool L_96 = V_17;
		if (!L_96)
		{
			goto IL_0219;
		}
	}
	{
		Join_t2349011362 * L_97 = V_16;
		NullCheck(L_97);
		OutPt_t2591102706 * L_98 = L_97->get_OutPt1_0();
		OutPt_t2591102706 * L_99 = V_3;
		Join_t2349011362 * L_100 = V_16;
		NullCheck(L_100);
		IntPoint_t2327573135  L_101 = L_100->get_OffPt_2();
		Clipper_AddJoin_m2179968199(__this, L_98, L_99, L_101, /*hidden argument*/NULL);
	}

IL_0219:
	{
		int32_t L_102 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)1));
	}

IL_0220:
	{
		int32_t L_103 = V_15;
		int32_t L_104 = V_14;
		V_18 = (bool)((((int32_t)L_103) < ((int32_t)L_104))? 1 : 0);
		bool L_105 = V_18;
		if (L_105)
		{
			goto IL_01b4;
		}
	}
	{
	}

IL_022d:
	{
		TEdge_t1694054893 * L_106 = V_1;
		NullCheck(L_106);
		int32_t L_107 = L_106->get_OutIdx_10();
		if ((((int32_t)L_107) < ((int32_t)0)))
		{
			goto IL_02b0;
		}
	}
	{
		TEdge_t1694054893 * L_108 = V_1;
		NullCheck(L_108);
		TEdge_t1694054893 * L_109 = L_108->get_PrevInAEL_15();
		if (!L_109)
		{
			goto IL_02b0;
		}
	}
	{
		TEdge_t1694054893 * L_110 = V_1;
		NullCheck(L_110);
		TEdge_t1694054893 * L_111 = L_110->get_PrevInAEL_15();
		NullCheck(L_111);
		IntPoint_t2327573135 * L_112 = L_111->get_address_of_Curr_1();
		int64_t L_113 = L_112->get_X_0();
		TEdge_t1694054893 * L_114 = V_1;
		NullCheck(L_114);
		IntPoint_t2327573135 * L_115 = L_114->get_address_of_Bot_0();
		int64_t L_116 = L_115->get_X_0();
		if ((!(((uint64_t)L_113) == ((uint64_t)L_116))))
		{
			goto IL_02b0;
		}
	}
	{
		TEdge_t1694054893 * L_117 = V_1;
		NullCheck(L_117);
		TEdge_t1694054893 * L_118 = L_117->get_PrevInAEL_15();
		NullCheck(L_118);
		int32_t L_119 = L_118->get_OutIdx_10();
		if ((((int32_t)L_119) < ((int32_t)0)))
		{
			goto IL_02b0;
		}
	}
	{
		TEdge_t1694054893 * L_120 = V_1;
		NullCheck(L_120);
		TEdge_t1694054893 * L_121 = L_120->get_PrevInAEL_15();
		NullCheck(L_121);
		IntPoint_t2327573135  L_122 = L_121->get_Curr_1();
		TEdge_t1694054893 * L_123 = V_1;
		NullCheck(L_123);
		TEdge_t1694054893 * L_124 = L_123->get_PrevInAEL_15();
		NullCheck(L_124);
		IntPoint_t2327573135  L_125 = L_124->get_Top_2();
		TEdge_t1694054893 * L_126 = V_1;
		NullCheck(L_126);
		IntPoint_t2327573135  L_127 = L_126->get_Curr_1();
		TEdge_t1694054893 * L_128 = V_1;
		NullCheck(L_128);
		IntPoint_t2327573135  L_129 = L_128->get_Top_2();
		bool L_130 = ((ClipperBase_t2411222589 *)__this)->get_m_UseFullRange_6();
		bool L_131 = ClipperBase_SlopesEqual_m2195603954(NULL /*static, unused*/, L_122, L_125, L_127, L_129, L_130, /*hidden argument*/NULL);
		if (!L_131)
		{
			goto IL_02b0;
		}
	}
	{
		TEdge_t1694054893 * L_132 = V_1;
		NullCheck(L_132);
		int32_t L_133 = L_132->get_WindDelta_7();
		if (!L_133)
		{
			goto IL_02b0;
		}
	}
	{
		TEdge_t1694054893 * L_134 = V_1;
		NullCheck(L_134);
		TEdge_t1694054893 * L_135 = L_134->get_PrevInAEL_15();
		NullCheck(L_135);
		int32_t L_136 = L_135->get_WindDelta_7();
		G_B44_0 = ((!(((uint32_t)L_136) <= ((uint32_t)0)))? 1 : 0);
		goto IL_02b1;
	}

IL_02b0:
	{
		G_B44_0 = 0;
	}

IL_02b1:
	{
		V_19 = (bool)G_B44_0;
		bool L_137 = V_19;
		if (!L_137)
		{
			goto IL_02dd;
		}
	}
	{
		TEdge_t1694054893 * L_138 = V_1;
		NullCheck(L_138);
		TEdge_t1694054893 * L_139 = L_138->get_PrevInAEL_15();
		TEdge_t1694054893 * L_140 = V_1;
		NullCheck(L_140);
		IntPoint_t2327573135  L_141 = L_140->get_Bot_0();
		OutPt_t2591102706 * L_142 = Clipper_AddOutPt_m2431700953(__this, L_139, L_141, /*hidden argument*/NULL);
		V_20 = L_142;
		OutPt_t2591102706 * L_143 = V_3;
		OutPt_t2591102706 * L_144 = V_20;
		TEdge_t1694054893 * L_145 = V_1;
		NullCheck(L_145);
		IntPoint_t2327573135  L_146 = L_145->get_Top_2();
		Clipper_AddJoin_m2179968199(__this, L_143, L_144, L_146, /*hidden argument*/NULL);
	}

IL_02dd:
	{
		TEdge_t1694054893 * L_147 = V_1;
		NullCheck(L_147);
		TEdge_t1694054893 * L_148 = L_147->get_NextInAEL_14();
		TEdge_t1694054893 * L_149 = V_2;
		V_21 = (bool)((((int32_t)((((RuntimeObject*)(TEdge_t1694054893 *)L_148) == ((RuntimeObject*)(TEdge_t1694054893 *)L_149))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_150 = V_21;
		if (!L_150)
		{
			goto IL_03bd;
		}
	}
	{
		TEdge_t1694054893 * L_151 = V_2;
		NullCheck(L_151);
		int32_t L_152 = L_151->get_OutIdx_10();
		if ((((int32_t)L_152) < ((int32_t)0)))
		{
			goto IL_0351;
		}
	}
	{
		TEdge_t1694054893 * L_153 = V_2;
		NullCheck(L_153);
		TEdge_t1694054893 * L_154 = L_153->get_PrevInAEL_15();
		NullCheck(L_154);
		int32_t L_155 = L_154->get_OutIdx_10();
		if ((((int32_t)L_155) < ((int32_t)0)))
		{
			goto IL_0351;
		}
	}
	{
		TEdge_t1694054893 * L_156 = V_2;
		NullCheck(L_156);
		TEdge_t1694054893 * L_157 = L_156->get_PrevInAEL_15();
		NullCheck(L_157);
		IntPoint_t2327573135  L_158 = L_157->get_Curr_1();
		TEdge_t1694054893 * L_159 = V_2;
		NullCheck(L_159);
		TEdge_t1694054893 * L_160 = L_159->get_PrevInAEL_15();
		NullCheck(L_160);
		IntPoint_t2327573135  L_161 = L_160->get_Top_2();
		TEdge_t1694054893 * L_162 = V_2;
		NullCheck(L_162);
		IntPoint_t2327573135  L_163 = L_162->get_Curr_1();
		TEdge_t1694054893 * L_164 = V_2;
		NullCheck(L_164);
		IntPoint_t2327573135  L_165 = L_164->get_Top_2();
		bool L_166 = ((ClipperBase_t2411222589 *)__this)->get_m_UseFullRange_6();
		bool L_167 = ClipperBase_SlopesEqual_m2195603954(NULL /*static, unused*/, L_158, L_161, L_163, L_165, L_166, /*hidden argument*/NULL);
		if (!L_167)
		{
			goto IL_0351;
		}
	}
	{
		TEdge_t1694054893 * L_168 = V_2;
		NullCheck(L_168);
		int32_t L_169 = L_168->get_WindDelta_7();
		if (!L_169)
		{
			goto IL_0351;
		}
	}
	{
		TEdge_t1694054893 * L_170 = V_2;
		NullCheck(L_170);
		TEdge_t1694054893 * L_171 = L_170->get_PrevInAEL_15();
		NullCheck(L_171);
		int32_t L_172 = L_171->get_WindDelta_7();
		G_B53_0 = ((!(((uint32_t)L_172) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0352;
	}

IL_0351:
	{
		G_B53_0 = 0;
	}

IL_0352:
	{
		V_23 = (bool)G_B53_0;
		bool L_173 = V_23;
		if (!L_173)
		{
			goto IL_037e;
		}
	}
	{
		TEdge_t1694054893 * L_174 = V_2;
		NullCheck(L_174);
		TEdge_t1694054893 * L_175 = L_174->get_PrevInAEL_15();
		TEdge_t1694054893 * L_176 = V_2;
		NullCheck(L_176);
		IntPoint_t2327573135  L_177 = L_176->get_Bot_0();
		OutPt_t2591102706 * L_178 = Clipper_AddOutPt_m2431700953(__this, L_175, L_177, /*hidden argument*/NULL);
		V_24 = L_178;
		OutPt_t2591102706 * L_179 = V_3;
		OutPt_t2591102706 * L_180 = V_24;
		TEdge_t1694054893 * L_181 = V_2;
		NullCheck(L_181);
		IntPoint_t2327573135  L_182 = L_181->get_Top_2();
		Clipper_AddJoin_m2179968199(__this, L_179, L_180, L_182, /*hidden argument*/NULL);
	}

IL_037e:
	{
		TEdge_t1694054893 * L_183 = V_1;
		NullCheck(L_183);
		TEdge_t1694054893 * L_184 = L_183->get_NextInAEL_14();
		V_22 = L_184;
		TEdge_t1694054893 * L_185 = V_22;
		V_25 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_185) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_186 = V_25;
		if (!L_186)
		{
			goto IL_03bc;
		}
	}
	{
		goto IL_03ae;
	}

IL_0393:
	{
		TEdge_t1694054893 * L_187 = V_2;
		TEdge_t1694054893 * L_188 = V_22;
		TEdge_t1694054893 * L_189 = V_1;
		NullCheck(L_189);
		IntPoint_t2327573135  L_190 = L_189->get_Curr_1();
		Clipper_IntersectEdges_m4288628979(__this, L_187, L_188, L_190, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_191 = V_22;
		NullCheck(L_191);
		TEdge_t1694054893 * L_192 = L_191->get_NextInAEL_14();
		V_22 = L_192;
	}

IL_03ae:
	{
		TEdge_t1694054893 * L_193 = V_22;
		TEdge_t1694054893 * L_194 = V_2;
		V_26 = (bool)((((int32_t)((((RuntimeObject*)(TEdge_t1694054893 *)L_193) == ((RuntimeObject*)(TEdge_t1694054893 *)L_194))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_195 = V_26;
		if (L_195)
		{
			goto IL_0393;
		}
	}

IL_03bc:
	{
	}

IL_03bd:
	{
	}

IL_03be:
	{
		int64_t L_196 = ___botY0;
		bool L_197 = ClipperBase_PopLocalMinima_m1590347675(__this, L_196, (LocalMinima_t86068969 **)(&V_0), /*hidden argument*/NULL);
		V_27 = L_197;
		bool L_198 = V_27;
		if (L_198)
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::InsertEdgeIntoAEL(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void Clipper_InsertEdgeIntoAEL_m2975059490 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___edge0, TEdge_t1694054893 * ___startEdge1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B14_0 = 0;
	{
		TEdge_t1694054893 * L_0 = ((ClipperBase_t2411222589 *)__this)->get_m_ActiveEdges_5();
		V_0 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		TEdge_t1694054893 * L_2 = ___edge0;
		NullCheck(L_2);
		L_2->set_PrevInAEL_15((TEdge_t1694054893 *)NULL);
		TEdge_t1694054893 * L_3 = ___edge0;
		NullCheck(L_3);
		L_3->set_NextInAEL_14((TEdge_t1694054893 *)NULL);
		TEdge_t1694054893 * L_4 = ___edge0;
		((ClipperBase_t2411222589 *)__this)->set_m_ActiveEdges_5(L_4);
		goto IL_00db;
	}

IL_002a:
	{
		TEdge_t1694054893 * L_5 = ___startEdge1;
		if (L_5)
		{
			goto IL_003c;
		}
	}
	{
		TEdge_t1694054893 * L_6 = ((ClipperBase_t2411222589 *)__this)->get_m_ActiveEdges_5();
		TEdge_t1694054893 * L_7 = ___edge0;
		bool L_8 = Clipper_E2InsertsBeforeE1_m638832314(__this, L_6, L_7, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_8));
		goto IL_003d;
	}

IL_003c:
	{
		G_B5_0 = 0;
	}

IL_003d:
	{
		V_1 = (bool)G_B5_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		TEdge_t1694054893 * L_10 = ___edge0;
		NullCheck(L_10);
		L_10->set_PrevInAEL_15((TEdge_t1694054893 *)NULL);
		TEdge_t1694054893 * L_11 = ___edge0;
		TEdge_t1694054893 * L_12 = ((ClipperBase_t2411222589 *)__this)->get_m_ActiveEdges_5();
		NullCheck(L_11);
		L_11->set_NextInAEL_14(L_12);
		TEdge_t1694054893 * L_13 = ((ClipperBase_t2411222589 *)__this)->get_m_ActiveEdges_5();
		TEdge_t1694054893 * L_14 = ___edge0;
		NullCheck(L_13);
		L_13->set_PrevInAEL_15(L_14);
		TEdge_t1694054893 * L_15 = ___edge0;
		((ClipperBase_t2411222589 *)__this)->set_m_ActiveEdges_5(L_15);
		goto IL_00db;
	}

IL_006b:
	{
		TEdge_t1694054893 * L_16 = ___startEdge1;
		V_2 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_16) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_007c;
		}
	}
	{
		TEdge_t1694054893 * L_18 = ((ClipperBase_t2411222589 *)__this)->get_m_ActiveEdges_5();
		___startEdge1 = L_18;
	}

IL_007c:
	{
		goto IL_0086;
	}

IL_007e:
	{
		TEdge_t1694054893 * L_19 = ___startEdge1;
		NullCheck(L_19);
		TEdge_t1694054893 * L_20 = L_19->get_NextInAEL_14();
		___startEdge1 = L_20;
	}

IL_0086:
	{
		TEdge_t1694054893 * L_21 = ___startEdge1;
		NullCheck(L_21);
		TEdge_t1694054893 * L_22 = L_21->get_NextInAEL_14();
		if (!L_22)
		{
			goto IL_00a0;
		}
	}
	{
		TEdge_t1694054893 * L_23 = ___startEdge1;
		NullCheck(L_23);
		TEdge_t1694054893 * L_24 = L_23->get_NextInAEL_14();
		TEdge_t1694054893 * L_25 = ___edge0;
		bool L_26 = Clipper_E2InsertsBeforeE1_m638832314(__this, L_24, L_25, /*hidden argument*/NULL);
		G_B14_0 = ((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		goto IL_00a1;
	}

IL_00a0:
	{
		G_B14_0 = 0;
	}

IL_00a1:
	{
		V_3 = (bool)G_B14_0;
		bool L_27 = V_3;
		if (L_27)
		{
			goto IL_007e;
		}
	}
	{
		TEdge_t1694054893 * L_28 = ___edge0;
		TEdge_t1694054893 * L_29 = ___startEdge1;
		NullCheck(L_29);
		TEdge_t1694054893 * L_30 = L_29->get_NextInAEL_14();
		NullCheck(L_28);
		L_28->set_NextInAEL_14(L_30);
		TEdge_t1694054893 * L_31 = ___startEdge1;
		NullCheck(L_31);
		TEdge_t1694054893 * L_32 = L_31->get_NextInAEL_14();
		V_4 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_32) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_00cc;
		}
	}
	{
		TEdge_t1694054893 * L_34 = ___startEdge1;
		NullCheck(L_34);
		TEdge_t1694054893 * L_35 = L_34->get_NextInAEL_14();
		TEdge_t1694054893 * L_36 = ___edge0;
		NullCheck(L_35);
		L_35->set_PrevInAEL_15(L_36);
	}

IL_00cc:
	{
		TEdge_t1694054893 * L_37 = ___edge0;
		TEdge_t1694054893 * L_38 = ___startEdge1;
		NullCheck(L_37);
		L_37->set_PrevInAEL_15(L_38);
		TEdge_t1694054893 * L_39 = ___startEdge1;
		TEdge_t1694054893 * L_40 = ___edge0;
		NullCheck(L_39);
		L_39->set_NextInAEL_14(L_40);
	}

IL_00db:
	{
		return;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::E2InsertsBeforeE1(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_E2InsertsBeforeE1_m638832314 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e10, TEdge_t1694054893 * ___e21, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		TEdge_t1694054893 * L_0 = ___e21;
		NullCheck(L_0);
		IntPoint_t2327573135 * L_1 = L_0->get_address_of_Curr_1();
		int64_t L_2 = L_1->get_X_0();
		TEdge_t1694054893 * L_3 = ___e10;
		NullCheck(L_3);
		IntPoint_t2327573135 * L_4 = L_3->get_address_of_Curr_1();
		int64_t L_5 = L_4->get_X_0();
		V_0 = (bool)((((int64_t)L_2) == ((int64_t)L_5))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_007c;
		}
	}
	{
		TEdge_t1694054893 * L_7 = ___e21;
		NullCheck(L_7);
		IntPoint_t2327573135 * L_8 = L_7->get_address_of_Top_2();
		int64_t L_9 = L_8->get_Y_1();
		TEdge_t1694054893 * L_10 = ___e10;
		NullCheck(L_10);
		IntPoint_t2327573135 * L_11 = L_10->get_address_of_Top_2();
		int64_t L_12 = L_11->get_Y_1();
		V_1 = (bool)((((int64_t)L_9) > ((int64_t)L_12))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		TEdge_t1694054893 * L_14 = ___e21;
		NullCheck(L_14);
		IntPoint_t2327573135 * L_15 = L_14->get_address_of_Top_2();
		int64_t L_16 = L_15->get_X_0();
		TEdge_t1694054893 * L_17 = ___e10;
		TEdge_t1694054893 * L_18 = ___e21;
		NullCheck(L_18);
		IntPoint_t2327573135 * L_19 = L_18->get_address_of_Top_2();
		int64_t L_20 = L_19->get_Y_1();
		int64_t L_21 = Clipper_TopX_m2701964852(NULL /*static, unused*/, L_17, L_20, /*hidden argument*/NULL);
		V_2 = (bool)((((int64_t)L_16) < ((int64_t)L_21))? 1 : 0);
		goto IL_0097;
	}

IL_005b:
	{
		TEdge_t1694054893 * L_22 = ___e10;
		NullCheck(L_22);
		IntPoint_t2327573135 * L_23 = L_22->get_address_of_Top_2();
		int64_t L_24 = L_23->get_X_0();
		TEdge_t1694054893 * L_25 = ___e21;
		TEdge_t1694054893 * L_26 = ___e10;
		NullCheck(L_26);
		IntPoint_t2327573135 * L_27 = L_26->get_address_of_Top_2();
		int64_t L_28 = L_27->get_Y_1();
		int64_t L_29 = Clipper_TopX_m2701964852(NULL /*static, unused*/, L_25, L_28, /*hidden argument*/NULL);
		V_2 = (bool)((((int64_t)L_24) > ((int64_t)L_29))? 1 : 0);
		goto IL_0097;
	}

IL_007c:
	{
		TEdge_t1694054893 * L_30 = ___e21;
		NullCheck(L_30);
		IntPoint_t2327573135 * L_31 = L_30->get_address_of_Curr_1();
		int64_t L_32 = L_31->get_X_0();
		TEdge_t1694054893 * L_33 = ___e10;
		NullCheck(L_33);
		IntPoint_t2327573135 * L_34 = L_33->get_address_of_Curr_1();
		int64_t L_35 = L_34->get_X_0();
		V_2 = (bool)((((int64_t)L_32) < ((int64_t)L_35))? 1 : 0);
		goto IL_0097;
	}

IL_0097:
	{
		bool L_36 = V_2;
		return L_36;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::IsEvenOddFillType(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_IsEvenOddFillType_m1354744549 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___edge0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		TEdge_t1694054893 * L_0 = ___edge0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_PolyTyp_5();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = __this->get_m_SubjFillType_16();
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_001a:
	{
		int32_t L_4 = __this->get_m_ClipFillType_15();
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_0026:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::IsEvenOddAltFillType(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_IsEvenOddAltFillType_m4123805980 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___edge0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		TEdge_t1694054893 * L_0 = ___edge0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_PolyTyp_5();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = __this->get_m_ClipFillType_15();
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_001a:
	{
		int32_t L_4 = __this->get_m_SubjFillType_16();
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_0026:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::IsContributing(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_IsContributing_m1843582661 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___edge0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	bool V_15 = false;
	int32_t V_16 = 0;
	int32_t G_B8_0 = 0;
	{
		TEdge_t1694054893 * L_0 = ___edge0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_PolyTyp_5();
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = __this->get_m_SubjFillType_16();
		V_0 = L_3;
		int32_t L_4 = __this->get_m_ClipFillType_15();
		V_1 = L_4;
		goto IL_0030;
	}

IL_0020:
	{
		int32_t L_5 = __this->get_m_ClipFillType_15();
		V_0 = L_5;
		int32_t L_6 = __this->get_m_SubjFillType_16();
		V_1 = L_6;
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		V_3 = L_7;
		int32_t L_8 = V_3;
		switch (L_8)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_006d;
			}
			case 2:
			{
				goto IL_008e;
			}
		}
	}
	{
		goto IL_00aa;
	}

IL_0046:
	{
		TEdge_t1694054893 * L_9 = ___edge0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_WindDelta_7();
		if (L_10)
		{
			goto IL_005c;
		}
	}
	{
		TEdge_t1694054893 * L_11 = ___edge0;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_WindCnt_8();
		G_B8_0 = ((((int32_t)((((int32_t)L_12) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B8_0 = 0;
	}

IL_005d:
	{
		V_4 = (bool)G_B8_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		V_5 = (bool)0;
		goto IL_0257;
	}

IL_006b:
	{
		goto IL_00c6;
	}

IL_006d:
	{
		TEdge_t1694054893 * L_14 = ___edge0;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_WindCnt_8();
		int32_t L_16 = il2cpp_codegen_abs(L_15);
		V_6 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_008c;
		}
	}
	{
		V_5 = (bool)0;
		goto IL_0257;
	}

IL_008c:
	{
		goto IL_00c6;
	}

IL_008e:
	{
		TEdge_t1694054893 * L_18 = ___edge0;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_WindCnt_8();
		V_7 = (bool)((((int32_t)((((int32_t)L_19) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_00a8;
		}
	}
	{
		V_5 = (bool)0;
		goto IL_0257;
	}

IL_00a8:
	{
		goto IL_00c6;
	}

IL_00aa:
	{
		TEdge_t1694054893 * L_21 = ___edge0;
		NullCheck(L_21);
		int32_t L_22 = L_21->get_WindCnt_8();
		V_8 = (bool)((((int32_t)((((int32_t)L_22) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_00c4;
		}
	}
	{
		V_5 = (bool)0;
		goto IL_0257;
	}

IL_00c4:
	{
		goto IL_00c6;
	}

IL_00c6:
	{
		int32_t L_24 = __this->get_m_ClipType_9();
		V_9 = L_24;
		int32_t L_25 = V_9;
		switch (L_25)
		{
			case 0:
			{
				goto IL_00ea;
			}
			case 1:
			{
				goto IL_012b;
			}
			case 2:
			{
				goto IL_0172;
			}
			case 3:
			{
				goto IL_0200;
			}
		}
	}
	{
		goto IL_0252;
	}

IL_00ea:
	{
		int32_t L_26 = V_1;
		V_10 = L_26;
		int32_t L_27 = V_10;
		if ((!(((uint32_t)L_27) > ((uint32_t)1))))
		{
			goto IL_00fb;
		}
	}
	{
		goto IL_00f4;
	}

IL_00f4:
	{
		int32_t L_28 = V_10;
		if ((((int32_t)L_28) == ((int32_t)2)))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_011b;
	}

IL_00fb:
	{
		TEdge_t1694054893 * L_29 = ___edge0;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_WindCnt2_9();
		V_5 = (bool)((!(((uint32_t)L_30) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0257;
	}

IL_010b:
	{
		TEdge_t1694054893 * L_31 = ___edge0;
		NullCheck(L_31);
		int32_t L_32 = L_31->get_WindCnt2_9();
		V_5 = (bool)((((int32_t)L_32) > ((int32_t)0))? 1 : 0);
		goto IL_0257;
	}

IL_011b:
	{
		TEdge_t1694054893 * L_33 = ___edge0;
		NullCheck(L_33);
		int32_t L_34 = L_33->get_WindCnt2_9();
		V_5 = (bool)((((int32_t)L_34) < ((int32_t)0))? 1 : 0);
		goto IL_0257;
	}

IL_012b:
	{
		int32_t L_35 = V_1;
		V_11 = L_35;
		int32_t L_36 = V_11;
		if ((!(((uint32_t)L_36) > ((uint32_t)1))))
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0135;
	}

IL_0135:
	{
		int32_t L_37 = V_11;
		if ((((int32_t)L_37) == ((int32_t)2)))
		{
			goto IL_014c;
		}
	}
	{
		goto IL_015f;
	}

IL_013c:
	{
		TEdge_t1694054893 * L_38 = ___edge0;
		NullCheck(L_38);
		int32_t L_39 = L_38->get_WindCnt2_9();
		V_5 = (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		goto IL_0257;
	}

IL_014c:
	{
		TEdge_t1694054893 * L_40 = ___edge0;
		NullCheck(L_40);
		int32_t L_41 = L_40->get_WindCnt2_9();
		V_5 = (bool)((((int32_t)((((int32_t)L_41) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0257;
	}

IL_015f:
	{
		TEdge_t1694054893 * L_42 = ___edge0;
		NullCheck(L_42);
		int32_t L_43 = L_42->get_WindCnt2_9();
		V_5 = (bool)((((int32_t)((((int32_t)L_43) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0257;
	}

IL_0172:
	{
		TEdge_t1694054893 * L_44 = ___edge0;
		NullCheck(L_44);
		int32_t L_45 = L_44->get_PolyTyp_5();
		V_12 = (bool)((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_12;
		if (!L_46)
		{
			goto IL_01c8;
		}
	}
	{
		int32_t L_47 = V_1;
		V_13 = L_47;
		int32_t L_48 = V_13;
		if ((!(((uint32_t)L_48) > ((uint32_t)1))))
		{
			goto IL_0192;
		}
	}
	{
		goto IL_018b;
	}

IL_018b:
	{
		int32_t L_49 = V_13;
		if ((((int32_t)L_49) == ((int32_t)2)))
		{
			goto IL_01a2;
		}
	}
	{
		goto IL_01b5;
	}

IL_0192:
	{
		TEdge_t1694054893 * L_50 = ___edge0;
		NullCheck(L_50);
		int32_t L_51 = L_50->get_WindCnt2_9();
		V_5 = (bool)((((int32_t)L_51) == ((int32_t)0))? 1 : 0);
		goto IL_0257;
	}

IL_01a2:
	{
		TEdge_t1694054893 * L_52 = ___edge0;
		NullCheck(L_52);
		int32_t L_53 = L_52->get_WindCnt2_9();
		V_5 = (bool)((((int32_t)((((int32_t)L_53) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0257;
	}

IL_01b5:
	{
		TEdge_t1694054893 * L_54 = ___edge0;
		NullCheck(L_54);
		int32_t L_55 = L_54->get_WindCnt2_9();
		V_5 = (bool)((((int32_t)((((int32_t)L_55) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0257;
	}

IL_01c8:
	{
		int32_t L_56 = V_1;
		V_14 = L_56;
		int32_t L_57 = V_14;
		if ((!(((uint32_t)L_57) > ((uint32_t)1))))
		{
			goto IL_01d9;
		}
	}
	{
		goto IL_01d2;
	}

IL_01d2:
	{
		int32_t L_58 = V_14;
		if ((((int32_t)L_58) == ((int32_t)2)))
		{
			goto IL_01e6;
		}
	}
	{
		goto IL_01f3;
	}

IL_01d9:
	{
		TEdge_t1694054893 * L_59 = ___edge0;
		NullCheck(L_59);
		int32_t L_60 = L_59->get_WindCnt2_9();
		V_5 = (bool)((!(((uint32_t)L_60) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0257;
	}

IL_01e6:
	{
		TEdge_t1694054893 * L_61 = ___edge0;
		NullCheck(L_61);
		int32_t L_62 = L_61->get_WindCnt2_9();
		V_5 = (bool)((((int32_t)L_62) > ((int32_t)0))? 1 : 0);
		goto IL_0257;
	}

IL_01f3:
	{
		TEdge_t1694054893 * L_63 = ___edge0;
		NullCheck(L_63);
		int32_t L_64 = L_63->get_WindCnt2_9();
		V_5 = (bool)((((int32_t)L_64) < ((int32_t)0))? 1 : 0);
		goto IL_0257;
	}

IL_0200:
	{
		TEdge_t1694054893 * L_65 = ___edge0;
		NullCheck(L_65);
		int32_t L_66 = L_65->get_WindDelta_7();
		V_15 = (bool)((((int32_t)L_66) == ((int32_t)0))? 1 : 0);
		bool L_67 = V_15;
		if (!L_67)
		{
			goto IL_024d;
		}
	}
	{
		int32_t L_68 = V_1;
		V_16 = L_68;
		int32_t L_69 = V_16;
		if ((!(((uint32_t)L_69) > ((uint32_t)1))))
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0219;
	}

IL_0219:
	{
		int32_t L_70 = V_16;
		if ((((int32_t)L_70) == ((int32_t)2)))
		{
			goto IL_022d;
		}
	}
	{
		goto IL_023d;
	}

IL_0220:
	{
		TEdge_t1694054893 * L_71 = ___edge0;
		NullCheck(L_71);
		int32_t L_72 = L_71->get_WindCnt2_9();
		V_5 = (bool)((((int32_t)L_72) == ((int32_t)0))? 1 : 0);
		goto IL_0257;
	}

IL_022d:
	{
		TEdge_t1694054893 * L_73 = ___edge0;
		NullCheck(L_73);
		int32_t L_74 = L_73->get_WindCnt2_9();
		V_5 = (bool)((((int32_t)((((int32_t)L_74) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0257;
	}

IL_023d:
	{
		TEdge_t1694054893 * L_75 = ___edge0;
		NullCheck(L_75);
		int32_t L_76 = L_75->get_WindCnt2_9();
		V_5 = (bool)((((int32_t)((((int32_t)L_76) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0257;
	}

IL_024d:
	{
		V_5 = (bool)1;
		goto IL_0257;
	}

IL_0252:
	{
		V_5 = (bool)1;
		goto IL_0257;
	}

IL_0257:
	{
		bool L_77 = V_5;
		return L_77;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::SetWindingCount(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void Clipper_SetWindingCount_m3553783045 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___edge0, const RuntimeMethod* method)
{
	TEdge_t1694054893 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	TEdge_t1694054893 * V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	TEdge_t1694054893 * G_B16_0 = NULL;
	TEdge_t1694054893 * G_B15_0 = NULL;
	int32_t G_B17_0 = 0;
	TEdge_t1694054893 * G_B17_1 = NULL;
	int32_t G_B23_0 = 0;
	int32_t G_B31_0 = 0;
	TEdge_t1694054893 * G_B37_0 = NULL;
	TEdge_t1694054893 * G_B36_0 = NULL;
	int32_t G_B38_0 = 0;
	TEdge_t1694054893 * G_B38_1 = NULL;
	TEdge_t1694054893 * G_B49_0 = NULL;
	TEdge_t1694054893 * G_B48_0 = NULL;
	int32_t G_B50_0 = 0;
	TEdge_t1694054893 * G_B50_1 = NULL;
	TEdge_t1694054893 * G_B55_0 = NULL;
	TEdge_t1694054893 * G_B54_0 = NULL;
	int32_t G_B56_0 = 0;
	TEdge_t1694054893 * G_B56_1 = NULL;
	TEdge_t1694054893 * G_B67_0 = NULL;
	TEdge_t1694054893 * G_B66_0 = NULL;
	int32_t G_B68_0 = 0;
	TEdge_t1694054893 * G_B68_1 = NULL;
	{
		TEdge_t1694054893 * L_0 = ___edge0;
		NullCheck(L_0);
		TEdge_t1694054893 * L_1 = L_0->get_PrevInAEL_15();
		V_0 = L_1;
		goto IL_0011;
	}

IL_000a:
	{
		TEdge_t1694054893 * L_2 = V_0;
		NullCheck(L_2);
		TEdge_t1694054893 * L_3 = L_2->get_PrevInAEL_15();
		V_0 = L_3;
	}

IL_0011:
	{
		TEdge_t1694054893 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		TEdge_t1694054893 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_PolyTyp_5();
		TEdge_t1694054893 * L_7 = ___edge0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_PolyTyp_5();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_002d;
		}
	}
	{
		TEdge_t1694054893 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_WindDelta_7();
		G_B6_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B6_0 = 1;
	}

IL_002e:
	{
		G_B8_0 = G_B6_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B8_0 = 0;
	}

IL_0031:
	{
		V_1 = (bool)G_B8_0;
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_000a;
		}
	}
	{
		TEdge_t1694054893 * L_12 = V_0;
		V_2 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_12) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0094;
		}
	}
	{
		TEdge_t1694054893 * L_14 = ___edge0;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_PolyTyp_5();
		if (!L_15)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_16 = __this->get_m_ClipFillType_15();
		G_B13_0 = L_16;
		goto IL_0054;
	}

IL_004e:
	{
		int32_t L_17 = __this->get_m_SubjFillType_16();
		G_B13_0 = L_17;
	}

IL_0054:
	{
		V_3 = G_B13_0;
		TEdge_t1694054893 * L_18 = ___edge0;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_WindDelta_7();
		V_4 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_0074;
		}
	}
	{
		TEdge_t1694054893 * L_21 = ___edge0;
		int32_t L_22 = V_3;
		G_B15_0 = L_21;
		if ((((int32_t)L_22) == ((int32_t)3)))
		{
			G_B16_0 = L_21;
			goto IL_006c;
		}
	}
	{
		G_B17_0 = 1;
		G_B17_1 = G_B15_0;
		goto IL_006d;
	}

IL_006c:
	{
		G_B17_0 = (-1);
		G_B17_1 = G_B16_0;
	}

IL_006d:
	{
		NullCheck(G_B17_1);
		G_B17_1->set_WindCnt_8(G_B17_0);
		goto IL_0080;
	}

IL_0074:
	{
		TEdge_t1694054893 * L_23 = ___edge0;
		TEdge_t1694054893 * L_24 = ___edge0;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_WindDelta_7();
		NullCheck(L_23);
		L_23->set_WindCnt_8(L_25);
	}

IL_0080:
	{
		TEdge_t1694054893 * L_26 = ___edge0;
		NullCheck(L_26);
		L_26->set_WindCnt2_9(0);
		TEdge_t1694054893 * L_27 = ((ClipperBase_t2411222589 *)__this)->get_m_ActiveEdges_5();
		V_0 = L_27;
		goto IL_0277;
	}

IL_0094:
	{
		TEdge_t1694054893 * L_28 = ___edge0;
		NullCheck(L_28);
		int32_t L_29 = L_28->get_WindDelta_7();
		if (L_29)
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_30 = __this->get_m_ClipType_9();
		G_B23_0 = ((((int32_t)((((int32_t)L_30) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B23_0 = 0;
	}

IL_00ab:
	{
		V_5 = (bool)G_B23_0;
		bool L_31 = V_5;
		if (!L_31)
		{
			goto IL_00d2;
		}
	}
	{
		TEdge_t1694054893 * L_32 = ___edge0;
		NullCheck(L_32);
		L_32->set_WindCnt_8(1);
		TEdge_t1694054893 * L_33 = ___edge0;
		TEdge_t1694054893 * L_34 = V_0;
		NullCheck(L_34);
		int32_t L_35 = L_34->get_WindCnt2_9();
		NullCheck(L_33);
		L_33->set_WindCnt2_9(L_35);
		TEdge_t1694054893 * L_36 = V_0;
		NullCheck(L_36);
		TEdge_t1694054893 * L_37 = L_36->get_NextInAEL_14();
		V_0 = L_37;
		goto IL_0277;
	}

IL_00d2:
	{
		TEdge_t1694054893 * L_38 = ___edge0;
		bool L_39 = Clipper_IsEvenOddFillType_m1354744549(__this, L_38, /*hidden argument*/NULL);
		V_6 = L_39;
		bool L_40 = V_6;
		if (!L_40)
		{
			goto IL_0177;
		}
	}
	{
		TEdge_t1694054893 * L_41 = ___edge0;
		NullCheck(L_41);
		int32_t L_42 = L_41->get_WindDelta_7();
		V_7 = (bool)((((int32_t)L_42) == ((int32_t)0))? 1 : 0);
		bool L_43 = V_7;
		if (!L_43)
		{
			goto IL_0150;
		}
	}
	{
		V_8 = (bool)1;
		TEdge_t1694054893 * L_44 = V_0;
		NullCheck(L_44);
		TEdge_t1694054893 * L_45 = L_44->get_PrevInAEL_15();
		V_9 = L_45;
		goto IL_0134;
	}

IL_0100:
	{
		TEdge_t1694054893 * L_46 = V_9;
		NullCheck(L_46);
		int32_t L_47 = L_46->get_PolyTyp_5();
		TEdge_t1694054893 * L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_PolyTyp_5();
		if ((!(((uint32_t)L_47) == ((uint32_t)L_49))))
		{
			goto IL_011c;
		}
	}
	{
		TEdge_t1694054893 * L_50 = V_9;
		NullCheck(L_50);
		int32_t L_51 = L_50->get_WindDelta_7();
		G_B31_0 = ((!(((uint32_t)L_51) <= ((uint32_t)0)))? 1 : 0);
		goto IL_011d;
	}

IL_011c:
	{
		G_B31_0 = 0;
	}

IL_011d:
	{
		V_10 = (bool)G_B31_0;
		bool L_52 = V_10;
		if (!L_52)
		{
			goto IL_012a;
		}
	}
	{
		bool L_53 = V_8;
		V_8 = (bool)((((int32_t)L_53) == ((int32_t)0))? 1 : 0);
	}

IL_012a:
	{
		TEdge_t1694054893 * L_54 = V_9;
		NullCheck(L_54);
		TEdge_t1694054893 * L_55 = L_54->get_PrevInAEL_15();
		V_9 = L_55;
	}

IL_0134:
	{
		TEdge_t1694054893 * L_56 = V_9;
		V_11 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_56) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_57 = V_11;
		if (L_57)
		{
			goto IL_0100;
		}
	}
	{
		TEdge_t1694054893 * L_58 = ___edge0;
		bool L_59 = V_8;
		G_B36_0 = L_58;
		if (L_59)
		{
			G_B37_0 = L_58;
			goto IL_0147;
		}
	}
	{
		G_B38_0 = 1;
		G_B38_1 = G_B36_0;
		goto IL_0148;
	}

IL_0147:
	{
		G_B38_0 = 0;
		G_B38_1 = G_B37_0;
	}

IL_0148:
	{
		NullCheck(G_B38_1);
		G_B38_1->set_WindCnt_8(G_B38_0);
		goto IL_015e;
	}

IL_0150:
	{
		TEdge_t1694054893 * L_60 = ___edge0;
		TEdge_t1694054893 * L_61 = ___edge0;
		NullCheck(L_61);
		int32_t L_62 = L_61->get_WindDelta_7();
		NullCheck(L_60);
		L_60->set_WindCnt_8(L_62);
	}

IL_015e:
	{
		TEdge_t1694054893 * L_63 = ___edge0;
		TEdge_t1694054893 * L_64 = V_0;
		NullCheck(L_64);
		int32_t L_65 = L_64->get_WindCnt2_9();
		NullCheck(L_63);
		L_63->set_WindCnt2_9(L_65);
		TEdge_t1694054893 * L_66 = V_0;
		NullCheck(L_66);
		TEdge_t1694054893 * L_67 = L_66->get_NextInAEL_14();
		V_0 = L_67;
		goto IL_0277;
	}

IL_0177:
	{
		TEdge_t1694054893 * L_68 = V_0;
		NullCheck(L_68);
		int32_t L_69 = L_68->get_WindCnt_8();
		TEdge_t1694054893 * L_70 = V_0;
		NullCheck(L_70);
		int32_t L_71 = L_70->get_WindDelta_7();
		V_12 = (bool)((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_69, (int32_t)L_71))) < ((int32_t)0))? 1 : 0);
		bool L_72 = V_12;
		if (!L_72)
		{
			goto IL_01f8;
		}
	}
	{
		TEdge_t1694054893 * L_73 = V_0;
		NullCheck(L_73);
		int32_t L_74 = L_73->get_WindCnt_8();
		int32_t L_75 = il2cpp_codegen_abs(L_74);
		V_13 = (bool)((((int32_t)L_75) > ((int32_t)1))? 1 : 0);
		bool L_76 = V_13;
		if (!L_76)
		{
			goto IL_01de;
		}
	}
	{
		TEdge_t1694054893 * L_77 = V_0;
		NullCheck(L_77);
		int32_t L_78 = L_77->get_WindDelta_7();
		TEdge_t1694054893 * L_79 = ___edge0;
		NullCheck(L_79);
		int32_t L_80 = L_79->get_WindDelta_7();
		V_14 = (bool)((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_78, (int32_t)L_80))) < ((int32_t)0))? 1 : 0);
		bool L_81 = V_14;
		if (!L_81)
		{
			goto IL_01c8;
		}
	}
	{
		TEdge_t1694054893 * L_82 = ___edge0;
		TEdge_t1694054893 * L_83 = V_0;
		NullCheck(L_83);
		int32_t L_84 = L_83->get_WindCnt_8();
		NullCheck(L_82);
		L_82->set_WindCnt_8(L_84);
		goto IL_01db;
	}

IL_01c8:
	{
		TEdge_t1694054893 * L_85 = ___edge0;
		TEdge_t1694054893 * L_86 = V_0;
		NullCheck(L_86);
		int32_t L_87 = L_86->get_WindCnt_8();
		TEdge_t1694054893 * L_88 = ___edge0;
		NullCheck(L_88);
		int32_t L_89 = L_88->get_WindDelta_7();
		NullCheck(L_85);
		L_85->set_WindCnt_8(((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)L_89)));
	}

IL_01db:
	{
		goto IL_01f5;
	}

IL_01de:
	{
		TEdge_t1694054893 * L_90 = ___edge0;
		TEdge_t1694054893 * L_91 = ___edge0;
		NullCheck(L_91);
		int32_t L_92 = L_91->get_WindDelta_7();
		G_B48_0 = L_90;
		if (!L_92)
		{
			G_B49_0 = L_90;
			goto IL_01ef;
		}
	}
	{
		TEdge_t1694054893 * L_93 = ___edge0;
		NullCheck(L_93);
		int32_t L_94 = L_93->get_WindDelta_7();
		G_B50_0 = L_94;
		G_B50_1 = G_B48_0;
		goto IL_01f0;
	}

IL_01ef:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01f0:
	{
		NullCheck(G_B50_1);
		G_B50_1->set_WindCnt_8(G_B50_0);
	}

IL_01f5:
	{
		goto IL_0263;
	}

IL_01f8:
	{
		TEdge_t1694054893 * L_95 = ___edge0;
		NullCheck(L_95);
		int32_t L_96 = L_95->get_WindDelta_7();
		V_15 = (bool)((((int32_t)L_96) == ((int32_t)0))? 1 : 0);
		bool L_97 = V_15;
		if (!L_97)
		{
			goto IL_022b;
		}
	}
	{
		TEdge_t1694054893 * L_98 = ___edge0;
		TEdge_t1694054893 * L_99 = V_0;
		NullCheck(L_99);
		int32_t L_100 = L_99->get_WindCnt_8();
		G_B54_0 = L_98;
		if ((((int32_t)L_100) < ((int32_t)0)))
		{
			G_B55_0 = L_98;
			goto IL_021c;
		}
	}
	{
		TEdge_t1694054893 * L_101 = V_0;
		NullCheck(L_101);
		int32_t L_102 = L_101->get_WindCnt_8();
		G_B56_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)1));
		G_B56_1 = G_B54_0;
		goto IL_0224;
	}

IL_021c:
	{
		TEdge_t1694054893 * L_103 = V_0;
		NullCheck(L_103);
		int32_t L_104 = L_103->get_WindCnt_8();
		G_B56_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_104, (int32_t)1));
		G_B56_1 = G_B55_0;
	}

IL_0224:
	{
		NullCheck(G_B56_1);
		G_B56_1->set_WindCnt_8(G_B56_0);
		goto IL_0262;
	}

IL_022b:
	{
		TEdge_t1694054893 * L_105 = V_0;
		NullCheck(L_105);
		int32_t L_106 = L_105->get_WindDelta_7();
		TEdge_t1694054893 * L_107 = ___edge0;
		NullCheck(L_107);
		int32_t L_108 = L_107->get_WindDelta_7();
		V_16 = (bool)((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_106, (int32_t)L_108))) < ((int32_t)0))? 1 : 0);
		bool L_109 = V_16;
		if (!L_109)
		{
			goto IL_024f;
		}
	}
	{
		TEdge_t1694054893 * L_110 = ___edge0;
		TEdge_t1694054893 * L_111 = V_0;
		NullCheck(L_111);
		int32_t L_112 = L_111->get_WindCnt_8();
		NullCheck(L_110);
		L_110->set_WindCnt_8(L_112);
		goto IL_0262;
	}

IL_024f:
	{
		TEdge_t1694054893 * L_113 = ___edge0;
		TEdge_t1694054893 * L_114 = V_0;
		NullCheck(L_114);
		int32_t L_115 = L_114->get_WindCnt_8();
		TEdge_t1694054893 * L_116 = ___edge0;
		NullCheck(L_116);
		int32_t L_117 = L_116->get_WindDelta_7();
		NullCheck(L_113);
		L_113->set_WindCnt_8(((int32_t)il2cpp_codegen_add((int32_t)L_115, (int32_t)L_117)));
	}

IL_0262:
	{
	}

IL_0263:
	{
		TEdge_t1694054893 * L_118 = ___edge0;
		TEdge_t1694054893 * L_119 = V_0;
		NullCheck(L_119);
		int32_t L_120 = L_119->get_WindCnt2_9();
		NullCheck(L_118);
		L_118->set_WindCnt2_9(L_120);
		TEdge_t1694054893 * L_121 = V_0;
		NullCheck(L_121);
		TEdge_t1694054893 * L_122 = L_121->get_NextInAEL_14();
		V_0 = L_122;
	}

IL_0277:
	{
		TEdge_t1694054893 * L_123 = ___edge0;
		bool L_124 = Clipper_IsEvenOddAltFillType_m4123805980(__this, L_123, /*hidden argument*/NULL);
		V_17 = L_124;
		bool L_125 = V_17;
		if (!L_125)
		{
			goto IL_02c1;
		}
	}
	{
		goto IL_02b1;
	}

IL_0287:
	{
		TEdge_t1694054893 * L_126 = V_0;
		NullCheck(L_126);
		int32_t L_127 = L_126->get_WindDelta_7();
		V_18 = (bool)((!(((uint32_t)L_127) <= ((uint32_t)0)))? 1 : 0);
		bool L_128 = V_18;
		if (!L_128)
		{
			goto IL_02a9;
		}
	}
	{
		TEdge_t1694054893 * L_129 = ___edge0;
		TEdge_t1694054893 * L_130 = ___edge0;
		NullCheck(L_130);
		int32_t L_131 = L_130->get_WindCnt2_9();
		G_B66_0 = L_129;
		if (!L_131)
		{
			G_B67_0 = L_129;
			goto IL_02a3;
		}
	}
	{
		G_B68_0 = 0;
		G_B68_1 = G_B66_0;
		goto IL_02a4;
	}

IL_02a3:
	{
		G_B68_0 = 1;
		G_B68_1 = G_B67_0;
	}

IL_02a4:
	{
		NullCheck(G_B68_1);
		G_B68_1->set_WindCnt2_9(G_B68_0);
	}

IL_02a9:
	{
		TEdge_t1694054893 * L_132 = V_0;
		NullCheck(L_132);
		TEdge_t1694054893 * L_133 = L_132->get_NextInAEL_14();
		V_0 = L_133;
	}

IL_02b1:
	{
		TEdge_t1694054893 * L_134 = V_0;
		TEdge_t1694054893 * L_135 = ___edge0;
		V_19 = (bool)((((int32_t)((((RuntimeObject*)(TEdge_t1694054893 *)L_134) == ((RuntimeObject*)(TEdge_t1694054893 *)L_135))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_136 = V_19;
		if (L_136)
		{
			goto IL_0287;
		}
	}
	{
		goto IL_02ee;
	}

IL_02c1:
	{
		goto IL_02e0;
	}

IL_02c4:
	{
		TEdge_t1694054893 * L_137 = ___edge0;
		TEdge_t1694054893 * L_138 = L_137;
		NullCheck(L_138);
		int32_t L_139 = L_138->get_WindCnt2_9();
		TEdge_t1694054893 * L_140 = V_0;
		NullCheck(L_140);
		int32_t L_141 = L_140->get_WindDelta_7();
		NullCheck(L_138);
		L_138->set_WindCnt2_9(((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)L_141)));
		TEdge_t1694054893 * L_142 = V_0;
		NullCheck(L_142);
		TEdge_t1694054893 * L_143 = L_142->get_NextInAEL_14();
		V_0 = L_143;
	}

IL_02e0:
	{
		TEdge_t1694054893 * L_144 = V_0;
		TEdge_t1694054893 * L_145 = ___edge0;
		V_20 = (bool)((((int32_t)((((RuntimeObject*)(TEdge_t1694054893 *)L_144) == ((RuntimeObject*)(TEdge_t1694054893 *)L_145))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_146 = V_20;
		if (L_146)
		{
			goto IL_02c4;
		}
	}
	{
	}

IL_02ee:
	{
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::AddEdgeToSEL(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void Clipper_AddEdgeToSEL_m475729562 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___edge0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TEdge_t1694054893 * L_0 = __this->get_m_SortedEdges_11();
		V_0 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		TEdge_t1694054893 * L_2 = ___edge0;
		__this->set_m_SortedEdges_11(L_2);
		TEdge_t1694054893 * L_3 = ___edge0;
		NullCheck(L_3);
		L_3->set_PrevInSEL_17((TEdge_t1694054893 *)NULL);
		TEdge_t1694054893 * L_4 = ___edge0;
		NullCheck(L_4);
		L_4->set_NextInSEL_16((TEdge_t1694054893 *)NULL);
		goto IL_004f;
	}

IL_0027:
	{
		TEdge_t1694054893 * L_5 = ___edge0;
		TEdge_t1694054893 * L_6 = __this->get_m_SortedEdges_11();
		NullCheck(L_5);
		L_5->set_NextInSEL_16(L_6);
		TEdge_t1694054893 * L_7 = ___edge0;
		NullCheck(L_7);
		L_7->set_PrevInSEL_17((TEdge_t1694054893 *)NULL);
		TEdge_t1694054893 * L_8 = __this->get_m_SortedEdges_11();
		TEdge_t1694054893 * L_9 = ___edge0;
		NullCheck(L_8);
		L_8->set_PrevInSEL_17(L_9);
		TEdge_t1694054893 * L_10 = ___edge0;
		__this->set_m_SortedEdges_11(L_10);
	}

IL_004f:
	{
		return;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::PopEdgeFromSEL(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge&)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_PopEdgeFromSEL_m2875851177 (Clipper_t4158555122 * __this, TEdge_t1694054893 ** ___e0, const RuntimeMethod* method)
{
	TEdge_t1694054893 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		TEdge_t1694054893 ** L_0 = ___e0;
		TEdge_t1694054893 * L_1 = __this->get_m_SortedEdges_11();
		*((RuntimeObject **)(L_0)) = (RuntimeObject *)L_1;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_0), (RuntimeObject *)L_1);
		TEdge_t1694054893 ** L_2 = ___e0;
		TEdge_t1694054893 * L_3 = *((TEdge_t1694054893 **)L_2);
		V_1 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0051;
	}

IL_0016:
	{
		TEdge_t1694054893 ** L_5 = ___e0;
		TEdge_t1694054893 * L_6 = *((TEdge_t1694054893 **)L_5);
		V_0 = L_6;
		TEdge_t1694054893 ** L_7 = ___e0;
		TEdge_t1694054893 * L_8 = *((TEdge_t1694054893 **)L_7);
		NullCheck(L_8);
		TEdge_t1694054893 * L_9 = L_8->get_NextInSEL_16();
		__this->set_m_SortedEdges_11(L_9);
		TEdge_t1694054893 * L_10 = __this->get_m_SortedEdges_11();
		V_3 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_10) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_003f;
		}
	}
	{
		TEdge_t1694054893 * L_12 = __this->get_m_SortedEdges_11();
		NullCheck(L_12);
		L_12->set_PrevInSEL_17((TEdge_t1694054893 *)NULL);
	}

IL_003f:
	{
		TEdge_t1694054893 * L_13 = V_0;
		NullCheck(L_13);
		L_13->set_NextInSEL_16((TEdge_t1694054893 *)NULL);
		TEdge_t1694054893 * L_14 = V_0;
		NullCheck(L_14);
		L_14->set_PrevInSEL_17((TEdge_t1694054893 *)NULL);
		V_2 = (bool)1;
		goto IL_0051;
	}

IL_0051:
	{
		bool L_15 = V_2;
		return L_15;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::CopyAELToSEL()
extern "C" IL2CPP_METHOD_ATTR void Clipper_CopyAELToSEL_m3587611428 (Clipper_t4158555122 * __this, const RuntimeMethod* method)
{
	TEdge_t1694054893 * V_0 = NULL;
	bool V_1 = false;
	{
		TEdge_t1694054893 * L_0 = ((ClipperBase_t2411222589 *)__this)->get_m_ActiveEdges_5();
		V_0 = L_0;
		TEdge_t1694054893 * L_1 = V_0;
		__this->set_m_SortedEdges_11(L_1);
		goto IL_0032;
	}

IL_0011:
	{
		TEdge_t1694054893 * L_2 = V_0;
		TEdge_t1694054893 * L_3 = V_0;
		NullCheck(L_3);
		TEdge_t1694054893 * L_4 = L_3->get_PrevInAEL_15();
		NullCheck(L_2);
		L_2->set_PrevInSEL_17(L_4);
		TEdge_t1694054893 * L_5 = V_0;
		TEdge_t1694054893 * L_6 = V_0;
		NullCheck(L_6);
		TEdge_t1694054893 * L_7 = L_6->get_NextInAEL_14();
		NullCheck(L_5);
		L_5->set_NextInSEL_16(L_7);
		TEdge_t1694054893 * L_8 = V_0;
		NullCheck(L_8);
		TEdge_t1694054893 * L_9 = L_8->get_NextInAEL_14();
		V_0 = L_9;
	}

IL_0032:
	{
		TEdge_t1694054893 * L_10 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_10) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::SwapPositionsInSEL(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void Clipper_SwapPositionsInSEL_m1038129781 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___edge10, TEdge_t1694054893 * ___edge21, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	TEdge_t1694054893 * V_3 = NULL;
	TEdge_t1694054893 * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	TEdge_t1694054893 * V_8 = NULL;
	TEdge_t1694054893 * V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	TEdge_t1694054893 * V_12 = NULL;
	TEdge_t1694054893 * V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		TEdge_t1694054893 * L_0 = ___edge10;
		NullCheck(L_0);
		TEdge_t1694054893 * L_1 = L_0->get_NextInSEL_16();
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		TEdge_t1694054893 * L_2 = ___edge10;
		NullCheck(L_2);
		TEdge_t1694054893 * L_3 = L_2->get_PrevInSEL_17();
		G_B3_0 = ((((RuntimeObject*)(TEdge_t1694054893 *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		goto IL_01dd;
	}

IL_001e:
	{
		TEdge_t1694054893 * L_5 = ___edge21;
		NullCheck(L_5);
		TEdge_t1694054893 * L_6 = L_5->get_NextInSEL_16();
		if (L_6)
		{
			goto IL_0031;
		}
	}
	{
		TEdge_t1694054893 * L_7 = ___edge21;
		NullCheck(L_7);
		TEdge_t1694054893 * L_8 = L_7->get_PrevInSEL_17();
		G_B8_0 = ((((RuntimeObject*)(TEdge_t1694054893 *)L_8) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0032;
	}

IL_0031:
	{
		G_B8_0 = 0;
	}

IL_0032:
	{
		V_1 = (bool)G_B8_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		goto IL_01dd;
	}

IL_003b:
	{
		TEdge_t1694054893 * L_10 = ___edge10;
		NullCheck(L_10);
		TEdge_t1694054893 * L_11 = L_10->get_NextInSEL_16();
		TEdge_t1694054893 * L_12 = ___edge21;
		V_2 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_11) == ((RuntimeObject*)(TEdge_t1694054893 *)L_12))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_009f;
		}
	}
	{
		TEdge_t1694054893 * L_14 = ___edge21;
		NullCheck(L_14);
		TEdge_t1694054893 * L_15 = L_14->get_NextInSEL_16();
		V_3 = L_15;
		TEdge_t1694054893 * L_16 = V_3;
		V_5 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_0061;
		}
	}
	{
		TEdge_t1694054893 * L_18 = V_3;
		TEdge_t1694054893 * L_19 = ___edge10;
		NullCheck(L_18);
		L_18->set_PrevInSEL_17(L_19);
	}

IL_0061:
	{
		TEdge_t1694054893 * L_20 = ___edge10;
		NullCheck(L_20);
		TEdge_t1694054893 * L_21 = L_20->get_PrevInSEL_17();
		V_4 = L_21;
		TEdge_t1694054893 * L_22 = V_4;
		V_6 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_22) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_007c;
		}
	}
	{
		TEdge_t1694054893 * L_24 = V_4;
		TEdge_t1694054893 * L_25 = ___edge21;
		NullCheck(L_24);
		L_24->set_NextInSEL_16(L_25);
	}

IL_007c:
	{
		TEdge_t1694054893 * L_26 = ___edge21;
		TEdge_t1694054893 * L_27 = V_4;
		NullCheck(L_26);
		L_26->set_PrevInSEL_17(L_27);
		TEdge_t1694054893 * L_28 = ___edge21;
		TEdge_t1694054893 * L_29 = ___edge10;
		NullCheck(L_28);
		L_28->set_NextInSEL_16(L_29);
		TEdge_t1694054893 * L_30 = ___edge10;
		TEdge_t1694054893 * L_31 = ___edge21;
		NullCheck(L_30);
		L_30->set_PrevInSEL_17(L_31);
		TEdge_t1694054893 * L_32 = ___edge10;
		TEdge_t1694054893 * L_33 = V_3;
		NullCheck(L_32);
		L_32->set_NextInSEL_16(L_33);
		goto IL_01af;
	}

IL_009f:
	{
		TEdge_t1694054893 * L_34 = ___edge21;
		NullCheck(L_34);
		TEdge_t1694054893 * L_35 = L_34->get_NextInSEL_16();
		TEdge_t1694054893 * L_36 = ___edge10;
		V_7 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_35) == ((RuntimeObject*)(TEdge_t1694054893 *)L_36))? 1 : 0);
		bool L_37 = V_7;
		if (!L_37)
		{
			goto IL_0109;
		}
	}
	{
		TEdge_t1694054893 * L_38 = ___edge10;
		NullCheck(L_38);
		TEdge_t1694054893 * L_39 = L_38->get_NextInSEL_16();
		V_8 = L_39;
		TEdge_t1694054893 * L_40 = V_8;
		V_10 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_40) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_41 = V_10;
		if (!L_41)
		{
			goto IL_00ca;
		}
	}
	{
		TEdge_t1694054893 * L_42 = V_8;
		TEdge_t1694054893 * L_43 = ___edge21;
		NullCheck(L_42);
		L_42->set_PrevInSEL_17(L_43);
	}

IL_00ca:
	{
		TEdge_t1694054893 * L_44 = ___edge21;
		NullCheck(L_44);
		TEdge_t1694054893 * L_45 = L_44->get_PrevInSEL_17();
		V_9 = L_45;
		TEdge_t1694054893 * L_46 = V_9;
		V_11 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_46) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_47 = V_11;
		if (!L_47)
		{
			goto IL_00e5;
		}
	}
	{
		TEdge_t1694054893 * L_48 = V_9;
		TEdge_t1694054893 * L_49 = ___edge10;
		NullCheck(L_48);
		L_48->set_NextInSEL_16(L_49);
	}

IL_00e5:
	{
		TEdge_t1694054893 * L_50 = ___edge10;
		TEdge_t1694054893 * L_51 = V_9;
		NullCheck(L_50);
		L_50->set_PrevInSEL_17(L_51);
		TEdge_t1694054893 * L_52 = ___edge10;
		TEdge_t1694054893 * L_53 = ___edge21;
		NullCheck(L_52);
		L_52->set_NextInSEL_16(L_53);
		TEdge_t1694054893 * L_54 = ___edge21;
		TEdge_t1694054893 * L_55 = ___edge10;
		NullCheck(L_54);
		L_54->set_PrevInSEL_17(L_55);
		TEdge_t1694054893 * L_56 = ___edge21;
		TEdge_t1694054893 * L_57 = V_8;
		NullCheck(L_56);
		L_56->set_NextInSEL_16(L_57);
		goto IL_01af;
	}

IL_0109:
	{
		TEdge_t1694054893 * L_58 = ___edge10;
		NullCheck(L_58);
		TEdge_t1694054893 * L_59 = L_58->get_NextInSEL_16();
		V_12 = L_59;
		TEdge_t1694054893 * L_60 = ___edge10;
		NullCheck(L_60);
		TEdge_t1694054893 * L_61 = L_60->get_PrevInSEL_17();
		V_13 = L_61;
		TEdge_t1694054893 * L_62 = ___edge10;
		TEdge_t1694054893 * L_63 = ___edge21;
		NullCheck(L_63);
		TEdge_t1694054893 * L_64 = L_63->get_NextInSEL_16();
		NullCheck(L_62);
		L_62->set_NextInSEL_16(L_64);
		TEdge_t1694054893 * L_65 = ___edge10;
		NullCheck(L_65);
		TEdge_t1694054893 * L_66 = L_65->get_NextInSEL_16();
		V_14 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_66) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_67 = V_14;
		if (!L_67)
		{
			goto IL_0141;
		}
	}
	{
		TEdge_t1694054893 * L_68 = ___edge10;
		NullCheck(L_68);
		TEdge_t1694054893 * L_69 = L_68->get_NextInSEL_16();
		TEdge_t1694054893 * L_70 = ___edge10;
		NullCheck(L_69);
		L_69->set_PrevInSEL_17(L_70);
	}

IL_0141:
	{
		TEdge_t1694054893 * L_71 = ___edge10;
		TEdge_t1694054893 * L_72 = ___edge21;
		NullCheck(L_72);
		TEdge_t1694054893 * L_73 = L_72->get_PrevInSEL_17();
		NullCheck(L_71);
		L_71->set_PrevInSEL_17(L_73);
		TEdge_t1694054893 * L_74 = ___edge10;
		NullCheck(L_74);
		TEdge_t1694054893 * L_75 = L_74->get_PrevInSEL_17();
		V_15 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_75) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_76 = V_15;
		if (!L_76)
		{
			goto IL_0168;
		}
	}
	{
		TEdge_t1694054893 * L_77 = ___edge10;
		NullCheck(L_77);
		TEdge_t1694054893 * L_78 = L_77->get_PrevInSEL_17();
		TEdge_t1694054893 * L_79 = ___edge10;
		NullCheck(L_78);
		L_78->set_NextInSEL_16(L_79);
	}

IL_0168:
	{
		TEdge_t1694054893 * L_80 = ___edge21;
		TEdge_t1694054893 * L_81 = V_12;
		NullCheck(L_80);
		L_80->set_NextInSEL_16(L_81);
		TEdge_t1694054893 * L_82 = ___edge21;
		NullCheck(L_82);
		TEdge_t1694054893 * L_83 = L_82->get_NextInSEL_16();
		V_16 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_83) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_84 = V_16;
		if (!L_84)
		{
			goto IL_018b;
		}
	}
	{
		TEdge_t1694054893 * L_85 = ___edge21;
		NullCheck(L_85);
		TEdge_t1694054893 * L_86 = L_85->get_NextInSEL_16();
		TEdge_t1694054893 * L_87 = ___edge21;
		NullCheck(L_86);
		L_86->set_PrevInSEL_17(L_87);
	}

IL_018b:
	{
		TEdge_t1694054893 * L_88 = ___edge21;
		TEdge_t1694054893 * L_89 = V_13;
		NullCheck(L_88);
		L_88->set_PrevInSEL_17(L_89);
		TEdge_t1694054893 * L_90 = ___edge21;
		NullCheck(L_90);
		TEdge_t1694054893 * L_91 = L_90->get_PrevInSEL_17();
		V_17 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_91) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_92 = V_17;
		if (!L_92)
		{
			goto IL_01ae;
		}
	}
	{
		TEdge_t1694054893 * L_93 = ___edge21;
		NullCheck(L_93);
		TEdge_t1694054893 * L_94 = L_93->get_PrevInSEL_17();
		TEdge_t1694054893 * L_95 = ___edge21;
		NullCheck(L_94);
		L_94->set_NextInSEL_16(L_95);
	}

IL_01ae:
	{
	}

IL_01af:
	{
		TEdge_t1694054893 * L_96 = ___edge10;
		NullCheck(L_96);
		TEdge_t1694054893 * L_97 = L_96->get_PrevInSEL_17();
		V_18 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_97) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_98 = V_18;
		if (!L_98)
		{
			goto IL_01c7;
		}
	}
	{
		TEdge_t1694054893 * L_99 = ___edge10;
		__this->set_m_SortedEdges_11(L_99);
		goto IL_01dd;
	}

IL_01c7:
	{
		TEdge_t1694054893 * L_100 = ___edge21;
		NullCheck(L_100);
		TEdge_t1694054893 * L_101 = L_100->get_PrevInSEL_17();
		V_19 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_101) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_102 = V_19;
		if (!L_102)
		{
			goto IL_01dd;
		}
	}
	{
		TEdge_t1694054893 * L_103 = ___edge21;
		__this->set_m_SortedEdges_11(L_103);
	}

IL_01dd:
	{
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::AddLocalMaxPoly(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR void Clipper_AddLocalMaxPoly_m2387891006 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e10, TEdge_t1694054893 * ___e21, IntPoint_t2327573135  ___pt2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		TEdge_t1694054893 * L_0 = ___e10;
		IntPoint_t2327573135  L_1 = ___pt2;
		Clipper_AddOutPt_m2431700953(__this, L_0, L_1, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_2 = ___e21;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_WindDelta_7();
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		TEdge_t1694054893 * L_5 = ___e21;
		IntPoint_t2327573135  L_6 = ___pt2;
		Clipper_AddOutPt_m2431700953(__this, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0020:
	{
		TEdge_t1694054893 * L_7 = ___e10;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_OutIdx_10();
		TEdge_t1694054893 * L_9 = ___e21;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_OutIdx_10();
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		TEdge_t1694054893 * L_12 = ___e10;
		NullCheck(L_12);
		L_12->set_OutIdx_10((-1));
		TEdge_t1694054893 * L_13 = ___e21;
		NullCheck(L_13);
		L_13->set_OutIdx_10((-1));
		goto IL_006a;
	}

IL_0044:
	{
		TEdge_t1694054893 * L_14 = ___e10;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_OutIdx_10();
		TEdge_t1694054893 * L_16 = ___e21;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_OutIdx_10();
		V_2 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_0061;
		}
	}
	{
		TEdge_t1694054893 * L_19 = ___e10;
		TEdge_t1694054893 * L_20 = ___e21;
		Clipper_AppendPolygon_m1774317356(__this, L_19, L_20, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_0061:
	{
		TEdge_t1694054893 * L_21 = ___e21;
		TEdge_t1694054893 * L_22 = ___e10;
		Clipper_AppendPolygon_m1774317356(__this, L_21, L_22, /*hidden argument*/NULL);
	}

IL_006a:
	{
		return;
	}
}
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::AddLocalMinPoly(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR OutPt_t2591102706 * Clipper_AddLocalMinPoly_m3826382306 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e10, TEdge_t1694054893 * ___e21, IntPoint_t2327573135  ___pt2, const RuntimeMethod* method)
{
	OutPt_t2591102706 * V_0 = NULL;
	TEdge_t1694054893 * V_1 = NULL;
	TEdge_t1694054893 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int64_t V_7 = 0;
	int64_t V_8 = 0;
	bool V_9 = false;
	OutPt_t2591102706 * V_10 = NULL;
	OutPt_t2591102706 * V_11 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B21_0 = 0;
	{
		TEdge_t1694054893 * L_0 = ___e21;
		bool L_1 = ClipperBase_IsHorizontal_m234918052(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		TEdge_t1694054893 * L_2 = ___e10;
		NullCheck(L_2);
		double L_3 = L_2->get_Dx_4();
		TEdge_t1694054893 * L_4 = ___e21;
		NullCheck(L_4);
		double L_5 = L_4->get_Dx_4();
		G_B3_0 = ((((double)L_3) > ((double)L_5))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_3 = (bool)G_B3_0;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0066;
		}
	}
	{
		TEdge_t1694054893 * L_7 = ___e10;
		IntPoint_t2327573135  L_8 = ___pt2;
		OutPt_t2591102706 * L_9 = Clipper_AddOutPt_m2431700953(__this, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		TEdge_t1694054893 * L_10 = ___e21;
		TEdge_t1694054893 * L_11 = ___e10;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_OutIdx_10();
		NullCheck(L_10);
		L_10->set_OutIdx_10(L_12);
		TEdge_t1694054893 * L_13 = ___e10;
		NullCheck(L_13);
		L_13->set_Side_6(0);
		TEdge_t1694054893 * L_14 = ___e21;
		NullCheck(L_14);
		L_14->set_Side_6(1);
		TEdge_t1694054893 * L_15 = ___e10;
		V_1 = L_15;
		TEdge_t1694054893 * L_16 = V_1;
		NullCheck(L_16);
		TEdge_t1694054893 * L_17 = L_16->get_PrevInAEL_15();
		TEdge_t1694054893 * L_18 = ___e21;
		V_4 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_17) == ((RuntimeObject*)(TEdge_t1694054893 *)L_18))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_005c;
		}
	}
	{
		TEdge_t1694054893 * L_20 = ___e21;
		NullCheck(L_20);
		TEdge_t1694054893 * L_21 = L_20->get_PrevInAEL_15();
		V_2 = L_21;
		goto IL_0063;
	}

IL_005c:
	{
		TEdge_t1694054893 * L_22 = V_1;
		NullCheck(L_22);
		TEdge_t1694054893 * L_23 = L_22->get_PrevInAEL_15();
		V_2 = L_23;
	}

IL_0063:
	{
		goto IL_00ac;
	}

IL_0066:
	{
		TEdge_t1694054893 * L_24 = ___e21;
		IntPoint_t2327573135  L_25 = ___pt2;
		OutPt_t2591102706 * L_26 = Clipper_AddOutPt_m2431700953(__this, L_24, L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		TEdge_t1694054893 * L_27 = ___e10;
		TEdge_t1694054893 * L_28 = ___e21;
		NullCheck(L_28);
		int32_t L_29 = L_28->get_OutIdx_10();
		NullCheck(L_27);
		L_27->set_OutIdx_10(L_29);
		TEdge_t1694054893 * L_30 = ___e10;
		NullCheck(L_30);
		L_30->set_Side_6(1);
		TEdge_t1694054893 * L_31 = ___e21;
		NullCheck(L_31);
		L_31->set_Side_6(0);
		TEdge_t1694054893 * L_32 = ___e21;
		V_1 = L_32;
		TEdge_t1694054893 * L_33 = V_1;
		NullCheck(L_33);
		TEdge_t1694054893 * L_34 = L_33->get_PrevInAEL_15();
		TEdge_t1694054893 * L_35 = ___e10;
		V_5 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_34) == ((RuntimeObject*)(TEdge_t1694054893 *)L_35))? 1 : 0);
		bool L_36 = V_5;
		if (!L_36)
		{
			goto IL_00a4;
		}
	}
	{
		TEdge_t1694054893 * L_37 = ___e10;
		NullCheck(L_37);
		TEdge_t1694054893 * L_38 = L_37->get_PrevInAEL_15();
		V_2 = L_38;
		goto IL_00ab;
	}

IL_00a4:
	{
		TEdge_t1694054893 * L_39 = V_1;
		NullCheck(L_39);
		TEdge_t1694054893 * L_40 = L_39->get_PrevInAEL_15();
		V_2 = L_40;
	}

IL_00ab:
	{
	}

IL_00ac:
	{
		TEdge_t1694054893 * L_41 = V_2;
		if (!L_41)
		{
			goto IL_00bd;
		}
	}
	{
		TEdge_t1694054893 * L_42 = V_2;
		NullCheck(L_42);
		int32_t L_43 = L_42->get_OutIdx_10();
		G_B15_0 = ((((int32_t)((((int32_t)L_43) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00be;
	}

IL_00bd:
	{
		G_B15_0 = 0;
	}

IL_00be:
	{
		V_6 = (bool)G_B15_0;
		bool L_44 = V_6;
		if (!L_44)
		{
			goto IL_0151;
		}
	}
	{
		TEdge_t1694054893 * L_45 = V_2;
		IntPoint_t2327573135  L_46 = ___pt2;
		int64_t L_47 = L_46.get_Y_1();
		int64_t L_48 = Clipper_TopX_m2701964852(NULL /*static, unused*/, L_45, L_47, /*hidden argument*/NULL);
		V_7 = L_48;
		TEdge_t1694054893 * L_49 = V_1;
		IntPoint_t2327573135  L_50 = ___pt2;
		int64_t L_51 = L_50.get_Y_1();
		int64_t L_52 = Clipper_TopX_m2701964852(NULL /*static, unused*/, L_49, L_51, /*hidden argument*/NULL);
		V_8 = L_52;
		int64_t L_53 = V_7;
		int64_t L_54 = V_8;
		if ((!(((uint64_t)L_53) == ((uint64_t)L_54))))
		{
			goto IL_012d;
		}
	}
	{
		TEdge_t1694054893 * L_55 = V_1;
		NullCheck(L_55);
		int32_t L_56 = L_55->get_WindDelta_7();
		if (!L_56)
		{
			goto IL_012d;
		}
	}
	{
		TEdge_t1694054893 * L_57 = V_2;
		NullCheck(L_57);
		int32_t L_58 = L_57->get_WindDelta_7();
		if (!L_58)
		{
			goto IL_012d;
		}
	}
	{
		int64_t L_59 = V_7;
		IntPoint_t2327573135  L_60 = ___pt2;
		int64_t L_61 = L_60.get_Y_1();
		IntPoint_t2327573135  L_62;
		memset(&L_62, 0, sizeof(L_62));
		IntPoint__ctor_m3815773329((&L_62), L_59, L_61, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_63 = V_2;
		NullCheck(L_63);
		IntPoint_t2327573135  L_64 = L_63->get_Top_2();
		int64_t L_65 = V_8;
		IntPoint_t2327573135  L_66 = ___pt2;
		int64_t L_67 = L_66.get_Y_1();
		IntPoint_t2327573135  L_68;
		memset(&L_68, 0, sizeof(L_68));
		IntPoint__ctor_m3815773329((&L_68), L_65, L_67, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_69 = V_1;
		NullCheck(L_69);
		IntPoint_t2327573135  L_70 = L_69->get_Top_2();
		bool L_71 = ((ClipperBase_t2411222589 *)__this)->get_m_UseFullRange_6();
		bool L_72 = ClipperBase_SlopesEqual_m2195603954(NULL /*static, unused*/, L_62, L_64, L_68, L_70, L_71, /*hidden argument*/NULL);
		G_B21_0 = ((int32_t)(L_72));
		goto IL_012e;
	}

IL_012d:
	{
		G_B21_0 = 0;
	}

IL_012e:
	{
		V_9 = (bool)G_B21_0;
		bool L_73 = V_9;
		if (!L_73)
		{
			goto IL_0150;
		}
	}
	{
		TEdge_t1694054893 * L_74 = V_2;
		IntPoint_t2327573135  L_75 = ___pt2;
		OutPt_t2591102706 * L_76 = Clipper_AddOutPt_m2431700953(__this, L_74, L_75, /*hidden argument*/NULL);
		V_10 = L_76;
		OutPt_t2591102706 * L_77 = V_0;
		OutPt_t2591102706 * L_78 = V_10;
		TEdge_t1694054893 * L_79 = V_1;
		NullCheck(L_79);
		IntPoint_t2327573135  L_80 = L_79->get_Top_2();
		Clipper_AddJoin_m2179968199(__this, L_77, L_78, L_80, /*hidden argument*/NULL);
	}

IL_0150:
	{
	}

IL_0151:
	{
		OutPt_t2591102706 * L_81 = V_0;
		V_11 = L_81;
		goto IL_0156;
	}

IL_0156:
	{
		OutPt_t2591102706 * L_82 = V_11;
		return L_82;
	}
}
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::AddOutPt(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR OutPt_t2591102706 * Clipper_AddOutPt_m2431700953 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e0, IntPoint_t2327573135  ___pt1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_AddOutPt_m2431700953_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	OutRec_t316877671 * V_1 = NULL;
	OutPt_t2591102706 * V_2 = NULL;
	bool V_3 = false;
	OutPt_t2591102706 * V_4 = NULL;
	OutRec_t316877671 * V_5 = NULL;
	OutPt_t2591102706 * V_6 = NULL;
	bool V_7 = false;
	OutPt_t2591102706 * V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	{
		TEdge_t1694054893 * L_0 = ___e0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_OutIdx_10();
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_007d;
		}
	}
	{
		OutRec_t316877671 * L_3 = ClipperBase_CreateOutRec_m1973586272(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		OutRec_t316877671 * L_4 = V_1;
		TEdge_t1694054893 * L_5 = ___e0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_WindDelta_7();
		NullCheck(L_4);
		L_4->set_IsOpen_2((bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0));
		OutPt_t2591102706 * L_7 = (OutPt_t2591102706 *)il2cpp_codegen_object_new(OutPt_t2591102706_il2cpp_TypeInfo_var);
		OutPt__ctor_m2666169316(L_7, /*hidden argument*/NULL);
		V_2 = L_7;
		OutRec_t316877671 * L_8 = V_1;
		OutPt_t2591102706 * L_9 = V_2;
		NullCheck(L_8);
		L_8->set_Pts_4(L_9);
		OutPt_t2591102706 * L_10 = V_2;
		OutRec_t316877671 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_Idx_0();
		NullCheck(L_10);
		L_10->set_Idx_0(L_12);
		OutPt_t2591102706 * L_13 = V_2;
		IntPoint_t2327573135  L_14 = ___pt1;
		NullCheck(L_13);
		L_13->set_Pt_1(L_14);
		OutPt_t2591102706 * L_15 = V_2;
		OutPt_t2591102706 * L_16 = V_2;
		NullCheck(L_15);
		L_15->set_Next_2(L_16);
		OutPt_t2591102706 * L_17 = V_2;
		OutPt_t2591102706 * L_18 = V_2;
		NullCheck(L_17);
		L_17->set_Prev_3(L_18);
		OutRec_t316877671 * L_19 = V_1;
		NullCheck(L_19);
		bool L_20 = L_19->get_IsOpen_2();
		V_3 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_0069;
		}
	}
	{
		TEdge_t1694054893 * L_22 = ___e0;
		OutRec_t316877671 * L_23 = V_1;
		Clipper_SetHoleState_m684540413(__this, L_22, L_23, /*hidden argument*/NULL);
	}

IL_0069:
	{
		TEdge_t1694054893 * L_24 = ___e0;
		OutRec_t316877671 * L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = L_25->get_Idx_0();
		NullCheck(L_24);
		L_24->set_OutIdx_10(L_26);
		OutPt_t2591102706 * L_27 = V_2;
		V_4 = L_27;
		goto IL_0154;
	}

IL_007d:
	{
		List_1_t1788952413 * L_28 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		TEdge_t1694054893 * L_29 = ___e0;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_OutIdx_10();
		NullCheck(L_28);
		OutRec_t316877671 * L_31 = List_1_get_Item_m350034741(L_28, L_30, /*hidden argument*/List_1_get_Item_m350034741_RuntimeMethod_var);
		V_5 = L_31;
		OutRec_t316877671 * L_32 = V_5;
		NullCheck(L_32);
		OutPt_t2591102706 * L_33 = L_32->get_Pts_4();
		V_6 = L_33;
		TEdge_t1694054893 * L_34 = ___e0;
		NullCheck(L_34);
		int32_t L_35 = L_34->get_Side_6();
		V_7 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_7;
		if (!L_36)
		{
			goto IL_00b8;
		}
	}
	{
		IntPoint_t2327573135  L_37 = ___pt1;
		OutPt_t2591102706 * L_38 = V_6;
		NullCheck(L_38);
		IntPoint_t2327573135  L_39 = L_38->get_Pt_1();
		bool L_40 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_37, L_39, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_40));
		goto IL_00b9;
	}

IL_00b8:
	{
		G_B7_0 = 0;
	}

IL_00b9:
	{
		V_9 = (bool)G_B7_0;
		bool L_41 = V_9;
		if (!L_41)
		{
			goto IL_00c8;
		}
	}
	{
		OutPt_t2591102706 * L_42 = V_6;
		V_4 = L_42;
		goto IL_0154;
	}

IL_00c8:
	{
		bool L_43 = V_7;
		if (L_43)
		{
			goto IL_00e0;
		}
	}
	{
		IntPoint_t2327573135  L_44 = ___pt1;
		OutPt_t2591102706 * L_45 = V_6;
		NullCheck(L_45);
		OutPt_t2591102706 * L_46 = L_45->get_Prev_3();
		NullCheck(L_46);
		IntPoint_t2327573135  L_47 = L_46->get_Pt_1();
		bool L_48 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_44, L_47, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_48));
		goto IL_00e1;
	}

IL_00e0:
	{
		G_B12_0 = 0;
	}

IL_00e1:
	{
		V_10 = (bool)G_B12_0;
		bool L_49 = V_10;
		if (!L_49)
		{
			goto IL_00f2;
		}
	}
	{
		OutPt_t2591102706 * L_50 = V_6;
		NullCheck(L_50);
		OutPt_t2591102706 * L_51 = L_50->get_Prev_3();
		V_4 = L_51;
		goto IL_0154;
	}

IL_00f2:
	{
		OutPt_t2591102706 * L_52 = (OutPt_t2591102706 *)il2cpp_codegen_object_new(OutPt_t2591102706_il2cpp_TypeInfo_var);
		OutPt__ctor_m2666169316(L_52, /*hidden argument*/NULL);
		V_8 = L_52;
		OutPt_t2591102706 * L_53 = V_8;
		OutRec_t316877671 * L_54 = V_5;
		NullCheck(L_54);
		int32_t L_55 = L_54->get_Idx_0();
		NullCheck(L_53);
		L_53->set_Idx_0(L_55);
		OutPt_t2591102706 * L_56 = V_8;
		IntPoint_t2327573135  L_57 = ___pt1;
		NullCheck(L_56);
		L_56->set_Pt_1(L_57);
		OutPt_t2591102706 * L_58 = V_8;
		OutPt_t2591102706 * L_59 = V_6;
		NullCheck(L_58);
		L_58->set_Next_2(L_59);
		OutPt_t2591102706 * L_60 = V_8;
		OutPt_t2591102706 * L_61 = V_6;
		NullCheck(L_61);
		OutPt_t2591102706 * L_62 = L_61->get_Prev_3();
		NullCheck(L_60);
		L_60->set_Prev_3(L_62);
		OutPt_t2591102706 * L_63 = V_8;
		NullCheck(L_63);
		OutPt_t2591102706 * L_64 = L_63->get_Prev_3();
		OutPt_t2591102706 * L_65 = V_8;
		NullCheck(L_64);
		L_64->set_Next_2(L_65);
		OutPt_t2591102706 * L_66 = V_6;
		OutPt_t2591102706 * L_67 = V_8;
		NullCheck(L_66);
		L_66->set_Prev_3(L_67);
		bool L_68 = V_7;
		V_11 = L_68;
		bool L_69 = V_11;
		if (!L_69)
		{
			goto IL_014e;
		}
	}
	{
		OutRec_t316877671 * L_70 = V_5;
		OutPt_t2591102706 * L_71 = V_8;
		NullCheck(L_70);
		L_70->set_Pts_4(L_71);
	}

IL_014e:
	{
		OutPt_t2591102706 * L_72 = V_8;
		V_4 = L_72;
		goto IL_0154;
	}

IL_0154:
	{
		OutPt_t2591102706 * L_73 = V_4;
		return L_73;
	}
}
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::GetLastOutPt(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR OutPt_t2591102706 * Clipper_GetLastOutPt_m3778549639 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_GetLastOutPt_m3778549639_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OutRec_t316877671 * V_0 = NULL;
	bool V_1 = false;
	OutPt_t2591102706 * V_2 = NULL;
	{
		List_1_t1788952413 * L_0 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		TEdge_t1694054893 * L_1 = ___e0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_OutIdx_10();
		NullCheck(L_0);
		OutRec_t316877671 * L_3 = List_1_get_Item_m350034741(L_0, L_2, /*hidden argument*/List_1_get_Item_m350034741_RuntimeMethod_var);
		V_0 = L_3;
		TEdge_t1694054893 * L_4 = ___e0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_Side_6();
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		OutRec_t316877671 * L_7 = V_0;
		NullCheck(L_7);
		OutPt_t2591102706 * L_8 = L_7->get_Pts_4();
		V_2 = L_8;
		goto IL_0037;
	}

IL_0029:
	{
		OutRec_t316877671 * L_9 = V_0;
		NullCheck(L_9);
		OutPt_t2591102706 * L_10 = L_9->get_Pts_4();
		NullCheck(L_10);
		OutPt_t2591102706 * L_11 = L_10->get_Prev_3();
		V_2 = L_11;
		goto IL_0037;
	}

IL_0037:
	{
		OutPt_t2591102706 * L_12 = V_2;
		return L_12;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::HorzSegmentsOverlap(System.Int64,System.Int64,System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_HorzSegmentsOverlap_m2026014840 (Clipper_t4158555122 * __this, int64_t ___seg1a0, int64_t ___seg1b1, int64_t ___seg2a2, int64_t ___seg2b3, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B7_0 = 0;
	{
		int64_t L_0 = ___seg1a0;
		int64_t L_1 = ___seg1b1;
		V_0 = (bool)((((int64_t)L_0) > ((int64_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		ClipperBase_Swap_m3891450181(__this, (int64_t*)(&___seg1a0), (int64_t*)(&___seg1b1), /*hidden argument*/NULL);
	}

IL_0014:
	{
		int64_t L_3 = ___seg2a2;
		int64_t L_4 = ___seg2b3;
		V_1 = (bool)((((int64_t)L_3) > ((int64_t)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		ClipperBase_Swap_m3891450181(__this, (int64_t*)(&___seg2a2), (int64_t*)(&___seg2b3), /*hidden argument*/NULL);
	}

IL_0028:
	{
		int64_t L_6 = ___seg1a0;
		int64_t L_7 = ___seg2b3;
		if ((((int64_t)L_6) >= ((int64_t)L_7)))
		{
			goto IL_0033;
		}
	}
	{
		int64_t L_8 = ___seg2a2;
		int64_t L_9 = ___seg1b1;
		G_B7_0 = ((((int64_t)L_8) < ((int64_t)L_9))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B7_0 = 0;
	}

IL_0034:
	{
		V_2 = (bool)G_B7_0;
		goto IL_0037;
	}

IL_0037:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::SetHoleState(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR void Clipper_SetHoleState_m684540413 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e0, OutRec_t316877671 * ___outRec1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_SetHoleState_m684540413_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TEdge_t1694054893 * V_0 = NULL;
	TEdge_t1694054893 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		TEdge_t1694054893 * L_0 = ___e0;
		NullCheck(L_0);
		TEdge_t1694054893 * L_1 = L_0->get_PrevInAEL_15();
		V_0 = L_1;
		V_1 = (TEdge_t1694054893 *)NULL;
		goto IL_0052;
	}

IL_000c:
	{
		TEdge_t1694054893 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_OutIdx_10();
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		TEdge_t1694054893 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_WindDelta_7();
		G_B4_0 = ((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B4_0 = 0;
	}

IL_0022:
	{
		V_2 = (bool)G_B4_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		TEdge_t1694054893 * L_7 = V_1;
		V_3 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_7) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		TEdge_t1694054893 * L_9 = V_0;
		V_1 = L_9;
		goto IL_0049;
	}

IL_0033:
	{
		TEdge_t1694054893 * L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_OutIdx_10();
		TEdge_t1694054893 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_OutIdx_10();
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = (TEdge_t1694054893 *)NULL;
	}

IL_0049:
	{
	}

IL_004a:
	{
		TEdge_t1694054893 * L_15 = V_0;
		NullCheck(L_15);
		TEdge_t1694054893 * L_16 = L_15->get_PrevInAEL_15();
		V_0 = L_16;
	}

IL_0052:
	{
		TEdge_t1694054893 * L_17 = V_0;
		V_5 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_17) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_000c;
		}
	}
	{
		TEdge_t1694054893 * L_19 = V_1;
		V_6 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_19) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_0078;
		}
	}
	{
		OutRec_t316877671 * L_21 = ___outRec1;
		NullCheck(L_21);
		L_21->set_FirstLeft_3((OutRec_t316877671 *)NULL);
		OutRec_t316877671 * L_22 = ___outRec1;
		NullCheck(L_22);
		L_22->set_IsHole_1((bool)0);
		goto IL_00a5;
	}

IL_0078:
	{
		OutRec_t316877671 * L_23 = ___outRec1;
		List_1_t1788952413 * L_24 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		TEdge_t1694054893 * L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = L_25->get_OutIdx_10();
		NullCheck(L_24);
		OutRec_t316877671 * L_27 = List_1_get_Item_m350034741(L_24, L_26, /*hidden argument*/List_1_get_Item_m350034741_RuntimeMethod_var);
		NullCheck(L_23);
		L_23->set_FirstLeft_3(L_27);
		OutRec_t316877671 * L_28 = ___outRec1;
		OutRec_t316877671 * L_29 = ___outRec1;
		NullCheck(L_29);
		OutRec_t316877671 * L_30 = L_29->get_FirstLeft_3();
		NullCheck(L_30);
		bool L_31 = L_30->get_IsHole_1();
		NullCheck(L_28);
		L_28->set_IsHole_1((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
	}

IL_00a5:
	{
		return;
	}
}
// System.Double Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::GetDx(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR double Clipper_GetDx_m3298892655 (Clipper_t4158555122 * __this, IntPoint_t2327573135  ___pt10, IntPoint_t2327573135  ___pt21, const RuntimeMethod* method)
{
	bool V_0 = false;
	double V_1 = 0.0;
	{
		IntPoint_t2327573135  L_0 = ___pt10;
		int64_t L_1 = L_0.get_Y_1();
		IntPoint_t2327573135  L_2 = ___pt21;
		int64_t L_3 = L_2.get_Y_1();
		V_0 = (bool)((((int64_t)L_1) == ((int64_t)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		V_1 = (-3.4E+38);
		goto IL_003f;
	}

IL_001f:
	{
		IntPoint_t2327573135  L_5 = ___pt21;
		int64_t L_6 = L_5.get_X_0();
		IntPoint_t2327573135  L_7 = ___pt10;
		int64_t L_8 = L_7.get_X_0();
		IntPoint_t2327573135  L_9 = ___pt21;
		int64_t L_10 = L_9.get_Y_1();
		IntPoint_t2327573135  L_11 = ___pt10;
		int64_t L_12 = L_11.get_Y_1();
		V_1 = ((double)((double)(((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_6, (int64_t)L_8)))))/(double)(((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_10, (int64_t)L_12)))))));
		goto IL_003f;
	}

IL_003f:
	{
		double L_13 = V_1;
		return L_13;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::FirstIsBottomPt(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_FirstIsBottomPt_m3226782377 (Clipper_t4158555122 * __this, OutPt_t2591102706 * ___btmPt10, OutPt_t2591102706 * ___btmPt21, const RuntimeMethod* method)
{
	OutPt_t2591102706 * V_0 = NULL;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B36_0 = 0;
	{
		OutPt_t2591102706 * L_0 = ___btmPt10;
		NullCheck(L_0);
		OutPt_t2591102706 * L_1 = L_0->get_Prev_3();
		V_0 = L_1;
		goto IL_0011;
	}

IL_000a:
	{
		OutPt_t2591102706 * L_2 = V_0;
		NullCheck(L_2);
		OutPt_t2591102706 * L_3 = L_2->get_Prev_3();
		V_0 = L_3;
	}

IL_0011:
	{
		OutPt_t2591102706 * L_4 = V_0;
		NullCheck(L_4);
		IntPoint_t2327573135  L_5 = L_4->get_Pt_1();
		OutPt_t2591102706 * L_6 = ___btmPt10;
		NullCheck(L_6);
		IntPoint_t2327573135  L_7 = L_6->get_Pt_1();
		bool L_8 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002d;
		}
	}
	{
		OutPt_t2591102706 * L_9 = V_0;
		OutPt_t2591102706 * L_10 = ___btmPt10;
		G_B5_0 = ((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_9) == ((RuntimeObject*)(OutPt_t2591102706 *)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B5_0 = 0;
	}

IL_002e:
	{
		V_5 = (bool)G_B5_0;
		bool L_11 = V_5;
		if (L_11)
		{
			goto IL_000a;
		}
	}
	{
		OutPt_t2591102706 * L_12 = ___btmPt10;
		NullCheck(L_12);
		IntPoint_t2327573135  L_13 = L_12->get_Pt_1();
		OutPt_t2591102706 * L_14 = V_0;
		NullCheck(L_14);
		IntPoint_t2327573135  L_15 = L_14->get_Pt_1();
		double L_16 = Clipper_GetDx_m3298892655(__this, L_13, L_15, /*hidden argument*/NULL);
		double L_17 = fabs(L_16);
		V_1 = L_17;
		OutPt_t2591102706 * L_18 = ___btmPt10;
		NullCheck(L_18);
		OutPt_t2591102706 * L_19 = L_18->get_Next_2();
		V_0 = L_19;
		goto IL_005c;
	}

IL_0055:
	{
		OutPt_t2591102706 * L_20 = V_0;
		NullCheck(L_20);
		OutPt_t2591102706 * L_21 = L_20->get_Next_2();
		V_0 = L_21;
	}

IL_005c:
	{
		OutPt_t2591102706 * L_22 = V_0;
		NullCheck(L_22);
		IntPoint_t2327573135  L_23 = L_22->get_Pt_1();
		OutPt_t2591102706 * L_24 = ___btmPt10;
		NullCheck(L_24);
		IntPoint_t2327573135  L_25 = L_24->get_Pt_1();
		bool L_26 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_23, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0078;
		}
	}
	{
		OutPt_t2591102706 * L_27 = V_0;
		OutPt_t2591102706 * L_28 = ___btmPt10;
		G_B11_0 = ((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_27) == ((RuntimeObject*)(OutPt_t2591102706 *)L_28))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0079;
	}

IL_0078:
	{
		G_B11_0 = 0;
	}

IL_0079:
	{
		V_6 = (bool)G_B11_0;
		bool L_29 = V_6;
		if (L_29)
		{
			goto IL_0055;
		}
	}
	{
		OutPt_t2591102706 * L_30 = ___btmPt10;
		NullCheck(L_30);
		IntPoint_t2327573135  L_31 = L_30->get_Pt_1();
		OutPt_t2591102706 * L_32 = V_0;
		NullCheck(L_32);
		IntPoint_t2327573135  L_33 = L_32->get_Pt_1();
		double L_34 = Clipper_GetDx_m3298892655(__this, L_31, L_33, /*hidden argument*/NULL);
		double L_35 = fabs(L_34);
		V_2 = L_35;
		OutPt_t2591102706 * L_36 = ___btmPt21;
		NullCheck(L_36);
		OutPt_t2591102706 * L_37 = L_36->get_Prev_3();
		V_0 = L_37;
		goto IL_00a7;
	}

IL_00a0:
	{
		OutPt_t2591102706 * L_38 = V_0;
		NullCheck(L_38);
		OutPt_t2591102706 * L_39 = L_38->get_Prev_3();
		V_0 = L_39;
	}

IL_00a7:
	{
		OutPt_t2591102706 * L_40 = V_0;
		NullCheck(L_40);
		IntPoint_t2327573135  L_41 = L_40->get_Pt_1();
		OutPt_t2591102706 * L_42 = ___btmPt21;
		NullCheck(L_42);
		IntPoint_t2327573135  L_43 = L_42->get_Pt_1();
		bool L_44 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_41, L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_00c3;
		}
	}
	{
		OutPt_t2591102706 * L_45 = V_0;
		OutPt_t2591102706 * L_46 = ___btmPt21;
		G_B17_0 = ((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_45) == ((RuntimeObject*)(OutPt_t2591102706 *)L_46))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00c4;
	}

IL_00c3:
	{
		G_B17_0 = 0;
	}

IL_00c4:
	{
		V_7 = (bool)G_B17_0;
		bool L_47 = V_7;
		if (L_47)
		{
			goto IL_00a0;
		}
	}
	{
		OutPt_t2591102706 * L_48 = ___btmPt21;
		NullCheck(L_48);
		IntPoint_t2327573135  L_49 = L_48->get_Pt_1();
		OutPt_t2591102706 * L_50 = V_0;
		NullCheck(L_50);
		IntPoint_t2327573135  L_51 = L_50->get_Pt_1();
		double L_52 = Clipper_GetDx_m3298892655(__this, L_49, L_51, /*hidden argument*/NULL);
		double L_53 = fabs(L_52);
		V_3 = L_53;
		OutPt_t2591102706 * L_54 = ___btmPt21;
		NullCheck(L_54);
		OutPt_t2591102706 * L_55 = L_54->get_Next_2();
		V_0 = L_55;
		goto IL_00f2;
	}

IL_00eb:
	{
		OutPt_t2591102706 * L_56 = V_0;
		NullCheck(L_56);
		OutPt_t2591102706 * L_57 = L_56->get_Next_2();
		V_0 = L_57;
	}

IL_00f2:
	{
		OutPt_t2591102706 * L_58 = V_0;
		NullCheck(L_58);
		IntPoint_t2327573135  L_59 = L_58->get_Pt_1();
		OutPt_t2591102706 * L_60 = ___btmPt21;
		NullCheck(L_60);
		IntPoint_t2327573135  L_61 = L_60->get_Pt_1();
		bool L_62 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_59, L_61, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_010e;
		}
	}
	{
		OutPt_t2591102706 * L_63 = V_0;
		OutPt_t2591102706 * L_64 = ___btmPt21;
		G_B23_0 = ((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_63) == ((RuntimeObject*)(OutPt_t2591102706 *)L_64))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_010f;
	}

IL_010e:
	{
		G_B23_0 = 0;
	}

IL_010f:
	{
		V_8 = (bool)G_B23_0;
		bool L_65 = V_8;
		if (L_65)
		{
			goto IL_00eb;
		}
	}
	{
		OutPt_t2591102706 * L_66 = ___btmPt21;
		NullCheck(L_66);
		IntPoint_t2327573135  L_67 = L_66->get_Pt_1();
		OutPt_t2591102706 * L_68 = V_0;
		NullCheck(L_68);
		IntPoint_t2327573135  L_69 = L_68->get_Pt_1();
		double L_70 = Clipper_GetDx_m3298892655(__this, L_67, L_69, /*hidden argument*/NULL);
		double L_71 = fabs(L_70);
		V_4 = L_71;
		double L_72 = V_1;
		double L_73 = V_2;
		double L_74 = Math_Max_m3148697491(NULL /*static, unused*/, L_72, L_73, /*hidden argument*/NULL);
		double L_75 = V_3;
		double L_76 = V_4;
		double L_77 = Math_Max_m3148697491(NULL /*static, unused*/, L_75, L_76, /*hidden argument*/NULL);
		if ((!(((double)L_74) == ((double)L_77))))
		{
			goto IL_0152;
		}
	}
	{
		double L_78 = V_1;
		double L_79 = V_2;
		double L_80 = Math_Min_m2185697350(NULL /*static, unused*/, L_78, L_79, /*hidden argument*/NULL);
		double L_81 = V_3;
		double L_82 = V_4;
		double L_83 = Math_Min_m2185697350(NULL /*static, unused*/, L_81, L_82, /*hidden argument*/NULL);
		G_B27_0 = ((((double)L_80) == ((double)L_83))? 1 : 0);
		goto IL_0153;
	}

IL_0152:
	{
		G_B27_0 = 0;
	}

IL_0153:
	{
		V_9 = (bool)G_B27_0;
		bool L_84 = V_9;
		if (!L_84)
		{
			goto IL_016f;
		}
	}
	{
		OutPt_t2591102706 * L_85 = ___btmPt10;
		double L_86 = Clipper_Area_m360288272(__this, L_85, /*hidden argument*/NULL);
		V_10 = (bool)((((double)L_86) > ((double)(0.0)))? 1 : 0);
		goto IL_018e;
	}

IL_016f:
	{
		double L_87 = V_1;
		double L_88 = V_3;
		if ((!(((double)L_87) >= ((double)L_88))))
		{
			goto IL_0178;
		}
	}
	{
		double L_89 = V_1;
		double L_90 = V_4;
		if ((((double)L_89) >= ((double)L_90)))
		{
			goto IL_0189;
		}
	}

IL_0178:
	{
		double L_91 = V_2;
		double L_92 = V_3;
		if ((!(((double)L_91) >= ((double)L_92))))
		{
			goto IL_0186;
		}
	}
	{
		double L_93 = V_2;
		double L_94 = V_4;
		G_B34_0 = ((((int32_t)((!(((double)L_93) >= ((double)L_94)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0187;
	}

IL_0186:
	{
		G_B34_0 = 0;
	}

IL_0187:
	{
		G_B36_0 = G_B34_0;
		goto IL_018a;
	}

IL_0189:
	{
		G_B36_0 = 1;
	}

IL_018a:
	{
		V_10 = (bool)G_B36_0;
		goto IL_018e;
	}

IL_018e:
	{
		bool L_95 = V_10;
		return L_95;
	}
}
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::GetBottomPt(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt)
extern "C" IL2CPP_METHOD_ATTR OutPt_t2591102706 * Clipper_GetBottomPt_m2609315760 (Clipper_t4158555122 * __this, OutPt_t2591102706 * ___pp0, const RuntimeMethod* method)
{
	OutPt_t2591102706 * V_0 = NULL;
	OutPt_t2591102706 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	OutPt_t2591102706 * V_11 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B12_0 = 0;
	{
		V_0 = (OutPt_t2591102706 *)NULL;
		OutPt_t2591102706 * L_0 = ___pp0;
		NullCheck(L_0);
		OutPt_t2591102706 * L_1 = L_0->get_Next_2();
		V_1 = L_1;
		goto IL_00c5;
	}

IL_000f:
	{
		OutPt_t2591102706 * L_2 = V_1;
		NullCheck(L_2);
		IntPoint_t2327573135 * L_3 = L_2->get_address_of_Pt_1();
		int64_t L_4 = L_3->get_Y_1();
		OutPt_t2591102706 * L_5 = ___pp0;
		NullCheck(L_5);
		IntPoint_t2327573135 * L_6 = L_5->get_address_of_Pt_1();
		int64_t L_7 = L_6->get_Y_1();
		V_2 = (bool)((((int64_t)L_4) > ((int64_t)L_7))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		OutPt_t2591102706 * L_9 = V_1;
		___pp0 = L_9;
		V_0 = (OutPt_t2591102706 *)NULL;
		goto IL_00bd;
	}

IL_0038:
	{
		OutPt_t2591102706 * L_10 = V_1;
		NullCheck(L_10);
		IntPoint_t2327573135 * L_11 = L_10->get_address_of_Pt_1();
		int64_t L_12 = L_11->get_Y_1();
		OutPt_t2591102706 * L_13 = ___pp0;
		NullCheck(L_13);
		IntPoint_t2327573135 * L_14 = L_13->get_address_of_Pt_1();
		int64_t L_15 = L_14->get_Y_1();
		if ((!(((uint64_t)L_12) == ((uint64_t)L_15))))
		{
			goto IL_006d;
		}
	}
	{
		OutPt_t2591102706 * L_16 = V_1;
		NullCheck(L_16);
		IntPoint_t2327573135 * L_17 = L_16->get_address_of_Pt_1();
		int64_t L_18 = L_17->get_X_0();
		OutPt_t2591102706 * L_19 = ___pp0;
		NullCheck(L_19);
		IntPoint_t2327573135 * L_20 = L_19->get_address_of_Pt_1();
		int64_t L_21 = L_20->get_X_0();
		G_B6_0 = ((((int32_t)((((int64_t)L_18) > ((int64_t)L_21))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B6_0 = 0;
	}

IL_006e:
	{
		V_3 = (bool)G_B6_0;
		bool L_22 = V_3;
		if (!L_22)
		{
			goto IL_00bd;
		}
	}
	{
		OutPt_t2591102706 * L_23 = V_1;
		NullCheck(L_23);
		IntPoint_t2327573135 * L_24 = L_23->get_address_of_Pt_1();
		int64_t L_25 = L_24->get_X_0();
		OutPt_t2591102706 * L_26 = ___pp0;
		NullCheck(L_26);
		IntPoint_t2327573135 * L_27 = L_26->get_address_of_Pt_1();
		int64_t L_28 = L_27->get_X_0();
		V_4 = (bool)((((int64_t)L_25) < ((int64_t)L_28))? 1 : 0);
		bool L_29 = V_4;
		if (!L_29)
		{
			goto IL_009a;
		}
	}
	{
		V_0 = (OutPt_t2591102706 *)NULL;
		OutPt_t2591102706 * L_30 = V_1;
		___pp0 = L_30;
		goto IL_00bc;
	}

IL_009a:
	{
		OutPt_t2591102706 * L_31 = V_1;
		NullCheck(L_31);
		OutPt_t2591102706 * L_32 = L_31->get_Next_2();
		OutPt_t2591102706 * L_33 = ___pp0;
		if ((((RuntimeObject*)(OutPt_t2591102706 *)L_32) == ((RuntimeObject*)(OutPt_t2591102706 *)L_33)))
		{
			goto IL_00b2;
		}
	}
	{
		OutPt_t2591102706 * L_34 = V_1;
		NullCheck(L_34);
		OutPt_t2591102706 * L_35 = L_34->get_Prev_3();
		OutPt_t2591102706 * L_36 = ___pp0;
		G_B12_0 = ((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_35) == ((RuntimeObject*)(OutPt_t2591102706 *)L_36))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00b3;
	}

IL_00b2:
	{
		G_B12_0 = 0;
	}

IL_00b3:
	{
		V_5 = (bool)G_B12_0;
		bool L_37 = V_5;
		if (!L_37)
		{
			goto IL_00bb;
		}
	}
	{
		OutPt_t2591102706 * L_38 = V_1;
		V_0 = L_38;
	}

IL_00bb:
	{
	}

IL_00bc:
	{
	}

IL_00bd:
	{
		OutPt_t2591102706 * L_39 = V_1;
		NullCheck(L_39);
		OutPt_t2591102706 * L_40 = L_39->get_Next_2();
		V_1 = L_40;
	}

IL_00c5:
	{
		OutPt_t2591102706 * L_41 = V_1;
		OutPt_t2591102706 * L_42 = ___pp0;
		V_6 = (bool)((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_41) == ((RuntimeObject*)(OutPt_t2591102706 *)L_42))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_43 = V_6;
		if (L_43)
		{
			goto IL_000f;
		}
	}
	{
		OutPt_t2591102706 * L_44 = V_0;
		V_7 = (bool)((!(((RuntimeObject*)(OutPt_t2591102706 *)L_44) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_45 = V_7;
		if (!L_45)
		{
			goto IL_012d;
		}
	}
	{
		goto IL_011f;
	}

IL_00e2:
	{
		OutPt_t2591102706 * L_46 = V_1;
		OutPt_t2591102706 * L_47 = V_0;
		bool L_48 = Clipper_FirstIsBottomPt_m3226782377(__this, L_46, L_47, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)L_48) == ((int32_t)0))? 1 : 0);
		bool L_49 = V_8;
		if (!L_49)
		{
			goto IL_00f7;
		}
	}
	{
		OutPt_t2591102706 * L_50 = V_0;
		___pp0 = L_50;
	}

IL_00f7:
	{
		OutPt_t2591102706 * L_51 = V_0;
		NullCheck(L_51);
		OutPt_t2591102706 * L_52 = L_51->get_Next_2();
		V_0 = L_52;
		goto IL_0107;
	}

IL_0100:
	{
		OutPt_t2591102706 * L_53 = V_0;
		NullCheck(L_53);
		OutPt_t2591102706 * L_54 = L_53->get_Next_2();
		V_0 = L_54;
	}

IL_0107:
	{
		OutPt_t2591102706 * L_55 = V_0;
		NullCheck(L_55);
		IntPoint_t2327573135  L_56 = L_55->get_Pt_1();
		OutPt_t2591102706 * L_57 = ___pp0;
		NullCheck(L_57);
		IntPoint_t2327573135  L_58 = L_57->get_Pt_1();
		bool L_59 = IntPoint_op_Inequality_m2137021658(NULL /*static, unused*/, L_56, L_58, /*hidden argument*/NULL);
		V_9 = L_59;
		bool L_60 = V_9;
		if (L_60)
		{
			goto IL_0100;
		}
	}
	{
	}

IL_011f:
	{
		OutPt_t2591102706 * L_61 = V_0;
		OutPt_t2591102706 * L_62 = V_1;
		V_10 = (bool)((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_61) == ((RuntimeObject*)(OutPt_t2591102706 *)L_62))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_63 = V_10;
		if (L_63)
		{
			goto IL_00e2;
		}
	}
	{
	}

IL_012d:
	{
		OutPt_t2591102706 * L_64 = ___pp0;
		V_11 = L_64;
		goto IL_0132;
	}

IL_0132:
	{
		OutPt_t2591102706 * L_65 = V_11;
		return L_65;
	}
}
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::GetLowermostRec(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR OutRec_t316877671 * Clipper_GetLowermostRec_m731535806 (Clipper_t4158555122 * __this, OutRec_t316877671 * ___outRec10, OutRec_t316877671 * ___outRec21, const RuntimeMethod* method)
{
	OutPt_t2591102706 * V_0 = NULL;
	OutPt_t2591102706 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	OutRec_t316877671 * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	{
		OutRec_t316877671 * L_0 = ___outRec10;
		NullCheck(L_0);
		OutPt_t2591102706 * L_1 = L_0->get_BottomPt_5();
		V_2 = (bool)((((RuntimeObject*)(OutPt_t2591102706 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		OutRec_t316877671 * L_3 = ___outRec10;
		OutRec_t316877671 * L_4 = ___outRec10;
		NullCheck(L_4);
		OutPt_t2591102706 * L_5 = L_4->get_Pts_4();
		OutPt_t2591102706 * L_6 = Clipper_GetBottomPt_m2609315760(__this, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_BottomPt_5(L_6);
	}

IL_0020:
	{
		OutRec_t316877671 * L_7 = ___outRec21;
		NullCheck(L_7);
		OutPt_t2591102706 * L_8 = L_7->get_BottomPt_5();
		V_3 = (bool)((((RuntimeObject*)(OutPt_t2591102706 *)L_8) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		OutRec_t316877671 * L_10 = ___outRec21;
		OutRec_t316877671 * L_11 = ___outRec21;
		NullCheck(L_11);
		OutPt_t2591102706 * L_12 = L_11->get_Pts_4();
		OutPt_t2591102706 * L_13 = Clipper_GetBottomPt_m2609315760(__this, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->set_BottomPt_5(L_13);
	}

IL_003f:
	{
		OutRec_t316877671 * L_14 = ___outRec10;
		NullCheck(L_14);
		OutPt_t2591102706 * L_15 = L_14->get_BottomPt_5();
		V_0 = L_15;
		OutRec_t316877671 * L_16 = ___outRec21;
		NullCheck(L_16);
		OutPt_t2591102706 * L_17 = L_16->get_BottomPt_5();
		V_1 = L_17;
		OutPt_t2591102706 * L_18 = V_0;
		NullCheck(L_18);
		IntPoint_t2327573135 * L_19 = L_18->get_address_of_Pt_1();
		int64_t L_20 = L_19->get_Y_1();
		OutPt_t2591102706 * L_21 = V_1;
		NullCheck(L_21);
		IntPoint_t2327573135 * L_22 = L_21->get_address_of_Pt_1();
		int64_t L_23 = L_22->get_Y_1();
		V_4 = (bool)((((int64_t)L_20) > ((int64_t)L_23))? 1 : 0);
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_0073;
		}
	}
	{
		OutRec_t316877671 * L_25 = ___outRec10;
		V_5 = L_25;
		goto IL_011f;
	}

IL_0073:
	{
		OutPt_t2591102706 * L_26 = V_0;
		NullCheck(L_26);
		IntPoint_t2327573135 * L_27 = L_26->get_address_of_Pt_1();
		int64_t L_28 = L_27->get_Y_1();
		OutPt_t2591102706 * L_29 = V_1;
		NullCheck(L_29);
		IntPoint_t2327573135 * L_30 = L_29->get_address_of_Pt_1();
		int64_t L_31 = L_30->get_Y_1();
		V_6 = (bool)((((int64_t)L_28) < ((int64_t)L_31))? 1 : 0);
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_0099;
		}
	}
	{
		OutRec_t316877671 * L_33 = ___outRec21;
		V_5 = L_33;
		goto IL_011f;
	}

IL_0099:
	{
		OutPt_t2591102706 * L_34 = V_0;
		NullCheck(L_34);
		IntPoint_t2327573135 * L_35 = L_34->get_address_of_Pt_1();
		int64_t L_36 = L_35->get_X_0();
		OutPt_t2591102706 * L_37 = V_1;
		NullCheck(L_37);
		IntPoint_t2327573135 * L_38 = L_37->get_address_of_Pt_1();
		int64_t L_39 = L_38->get_X_0();
		V_7 = (bool)((((int64_t)L_36) < ((int64_t)L_39))? 1 : 0);
		bool L_40 = V_7;
		if (!L_40)
		{
			goto IL_00bc;
		}
	}
	{
		OutRec_t316877671 * L_41 = ___outRec10;
		V_5 = L_41;
		goto IL_011f;
	}

IL_00bc:
	{
		OutPt_t2591102706 * L_42 = V_0;
		NullCheck(L_42);
		IntPoint_t2327573135 * L_43 = L_42->get_address_of_Pt_1();
		int64_t L_44 = L_43->get_X_0();
		OutPt_t2591102706 * L_45 = V_1;
		NullCheck(L_45);
		IntPoint_t2327573135 * L_46 = L_45->get_address_of_Pt_1();
		int64_t L_47 = L_46->get_X_0();
		V_8 = (bool)((((int64_t)L_44) > ((int64_t)L_47))? 1 : 0);
		bool L_48 = V_8;
		if (!L_48)
		{
			goto IL_00df;
		}
	}
	{
		OutRec_t316877671 * L_49 = ___outRec21;
		V_5 = L_49;
		goto IL_011f;
	}

IL_00df:
	{
		OutPt_t2591102706 * L_50 = V_0;
		NullCheck(L_50);
		OutPt_t2591102706 * L_51 = L_50->get_Next_2();
		OutPt_t2591102706 * L_52 = V_0;
		V_9 = (bool)((((RuntimeObject*)(OutPt_t2591102706 *)L_51) == ((RuntimeObject*)(OutPt_t2591102706 *)L_52))? 1 : 0);
		bool L_53 = V_9;
		if (!L_53)
		{
			goto IL_00f3;
		}
	}
	{
		OutRec_t316877671 * L_54 = ___outRec21;
		V_5 = L_54;
		goto IL_011f;
	}

IL_00f3:
	{
		OutPt_t2591102706 * L_55 = V_1;
		NullCheck(L_55);
		OutPt_t2591102706 * L_56 = L_55->get_Next_2();
		OutPt_t2591102706 * L_57 = V_1;
		V_10 = (bool)((((RuntimeObject*)(OutPt_t2591102706 *)L_56) == ((RuntimeObject*)(OutPt_t2591102706 *)L_57))? 1 : 0);
		bool L_58 = V_10;
		if (!L_58)
		{
			goto IL_0107;
		}
	}
	{
		OutRec_t316877671 * L_59 = ___outRec10;
		V_5 = L_59;
		goto IL_011f;
	}

IL_0107:
	{
		OutPt_t2591102706 * L_60 = V_0;
		OutPt_t2591102706 * L_61 = V_1;
		bool L_62 = Clipper_FirstIsBottomPt_m3226782377(__this, L_60, L_61, /*hidden argument*/NULL);
		V_11 = L_62;
		bool L_63 = V_11;
		if (!L_63)
		{
			goto IL_011a;
		}
	}
	{
		OutRec_t316877671 * L_64 = ___outRec10;
		V_5 = L_64;
		goto IL_011f;
	}

IL_011a:
	{
		OutRec_t316877671 * L_65 = ___outRec21;
		V_5 = L_65;
		goto IL_011f;
	}

IL_011f:
	{
		OutRec_t316877671 * L_66 = V_5;
		return L_66;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::OutRec1RightOfOutRec2(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_OutRec1RightOfOutRec2_m3908483916 (Clipper_t4158555122 * __this, OutRec_t316877671 * ___outRec10, OutRec_t316877671 * ___outRec21, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
	}

IL_0001:
	{
		OutRec_t316877671 * L_0 = ___outRec10;
		NullCheck(L_0);
		OutRec_t316877671 * L_1 = L_0->get_FirstLeft_3();
		___outRec10 = L_1;
		OutRec_t316877671 * L_2 = ___outRec10;
		OutRec_t316877671 * L_3 = ___outRec21;
		V_0 = (bool)((((RuntimeObject*)(OutRec_t316877671 *)L_2) == ((RuntimeObject*)(OutRec_t316877671 *)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0023;
	}

IL_0016:
	{
		OutRec_t316877671 * L_5 = ___outRec10;
		V_2 = (bool)((!(((RuntimeObject*)(OutRec_t316877671 *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (L_6)
		{
			goto IL_0001;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::GetOutRec(System.Int32)
extern "C" IL2CPP_METHOD_ATTR OutRec_t316877671 * Clipper_GetOutRec_m2429750861 (Clipper_t4158555122 * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_GetOutRec_m2429750861_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OutRec_t316877671 * V_0 = NULL;
	bool V_1 = false;
	OutRec_t316877671 * V_2 = NULL;
	{
		List_1_t1788952413 * L_0 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		int32_t L_1 = ___idx0;
		NullCheck(L_0);
		OutRec_t316877671 * L_2 = List_1_get_Item_m350034741(L_0, L_1, /*hidden argument*/List_1_get_Item_m350034741_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0022;
	}

IL_0010:
	{
		List_1_t1788952413 * L_3 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		OutRec_t316877671 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_Idx_0();
		NullCheck(L_3);
		OutRec_t316877671 * L_6 = List_1_get_Item_m350034741(L_3, L_5, /*hidden argument*/List_1_get_Item_m350034741_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_0022:
	{
		OutRec_t316877671 * L_7 = V_0;
		List_1_t1788952413 * L_8 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		OutRec_t316877671 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_Idx_0();
		NullCheck(L_8);
		OutRec_t316877671 * L_11 = List_1_get_Item_m350034741(L_8, L_10, /*hidden argument*/List_1_get_Item_m350034741_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)((((RuntimeObject*)(OutRec_t316877671 *)L_7) == ((RuntimeObject*)(OutRec_t316877671 *)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_1;
		if (L_12)
		{
			goto IL_0010;
		}
	}
	{
		OutRec_t316877671 * L_13 = V_0;
		V_2 = L_13;
		goto IL_0041;
	}

IL_0041:
	{
		OutRec_t316877671 * L_14 = V_2;
		return L_14;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::AppendPolygon(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void Clipper_AppendPolygon_m1774317356 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e10, TEdge_t1694054893 * ___e21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_AppendPolygon_m1774317356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OutRec_t316877671 * V_0 = NULL;
	OutRec_t316877671 * V_1 = NULL;
	OutRec_t316877671 * V_2 = NULL;
	OutPt_t2591102706 * V_3 = NULL;
	OutPt_t2591102706 * V_4 = NULL;
	OutPt_t2591102706 * V_5 = NULL;
	OutPt_t2591102706 * V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	TEdge_t1694054893 * V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	{
		List_1_t1788952413 * L_0 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		TEdge_t1694054893 * L_1 = ___e10;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_OutIdx_10();
		NullCheck(L_0);
		OutRec_t316877671 * L_3 = List_1_get_Item_m350034741(L_0, L_2, /*hidden argument*/List_1_get_Item_m350034741_RuntimeMethod_var);
		V_0 = L_3;
		List_1_t1788952413 * L_4 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		TEdge_t1694054893 * L_5 = ___e21;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_OutIdx_10();
		NullCheck(L_4);
		OutRec_t316877671 * L_7 = List_1_get_Item_m350034741(L_4, L_6, /*hidden argument*/List_1_get_Item_m350034741_RuntimeMethod_var);
		V_1 = L_7;
		OutRec_t316877671 * L_8 = V_0;
		OutRec_t316877671 * L_9 = V_1;
		bool L_10 = Clipper_OutRec1RightOfOutRec2_m3908483916(__this, L_8, L_9, /*hidden argument*/NULL);
		V_10 = L_10;
		bool L_11 = V_10;
		if (!L_11)
		{
			goto IL_0037;
		}
	}
	{
		OutRec_t316877671 * L_12 = V_1;
		V_2 = L_12;
		goto IL_0052;
	}

IL_0037:
	{
		OutRec_t316877671 * L_13 = V_1;
		OutRec_t316877671 * L_14 = V_0;
		bool L_15 = Clipper_OutRec1RightOfOutRec2_m3908483916(__this, L_13, L_14, /*hidden argument*/NULL);
		V_11 = L_15;
		bool L_16 = V_11;
		if (!L_16)
		{
			goto IL_0049;
		}
	}
	{
		OutRec_t316877671 * L_17 = V_0;
		V_2 = L_17;
		goto IL_0052;
	}

IL_0049:
	{
		OutRec_t316877671 * L_18 = V_0;
		OutRec_t316877671 * L_19 = V_1;
		OutRec_t316877671 * L_20 = Clipper_GetLowermostRec_m731535806(__this, L_18, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
	}

IL_0052:
	{
		OutRec_t316877671 * L_21 = V_0;
		NullCheck(L_21);
		OutPt_t2591102706 * L_22 = L_21->get_Pts_4();
		V_3 = L_22;
		OutPt_t2591102706 * L_23 = V_3;
		NullCheck(L_23);
		OutPt_t2591102706 * L_24 = L_23->get_Prev_3();
		V_4 = L_24;
		OutRec_t316877671 * L_25 = V_1;
		NullCheck(L_25);
		OutPt_t2591102706 * L_26 = L_25->get_Pts_4();
		V_5 = L_26;
		OutPt_t2591102706 * L_27 = V_5;
		NullCheck(L_27);
		OutPt_t2591102706 * L_28 = L_27->get_Prev_3();
		V_6 = L_28;
		TEdge_t1694054893 * L_29 = ___e10;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_Side_6();
		V_12 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_12;
		if (!L_31)
		{
			goto IL_00f7;
		}
	}
	{
		TEdge_t1694054893 * L_32 = ___e21;
		NullCheck(L_32);
		int32_t L_33 = L_32->get_Side_6();
		V_13 = (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_13;
		if (!L_34)
		{
			goto IL_00c8;
		}
	}
	{
		OutPt_t2591102706 * L_35 = V_5;
		Clipper_ReversePolyPtLinks_m7158408(__this, L_35, /*hidden argument*/NULL);
		OutPt_t2591102706 * L_36 = V_5;
		OutPt_t2591102706 * L_37 = V_3;
		NullCheck(L_36);
		L_36->set_Next_2(L_37);
		OutPt_t2591102706 * L_38 = V_3;
		OutPt_t2591102706 * L_39 = V_5;
		NullCheck(L_38);
		L_38->set_Prev_3(L_39);
		OutPt_t2591102706 * L_40 = V_4;
		OutPt_t2591102706 * L_41 = V_6;
		NullCheck(L_40);
		L_40->set_Next_2(L_41);
		OutPt_t2591102706 * L_42 = V_6;
		OutPt_t2591102706 * L_43 = V_4;
		NullCheck(L_42);
		L_42->set_Prev_3(L_43);
		OutRec_t316877671 * L_44 = V_0;
		OutPt_t2591102706 * L_45 = V_6;
		NullCheck(L_44);
		L_44->set_Pts_4(L_45);
		goto IL_00f4;
	}

IL_00c8:
	{
		OutPt_t2591102706 * L_46 = V_6;
		OutPt_t2591102706 * L_47 = V_3;
		NullCheck(L_46);
		L_46->set_Next_2(L_47);
		OutPt_t2591102706 * L_48 = V_3;
		OutPt_t2591102706 * L_49 = V_6;
		NullCheck(L_48);
		L_48->set_Prev_3(L_49);
		OutPt_t2591102706 * L_50 = V_5;
		OutPt_t2591102706 * L_51 = V_4;
		NullCheck(L_50);
		L_50->set_Prev_3(L_51);
		OutPt_t2591102706 * L_52 = V_4;
		OutPt_t2591102706 * L_53 = V_5;
		NullCheck(L_52);
		L_52->set_Next_2(L_53);
		OutRec_t316877671 * L_54 = V_0;
		OutPt_t2591102706 * L_55 = V_5;
		NullCheck(L_54);
		L_54->set_Pts_4(L_55);
	}

IL_00f4:
	{
		goto IL_015b;
	}

IL_00f7:
	{
		TEdge_t1694054893 * L_56 = ___e21;
		NullCheck(L_56);
		int32_t L_57 = L_56->get_Side_6();
		V_14 = (bool)((((int32_t)L_57) == ((int32_t)1))? 1 : 0);
		bool L_58 = V_14;
		if (!L_58)
		{
			goto IL_0136;
		}
	}
	{
		OutPt_t2591102706 * L_59 = V_5;
		Clipper_ReversePolyPtLinks_m7158408(__this, L_59, /*hidden argument*/NULL);
		OutPt_t2591102706 * L_60 = V_4;
		OutPt_t2591102706 * L_61 = V_6;
		NullCheck(L_60);
		L_60->set_Next_2(L_61);
		OutPt_t2591102706 * L_62 = V_6;
		OutPt_t2591102706 * L_63 = V_4;
		NullCheck(L_62);
		L_62->set_Prev_3(L_63);
		OutPt_t2591102706 * L_64 = V_5;
		OutPt_t2591102706 * L_65 = V_3;
		NullCheck(L_64);
		L_64->set_Next_2(L_65);
		OutPt_t2591102706 * L_66 = V_3;
		OutPt_t2591102706 * L_67 = V_5;
		NullCheck(L_66);
		L_66->set_Prev_3(L_67);
		goto IL_015a;
	}

IL_0136:
	{
		OutPt_t2591102706 * L_68 = V_4;
		OutPt_t2591102706 * L_69 = V_5;
		NullCheck(L_68);
		L_68->set_Next_2(L_69);
		OutPt_t2591102706 * L_70 = V_5;
		OutPt_t2591102706 * L_71 = V_4;
		NullCheck(L_70);
		L_70->set_Prev_3(L_71);
		OutPt_t2591102706 * L_72 = V_3;
		OutPt_t2591102706 * L_73 = V_6;
		NullCheck(L_72);
		L_72->set_Prev_3(L_73);
		OutPt_t2591102706 * L_74 = V_6;
		OutPt_t2591102706 * L_75 = V_3;
		NullCheck(L_74);
		L_74->set_Next_2(L_75);
	}

IL_015a:
	{
	}

IL_015b:
	{
		OutRec_t316877671 * L_76 = V_0;
		NullCheck(L_76);
		L_76->set_BottomPt_5((OutPt_t2591102706 *)NULL);
		OutRec_t316877671 * L_77 = V_2;
		OutRec_t316877671 * L_78 = V_1;
		V_15 = (bool)((((RuntimeObject*)(OutRec_t316877671 *)L_77) == ((RuntimeObject*)(OutRec_t316877671 *)L_78))? 1 : 0);
		bool L_79 = V_15;
		if (!L_79)
		{
			goto IL_0198;
		}
	}
	{
		OutRec_t316877671 * L_80 = V_1;
		NullCheck(L_80);
		OutRec_t316877671 * L_81 = L_80->get_FirstLeft_3();
		OutRec_t316877671 * L_82 = V_0;
		V_16 = (bool)((((int32_t)((((RuntimeObject*)(OutRec_t316877671 *)L_81) == ((RuntimeObject*)(OutRec_t316877671 *)L_82))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_83 = V_16;
		if (!L_83)
		{
			goto IL_018b;
		}
	}
	{
		OutRec_t316877671 * L_84 = V_0;
		OutRec_t316877671 * L_85 = V_1;
		NullCheck(L_85);
		OutRec_t316877671 * L_86 = L_85->get_FirstLeft_3();
		NullCheck(L_84);
		L_84->set_FirstLeft_3(L_86);
	}

IL_018b:
	{
		OutRec_t316877671 * L_87 = V_0;
		OutRec_t316877671 * L_88 = V_1;
		NullCheck(L_88);
		bool L_89 = L_88->get_IsHole_1();
		NullCheck(L_87);
		L_87->set_IsHole_1(L_89);
	}

IL_0198:
	{
		OutRec_t316877671 * L_90 = V_1;
		NullCheck(L_90);
		L_90->set_Pts_4((OutPt_t2591102706 *)NULL);
		OutRec_t316877671 * L_91 = V_1;
		NullCheck(L_91);
		L_91->set_BottomPt_5((OutPt_t2591102706 *)NULL);
		OutRec_t316877671 * L_92 = V_1;
		OutRec_t316877671 * L_93 = V_0;
		NullCheck(L_92);
		L_92->set_FirstLeft_3(L_93);
		TEdge_t1694054893 * L_94 = ___e10;
		NullCheck(L_94);
		int32_t L_95 = L_94->get_OutIdx_10();
		V_7 = L_95;
		TEdge_t1694054893 * L_96 = ___e21;
		NullCheck(L_96);
		int32_t L_97 = L_96->get_OutIdx_10();
		V_8 = L_97;
		TEdge_t1694054893 * L_98 = ___e10;
		NullCheck(L_98);
		L_98->set_OutIdx_10((-1));
		TEdge_t1694054893 * L_99 = ___e21;
		NullCheck(L_99);
		L_99->set_OutIdx_10((-1));
		TEdge_t1694054893 * L_100 = ((ClipperBase_t2411222589 *)__this)->get_m_ActiveEdges_5();
		V_9 = L_100;
		goto IL_020a;
	}

IL_01d5:
	{
		TEdge_t1694054893 * L_101 = V_9;
		NullCheck(L_101);
		int32_t L_102 = L_101->get_OutIdx_10();
		int32_t L_103 = V_8;
		V_17 = (bool)((((int32_t)L_102) == ((int32_t)L_103))? 1 : 0);
		bool L_104 = V_17;
		if (!L_104)
		{
			goto IL_0200;
		}
	}
	{
		TEdge_t1694054893 * L_105 = V_9;
		int32_t L_106 = V_7;
		NullCheck(L_105);
		L_105->set_OutIdx_10(L_106);
		TEdge_t1694054893 * L_107 = V_9;
		TEdge_t1694054893 * L_108 = ___e10;
		NullCheck(L_108);
		int32_t L_109 = L_108->get_Side_6();
		NullCheck(L_107);
		L_107->set_Side_6(L_109);
		goto IL_0215;
	}

IL_0200:
	{
		TEdge_t1694054893 * L_110 = V_9;
		NullCheck(L_110);
		TEdge_t1694054893 * L_111 = L_110->get_NextInAEL_14();
		V_9 = L_111;
	}

IL_020a:
	{
		TEdge_t1694054893 * L_112 = V_9;
		V_18 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_112) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_113 = V_18;
		if (L_113)
		{
			goto IL_01d5;
		}
	}

IL_0215:
	{
		OutRec_t316877671 * L_114 = V_1;
		OutRec_t316877671 * L_115 = V_0;
		NullCheck(L_115);
		int32_t L_116 = L_115->get_Idx_0();
		NullCheck(L_114);
		L_114->set_Idx_0(L_116);
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::ReversePolyPtLinks(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt)
extern "C" IL2CPP_METHOD_ATTR void Clipper_ReversePolyPtLinks_m7158408 (Clipper_t4158555122 * __this, OutPt_t2591102706 * ___pp0, const RuntimeMethod* method)
{
	OutPt_t2591102706 * V_0 = NULL;
	OutPt_t2591102706 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		OutPt_t2591102706 * L_0 = ___pp0;
		V_2 = (bool)((((RuntimeObject*)(OutPt_t2591102706 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0036;
	}

IL_000b:
	{
		OutPt_t2591102706 * L_2 = ___pp0;
		V_0 = L_2;
	}

IL_000d:
	{
		OutPt_t2591102706 * L_3 = V_0;
		NullCheck(L_3);
		OutPt_t2591102706 * L_4 = L_3->get_Next_2();
		V_1 = L_4;
		OutPt_t2591102706 * L_5 = V_0;
		OutPt_t2591102706 * L_6 = V_0;
		NullCheck(L_6);
		OutPt_t2591102706 * L_7 = L_6->get_Prev_3();
		NullCheck(L_5);
		L_5->set_Next_2(L_7);
		OutPt_t2591102706 * L_8 = V_0;
		OutPt_t2591102706 * L_9 = V_1;
		NullCheck(L_8);
		L_8->set_Prev_3(L_9);
		OutPt_t2591102706 * L_10 = V_1;
		V_0 = L_10;
		OutPt_t2591102706 * L_11 = V_0;
		OutPt_t2591102706 * L_12 = ___pp0;
		V_3 = (bool)((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_11) == ((RuntimeObject*)(OutPt_t2591102706 *)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_000d;
		}
	}

IL_0036:
	{
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::SwapSides(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void Clipper_SwapSides_m1090722918 (RuntimeObject * __this /* static, unused */, TEdge_t1694054893 * ___edge10, TEdge_t1694054893 * ___edge21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		TEdge_t1694054893 * L_0 = ___edge10;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_Side_6();
		V_0 = L_1;
		TEdge_t1694054893 * L_2 = ___edge10;
		TEdge_t1694054893 * L_3 = ___edge21;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Side_6();
		NullCheck(L_2);
		L_2->set_Side_6(L_4);
		TEdge_t1694054893 * L_5 = ___edge21;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		L_5->set_Side_6(L_6);
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::SwapPolyIndexes(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void Clipper_SwapPolyIndexes_m805866805 (RuntimeObject * __this /* static, unused */, TEdge_t1694054893 * ___edge10, TEdge_t1694054893 * ___edge21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		TEdge_t1694054893 * L_0 = ___edge10;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_OutIdx_10();
		V_0 = L_1;
		TEdge_t1694054893 * L_2 = ___edge10;
		TEdge_t1694054893 * L_3 = ___edge21;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_OutIdx_10();
		NullCheck(L_2);
		L_2->set_OutIdx_10(L_4);
		TEdge_t1694054893 * L_5 = ___edge21;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		L_5->set_OutIdx_10(L_6);
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::IntersectEdges(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR void Clipper_IntersectEdges_m4288628979 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e10, TEdge_t1694054893 * ___e21, IntPoint_t2327573135  ___pt2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	int32_t V_23 = 0;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	bool V_37 = false;
	bool V_38 = false;
	int64_t V_39 = 0;
	int64_t V_40 = 0;
	int32_t V_41 = 0;
	int32_t V_42 = 0;
	bool V_43 = false;
	bool V_44 = false;
	int32_t V_45 = 0;
	bool V_46 = false;
	bool V_47 = false;
	bool V_48 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B32_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B43_0 = 0;
	int32_t G_B45_0 = 0;
	TEdge_t1694054893 * G_B66_0 = NULL;
	TEdge_t1694054893 * G_B65_0 = NULL;
	int32_t G_B67_0 = 0;
	TEdge_t1694054893 * G_B67_1 = NULL;
	TEdge_t1694054893 * G_B72_0 = NULL;
	TEdge_t1694054893 * G_B71_0 = NULL;
	int32_t G_B73_0 = 0;
	TEdge_t1694054893 * G_B73_1 = NULL;
	int32_t G_B103_0 = 0;
	int32_t G_B105_0 = 0;
	int32_t G_B113_0 = 0;
	int32_t G_B120_0 = 0;
	int32_t G_B128_0 = 0;
	int32_t G_B130_0 = 0;
	int32_t G_B150_0 = 0;
	int32_t G_B156_0 = 0;
	int32_t G_B162_0 = 0;
	int32_t G_B172_0 = 0;
	int32_t G_B174_0 = 0;
	{
		TEdge_t1694054893 * L_0 = ___e10;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_OutIdx_10();
		V_0 = (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		TEdge_t1694054893 * L_2 = ___e21;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_OutIdx_10();
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		TEdge_t1694054893 * L_4 = ___e10;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_WindDelta_7();
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		TEdge_t1694054893 * L_6 = ___e21;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_WindDelta_7();
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B3_0 = 1;
	}

IL_002f:
	{
		V_8 = (bool)G_B3_0;
		bool L_8 = V_8;
		if (!L_8)
		{
			goto IL_019f;
		}
	}
	{
		TEdge_t1694054893 * L_9 = ___e10;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_WindDelta_7();
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		TEdge_t1694054893 * L_11 = ___e21;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_WindDelta_7();
		G_B7_0 = ((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		goto IL_004d;
	}

IL_004c:
	{
		G_B7_0 = 0;
	}

IL_004d:
	{
		V_9 = (bool)G_B7_0;
		bool L_13 = V_9;
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		goto IL_061f;
	}

IL_0058:
	{
		TEdge_t1694054893 * L_14 = ___e10;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_PolyTyp_5();
		TEdge_t1694054893 * L_16 = ___e21;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_PolyTyp_5();
		if ((!(((uint32_t)L_15) == ((uint32_t)L_17))))
		{
			goto IL_007f;
		}
	}
	{
		TEdge_t1694054893 * L_18 = ___e10;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_WindDelta_7();
		TEdge_t1694054893 * L_20 = ___e21;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_WindDelta_7();
		if ((((int32_t)L_19) == ((int32_t)L_21)))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_22 = __this->get_m_ClipType_9();
		G_B13_0 = ((((int32_t)L_22) == ((int32_t)1))? 1 : 0);
		goto IL_0080;
	}

IL_007f:
	{
		G_B13_0 = 0;
	}

IL_0080:
	{
		V_10 = (bool)G_B13_0;
		bool L_23 = V_10;
		if (!L_23)
		{
			goto IL_00e2;
		}
	}
	{
		TEdge_t1694054893 * L_24 = ___e10;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_WindDelta_7();
		V_11 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_11;
		if (!L_26)
		{
			goto IL_00ba;
		}
	}
	{
		bool L_27 = V_1;
		V_12 = L_27;
		bool L_28 = V_12;
		if (!L_28)
		{
			goto IL_00b7;
		}
	}
	{
		TEdge_t1694054893 * L_29 = ___e10;
		IntPoint_t2327573135  L_30 = ___pt2;
		Clipper_AddOutPt_m2431700953(__this, L_29, L_30, /*hidden argument*/NULL);
		bool L_31 = V_0;
		V_13 = L_31;
		bool L_32 = V_13;
		if (!L_32)
		{
			goto IL_00b6;
		}
	}
	{
		TEdge_t1694054893 * L_33 = ___e10;
		NullCheck(L_33);
		L_33->set_OutIdx_10((-1));
	}

IL_00b6:
	{
	}

IL_00b7:
	{
		goto IL_00dc;
	}

IL_00ba:
	{
		bool L_34 = V_0;
		V_14 = L_34;
		bool L_35 = V_14;
		if (!L_35)
		{
			goto IL_00db;
		}
	}
	{
		TEdge_t1694054893 * L_36 = ___e21;
		IntPoint_t2327573135  L_37 = ___pt2;
		Clipper_AddOutPt_m2431700953(__this, L_36, L_37, /*hidden argument*/NULL);
		bool L_38 = V_1;
		V_15 = L_38;
		bool L_39 = V_15;
		if (!L_39)
		{
			goto IL_00da;
		}
	}
	{
		TEdge_t1694054893 * L_40 = ___e21;
		NullCheck(L_40);
		L_40->set_OutIdx_10((-1));
	}

IL_00da:
	{
	}

IL_00db:
	{
	}

IL_00dc:
	{
		goto IL_019a;
	}

IL_00e2:
	{
		TEdge_t1694054893 * L_41 = ___e10;
		NullCheck(L_41);
		int32_t L_42 = L_41->get_PolyTyp_5();
		TEdge_t1694054893 * L_43 = ___e21;
		NullCheck(L_43);
		int32_t L_44 = L_43->get_PolyTyp_5();
		V_16 = (bool)((((int32_t)((((int32_t)L_42) == ((int32_t)L_44))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_16;
		if (!L_45)
		{
			goto IL_019a;
		}
	}
	{
		TEdge_t1694054893 * L_46 = ___e10;
		NullCheck(L_46);
		int32_t L_47 = L_46->get_WindDelta_7();
		if (L_47)
		{
			goto IL_012a;
		}
	}
	{
		TEdge_t1694054893 * L_48 = ___e21;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_WindCnt_8();
		int32_t L_50 = il2cpp_codegen_abs(L_49);
		if ((!(((uint32_t)L_50) == ((uint32_t)1))))
		{
			goto IL_012a;
		}
	}
	{
		int32_t L_51 = __this->get_m_ClipType_9();
		if ((!(((uint32_t)L_51) == ((uint32_t)1))))
		{
			goto IL_0127;
		}
	}
	{
		TEdge_t1694054893 * L_52 = ___e21;
		NullCheck(L_52);
		int32_t L_53 = L_52->get_WindCnt2_9();
		G_B32_0 = ((((int32_t)L_53) == ((int32_t)0))? 1 : 0);
		goto IL_0128;
	}

IL_0127:
	{
		G_B32_0 = 1;
	}

IL_0128:
	{
		G_B34_0 = G_B32_0;
		goto IL_012b;
	}

IL_012a:
	{
		G_B34_0 = 0;
	}

IL_012b:
	{
		V_17 = (bool)G_B34_0;
		bool L_54 = V_17;
		if (!L_54)
		{
			goto IL_014c;
		}
	}
	{
		TEdge_t1694054893 * L_55 = ___e10;
		IntPoint_t2327573135  L_56 = ___pt2;
		Clipper_AddOutPt_m2431700953(__this, L_55, L_56, /*hidden argument*/NULL);
		bool L_57 = V_0;
		V_18 = L_57;
		bool L_58 = V_18;
		if (!L_58)
		{
			goto IL_0149;
		}
	}
	{
		TEdge_t1694054893 * L_59 = ___e10;
		NullCheck(L_59);
		L_59->set_OutIdx_10((-1));
	}

IL_0149:
	{
		goto IL_0199;
	}

IL_014c:
	{
		TEdge_t1694054893 * L_60 = ___e21;
		NullCheck(L_60);
		int32_t L_61 = L_60->get_WindDelta_7();
		if (L_61)
		{
			goto IL_0179;
		}
	}
	{
		TEdge_t1694054893 * L_62 = ___e10;
		NullCheck(L_62);
		int32_t L_63 = L_62->get_WindCnt_8();
		int32_t L_64 = il2cpp_codegen_abs(L_63);
		if ((!(((uint32_t)L_64) == ((uint32_t)1))))
		{
			goto IL_0179;
		}
	}
	{
		int32_t L_65 = __this->get_m_ClipType_9();
		if ((!(((uint32_t)L_65) == ((uint32_t)1))))
		{
			goto IL_0176;
		}
	}
	{
		TEdge_t1694054893 * L_66 = ___e10;
		NullCheck(L_66);
		int32_t L_67 = L_66->get_WindCnt2_9();
		G_B43_0 = ((((int32_t)L_67) == ((int32_t)0))? 1 : 0);
		goto IL_0177;
	}

IL_0176:
	{
		G_B43_0 = 1;
	}

IL_0177:
	{
		G_B45_0 = G_B43_0;
		goto IL_017a;
	}

IL_0179:
	{
		G_B45_0 = 0;
	}

IL_017a:
	{
		V_19 = (bool)G_B45_0;
		bool L_68 = V_19;
		if (!L_68)
		{
			goto IL_0199;
		}
	}
	{
		TEdge_t1694054893 * L_69 = ___e21;
		IntPoint_t2327573135  L_70 = ___pt2;
		Clipper_AddOutPt_m2431700953(__this, L_69, L_70, /*hidden argument*/NULL);
		bool L_71 = V_1;
		V_20 = L_71;
		bool L_72 = V_20;
		if (!L_72)
		{
			goto IL_0198;
		}
	}
	{
		TEdge_t1694054893 * L_73 = ___e21;
		NullCheck(L_73);
		L_73->set_OutIdx_10((-1));
	}

IL_0198:
	{
	}

IL_0199:
	{
	}

IL_019a:
	{
		goto IL_061f;
	}

IL_019f:
	{
		TEdge_t1694054893 * L_74 = ___e10;
		NullCheck(L_74);
		int32_t L_75 = L_74->get_PolyTyp_5();
		TEdge_t1694054893 * L_76 = ___e21;
		NullCheck(L_76);
		int32_t L_77 = L_76->get_PolyTyp_5();
		V_21 = (bool)((((int32_t)L_75) == ((int32_t)L_77))? 1 : 0);
		bool L_78 = V_21;
		if (!L_78)
		{
			goto IL_0259;
		}
	}
	{
		TEdge_t1694054893 * L_79 = ___e10;
		bool L_80 = Clipper_IsEvenOddFillType_m1354744549(__this, L_79, /*hidden argument*/NULL);
		V_22 = L_80;
		bool L_81 = V_22;
		if (!L_81)
		{
			goto IL_01e4;
		}
	}
	{
		TEdge_t1694054893 * L_82 = ___e10;
		NullCheck(L_82);
		int32_t L_83 = L_82->get_WindCnt_8();
		V_23 = L_83;
		TEdge_t1694054893 * L_84 = ___e10;
		TEdge_t1694054893 * L_85 = ___e21;
		NullCheck(L_85);
		int32_t L_86 = L_85->get_WindCnt_8();
		NullCheck(L_84);
		L_84->set_WindCnt_8(L_86);
		TEdge_t1694054893 * L_87 = ___e21;
		int32_t L_88 = V_23;
		NullCheck(L_87);
		L_87->set_WindCnt_8(L_88);
		goto IL_0256;
	}

IL_01e4:
	{
		TEdge_t1694054893 * L_89 = ___e10;
		NullCheck(L_89);
		int32_t L_90 = L_89->get_WindCnt_8();
		TEdge_t1694054893 * L_91 = ___e21;
		NullCheck(L_91);
		int32_t L_92 = L_91->get_WindDelta_7();
		V_24 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)L_92))) == ((int32_t)0))? 1 : 0);
		bool L_93 = V_24;
		if (!L_93)
		{
			goto IL_020a;
		}
	}
	{
		TEdge_t1694054893 * L_94 = ___e10;
		TEdge_t1694054893 * L_95 = ___e10;
		NullCheck(L_95);
		int32_t L_96 = L_95->get_WindCnt_8();
		NullCheck(L_94);
		L_94->set_WindCnt_8(((-L_96)));
		goto IL_021d;
	}

IL_020a:
	{
		TEdge_t1694054893 * L_97 = ___e10;
		TEdge_t1694054893 * L_98 = L_97;
		NullCheck(L_98);
		int32_t L_99 = L_98->get_WindCnt_8();
		TEdge_t1694054893 * L_100 = ___e21;
		NullCheck(L_100);
		int32_t L_101 = L_100->get_WindDelta_7();
		NullCheck(L_98);
		L_98->set_WindCnt_8(((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)L_101)));
	}

IL_021d:
	{
		TEdge_t1694054893 * L_102 = ___e21;
		NullCheck(L_102);
		int32_t L_103 = L_102->get_WindCnt_8();
		TEdge_t1694054893 * L_104 = ___e10;
		NullCheck(L_104);
		int32_t L_105 = L_104->get_WindDelta_7();
		V_25 = (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_103, (int32_t)L_105))) == ((int32_t)0))? 1 : 0);
		bool L_106 = V_25;
		if (!L_106)
		{
			goto IL_0242;
		}
	}
	{
		TEdge_t1694054893 * L_107 = ___e21;
		TEdge_t1694054893 * L_108 = ___e21;
		NullCheck(L_108);
		int32_t L_109 = L_108->get_WindCnt_8();
		NullCheck(L_107);
		L_107->set_WindCnt_8(((-L_109)));
		goto IL_0255;
	}

IL_0242:
	{
		TEdge_t1694054893 * L_110 = ___e21;
		TEdge_t1694054893 * L_111 = L_110;
		NullCheck(L_111);
		int32_t L_112 = L_111->get_WindCnt_8();
		TEdge_t1694054893 * L_113 = ___e10;
		NullCheck(L_113);
		int32_t L_114 = L_113->get_WindDelta_7();
		NullCheck(L_111);
		L_111->set_WindCnt_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_112, (int32_t)L_114)));
	}

IL_0255:
	{
	}

IL_0256:
	{
		goto IL_02c9;
	}

IL_0259:
	{
		TEdge_t1694054893 * L_115 = ___e21;
		bool L_116 = Clipper_IsEvenOddFillType_m1354744549(__this, L_115, /*hidden argument*/NULL);
		V_26 = (bool)((((int32_t)L_116) == ((int32_t)0))? 1 : 0);
		bool L_117 = V_26;
		if (!L_117)
		{
			goto IL_027f;
		}
	}
	{
		TEdge_t1694054893 * L_118 = ___e10;
		TEdge_t1694054893 * L_119 = L_118;
		NullCheck(L_119);
		int32_t L_120 = L_119->get_WindCnt2_9();
		TEdge_t1694054893 * L_121 = ___e21;
		NullCheck(L_121);
		int32_t L_122 = L_121->get_WindDelta_7();
		NullCheck(L_119);
		L_119->set_WindCnt2_9(((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)L_122)));
		goto IL_0291;
	}

IL_027f:
	{
		TEdge_t1694054893 * L_123 = ___e10;
		TEdge_t1694054893 * L_124 = ___e10;
		NullCheck(L_124);
		int32_t L_125 = L_124->get_WindCnt2_9();
		G_B65_0 = L_123;
		if (!L_125)
		{
			G_B66_0 = L_123;
			goto IL_028b;
		}
	}
	{
		G_B67_0 = 0;
		G_B67_1 = G_B65_0;
		goto IL_028c;
	}

IL_028b:
	{
		G_B67_0 = 1;
		G_B67_1 = G_B66_0;
	}

IL_028c:
	{
		NullCheck(G_B67_1);
		G_B67_1->set_WindCnt2_9(G_B67_0);
	}

IL_0291:
	{
		TEdge_t1694054893 * L_126 = ___e10;
		bool L_127 = Clipper_IsEvenOddFillType_m1354744549(__this, L_126, /*hidden argument*/NULL);
		V_27 = (bool)((((int32_t)L_127) == ((int32_t)0))? 1 : 0);
		bool L_128 = V_27;
		if (!L_128)
		{
			goto IL_02b6;
		}
	}
	{
		TEdge_t1694054893 * L_129 = ___e21;
		TEdge_t1694054893 * L_130 = L_129;
		NullCheck(L_130);
		int32_t L_131 = L_130->get_WindCnt2_9();
		TEdge_t1694054893 * L_132 = ___e10;
		NullCheck(L_132);
		int32_t L_133 = L_132->get_WindDelta_7();
		NullCheck(L_130);
		L_130->set_WindCnt2_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_131, (int32_t)L_133)));
		goto IL_02c8;
	}

IL_02b6:
	{
		TEdge_t1694054893 * L_134 = ___e21;
		TEdge_t1694054893 * L_135 = ___e21;
		NullCheck(L_135);
		int32_t L_136 = L_135->get_WindCnt2_9();
		G_B71_0 = L_134;
		if (!L_136)
		{
			G_B72_0 = L_134;
			goto IL_02c2;
		}
	}
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_02c3;
	}

IL_02c2:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_02c3:
	{
		NullCheck(G_B73_1);
		G_B73_1->set_WindCnt2_9(G_B73_0);
	}

IL_02c8:
	{
	}

IL_02c9:
	{
		TEdge_t1694054893 * L_137 = ___e10;
		NullCheck(L_137);
		int32_t L_138 = L_137->get_PolyTyp_5();
		V_28 = (bool)((((int32_t)L_138) == ((int32_t)0))? 1 : 0);
		bool L_139 = V_28;
		if (!L_139)
		{
			goto IL_02eb;
		}
	}
	{
		int32_t L_140 = __this->get_m_SubjFillType_16();
		V_2 = L_140;
		int32_t L_141 = __this->get_m_ClipFillType_15();
		V_4 = L_141;
		goto IL_02fc;
	}

IL_02eb:
	{
		int32_t L_142 = __this->get_m_ClipFillType_15();
		V_2 = L_142;
		int32_t L_143 = __this->get_m_SubjFillType_16();
		V_4 = L_143;
	}

IL_02fc:
	{
		TEdge_t1694054893 * L_144 = ___e21;
		NullCheck(L_144);
		int32_t L_145 = L_144->get_PolyTyp_5();
		V_29 = (bool)((((int32_t)L_145) == ((int32_t)0))? 1 : 0);
		bool L_146 = V_29;
		if (!L_146)
		{
			goto IL_031e;
		}
	}
	{
		int32_t L_147 = __this->get_m_SubjFillType_16();
		V_3 = L_147;
		int32_t L_148 = __this->get_m_ClipFillType_15();
		V_5 = L_148;
		goto IL_032f;
	}

IL_031e:
	{
		int32_t L_149 = __this->get_m_ClipFillType_15();
		V_3 = L_149;
		int32_t L_150 = __this->get_m_SubjFillType_16();
		V_5 = L_150;
	}

IL_032f:
	{
		int32_t L_151 = V_2;
		V_30 = L_151;
		int32_t L_152 = V_30;
		if ((((int32_t)L_152) == ((int32_t)2)))
		{
			goto IL_0340;
		}
	}
	{
		goto IL_0339;
	}

IL_0339:
	{
		int32_t L_153 = V_30;
		if ((((int32_t)L_153) == ((int32_t)3)))
		{
			goto IL_034a;
		}
	}
	{
		goto IL_0355;
	}

IL_0340:
	{
		TEdge_t1694054893 * L_154 = ___e10;
		NullCheck(L_154);
		int32_t L_155 = L_154->get_WindCnt_8();
		V_6 = L_155;
		goto IL_0364;
	}

IL_034a:
	{
		TEdge_t1694054893 * L_156 = ___e10;
		NullCheck(L_156);
		int32_t L_157 = L_156->get_WindCnt_8();
		V_6 = ((-L_157));
		goto IL_0364;
	}

IL_0355:
	{
		TEdge_t1694054893 * L_158 = ___e10;
		NullCheck(L_158);
		int32_t L_159 = L_158->get_WindCnt_8();
		int32_t L_160 = il2cpp_codegen_abs(L_159);
		V_6 = L_160;
		goto IL_0364;
	}

IL_0364:
	{
		int32_t L_161 = V_3;
		V_31 = L_161;
		int32_t L_162 = V_31;
		if ((((int32_t)L_162) == ((int32_t)2)))
		{
			goto IL_0375;
		}
	}
	{
		goto IL_036e;
	}

IL_036e:
	{
		int32_t L_163 = V_31;
		if ((((int32_t)L_163) == ((int32_t)3)))
		{
			goto IL_037f;
		}
	}
	{
		goto IL_038a;
	}

IL_0375:
	{
		TEdge_t1694054893 * L_164 = ___e21;
		NullCheck(L_164);
		int32_t L_165 = L_164->get_WindCnt_8();
		V_7 = L_165;
		goto IL_0399;
	}

IL_037f:
	{
		TEdge_t1694054893 * L_166 = ___e21;
		NullCheck(L_166);
		int32_t L_167 = L_166->get_WindCnt_8();
		V_7 = ((-L_167));
		goto IL_0399;
	}

IL_038a:
	{
		TEdge_t1694054893 * L_168 = ___e21;
		NullCheck(L_168);
		int32_t L_169 = L_168->get_WindCnt_8();
		int32_t L_170 = il2cpp_codegen_abs(L_169);
		V_7 = L_170;
		goto IL_0399;
	}

IL_0399:
	{
		bool L_171 = V_0;
		bool L_172 = V_1;
		V_32 = (bool)((int32_t)((int32_t)L_171&(int32_t)L_172));
		bool L_173 = V_32;
		if (!L_173)
		{
			goto IL_0413;
		}
	}
	{
		int32_t L_174 = V_6;
		if (!L_174)
		{
			goto IL_03ac;
		}
	}
	{
		int32_t L_175 = V_6;
		if ((!(((uint32_t)L_175) == ((uint32_t)1))))
		{
			goto IL_03d4;
		}
	}

IL_03ac:
	{
		int32_t L_176 = V_7;
		if (!L_176)
		{
			goto IL_03b5;
		}
	}
	{
		int32_t L_177 = V_7;
		if ((!(((uint32_t)L_177) == ((uint32_t)1))))
		{
			goto IL_03d4;
		}
	}

IL_03b5:
	{
		TEdge_t1694054893 * L_178 = ___e10;
		NullCheck(L_178);
		int32_t L_179 = L_178->get_PolyTyp_5();
		TEdge_t1694054893 * L_180 = ___e21;
		NullCheck(L_180);
		int32_t L_181 = L_180->get_PolyTyp_5();
		if ((((int32_t)L_179) == ((int32_t)L_181)))
		{
			goto IL_03d1;
		}
	}
	{
		int32_t L_182 = __this->get_m_ClipType_9();
		G_B103_0 = ((((int32_t)((((int32_t)L_182) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_03d2;
	}

IL_03d1:
	{
		G_B103_0 = 0;
	}

IL_03d2:
	{
		G_B105_0 = G_B103_0;
		goto IL_03d5;
	}

IL_03d4:
	{
		G_B105_0 = 1;
	}

IL_03d5:
	{
		V_33 = (bool)G_B105_0;
		bool L_183 = V_33;
		if (!L_183)
		{
			goto IL_03e9;
		}
	}
	{
		TEdge_t1694054893 * L_184 = ___e10;
		TEdge_t1694054893 * L_185 = ___e21;
		IntPoint_t2327573135  L_186 = ___pt2;
		Clipper_AddLocalMaxPoly_m2387891006(__this, L_184, L_185, L_186, /*hidden argument*/NULL);
		goto IL_040d;
	}

IL_03e9:
	{
		TEdge_t1694054893 * L_187 = ___e10;
		IntPoint_t2327573135  L_188 = ___pt2;
		Clipper_AddOutPt_m2431700953(__this, L_187, L_188, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_189 = ___e21;
		IntPoint_t2327573135  L_190 = ___pt2;
		Clipper_AddOutPt_m2431700953(__this, L_189, L_190, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_191 = ___e10;
		TEdge_t1694054893 * L_192 = ___e21;
		Clipper_SwapSides_m1090722918(NULL /*static, unused*/, L_191, L_192, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_193 = ___e10;
		TEdge_t1694054893 * L_194 = ___e21;
		Clipper_SwapPolyIndexes_m805866805(NULL /*static, unused*/, L_193, L_194, /*hidden argument*/NULL);
	}

IL_040d:
	{
		goto IL_061f;
	}

IL_0413:
	{
		bool L_195 = V_0;
		V_34 = L_195;
		bool L_196 = V_34;
		if (!L_196)
		{
			goto IL_044e;
		}
	}
	{
		int32_t L_197 = V_7;
		if (!L_197)
		{
			goto IL_0426;
		}
	}
	{
		int32_t L_198 = V_7;
		G_B113_0 = ((((int32_t)L_198) == ((int32_t)1))? 1 : 0);
		goto IL_0427;
	}

IL_0426:
	{
		G_B113_0 = 1;
	}

IL_0427:
	{
		V_35 = (bool)G_B113_0;
		bool L_199 = V_35;
		if (!L_199)
		{
			goto IL_0448;
		}
	}
	{
		TEdge_t1694054893 * L_200 = ___e10;
		IntPoint_t2327573135  L_201 = ___pt2;
		Clipper_AddOutPt_m2431700953(__this, L_200, L_201, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_202 = ___e10;
		TEdge_t1694054893 * L_203 = ___e21;
		Clipper_SwapSides_m1090722918(NULL /*static, unused*/, L_202, L_203, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_204 = ___e10;
		TEdge_t1694054893 * L_205 = ___e21;
		Clipper_SwapPolyIndexes_m805866805(NULL /*static, unused*/, L_204, L_205, /*hidden argument*/NULL);
	}

IL_0448:
	{
		goto IL_061f;
	}

IL_044e:
	{
		bool L_206 = V_1;
		V_36 = L_206;
		bool L_207 = V_36;
		if (!L_207)
		{
			goto IL_0489;
		}
	}
	{
		int32_t L_208 = V_6;
		if (!L_208)
		{
			goto IL_0461;
		}
	}
	{
		int32_t L_209 = V_6;
		G_B120_0 = ((((int32_t)L_209) == ((int32_t)1))? 1 : 0);
		goto IL_0462;
	}

IL_0461:
	{
		G_B120_0 = 1;
	}

IL_0462:
	{
		V_37 = (bool)G_B120_0;
		bool L_210 = V_37;
		if (!L_210)
		{
			goto IL_0483;
		}
	}
	{
		TEdge_t1694054893 * L_211 = ___e21;
		IntPoint_t2327573135  L_212 = ___pt2;
		Clipper_AddOutPt_m2431700953(__this, L_211, L_212, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_213 = ___e10;
		TEdge_t1694054893 * L_214 = ___e21;
		Clipper_SwapSides_m1090722918(NULL /*static, unused*/, L_213, L_214, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_215 = ___e10;
		TEdge_t1694054893 * L_216 = ___e21;
		Clipper_SwapPolyIndexes_m805866805(NULL /*static, unused*/, L_215, L_216, /*hidden argument*/NULL);
	}

IL_0483:
	{
		goto IL_061f;
	}

IL_0489:
	{
		int32_t L_217 = V_6;
		if (!L_217)
		{
			goto IL_0492;
		}
	}
	{
		int32_t L_218 = V_6;
		if ((!(((uint32_t)L_218) == ((uint32_t)1))))
		{
			goto IL_04a0;
		}
	}

IL_0492:
	{
		int32_t L_219 = V_7;
		if (!L_219)
		{
			goto IL_049d;
		}
	}
	{
		int32_t L_220 = V_7;
		G_B128_0 = ((((int32_t)L_220) == ((int32_t)1))? 1 : 0);
		goto IL_049e;
	}

IL_049d:
	{
		G_B128_0 = 1;
	}

IL_049e:
	{
		G_B130_0 = G_B128_0;
		goto IL_04a1;
	}

IL_04a0:
	{
		G_B130_0 = 0;
	}

IL_04a1:
	{
		V_38 = (bool)G_B130_0;
		bool L_221 = V_38;
		if (!L_221)
		{
			goto IL_061f;
		}
	}
	{
		int32_t L_222 = V_4;
		V_41 = L_222;
		int32_t L_223 = V_41;
		if ((((int32_t)L_223) == ((int32_t)2)))
		{
			goto IL_04bd;
		}
	}
	{
		goto IL_04b6;
	}

IL_04b6:
	{
		int32_t L_224 = V_41;
		if ((((int32_t)L_224) == ((int32_t)3)))
		{
			goto IL_04c8;
		}
	}
	{
		goto IL_04d4;
	}

IL_04bd:
	{
		TEdge_t1694054893 * L_225 = ___e10;
		NullCheck(L_225);
		int32_t L_226 = L_225->get_WindCnt2_9();
		V_39 = (((int64_t)((int64_t)L_226)));
		goto IL_04e4;
	}

IL_04c8:
	{
		TEdge_t1694054893 * L_227 = ___e10;
		NullCheck(L_227);
		int32_t L_228 = L_227->get_WindCnt2_9();
		V_39 = (((int64_t)((int64_t)((-L_228)))));
		goto IL_04e4;
	}

IL_04d4:
	{
		TEdge_t1694054893 * L_229 = ___e10;
		NullCheck(L_229);
		int32_t L_230 = L_229->get_WindCnt2_9();
		int32_t L_231 = il2cpp_codegen_abs(L_230);
		V_39 = (((int64_t)((int64_t)L_231)));
		goto IL_04e4;
	}

IL_04e4:
	{
		int32_t L_232 = V_5;
		V_42 = L_232;
		int32_t L_233 = V_42;
		if ((((int32_t)L_233) == ((int32_t)2)))
		{
			goto IL_04f6;
		}
	}
	{
		goto IL_04ef;
	}

IL_04ef:
	{
		int32_t L_234 = V_42;
		if ((((int32_t)L_234) == ((int32_t)3)))
		{
			goto IL_0501;
		}
	}
	{
		goto IL_050d;
	}

IL_04f6:
	{
		TEdge_t1694054893 * L_235 = ___e21;
		NullCheck(L_235);
		int32_t L_236 = L_235->get_WindCnt2_9();
		V_40 = (((int64_t)((int64_t)L_236)));
		goto IL_051d;
	}

IL_0501:
	{
		TEdge_t1694054893 * L_237 = ___e21;
		NullCheck(L_237);
		int32_t L_238 = L_237->get_WindCnt2_9();
		V_40 = (((int64_t)((int64_t)((-L_238)))));
		goto IL_051d;
	}

IL_050d:
	{
		TEdge_t1694054893 * L_239 = ___e21;
		NullCheck(L_239);
		int32_t L_240 = L_239->get_WindCnt2_9();
		int32_t L_241 = il2cpp_codegen_abs(L_240);
		V_40 = (((int64_t)((int64_t)L_241)));
		goto IL_051d;
	}

IL_051d:
	{
		TEdge_t1694054893 * L_242 = ___e10;
		NullCheck(L_242);
		int32_t L_243 = L_242->get_PolyTyp_5();
		TEdge_t1694054893 * L_244 = ___e21;
		NullCheck(L_244);
		int32_t L_245 = L_244->get_PolyTyp_5();
		V_43 = (bool)((((int32_t)((((int32_t)L_243) == ((int32_t)L_245))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_246 = V_43;
		if (!L_246)
		{
			goto IL_0545;
		}
	}
	{
		TEdge_t1694054893 * L_247 = ___e10;
		TEdge_t1694054893 * L_248 = ___e21;
		IntPoint_t2327573135  L_249 = ___pt2;
		Clipper_AddLocalMinPoly_m3826382306(__this, L_247, L_248, L_249, /*hidden argument*/NULL);
		goto IL_061e;
	}

IL_0545:
	{
		int32_t L_250 = V_6;
		if ((!(((uint32_t)L_250) == ((uint32_t)1))))
		{
			goto IL_0551;
		}
	}
	{
		int32_t L_251 = V_7;
		G_B150_0 = ((((int32_t)L_251) == ((int32_t)1))? 1 : 0);
		goto IL_0552;
	}

IL_0551:
	{
		G_B150_0 = 0;
	}

IL_0552:
	{
		V_44 = (bool)G_B150_0;
		bool L_252 = V_44;
		if (!L_252)
		{
			goto IL_0616;
		}
	}
	{
		int32_t L_253 = __this->get_m_ClipType_9();
		V_45 = L_253;
		int32_t L_254 = V_45;
		switch (L_254)
		{
			case 0:
			{
				goto IL_057f;
			}
			case 1:
			{
				goto IL_05a0;
			}
			case 2:
			{
				goto IL_05c4;
			}
			case 3:
			{
				goto IL_0608;
			}
		}
	}
	{
		goto IL_0614;
	}

IL_057f:
	{
		int64_t L_255 = V_39;
		if ((((int64_t)L_255) <= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_058d;
		}
	}
	{
		int64_t L_256 = V_40;
		G_B156_0 = ((((int64_t)L_256) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		goto IL_058e;
	}

IL_058d:
	{
		G_B156_0 = 0;
	}

IL_058e:
	{
		V_46 = (bool)G_B156_0;
		bool L_257 = V_46;
		if (!L_257)
		{
			goto IL_059e;
		}
	}
	{
		TEdge_t1694054893 * L_258 = ___e10;
		TEdge_t1694054893 * L_259 = ___e21;
		IntPoint_t2327573135  L_260 = ___pt2;
		Clipper_AddLocalMinPoly_m3826382306(__this, L_258, L_259, L_260, /*hidden argument*/NULL);
	}

IL_059e:
	{
		goto IL_0614;
	}

IL_05a0:
	{
		int64_t L_261 = V_39;
		if ((((int64_t)L_261) > ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_05b1;
		}
	}
	{
		int64_t L_262 = V_40;
		G_B162_0 = ((((int32_t)((((int64_t)L_262) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_05b2;
	}

IL_05b1:
	{
		G_B162_0 = 0;
	}

IL_05b2:
	{
		V_47 = (bool)G_B162_0;
		bool L_263 = V_47;
		if (!L_263)
		{
			goto IL_05c2;
		}
	}
	{
		TEdge_t1694054893 * L_264 = ___e10;
		TEdge_t1694054893 * L_265 = ___e21;
		IntPoint_t2327573135  L_266 = ___pt2;
		Clipper_AddLocalMinPoly_m3826382306(__this, L_264, L_265, L_266, /*hidden argument*/NULL);
	}

IL_05c2:
	{
		goto IL_0614;
	}

IL_05c4:
	{
		TEdge_t1694054893 * L_267 = ___e10;
		NullCheck(L_267);
		int32_t L_268 = L_267->get_PolyTyp_5();
		if ((!(((uint32_t)L_268) == ((uint32_t)1))))
		{
			goto IL_05d9;
		}
	}
	{
		int64_t L_269 = V_39;
		if ((((int64_t)L_269) <= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_05d9;
		}
	}
	{
		int64_t L_270 = V_40;
		if ((((int64_t)L_270) > ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_05f5;
		}
	}

IL_05d9:
	{
		TEdge_t1694054893 * L_271 = ___e10;
		NullCheck(L_271);
		int32_t L_272 = L_271->get_PolyTyp_5();
		if (L_272)
		{
			goto IL_05f2;
		}
	}
	{
		int64_t L_273 = V_39;
		if ((((int64_t)L_273) > ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_05f2;
		}
	}
	{
		int64_t L_274 = V_40;
		G_B172_0 = ((((int32_t)((((int64_t)L_274) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_05f3;
	}

IL_05f2:
	{
		G_B172_0 = 0;
	}

IL_05f3:
	{
		G_B174_0 = G_B172_0;
		goto IL_05f6;
	}

IL_05f5:
	{
		G_B174_0 = 1;
	}

IL_05f6:
	{
		V_48 = (bool)G_B174_0;
		bool L_275 = V_48;
		if (!L_275)
		{
			goto IL_0606;
		}
	}
	{
		TEdge_t1694054893 * L_276 = ___e10;
		TEdge_t1694054893 * L_277 = ___e21;
		IntPoint_t2327573135  L_278 = ___pt2;
		Clipper_AddLocalMinPoly_m3826382306(__this, L_276, L_277, L_278, /*hidden argument*/NULL);
	}

IL_0606:
	{
		goto IL_0614;
	}

IL_0608:
	{
		TEdge_t1694054893 * L_279 = ___e10;
		TEdge_t1694054893 * L_280 = ___e21;
		IntPoint_t2327573135  L_281 = ___pt2;
		Clipper_AddLocalMinPoly_m3826382306(__this, L_279, L_280, L_281, /*hidden argument*/NULL);
		goto IL_0614;
	}

IL_0614:
	{
		goto IL_061e;
	}

IL_0616:
	{
		TEdge_t1694054893 * L_282 = ___e10;
		TEdge_t1694054893 * L_283 = ___e21;
		Clipper_SwapSides_m1090722918(NULL /*static, unused*/, L_282, L_283, /*hidden argument*/NULL);
	}

IL_061e:
	{
	}

IL_061f:
	{
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::ProcessHorizontals()
extern "C" IL2CPP_METHOD_ATTR void Clipper_ProcessHorizontals_m128429225 (Clipper_t4158555122 * __this, const RuntimeMethod* method)
{
	TEdge_t1694054893 * V_0 = NULL;
	bool V_1 = false;
	{
		goto IL_000b;
	}

IL_0003:
	{
		TEdge_t1694054893 * L_0 = V_0;
		Clipper_ProcessHorizontal_m678935575(__this, L_0, /*hidden argument*/NULL);
	}

IL_000b:
	{
		bool L_1 = Clipper_PopEdgeFromSEL_m2875851177(__this, (TEdge_t1694054893 **)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (L_2)
		{
			goto IL_0003;
		}
	}
	{
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::GetHorzDirection(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Direction&,System.Int64&,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR void Clipper_GetHorzDirection_m1143700396 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___HorzEdge0, int32_t* ___Dir1, int64_t* ___Left2, int64_t* ___Right3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TEdge_t1694054893 * L_0 = ___HorzEdge0;
		NullCheck(L_0);
		IntPoint_t2327573135 * L_1 = L_0->get_address_of_Bot_0();
		int64_t L_2 = L_1->get_X_0();
		TEdge_t1694054893 * L_3 = ___HorzEdge0;
		NullCheck(L_3);
		IntPoint_t2327573135 * L_4 = L_3->get_address_of_Top_2();
		int64_t L_5 = L_4->get_X_0();
		V_0 = (bool)((((int64_t)L_2) < ((int64_t)L_5))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		int64_t* L_7 = ___Left2;
		TEdge_t1694054893 * L_8 = ___HorzEdge0;
		NullCheck(L_8);
		IntPoint_t2327573135 * L_9 = L_8->get_address_of_Bot_0();
		int64_t L_10 = L_9->get_X_0();
		*((int64_t*)(L_7)) = (int64_t)L_10;
		int64_t* L_11 = ___Right3;
		TEdge_t1694054893 * L_12 = ___HorzEdge0;
		NullCheck(L_12);
		IntPoint_t2327573135 * L_13 = L_12->get_address_of_Top_2();
		int64_t L_14 = L_13->get_X_0();
		*((int64_t*)(L_11)) = (int64_t)L_14;
		int32_t* L_15 = ___Dir1;
		*((int32_t*)(L_15)) = (int32_t)1;
		goto IL_005f;
	}

IL_003f:
	{
		int64_t* L_16 = ___Left2;
		TEdge_t1694054893 * L_17 = ___HorzEdge0;
		NullCheck(L_17);
		IntPoint_t2327573135 * L_18 = L_17->get_address_of_Top_2();
		int64_t L_19 = L_18->get_X_0();
		*((int64_t*)(L_16)) = (int64_t)L_19;
		int64_t* L_20 = ___Right3;
		TEdge_t1694054893 * L_21 = ___HorzEdge0;
		NullCheck(L_21);
		IntPoint_t2327573135 * L_22 = L_21->get_address_of_Bot_0();
		int64_t L_23 = L_22->get_X_0();
		*((int64_t*)(L_20)) = (int64_t)L_23;
		int32_t* L_24 = ___Dir1;
		*((int32_t*)(L_24)) = (int32_t)0;
	}

IL_005f:
	{
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::ProcessHorizontal(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void Clipper_ProcessHorizontal_m678935575 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___horzEdge0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	bool V_3 = false;
	TEdge_t1694054893 * V_4 = NULL;
	TEdge_t1694054893 * V_5 = NULL;
	Maxima_t4278896992 * V_6 = NULL;
	OutPt_t2591102706 * V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	TEdge_t1694054893 * V_17 = NULL;
	TEdge_t1694054893 * V_18 = NULL;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	TEdge_t1694054893 * V_28 = NULL;
	bool V_29 = false;
	OutPt_t2591102706 * V_30 = NULL;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	IntPoint_t2327573135  V_35;
	memset(&V_35, 0, sizeof(V_35));
	IntPoint_t2327573135  V_36;
	memset(&V_36, 0, sizeof(V_36));
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	TEdge_t1694054893 * V_41 = NULL;
	bool V_42 = false;
	OutPt_t2591102706 * V_43 = NULL;
	bool V_44 = false;
	bool V_45 = false;
	bool V_46 = false;
	TEdge_t1694054893 * V_47 = NULL;
	TEdge_t1694054893 * V_48 = NULL;
	bool V_49 = false;
	bool V_50 = false;
	OutPt_t2591102706 * V_51 = NULL;
	bool V_52 = false;
	OutPt_t2591102706 * V_53 = NULL;
	bool V_54 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B52_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B66_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B74_0 = 0;
	int32_t G_B79_0 = 0;
	int32_t G_B84_0 = 0;
	int32_t G_B101_0 = 0;
	int32_t G_B110_0 = 0;
	int32_t G_B115_0 = 0;
	int32_t G_B132_0 = 0;
	int32_t G_B134_0 = 0;
	int32_t G_B144_0 = 0;
	{
		TEdge_t1694054893 * L_0 = ___horzEdge0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_WindDelta_7();
		V_3 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		TEdge_t1694054893 * L_2 = ___horzEdge0;
		Clipper_GetHorzDirection_m1143700396(__this, L_2, (int32_t*)(&V_0), (int64_t*)(&V_1), (int64_t*)(&V_2), /*hidden argument*/NULL);
		TEdge_t1694054893 * L_3 = ___horzEdge0;
		V_4 = L_3;
		V_5 = (TEdge_t1694054893 *)NULL;
		goto IL_002a;
	}

IL_0021:
	{
		TEdge_t1694054893 * L_4 = V_4;
		NullCheck(L_4);
		TEdge_t1694054893 * L_5 = L_4->get_NextInLML_13();
		V_4 = L_5;
	}

IL_002a:
	{
		TEdge_t1694054893 * L_6 = V_4;
		NullCheck(L_6);
		TEdge_t1694054893 * L_7 = L_6->get_NextInLML_13();
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		TEdge_t1694054893 * L_8 = V_4;
		NullCheck(L_8);
		TEdge_t1694054893 * L_9 = L_8->get_NextInLML_13();
		bool L_10 = ClipperBase_IsHorizontal_m234918052(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_10));
		goto IL_0042;
	}

IL_0041:
	{
		G_B5_0 = 0;
	}

IL_0042:
	{
		V_8 = (bool)G_B5_0;
		bool L_11 = V_8;
		if (L_11)
		{
			goto IL_0021;
		}
	}
	{
		TEdge_t1694054893 * L_12 = V_4;
		NullCheck(L_12);
		TEdge_t1694054893 * L_13 = L_12->get_NextInLML_13();
		V_9 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_13) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_14 = V_9;
		if (!L_14)
		{
			goto IL_0062;
		}
	}
	{
		TEdge_t1694054893 * L_15 = V_4;
		TEdge_t1694054893 * L_16 = Clipper_GetMaximaPair_m1622679443(__this, L_15, /*hidden argument*/NULL);
		V_5 = L_16;
	}

IL_0062:
	{
		Maxima_t4278896992 * L_17 = __this->get_m_Maxima_10();
		V_6 = L_17;
		Maxima_t4278896992 * L_18 = V_6;
		V_10 = (bool)((!(((RuntimeObject*)(Maxima_t4278896992 *)L_18) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_19 = V_10;
		if (!L_19)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_20 = V_0;
		V_11 = (bool)((((int32_t)L_20) == ((int32_t)1))? 1 : 0);
		bool L_21 = V_11;
		if (!L_21)
		{
			goto IL_00de;
		}
	}
	{
		goto IL_008f;
	}

IL_0086:
	{
		Maxima_t4278896992 * L_22 = V_6;
		NullCheck(L_22);
		Maxima_t4278896992 * L_23 = L_22->get_Next_1();
		V_6 = L_23;
	}

IL_008f:
	{
		Maxima_t4278896992 * L_24 = V_6;
		if (!L_24)
		{
			goto IL_00ac;
		}
	}
	{
		Maxima_t4278896992 * L_25 = V_6;
		NullCheck(L_25);
		int64_t L_26 = L_25->get_X_0();
		TEdge_t1694054893 * L_27 = ___horzEdge0;
		NullCheck(L_27);
		IntPoint_t2327573135 * L_28 = L_27->get_address_of_Bot_0();
		int64_t L_29 = L_28->get_X_0();
		G_B15_0 = ((((int32_t)((((int64_t)L_26) > ((int64_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B15_0 = 0;
	}

IL_00ad:
	{
		V_12 = (bool)G_B15_0;
		bool L_30 = V_12;
		if (L_30)
		{
			goto IL_0086;
		}
	}
	{
		Maxima_t4278896992 * L_31 = V_6;
		if (!L_31)
		{
			goto IL_00d1;
		}
	}
	{
		Maxima_t4278896992 * L_32 = V_6;
		NullCheck(L_32);
		int64_t L_33 = L_32->get_X_0();
		TEdge_t1694054893 * L_34 = V_4;
		NullCheck(L_34);
		IntPoint_t2327573135 * L_35 = L_34->get_address_of_Top_2();
		int64_t L_36 = L_35->get_X_0();
		G_B19_0 = ((((int32_t)((((int64_t)L_33) < ((int64_t)L_36))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d2;
	}

IL_00d1:
	{
		G_B19_0 = 0;
	}

IL_00d2:
	{
		V_13 = (bool)G_B19_0;
		bool L_37 = V_13;
		if (!L_37)
		{
			goto IL_00db;
		}
	}
	{
		V_6 = (Maxima_t4278896992 *)NULL;
	}

IL_00db:
	{
		goto IL_0137;
	}

IL_00de:
	{
		goto IL_00ea;
	}

IL_00e1:
	{
		Maxima_t4278896992 * L_38 = V_6;
		NullCheck(L_38);
		Maxima_t4278896992 * L_39 = L_38->get_Next_1();
		V_6 = L_39;
	}

IL_00ea:
	{
		Maxima_t4278896992 * L_40 = V_6;
		NullCheck(L_40);
		Maxima_t4278896992 * L_41 = L_40->get_Next_1();
		if (!L_41)
		{
			goto IL_010e;
		}
	}
	{
		Maxima_t4278896992 * L_42 = V_6;
		NullCheck(L_42);
		Maxima_t4278896992 * L_43 = L_42->get_Next_1();
		NullCheck(L_43);
		int64_t L_44 = L_43->get_X_0();
		TEdge_t1694054893 * L_45 = ___horzEdge0;
		NullCheck(L_45);
		IntPoint_t2327573135 * L_46 = L_45->get_address_of_Bot_0();
		int64_t L_47 = L_46->get_X_0();
		G_B27_0 = ((((int64_t)L_44) < ((int64_t)L_47))? 1 : 0);
		goto IL_010f;
	}

IL_010e:
	{
		G_B27_0 = 0;
	}

IL_010f:
	{
		V_14 = (bool)G_B27_0;
		bool L_48 = V_14;
		if (L_48)
		{
			goto IL_00e1;
		}
	}
	{
		Maxima_t4278896992 * L_49 = V_6;
		NullCheck(L_49);
		int64_t L_50 = L_49->get_X_0();
		TEdge_t1694054893 * L_51 = V_4;
		NullCheck(L_51);
		IntPoint_t2327573135 * L_52 = L_51->get_address_of_Top_2();
		int64_t L_53 = L_52->get_X_0();
		V_15 = (bool)((((int32_t)((((int64_t)L_50) > ((int64_t)L_53))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_54 = V_15;
		if (!L_54)
		{
			goto IL_0136;
		}
	}
	{
		V_6 = (Maxima_t4278896992 *)NULL;
	}

IL_0136:
	{
	}

IL_0137:
	{
	}

IL_0138:
	{
		V_7 = (OutPt_t2591102706 *)NULL;
		goto IL_04a6;
	}

IL_0140:
	{
		TEdge_t1694054893 * L_55 = ___horzEdge0;
		TEdge_t1694054893 * L_56 = V_4;
		V_16 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_55) == ((RuntimeObject*)(TEdge_t1694054893 *)L_56))? 1 : 0);
		TEdge_t1694054893 * L_57 = ___horzEdge0;
		int32_t L_58 = V_0;
		TEdge_t1694054893 * L_59 = Clipper_GetNextInAEL_m97829742(__this, L_57, L_58, /*hidden argument*/NULL);
		V_17 = L_59;
		goto IL_043f;
	}

IL_0157:
	{
		Maxima_t4278896992 * L_60 = V_6;
		V_19 = (bool)((!(((RuntimeObject*)(Maxima_t4278896992 *)L_60) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_61 = V_19;
		if (!L_61)
		{
			goto IL_0240;
		}
	}
	{
		int32_t L_62 = V_0;
		V_20 = (bool)((((int32_t)L_62) == ((int32_t)1))? 1 : 0);
		bool L_63 = V_20;
		if (!L_63)
		{
			goto IL_01d9;
		}
	}
	{
		goto IL_01b4;
	}

IL_0174:
	{
		TEdge_t1694054893 * L_64 = ___horzEdge0;
		NullCheck(L_64);
		int32_t L_65 = L_64->get_OutIdx_10();
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		bool L_66 = V_3;
		G_B40_0 = ((((int32_t)L_66) == ((int32_t)0))? 1 : 0);
		goto IL_0185;
	}

IL_0184:
	{
		G_B40_0 = 0;
	}

IL_0185:
	{
		V_21 = (bool)G_B40_0;
		bool L_67 = V_21;
		if (!L_67)
		{
			goto IL_01aa;
		}
	}
	{
		TEdge_t1694054893 * L_68 = ___horzEdge0;
		Maxima_t4278896992 * L_69 = V_6;
		NullCheck(L_69);
		int64_t L_70 = L_69->get_X_0();
		TEdge_t1694054893 * L_71 = ___horzEdge0;
		NullCheck(L_71);
		IntPoint_t2327573135 * L_72 = L_71->get_address_of_Bot_0();
		int64_t L_73 = L_72->get_Y_1();
		IntPoint_t2327573135  L_74;
		memset(&L_74, 0, sizeof(L_74));
		IntPoint__ctor_m3815773329((&L_74), L_70, L_73, /*hidden argument*/NULL);
		Clipper_AddOutPt_m2431700953(__this, L_68, L_74, /*hidden argument*/NULL);
	}

IL_01aa:
	{
		Maxima_t4278896992 * L_75 = V_6;
		NullCheck(L_75);
		Maxima_t4278896992 * L_76 = L_75->get_Next_1();
		V_6 = L_76;
	}

IL_01b4:
	{
		Maxima_t4278896992 * L_77 = V_6;
		if (!L_77)
		{
			goto IL_01cf;
		}
	}
	{
		Maxima_t4278896992 * L_78 = V_6;
		NullCheck(L_78);
		int64_t L_79 = L_78->get_X_0();
		TEdge_t1694054893 * L_80 = V_17;
		NullCheck(L_80);
		IntPoint_t2327573135 * L_81 = L_80->get_address_of_Curr_1();
		int64_t L_82 = L_81->get_X_0();
		G_B46_0 = ((((int64_t)L_79) < ((int64_t)L_82))? 1 : 0);
		goto IL_01d0;
	}

IL_01cf:
	{
		G_B46_0 = 0;
	}

IL_01d0:
	{
		V_22 = (bool)G_B46_0;
		bool L_83 = V_22;
		if (L_83)
		{
			goto IL_0174;
		}
	}
	{
		goto IL_023f;
	}

IL_01d9:
	{
		goto IL_021c;
	}

IL_01dc:
	{
		TEdge_t1694054893 * L_84 = ___horzEdge0;
		NullCheck(L_84);
		int32_t L_85 = L_84->get_OutIdx_10();
		if ((((int32_t)L_85) < ((int32_t)0)))
		{
			goto IL_01ec;
		}
	}
	{
		bool L_86 = V_3;
		G_B52_0 = ((((int32_t)L_86) == ((int32_t)0))? 1 : 0);
		goto IL_01ed;
	}

IL_01ec:
	{
		G_B52_0 = 0;
	}

IL_01ed:
	{
		V_23 = (bool)G_B52_0;
		bool L_87 = V_23;
		if (!L_87)
		{
			goto IL_0212;
		}
	}
	{
		TEdge_t1694054893 * L_88 = ___horzEdge0;
		Maxima_t4278896992 * L_89 = V_6;
		NullCheck(L_89);
		int64_t L_90 = L_89->get_X_0();
		TEdge_t1694054893 * L_91 = ___horzEdge0;
		NullCheck(L_91);
		IntPoint_t2327573135 * L_92 = L_91->get_address_of_Bot_0();
		int64_t L_93 = L_92->get_Y_1();
		IntPoint_t2327573135  L_94;
		memset(&L_94, 0, sizeof(L_94));
		IntPoint__ctor_m3815773329((&L_94), L_90, L_93, /*hidden argument*/NULL);
		Clipper_AddOutPt_m2431700953(__this, L_88, L_94, /*hidden argument*/NULL);
	}

IL_0212:
	{
		Maxima_t4278896992 * L_95 = V_6;
		NullCheck(L_95);
		Maxima_t4278896992 * L_96 = L_95->get_Prev_2();
		V_6 = L_96;
	}

IL_021c:
	{
		Maxima_t4278896992 * L_97 = V_6;
		if (!L_97)
		{
			goto IL_0237;
		}
	}
	{
		Maxima_t4278896992 * L_98 = V_6;
		NullCheck(L_98);
		int64_t L_99 = L_98->get_X_0();
		TEdge_t1694054893 * L_100 = V_17;
		NullCheck(L_100);
		IntPoint_t2327573135 * L_101 = L_100->get_address_of_Curr_1();
		int64_t L_102 = L_101->get_X_0();
		G_B58_0 = ((((int64_t)L_99) > ((int64_t)L_102))? 1 : 0);
		goto IL_0238;
	}

IL_0237:
	{
		G_B58_0 = 0;
	}

IL_0238:
	{
		V_24 = (bool)G_B58_0;
		bool L_103 = V_24;
		if (L_103)
		{
			goto IL_01dc;
		}
	}
	{
	}

IL_023f:
	{
	}

IL_0240:
	{
		int32_t L_104 = V_0;
		if ((!(((uint32_t)L_104) == ((uint32_t)1))))
		{
			goto IL_0254;
		}
	}
	{
		TEdge_t1694054893 * L_105 = V_17;
		NullCheck(L_105);
		IntPoint_t2327573135 * L_106 = L_105->get_address_of_Curr_1();
		int64_t L_107 = L_106->get_X_0();
		int64_t L_108 = V_2;
		if ((((int64_t)L_107) > ((int64_t)L_108)))
		{
			goto IL_026b;
		}
	}

IL_0254:
	{
		int32_t L_109 = V_0;
		if (L_109)
		{
			goto IL_0268;
		}
	}
	{
		TEdge_t1694054893 * L_110 = V_17;
		NullCheck(L_110);
		IntPoint_t2327573135 * L_111 = L_110->get_address_of_Curr_1();
		int64_t L_112 = L_111->get_X_0();
		int64_t L_113 = V_1;
		G_B66_0 = ((((int64_t)L_112) < ((int64_t)L_113))? 1 : 0);
		goto IL_0269;
	}

IL_0268:
	{
		G_B66_0 = 0;
	}

IL_0269:
	{
		G_B68_0 = G_B66_0;
		goto IL_026c;
	}

IL_026b:
	{
		G_B68_0 = 1;
	}

IL_026c:
	{
		V_25 = (bool)G_B68_0;
		bool L_114 = V_25;
		if (!L_114)
		{
			goto IL_0277;
		}
	}
	{
		goto IL_044d;
	}

IL_0277:
	{
		TEdge_t1694054893 * L_115 = V_17;
		NullCheck(L_115);
		IntPoint_t2327573135 * L_116 = L_115->get_address_of_Curr_1();
		int64_t L_117 = L_116->get_X_0();
		TEdge_t1694054893 * L_118 = ___horzEdge0;
		NullCheck(L_118);
		IntPoint_t2327573135 * L_119 = L_118->get_address_of_Top_2();
		int64_t L_120 = L_119->get_X_0();
		if ((!(((uint64_t)L_117) == ((uint64_t)L_120))))
		{
			goto IL_02ae;
		}
	}
	{
		TEdge_t1694054893 * L_121 = ___horzEdge0;
		NullCheck(L_121);
		TEdge_t1694054893 * L_122 = L_121->get_NextInLML_13();
		if (!L_122)
		{
			goto IL_02ae;
		}
	}
	{
		TEdge_t1694054893 * L_123 = V_17;
		NullCheck(L_123);
		double L_124 = L_123->get_Dx_4();
		TEdge_t1694054893 * L_125 = ___horzEdge0;
		NullCheck(L_125);
		TEdge_t1694054893 * L_126 = L_125->get_NextInLML_13();
		NullCheck(L_126);
		double L_127 = L_126->get_Dx_4();
		G_B74_0 = ((((double)L_124) < ((double)L_127))? 1 : 0);
		goto IL_02af;
	}

IL_02ae:
	{
		G_B74_0 = 0;
	}

IL_02af:
	{
		V_26 = (bool)G_B74_0;
		bool L_128 = V_26;
		if (!L_128)
		{
			goto IL_02ba;
		}
	}
	{
		goto IL_044d;
	}

IL_02ba:
	{
		TEdge_t1694054893 * L_129 = ___horzEdge0;
		NullCheck(L_129);
		int32_t L_130 = L_129->get_OutIdx_10();
		if ((((int32_t)L_130) < ((int32_t)0)))
		{
			goto IL_02c9;
		}
	}
	{
		bool L_131 = V_3;
		G_B79_0 = ((((int32_t)L_131) == ((int32_t)0))? 1 : 0);
		goto IL_02ca;
	}

IL_02c9:
	{
		G_B79_0 = 0;
	}

IL_02ca:
	{
		V_27 = (bool)G_B79_0;
		bool L_132 = V_27;
		if (!L_132)
		{
			goto IL_0379;
		}
	}
	{
		TEdge_t1694054893 * L_133 = ___horzEdge0;
		TEdge_t1694054893 * L_134 = V_17;
		NullCheck(L_134);
		IntPoint_t2327573135  L_135 = L_134->get_Curr_1();
		OutPt_t2591102706 * L_136 = Clipper_AddOutPt_m2431700953(__this, L_133, L_135, /*hidden argument*/NULL);
		V_7 = L_136;
		TEdge_t1694054893 * L_137 = __this->get_m_SortedEdges_11();
		V_28 = L_137;
		goto IL_035e;
	}

IL_02ee:
	{
		TEdge_t1694054893 * L_138 = V_28;
		NullCheck(L_138);
		int32_t L_139 = L_138->get_OutIdx_10();
		if ((((int32_t)L_139) < ((int32_t)0)))
		{
			goto IL_032f;
		}
	}
	{
		TEdge_t1694054893 * L_140 = ___horzEdge0;
		NullCheck(L_140);
		IntPoint_t2327573135 * L_141 = L_140->get_address_of_Bot_0();
		int64_t L_142 = L_141->get_X_0();
		TEdge_t1694054893 * L_143 = ___horzEdge0;
		NullCheck(L_143);
		IntPoint_t2327573135 * L_144 = L_143->get_address_of_Top_2();
		int64_t L_145 = L_144->get_X_0();
		TEdge_t1694054893 * L_146 = V_28;
		NullCheck(L_146);
		IntPoint_t2327573135 * L_147 = L_146->get_address_of_Bot_0();
		int64_t L_148 = L_147->get_X_0();
		TEdge_t1694054893 * L_149 = V_28;
		NullCheck(L_149);
		IntPoint_t2327573135 * L_150 = L_149->get_address_of_Top_2();
		int64_t L_151 = L_150->get_X_0();
		bool L_152 = Clipper_HorzSegmentsOverlap_m2026014840(__this, L_142, L_145, L_148, L_151, /*hidden argument*/NULL);
		G_B84_0 = ((int32_t)(L_152));
		goto IL_0330;
	}

IL_032f:
	{
		G_B84_0 = 0;
	}

IL_0330:
	{
		V_29 = (bool)G_B84_0;
		bool L_153 = V_29;
		if (!L_153)
		{
			goto IL_0354;
		}
	}
	{
		TEdge_t1694054893 * L_154 = V_28;
		OutPt_t2591102706 * L_155 = Clipper_GetLastOutPt_m3778549639(__this, L_154, /*hidden argument*/NULL);
		V_30 = L_155;
		OutPt_t2591102706 * L_156 = V_30;
		OutPt_t2591102706 * L_157 = V_7;
		TEdge_t1694054893 * L_158 = V_28;
		NullCheck(L_158);
		IntPoint_t2327573135  L_159 = L_158->get_Top_2();
		Clipper_AddJoin_m2179968199(__this, L_156, L_157, L_159, /*hidden argument*/NULL);
	}

IL_0354:
	{
		TEdge_t1694054893 * L_160 = V_28;
		NullCheck(L_160);
		TEdge_t1694054893 * L_161 = L_160->get_NextInSEL_16();
		V_28 = L_161;
	}

IL_035e:
	{
		TEdge_t1694054893 * L_162 = V_28;
		V_31 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_162) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_163 = V_31;
		if (L_163)
		{
			goto IL_02ee;
		}
	}
	{
		OutPt_t2591102706 * L_164 = V_7;
		TEdge_t1694054893 * L_165 = ___horzEdge0;
		NullCheck(L_165);
		IntPoint_t2327573135  L_166 = L_165->get_Bot_0();
		Clipper_AddGhostJoin_m2741223903(__this, L_164, L_166, /*hidden argument*/NULL);
	}

IL_0379:
	{
		TEdge_t1694054893 * L_167 = V_17;
		TEdge_t1694054893 * L_168 = V_5;
		bool L_169 = V_16;
		V_32 = (bool)((int32_t)((int32_t)((((RuntimeObject*)(TEdge_t1694054893 *)L_167) == ((RuntimeObject*)(TEdge_t1694054893 *)L_168))? 1 : 0)&(int32_t)L_169));
		bool L_170 = V_32;
		if (!L_170)
		{
			goto IL_03c1;
		}
	}
	{
		TEdge_t1694054893 * L_171 = ___horzEdge0;
		NullCheck(L_171);
		int32_t L_172 = L_171->get_OutIdx_10();
		V_33 = (bool)((((int32_t)((((int32_t)L_172) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_173 = V_33;
		if (!L_173)
		{
			goto IL_03ab;
		}
	}
	{
		TEdge_t1694054893 * L_174 = ___horzEdge0;
		TEdge_t1694054893 * L_175 = V_5;
		TEdge_t1694054893 * L_176 = ___horzEdge0;
		NullCheck(L_176);
		IntPoint_t2327573135  L_177 = L_176->get_Top_2();
		Clipper_AddLocalMaxPoly_m2387891006(__this, L_174, L_175, L_177, /*hidden argument*/NULL);
	}

IL_03ab:
	{
		TEdge_t1694054893 * L_178 = ___horzEdge0;
		ClipperBase_DeleteFromAEL_m216615416(__this, L_178, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_179 = V_5;
		ClipperBase_DeleteFromAEL_m216615416(__this, L_179, /*hidden argument*/NULL);
		goto IL_0744;
	}

IL_03c1:
	{
		int32_t L_180 = V_0;
		V_34 = (bool)((((int32_t)L_180) == ((int32_t)1))? 1 : 0);
		bool L_181 = V_34;
		if (!L_181)
		{
			goto IL_03f9;
		}
	}
	{
		TEdge_t1694054893 * L_182 = V_17;
		NullCheck(L_182);
		IntPoint_t2327573135 * L_183 = L_182->get_address_of_Curr_1();
		int64_t L_184 = L_183->get_X_0();
		TEdge_t1694054893 * L_185 = ___horzEdge0;
		NullCheck(L_185);
		IntPoint_t2327573135 * L_186 = L_185->get_address_of_Curr_1();
		int64_t L_187 = L_186->get_Y_1();
		IntPoint__ctor_m3815773329((IntPoint_t2327573135 *)(&V_35), L_184, L_187, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_188 = ___horzEdge0;
		TEdge_t1694054893 * L_189 = V_17;
		IntPoint_t2327573135  L_190 = V_35;
		Clipper_IntersectEdges_m4288628979(__this, L_188, L_189, L_190, /*hidden argument*/NULL);
		goto IL_0425;
	}

IL_03f9:
	{
		TEdge_t1694054893 * L_191 = V_17;
		NullCheck(L_191);
		IntPoint_t2327573135 * L_192 = L_191->get_address_of_Curr_1();
		int64_t L_193 = L_192->get_X_0();
		TEdge_t1694054893 * L_194 = ___horzEdge0;
		NullCheck(L_194);
		IntPoint_t2327573135 * L_195 = L_194->get_address_of_Curr_1();
		int64_t L_196 = L_195->get_Y_1();
		IntPoint__ctor_m3815773329((IntPoint_t2327573135 *)(&V_36), L_193, L_196, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_197 = V_17;
		TEdge_t1694054893 * L_198 = ___horzEdge0;
		IntPoint_t2327573135  L_199 = V_36;
		Clipper_IntersectEdges_m4288628979(__this, L_197, L_198, L_199, /*hidden argument*/NULL);
	}

IL_0425:
	{
		TEdge_t1694054893 * L_200 = V_17;
		int32_t L_201 = V_0;
		TEdge_t1694054893 * L_202 = Clipper_GetNextInAEL_m97829742(__this, L_200, L_201, /*hidden argument*/NULL);
		V_18 = L_202;
		TEdge_t1694054893 * L_203 = ___horzEdge0;
		TEdge_t1694054893 * L_204 = V_17;
		ClipperBase_SwapPositionsInAEL_m2341169767(__this, L_203, L_204, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_205 = V_18;
		V_17 = L_205;
	}

IL_043f:
	{
		TEdge_t1694054893 * L_206 = V_17;
		V_37 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_206) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_207 = V_37;
		if (L_207)
		{
			goto IL_0157;
		}
	}

IL_044d:
	{
		TEdge_t1694054893 * L_208 = ___horzEdge0;
		NullCheck(L_208);
		TEdge_t1694054893 * L_209 = L_208->get_NextInLML_13();
		if (!L_209)
		{
			goto IL_0465;
		}
	}
	{
		TEdge_t1694054893 * L_210 = ___horzEdge0;
		NullCheck(L_210);
		TEdge_t1694054893 * L_211 = L_210->get_NextInLML_13();
		bool L_212 = ClipperBase_IsHorizontal_m234918052(NULL /*static, unused*/, L_211, /*hidden argument*/NULL);
		G_B101_0 = ((((int32_t)L_212) == ((int32_t)0))? 1 : 0);
		goto IL_0466;
	}

IL_0465:
	{
		G_B101_0 = 1;
	}

IL_0466:
	{
		V_38 = (bool)G_B101_0;
		bool L_213 = V_38;
		if (!L_213)
		{
			goto IL_046e;
		}
	}
	{
		goto IL_04ab;
	}

IL_046e:
	{
		ClipperBase_UpdateEdgeIntoAEL_m4154808885(__this, (TEdge_t1694054893 **)(&___horzEdge0), /*hidden argument*/NULL);
		TEdge_t1694054893 * L_214 = ___horzEdge0;
		NullCheck(L_214);
		int32_t L_215 = L_214->get_OutIdx_10();
		V_39 = (bool)((((int32_t)((((int32_t)L_215) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_216 = V_39;
		if (!L_216)
		{
			goto IL_0497;
		}
	}
	{
		TEdge_t1694054893 * L_217 = ___horzEdge0;
		TEdge_t1694054893 * L_218 = ___horzEdge0;
		NullCheck(L_218);
		IntPoint_t2327573135  L_219 = L_218->get_Bot_0();
		Clipper_AddOutPt_m2431700953(__this, L_217, L_219, /*hidden argument*/NULL);
	}

IL_0497:
	{
		TEdge_t1694054893 * L_220 = ___horzEdge0;
		Clipper_GetHorzDirection_m1143700396(__this, L_220, (int32_t*)(&V_0), (int64_t*)(&V_1), (int64_t*)(&V_2), /*hidden argument*/NULL);
	}

IL_04a6:
	{
		goto IL_0140;
	}

IL_04ab:
	{
		TEdge_t1694054893 * L_221 = ___horzEdge0;
		NullCheck(L_221);
		int32_t L_222 = L_221->get_OutIdx_10();
		if ((((int32_t)L_222) < ((int32_t)0)))
		{
			goto IL_04bb;
		}
	}
	{
		OutPt_t2591102706 * L_223 = V_7;
		G_B110_0 = ((((RuntimeObject*)(OutPt_t2591102706 *)L_223) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_04bc;
	}

IL_04bb:
	{
		G_B110_0 = 0;
	}

IL_04bc:
	{
		V_40 = (bool)G_B110_0;
		bool L_224 = V_40;
		if (!L_224)
		{
			goto IL_0564;
		}
	}
	{
		TEdge_t1694054893 * L_225 = ___horzEdge0;
		OutPt_t2591102706 * L_226 = Clipper_GetLastOutPt_m3778549639(__this, L_225, /*hidden argument*/NULL);
		V_7 = L_226;
		TEdge_t1694054893 * L_227 = __this->get_m_SortedEdges_11();
		V_41 = L_227;
		goto IL_0549;
	}

IL_04d9:
	{
		TEdge_t1694054893 * L_228 = V_41;
		NullCheck(L_228);
		int32_t L_229 = L_228->get_OutIdx_10();
		if ((((int32_t)L_229) < ((int32_t)0)))
		{
			goto IL_051a;
		}
	}
	{
		TEdge_t1694054893 * L_230 = ___horzEdge0;
		NullCheck(L_230);
		IntPoint_t2327573135 * L_231 = L_230->get_address_of_Bot_0();
		int64_t L_232 = L_231->get_X_0();
		TEdge_t1694054893 * L_233 = ___horzEdge0;
		NullCheck(L_233);
		IntPoint_t2327573135 * L_234 = L_233->get_address_of_Top_2();
		int64_t L_235 = L_234->get_X_0();
		TEdge_t1694054893 * L_236 = V_41;
		NullCheck(L_236);
		IntPoint_t2327573135 * L_237 = L_236->get_address_of_Bot_0();
		int64_t L_238 = L_237->get_X_0();
		TEdge_t1694054893 * L_239 = V_41;
		NullCheck(L_239);
		IntPoint_t2327573135 * L_240 = L_239->get_address_of_Top_2();
		int64_t L_241 = L_240->get_X_0();
		bool L_242 = Clipper_HorzSegmentsOverlap_m2026014840(__this, L_232, L_235, L_238, L_241, /*hidden argument*/NULL);
		G_B115_0 = ((int32_t)(L_242));
		goto IL_051b;
	}

IL_051a:
	{
		G_B115_0 = 0;
	}

IL_051b:
	{
		V_42 = (bool)G_B115_0;
		bool L_243 = V_42;
		if (!L_243)
		{
			goto IL_053f;
		}
	}
	{
		TEdge_t1694054893 * L_244 = V_41;
		OutPt_t2591102706 * L_245 = Clipper_GetLastOutPt_m3778549639(__this, L_244, /*hidden argument*/NULL);
		V_43 = L_245;
		OutPt_t2591102706 * L_246 = V_43;
		OutPt_t2591102706 * L_247 = V_7;
		TEdge_t1694054893 * L_248 = V_41;
		NullCheck(L_248);
		IntPoint_t2327573135  L_249 = L_248->get_Top_2();
		Clipper_AddJoin_m2179968199(__this, L_246, L_247, L_249, /*hidden argument*/NULL);
	}

IL_053f:
	{
		TEdge_t1694054893 * L_250 = V_41;
		NullCheck(L_250);
		TEdge_t1694054893 * L_251 = L_250->get_NextInSEL_16();
		V_41 = L_251;
	}

IL_0549:
	{
		TEdge_t1694054893 * L_252 = V_41;
		V_44 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_252) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_253 = V_44;
		if (L_253)
		{
			goto IL_04d9;
		}
	}
	{
		OutPt_t2591102706 * L_254 = V_7;
		TEdge_t1694054893 * L_255 = ___horzEdge0;
		NullCheck(L_255);
		IntPoint_t2327573135  L_256 = L_255->get_Top_2();
		Clipper_AddGhostJoin_m2741223903(__this, L_254, L_256, /*hidden argument*/NULL);
	}

IL_0564:
	{
		TEdge_t1694054893 * L_257 = ___horzEdge0;
		NullCheck(L_257);
		TEdge_t1694054893 * L_258 = L_257->get_NextInLML_13();
		V_45 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_258) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_259 = V_45;
		if (!L_259)
		{
			goto IL_071a;
		}
	}
	{
		TEdge_t1694054893 * L_260 = ___horzEdge0;
		NullCheck(L_260);
		int32_t L_261 = L_260->get_OutIdx_10();
		V_46 = (bool)((((int32_t)((((int32_t)L_261) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_262 = V_46;
		if (!L_262)
		{
			goto IL_070e;
		}
	}
	{
		TEdge_t1694054893 * L_263 = ___horzEdge0;
		TEdge_t1694054893 * L_264 = ___horzEdge0;
		NullCheck(L_264);
		IntPoint_t2327573135  L_265 = L_264->get_Top_2();
		OutPt_t2591102706 * L_266 = Clipper_AddOutPt_m2431700953(__this, L_263, L_265, /*hidden argument*/NULL);
		V_7 = L_266;
		ClipperBase_UpdateEdgeIntoAEL_m4154808885(__this, (TEdge_t1694054893 **)(&___horzEdge0), /*hidden argument*/NULL);
		TEdge_t1694054893 * L_267 = ___horzEdge0;
		NullCheck(L_267);
		int32_t L_268 = L_267->get_WindDelta_7();
		V_49 = (bool)((((int32_t)L_268) == ((int32_t)0))? 1 : 0);
		bool L_269 = V_49;
		if (!L_269)
		{
			goto IL_05b9;
		}
	}
	{
		goto IL_0744;
	}

IL_05b9:
	{
		TEdge_t1694054893 * L_270 = ___horzEdge0;
		NullCheck(L_270);
		TEdge_t1694054893 * L_271 = L_270->get_PrevInAEL_15();
		V_47 = L_271;
		TEdge_t1694054893 * L_272 = ___horzEdge0;
		NullCheck(L_272);
		TEdge_t1694054893 * L_273 = L_272->get_NextInAEL_14();
		V_48 = L_273;
		TEdge_t1694054893 * L_274 = V_47;
		if (!L_274)
		{
			goto IL_063f;
		}
	}
	{
		TEdge_t1694054893 * L_275 = V_47;
		NullCheck(L_275);
		IntPoint_t2327573135 * L_276 = L_275->get_address_of_Curr_1();
		int64_t L_277 = L_276->get_X_0();
		TEdge_t1694054893 * L_278 = ___horzEdge0;
		NullCheck(L_278);
		IntPoint_t2327573135 * L_279 = L_278->get_address_of_Bot_0();
		int64_t L_280 = L_279->get_X_0();
		if ((!(((uint64_t)L_277) == ((uint64_t)L_280))))
		{
			goto IL_063f;
		}
	}
	{
		TEdge_t1694054893 * L_281 = V_47;
		NullCheck(L_281);
		IntPoint_t2327573135 * L_282 = L_281->get_address_of_Curr_1();
		int64_t L_283 = L_282->get_Y_1();
		TEdge_t1694054893 * L_284 = ___horzEdge0;
		NullCheck(L_284);
		IntPoint_t2327573135 * L_285 = L_284->get_address_of_Bot_0();
		int64_t L_286 = L_285->get_Y_1();
		if ((!(((uint64_t)L_283) == ((uint64_t)L_286))))
		{
			goto IL_063f;
		}
	}
	{
		TEdge_t1694054893 * L_287 = V_47;
		NullCheck(L_287);
		int32_t L_288 = L_287->get_WindDelta_7();
		if (!L_288)
		{
			goto IL_063f;
		}
	}
	{
		TEdge_t1694054893 * L_289 = V_47;
		NullCheck(L_289);
		int32_t L_290 = L_289->get_OutIdx_10();
		if ((((int32_t)L_290) < ((int32_t)0)))
		{
			goto IL_063c;
		}
	}
	{
		TEdge_t1694054893 * L_291 = V_47;
		NullCheck(L_291);
		IntPoint_t2327573135 * L_292 = L_291->get_address_of_Curr_1();
		int64_t L_293 = L_292->get_Y_1();
		TEdge_t1694054893 * L_294 = V_47;
		NullCheck(L_294);
		IntPoint_t2327573135 * L_295 = L_294->get_address_of_Top_2();
		int64_t L_296 = L_295->get_Y_1();
		if ((((int64_t)L_293) <= ((int64_t)L_296)))
		{
			goto IL_063c;
		}
	}
	{
		TEdge_t1694054893 * L_297 = ___horzEdge0;
		TEdge_t1694054893 * L_298 = V_47;
		bool L_299 = ((ClipperBase_t2411222589 *)__this)->get_m_UseFullRange_6();
		bool L_300 = ClipperBase_SlopesEqual_m2620772186(NULL /*static, unused*/, L_297, L_298, L_299, /*hidden argument*/NULL);
		G_B132_0 = ((int32_t)(L_300));
		goto IL_063d;
	}

IL_063c:
	{
		G_B132_0 = 0;
	}

IL_063d:
	{
		G_B134_0 = G_B132_0;
		goto IL_0640;
	}

IL_063f:
	{
		G_B134_0 = 0;
	}

IL_0640:
	{
		V_50 = (bool)G_B134_0;
		bool L_301 = V_50;
		if (!L_301)
		{
			goto IL_066e;
		}
	}
	{
		TEdge_t1694054893 * L_302 = V_47;
		TEdge_t1694054893 * L_303 = ___horzEdge0;
		NullCheck(L_303);
		IntPoint_t2327573135  L_304 = L_303->get_Bot_0();
		OutPt_t2591102706 * L_305 = Clipper_AddOutPt_m2431700953(__this, L_302, L_304, /*hidden argument*/NULL);
		V_51 = L_305;
		OutPt_t2591102706 * L_306 = V_7;
		OutPt_t2591102706 * L_307 = V_51;
		TEdge_t1694054893 * L_308 = ___horzEdge0;
		NullCheck(L_308);
		IntPoint_t2327573135  L_309 = L_308->get_Top_2();
		Clipper_AddJoin_m2179968199(__this, L_306, L_307, L_309, /*hidden argument*/NULL);
		goto IL_070b;
	}

IL_066e:
	{
		TEdge_t1694054893 * L_310 = V_48;
		if (!L_310)
		{
			goto IL_06e1;
		}
	}
	{
		TEdge_t1694054893 * L_311 = V_48;
		NullCheck(L_311);
		IntPoint_t2327573135 * L_312 = L_311->get_address_of_Curr_1();
		int64_t L_313 = L_312->get_X_0();
		TEdge_t1694054893 * L_314 = ___horzEdge0;
		NullCheck(L_314);
		IntPoint_t2327573135 * L_315 = L_314->get_address_of_Bot_0();
		int64_t L_316 = L_315->get_X_0();
		if ((!(((uint64_t)L_313) == ((uint64_t)L_316))))
		{
			goto IL_06e1;
		}
	}
	{
		TEdge_t1694054893 * L_317 = V_48;
		NullCheck(L_317);
		IntPoint_t2327573135 * L_318 = L_317->get_address_of_Curr_1();
		int64_t L_319 = L_318->get_Y_1();
		TEdge_t1694054893 * L_320 = ___horzEdge0;
		NullCheck(L_320);
		IntPoint_t2327573135 * L_321 = L_320->get_address_of_Bot_0();
		int64_t L_322 = L_321->get_Y_1();
		if ((!(((uint64_t)L_319) == ((uint64_t)L_322))))
		{
			goto IL_06e1;
		}
	}
	{
		TEdge_t1694054893 * L_323 = V_48;
		NullCheck(L_323);
		int32_t L_324 = L_323->get_WindDelta_7();
		if (!L_324)
		{
			goto IL_06e1;
		}
	}
	{
		TEdge_t1694054893 * L_325 = V_48;
		NullCheck(L_325);
		int32_t L_326 = L_325->get_OutIdx_10();
		if ((((int32_t)L_326) < ((int32_t)0)))
		{
			goto IL_06e1;
		}
	}
	{
		TEdge_t1694054893 * L_327 = V_48;
		NullCheck(L_327);
		IntPoint_t2327573135 * L_328 = L_327->get_address_of_Curr_1();
		int64_t L_329 = L_328->get_Y_1();
		TEdge_t1694054893 * L_330 = V_48;
		NullCheck(L_330);
		IntPoint_t2327573135 * L_331 = L_330->get_address_of_Top_2();
		int64_t L_332 = L_331->get_Y_1();
		if ((((int64_t)L_329) <= ((int64_t)L_332)))
		{
			goto IL_06e1;
		}
	}
	{
		TEdge_t1694054893 * L_333 = ___horzEdge0;
		TEdge_t1694054893 * L_334 = V_48;
		bool L_335 = ((ClipperBase_t2411222589 *)__this)->get_m_UseFullRange_6();
		bool L_336 = ClipperBase_SlopesEqual_m2620772186(NULL /*static, unused*/, L_333, L_334, L_335, /*hidden argument*/NULL);
		G_B144_0 = ((int32_t)(L_336));
		goto IL_06e2;
	}

IL_06e1:
	{
		G_B144_0 = 0;
	}

IL_06e2:
	{
		V_52 = (bool)G_B144_0;
		bool L_337 = V_52;
		if (!L_337)
		{
			goto IL_070b;
		}
	}
	{
		TEdge_t1694054893 * L_338 = V_48;
		TEdge_t1694054893 * L_339 = ___horzEdge0;
		NullCheck(L_339);
		IntPoint_t2327573135  L_340 = L_339->get_Bot_0();
		OutPt_t2591102706 * L_341 = Clipper_AddOutPt_m2431700953(__this, L_338, L_340, /*hidden argument*/NULL);
		V_53 = L_341;
		OutPt_t2591102706 * L_342 = V_7;
		OutPt_t2591102706 * L_343 = V_53;
		TEdge_t1694054893 * L_344 = ___horzEdge0;
		NullCheck(L_344);
		IntPoint_t2327573135  L_345 = L_344->get_Top_2();
		Clipper_AddJoin_m2179968199(__this, L_342, L_343, L_345, /*hidden argument*/NULL);
	}

IL_070b:
	{
		goto IL_0717;
	}

IL_070e:
	{
		ClipperBase_UpdateEdgeIntoAEL_m4154808885(__this, (TEdge_t1694054893 **)(&___horzEdge0), /*hidden argument*/NULL);
	}

IL_0717:
	{
		goto IL_0744;
	}

IL_071a:
	{
		TEdge_t1694054893 * L_346 = ___horzEdge0;
		NullCheck(L_346);
		int32_t L_347 = L_346->get_OutIdx_10();
		V_54 = (bool)((((int32_t)((((int32_t)L_347) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_348 = V_54;
		if (!L_348)
		{
			goto IL_073b;
		}
	}
	{
		TEdge_t1694054893 * L_349 = ___horzEdge0;
		TEdge_t1694054893 * L_350 = ___horzEdge0;
		NullCheck(L_350);
		IntPoint_t2327573135  L_351 = L_350->get_Top_2();
		Clipper_AddOutPt_m2431700953(__this, L_349, L_351, /*hidden argument*/NULL);
	}

IL_073b:
	{
		TEdge_t1694054893 * L_352 = ___horzEdge0;
		ClipperBase_DeleteFromAEL_m216615416(__this, L_352, /*hidden argument*/NULL);
	}

IL_0744:
	{
		return;
	}
}
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::GetNextInAEL(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Direction)
extern "C" IL2CPP_METHOD_ATTR TEdge_t1694054893 * Clipper_GetNextInAEL_m97829742 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e0, int32_t ___Direction1, const RuntimeMethod* method)
{
	TEdge_t1694054893 * V_0 = NULL;
	TEdge_t1694054893 * G_B3_0 = NULL;
	{
		int32_t L_0 = ___Direction1;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000d;
		}
	}
	{
		TEdge_t1694054893 * L_1 = ___e0;
		NullCheck(L_1);
		TEdge_t1694054893 * L_2 = L_1->get_PrevInAEL_15();
		G_B3_0 = L_2;
		goto IL_0013;
	}

IL_000d:
	{
		TEdge_t1694054893 * L_3 = ___e0;
		NullCheck(L_3);
		TEdge_t1694054893 * L_4 = L_3->get_NextInAEL_14();
		G_B3_0 = L_4;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		TEdge_t1694054893 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::IsMaxima(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,System.Double)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_IsMaxima_m1397546823 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e0, double ___Y1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		TEdge_t1694054893 * L_0 = ___e0;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		TEdge_t1694054893 * L_1 = ___e0;
		NullCheck(L_1);
		IntPoint_t2327573135 * L_2 = L_1->get_address_of_Top_2();
		int64_t L_3 = L_2->get_Y_1();
		double L_4 = ___Y1;
		if ((!(((double)(((double)((double)L_3)))) == ((double)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		TEdge_t1694054893 * L_5 = ___e0;
		NullCheck(L_5);
		TEdge_t1694054893 * L_6 = L_5->get_NextInLML_13();
		G_B4_0 = ((((RuntimeObject*)(TEdge_t1694054893 *)L_6) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B4_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0022;
	}

IL_0022:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::IsIntermediate(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,System.Double)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_IsIntermediate_m3498560226 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e0, double ___Y1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		TEdge_t1694054893 * L_0 = ___e0;
		NullCheck(L_0);
		IntPoint_t2327573135 * L_1 = L_0->get_address_of_Top_2();
		int64_t L_2 = L_1->get_Y_1();
		double L_3 = ___Y1;
		if ((!(((double)(((double)((double)L_2)))) == ((double)L_3))))
		{
			goto IL_001b;
		}
	}
	{
		TEdge_t1694054893 * L_4 = ___e0;
		NullCheck(L_4);
		TEdge_t1694054893 * L_5 = L_4->get_NextInLML_13();
		G_B3_0 = ((!(((RuntimeObject*)(TEdge_t1694054893 *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::GetMaximaPair(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR TEdge_t1694054893 * Clipper_GetMaximaPair_m1622679443 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e0, const RuntimeMethod* method)
{
	bool V_0 = false;
	TEdge_t1694054893 * V_1 = NULL;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		TEdge_t1694054893 * L_0 = ___e0;
		NullCheck(L_0);
		TEdge_t1694054893 * L_1 = L_0->get_Next_11();
		NullCheck(L_1);
		IntPoint_t2327573135  L_2 = L_1->get_Top_2();
		TEdge_t1694054893 * L_3 = ___e0;
		NullCheck(L_3);
		IntPoint_t2327573135  L_4 = L_3->get_Top_2();
		bool L_5 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		TEdge_t1694054893 * L_6 = ___e0;
		NullCheck(L_6);
		TEdge_t1694054893 * L_7 = L_6->get_Next_11();
		NullCheck(L_7);
		TEdge_t1694054893 * L_8 = L_7->get_NextInLML_13();
		G_B3_0 = ((((RuntimeObject*)(TEdge_t1694054893 *)L_8) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 0;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		TEdge_t1694054893 * L_10 = ___e0;
		NullCheck(L_10);
		TEdge_t1694054893 * L_11 = L_10->get_Next_11();
		V_1 = L_11;
		goto IL_0071;
	}

IL_0037:
	{
		TEdge_t1694054893 * L_12 = ___e0;
		NullCheck(L_12);
		TEdge_t1694054893 * L_13 = L_12->get_Prev_12();
		NullCheck(L_13);
		IntPoint_t2327573135  L_14 = L_13->get_Top_2();
		TEdge_t1694054893 * L_15 = ___e0;
		NullCheck(L_15);
		IntPoint_t2327573135  L_16 = L_15->get_Top_2();
		bool L_17 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_14, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_005f;
		}
	}
	{
		TEdge_t1694054893 * L_18 = ___e0;
		NullCheck(L_18);
		TEdge_t1694054893 * L_19 = L_18->get_Prev_12();
		NullCheck(L_19);
		TEdge_t1694054893 * L_20 = L_19->get_NextInLML_13();
		G_B8_0 = ((((RuntimeObject*)(TEdge_t1694054893 *)L_20) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B8_0 = 0;
	}

IL_0060:
	{
		V_2 = (bool)G_B8_0;
		bool L_21 = V_2;
		if (!L_21)
		{
			goto IL_006d;
		}
	}
	{
		TEdge_t1694054893 * L_22 = ___e0;
		NullCheck(L_22);
		TEdge_t1694054893 * L_23 = L_22->get_Prev_12();
		V_1 = L_23;
		goto IL_0071;
	}

IL_006d:
	{
		V_1 = (TEdge_t1694054893 *)NULL;
		goto IL_0071;
	}

IL_0071:
	{
		TEdge_t1694054893 * L_24 = V_1;
		return L_24;
	}
}
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::GetMaximaPairEx(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR TEdge_t1694054893 * Clipper_GetMaximaPairEx_m542542616 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e0, const RuntimeMethod* method)
{
	TEdge_t1694054893 * V_0 = NULL;
	bool V_1 = false;
	TEdge_t1694054893 * V_2 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	{
		TEdge_t1694054893 * L_0 = ___e0;
		TEdge_t1694054893 * L_1 = Clipper_GetMaximaPair_m1622679443(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		TEdge_t1694054893 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		TEdge_t1694054893 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_OutIdx_10();
		if ((((int32_t)L_4) == ((int32_t)((int32_t)-2))))
		{
			goto IL_0032;
		}
	}
	{
		TEdge_t1694054893 * L_5 = V_0;
		NullCheck(L_5);
		TEdge_t1694054893 * L_6 = L_5->get_NextInAEL_14();
		TEdge_t1694054893 * L_7 = V_0;
		NullCheck(L_7);
		TEdge_t1694054893 * L_8 = L_7->get_PrevInAEL_15();
		if ((!(((RuntimeObject*)(TEdge_t1694054893 *)L_6) == ((RuntimeObject*)(TEdge_t1694054893 *)L_8))))
		{
			goto IL_002f;
		}
	}
	{
		TEdge_t1694054893 * L_9 = V_0;
		bool L_10 = ClipperBase_IsHorizontal_m234918052(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B5_0 = 0;
	}

IL_0030:
	{
		G_B7_0 = G_B5_0;
		goto IL_0033;
	}

IL_0032:
	{
		G_B7_0 = 1;
	}

IL_0033:
	{
		V_1 = (bool)G_B7_0;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_003b;
		}
	}
	{
		V_2 = (TEdge_t1694054893 *)NULL;
		goto IL_003f;
	}

IL_003b:
	{
		TEdge_t1694054893 * L_12 = V_0;
		V_2 = L_12;
		goto IL_003f;
	}

IL_003f:
	{
		TEdge_t1694054893 * L_13 = V_2;
		return L_13;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::ProcessIntersections(System.Int64)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_ProcessIntersections_m1183388747 (Clipper_t4158555122 * __this, int64_t ___topY0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_ProcessIntersections_m1183388747_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B8_0 = 0;
	{
		TEdge_t1694054893 * L_0 = ((ClipperBase_t2411222589 *)__this)->get_m_ActiveEdges_5();
		V_0 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0088;
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			int64_t L_2 = ___topY0;
			Clipper_BuildIntersectList_m1749992062(__this, L_2, /*hidden argument*/NULL);
			List_1_t556621665 * L_3 = __this->get_m_IntersectList_12();
			NullCheck(L_3);
			int32_t L_4 = List_1_get_Count_m2984725346(L_3, /*hidden argument*/List_1_get_Count_m2984725346_RuntimeMethod_var);
			V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_0032;
			}
		}

IL_002e:
		{
			V_1 = (bool)1;
			goto IL_0088;
		}

IL_0032:
		{
			List_1_t556621665 * L_6 = __this->get_m_IntersectList_12();
			NullCheck(L_6);
			int32_t L_7 = List_1_get_Count_m2984725346(L_6, /*hidden argument*/List_1_get_Count_m2984725346_RuntimeMethod_var);
			if ((((int32_t)L_7) == ((int32_t)1)))
			{
				goto IL_0048;
			}
		}

IL_0040:
		{
			bool L_8 = Clipper_FixupIntersectionOrder_m704608269(__this, /*hidden argument*/NULL);
			G_B8_0 = ((int32_t)(L_8));
			goto IL_0049;
		}

IL_0048:
		{
			G_B8_0 = 1;
		}

IL_0049:
		{
			V_3 = (bool)G_B8_0;
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_0056;
			}
		}

IL_004d:
		{
			Clipper_ProcessIntersectList_m3289731701(__this, /*hidden argument*/NULL);
			goto IL_005a;
		}

IL_0056:
		{
			V_1 = (bool)0;
			goto IL_0088;
		}

IL_005a:
		{
			goto IL_007d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_005d;
		throw e;
	}

CATCH_005d:
	{ // begin catch(System.Object)
		__this->set_m_SortedEdges_11((TEdge_t1694054893 *)NULL);
		List_1_t556621665 * L_10 = __this->get_m_IntersectList_12();
		NullCheck(L_10);
		List_1_Clear_m3783374028(L_10, /*hidden argument*/List_1_Clear_m3783374028_RuntimeMethod_var);
		ClipperException_t3118674656 * L_11 = (ClipperException_t3118674656 *)il2cpp_codegen_object_new(ClipperException_t3118674656_il2cpp_TypeInfo_var);
		ClipperException__ctor_m1990918546(L_11, _stringLiteral2047889476, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, Clipper_ProcessIntersections_m1183388747_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_007d:
	{
		__this->set_m_SortedEdges_11((TEdge_t1694054893 *)NULL);
		V_1 = (bool)1;
		goto IL_0088;
	}

IL_0088:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::BuildIntersectList(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Clipper_BuildIntersectList_m1749992062 (Clipper_t4158555122 * __this, int64_t ___topY0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_BuildIntersectList_m1749992062_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TEdge_t1694054893 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	TEdge_t1694054893 * V_4 = NULL;
	IntPoint_t2327573135  V_5;
	memset(&V_5, 0, sizeof(V_5));
	bool V_6 = false;
	IntersectNode_t3379514219 * V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B21_0 = 0;
	{
		TEdge_t1694054893 * L_0 = ((ClipperBase_t2411222589 *)__this)->get_m_ActiveEdges_5();
		V_2 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_015b;
	}

IL_0013:
	{
		TEdge_t1694054893 * L_2 = ((ClipperBase_t2411222589 *)__this)->get_m_ActiveEdges_5();
		V_0 = L_2;
		TEdge_t1694054893 * L_3 = V_0;
		__this->set_m_SortedEdges_11(L_3);
		goto IL_0056;
	}

IL_0023:
	{
		TEdge_t1694054893 * L_4 = V_0;
		TEdge_t1694054893 * L_5 = V_0;
		NullCheck(L_5);
		TEdge_t1694054893 * L_6 = L_5->get_PrevInAEL_15();
		NullCheck(L_4);
		L_4->set_PrevInSEL_17(L_6);
		TEdge_t1694054893 * L_7 = V_0;
		TEdge_t1694054893 * L_8 = V_0;
		NullCheck(L_8);
		TEdge_t1694054893 * L_9 = L_8->get_NextInAEL_14();
		NullCheck(L_7);
		L_7->set_NextInSEL_16(L_9);
		TEdge_t1694054893 * L_10 = V_0;
		NullCheck(L_10);
		IntPoint_t2327573135 * L_11 = L_10->get_address_of_Curr_1();
		TEdge_t1694054893 * L_12 = V_0;
		int64_t L_13 = ___topY0;
		int64_t L_14 = Clipper_TopX_m2701964852(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		L_11->set_X_0(L_14);
		TEdge_t1694054893 * L_15 = V_0;
		NullCheck(L_15);
		TEdge_t1694054893 * L_16 = L_15->get_NextInAEL_14();
		V_0 = L_16;
	}

IL_0056:
	{
		TEdge_t1694054893 * L_17 = V_0;
		V_3 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_17) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_0023;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_013c;
	}

IL_0065:
	{
		V_1 = (bool)0;
		TEdge_t1694054893 * L_19 = __this->get_m_SortedEdges_11();
		V_0 = L_19;
		goto IL_010a;
	}

IL_0074:
	{
		TEdge_t1694054893 * L_20 = V_0;
		NullCheck(L_20);
		TEdge_t1694054893 * L_21 = L_20->get_NextInSEL_16();
		V_4 = L_21;
		TEdge_t1694054893 * L_22 = V_0;
		NullCheck(L_22);
		IntPoint_t2327573135 * L_23 = L_22->get_address_of_Curr_1();
		int64_t L_24 = L_23->get_X_0();
		TEdge_t1694054893 * L_25 = V_4;
		NullCheck(L_25);
		IntPoint_t2327573135 * L_26 = L_25->get_address_of_Curr_1();
		int64_t L_27 = L_26->get_X_0();
		V_6 = (bool)((((int64_t)L_24) > ((int64_t)L_27))? 1 : 0);
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_0106;
		}
	}
	{
		TEdge_t1694054893 * L_29 = V_0;
		TEdge_t1694054893 * L_30 = V_4;
		Clipper_IntersectPoint_m1381152703(__this, L_29, L_30, (IntPoint_t2327573135 *)(&V_5), /*hidden argument*/NULL);
		IntPoint_t2327573135  L_31 = V_5;
		int64_t L_32 = L_31.get_Y_1();
		int64_t L_33 = ___topY0;
		V_8 = (bool)((((int64_t)L_32) < ((int64_t)L_33))? 1 : 0);
		bool L_34 = V_8;
		if (!L_34)
		{
			goto IL_00c8;
		}
	}
	{
		TEdge_t1694054893 * L_35 = V_0;
		int64_t L_36 = ___topY0;
		int64_t L_37 = Clipper_TopX_m2701964852(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		int64_t L_38 = ___topY0;
		IntPoint__ctor_m3815773329((IntPoint_t2327573135 *)(&V_5), L_37, L_38, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		IntersectNode_t3379514219 * L_39 = (IntersectNode_t3379514219 *)il2cpp_codegen_object_new(IntersectNode_t3379514219_il2cpp_TypeInfo_var);
		IntersectNode__ctor_m896529871(L_39, /*hidden argument*/NULL);
		V_7 = L_39;
		IntersectNode_t3379514219 * L_40 = V_7;
		TEdge_t1694054893 * L_41 = V_0;
		NullCheck(L_40);
		L_40->set_Edge1_0(L_41);
		IntersectNode_t3379514219 * L_42 = V_7;
		TEdge_t1694054893 * L_43 = V_4;
		NullCheck(L_42);
		L_42->set_Edge2_1(L_43);
		IntersectNode_t3379514219 * L_44 = V_7;
		IntPoint_t2327573135  L_45 = V_5;
		NullCheck(L_44);
		L_44->set_Pt_2(L_45);
		List_1_t556621665 * L_46 = __this->get_m_IntersectList_12();
		IntersectNode_t3379514219 * L_47 = V_7;
		NullCheck(L_46);
		List_1_Add_m1923741412(L_46, L_47, /*hidden argument*/List_1_Add_m1923741412_RuntimeMethod_var);
		TEdge_t1694054893 * L_48 = V_0;
		TEdge_t1694054893 * L_49 = V_4;
		Clipper_SwapPositionsInSEL_m1038129781(__this, L_48, L_49, /*hidden argument*/NULL);
		V_1 = (bool)1;
		goto IL_0109;
	}

IL_0106:
	{
		TEdge_t1694054893 * L_50 = V_4;
		V_0 = L_50;
	}

IL_0109:
	{
	}

IL_010a:
	{
		TEdge_t1694054893 * L_51 = V_0;
		NullCheck(L_51);
		TEdge_t1694054893 * L_52 = L_51->get_NextInSEL_16();
		V_9 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_52) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_53 = V_9;
		if (L_53)
		{
			goto IL_0074;
		}
	}
	{
		TEdge_t1694054893 * L_54 = V_0;
		NullCheck(L_54);
		TEdge_t1694054893 * L_55 = L_54->get_PrevInSEL_17();
		V_10 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_55) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_56 = V_10;
		if (!L_56)
		{
			goto IL_0139;
		}
	}
	{
		TEdge_t1694054893 * L_57 = V_0;
		NullCheck(L_57);
		TEdge_t1694054893 * L_58 = L_57->get_PrevInSEL_17();
		NullCheck(L_58);
		L_58->set_NextInSEL_16((TEdge_t1694054893 *)NULL);
		goto IL_013b;
	}

IL_0139:
	{
		goto IL_0154;
	}

IL_013b:
	{
	}

IL_013c:
	{
		bool L_59 = V_1;
		if (!L_59)
		{
			goto IL_014a;
		}
	}
	{
		TEdge_t1694054893 * L_60 = __this->get_m_SortedEdges_11();
		G_B21_0 = ((!(((RuntimeObject*)(TEdge_t1694054893 *)L_60) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_014b;
	}

IL_014a:
	{
		G_B21_0 = 0;
	}

IL_014b:
	{
		V_11 = (bool)G_B21_0;
		bool L_61 = V_11;
		if (L_61)
		{
			goto IL_0065;
		}
	}

IL_0154:
	{
		__this->set_m_SortedEdges_11((TEdge_t1694054893 *)NULL);
	}

IL_015b:
	{
		return;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::EdgesAdjacent(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_EdgesAdjacent_m3553825355 (Clipper_t4158555122 * __this, IntersectNode_t3379514219 * ___inode0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		IntersectNode_t3379514219 * L_0 = ___inode0;
		NullCheck(L_0);
		TEdge_t1694054893 * L_1 = L_0->get_Edge1_0();
		NullCheck(L_1);
		TEdge_t1694054893 * L_2 = L_1->get_NextInSEL_16();
		IntersectNode_t3379514219 * L_3 = ___inode0;
		NullCheck(L_3);
		TEdge_t1694054893 * L_4 = L_3->get_Edge2_1();
		if ((((RuntimeObject*)(TEdge_t1694054893 *)L_2) == ((RuntimeObject*)(TEdge_t1694054893 *)L_4)))
		{
			goto IL_0029;
		}
	}
	{
		IntersectNode_t3379514219 * L_5 = ___inode0;
		NullCheck(L_5);
		TEdge_t1694054893 * L_6 = L_5->get_Edge1_0();
		NullCheck(L_6);
		TEdge_t1694054893 * L_7 = L_6->get_PrevInSEL_17();
		IntersectNode_t3379514219 * L_8 = ___inode0;
		NullCheck(L_8);
		TEdge_t1694054893 * L_9 = L_8->get_Edge2_1();
		G_B3_0 = ((((RuntimeObject*)(TEdge_t1694054893 *)L_7) == ((RuntimeObject*)(TEdge_t1694054893 *)L_9))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 1;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002d;
	}

IL_002d:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::FixupIntersectionOrder()
extern "C" IL2CPP_METHOD_ATTR bool Clipper_FixupIntersectionOrder_m704608269 (Clipper_t4158555122 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_FixupIntersectionOrder_m704608269_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	IntersectNode_t3379514219 * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t556621665 * L_0 = __this->get_m_IntersectList_12();
		RuntimeObject* L_1 = __this->get_m_IntersectNodeComparer_13();
		NullCheck(L_0);
		List_1_Sort_m2745252250(L_0, L_1, /*hidden argument*/List_1_Sort_m2745252250_RuntimeMethod_var);
		Clipper_CopyAELToSEL_m3587611428(__this, /*hidden argument*/NULL);
		List_1_t556621665 * L_2 = __this->get_m_IntersectList_12();
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m2984725346(L_2, /*hidden argument*/List_1_get_Count_m2984725346_RuntimeMethod_var);
		V_0 = L_3;
		V_1 = 0;
		goto IL_00e8;
	}

IL_002d:
	{
		List_1_t556621665 * L_4 = __this->get_m_IntersectList_12();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IntersectNode_t3379514219 * L_6 = List_1_get_Item_m2314576275(L_4, L_5, /*hidden argument*/List_1_get_Item_m2314576275_RuntimeMethod_var);
		bool L_7 = Clipper_EdgesAdjacent_m3553825355(__this, L_6, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_9 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		goto IL_0052;
	}

IL_004e:
	{
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0052:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_006d;
		}
	}
	{
		List_1_t556621665 * L_13 = __this->get_m_IntersectList_12();
		int32_t L_14 = V_3;
		NullCheck(L_13);
		IntersectNode_t3379514219 * L_15 = List_1_get_Item_m2314576275(L_13, L_14, /*hidden argument*/List_1_get_Item_m2314576275_RuntimeMethod_var);
		bool L_16 = Clipper_EdgesAdjacent_m3553825355(__this, L_15, /*hidden argument*/NULL);
		G_B7_0 = ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		V_5 = (bool)G_B7_0;
		bool L_17 = V_5;
		if (L_17)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_18 = V_3;
		int32_t L_19 = V_0;
		V_6 = (bool)((((int32_t)L_18) == ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_0083;
		}
	}
	{
		V_7 = (bool)0;
		goto IL_00fa;
	}

IL_0083:
	{
		List_1_t556621665 * L_21 = __this->get_m_IntersectList_12();
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IntersectNode_t3379514219 * L_23 = List_1_get_Item_m2314576275(L_21, L_22, /*hidden argument*/List_1_get_Item_m2314576275_RuntimeMethod_var);
		V_4 = L_23;
		List_1_t556621665 * L_24 = __this->get_m_IntersectList_12();
		int32_t L_25 = V_1;
		List_1_t556621665 * L_26 = __this->get_m_IntersectList_12();
		int32_t L_27 = V_3;
		NullCheck(L_26);
		IntersectNode_t3379514219 * L_28 = List_1_get_Item_m2314576275(L_26, L_27, /*hidden argument*/List_1_get_Item_m2314576275_RuntimeMethod_var);
		NullCheck(L_24);
		List_1_set_Item_m1412177478(L_24, L_25, L_28, /*hidden argument*/List_1_set_Item_m1412177478_RuntimeMethod_var);
		List_1_t556621665 * L_29 = __this->get_m_IntersectList_12();
		int32_t L_30 = V_3;
		IntersectNode_t3379514219 * L_31 = V_4;
		NullCheck(L_29);
		List_1_set_Item_m1412177478(L_29, L_30, L_31, /*hidden argument*/List_1_set_Item_m1412177478_RuntimeMethod_var);
	}

IL_00ba:
	{
		List_1_t556621665 * L_32 = __this->get_m_IntersectList_12();
		int32_t L_33 = V_1;
		NullCheck(L_32);
		IntersectNode_t3379514219 * L_34 = List_1_get_Item_m2314576275(L_32, L_33, /*hidden argument*/List_1_get_Item_m2314576275_RuntimeMethod_var);
		NullCheck(L_34);
		TEdge_t1694054893 * L_35 = L_34->get_Edge1_0();
		List_1_t556621665 * L_36 = __this->get_m_IntersectList_12();
		int32_t L_37 = V_1;
		NullCheck(L_36);
		IntersectNode_t3379514219 * L_38 = List_1_get_Item_m2314576275(L_36, L_37, /*hidden argument*/List_1_get_Item_m2314576275_RuntimeMethod_var);
		NullCheck(L_38);
		TEdge_t1694054893 * L_39 = L_38->get_Edge2_1();
		Clipper_SwapPositionsInSEL_m1038129781(__this, L_35, L_39, /*hidden argument*/NULL);
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00e8:
	{
		int32_t L_41 = V_1;
		int32_t L_42 = V_0;
		V_8 = (bool)((((int32_t)L_41) < ((int32_t)L_42))? 1 : 0);
		bool L_43 = V_8;
		if (L_43)
		{
			goto IL_002d;
		}
	}
	{
		V_7 = (bool)1;
		goto IL_00fa;
	}

IL_00fa:
	{
		bool L_44 = V_7;
		return L_44;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::ProcessIntersectList()
extern "C" IL2CPP_METHOD_ATTR void Clipper_ProcessIntersectList_m3289731701 (Clipper_t4158555122 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_ProcessIntersectList_m3289731701_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	IntersectNode_t3379514219 * V_2 = NULL;
	bool V_3 = false;
	{
		List_1_t556621665 * L_0 = __this->get_m_IntersectList_12();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m2984725346(L_0, /*hidden argument*/List_1_get_Count_m2984725346_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0052;
	}

IL_0011:
	{
		List_1_t556621665 * L_2 = __this->get_m_IntersectList_12();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IntersectNode_t3379514219 * L_4 = List_1_get_Item_m2314576275(L_2, L_3, /*hidden argument*/List_1_get_Item_m2314576275_RuntimeMethod_var);
		V_2 = L_4;
		IntersectNode_t3379514219 * L_5 = V_2;
		NullCheck(L_5);
		TEdge_t1694054893 * L_6 = L_5->get_Edge1_0();
		IntersectNode_t3379514219 * L_7 = V_2;
		NullCheck(L_7);
		TEdge_t1694054893 * L_8 = L_7->get_Edge2_1();
		IntersectNode_t3379514219 * L_9 = V_2;
		NullCheck(L_9);
		IntPoint_t2327573135  L_10 = L_9->get_Pt_2();
		Clipper_IntersectEdges_m4288628979(__this, L_6, L_8, L_10, /*hidden argument*/NULL);
		IntersectNode_t3379514219 * L_11 = V_2;
		NullCheck(L_11);
		TEdge_t1694054893 * L_12 = L_11->get_Edge1_0();
		IntersectNode_t3379514219 * L_13 = V_2;
		NullCheck(L_13);
		TEdge_t1694054893 * L_14 = L_13->get_Edge2_1();
		ClipperBase_SwapPositionsInAEL_m2341169767(__this, L_12, L_14, /*hidden argument*/NULL);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0052:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		V_3 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_0011;
		}
	}
	{
		List_1_t556621665 * L_19 = __this->get_m_IntersectList_12();
		NullCheck(L_19);
		List_1_Clear_m3783374028(L_19, /*hidden argument*/List_1_Clear_m3783374028_RuntimeMethod_var);
		return;
	}
}
// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::Round(System.Double)
extern "C" IL2CPP_METHOD_ATTR int64_t Clipper_Round_m2303120780 (RuntimeObject * __this /* static, unused */, double ___value0, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	int64_t G_B3_0 = 0;
	{
		double L_0 = ___value0;
		if ((((double)L_0) < ((double)(0.0))))
		{
			goto IL_001b;
		}
	}
	{
		double L_1 = ___value0;
		G_B3_0 = (((int64_t)((int64_t)((double)il2cpp_codegen_add((double)L_1, (double)(0.5))))));
		goto IL_0027;
	}

IL_001b:
	{
		double L_2 = ___value0;
		G_B3_0 = (((int64_t)((int64_t)((double)il2cpp_codegen_subtract((double)L_2, (double)(0.5))))));
	}

IL_0027:
	{
		V_0 = G_B3_0;
		goto IL_002a;
	}

IL_002a:
	{
		int64_t L_3 = V_0;
		return L_3;
	}
}
// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::TopX(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,System.Int64)
extern "C" IL2CPP_METHOD_ATTR int64_t Clipper_TopX_m2701964852 (RuntimeObject * __this /* static, unused */, TEdge_t1694054893 * ___edge0, int64_t ___currentY1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int64_t V_1 = 0;
	{
		int64_t L_0 = ___currentY1;
		TEdge_t1694054893 * L_1 = ___edge0;
		NullCheck(L_1);
		IntPoint_t2327573135 * L_2 = L_1->get_address_of_Top_2();
		int64_t L_3 = L_2->get_Y_1();
		V_0 = (bool)((((int64_t)L_0) == ((int64_t)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		TEdge_t1694054893 * L_5 = ___edge0;
		NullCheck(L_5);
		IntPoint_t2327573135 * L_6 = L_5->get_address_of_Top_2();
		int64_t L_7 = L_6->get_X_0();
		V_1 = L_7;
		goto IL_004a;
	}

IL_0021:
	{
		TEdge_t1694054893 * L_8 = ___edge0;
		NullCheck(L_8);
		IntPoint_t2327573135 * L_9 = L_8->get_address_of_Bot_0();
		int64_t L_10 = L_9->get_X_0();
		TEdge_t1694054893 * L_11 = ___edge0;
		NullCheck(L_11);
		double L_12 = L_11->get_Dx_4();
		int64_t L_13 = ___currentY1;
		TEdge_t1694054893 * L_14 = ___edge0;
		NullCheck(L_14);
		IntPoint_t2327573135 * L_15 = L_14->get_address_of_Bot_0();
		int64_t L_16 = L_15->get_Y_1();
		int64_t L_17 = Clipper_Round_m2303120780(NULL /*static, unused*/, ((double)il2cpp_codegen_multiply((double)L_12, (double)(((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_13, (int64_t)L_16))))))), /*hidden argument*/NULL);
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)L_17));
		goto IL_004a;
	}

IL_004a:
	{
		int64_t L_18 = V_1;
		return L_18;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::IntersectPoint(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint&)
extern "C" IL2CPP_METHOD_ATTR void Clipper_IntersectPoint_m1381152703 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___edge10, TEdge_t1694054893 * ___edge21, IntPoint_t2327573135 * ___ip2, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	double V_7 = 0.0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B19_0 = 0;
	{
		IntPoint_t2327573135 * L_0 = ___ip2;
		il2cpp_codegen_initobj(L_0, sizeof(IntPoint_t2327573135 ));
		TEdge_t1694054893 * L_1 = ___edge10;
		NullCheck(L_1);
		double L_2 = L_1->get_Dx_4();
		TEdge_t1694054893 * L_3 = ___edge21;
		NullCheck(L_3);
		double L_4 = L_3->get_Dx_4();
		V_2 = (bool)((((double)L_2) == ((double)L_4))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		IntPoint_t2327573135 * L_6 = ___ip2;
		TEdge_t1694054893 * L_7 = ___edge10;
		NullCheck(L_7);
		IntPoint_t2327573135 * L_8 = L_7->get_address_of_Curr_1();
		int64_t L_9 = L_8->get_Y_1();
		L_6->set_Y_1(L_9);
		IntPoint_t2327573135 * L_10 = ___ip2;
		TEdge_t1694054893 * L_11 = ___edge10;
		IntPoint_t2327573135 * L_12 = ___ip2;
		int64_t L_13 = L_12->get_Y_1();
		int64_t L_14 = Clipper_TopX_m2701964852(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		L_10->set_X_0(L_14);
		goto IL_0333;
	}

IL_0043:
	{
		TEdge_t1694054893 * L_15 = ___edge10;
		NullCheck(L_15);
		IntPoint_t2327573135 * L_16 = L_15->get_address_of_Delta_3();
		int64_t L_17 = L_16->get_X_0();
		V_3 = (bool)((((int64_t)L_17) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_00cd;
		}
	}
	{
		IntPoint_t2327573135 * L_19 = ___ip2;
		TEdge_t1694054893 * L_20 = ___edge10;
		NullCheck(L_20);
		IntPoint_t2327573135 * L_21 = L_20->get_address_of_Bot_0();
		int64_t L_22 = L_21->get_X_0();
		L_19->set_X_0(L_22);
		TEdge_t1694054893 * L_23 = ___edge21;
		bool L_24 = ClipperBase_IsHorizontal_m234918052(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_0089;
		}
	}
	{
		IntPoint_t2327573135 * L_26 = ___ip2;
		TEdge_t1694054893 * L_27 = ___edge21;
		NullCheck(L_27);
		IntPoint_t2327573135 * L_28 = L_27->get_address_of_Bot_0();
		int64_t L_29 = L_28->get_Y_1();
		L_26->set_Y_1(L_29);
		goto IL_00c7;
	}

IL_0089:
	{
		TEdge_t1694054893 * L_30 = ___edge21;
		NullCheck(L_30);
		IntPoint_t2327573135 * L_31 = L_30->get_address_of_Bot_0();
		int64_t L_32 = L_31->get_Y_1();
		TEdge_t1694054893 * L_33 = ___edge21;
		NullCheck(L_33);
		IntPoint_t2327573135 * L_34 = L_33->get_address_of_Bot_0();
		int64_t L_35 = L_34->get_X_0();
		TEdge_t1694054893 * L_36 = ___edge21;
		NullCheck(L_36);
		double L_37 = L_36->get_Dx_4();
		V_1 = ((double)il2cpp_codegen_subtract((double)(((double)((double)L_32))), (double)((double)((double)(((double)((double)L_35)))/(double)L_37))));
		IntPoint_t2327573135 * L_38 = ___ip2;
		IntPoint_t2327573135 * L_39 = ___ip2;
		int64_t L_40 = L_39->get_X_0();
		TEdge_t1694054893 * L_41 = ___edge21;
		NullCheck(L_41);
		double L_42 = L_41->get_Dx_4();
		double L_43 = V_1;
		int64_t L_44 = Clipper_Round_m2303120780(NULL /*static, unused*/, ((double)il2cpp_codegen_add((double)((double)((double)(((double)((double)L_40)))/(double)L_42)), (double)L_43)), /*hidden argument*/NULL);
		L_38->set_Y_1(L_44);
	}

IL_00c7:
	{
		goto IL_0209;
	}

IL_00cd:
	{
		TEdge_t1694054893 * L_45 = ___edge21;
		NullCheck(L_45);
		IntPoint_t2327573135 * L_46 = L_45->get_address_of_Delta_3();
		int64_t L_47 = L_46->get_X_0();
		V_5 = (bool)((((int64_t)L_47) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_48 = V_5;
		if (!L_48)
		{
			goto IL_0159;
		}
	}
	{
		IntPoint_t2327573135 * L_49 = ___ip2;
		TEdge_t1694054893 * L_50 = ___edge21;
		NullCheck(L_50);
		IntPoint_t2327573135 * L_51 = L_50->get_address_of_Bot_0();
		int64_t L_52 = L_51->get_X_0();
		L_49->set_X_0(L_52);
		TEdge_t1694054893 * L_53 = ___edge10;
		bool L_54 = ClipperBase_IsHorizontal_m234918052(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		V_6 = L_54;
		bool L_55 = V_6;
		if (!L_55)
		{
			goto IL_0115;
		}
	}
	{
		IntPoint_t2327573135 * L_56 = ___ip2;
		TEdge_t1694054893 * L_57 = ___edge10;
		NullCheck(L_57);
		IntPoint_t2327573135 * L_58 = L_57->get_address_of_Bot_0();
		int64_t L_59 = L_58->get_Y_1();
		L_56->set_Y_1(L_59);
		goto IL_0153;
	}

IL_0115:
	{
		TEdge_t1694054893 * L_60 = ___edge10;
		NullCheck(L_60);
		IntPoint_t2327573135 * L_61 = L_60->get_address_of_Bot_0();
		int64_t L_62 = L_61->get_Y_1();
		TEdge_t1694054893 * L_63 = ___edge10;
		NullCheck(L_63);
		IntPoint_t2327573135 * L_64 = L_63->get_address_of_Bot_0();
		int64_t L_65 = L_64->get_X_0();
		TEdge_t1694054893 * L_66 = ___edge10;
		NullCheck(L_66);
		double L_67 = L_66->get_Dx_4();
		V_0 = ((double)il2cpp_codegen_subtract((double)(((double)((double)L_62))), (double)((double)((double)(((double)((double)L_65)))/(double)L_67))));
		IntPoint_t2327573135 * L_68 = ___ip2;
		IntPoint_t2327573135 * L_69 = ___ip2;
		int64_t L_70 = L_69->get_X_0();
		TEdge_t1694054893 * L_71 = ___edge10;
		NullCheck(L_71);
		double L_72 = L_71->get_Dx_4();
		double L_73 = V_0;
		int64_t L_74 = Clipper_Round_m2303120780(NULL /*static, unused*/, ((double)il2cpp_codegen_add((double)((double)((double)(((double)((double)L_70)))/(double)L_72)), (double)L_73)), /*hidden argument*/NULL);
		L_68->set_Y_1(L_74);
	}

IL_0153:
	{
		goto IL_0209;
	}

IL_0159:
	{
		TEdge_t1694054893 * L_75 = ___edge10;
		NullCheck(L_75);
		IntPoint_t2327573135 * L_76 = L_75->get_address_of_Bot_0();
		int64_t L_77 = L_76->get_X_0();
		TEdge_t1694054893 * L_78 = ___edge10;
		NullCheck(L_78);
		IntPoint_t2327573135 * L_79 = L_78->get_address_of_Bot_0();
		int64_t L_80 = L_79->get_Y_1();
		TEdge_t1694054893 * L_81 = ___edge10;
		NullCheck(L_81);
		double L_82 = L_81->get_Dx_4();
		V_0 = ((double)il2cpp_codegen_subtract((double)(((double)((double)L_77))), (double)((double)il2cpp_codegen_multiply((double)(((double)((double)L_80))), (double)L_82))));
		TEdge_t1694054893 * L_83 = ___edge21;
		NullCheck(L_83);
		IntPoint_t2327573135 * L_84 = L_83->get_address_of_Bot_0();
		int64_t L_85 = L_84->get_X_0();
		TEdge_t1694054893 * L_86 = ___edge21;
		NullCheck(L_86);
		IntPoint_t2327573135 * L_87 = L_86->get_address_of_Bot_0();
		int64_t L_88 = L_87->get_Y_1();
		TEdge_t1694054893 * L_89 = ___edge21;
		NullCheck(L_89);
		double L_90 = L_89->get_Dx_4();
		V_1 = ((double)il2cpp_codegen_subtract((double)(((double)((double)L_85))), (double)((double)il2cpp_codegen_multiply((double)(((double)((double)L_88))), (double)L_90))));
		double L_91 = V_1;
		double L_92 = V_0;
		TEdge_t1694054893 * L_93 = ___edge10;
		NullCheck(L_93);
		double L_94 = L_93->get_Dx_4();
		TEdge_t1694054893 * L_95 = ___edge21;
		NullCheck(L_95);
		double L_96 = L_95->get_Dx_4();
		V_7 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_91, (double)L_92))/(double)((double)il2cpp_codegen_subtract((double)L_94, (double)L_96))));
		IntPoint_t2327573135 * L_97 = ___ip2;
		double L_98 = V_7;
		int64_t L_99 = Clipper_Round_m2303120780(NULL /*static, unused*/, L_98, /*hidden argument*/NULL);
		L_97->set_Y_1(L_99);
		TEdge_t1694054893 * L_100 = ___edge10;
		NullCheck(L_100);
		double L_101 = L_100->get_Dx_4();
		double L_102 = fabs(L_101);
		TEdge_t1694054893 * L_103 = ___edge21;
		NullCheck(L_103);
		double L_104 = L_103->get_Dx_4();
		double L_105 = fabs(L_104);
		V_8 = (bool)((((double)L_102) < ((double)L_105))? 1 : 0);
		bool L_106 = V_8;
		if (!L_106)
		{
			goto IL_01f2;
		}
	}
	{
		IntPoint_t2327573135 * L_107 = ___ip2;
		TEdge_t1694054893 * L_108 = ___edge10;
		NullCheck(L_108);
		double L_109 = L_108->get_Dx_4();
		double L_110 = V_7;
		double L_111 = V_0;
		int64_t L_112 = Clipper_Round_m2303120780(NULL /*static, unused*/, ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_109, (double)L_110)), (double)L_111)), /*hidden argument*/NULL);
		L_107->set_X_0(L_112);
		goto IL_0208;
	}

IL_01f2:
	{
		IntPoint_t2327573135 * L_113 = ___ip2;
		TEdge_t1694054893 * L_114 = ___edge21;
		NullCheck(L_114);
		double L_115 = L_114->get_Dx_4();
		double L_116 = V_7;
		double L_117 = V_1;
		int64_t L_118 = Clipper_Round_m2303120780(NULL /*static, unused*/, ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_115, (double)L_116)), (double)L_117)), /*hidden argument*/NULL);
		L_113->set_X_0(L_118);
	}

IL_0208:
	{
	}

IL_0209:
	{
		IntPoint_t2327573135 * L_119 = ___ip2;
		int64_t L_120 = L_119->get_Y_1();
		TEdge_t1694054893 * L_121 = ___edge10;
		NullCheck(L_121);
		IntPoint_t2327573135 * L_122 = L_121->get_address_of_Top_2();
		int64_t L_123 = L_122->get_Y_1();
		if ((((int64_t)L_120) < ((int64_t)L_123)))
		{
			goto IL_0231;
		}
	}
	{
		IntPoint_t2327573135 * L_124 = ___ip2;
		int64_t L_125 = L_124->get_Y_1();
		TEdge_t1694054893 * L_126 = ___edge21;
		NullCheck(L_126);
		IntPoint_t2327573135 * L_127 = L_126->get_address_of_Top_2();
		int64_t L_128 = L_127->get_Y_1();
		G_B19_0 = ((((int64_t)L_125) < ((int64_t)L_128))? 1 : 0);
		goto IL_0232;
	}

IL_0231:
	{
		G_B19_0 = 1;
	}

IL_0232:
	{
		V_9 = (bool)G_B19_0;
		bool L_129 = V_9;
		if (!L_129)
		{
			goto IL_02c3;
		}
	}
	{
		TEdge_t1694054893 * L_130 = ___edge10;
		NullCheck(L_130);
		IntPoint_t2327573135 * L_131 = L_130->get_address_of_Top_2();
		int64_t L_132 = L_131->get_Y_1();
		TEdge_t1694054893 * L_133 = ___edge21;
		NullCheck(L_133);
		IntPoint_t2327573135 * L_134 = L_133->get_address_of_Top_2();
		int64_t L_135 = L_134->get_Y_1();
		V_10 = (bool)((((int64_t)L_132) > ((int64_t)L_135))? 1 : 0);
		bool L_136 = V_10;
		if (!L_136)
		{
			goto IL_026d;
		}
	}
	{
		IntPoint_t2327573135 * L_137 = ___ip2;
		TEdge_t1694054893 * L_138 = ___edge10;
		NullCheck(L_138);
		IntPoint_t2327573135 * L_139 = L_138->get_address_of_Top_2();
		int64_t L_140 = L_139->get_Y_1();
		L_137->set_Y_1(L_140);
		goto IL_027e;
	}

IL_026d:
	{
		IntPoint_t2327573135 * L_141 = ___ip2;
		TEdge_t1694054893 * L_142 = ___edge21;
		NullCheck(L_142);
		IntPoint_t2327573135 * L_143 = L_142->get_address_of_Top_2();
		int64_t L_144 = L_143->get_Y_1();
		L_141->set_Y_1(L_144);
	}

IL_027e:
	{
		TEdge_t1694054893 * L_145 = ___edge10;
		NullCheck(L_145);
		double L_146 = L_145->get_Dx_4();
		double L_147 = fabs(L_146);
		TEdge_t1694054893 * L_148 = ___edge21;
		NullCheck(L_148);
		double L_149 = L_148->get_Dx_4();
		double L_150 = fabs(L_149);
		V_11 = (bool)((((double)L_147) < ((double)L_150))? 1 : 0);
		bool L_151 = V_11;
		if (!L_151)
		{
			goto IL_02b0;
		}
	}
	{
		IntPoint_t2327573135 * L_152 = ___ip2;
		TEdge_t1694054893 * L_153 = ___edge10;
		IntPoint_t2327573135 * L_154 = ___ip2;
		int64_t L_155 = L_154->get_Y_1();
		int64_t L_156 = Clipper_TopX_m2701964852(NULL /*static, unused*/, L_153, L_155, /*hidden argument*/NULL);
		L_152->set_X_0(L_156);
		goto IL_02c2;
	}

IL_02b0:
	{
		IntPoint_t2327573135 * L_157 = ___ip2;
		TEdge_t1694054893 * L_158 = ___edge21;
		IntPoint_t2327573135 * L_159 = ___ip2;
		int64_t L_160 = L_159->get_Y_1();
		int64_t L_161 = Clipper_TopX_m2701964852(NULL /*static, unused*/, L_158, L_160, /*hidden argument*/NULL);
		L_157->set_X_0(L_161);
	}

IL_02c2:
	{
	}

IL_02c3:
	{
		IntPoint_t2327573135 * L_162 = ___ip2;
		int64_t L_163 = L_162->get_Y_1();
		TEdge_t1694054893 * L_164 = ___edge10;
		NullCheck(L_164);
		IntPoint_t2327573135 * L_165 = L_164->get_address_of_Curr_1();
		int64_t L_166 = L_165->get_Y_1();
		V_12 = (bool)((((int64_t)L_163) > ((int64_t)L_166))? 1 : 0);
		bool L_167 = V_12;
		if (!L_167)
		{
			goto IL_0333;
		}
	}
	{
		IntPoint_t2327573135 * L_168 = ___ip2;
		TEdge_t1694054893 * L_169 = ___edge10;
		NullCheck(L_169);
		IntPoint_t2327573135 * L_170 = L_169->get_address_of_Curr_1();
		int64_t L_171 = L_170->get_Y_1();
		L_168->set_Y_1(L_171);
		TEdge_t1694054893 * L_172 = ___edge10;
		NullCheck(L_172);
		double L_173 = L_172->get_Dx_4();
		double L_174 = fabs(L_173);
		TEdge_t1694054893 * L_175 = ___edge21;
		NullCheck(L_175);
		double L_176 = L_175->get_Dx_4();
		double L_177 = fabs(L_176);
		V_13 = (bool)((((double)L_174) > ((double)L_177))? 1 : 0);
		bool L_178 = V_13;
		if (!L_178)
		{
			goto IL_0320;
		}
	}
	{
		IntPoint_t2327573135 * L_179 = ___ip2;
		TEdge_t1694054893 * L_180 = ___edge21;
		IntPoint_t2327573135 * L_181 = ___ip2;
		int64_t L_182 = L_181->get_Y_1();
		int64_t L_183 = Clipper_TopX_m2701964852(NULL /*static, unused*/, L_180, L_182, /*hidden argument*/NULL);
		L_179->set_X_0(L_183);
		goto IL_0332;
	}

IL_0320:
	{
		IntPoint_t2327573135 * L_184 = ___ip2;
		TEdge_t1694054893 * L_185 = ___edge10;
		IntPoint_t2327573135 * L_186 = ___ip2;
		int64_t L_187 = L_186->get_Y_1();
		int64_t L_188 = Clipper_TopX_m2701964852(NULL /*static, unused*/, L_185, L_187, /*hidden argument*/NULL);
		L_184->set_X_0(L_188);
	}

IL_0332:
	{
	}

IL_0333:
	{
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::ProcessEdgesAtTopOfScanbeam(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Clipper_ProcessEdgesAtTopOfScanbeam_m194700658 (Clipper_t4158555122 * __this, int64_t ___topY0, const RuntimeMethod* method)
{
	TEdge_t1694054893 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	TEdge_t1694054893 * V_3 = NULL;
	bool V_4 = false;
	TEdge_t1694054893 * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	TEdge_t1694054893 * V_11 = NULL;
	bool V_12 = false;
	IntPoint_t2327573135  V_13;
	memset(&V_13, 0, sizeof(V_13));
	OutPt_t2591102706 * V_14 = NULL;
	OutPt_t2591102706 * V_15 = NULL;
	bool V_16 = false;
	bool V_17 = false;
	OutPt_t2591102706 * V_18 = NULL;
	TEdge_t1694054893 * V_19 = NULL;
	TEdge_t1694054893 * V_20 = NULL;
	bool V_21 = false;
	bool V_22 = false;
	OutPt_t2591102706 * V_23 = NULL;
	bool V_24 = false;
	OutPt_t2591102706 * V_25 = NULL;
	bool V_26 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B61_0 = 0;
	{
		TEdge_t1694054893 * L_0 = ((ClipperBase_t2411222589 *)__this)->get_m_ActiveEdges_5();
		V_0 = L_0;
		goto IL_01a4;
	}

IL_000d:
	{
		TEdge_t1694054893 * L_1 = V_0;
		int64_t L_2 = ___topY0;
		bool L_3 = Clipper_IsMaxima_m1397546823(__this, L_1, (((double)((double)L_2))), /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		TEdge_t1694054893 * L_6 = V_0;
		TEdge_t1694054893 * L_7 = Clipper_GetMaximaPairEx_m542542616(__this, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		TEdge_t1694054893 * L_8 = V_3;
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		TEdge_t1694054893 * L_9 = V_3;
		bool L_10 = ClipperBase_IsHorizontal_m234918052(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B5_0 = 1;
	}

IL_0035:
	{
		V_1 = (bool)G_B5_0;
	}

IL_0037:
	{
		bool L_11 = V_1;
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_008f;
		}
	}
	{
		bool L_13 = Clipper_get_StrictlySimple_m970398697(__this, /*hidden argument*/NULL);
		V_6 = L_13;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_005d;
		}
	}
	{
		TEdge_t1694054893 * L_15 = V_0;
		NullCheck(L_15);
		IntPoint_t2327573135 * L_16 = L_15->get_address_of_Top_2();
		int64_t L_17 = L_16->get_X_0();
		Clipper_InsertMaxima_m906955032(__this, L_17, /*hidden argument*/NULL);
	}

IL_005d:
	{
		TEdge_t1694054893 * L_18 = V_0;
		NullCheck(L_18);
		TEdge_t1694054893 * L_19 = L_18->get_PrevInAEL_15();
		V_5 = L_19;
		TEdge_t1694054893 * L_20 = V_0;
		Clipper_DoMaxima_m1252131532(__this, L_20, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_21 = V_5;
		V_7 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_21) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_0081;
		}
	}
	{
		TEdge_t1694054893 * L_23 = ((ClipperBase_t2411222589 *)__this)->get_m_ActiveEdges_5();
		V_0 = L_23;
		goto IL_0089;
	}

IL_0081:
	{
		TEdge_t1694054893 * L_24 = V_5;
		NullCheck(L_24);
		TEdge_t1694054893 * L_25 = L_24->get_NextInAEL_14();
		V_0 = L_25;
	}

IL_0089:
	{
		goto IL_01a3;
	}

IL_008f:
	{
		TEdge_t1694054893 * L_26 = V_0;
		int64_t L_27 = ___topY0;
		bool L_28 = Clipper_IsIntermediate_m3498560226(__this, L_26, (((double)((double)L_27))), /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00a8;
		}
	}
	{
		TEdge_t1694054893 * L_29 = V_0;
		NullCheck(L_29);
		TEdge_t1694054893 * L_30 = L_29->get_NextInLML_13();
		bool L_31 = ClipperBase_IsHorizontal_m234918052(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		G_B16_0 = ((int32_t)(L_31));
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B16_0 = 0;
	}

IL_00a9:
	{
		V_8 = (bool)G_B16_0;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_00e4;
		}
	}
	{
		ClipperBase_UpdateEdgeIntoAEL_m4154808885(__this, (TEdge_t1694054893 **)(&V_0), /*hidden argument*/NULL);
		TEdge_t1694054893 * L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34 = L_33->get_OutIdx_10();
		V_9 = (bool)((((int32_t)((((int32_t)L_34) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_9;
		if (!L_35)
		{
			goto IL_00d9;
		}
	}
	{
		TEdge_t1694054893 * L_36 = V_0;
		TEdge_t1694054893 * L_37 = V_0;
		NullCheck(L_37);
		IntPoint_t2327573135  L_38 = L_37->get_Bot_0();
		Clipper_AddOutPt_m2431700953(__this, L_36, L_38, /*hidden argument*/NULL);
	}

IL_00d9:
	{
		TEdge_t1694054893 * L_39 = V_0;
		Clipper_AddEdgeToSEL_m475729562(__this, L_39, /*hidden argument*/NULL);
		goto IL_0104;
	}

IL_00e4:
	{
		TEdge_t1694054893 * L_40 = V_0;
		NullCheck(L_40);
		IntPoint_t2327573135 * L_41 = L_40->get_address_of_Curr_1();
		TEdge_t1694054893 * L_42 = V_0;
		int64_t L_43 = ___topY0;
		int64_t L_44 = Clipper_TopX_m2701964852(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/NULL);
		L_41->set_X_0(L_44);
		TEdge_t1694054893 * L_45 = V_0;
		NullCheck(L_45);
		IntPoint_t2327573135 * L_46 = L_45->get_address_of_Curr_1();
		int64_t L_47 = ___topY0;
		L_46->set_Y_1(L_47);
	}

IL_0104:
	{
		bool L_48 = Clipper_get_StrictlySimple_m970398697(__this, /*hidden argument*/NULL);
		V_10 = L_48;
		bool L_49 = V_10;
		if (!L_49)
		{
			goto IL_019b;
		}
	}
	{
		TEdge_t1694054893 * L_50 = V_0;
		NullCheck(L_50);
		TEdge_t1694054893 * L_51 = L_50->get_PrevInAEL_15();
		V_11 = L_51;
		TEdge_t1694054893 * L_52 = V_0;
		NullCheck(L_52);
		int32_t L_53 = L_52->get_OutIdx_10();
		if ((((int32_t)L_53) < ((int32_t)0)))
		{
			goto IL_0160;
		}
	}
	{
		TEdge_t1694054893 * L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55 = L_54->get_WindDelta_7();
		if (!L_55)
		{
			goto IL_0160;
		}
	}
	{
		TEdge_t1694054893 * L_56 = V_11;
		if (!L_56)
		{
			goto IL_0160;
		}
	}
	{
		TEdge_t1694054893 * L_57 = V_11;
		NullCheck(L_57);
		int32_t L_58 = L_57->get_OutIdx_10();
		if ((((int32_t)L_58) < ((int32_t)0)))
		{
			goto IL_0160;
		}
	}
	{
		TEdge_t1694054893 * L_59 = V_11;
		NullCheck(L_59);
		IntPoint_t2327573135 * L_60 = L_59->get_address_of_Curr_1();
		int64_t L_61 = L_60->get_X_0();
		TEdge_t1694054893 * L_62 = V_0;
		NullCheck(L_62);
		IntPoint_t2327573135 * L_63 = L_62->get_address_of_Curr_1();
		int64_t L_64 = L_63->get_X_0();
		if ((!(((uint64_t)L_61) == ((uint64_t)L_64))))
		{
			goto IL_0160;
		}
	}
	{
		TEdge_t1694054893 * L_65 = V_11;
		NullCheck(L_65);
		int32_t L_66 = L_65->get_WindDelta_7();
		G_B29_0 = ((!(((uint32_t)L_66) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0161;
	}

IL_0160:
	{
		G_B29_0 = 0;
	}

IL_0161:
	{
		V_12 = (bool)G_B29_0;
		bool L_67 = V_12;
		if (!L_67)
		{
			goto IL_019a;
		}
	}
	{
		TEdge_t1694054893 * L_68 = V_0;
		NullCheck(L_68);
		IntPoint_t2327573135  L_69 = L_68->get_Curr_1();
		IntPoint__ctor_m1795439093((IntPoint_t2327573135 *)(&V_13), L_69, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_70 = V_11;
		IntPoint_t2327573135  L_71 = V_13;
		OutPt_t2591102706 * L_72 = Clipper_AddOutPt_m2431700953(__this, L_70, L_71, /*hidden argument*/NULL);
		V_14 = L_72;
		TEdge_t1694054893 * L_73 = V_0;
		IntPoint_t2327573135  L_74 = V_13;
		OutPt_t2591102706 * L_75 = Clipper_AddOutPt_m2431700953(__this, L_73, L_74, /*hidden argument*/NULL);
		V_15 = L_75;
		OutPt_t2591102706 * L_76 = V_14;
		OutPt_t2591102706 * L_77 = V_15;
		IntPoint_t2327573135  L_78 = V_13;
		Clipper_AddJoin_m2179968199(__this, L_76, L_77, L_78, /*hidden argument*/NULL);
	}

IL_019a:
	{
	}

IL_019b:
	{
		TEdge_t1694054893 * L_79 = V_0;
		NullCheck(L_79);
		TEdge_t1694054893 * L_80 = L_79->get_NextInAEL_14();
		V_0 = L_80;
	}

IL_01a3:
	{
	}

IL_01a4:
	{
		TEdge_t1694054893 * L_81 = V_0;
		V_16 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_81) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_82 = V_16;
		if (L_82)
		{
			goto IL_000d;
		}
	}
	{
		Clipper_ProcessHorizontals_m128429225(__this, /*hidden argument*/NULL);
		__this->set_m_Maxima_10((Maxima_t4278896992 *)NULL);
		TEdge_t1694054893 * L_83 = ((ClipperBase_t2411222589 *)__this)->get_m_ActiveEdges_5();
		V_0 = L_83;
		goto IL_03b6;
	}

IL_01cb:
	{
		TEdge_t1694054893 * L_84 = V_0;
		int64_t L_85 = ___topY0;
		bool L_86 = Clipper_IsIntermediate_m3498560226(__this, L_84, (((double)((double)L_85))), /*hidden argument*/NULL);
		V_17 = L_86;
		bool L_87 = V_17;
		if (!L_87)
		{
			goto IL_03ae;
		}
	}
	{
		V_18 = (OutPt_t2591102706 *)NULL;
		TEdge_t1694054893 * L_88 = V_0;
		NullCheck(L_88);
		int32_t L_89 = L_88->get_OutIdx_10();
		V_21 = (bool)((((int32_t)((((int32_t)L_89) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_90 = V_21;
		if (!L_90)
		{
			goto IL_0203;
		}
	}
	{
		TEdge_t1694054893 * L_91 = V_0;
		TEdge_t1694054893 * L_92 = V_0;
		NullCheck(L_92);
		IntPoint_t2327573135  L_93 = L_92->get_Top_2();
		OutPt_t2591102706 * L_94 = Clipper_AddOutPt_m2431700953(__this, L_91, L_93, /*hidden argument*/NULL);
		V_18 = L_94;
	}

IL_0203:
	{
		ClipperBase_UpdateEdgeIntoAEL_m4154808885(__this, (TEdge_t1694054893 **)(&V_0), /*hidden argument*/NULL);
		TEdge_t1694054893 * L_95 = V_0;
		NullCheck(L_95);
		TEdge_t1694054893 * L_96 = L_95->get_PrevInAEL_15();
		V_19 = L_96;
		TEdge_t1694054893 * L_97 = V_0;
		NullCheck(L_97);
		TEdge_t1694054893 * L_98 = L_97->get_NextInAEL_14();
		V_20 = L_98;
		TEdge_t1694054893 * L_99 = V_19;
		if (!L_99)
		{
			goto IL_02b8;
		}
	}
	{
		TEdge_t1694054893 * L_100 = V_19;
		NullCheck(L_100);
		IntPoint_t2327573135 * L_101 = L_100->get_address_of_Curr_1();
		int64_t L_102 = L_101->get_X_0();
		TEdge_t1694054893 * L_103 = V_0;
		NullCheck(L_103);
		IntPoint_t2327573135 * L_104 = L_103->get_address_of_Bot_0();
		int64_t L_105 = L_104->get_X_0();
		if ((!(((uint64_t)L_102) == ((uint64_t)L_105))))
		{
			goto IL_02b8;
		}
	}
	{
		TEdge_t1694054893 * L_106 = V_19;
		NullCheck(L_106);
		IntPoint_t2327573135 * L_107 = L_106->get_address_of_Curr_1();
		int64_t L_108 = L_107->get_Y_1();
		TEdge_t1694054893 * L_109 = V_0;
		NullCheck(L_109);
		IntPoint_t2327573135 * L_110 = L_109->get_address_of_Bot_0();
		int64_t L_111 = L_110->get_Y_1();
		if ((!(((uint64_t)L_108) == ((uint64_t)L_111))))
		{
			goto IL_02b8;
		}
	}
	{
		OutPt_t2591102706 * L_112 = V_18;
		if (!L_112)
		{
			goto IL_02b8;
		}
	}
	{
		TEdge_t1694054893 * L_113 = V_19;
		NullCheck(L_113);
		int32_t L_114 = L_113->get_OutIdx_10();
		if ((((int32_t)L_114) < ((int32_t)0)))
		{
			goto IL_02b8;
		}
	}
	{
		TEdge_t1694054893 * L_115 = V_19;
		NullCheck(L_115);
		IntPoint_t2327573135 * L_116 = L_115->get_address_of_Curr_1();
		int64_t L_117 = L_116->get_Y_1();
		TEdge_t1694054893 * L_118 = V_19;
		NullCheck(L_118);
		IntPoint_t2327573135 * L_119 = L_118->get_address_of_Top_2();
		int64_t L_120 = L_119->get_Y_1();
		if ((((int64_t)L_117) <= ((int64_t)L_120)))
		{
			goto IL_02b8;
		}
	}
	{
		TEdge_t1694054893 * L_121 = V_0;
		NullCheck(L_121);
		IntPoint_t2327573135  L_122 = L_121->get_Curr_1();
		TEdge_t1694054893 * L_123 = V_0;
		NullCheck(L_123);
		IntPoint_t2327573135  L_124 = L_123->get_Top_2();
		TEdge_t1694054893 * L_125 = V_19;
		NullCheck(L_125);
		IntPoint_t2327573135  L_126 = L_125->get_Curr_1();
		TEdge_t1694054893 * L_127 = V_19;
		NullCheck(L_127);
		IntPoint_t2327573135  L_128 = L_127->get_Top_2();
		bool L_129 = ((ClipperBase_t2411222589 *)__this)->get_m_UseFullRange_6();
		bool L_130 = ClipperBase_SlopesEqual_m2195603954(NULL /*static, unused*/, L_122, L_124, L_126, L_128, L_129, /*hidden argument*/NULL);
		if (!L_130)
		{
			goto IL_02b8;
		}
	}
	{
		TEdge_t1694054893 * L_131 = V_0;
		NullCheck(L_131);
		int32_t L_132 = L_131->get_WindDelta_7();
		if (!L_132)
		{
			goto IL_02b8;
		}
	}
	{
		TEdge_t1694054893 * L_133 = V_19;
		NullCheck(L_133);
		int32_t L_134 = L_133->get_WindDelta_7();
		G_B49_0 = ((!(((uint32_t)L_134) <= ((uint32_t)0)))? 1 : 0);
		goto IL_02b9;
	}

IL_02b8:
	{
		G_B49_0 = 0;
	}

IL_02b9:
	{
		V_22 = (bool)G_B49_0;
		bool L_135 = V_22;
		if (!L_135)
		{
			goto IL_02e7;
		}
	}
	{
		TEdge_t1694054893 * L_136 = V_19;
		TEdge_t1694054893 * L_137 = V_0;
		NullCheck(L_137);
		IntPoint_t2327573135  L_138 = L_137->get_Bot_0();
		OutPt_t2591102706 * L_139 = Clipper_AddOutPt_m2431700953(__this, L_136, L_138, /*hidden argument*/NULL);
		V_23 = L_139;
		OutPt_t2591102706 * L_140 = V_18;
		OutPt_t2591102706 * L_141 = V_23;
		TEdge_t1694054893 * L_142 = V_0;
		NullCheck(L_142);
		IntPoint_t2327573135  L_143 = L_142->get_Top_2();
		Clipper_AddJoin_m2179968199(__this, L_140, L_141, L_143, /*hidden argument*/NULL);
		goto IL_03ad;
	}

IL_02e7:
	{
		TEdge_t1694054893 * L_144 = V_20;
		if (!L_144)
		{
			goto IL_0383;
		}
	}
	{
		TEdge_t1694054893 * L_145 = V_20;
		NullCheck(L_145);
		IntPoint_t2327573135 * L_146 = L_145->get_address_of_Curr_1();
		int64_t L_147 = L_146->get_X_0();
		TEdge_t1694054893 * L_148 = V_0;
		NullCheck(L_148);
		IntPoint_t2327573135 * L_149 = L_148->get_address_of_Bot_0();
		int64_t L_150 = L_149->get_X_0();
		if ((!(((uint64_t)L_147) == ((uint64_t)L_150))))
		{
			goto IL_0383;
		}
	}
	{
		TEdge_t1694054893 * L_151 = V_20;
		NullCheck(L_151);
		IntPoint_t2327573135 * L_152 = L_151->get_address_of_Curr_1();
		int64_t L_153 = L_152->get_Y_1();
		TEdge_t1694054893 * L_154 = V_0;
		NullCheck(L_154);
		IntPoint_t2327573135 * L_155 = L_154->get_address_of_Bot_0();
		int64_t L_156 = L_155->get_Y_1();
		if ((!(((uint64_t)L_153) == ((uint64_t)L_156))))
		{
			goto IL_0383;
		}
	}
	{
		OutPt_t2591102706 * L_157 = V_18;
		if (!L_157)
		{
			goto IL_0383;
		}
	}
	{
		TEdge_t1694054893 * L_158 = V_20;
		NullCheck(L_158);
		int32_t L_159 = L_158->get_OutIdx_10();
		if ((((int32_t)L_159) < ((int32_t)0)))
		{
			goto IL_0383;
		}
	}
	{
		TEdge_t1694054893 * L_160 = V_20;
		NullCheck(L_160);
		IntPoint_t2327573135 * L_161 = L_160->get_address_of_Curr_1();
		int64_t L_162 = L_161->get_Y_1();
		TEdge_t1694054893 * L_163 = V_20;
		NullCheck(L_163);
		IntPoint_t2327573135 * L_164 = L_163->get_address_of_Top_2();
		int64_t L_165 = L_164->get_Y_1();
		if ((((int64_t)L_162) <= ((int64_t)L_165)))
		{
			goto IL_0383;
		}
	}
	{
		TEdge_t1694054893 * L_166 = V_0;
		NullCheck(L_166);
		IntPoint_t2327573135  L_167 = L_166->get_Curr_1();
		TEdge_t1694054893 * L_168 = V_0;
		NullCheck(L_168);
		IntPoint_t2327573135  L_169 = L_168->get_Top_2();
		TEdge_t1694054893 * L_170 = V_20;
		NullCheck(L_170);
		IntPoint_t2327573135  L_171 = L_170->get_Curr_1();
		TEdge_t1694054893 * L_172 = V_20;
		NullCheck(L_172);
		IntPoint_t2327573135  L_173 = L_172->get_Top_2();
		bool L_174 = ((ClipperBase_t2411222589 *)__this)->get_m_UseFullRange_6();
		bool L_175 = ClipperBase_SlopesEqual_m2195603954(NULL /*static, unused*/, L_167, L_169, L_171, L_173, L_174, /*hidden argument*/NULL);
		if (!L_175)
		{
			goto IL_0383;
		}
	}
	{
		TEdge_t1694054893 * L_176 = V_0;
		NullCheck(L_176);
		int32_t L_177 = L_176->get_WindDelta_7();
		if (!L_177)
		{
			goto IL_0383;
		}
	}
	{
		TEdge_t1694054893 * L_178 = V_20;
		NullCheck(L_178);
		int32_t L_179 = L_178->get_WindDelta_7();
		G_B61_0 = ((!(((uint32_t)L_179) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0384;
	}

IL_0383:
	{
		G_B61_0 = 0;
	}

IL_0384:
	{
		V_24 = (bool)G_B61_0;
		bool L_180 = V_24;
		if (!L_180)
		{
			goto IL_03ad;
		}
	}
	{
		TEdge_t1694054893 * L_181 = V_20;
		TEdge_t1694054893 * L_182 = V_0;
		NullCheck(L_182);
		IntPoint_t2327573135  L_183 = L_182->get_Bot_0();
		OutPt_t2591102706 * L_184 = Clipper_AddOutPt_m2431700953(__this, L_181, L_183, /*hidden argument*/NULL);
		V_25 = L_184;
		OutPt_t2591102706 * L_185 = V_18;
		OutPt_t2591102706 * L_186 = V_25;
		TEdge_t1694054893 * L_187 = V_0;
		NullCheck(L_187);
		IntPoint_t2327573135  L_188 = L_187->get_Top_2();
		Clipper_AddJoin_m2179968199(__this, L_185, L_186, L_188, /*hidden argument*/NULL);
	}

IL_03ad:
	{
	}

IL_03ae:
	{
		TEdge_t1694054893 * L_189 = V_0;
		NullCheck(L_189);
		TEdge_t1694054893 * L_190 = L_189->get_NextInAEL_14();
		V_0 = L_190;
	}

IL_03b6:
	{
		TEdge_t1694054893 * L_191 = V_0;
		V_26 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_191) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_192 = V_26;
		if (L_192)
		{
			goto IL_01cb;
		}
	}
	{
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::DoMaxima(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void Clipper_DoMaxima_m1252131532 (Clipper_t4158555122 * __this, TEdge_t1694054893 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_DoMaxima_m1252131532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TEdge_t1694054893 * V_0 = NULL;
	TEdge_t1694054893 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	{
		TEdge_t1694054893 * L_0 = ___e0;
		TEdge_t1694054893 * L_1 = Clipper_GetMaximaPairEx_m542542616(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		TEdge_t1694054893 * L_2 = V_0;
		V_2 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		TEdge_t1694054893 * L_4 = ___e0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_OutIdx_10();
		V_3 = (bool)((((int32_t)((((int32_t)L_5) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		TEdge_t1694054893 * L_7 = ___e0;
		TEdge_t1694054893 * L_8 = ___e0;
		NullCheck(L_8);
		IntPoint_t2327573135  L_9 = L_8->get_Top_2();
		Clipper_AddOutPt_m2431700953(__this, L_7, L_9, /*hidden argument*/NULL);
	}

IL_0030:
	{
		TEdge_t1694054893 * L_10 = ___e0;
		ClipperBase_DeleteFromAEL_m216615416(__this, L_10, /*hidden argument*/NULL);
		goto IL_0182;
	}

IL_003d:
	{
		TEdge_t1694054893 * L_11 = ___e0;
		NullCheck(L_11);
		TEdge_t1694054893 * L_12 = L_11->get_NextInAEL_14();
		V_1 = L_12;
		goto IL_0067;
	}

IL_0046:
	{
		TEdge_t1694054893 * L_13 = ___e0;
		TEdge_t1694054893 * L_14 = V_1;
		TEdge_t1694054893 * L_15 = ___e0;
		NullCheck(L_15);
		IntPoint_t2327573135  L_16 = L_15->get_Top_2();
		Clipper_IntersectEdges_m4288628979(__this, L_13, L_14, L_16, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_17 = ___e0;
		TEdge_t1694054893 * L_18 = V_1;
		ClipperBase_SwapPositionsInAEL_m2341169767(__this, L_17, L_18, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_19 = ___e0;
		NullCheck(L_19);
		TEdge_t1694054893 * L_20 = L_19->get_NextInAEL_14();
		V_1 = L_20;
	}

IL_0067:
	{
		TEdge_t1694054893 * L_21 = V_1;
		if (!L_21)
		{
			goto IL_0073;
		}
	}
	{
		TEdge_t1694054893 * L_22 = V_1;
		TEdge_t1694054893 * L_23 = V_0;
		G_B9_0 = ((((int32_t)((((RuntimeObject*)(TEdge_t1694054893 *)L_22) == ((RuntimeObject*)(TEdge_t1694054893 *)L_23))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0074;
	}

IL_0073:
	{
		G_B9_0 = 0;
	}

IL_0074:
	{
		V_4 = (bool)G_B9_0;
		bool L_24 = V_4;
		if (L_24)
		{
			goto IL_0046;
		}
	}
	{
		TEdge_t1694054893 * L_25 = ___e0;
		NullCheck(L_25);
		int32_t L_26 = L_25->get_OutIdx_10();
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_008e;
		}
	}
	{
		TEdge_t1694054893 * L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = L_27->get_OutIdx_10();
		G_B13_0 = ((((int32_t)L_28) == ((int32_t)(-1)))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B13_0 = 0;
	}

IL_008f:
	{
		V_5 = (bool)G_B13_0;
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_00ac;
		}
	}
	{
		TEdge_t1694054893 * L_30 = ___e0;
		ClipperBase_DeleteFromAEL_m216615416(__this, L_30, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_31 = V_0;
		ClipperBase_DeleteFromAEL_m216615416(__this, L_31, /*hidden argument*/NULL);
		goto IL_0182;
	}

IL_00ac:
	{
		TEdge_t1694054893 * L_32 = ___e0;
		NullCheck(L_32);
		int32_t L_33 = L_32->get_OutIdx_10();
		if ((((int32_t)L_33) < ((int32_t)0)))
		{
			goto IL_00c3;
		}
	}
	{
		TEdge_t1694054893 * L_34 = V_0;
		NullCheck(L_34);
		int32_t L_35 = L_34->get_OutIdx_10();
		G_B18_0 = ((((int32_t)((((int32_t)L_35) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00c4;
	}

IL_00c3:
	{
		G_B18_0 = 0;
	}

IL_00c4:
	{
		V_6 = (bool)G_B18_0;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_0102;
		}
	}
	{
		TEdge_t1694054893 * L_37 = ___e0;
		NullCheck(L_37);
		int32_t L_38 = L_37->get_OutIdx_10();
		V_7 = (bool)((((int32_t)((((int32_t)L_38) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_00ec;
		}
	}
	{
		TEdge_t1694054893 * L_40 = ___e0;
		TEdge_t1694054893 * L_41 = V_0;
		TEdge_t1694054893 * L_42 = ___e0;
		NullCheck(L_42);
		IntPoint_t2327573135  L_43 = L_42->get_Top_2();
		Clipper_AddLocalMaxPoly_m2387891006(__this, L_40, L_41, L_43, /*hidden argument*/NULL);
	}

IL_00ec:
	{
		TEdge_t1694054893 * L_44 = ___e0;
		ClipperBase_DeleteFromAEL_m216615416(__this, L_44, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_45 = V_0;
		ClipperBase_DeleteFromAEL_m216615416(__this, L_45, /*hidden argument*/NULL);
		goto IL_0182;
	}

IL_0102:
	{
		TEdge_t1694054893 * L_46 = ___e0;
		NullCheck(L_46);
		int32_t L_47 = L_46->get_WindDelta_7();
		V_8 = (bool)((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
		bool L_48 = V_8;
		if (!L_48)
		{
			goto IL_0177;
		}
	}
	{
		TEdge_t1694054893 * L_49 = ___e0;
		NullCheck(L_49);
		int32_t L_50 = L_49->get_OutIdx_10();
		V_9 = (bool)((((int32_t)((((int32_t)L_50) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_51 = V_9;
		if (!L_51)
		{
			goto IL_013b;
		}
	}
	{
		TEdge_t1694054893 * L_52 = ___e0;
		TEdge_t1694054893 * L_53 = ___e0;
		NullCheck(L_53);
		IntPoint_t2327573135  L_54 = L_53->get_Top_2();
		Clipper_AddOutPt_m2431700953(__this, L_52, L_54, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_55 = ___e0;
		NullCheck(L_55);
		L_55->set_OutIdx_10((-1));
	}

IL_013b:
	{
		TEdge_t1694054893 * L_56 = ___e0;
		ClipperBase_DeleteFromAEL_m216615416(__this, L_56, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_57 = V_0;
		NullCheck(L_57);
		int32_t L_58 = L_57->get_OutIdx_10();
		V_10 = (bool)((((int32_t)((((int32_t)L_58) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_59 = V_10;
		if (!L_59)
		{
			goto IL_016c;
		}
	}
	{
		TEdge_t1694054893 * L_60 = V_0;
		TEdge_t1694054893 * L_61 = ___e0;
		NullCheck(L_61);
		IntPoint_t2327573135  L_62 = L_61->get_Top_2();
		Clipper_AddOutPt_m2431700953(__this, L_60, L_62, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_63 = V_0;
		NullCheck(L_63);
		L_63->set_OutIdx_10((-1));
	}

IL_016c:
	{
		TEdge_t1694054893 * L_64 = V_0;
		ClipperBase_DeleteFromAEL_m216615416(__this, L_64, /*hidden argument*/NULL);
		goto IL_0182;
	}

IL_0177:
	{
		ClipperException_t3118674656 * L_65 = (ClipperException_t3118674656 *)il2cpp_codegen_object_new(ClipperException_t3118674656_il2cpp_TypeInfo_var);
		ClipperException__ctor_m1990918546(L_65, _stringLiteral2165825057, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, NULL, Clipper_DoMaxima_m1252131532_RuntimeMethod_var);
	}

IL_0182:
	{
		return;
	}
}
// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::PointCount(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt)
extern "C" IL2CPP_METHOD_ATTR int32_t Clipper_PointCount_m1327256642 (Clipper_t4158555122 * __this, OutPt_t2591102706 * ___pts0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	OutPt_t2591102706 * V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		OutPt_t2591102706 * L_0 = ___pts0;
		V_2 = (bool)((((RuntimeObject*)(OutPt_t2591102706 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_3 = 0;
		goto IL_002f;
	}

IL_000d:
	{
		V_0 = 0;
		OutPt_t2591102706 * L_2 = ___pts0;
		V_1 = L_2;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		OutPt_t2591102706 * L_4 = V_1;
		NullCheck(L_4);
		OutPt_t2591102706 * L_5 = L_4->get_Next_2();
		V_1 = L_5;
		OutPt_t2591102706 * L_6 = V_1;
		OutPt_t2591102706 * L_7 = ___pts0;
		V_4 = (bool)((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_6) == ((RuntimeObject*)(OutPt_t2591102706 *)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_4;
		if (L_8)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_9 = V_0;
		V_3 = L_9;
		goto IL_002f;
	}

IL_002f:
	{
		int32_t L_10 = V_3;
		return L_10;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::BuildResult(System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>)
extern "C" IL2CPP_METHOD_ATTR void Clipper_BuildResult_m1357438491 (Clipper_t4158555122 * __this, List_1_t976755323 * ___polyg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_BuildResult_m1357438491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	OutRec_t316877671 * V_2 = NULL;
	OutPt_t2591102706 * V_3 = NULL;
	int32_t V_4 = 0;
	List_1_t3799647877 * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	{
		List_1_t976755323 * L_0 = ___polyg0;
		NullCheck(L_0);
		List_1_Clear_m3859123311(L_0, /*hidden argument*/List_1_Clear_m3859123311_RuntimeMethod_var);
		List_1_t976755323 * L_1 = ___polyg0;
		List_1_t1788952413 * L_2 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m4196692370(L_2, /*hidden argument*/List_1_get_Count_m4196692370_RuntimeMethod_var);
		NullCheck(L_1);
		List_1_set_Capacity_m3969153757(L_1, L_3, /*hidden argument*/List_1_set_Capacity_m3969153757_RuntimeMethod_var);
		List_1_t1788952413 * L_4 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		NullCheck(L_4);
		int32_t L_5 = List_1_get_Count_m4196692370(L_4, /*hidden argument*/List_1_get_Count_m4196692370_RuntimeMethod_var);
		V_0 = L_5;
		V_1 = 0;
		goto IL_00b3;
	}

IL_002d:
	{
		List_1_t1788952413 * L_6 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		OutRec_t316877671 * L_8 = List_1_get_Item_m350034741(L_6, L_7, /*hidden argument*/List_1_get_Item_m350034741_RuntimeMethod_var);
		V_2 = L_8;
		OutRec_t316877671 * L_9 = V_2;
		NullCheck(L_9);
		OutPt_t2591102706 * L_10 = L_9->get_Pts_4();
		V_6 = (bool)((((RuntimeObject*)(OutPt_t2591102706 *)L_10) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		goto IL_00af;
	}

IL_004c:
	{
		OutRec_t316877671 * L_12 = V_2;
		NullCheck(L_12);
		OutPt_t2591102706 * L_13 = L_12->get_Pts_4();
		NullCheck(L_13);
		OutPt_t2591102706 * L_14 = L_13->get_Prev_3();
		V_3 = L_14;
		OutPt_t2591102706 * L_15 = V_3;
		int32_t L_16 = Clipper_PointCount_m1327256642(__this, L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		int32_t L_17 = V_4;
		V_7 = (bool)((((int32_t)L_17) < ((int32_t)2))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_006e;
		}
	}
	{
		goto IL_00af;
	}

IL_006e:
	{
		int32_t L_19 = V_4;
		List_1_t3799647877 * L_20 = (List_1_t3799647877 *)il2cpp_codegen_object_new(List_1_t3799647877_il2cpp_TypeInfo_var);
		List_1__ctor_m3836626604(L_20, L_19, /*hidden argument*/List_1__ctor_m3836626604_RuntimeMethod_var);
		V_5 = L_20;
		V_8 = 0;
		goto IL_0099;
	}

IL_007c:
	{
		List_1_t3799647877 * L_21 = V_5;
		OutPt_t2591102706 * L_22 = V_3;
		NullCheck(L_22);
		IntPoint_t2327573135  L_23 = L_22->get_Pt_1();
		NullCheck(L_21);
		List_1_Add_m2426393733(L_21, L_23, /*hidden argument*/List_1_Add_m2426393733_RuntimeMethod_var);
		OutPt_t2591102706 * L_24 = V_3;
		NullCheck(L_24);
		OutPt_t2591102706 * L_25 = L_24->get_Prev_3();
		V_3 = L_25;
		int32_t L_26 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0099:
	{
		int32_t L_27 = V_8;
		int32_t L_28 = V_4;
		V_9 = (bool)((((int32_t)L_27) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_9;
		if (L_29)
		{
			goto IL_007c;
		}
	}
	{
		List_1_t976755323 * L_30 = ___polyg0;
		List_1_t3799647877 * L_31 = V_5;
		NullCheck(L_30);
		List_1_Add_m2003227107(L_30, L_31, /*hidden argument*/List_1_Add_m2003227107_RuntimeMethod_var);
	}

IL_00af:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00b3:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = V_0;
		V_10 = (bool)((((int32_t)L_33) < ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_10;
		if (L_35)
		{
			goto IL_002d;
		}
	}
	{
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::BuildResult2(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyTree)
extern "C" IL2CPP_METHOD_ATTR void Clipper_BuildResult2_m908624350 (Clipper_t4158555122 * __this, PolyTree_t3708317675 * ___polytree0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_BuildResult2_m908624350_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	OutRec_t316877671 * V_2 = NULL;
	int32_t V_3 = 0;
	PolyNode_t1300984468 * V_4 = NULL;
	OutPt_t2591102706 * V_5 = NULL;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	OutRec_t316877671 * V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B24_0 = 0;
	{
		PolyTree_t3708317675 * L_0 = ___polytree0;
		NullCheck(L_0);
		PolyTree_Clear_m2732860785(L_0, /*hidden argument*/NULL);
		PolyTree_t3708317675 * L_1 = ___polytree0;
		NullCheck(L_1);
		List_1_t2773059210 * L_2 = L_1->get_m_AllPolys_5();
		List_1_t1788952413 * L_3 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		NullCheck(L_3);
		int32_t L_4 = List_1_get_Count_m4196692370(L_3, /*hidden argument*/List_1_get_Count_m4196692370_RuntimeMethod_var);
		NullCheck(L_2);
		List_1_set_Capacity_m2501598686(L_2, L_4, /*hidden argument*/List_1_set_Capacity_m2501598686_RuntimeMethod_var);
		List_1_t1788952413 * L_5 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m4196692370(L_5, /*hidden argument*/List_1_get_Count_m4196692370_RuntimeMethod_var);
		V_0 = L_6;
		V_1 = 0;
		goto IL_00ed;
	}

IL_0032:
	{
		List_1_t1788952413 * L_7 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		OutRec_t316877671 * L_9 = List_1_get_Item_m350034741(L_7, L_8, /*hidden argument*/List_1_get_Item_m350034741_RuntimeMethod_var);
		V_2 = L_9;
		OutRec_t316877671 * L_10 = V_2;
		NullCheck(L_10);
		OutPt_t2591102706 * L_11 = L_10->get_Pts_4();
		int32_t L_12 = Clipper_PointCount_m1327256642(__this, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		OutRec_t316877671 * L_13 = V_2;
		NullCheck(L_13);
		bool L_14 = L_13->get_IsOpen_2();
		if (!L_14)
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_15 = V_3;
		if ((((int32_t)L_15) < ((int32_t)2)))
		{
			goto IL_006a;
		}
	}

IL_0059:
	{
		OutRec_t316877671 * L_16 = V_2;
		NullCheck(L_16);
		bool L_17 = L_16->get_IsOpen_2();
		if (L_17)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_18 = V_3;
		G_B6_0 = ((((int32_t)L_18) < ((int32_t)3))? 1 : 0);
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		G_B8_0 = G_B6_0;
		goto IL_006b;
	}

IL_006a:
	{
		G_B8_0 = 1;
	}

IL_006b:
	{
		V_6 = (bool)G_B8_0;
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_0073;
		}
	}
	{
		goto IL_00e9;
	}

IL_0073:
	{
		OutRec_t316877671 * L_20 = V_2;
		Clipper_FixHoleLinkage_m2496390730(__this, L_20, /*hidden argument*/NULL);
		PolyNode_t1300984468 * L_21 = (PolyNode_t1300984468 *)il2cpp_codegen_object_new(PolyNode_t1300984468_il2cpp_TypeInfo_var);
		PolyNode__ctor_m395933230(L_21, /*hidden argument*/NULL);
		V_4 = L_21;
		PolyTree_t3708317675 * L_22 = ___polytree0;
		NullCheck(L_22);
		List_1_t2773059210 * L_23 = L_22->get_m_AllPolys_5();
		PolyNode_t1300984468 * L_24 = V_4;
		NullCheck(L_23);
		List_1_Add_m2668163909(L_23, L_24, /*hidden argument*/List_1_Add_m2668163909_RuntimeMethod_var);
		OutRec_t316877671 * L_25 = V_2;
		PolyNode_t1300984468 * L_26 = V_4;
		NullCheck(L_25);
		L_25->set_PolyNode_6(L_26);
		PolyNode_t1300984468 * L_27 = V_4;
		NullCheck(L_27);
		List_1_t3799647877 * L_28 = L_27->get_m_polygon_1();
		int32_t L_29 = V_3;
		NullCheck(L_28);
		List_1_set_Capacity_m3226384709(L_28, L_29, /*hidden argument*/List_1_set_Capacity_m3226384709_RuntimeMethod_var);
		OutRec_t316877671 * L_30 = V_2;
		NullCheck(L_30);
		OutPt_t2591102706 * L_31 = L_30->get_Pts_4();
		NullCheck(L_31);
		OutPt_t2591102706 * L_32 = L_31->get_Prev_3();
		V_5 = L_32;
		V_7 = 0;
		goto IL_00dd;
	}

IL_00b8:
	{
		PolyNode_t1300984468 * L_33 = V_4;
		NullCheck(L_33);
		List_1_t3799647877 * L_34 = L_33->get_m_polygon_1();
		OutPt_t2591102706 * L_35 = V_5;
		NullCheck(L_35);
		IntPoint_t2327573135  L_36 = L_35->get_Pt_1();
		NullCheck(L_34);
		List_1_Add_m2426393733(L_34, L_36, /*hidden argument*/List_1_Add_m2426393733_RuntimeMethod_var);
		OutPt_t2591102706 * L_37 = V_5;
		NullCheck(L_37);
		OutPt_t2591102706 * L_38 = L_37->get_Prev_3();
		V_5 = L_38;
		int32_t L_39 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00dd:
	{
		int32_t L_40 = V_7;
		int32_t L_41 = V_3;
		V_8 = (bool)((((int32_t)L_40) < ((int32_t)L_41))? 1 : 0);
		bool L_42 = V_8;
		if (L_42)
		{
			goto IL_00b8;
		}
	}
	{
	}

IL_00e9:
	{
		int32_t L_43 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_00ed:
	{
		int32_t L_44 = V_1;
		int32_t L_45 = V_0;
		V_9 = (bool)((((int32_t)L_44) < ((int32_t)L_45))? 1 : 0);
		bool L_46 = V_9;
		if (L_46)
		{
			goto IL_0032;
		}
	}
	{
		PolyTree_t3708317675 * L_47 = ___polytree0;
		NullCheck(L_47);
		List_1_t2773059210 * L_48 = ((PolyNode_t1300984468 *)L_47)->get_m_Childs_3();
		List_1_t1788952413 * L_49 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		NullCheck(L_49);
		int32_t L_50 = List_1_get_Count_m4196692370(L_49, /*hidden argument*/List_1_get_Count_m4196692370_RuntimeMethod_var);
		NullCheck(L_48);
		List_1_set_Capacity_m2501598686(L_48, L_50, /*hidden argument*/List_1_set_Capacity_m2501598686_RuntimeMethod_var);
		List_1_t1788952413 * L_51 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		NullCheck(L_51);
		int32_t L_52 = List_1_get_Count_m4196692370(L_51, /*hidden argument*/List_1_get_Count_m4196692370_RuntimeMethod_var);
		V_0 = L_52;
		V_10 = 0;
		goto IL_01c5;
	}

IL_0125:
	{
		List_1_t1788952413 * L_53 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		int32_t L_54 = V_10;
		NullCheck(L_53);
		OutRec_t316877671 * L_55 = List_1_get_Item_m350034741(L_53, L_54, /*hidden argument*/List_1_get_Item_m350034741_RuntimeMethod_var);
		V_11 = L_55;
		OutRec_t316877671 * L_56 = V_11;
		NullCheck(L_56);
		PolyNode_t1300984468 * L_57 = L_56->get_PolyNode_6();
		V_12 = (bool)((((RuntimeObject*)(PolyNode_t1300984468 *)L_57) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_58 = V_12;
		if (!L_58)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01bf;
	}

IL_0147:
	{
		OutRec_t316877671 * L_59 = V_11;
		NullCheck(L_59);
		bool L_60 = L_59->get_IsOpen_2();
		V_13 = L_60;
		bool L_61 = V_13;
		if (!L_61)
		{
			goto IL_0174;
		}
	}
	{
		OutRec_t316877671 * L_62 = V_11;
		NullCheck(L_62);
		PolyNode_t1300984468 * L_63 = L_62->get_PolyNode_6();
		NullCheck(L_63);
		PolyNode_set_IsOpen_m638335(L_63, (bool)1, /*hidden argument*/NULL);
		PolyTree_t3708317675 * L_64 = ___polytree0;
		OutRec_t316877671 * L_65 = V_11;
		NullCheck(L_65);
		PolyNode_t1300984468 * L_66 = L_65->get_PolyNode_6();
		NullCheck(L_64);
		PolyNode_AddChild_m3254340323(L_64, L_66, /*hidden argument*/NULL);
		goto IL_01be;
	}

IL_0174:
	{
		OutRec_t316877671 * L_67 = V_11;
		NullCheck(L_67);
		OutRec_t316877671 * L_68 = L_67->get_FirstLeft_3();
		if (!L_68)
		{
			goto IL_018e;
		}
	}
	{
		OutRec_t316877671 * L_69 = V_11;
		NullCheck(L_69);
		OutRec_t316877671 * L_70 = L_69->get_FirstLeft_3();
		NullCheck(L_70);
		PolyNode_t1300984468 * L_71 = L_70->get_PolyNode_6();
		G_B24_0 = ((!(((RuntimeObject*)(PolyNode_t1300984468 *)L_71) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_018f;
	}

IL_018e:
	{
		G_B24_0 = 0;
	}

IL_018f:
	{
		V_14 = (bool)G_B24_0;
		bool L_72 = V_14;
		if (!L_72)
		{
			goto IL_01b0;
		}
	}
	{
		OutRec_t316877671 * L_73 = V_11;
		NullCheck(L_73);
		OutRec_t316877671 * L_74 = L_73->get_FirstLeft_3();
		NullCheck(L_74);
		PolyNode_t1300984468 * L_75 = L_74->get_PolyNode_6();
		OutRec_t316877671 * L_76 = V_11;
		NullCheck(L_76);
		PolyNode_t1300984468 * L_77 = L_76->get_PolyNode_6();
		NullCheck(L_75);
		PolyNode_AddChild_m3254340323(L_75, L_77, /*hidden argument*/NULL);
		goto IL_01be;
	}

IL_01b0:
	{
		PolyTree_t3708317675 * L_78 = ___polytree0;
		OutRec_t316877671 * L_79 = V_11;
		NullCheck(L_79);
		PolyNode_t1300984468 * L_80 = L_79->get_PolyNode_6();
		NullCheck(L_78);
		PolyNode_AddChild_m3254340323(L_78, L_80, /*hidden argument*/NULL);
	}

IL_01be:
	{
	}

IL_01bf:
	{
		int32_t L_81 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
	}

IL_01c5:
	{
		int32_t L_82 = V_10;
		int32_t L_83 = V_0;
		V_15 = (bool)((((int32_t)L_82) < ((int32_t)L_83))? 1 : 0);
		bool L_84 = V_15;
		if (L_84)
		{
			goto IL_0125;
		}
	}
	{
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::FixupOutPolyline(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR void Clipper_FixupOutPolyline_m4149716164 (Clipper_t4158555122 * __this, OutRec_t316877671 * ___outrec0, const RuntimeMethod* method)
{
	OutPt_t2591102706 * V_0 = NULL;
	OutPt_t2591102706 * V_1 = NULL;
	bool V_2 = false;
	OutPt_t2591102706 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		OutRec_t316877671 * L_0 = ___outrec0;
		NullCheck(L_0);
		OutPt_t2591102706 * L_1 = L_0->get_Pts_4();
		V_0 = L_1;
		OutPt_t2591102706 * L_2 = V_0;
		NullCheck(L_2);
		OutPt_t2591102706 * L_3 = L_2->get_Prev_3();
		V_1 = L_3;
		goto IL_0068;
	}

IL_0011:
	{
		OutPt_t2591102706 * L_4 = V_0;
		NullCheck(L_4);
		OutPt_t2591102706 * L_5 = L_4->get_Next_2();
		V_0 = L_5;
		OutPt_t2591102706 * L_6 = V_0;
		NullCheck(L_6);
		IntPoint_t2327573135  L_7 = L_6->get_Pt_1();
		OutPt_t2591102706 * L_8 = V_0;
		NullCheck(L_8);
		OutPt_t2591102706 * L_9 = L_8->get_Prev_3();
		NullCheck(L_9);
		IntPoint_t2327573135  L_10 = L_9->get_Pt_1();
		bool L_11 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_7, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0067;
		}
	}
	{
		OutPt_t2591102706 * L_13 = V_0;
		OutPt_t2591102706 * L_14 = V_1;
		V_4 = (bool)((((RuntimeObject*)(OutPt_t2591102706 *)L_13) == ((RuntimeObject*)(OutPt_t2591102706 *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0045;
		}
	}
	{
		OutPt_t2591102706 * L_16 = V_0;
		NullCheck(L_16);
		OutPt_t2591102706 * L_17 = L_16->get_Prev_3();
		V_1 = L_17;
	}

IL_0045:
	{
		OutPt_t2591102706 * L_18 = V_0;
		NullCheck(L_18);
		OutPt_t2591102706 * L_19 = L_18->get_Prev_3();
		V_3 = L_19;
		OutPt_t2591102706 * L_20 = V_3;
		OutPt_t2591102706 * L_21 = V_0;
		NullCheck(L_21);
		OutPt_t2591102706 * L_22 = L_21->get_Next_2();
		NullCheck(L_20);
		L_20->set_Next_2(L_22);
		OutPt_t2591102706 * L_23 = V_0;
		NullCheck(L_23);
		OutPt_t2591102706 * L_24 = L_23->get_Next_2();
		OutPt_t2591102706 * L_25 = V_3;
		NullCheck(L_24);
		L_24->set_Prev_3(L_25);
		OutPt_t2591102706 * L_26 = V_3;
		V_0 = L_26;
	}

IL_0067:
	{
	}

IL_0068:
	{
		OutPt_t2591102706 * L_27 = V_0;
		OutPt_t2591102706 * L_28 = V_1;
		V_5 = (bool)((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_27) == ((RuntimeObject*)(OutPt_t2591102706 *)L_28))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_5;
		if (L_29)
		{
			goto IL_0011;
		}
	}
	{
		OutPt_t2591102706 * L_30 = V_0;
		OutPt_t2591102706 * L_31 = V_0;
		NullCheck(L_31);
		OutPt_t2591102706 * L_32 = L_31->get_Prev_3();
		V_6 = (bool)((((RuntimeObject*)(OutPt_t2591102706 *)L_30) == ((RuntimeObject*)(OutPt_t2591102706 *)L_32))? 1 : 0);
		bool L_33 = V_6;
		if (!L_33)
		{
			goto IL_008b;
		}
	}
	{
		OutRec_t316877671 * L_34 = ___outrec0;
		NullCheck(L_34);
		L_34->set_Pts_4((OutPt_t2591102706 *)NULL);
	}

IL_008b:
	{
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::FixupOutPolygon(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR void Clipper_FixupOutPolygon_m1262056334 (Clipper_t4158555122 * __this, OutRec_t316877671 * ___outRec0, const RuntimeMethod* method)
{
	OutPt_t2591102706 * V_0 = NULL;
	OutPt_t2591102706 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B19_0 = 0;
	{
		V_0 = (OutPt_t2591102706 *)NULL;
		OutRec_t316877671 * L_0 = ___outRec0;
		NullCheck(L_0);
		L_0->set_BottomPt_5((OutPt_t2591102706 *)NULL);
		OutRec_t316877671 * L_1 = ___outRec0;
		NullCheck(L_1);
		OutPt_t2591102706 * L_2 = L_1->get_Pts_4();
		V_1 = L_2;
		bool L_3 = ClipperBase_get_PreserveCollinear_m3706547670(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		bool L_4 = Clipper_get_StrictlySimple_m970398697(__this, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		V_2 = (bool)G_B3_0;
		goto IL_0135;
	}

IL_0028:
	{
		OutPt_t2591102706 * L_5 = V_1;
		NullCheck(L_5);
		OutPt_t2591102706 * L_6 = L_5->get_Prev_3();
		OutPt_t2591102706 * L_7 = V_1;
		if ((((RuntimeObject*)(OutPt_t2591102706 *)L_6) == ((RuntimeObject*)(OutPt_t2591102706 *)L_7)))
		{
			goto IL_0042;
		}
	}
	{
		OutPt_t2591102706 * L_8 = V_1;
		NullCheck(L_8);
		OutPt_t2591102706 * L_9 = L_8->get_Prev_3();
		OutPt_t2591102706 * L_10 = V_1;
		NullCheck(L_10);
		OutPt_t2591102706 * L_11 = L_10->get_Next_2();
		G_B7_0 = ((((RuntimeObject*)(OutPt_t2591102706 *)L_9) == ((RuntimeObject*)(OutPt_t2591102706 *)L_11))? 1 : 0);
		goto IL_0043;
	}

IL_0042:
	{
		G_B7_0 = 1;
	}

IL_0043:
	{
		V_3 = (bool)G_B7_0;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0054;
		}
	}
	{
		OutRec_t316877671 * L_13 = ___outRec0;
		NullCheck(L_13);
		L_13->set_Pts_4((OutPt_t2591102706 *)NULL);
		goto IL_0141;
	}

IL_0054:
	{
		OutPt_t2591102706 * L_14 = V_1;
		NullCheck(L_14);
		IntPoint_t2327573135  L_15 = L_14->get_Pt_1();
		OutPt_t2591102706 * L_16 = V_1;
		NullCheck(L_16);
		OutPt_t2591102706 * L_17 = L_16->get_Next_2();
		NullCheck(L_17);
		IntPoint_t2327573135  L_18 = L_17->get_Pt_1();
		bool L_19 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_15, L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00dd;
		}
	}
	{
		OutPt_t2591102706 * L_20 = V_1;
		NullCheck(L_20);
		IntPoint_t2327573135  L_21 = L_20->get_Pt_1();
		OutPt_t2591102706 * L_22 = V_1;
		NullCheck(L_22);
		OutPt_t2591102706 * L_23 = L_22->get_Prev_3();
		NullCheck(L_23);
		IntPoint_t2327573135  L_24 = L_23->get_Pt_1();
		bool L_25 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_21, L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_00dd;
		}
	}
	{
		OutPt_t2591102706 * L_26 = V_1;
		NullCheck(L_26);
		OutPt_t2591102706 * L_27 = L_26->get_Prev_3();
		NullCheck(L_27);
		IntPoint_t2327573135  L_28 = L_27->get_Pt_1();
		OutPt_t2591102706 * L_29 = V_1;
		NullCheck(L_29);
		IntPoint_t2327573135  L_30 = L_29->get_Pt_1();
		OutPt_t2591102706 * L_31 = V_1;
		NullCheck(L_31);
		OutPt_t2591102706 * L_32 = L_31->get_Next_2();
		NullCheck(L_32);
		IntPoint_t2327573135  L_33 = L_32->get_Pt_1();
		bool L_34 = ((ClipperBase_t2411222589 *)__this)->get_m_UseFullRange_6();
		bool L_35 = ClipperBase_SlopesEqual_m89433242(NULL /*static, unused*/, L_28, L_30, L_33, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_00da;
		}
	}
	{
		bool L_36 = V_2;
		if (!L_36)
		{
			goto IL_00d7;
		}
	}
	{
		OutPt_t2591102706 * L_37 = V_1;
		NullCheck(L_37);
		OutPt_t2591102706 * L_38 = L_37->get_Prev_3();
		NullCheck(L_38);
		IntPoint_t2327573135  L_39 = L_38->get_Pt_1();
		OutPt_t2591102706 * L_40 = V_1;
		NullCheck(L_40);
		IntPoint_t2327573135  L_41 = L_40->get_Pt_1();
		OutPt_t2591102706 * L_42 = V_1;
		NullCheck(L_42);
		OutPt_t2591102706 * L_43 = L_42->get_Next_2();
		NullCheck(L_43);
		IntPoint_t2327573135  L_44 = L_43->get_Pt_1();
		bool L_45 = ClipperBase_Pt2IsBetweenPt1AndPt3_m2502305590(__this, L_39, L_41, L_44, /*hidden argument*/NULL);
		G_B15_0 = ((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
		goto IL_00d8;
	}

IL_00d7:
	{
		G_B15_0 = 1;
	}

IL_00d8:
	{
		G_B17_0 = G_B15_0;
		goto IL_00db;
	}

IL_00da:
	{
		G_B17_0 = 0;
	}

IL_00db:
	{
		G_B19_0 = G_B17_0;
		goto IL_00de;
	}

IL_00dd:
	{
		G_B19_0 = 1;
	}

IL_00de:
	{
		V_4 = (bool)G_B19_0;
		bool L_46 = V_4;
		if (!L_46)
		{
			goto IL_0113;
		}
	}
	{
		V_0 = (OutPt_t2591102706 *)NULL;
		OutPt_t2591102706 * L_47 = V_1;
		NullCheck(L_47);
		OutPt_t2591102706 * L_48 = L_47->get_Prev_3();
		OutPt_t2591102706 * L_49 = V_1;
		NullCheck(L_49);
		OutPt_t2591102706 * L_50 = L_49->get_Next_2();
		NullCheck(L_48);
		L_48->set_Next_2(L_50);
		OutPt_t2591102706 * L_51 = V_1;
		NullCheck(L_51);
		OutPt_t2591102706 * L_52 = L_51->get_Next_2();
		OutPt_t2591102706 * L_53 = V_1;
		NullCheck(L_53);
		OutPt_t2591102706 * L_54 = L_53->get_Prev_3();
		NullCheck(L_52);
		L_52->set_Prev_3(L_54);
		OutPt_t2591102706 * L_55 = V_1;
		NullCheck(L_55);
		OutPt_t2591102706 * L_56 = L_55->get_Prev_3();
		V_1 = L_56;
		goto IL_0134;
	}

IL_0113:
	{
		OutPt_t2591102706 * L_57 = V_1;
		OutPt_t2591102706 * L_58 = V_0;
		V_5 = (bool)((((RuntimeObject*)(OutPt_t2591102706 *)L_57) == ((RuntimeObject*)(OutPt_t2591102706 *)L_58))? 1 : 0);
		bool L_59 = V_5;
		if (!L_59)
		{
			goto IL_011f;
		}
	}
	{
		goto IL_013a;
	}

IL_011f:
	{
		OutPt_t2591102706 * L_60 = V_0;
		V_6 = (bool)((((RuntimeObject*)(OutPt_t2591102706 *)L_60) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_61 = V_6;
		if (!L_61)
		{
			goto IL_012c;
		}
	}
	{
		OutPt_t2591102706 * L_62 = V_1;
		V_0 = L_62;
	}

IL_012c:
	{
		OutPt_t2591102706 * L_63 = V_1;
		NullCheck(L_63);
		OutPt_t2591102706 * L_64 = L_63->get_Next_2();
		V_1 = L_64;
	}

IL_0134:
	{
	}

IL_0135:
	{
		goto IL_0028;
	}

IL_013a:
	{
		OutRec_t316877671 * L_65 = ___outRec0;
		OutPt_t2591102706 * L_66 = V_1;
		NullCheck(L_65);
		L_65->set_Pts_4(L_66);
	}

IL_0141:
	{
		return;
	}
}
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::DupOutPt(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR OutPt_t2591102706 * Clipper_DupOutPt_m3532774569 (Clipper_t4158555122 * __this, OutPt_t2591102706 * ___outPt0, bool ___InsertAfter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_DupOutPt_m3532774569_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OutPt_t2591102706 * V_0 = NULL;
	bool V_1 = false;
	OutPt_t2591102706 * V_2 = NULL;
	{
		OutPt_t2591102706 * L_0 = (OutPt_t2591102706 *)il2cpp_codegen_object_new(OutPt_t2591102706_il2cpp_TypeInfo_var);
		OutPt__ctor_m2666169316(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		OutPt_t2591102706 * L_1 = V_0;
		OutPt_t2591102706 * L_2 = ___outPt0;
		NullCheck(L_2);
		IntPoint_t2327573135  L_3 = L_2->get_Pt_1();
		NullCheck(L_1);
		L_1->set_Pt_1(L_3);
		OutPt_t2591102706 * L_4 = V_0;
		OutPt_t2591102706 * L_5 = ___outPt0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_Idx_0();
		NullCheck(L_4);
		L_4->set_Idx_0(L_6);
		bool L_7 = ___InsertAfter1;
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		OutPt_t2591102706 * L_9 = V_0;
		OutPt_t2591102706 * L_10 = ___outPt0;
		NullCheck(L_10);
		OutPt_t2591102706 * L_11 = L_10->get_Next_2();
		NullCheck(L_9);
		L_9->set_Next_2(L_11);
		OutPt_t2591102706 * L_12 = V_0;
		OutPt_t2591102706 * L_13 = ___outPt0;
		NullCheck(L_12);
		L_12->set_Prev_3(L_13);
		OutPt_t2591102706 * L_14 = ___outPt0;
		NullCheck(L_14);
		OutPt_t2591102706 * L_15 = L_14->get_Next_2();
		OutPt_t2591102706 * L_16 = V_0;
		NullCheck(L_15);
		L_15->set_Prev_3(L_16);
		OutPt_t2591102706 * L_17 = ___outPt0;
		OutPt_t2591102706 * L_18 = V_0;
		NullCheck(L_17);
		L_17->set_Next_2(L_18);
		goto IL_0076;
	}

IL_004e:
	{
		OutPt_t2591102706 * L_19 = V_0;
		OutPt_t2591102706 * L_20 = ___outPt0;
		NullCheck(L_20);
		OutPt_t2591102706 * L_21 = L_20->get_Prev_3();
		NullCheck(L_19);
		L_19->set_Prev_3(L_21);
		OutPt_t2591102706 * L_22 = V_0;
		OutPt_t2591102706 * L_23 = ___outPt0;
		NullCheck(L_22);
		L_22->set_Next_2(L_23);
		OutPt_t2591102706 * L_24 = ___outPt0;
		NullCheck(L_24);
		OutPt_t2591102706 * L_25 = L_24->get_Prev_3();
		OutPt_t2591102706 * L_26 = V_0;
		NullCheck(L_25);
		L_25->set_Next_2(L_26);
		OutPt_t2591102706 * L_27 = ___outPt0;
		OutPt_t2591102706 * L_28 = V_0;
		NullCheck(L_27);
		L_27->set_Prev_3(L_28);
	}

IL_0076:
	{
		OutPt_t2591102706 * L_29 = V_0;
		V_2 = L_29;
		goto IL_007a;
	}

IL_007a:
	{
		OutPt_t2591102706 * L_30 = V_2;
		return L_30;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::GetOverlap(System.Int64,System.Int64,System.Int64,System.Int64,System.Int64&,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_GetOverlap_m1773269826 (Clipper_t4158555122 * __this, int64_t ___a10, int64_t ___a21, int64_t ___b12, int64_t ___b23, int64_t* ___Left4, int64_t* ___Right5, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		int64_t L_0 = ___a10;
		int64_t L_1 = ___a21;
		V_0 = (bool)((((int64_t)L_0) < ((int64_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0046;
		}
	}
	{
		int64_t L_3 = ___b12;
		int64_t L_4 = ___b23;
		V_1 = (bool)((((int64_t)L_3) < ((int64_t)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		int64_t* L_6 = ___Left4;
		int64_t L_7 = ___a10;
		int64_t L_8 = ___b12;
		int64_t L_9 = Math_Max_m3392967427(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		*((int64_t*)(L_6)) = (int64_t)L_9;
		int64_t* L_10 = ___Right5;
		int64_t L_11 = ___a21;
		int64_t L_12 = ___b23;
		int64_t L_13 = Math_Min_m2427345610(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		*((int64_t*)(L_10)) = (int64_t)L_13;
		goto IL_0043;
	}

IL_002c:
	{
		int64_t* L_14 = ___Left4;
		int64_t L_15 = ___a10;
		int64_t L_16 = ___b23;
		int64_t L_17 = Math_Max_m3392967427(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		*((int64_t*)(L_14)) = (int64_t)L_17;
		int64_t* L_18 = ___Right5;
		int64_t L_19 = ___a21;
		int64_t L_20 = ___b12;
		int64_t L_21 = Math_Min_m2427345610(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		*((int64_t*)(L_18)) = (int64_t)L_21;
	}

IL_0043:
	{
		goto IL_0081;
	}

IL_0046:
	{
		int64_t L_22 = ___b12;
		int64_t L_23 = ___b23;
		V_2 = (bool)((((int64_t)L_22) < ((int64_t)L_23))? 1 : 0);
		bool L_24 = V_2;
		if (!L_24)
		{
			goto IL_0069;
		}
	}
	{
		int64_t* L_25 = ___Left4;
		int64_t L_26 = ___a21;
		int64_t L_27 = ___b12;
		int64_t L_28 = Math_Max_m3392967427(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		*((int64_t*)(L_25)) = (int64_t)L_28;
		int64_t* L_29 = ___Right5;
		int64_t L_30 = ___a10;
		int64_t L_31 = ___b23;
		int64_t L_32 = Math_Min_m2427345610(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		*((int64_t*)(L_29)) = (int64_t)L_32;
		goto IL_0080;
	}

IL_0069:
	{
		int64_t* L_33 = ___Left4;
		int64_t L_34 = ___a21;
		int64_t L_35 = ___b23;
		int64_t L_36 = Math_Max_m3392967427(NULL /*static, unused*/, L_34, L_35, /*hidden argument*/NULL);
		*((int64_t*)(L_33)) = (int64_t)L_36;
		int64_t* L_37 = ___Right5;
		int64_t L_38 = ___a10;
		int64_t L_39 = ___b12;
		int64_t L_40 = Math_Min_m2427345610(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		*((int64_t*)(L_37)) = (int64_t)L_40;
	}

IL_0080:
	{
	}

IL_0081:
	{
		int64_t* L_41 = ___Left4;
		int64_t* L_42 = ___Right5;
		V_3 = (bool)((((int64_t)(*((int64_t*)L_41))) < ((int64_t)(*((int64_t*)L_42))))? 1 : 0);
		goto IL_008c;
	}

IL_008c:
	{
		bool L_43 = V_3;
		return L_43;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::JoinHorz(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_JoinHorz_m1088565330 (Clipper_t4158555122 * __this, OutPt_t2591102706 * ___op10, OutPt_t2591102706 * ___op1b1, OutPt_t2591102706 * ___op22, OutPt_t2591102706 * ___op2b3, IntPoint_t2327573135  ___Pt4, bool ___DiscardLeft5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B65_0 = 0;
	{
		OutPt_t2591102706 * L_0 = ___op10;
		NullCheck(L_0);
		IntPoint_t2327573135 * L_1 = L_0->get_address_of_Pt_1();
		int64_t L_2 = L_1->get_X_0();
		OutPt_t2591102706 * L_3 = ___op1b1;
		NullCheck(L_3);
		IntPoint_t2327573135 * L_4 = L_3->get_address_of_Pt_1();
		int64_t L_5 = L_4->get_X_0();
		if ((((int64_t)L_2) > ((int64_t)L_5)))
		{
			goto IL_001c;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_0 = G_B3_0;
		OutPt_t2591102706 * L_6 = ___op22;
		NullCheck(L_6);
		IntPoint_t2327573135 * L_7 = L_6->get_address_of_Pt_1();
		int64_t L_8 = L_7->get_X_0();
		OutPt_t2591102706 * L_9 = ___op2b3;
		NullCheck(L_9);
		IntPoint_t2327573135 * L_10 = L_9->get_address_of_Pt_1();
		int64_t L_11 = L_10->get_X_0();
		if ((((int64_t)L_8) > ((int64_t)L_11)))
		{
			goto IL_003a;
		}
	}
	{
		G_B6_0 = 1;
		goto IL_003b;
	}

IL_003a:
	{
		G_B6_0 = 0;
	}

IL_003b:
	{
		V_1 = G_B6_0;
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		V_2 = (bool)((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_004b;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03ee;
	}

IL_004b:
	{
		int32_t L_15 = V_0;
		V_4 = (bool)((((int32_t)L_15) == ((int32_t)1))? 1 : 0);
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_0129;
		}
	}
	{
		goto IL_0063;
	}

IL_005b:
	{
		OutPt_t2591102706 * L_17 = ___op10;
		NullCheck(L_17);
		OutPt_t2591102706 * L_18 = L_17->get_Next_2();
		___op10 = L_18;
	}

IL_0063:
	{
		OutPt_t2591102706 * L_19 = ___op10;
		NullCheck(L_19);
		OutPt_t2591102706 * L_20 = L_19->get_Next_2();
		NullCheck(L_20);
		IntPoint_t2327573135 * L_21 = L_20->get_address_of_Pt_1();
		int64_t L_22 = L_21->get_X_0();
		IntPoint_t2327573135  L_23 = ___Pt4;
		int64_t L_24 = L_23.get_X_0();
		if ((((int64_t)L_22) > ((int64_t)L_24)))
		{
			goto IL_00b4;
		}
	}
	{
		OutPt_t2591102706 * L_25 = ___op10;
		NullCheck(L_25);
		OutPt_t2591102706 * L_26 = L_25->get_Next_2();
		NullCheck(L_26);
		IntPoint_t2327573135 * L_27 = L_26->get_address_of_Pt_1();
		int64_t L_28 = L_27->get_X_0();
		OutPt_t2591102706 * L_29 = ___op10;
		NullCheck(L_29);
		IntPoint_t2327573135 * L_30 = L_29->get_address_of_Pt_1();
		int64_t L_31 = L_30->get_X_0();
		if ((((int64_t)L_28) < ((int64_t)L_31)))
		{
			goto IL_00b4;
		}
	}
	{
		OutPt_t2591102706 * L_32 = ___op10;
		NullCheck(L_32);
		OutPt_t2591102706 * L_33 = L_32->get_Next_2();
		NullCheck(L_33);
		IntPoint_t2327573135 * L_34 = L_33->get_address_of_Pt_1();
		int64_t L_35 = L_34->get_Y_1();
		IntPoint_t2327573135  L_36 = ___Pt4;
		int64_t L_37 = L_36.get_Y_1();
		G_B15_0 = ((((int64_t)L_35) == ((int64_t)L_37))? 1 : 0);
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B15_0 = 0;
	}

IL_00b5:
	{
		V_5 = (bool)G_B15_0;
		bool L_38 = V_5;
		if (L_38)
		{
			goto IL_005b;
		}
	}
	{
		bool L_39 = ___DiscardLeft5;
		if (!L_39)
		{
			goto IL_00d8;
		}
	}
	{
		OutPt_t2591102706 * L_40 = ___op10;
		NullCheck(L_40);
		IntPoint_t2327573135 * L_41 = L_40->get_address_of_Pt_1();
		int64_t L_42 = L_41->get_X_0();
		IntPoint_t2327573135  L_43 = ___Pt4;
		int64_t L_44 = L_43.get_X_0();
		G_B19_0 = ((((int32_t)((((int64_t)L_42) == ((int64_t)L_44))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d9;
	}

IL_00d8:
	{
		G_B19_0 = 0;
	}

IL_00d9:
	{
		V_6 = (bool)G_B19_0;
		bool L_45 = V_6;
		if (!L_45)
		{
			goto IL_00e7;
		}
	}
	{
		OutPt_t2591102706 * L_46 = ___op10;
		NullCheck(L_46);
		OutPt_t2591102706 * L_47 = L_46->get_Next_2();
		___op10 = L_47;
	}

IL_00e7:
	{
		OutPt_t2591102706 * L_48 = ___op10;
		bool L_49 = ___DiscardLeft5;
		OutPt_t2591102706 * L_50 = Clipper_DupOutPt_m3532774569(__this, L_48, (bool)((((int32_t)L_49) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		___op1b1 = L_50;
		OutPt_t2591102706 * L_51 = ___op1b1;
		NullCheck(L_51);
		IntPoint_t2327573135  L_52 = L_51->get_Pt_1();
		IntPoint_t2327573135  L_53 = ___Pt4;
		bool L_54 = IntPoint_op_Inequality_m2137021658(NULL /*static, unused*/, L_52, L_53, /*hidden argument*/NULL);
		V_7 = L_54;
		bool L_55 = V_7;
		if (!L_55)
		{
			goto IL_0123;
		}
	}
	{
		OutPt_t2591102706 * L_56 = ___op1b1;
		___op10 = L_56;
		OutPt_t2591102706 * L_57 = ___op10;
		IntPoint_t2327573135  L_58 = ___Pt4;
		NullCheck(L_57);
		L_57->set_Pt_1(L_58);
		OutPt_t2591102706 * L_59 = ___op10;
		bool L_60 = ___DiscardLeft5;
		OutPt_t2591102706 * L_61 = Clipper_DupOutPt_m3532774569(__this, L_59, (bool)((((int32_t)L_60) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		___op1b1 = L_61;
	}

IL_0123:
	{
		goto IL_01ef;
	}

IL_0129:
	{
		goto IL_0134;
	}

IL_012c:
	{
		OutPt_t2591102706 * L_62 = ___op10;
		NullCheck(L_62);
		OutPt_t2591102706 * L_63 = L_62->get_Next_2();
		___op10 = L_63;
	}

IL_0134:
	{
		OutPt_t2591102706 * L_64 = ___op10;
		NullCheck(L_64);
		OutPt_t2591102706 * L_65 = L_64->get_Next_2();
		NullCheck(L_65);
		IntPoint_t2327573135 * L_66 = L_65->get_address_of_Pt_1();
		int64_t L_67 = L_66->get_X_0();
		IntPoint_t2327573135  L_68 = ___Pt4;
		int64_t L_69 = L_68.get_X_0();
		if ((((int64_t)L_67) < ((int64_t)L_69)))
		{
			goto IL_0185;
		}
	}
	{
		OutPt_t2591102706 * L_70 = ___op10;
		NullCheck(L_70);
		OutPt_t2591102706 * L_71 = L_70->get_Next_2();
		NullCheck(L_71);
		IntPoint_t2327573135 * L_72 = L_71->get_address_of_Pt_1();
		int64_t L_73 = L_72->get_X_0();
		OutPt_t2591102706 * L_74 = ___op10;
		NullCheck(L_74);
		IntPoint_t2327573135 * L_75 = L_74->get_address_of_Pt_1();
		int64_t L_76 = L_75->get_X_0();
		if ((((int64_t)L_73) > ((int64_t)L_76)))
		{
			goto IL_0185;
		}
	}
	{
		OutPt_t2591102706 * L_77 = ___op10;
		NullCheck(L_77);
		OutPt_t2591102706 * L_78 = L_77->get_Next_2();
		NullCheck(L_78);
		IntPoint_t2327573135 * L_79 = L_78->get_address_of_Pt_1();
		int64_t L_80 = L_79->get_Y_1();
		IntPoint_t2327573135  L_81 = ___Pt4;
		int64_t L_82 = L_81.get_Y_1();
		G_B30_0 = ((((int64_t)L_80) == ((int64_t)L_82))? 1 : 0);
		goto IL_0186;
	}

IL_0185:
	{
		G_B30_0 = 0;
	}

IL_0186:
	{
		V_8 = (bool)G_B30_0;
		bool L_83 = V_8;
		if (L_83)
		{
			goto IL_012c;
		}
	}
	{
		bool L_84 = ___DiscardLeft5;
		if (L_84)
		{
			goto IL_01a9;
		}
	}
	{
		OutPt_t2591102706 * L_85 = ___op10;
		NullCheck(L_85);
		IntPoint_t2327573135 * L_86 = L_85->get_address_of_Pt_1();
		int64_t L_87 = L_86->get_X_0();
		IntPoint_t2327573135  L_88 = ___Pt4;
		int64_t L_89 = L_88.get_X_0();
		G_B34_0 = ((((int32_t)((((int64_t)L_87) == ((int64_t)L_89))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01aa;
	}

IL_01a9:
	{
		G_B34_0 = 0;
	}

IL_01aa:
	{
		V_9 = (bool)G_B34_0;
		bool L_90 = V_9;
		if (!L_90)
		{
			goto IL_01b8;
		}
	}
	{
		OutPt_t2591102706 * L_91 = ___op10;
		NullCheck(L_91);
		OutPt_t2591102706 * L_92 = L_91->get_Next_2();
		___op10 = L_92;
	}

IL_01b8:
	{
		OutPt_t2591102706 * L_93 = ___op10;
		bool L_94 = ___DiscardLeft5;
		OutPt_t2591102706 * L_95 = Clipper_DupOutPt_m3532774569(__this, L_93, L_94, /*hidden argument*/NULL);
		___op1b1 = L_95;
		OutPt_t2591102706 * L_96 = ___op1b1;
		NullCheck(L_96);
		IntPoint_t2327573135  L_97 = L_96->get_Pt_1();
		IntPoint_t2327573135  L_98 = ___Pt4;
		bool L_99 = IntPoint_op_Inequality_m2137021658(NULL /*static, unused*/, L_97, L_98, /*hidden argument*/NULL);
		V_10 = L_99;
		bool L_100 = V_10;
		if (!L_100)
		{
			goto IL_01ee;
		}
	}
	{
		OutPt_t2591102706 * L_101 = ___op1b1;
		___op10 = L_101;
		OutPt_t2591102706 * L_102 = ___op10;
		IntPoint_t2327573135  L_103 = ___Pt4;
		NullCheck(L_102);
		L_102->set_Pt_1(L_103);
		OutPt_t2591102706 * L_104 = ___op10;
		bool L_105 = ___DiscardLeft5;
		OutPt_t2591102706 * L_106 = Clipper_DupOutPt_m3532774569(__this, L_104, L_105, /*hidden argument*/NULL);
		___op1b1 = L_106;
	}

IL_01ee:
	{
	}

IL_01ef:
	{
		int32_t L_107 = V_1;
		V_11 = (bool)((((int32_t)L_107) == ((int32_t)1))? 1 : 0);
		bool L_108 = V_11;
		if (!L_108)
		{
			goto IL_02d0;
		}
	}
	{
		goto IL_0207;
	}

IL_01ff:
	{
		OutPt_t2591102706 * L_109 = ___op22;
		NullCheck(L_109);
		OutPt_t2591102706 * L_110 = L_109->get_Next_2();
		___op22 = L_110;
	}

IL_0207:
	{
		OutPt_t2591102706 * L_111 = ___op22;
		NullCheck(L_111);
		OutPt_t2591102706 * L_112 = L_111->get_Next_2();
		NullCheck(L_112);
		IntPoint_t2327573135 * L_113 = L_112->get_address_of_Pt_1();
		int64_t L_114 = L_113->get_X_0();
		IntPoint_t2327573135  L_115 = ___Pt4;
		int64_t L_116 = L_115.get_X_0();
		if ((((int64_t)L_114) > ((int64_t)L_116)))
		{
			goto IL_0258;
		}
	}
	{
		OutPt_t2591102706 * L_117 = ___op22;
		NullCheck(L_117);
		OutPt_t2591102706 * L_118 = L_117->get_Next_2();
		NullCheck(L_118);
		IntPoint_t2327573135 * L_119 = L_118->get_address_of_Pt_1();
		int64_t L_120 = L_119->get_X_0();
		OutPt_t2591102706 * L_121 = ___op22;
		NullCheck(L_121);
		IntPoint_t2327573135 * L_122 = L_121->get_address_of_Pt_1();
		int64_t L_123 = L_122->get_X_0();
		if ((((int64_t)L_120) < ((int64_t)L_123)))
		{
			goto IL_0258;
		}
	}
	{
		OutPt_t2591102706 * L_124 = ___op22;
		NullCheck(L_124);
		OutPt_t2591102706 * L_125 = L_124->get_Next_2();
		NullCheck(L_125);
		IntPoint_t2327573135 * L_126 = L_125->get_address_of_Pt_1();
		int64_t L_127 = L_126->get_Y_1();
		IntPoint_t2327573135  L_128 = ___Pt4;
		int64_t L_129 = L_128.get_Y_1();
		G_B46_0 = ((((int64_t)L_127) == ((int64_t)L_129))? 1 : 0);
		goto IL_0259;
	}

IL_0258:
	{
		G_B46_0 = 0;
	}

IL_0259:
	{
		V_12 = (bool)G_B46_0;
		bool L_130 = V_12;
		if (L_130)
		{
			goto IL_01ff;
		}
	}
	{
		bool L_131 = ___DiscardLeft5;
		if (!L_131)
		{
			goto IL_027c;
		}
	}
	{
		OutPt_t2591102706 * L_132 = ___op22;
		NullCheck(L_132);
		IntPoint_t2327573135 * L_133 = L_132->get_address_of_Pt_1();
		int64_t L_134 = L_133->get_X_0();
		IntPoint_t2327573135  L_135 = ___Pt4;
		int64_t L_136 = L_135.get_X_0();
		G_B50_0 = ((((int32_t)((((int64_t)L_134) == ((int64_t)L_136))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_027d;
	}

IL_027c:
	{
		G_B50_0 = 0;
	}

IL_027d:
	{
		V_13 = (bool)G_B50_0;
		bool L_137 = V_13;
		if (!L_137)
		{
			goto IL_028b;
		}
	}
	{
		OutPt_t2591102706 * L_138 = ___op22;
		NullCheck(L_138);
		OutPt_t2591102706 * L_139 = L_138->get_Next_2();
		___op22 = L_139;
	}

IL_028b:
	{
		OutPt_t2591102706 * L_140 = ___op22;
		bool L_141 = ___DiscardLeft5;
		OutPt_t2591102706 * L_142 = Clipper_DupOutPt_m3532774569(__this, L_140, (bool)((((int32_t)L_141) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		___op2b3 = L_142;
		OutPt_t2591102706 * L_143 = ___op2b3;
		NullCheck(L_143);
		IntPoint_t2327573135  L_144 = L_143->get_Pt_1();
		IntPoint_t2327573135  L_145 = ___Pt4;
		bool L_146 = IntPoint_op_Inequality_m2137021658(NULL /*static, unused*/, L_144, L_145, /*hidden argument*/NULL);
		V_14 = L_146;
		bool L_147 = V_14;
		if (!L_147)
		{
			goto IL_02c9;
		}
	}
	{
		OutPt_t2591102706 * L_148 = ___op2b3;
		___op22 = L_148;
		OutPt_t2591102706 * L_149 = ___op22;
		IntPoint_t2327573135  L_150 = ___Pt4;
		NullCheck(L_149);
		L_149->set_Pt_1(L_150);
		OutPt_t2591102706 * L_151 = ___op22;
		bool L_152 = ___DiscardLeft5;
		OutPt_t2591102706 * L_153 = Clipper_DupOutPt_m3532774569(__this, L_151, (bool)((((int32_t)L_152) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		___op2b3 = L_153;
	}

IL_02c9:
	{
		goto IL_0399;
	}

IL_02d0:
	{
		goto IL_02db;
	}

IL_02d3:
	{
		OutPt_t2591102706 * L_154 = ___op22;
		NullCheck(L_154);
		OutPt_t2591102706 * L_155 = L_154->get_Next_2();
		___op22 = L_155;
	}

IL_02db:
	{
		OutPt_t2591102706 * L_156 = ___op22;
		NullCheck(L_156);
		OutPt_t2591102706 * L_157 = L_156->get_Next_2();
		NullCheck(L_157);
		IntPoint_t2327573135 * L_158 = L_157->get_address_of_Pt_1();
		int64_t L_159 = L_158->get_X_0();
		IntPoint_t2327573135  L_160 = ___Pt4;
		int64_t L_161 = L_160.get_X_0();
		if ((((int64_t)L_159) < ((int64_t)L_161)))
		{
			goto IL_032c;
		}
	}
	{
		OutPt_t2591102706 * L_162 = ___op22;
		NullCheck(L_162);
		OutPt_t2591102706 * L_163 = L_162->get_Next_2();
		NullCheck(L_163);
		IntPoint_t2327573135 * L_164 = L_163->get_address_of_Pt_1();
		int64_t L_165 = L_164->get_X_0();
		OutPt_t2591102706 * L_166 = ___op22;
		NullCheck(L_166);
		IntPoint_t2327573135 * L_167 = L_166->get_address_of_Pt_1();
		int64_t L_168 = L_167->get_X_0();
		if ((((int64_t)L_165) > ((int64_t)L_168)))
		{
			goto IL_032c;
		}
	}
	{
		OutPt_t2591102706 * L_169 = ___op22;
		NullCheck(L_169);
		OutPt_t2591102706 * L_170 = L_169->get_Next_2();
		NullCheck(L_170);
		IntPoint_t2327573135 * L_171 = L_170->get_address_of_Pt_1();
		int64_t L_172 = L_171->get_Y_1();
		IntPoint_t2327573135  L_173 = ___Pt4;
		int64_t L_174 = L_173.get_Y_1();
		G_B61_0 = ((((int64_t)L_172) == ((int64_t)L_174))? 1 : 0);
		goto IL_032d;
	}

IL_032c:
	{
		G_B61_0 = 0;
	}

IL_032d:
	{
		V_15 = (bool)G_B61_0;
		bool L_175 = V_15;
		if (L_175)
		{
			goto IL_02d3;
		}
	}
	{
		bool L_176 = ___DiscardLeft5;
		if (L_176)
		{
			goto IL_0350;
		}
	}
	{
		OutPt_t2591102706 * L_177 = ___op22;
		NullCheck(L_177);
		IntPoint_t2327573135 * L_178 = L_177->get_address_of_Pt_1();
		int64_t L_179 = L_178->get_X_0();
		IntPoint_t2327573135  L_180 = ___Pt4;
		int64_t L_181 = L_180.get_X_0();
		G_B65_0 = ((((int32_t)((((int64_t)L_179) == ((int64_t)L_181))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0351;
	}

IL_0350:
	{
		G_B65_0 = 0;
	}

IL_0351:
	{
		V_16 = (bool)G_B65_0;
		bool L_182 = V_16;
		if (!L_182)
		{
			goto IL_035f;
		}
	}
	{
		OutPt_t2591102706 * L_183 = ___op22;
		NullCheck(L_183);
		OutPt_t2591102706 * L_184 = L_183->get_Next_2();
		___op22 = L_184;
	}

IL_035f:
	{
		OutPt_t2591102706 * L_185 = ___op22;
		bool L_186 = ___DiscardLeft5;
		OutPt_t2591102706 * L_187 = Clipper_DupOutPt_m3532774569(__this, L_185, L_186, /*hidden argument*/NULL);
		___op2b3 = L_187;
		OutPt_t2591102706 * L_188 = ___op2b3;
		NullCheck(L_188);
		IntPoint_t2327573135  L_189 = L_188->get_Pt_1();
		IntPoint_t2327573135  L_190 = ___Pt4;
		bool L_191 = IntPoint_op_Inequality_m2137021658(NULL /*static, unused*/, L_189, L_190, /*hidden argument*/NULL);
		V_17 = L_191;
		bool L_192 = V_17;
		if (!L_192)
		{
			goto IL_0397;
		}
	}
	{
		OutPt_t2591102706 * L_193 = ___op2b3;
		___op22 = L_193;
		OutPt_t2591102706 * L_194 = ___op22;
		IntPoint_t2327573135  L_195 = ___Pt4;
		NullCheck(L_194);
		L_194->set_Pt_1(L_195);
		OutPt_t2591102706 * L_196 = ___op22;
		bool L_197 = ___DiscardLeft5;
		OutPt_t2591102706 * L_198 = Clipper_DupOutPt_m3532774569(__this, L_196, L_197, /*hidden argument*/NULL);
		___op2b3 = L_198;
	}

IL_0397:
	{
	}

IL_0399:
	{
		int32_t L_199 = V_0;
		bool L_200 = ___DiscardLeft5;
		V_18 = (bool)((((int32_t)((((int32_t)L_199) == ((int32_t)1))? 1 : 0)) == ((int32_t)L_200))? 1 : 0);
		bool L_201 = V_18;
		if (!L_201)
		{
			goto IL_03ca;
		}
	}
	{
		OutPt_t2591102706 * L_202 = ___op10;
		OutPt_t2591102706 * L_203 = ___op22;
		NullCheck(L_202);
		L_202->set_Prev_3(L_203);
		OutPt_t2591102706 * L_204 = ___op22;
		OutPt_t2591102706 * L_205 = ___op10;
		NullCheck(L_204);
		L_204->set_Next_2(L_205);
		OutPt_t2591102706 * L_206 = ___op1b1;
		OutPt_t2591102706 * L_207 = ___op2b3;
		NullCheck(L_206);
		L_206->set_Next_2(L_207);
		OutPt_t2591102706 * L_208 = ___op2b3;
		OutPt_t2591102706 * L_209 = ___op1b1;
		NullCheck(L_208);
		L_208->set_Prev_3(L_209);
		goto IL_03ea;
	}

IL_03ca:
	{
		OutPt_t2591102706 * L_210 = ___op10;
		OutPt_t2591102706 * L_211 = ___op22;
		NullCheck(L_210);
		L_210->set_Next_2(L_211);
		OutPt_t2591102706 * L_212 = ___op22;
		OutPt_t2591102706 * L_213 = ___op10;
		NullCheck(L_212);
		L_212->set_Prev_3(L_213);
		OutPt_t2591102706 * L_214 = ___op1b1;
		OutPt_t2591102706 * L_215 = ___op2b3;
		NullCheck(L_214);
		L_214->set_Prev_3(L_215);
		OutPt_t2591102706 * L_216 = ___op2b3;
		OutPt_t2591102706 * L_217 = ___op1b1;
		NullCheck(L_216);
		L_216->set_Next_2(L_217);
	}

IL_03ea:
	{
		V_3 = (bool)1;
		goto IL_03ee;
	}

IL_03ee:
	{
		bool L_218 = V_3;
		return L_218;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::JoinPoints(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_JoinPoints_m3293732783 (Clipper_t4158555122 * __this, Join_t2349011362 * ___j0, OutRec_t316877671 * ___outRec11, OutRec_t316877671 * ___outRec22, const RuntimeMethod* method)
{
	OutPt_t2591102706 * V_0 = NULL;
	OutPt_t2591102706 * V_1 = NULL;
	OutPt_t2591102706 * V_2 = NULL;
	OutPt_t2591102706 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int64_t V_15 = 0;
	int64_t V_16 = 0;
	IntPoint_t2327573135  V_17;
	memset(&V_17, 0, sizeof(V_17));
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B42_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B57_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B78_0 = 0;
	int32_t G_B87_0 = 0;
	int32_t G_B91_0 = 0;
	int32_t G_B97_0 = 0;
	int32_t G_B101_0 = 0;
	int32_t G_B109_0 = 0;
	int32_t G_B113_0 = 0;
	int32_t G_B119_0 = 0;
	int32_t G_B123_0 = 0;
	int32_t G_B132_0 = 0;
	int32_t G_B134_0 = 0;
	{
		Join_t2349011362 * L_0 = ___j0;
		NullCheck(L_0);
		OutPt_t2591102706 * L_1 = L_0->get_OutPt1_0();
		V_0 = L_1;
		Join_t2349011362 * L_2 = ___j0;
		NullCheck(L_2);
		OutPt_t2591102706 * L_3 = L_2->get_OutPt2_1();
		V_2 = L_3;
		Join_t2349011362 * L_4 = ___j0;
		NullCheck(L_4);
		OutPt_t2591102706 * L_5 = L_4->get_OutPt1_0();
		NullCheck(L_5);
		IntPoint_t2327573135 * L_6 = L_5->get_address_of_Pt_1();
		int64_t L_7 = L_6->get_Y_1();
		Join_t2349011362 * L_8 = ___j0;
		NullCheck(L_8);
		IntPoint_t2327573135 * L_9 = L_8->get_address_of_OffPt_2();
		int64_t L_10 = L_9->get_Y_1();
		V_4 = (bool)((((int64_t)L_7) == ((int64_t)L_10))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		Join_t2349011362 * L_12 = ___j0;
		NullCheck(L_12);
		IntPoint_t2327573135  L_13 = L_12->get_OffPt_2();
		Join_t2349011362 * L_14 = ___j0;
		NullCheck(L_14);
		OutPt_t2591102706 * L_15 = L_14->get_OutPt1_0();
		NullCheck(L_15);
		IntPoint_t2327573135  L_16 = L_15->get_Pt_1();
		bool L_17 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_13, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0062;
		}
	}
	{
		Join_t2349011362 * L_18 = ___j0;
		NullCheck(L_18);
		IntPoint_t2327573135  L_19 = L_18->get_OffPt_2();
		Join_t2349011362 * L_20 = ___j0;
		NullCheck(L_20);
		OutPt_t2591102706 * L_21 = L_20->get_OutPt2_1();
		NullCheck(L_21);
		IntPoint_t2327573135  L_22 = L_21->get_Pt_1();
		bool L_23 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_19, L_22, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_23));
		goto IL_0063;
	}

IL_0062:
	{
		G_B4_0 = 0;
	}

IL_0063:
	{
		V_5 = (bool)G_B4_0;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_01c2;
		}
	}
	{
		OutRec_t316877671 * L_25 = ___outRec11;
		OutRec_t316877671 * L_26 = ___outRec22;
		V_8 = (bool)((((int32_t)((((RuntimeObject*)(OutRec_t316877671 *)L_25) == ((RuntimeObject*)(OutRec_t316877671 *)L_26))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_8;
		if (!L_27)
		{
			goto IL_0082;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_074d;
	}

IL_0082:
	{
		Join_t2349011362 * L_28 = ___j0;
		NullCheck(L_28);
		OutPt_t2591102706 * L_29 = L_28->get_OutPt1_0();
		NullCheck(L_29);
		OutPt_t2591102706 * L_30 = L_29->get_Next_2();
		V_1 = L_30;
		goto IL_0097;
	}

IL_0090:
	{
		OutPt_t2591102706 * L_31 = V_1;
		NullCheck(L_31);
		OutPt_t2591102706 * L_32 = L_31->get_Next_2();
		V_1 = L_32;
	}

IL_0097:
	{
		OutPt_t2591102706 * L_33 = V_1;
		OutPt_t2591102706 * L_34 = V_0;
		if ((((RuntimeObject*)(OutPt_t2591102706 *)L_33) == ((RuntimeObject*)(OutPt_t2591102706 *)L_34)))
		{
			goto IL_00ae;
		}
	}
	{
		OutPt_t2591102706 * L_35 = V_1;
		NullCheck(L_35);
		IntPoint_t2327573135  L_36 = L_35->get_Pt_1();
		Join_t2349011362 * L_37 = ___j0;
		NullCheck(L_37);
		IntPoint_t2327573135  L_38 = L_37->get_OffPt_2();
		bool L_39 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_36, L_38, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_39));
		goto IL_00af;
	}

IL_00ae:
	{
		G_B12_0 = 0;
	}

IL_00af:
	{
		V_10 = (bool)G_B12_0;
		bool L_40 = V_10;
		if (L_40)
		{
			goto IL_0090;
		}
	}
	{
		OutPt_t2591102706 * L_41 = V_1;
		NullCheck(L_41);
		IntPoint_t2327573135 * L_42 = L_41->get_address_of_Pt_1();
		int64_t L_43 = L_42->get_Y_1();
		Join_t2349011362 * L_44 = ___j0;
		NullCheck(L_44);
		IntPoint_t2327573135 * L_45 = L_44->get_address_of_OffPt_2();
		int64_t L_46 = L_45->get_Y_1();
		V_6 = (bool)((((int64_t)L_43) > ((int64_t)L_46))? 1 : 0);
		Join_t2349011362 * L_47 = ___j0;
		NullCheck(L_47);
		OutPt_t2591102706 * L_48 = L_47->get_OutPt2_1();
		NullCheck(L_48);
		OutPt_t2591102706 * L_49 = L_48->get_Next_2();
		V_3 = L_49;
		goto IL_00e4;
	}

IL_00dd:
	{
		OutPt_t2591102706 * L_50 = V_3;
		NullCheck(L_50);
		OutPt_t2591102706 * L_51 = L_50->get_Next_2();
		V_3 = L_51;
	}

IL_00e4:
	{
		OutPt_t2591102706 * L_52 = V_3;
		OutPt_t2591102706 * L_53 = V_2;
		if ((((RuntimeObject*)(OutPt_t2591102706 *)L_52) == ((RuntimeObject*)(OutPt_t2591102706 *)L_53)))
		{
			goto IL_00fb;
		}
	}
	{
		OutPt_t2591102706 * L_54 = V_3;
		NullCheck(L_54);
		IntPoint_t2327573135  L_55 = L_54->get_Pt_1();
		Join_t2349011362 * L_56 = ___j0;
		NullCheck(L_56);
		IntPoint_t2327573135  L_57 = L_56->get_OffPt_2();
		bool L_58 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_55, L_57, /*hidden argument*/NULL);
		G_B18_0 = ((int32_t)(L_58));
		goto IL_00fc;
	}

IL_00fb:
	{
		G_B18_0 = 0;
	}

IL_00fc:
	{
		V_11 = (bool)G_B18_0;
		bool L_59 = V_11;
		if (L_59)
		{
			goto IL_00dd;
		}
	}
	{
		OutPt_t2591102706 * L_60 = V_3;
		NullCheck(L_60);
		IntPoint_t2327573135 * L_61 = L_60->get_address_of_Pt_1();
		int64_t L_62 = L_61->get_Y_1();
		Join_t2349011362 * L_63 = ___j0;
		NullCheck(L_63);
		IntPoint_t2327573135 * L_64 = L_63->get_address_of_OffPt_2();
		int64_t L_65 = L_64->get_Y_1();
		V_7 = (bool)((((int64_t)L_62) > ((int64_t)L_65))? 1 : 0);
		bool L_66 = V_6;
		bool L_67 = V_7;
		V_12 = (bool)((((int32_t)L_66) == ((int32_t)L_67))? 1 : 0);
		bool L_68 = V_12;
		if (!L_68)
		{
			goto IL_0130;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_074d;
	}

IL_0130:
	{
		bool L_69 = V_6;
		V_13 = L_69;
		bool L_70 = V_13;
		if (!L_70)
		{
			goto IL_017d;
		}
	}
	{
		OutPt_t2591102706 * L_71 = V_0;
		OutPt_t2591102706 * L_72 = Clipper_DupOutPt_m3532774569(__this, L_71, (bool)0, /*hidden argument*/NULL);
		V_1 = L_72;
		OutPt_t2591102706 * L_73 = V_2;
		OutPt_t2591102706 * L_74 = Clipper_DupOutPt_m3532774569(__this, L_73, (bool)1, /*hidden argument*/NULL);
		V_3 = L_74;
		OutPt_t2591102706 * L_75 = V_0;
		OutPt_t2591102706 * L_76 = V_2;
		NullCheck(L_75);
		L_75->set_Prev_3(L_76);
		OutPt_t2591102706 * L_77 = V_2;
		OutPt_t2591102706 * L_78 = V_0;
		NullCheck(L_77);
		L_77->set_Next_2(L_78);
		OutPt_t2591102706 * L_79 = V_1;
		OutPt_t2591102706 * L_80 = V_3;
		NullCheck(L_79);
		L_79->set_Next_2(L_80);
		OutPt_t2591102706 * L_81 = V_3;
		OutPt_t2591102706 * L_82 = V_1;
		NullCheck(L_81);
		L_81->set_Prev_3(L_82);
		Join_t2349011362 * L_83 = ___j0;
		OutPt_t2591102706 * L_84 = V_0;
		NullCheck(L_83);
		L_83->set_OutPt1_0(L_84);
		Join_t2349011362 * L_85 = ___j0;
		OutPt_t2591102706 * L_86 = V_1;
		NullCheck(L_85);
		L_85->set_OutPt2_1(L_86);
		V_9 = (bool)1;
		goto IL_074d;
	}

IL_017d:
	{
		OutPt_t2591102706 * L_87 = V_0;
		OutPt_t2591102706 * L_88 = Clipper_DupOutPt_m3532774569(__this, L_87, (bool)1, /*hidden argument*/NULL);
		V_1 = L_88;
		OutPt_t2591102706 * L_89 = V_2;
		OutPt_t2591102706 * L_90 = Clipper_DupOutPt_m3532774569(__this, L_89, (bool)0, /*hidden argument*/NULL);
		V_3 = L_90;
		OutPt_t2591102706 * L_91 = V_0;
		OutPt_t2591102706 * L_92 = V_2;
		NullCheck(L_91);
		L_91->set_Next_2(L_92);
		OutPt_t2591102706 * L_93 = V_2;
		OutPt_t2591102706 * L_94 = V_0;
		NullCheck(L_93);
		L_93->set_Prev_3(L_94);
		OutPt_t2591102706 * L_95 = V_1;
		OutPt_t2591102706 * L_96 = V_3;
		NullCheck(L_95);
		L_95->set_Prev_3(L_96);
		OutPt_t2591102706 * L_97 = V_3;
		OutPt_t2591102706 * L_98 = V_1;
		NullCheck(L_97);
		L_97->set_Next_2(L_98);
		Join_t2349011362 * L_99 = ___j0;
		OutPt_t2591102706 * L_100 = V_0;
		NullCheck(L_99);
		L_99->set_OutPt1_0(L_100);
		Join_t2349011362 * L_101 = ___j0;
		OutPt_t2591102706 * L_102 = V_1;
		NullCheck(L_101);
		L_101->set_OutPt2_1(L_102);
		V_9 = (bool)1;
		goto IL_074d;
	}

IL_01c2:
	{
		bool L_103 = V_4;
		V_14 = L_103;
		bool L_104 = V_14;
		if (!L_104)
		{
			goto IL_04a9;
		}
	}
	{
		OutPt_t2591102706 * L_105 = V_0;
		V_1 = L_105;
		goto IL_01d9;
	}

IL_01d2:
	{
		OutPt_t2591102706 * L_106 = V_0;
		NullCheck(L_106);
		OutPt_t2591102706 * L_107 = L_106->get_Prev_3();
		V_0 = L_107;
	}

IL_01d9:
	{
		OutPt_t2591102706 * L_108 = V_0;
		NullCheck(L_108);
		OutPt_t2591102706 * L_109 = L_108->get_Prev_3();
		NullCheck(L_109);
		IntPoint_t2327573135 * L_110 = L_109->get_address_of_Pt_1();
		int64_t L_111 = L_110->get_Y_1();
		OutPt_t2591102706 * L_112 = V_0;
		NullCheck(L_112);
		IntPoint_t2327573135 * L_113 = L_112->get_address_of_Pt_1();
		int64_t L_114 = L_113->get_Y_1();
		if ((!(((uint64_t)L_111) == ((uint64_t)L_114))))
		{
			goto IL_020d;
		}
	}
	{
		OutPt_t2591102706 * L_115 = V_0;
		NullCheck(L_115);
		OutPt_t2591102706 * L_116 = L_115->get_Prev_3();
		OutPt_t2591102706 * L_117 = V_1;
		if ((((RuntimeObject*)(OutPt_t2591102706 *)L_116) == ((RuntimeObject*)(OutPt_t2591102706 *)L_117)))
		{
			goto IL_020d;
		}
	}
	{
		OutPt_t2591102706 * L_118 = V_0;
		NullCheck(L_118);
		OutPt_t2591102706 * L_119 = L_118->get_Prev_3();
		OutPt_t2591102706 * L_120 = V_2;
		G_B31_0 = ((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_119) == ((RuntimeObject*)(OutPt_t2591102706 *)L_120))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_020e;
	}

IL_020d:
	{
		G_B31_0 = 0;
	}

IL_020e:
	{
		V_19 = (bool)G_B31_0;
		bool L_121 = V_19;
		if (L_121)
		{
			goto IL_01d2;
		}
	}
	{
		goto IL_021d;
	}

IL_0216:
	{
		OutPt_t2591102706 * L_122 = V_1;
		NullCheck(L_122);
		OutPt_t2591102706 * L_123 = L_122->get_Next_2();
		V_1 = L_123;
	}

IL_021d:
	{
		OutPt_t2591102706 * L_124 = V_1;
		NullCheck(L_124);
		OutPt_t2591102706 * L_125 = L_124->get_Next_2();
		NullCheck(L_125);
		IntPoint_t2327573135 * L_126 = L_125->get_address_of_Pt_1();
		int64_t L_127 = L_126->get_Y_1();
		OutPt_t2591102706 * L_128 = V_1;
		NullCheck(L_128);
		IntPoint_t2327573135 * L_129 = L_128->get_address_of_Pt_1();
		int64_t L_130 = L_129->get_Y_1();
		if ((!(((uint64_t)L_127) == ((uint64_t)L_130))))
		{
			goto IL_0251;
		}
	}
	{
		OutPt_t2591102706 * L_131 = V_1;
		NullCheck(L_131);
		OutPt_t2591102706 * L_132 = L_131->get_Next_2();
		OutPt_t2591102706 * L_133 = V_0;
		if ((((RuntimeObject*)(OutPt_t2591102706 *)L_132) == ((RuntimeObject*)(OutPt_t2591102706 *)L_133)))
		{
			goto IL_0251;
		}
	}
	{
		OutPt_t2591102706 * L_134 = V_1;
		NullCheck(L_134);
		OutPt_t2591102706 * L_135 = L_134->get_Next_2();
		OutPt_t2591102706 * L_136 = V_2;
		G_B38_0 = ((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_135) == ((RuntimeObject*)(OutPt_t2591102706 *)L_136))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0252;
	}

IL_0251:
	{
		G_B38_0 = 0;
	}

IL_0252:
	{
		V_20 = (bool)G_B38_0;
		bool L_137 = V_20;
		if (L_137)
		{
			goto IL_0216;
		}
	}
	{
		OutPt_t2591102706 * L_138 = V_1;
		NullCheck(L_138);
		OutPt_t2591102706 * L_139 = L_138->get_Next_2();
		OutPt_t2591102706 * L_140 = V_0;
		if ((((RuntimeObject*)(OutPt_t2591102706 *)L_139) == ((RuntimeObject*)(OutPt_t2591102706 *)L_140)))
		{
			goto IL_026c;
		}
	}
	{
		OutPt_t2591102706 * L_141 = V_1;
		NullCheck(L_141);
		OutPt_t2591102706 * L_142 = L_141->get_Next_2();
		OutPt_t2591102706 * L_143 = V_2;
		G_B42_0 = ((((RuntimeObject*)(OutPt_t2591102706 *)L_142) == ((RuntimeObject*)(OutPt_t2591102706 *)L_143))? 1 : 0);
		goto IL_026d;
	}

IL_026c:
	{
		G_B42_0 = 1;
	}

IL_026d:
	{
		V_21 = (bool)G_B42_0;
		bool L_144 = V_21;
		if (!L_144)
		{
			goto IL_027b;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_074d;
	}

IL_027b:
	{
		OutPt_t2591102706 * L_145 = V_2;
		V_3 = L_145;
		goto IL_0286;
	}

IL_027f:
	{
		OutPt_t2591102706 * L_146 = V_2;
		NullCheck(L_146);
		OutPt_t2591102706 * L_147 = L_146->get_Prev_3();
		V_2 = L_147;
	}

IL_0286:
	{
		OutPt_t2591102706 * L_148 = V_2;
		NullCheck(L_148);
		OutPt_t2591102706 * L_149 = L_148->get_Prev_3();
		NullCheck(L_149);
		IntPoint_t2327573135 * L_150 = L_149->get_address_of_Pt_1();
		int64_t L_151 = L_150->get_Y_1();
		OutPt_t2591102706 * L_152 = V_2;
		NullCheck(L_152);
		IntPoint_t2327573135 * L_153 = L_152->get_address_of_Pt_1();
		int64_t L_154 = L_153->get_Y_1();
		if ((!(((uint64_t)L_151) == ((uint64_t)L_154))))
		{
			goto IL_02ba;
		}
	}
	{
		OutPt_t2591102706 * L_155 = V_2;
		NullCheck(L_155);
		OutPt_t2591102706 * L_156 = L_155->get_Prev_3();
		OutPt_t2591102706 * L_157 = V_3;
		if ((((RuntimeObject*)(OutPt_t2591102706 *)L_156) == ((RuntimeObject*)(OutPt_t2591102706 *)L_157)))
		{
			goto IL_02ba;
		}
	}
	{
		OutPt_t2591102706 * L_158 = V_2;
		NullCheck(L_158);
		OutPt_t2591102706 * L_159 = L_158->get_Prev_3();
		OutPt_t2591102706 * L_160 = V_1;
		G_B50_0 = ((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_159) == ((RuntimeObject*)(OutPt_t2591102706 *)L_160))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_02bb;
	}

IL_02ba:
	{
		G_B50_0 = 0;
	}

IL_02bb:
	{
		V_22 = (bool)G_B50_0;
		bool L_161 = V_22;
		if (L_161)
		{
			goto IL_027f;
		}
	}
	{
		goto IL_02ca;
	}

IL_02c3:
	{
		OutPt_t2591102706 * L_162 = V_3;
		NullCheck(L_162);
		OutPt_t2591102706 * L_163 = L_162->get_Next_2();
		V_3 = L_163;
	}

IL_02ca:
	{
		OutPt_t2591102706 * L_164 = V_3;
		NullCheck(L_164);
		OutPt_t2591102706 * L_165 = L_164->get_Next_2();
		NullCheck(L_165);
		IntPoint_t2327573135 * L_166 = L_165->get_address_of_Pt_1();
		int64_t L_167 = L_166->get_Y_1();
		OutPt_t2591102706 * L_168 = V_3;
		NullCheck(L_168);
		IntPoint_t2327573135 * L_169 = L_168->get_address_of_Pt_1();
		int64_t L_170 = L_169->get_Y_1();
		if ((!(((uint64_t)L_167) == ((uint64_t)L_170))))
		{
			goto IL_02fe;
		}
	}
	{
		OutPt_t2591102706 * L_171 = V_3;
		NullCheck(L_171);
		OutPt_t2591102706 * L_172 = L_171->get_Next_2();
		OutPt_t2591102706 * L_173 = V_2;
		if ((((RuntimeObject*)(OutPt_t2591102706 *)L_172) == ((RuntimeObject*)(OutPt_t2591102706 *)L_173)))
		{
			goto IL_02fe;
		}
	}
	{
		OutPt_t2591102706 * L_174 = V_3;
		NullCheck(L_174);
		OutPt_t2591102706 * L_175 = L_174->get_Next_2();
		OutPt_t2591102706 * L_176 = V_0;
		G_B57_0 = ((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_175) == ((RuntimeObject*)(OutPt_t2591102706 *)L_176))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_02ff;
	}

IL_02fe:
	{
		G_B57_0 = 0;
	}

IL_02ff:
	{
		V_23 = (bool)G_B57_0;
		bool L_177 = V_23;
		if (L_177)
		{
			goto IL_02c3;
		}
	}
	{
		OutPt_t2591102706 * L_178 = V_3;
		NullCheck(L_178);
		OutPt_t2591102706 * L_179 = L_178->get_Next_2();
		OutPt_t2591102706 * L_180 = V_2;
		if ((((RuntimeObject*)(OutPt_t2591102706 *)L_179) == ((RuntimeObject*)(OutPt_t2591102706 *)L_180)))
		{
			goto IL_0319;
		}
	}
	{
		OutPt_t2591102706 * L_181 = V_3;
		NullCheck(L_181);
		OutPt_t2591102706 * L_182 = L_181->get_Next_2();
		OutPt_t2591102706 * L_183 = V_0;
		G_B61_0 = ((((RuntimeObject*)(OutPt_t2591102706 *)L_182) == ((RuntimeObject*)(OutPt_t2591102706 *)L_183))? 1 : 0);
		goto IL_031a;
	}

IL_0319:
	{
		G_B61_0 = 1;
	}

IL_031a:
	{
		V_24 = (bool)G_B61_0;
		bool L_184 = V_24;
		if (!L_184)
		{
			goto IL_0328;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_074d;
	}

IL_0328:
	{
		OutPt_t2591102706 * L_185 = V_0;
		NullCheck(L_185);
		IntPoint_t2327573135 * L_186 = L_185->get_address_of_Pt_1();
		int64_t L_187 = L_186->get_X_0();
		OutPt_t2591102706 * L_188 = V_1;
		NullCheck(L_188);
		IntPoint_t2327573135 * L_189 = L_188->get_address_of_Pt_1();
		int64_t L_190 = L_189->get_X_0();
		OutPt_t2591102706 * L_191 = V_2;
		NullCheck(L_191);
		IntPoint_t2327573135 * L_192 = L_191->get_address_of_Pt_1();
		int64_t L_193 = L_192->get_X_0();
		OutPt_t2591102706 * L_194 = V_3;
		NullCheck(L_194);
		IntPoint_t2327573135 * L_195 = L_194->get_address_of_Pt_1();
		int64_t L_196 = L_195->get_X_0();
		bool L_197 = Clipper_GetOverlap_m1773269826(__this, L_187, L_190, L_193, L_196, (int64_t*)(&V_15), (int64_t*)(&V_16), /*hidden argument*/NULL);
		V_25 = (bool)((((int32_t)L_197) == ((int32_t)0))? 1 : 0);
		bool L_198 = V_25;
		if (!L_198)
		{
			goto IL_036f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_074d;
	}

IL_036f:
	{
		OutPt_t2591102706 * L_199 = V_0;
		NullCheck(L_199);
		IntPoint_t2327573135 * L_200 = L_199->get_address_of_Pt_1();
		int64_t L_201 = L_200->get_X_0();
		int64_t L_202 = V_15;
		if ((((int64_t)L_201) < ((int64_t)L_202)))
		{
			goto IL_0392;
		}
	}
	{
		OutPt_t2591102706 * L_203 = V_0;
		NullCheck(L_203);
		IntPoint_t2327573135 * L_204 = L_203->get_address_of_Pt_1();
		int64_t L_205 = L_204->get_X_0();
		int64_t L_206 = V_16;
		G_B68_0 = ((((int32_t)((((int64_t)L_205) > ((int64_t)L_206))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0393;
	}

IL_0392:
	{
		G_B68_0 = 0;
	}

IL_0393:
	{
		V_26 = (bool)G_B68_0;
		bool L_207 = V_26;
		if (!L_207)
		{
			goto IL_03c2;
		}
	}
	{
		OutPt_t2591102706 * L_208 = V_0;
		NullCheck(L_208);
		IntPoint_t2327573135  L_209 = L_208->get_Pt_1();
		V_17 = L_209;
		OutPt_t2591102706 * L_210 = V_0;
		NullCheck(L_210);
		IntPoint_t2327573135 * L_211 = L_210->get_address_of_Pt_1();
		int64_t L_212 = L_211->get_X_0();
		OutPt_t2591102706 * L_213 = V_1;
		NullCheck(L_213);
		IntPoint_t2327573135 * L_214 = L_213->get_address_of_Pt_1();
		int64_t L_215 = L_214->get_X_0();
		V_18 = (bool)((((int64_t)L_212) > ((int64_t)L_215))? 1 : 0);
		goto IL_0486;
	}

IL_03c2:
	{
		OutPt_t2591102706 * L_216 = V_2;
		NullCheck(L_216);
		IntPoint_t2327573135 * L_217 = L_216->get_address_of_Pt_1();
		int64_t L_218 = L_217->get_X_0();
		int64_t L_219 = V_15;
		if ((((int64_t)L_218) < ((int64_t)L_219)))
		{
			goto IL_03e5;
		}
	}
	{
		OutPt_t2591102706 * L_220 = V_2;
		NullCheck(L_220);
		IntPoint_t2327573135 * L_221 = L_220->get_address_of_Pt_1();
		int64_t L_222 = L_221->get_X_0();
		int64_t L_223 = V_16;
		G_B73_0 = ((((int32_t)((((int64_t)L_222) > ((int64_t)L_223))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_03e6;
	}

IL_03e5:
	{
		G_B73_0 = 0;
	}

IL_03e6:
	{
		V_27 = (bool)G_B73_0;
		bool L_224 = V_27;
		if (!L_224)
		{
			goto IL_0412;
		}
	}
	{
		OutPt_t2591102706 * L_225 = V_2;
		NullCheck(L_225);
		IntPoint_t2327573135  L_226 = L_225->get_Pt_1();
		V_17 = L_226;
		OutPt_t2591102706 * L_227 = V_2;
		NullCheck(L_227);
		IntPoint_t2327573135 * L_228 = L_227->get_address_of_Pt_1();
		int64_t L_229 = L_228->get_X_0();
		OutPt_t2591102706 * L_230 = V_3;
		NullCheck(L_230);
		IntPoint_t2327573135 * L_231 = L_230->get_address_of_Pt_1();
		int64_t L_232 = L_231->get_X_0();
		V_18 = (bool)((((int64_t)L_229) > ((int64_t)L_232))? 1 : 0);
		goto IL_0486;
	}

IL_0412:
	{
		OutPt_t2591102706 * L_233 = V_1;
		NullCheck(L_233);
		IntPoint_t2327573135 * L_234 = L_233->get_address_of_Pt_1();
		int64_t L_235 = L_234->get_X_0();
		int64_t L_236 = V_15;
		if ((((int64_t)L_235) < ((int64_t)L_236)))
		{
			goto IL_0435;
		}
	}
	{
		OutPt_t2591102706 * L_237 = V_1;
		NullCheck(L_237);
		IntPoint_t2327573135 * L_238 = L_237->get_address_of_Pt_1();
		int64_t L_239 = L_238->get_X_0();
		int64_t L_240 = V_16;
		G_B78_0 = ((((int32_t)((((int64_t)L_239) > ((int64_t)L_240))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0436;
	}

IL_0435:
	{
		G_B78_0 = 0;
	}

IL_0436:
	{
		V_28 = (bool)G_B78_0;
		bool L_241 = V_28;
		if (!L_241)
		{
			goto IL_0462;
		}
	}
	{
		OutPt_t2591102706 * L_242 = V_1;
		NullCheck(L_242);
		IntPoint_t2327573135  L_243 = L_242->get_Pt_1();
		V_17 = L_243;
		OutPt_t2591102706 * L_244 = V_1;
		NullCheck(L_244);
		IntPoint_t2327573135 * L_245 = L_244->get_address_of_Pt_1();
		int64_t L_246 = L_245->get_X_0();
		OutPt_t2591102706 * L_247 = V_0;
		NullCheck(L_247);
		IntPoint_t2327573135 * L_248 = L_247->get_address_of_Pt_1();
		int64_t L_249 = L_248->get_X_0();
		V_18 = (bool)((((int64_t)L_246) > ((int64_t)L_249))? 1 : 0);
		goto IL_0486;
	}

IL_0462:
	{
		OutPt_t2591102706 * L_250 = V_3;
		NullCheck(L_250);
		IntPoint_t2327573135  L_251 = L_250->get_Pt_1();
		V_17 = L_251;
		OutPt_t2591102706 * L_252 = V_3;
		NullCheck(L_252);
		IntPoint_t2327573135 * L_253 = L_252->get_address_of_Pt_1();
		int64_t L_254 = L_253->get_X_0();
		OutPt_t2591102706 * L_255 = V_2;
		NullCheck(L_255);
		IntPoint_t2327573135 * L_256 = L_255->get_address_of_Pt_1();
		int64_t L_257 = L_256->get_X_0();
		V_18 = (bool)((((int64_t)L_254) > ((int64_t)L_257))? 1 : 0);
	}

IL_0486:
	{
		Join_t2349011362 * L_258 = ___j0;
		OutPt_t2591102706 * L_259 = V_0;
		NullCheck(L_258);
		L_258->set_OutPt1_0(L_259);
		Join_t2349011362 * L_260 = ___j0;
		OutPt_t2591102706 * L_261 = V_2;
		NullCheck(L_260);
		L_260->set_OutPt2_1(L_261);
		OutPt_t2591102706 * L_262 = V_0;
		OutPt_t2591102706 * L_263 = V_1;
		OutPt_t2591102706 * L_264 = V_2;
		OutPt_t2591102706 * L_265 = V_3;
		IntPoint_t2327573135  L_266 = V_17;
		bool L_267 = V_18;
		bool L_268 = Clipper_JoinHorz_m1088565330(__this, L_262, L_263, L_264, L_265, L_266, L_267, /*hidden argument*/NULL);
		V_9 = L_268;
		goto IL_074d;
	}

IL_04a9:
	{
		OutPt_t2591102706 * L_269 = V_0;
		NullCheck(L_269);
		OutPt_t2591102706 * L_270 = L_269->get_Next_2();
		V_1 = L_270;
		goto IL_04ba;
	}

IL_04b3:
	{
		OutPt_t2591102706 * L_271 = V_1;
		NullCheck(L_271);
		OutPt_t2591102706 * L_272 = L_271->get_Next_2();
		V_1 = L_272;
	}

IL_04ba:
	{
		OutPt_t2591102706 * L_273 = V_1;
		NullCheck(L_273);
		IntPoint_t2327573135  L_274 = L_273->get_Pt_1();
		OutPt_t2591102706 * L_275 = V_0;
		NullCheck(L_275);
		IntPoint_t2327573135  L_276 = L_275->get_Pt_1();
		bool L_277 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_274, L_276, /*hidden argument*/NULL);
		if (!L_277)
		{
			goto IL_04d6;
		}
	}
	{
		OutPt_t2591102706 * L_278 = V_1;
		OutPt_t2591102706 * L_279 = V_0;
		G_B87_0 = ((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_278) == ((RuntimeObject*)(OutPt_t2591102706 *)L_279))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_04d7;
	}

IL_04d6:
	{
		G_B87_0 = 0;
	}

IL_04d7:
	{
		V_31 = (bool)G_B87_0;
		bool L_280 = V_31;
		if (L_280)
		{
			goto IL_04b3;
		}
	}
	{
		OutPt_t2591102706 * L_281 = V_1;
		NullCheck(L_281);
		IntPoint_t2327573135 * L_282 = L_281->get_address_of_Pt_1();
		int64_t L_283 = L_282->get_Y_1();
		OutPt_t2591102706 * L_284 = V_0;
		NullCheck(L_284);
		IntPoint_t2327573135 * L_285 = L_284->get_address_of_Pt_1();
		int64_t L_286 = L_285->get_Y_1();
		if ((((int64_t)L_283) > ((int64_t)L_286)))
		{
			goto IL_0517;
		}
	}
	{
		OutPt_t2591102706 * L_287 = V_0;
		NullCheck(L_287);
		IntPoint_t2327573135  L_288 = L_287->get_Pt_1();
		OutPt_t2591102706 * L_289 = V_1;
		NullCheck(L_289);
		IntPoint_t2327573135  L_290 = L_289->get_Pt_1();
		Join_t2349011362 * L_291 = ___j0;
		NullCheck(L_291);
		IntPoint_t2327573135  L_292 = L_291->get_OffPt_2();
		bool L_293 = ((ClipperBase_t2411222589 *)__this)->get_m_UseFullRange_6();
		bool L_294 = ClipperBase_SlopesEqual_m89433242(NULL /*static, unused*/, L_288, L_290, L_292, L_293, /*hidden argument*/NULL);
		G_B91_0 = ((((int32_t)L_294) == ((int32_t)0))? 1 : 0);
		goto IL_0518;
	}

IL_0517:
	{
		G_B91_0 = 1;
	}

IL_0518:
	{
		V_29 = (bool)G_B91_0;
		bool L_295 = V_29;
		V_32 = L_295;
		bool L_296 = V_32;
		if (!L_296)
		{
			goto IL_05a0;
		}
	}
	{
		OutPt_t2591102706 * L_297 = V_0;
		NullCheck(L_297);
		OutPt_t2591102706 * L_298 = L_297->get_Prev_3();
		V_1 = L_298;
		goto IL_0533;
	}

IL_052c:
	{
		OutPt_t2591102706 * L_299 = V_1;
		NullCheck(L_299);
		OutPt_t2591102706 * L_300 = L_299->get_Prev_3();
		V_1 = L_300;
	}

IL_0533:
	{
		OutPt_t2591102706 * L_301 = V_1;
		NullCheck(L_301);
		IntPoint_t2327573135  L_302 = L_301->get_Pt_1();
		OutPt_t2591102706 * L_303 = V_0;
		NullCheck(L_303);
		IntPoint_t2327573135  L_304 = L_303->get_Pt_1();
		bool L_305 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_302, L_304, /*hidden argument*/NULL);
		if (!L_305)
		{
			goto IL_054f;
		}
	}
	{
		OutPt_t2591102706 * L_306 = V_1;
		OutPt_t2591102706 * L_307 = V_0;
		G_B97_0 = ((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_306) == ((RuntimeObject*)(OutPt_t2591102706 *)L_307))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0550;
	}

IL_054f:
	{
		G_B97_0 = 0;
	}

IL_0550:
	{
		V_33 = (bool)G_B97_0;
		bool L_308 = V_33;
		if (L_308)
		{
			goto IL_052c;
		}
	}
	{
		OutPt_t2591102706 * L_309 = V_1;
		NullCheck(L_309);
		IntPoint_t2327573135 * L_310 = L_309->get_address_of_Pt_1();
		int64_t L_311 = L_310->get_Y_1();
		OutPt_t2591102706 * L_312 = V_0;
		NullCheck(L_312);
		IntPoint_t2327573135 * L_313 = L_312->get_address_of_Pt_1();
		int64_t L_314 = L_313->get_Y_1();
		if ((((int64_t)L_311) > ((int64_t)L_314)))
		{
			goto IL_0590;
		}
	}
	{
		OutPt_t2591102706 * L_315 = V_0;
		NullCheck(L_315);
		IntPoint_t2327573135  L_316 = L_315->get_Pt_1();
		OutPt_t2591102706 * L_317 = V_1;
		NullCheck(L_317);
		IntPoint_t2327573135  L_318 = L_317->get_Pt_1();
		Join_t2349011362 * L_319 = ___j0;
		NullCheck(L_319);
		IntPoint_t2327573135  L_320 = L_319->get_OffPt_2();
		bool L_321 = ((ClipperBase_t2411222589 *)__this)->get_m_UseFullRange_6();
		bool L_322 = ClipperBase_SlopesEqual_m89433242(NULL /*static, unused*/, L_316, L_318, L_320, L_321, /*hidden argument*/NULL);
		G_B101_0 = ((((int32_t)L_322) == ((int32_t)0))? 1 : 0);
		goto IL_0591;
	}

IL_0590:
	{
		G_B101_0 = 1;
	}

IL_0591:
	{
		V_34 = (bool)G_B101_0;
		bool L_323 = V_34;
		if (!L_323)
		{
			goto IL_059f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_074d;
	}

IL_059f:
	{
	}

IL_05a0:
	{
		OutPt_t2591102706 * L_324 = V_2;
		NullCheck(L_324);
		OutPt_t2591102706 * L_325 = L_324->get_Next_2();
		V_3 = L_325;
		goto IL_05b1;
	}

IL_05aa:
	{
		OutPt_t2591102706 * L_326 = V_3;
		NullCheck(L_326);
		OutPt_t2591102706 * L_327 = L_326->get_Next_2();
		V_3 = L_327;
	}

IL_05b1:
	{
		OutPt_t2591102706 * L_328 = V_3;
		NullCheck(L_328);
		IntPoint_t2327573135  L_329 = L_328->get_Pt_1();
		OutPt_t2591102706 * L_330 = V_2;
		NullCheck(L_330);
		IntPoint_t2327573135  L_331 = L_330->get_Pt_1();
		bool L_332 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_329, L_331, /*hidden argument*/NULL);
		if (!L_332)
		{
			goto IL_05cd;
		}
	}
	{
		OutPt_t2591102706 * L_333 = V_3;
		OutPt_t2591102706 * L_334 = V_2;
		G_B109_0 = ((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_333) == ((RuntimeObject*)(OutPt_t2591102706 *)L_334))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_05ce;
	}

IL_05cd:
	{
		G_B109_0 = 0;
	}

IL_05ce:
	{
		V_35 = (bool)G_B109_0;
		bool L_335 = V_35;
		if (L_335)
		{
			goto IL_05aa;
		}
	}
	{
		OutPt_t2591102706 * L_336 = V_3;
		NullCheck(L_336);
		IntPoint_t2327573135 * L_337 = L_336->get_address_of_Pt_1();
		int64_t L_338 = L_337->get_Y_1();
		OutPt_t2591102706 * L_339 = V_2;
		NullCheck(L_339);
		IntPoint_t2327573135 * L_340 = L_339->get_address_of_Pt_1();
		int64_t L_341 = L_340->get_Y_1();
		if ((((int64_t)L_338) > ((int64_t)L_341)))
		{
			goto IL_060e;
		}
	}
	{
		OutPt_t2591102706 * L_342 = V_2;
		NullCheck(L_342);
		IntPoint_t2327573135  L_343 = L_342->get_Pt_1();
		OutPt_t2591102706 * L_344 = V_3;
		NullCheck(L_344);
		IntPoint_t2327573135  L_345 = L_344->get_Pt_1();
		Join_t2349011362 * L_346 = ___j0;
		NullCheck(L_346);
		IntPoint_t2327573135  L_347 = L_346->get_OffPt_2();
		bool L_348 = ((ClipperBase_t2411222589 *)__this)->get_m_UseFullRange_6();
		bool L_349 = ClipperBase_SlopesEqual_m89433242(NULL /*static, unused*/, L_343, L_345, L_347, L_348, /*hidden argument*/NULL);
		G_B113_0 = ((((int32_t)L_349) == ((int32_t)0))? 1 : 0);
		goto IL_060f;
	}

IL_060e:
	{
		G_B113_0 = 1;
	}

IL_060f:
	{
		V_30 = (bool)G_B113_0;
		bool L_350 = V_30;
		V_36 = L_350;
		bool L_351 = V_36;
		if (!L_351)
		{
			goto IL_0697;
		}
	}
	{
		OutPt_t2591102706 * L_352 = V_2;
		NullCheck(L_352);
		OutPt_t2591102706 * L_353 = L_352->get_Prev_3();
		V_3 = L_353;
		goto IL_062a;
	}

IL_0623:
	{
		OutPt_t2591102706 * L_354 = V_3;
		NullCheck(L_354);
		OutPt_t2591102706 * L_355 = L_354->get_Prev_3();
		V_3 = L_355;
	}

IL_062a:
	{
		OutPt_t2591102706 * L_356 = V_3;
		NullCheck(L_356);
		IntPoint_t2327573135  L_357 = L_356->get_Pt_1();
		OutPt_t2591102706 * L_358 = V_2;
		NullCheck(L_358);
		IntPoint_t2327573135  L_359 = L_358->get_Pt_1();
		bool L_360 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_357, L_359, /*hidden argument*/NULL);
		if (!L_360)
		{
			goto IL_0646;
		}
	}
	{
		OutPt_t2591102706 * L_361 = V_3;
		OutPt_t2591102706 * L_362 = V_2;
		G_B119_0 = ((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_361) == ((RuntimeObject*)(OutPt_t2591102706 *)L_362))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0647;
	}

IL_0646:
	{
		G_B119_0 = 0;
	}

IL_0647:
	{
		V_37 = (bool)G_B119_0;
		bool L_363 = V_37;
		if (L_363)
		{
			goto IL_0623;
		}
	}
	{
		OutPt_t2591102706 * L_364 = V_3;
		NullCheck(L_364);
		IntPoint_t2327573135 * L_365 = L_364->get_address_of_Pt_1();
		int64_t L_366 = L_365->get_Y_1();
		OutPt_t2591102706 * L_367 = V_2;
		NullCheck(L_367);
		IntPoint_t2327573135 * L_368 = L_367->get_address_of_Pt_1();
		int64_t L_369 = L_368->get_Y_1();
		if ((((int64_t)L_366) > ((int64_t)L_369)))
		{
			goto IL_0687;
		}
	}
	{
		OutPt_t2591102706 * L_370 = V_2;
		NullCheck(L_370);
		IntPoint_t2327573135  L_371 = L_370->get_Pt_1();
		OutPt_t2591102706 * L_372 = V_3;
		NullCheck(L_372);
		IntPoint_t2327573135  L_373 = L_372->get_Pt_1();
		Join_t2349011362 * L_374 = ___j0;
		NullCheck(L_374);
		IntPoint_t2327573135  L_375 = L_374->get_OffPt_2();
		bool L_376 = ((ClipperBase_t2411222589 *)__this)->get_m_UseFullRange_6();
		bool L_377 = ClipperBase_SlopesEqual_m89433242(NULL /*static, unused*/, L_371, L_373, L_375, L_376, /*hidden argument*/NULL);
		G_B123_0 = ((((int32_t)L_377) == ((int32_t)0))? 1 : 0);
		goto IL_0688;
	}

IL_0687:
	{
		G_B123_0 = 1;
	}

IL_0688:
	{
		V_38 = (bool)G_B123_0;
		bool L_378 = V_38;
		if (!L_378)
		{
			goto IL_0696;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_074d;
	}

IL_0696:
	{
	}

IL_0697:
	{
		OutPt_t2591102706 * L_379 = V_1;
		OutPt_t2591102706 * L_380 = V_0;
		if ((((RuntimeObject*)(OutPt_t2591102706 *)L_379) == ((RuntimeObject*)(OutPt_t2591102706 *)L_380)))
		{
			goto IL_06b2;
		}
	}
	{
		OutPt_t2591102706 * L_381 = V_3;
		OutPt_t2591102706 * L_382 = V_2;
		if ((((RuntimeObject*)(OutPt_t2591102706 *)L_381) == ((RuntimeObject*)(OutPt_t2591102706 *)L_382)))
		{
			goto IL_06b2;
		}
	}
	{
		OutPt_t2591102706 * L_383 = V_1;
		OutPt_t2591102706 * L_384 = V_3;
		if ((((RuntimeObject*)(OutPt_t2591102706 *)L_383) == ((RuntimeObject*)(OutPt_t2591102706 *)L_384)))
		{
			goto IL_06b2;
		}
	}
	{
		OutRec_t316877671 * L_385 = ___outRec11;
		OutRec_t316877671 * L_386 = ___outRec22;
		if ((!(((RuntimeObject*)(OutRec_t316877671 *)L_385) == ((RuntimeObject*)(OutRec_t316877671 *)L_386))))
		{
			goto IL_06af;
		}
	}
	{
		bool L_387 = V_29;
		bool L_388 = V_30;
		G_B132_0 = ((((int32_t)L_387) == ((int32_t)L_388))? 1 : 0);
		goto IL_06b0;
	}

IL_06af:
	{
		G_B132_0 = 0;
	}

IL_06b0:
	{
		G_B134_0 = G_B132_0;
		goto IL_06b3;
	}

IL_06b2:
	{
		G_B134_0 = 1;
	}

IL_06b3:
	{
		V_39 = (bool)G_B134_0;
		bool L_389 = V_39;
		if (!L_389)
		{
			goto IL_06c1;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_074d;
	}

IL_06c1:
	{
		bool L_390 = V_29;
		V_40 = L_390;
		bool L_391 = V_40;
		if (!L_391)
		{
			goto IL_070b;
		}
	}
	{
		OutPt_t2591102706 * L_392 = V_0;
		OutPt_t2591102706 * L_393 = Clipper_DupOutPt_m3532774569(__this, L_392, (bool)0, /*hidden argument*/NULL);
		V_1 = L_393;
		OutPt_t2591102706 * L_394 = V_2;
		OutPt_t2591102706 * L_395 = Clipper_DupOutPt_m3532774569(__this, L_394, (bool)1, /*hidden argument*/NULL);
		V_3 = L_395;
		OutPt_t2591102706 * L_396 = V_0;
		OutPt_t2591102706 * L_397 = V_2;
		NullCheck(L_396);
		L_396->set_Prev_3(L_397);
		OutPt_t2591102706 * L_398 = V_2;
		OutPt_t2591102706 * L_399 = V_0;
		NullCheck(L_398);
		L_398->set_Next_2(L_399);
		OutPt_t2591102706 * L_400 = V_1;
		OutPt_t2591102706 * L_401 = V_3;
		NullCheck(L_400);
		L_400->set_Next_2(L_401);
		OutPt_t2591102706 * L_402 = V_3;
		OutPt_t2591102706 * L_403 = V_1;
		NullCheck(L_402);
		L_402->set_Prev_3(L_403);
		Join_t2349011362 * L_404 = ___j0;
		OutPt_t2591102706 * L_405 = V_0;
		NullCheck(L_404);
		L_404->set_OutPt1_0(L_405);
		Join_t2349011362 * L_406 = ___j0;
		OutPt_t2591102706 * L_407 = V_1;
		NullCheck(L_406);
		L_406->set_OutPt2_1(L_407);
		V_9 = (bool)1;
		goto IL_074d;
	}

IL_070b:
	{
		OutPt_t2591102706 * L_408 = V_0;
		OutPt_t2591102706 * L_409 = Clipper_DupOutPt_m3532774569(__this, L_408, (bool)1, /*hidden argument*/NULL);
		V_1 = L_409;
		OutPt_t2591102706 * L_410 = V_2;
		OutPt_t2591102706 * L_411 = Clipper_DupOutPt_m3532774569(__this, L_410, (bool)0, /*hidden argument*/NULL);
		V_3 = L_411;
		OutPt_t2591102706 * L_412 = V_0;
		OutPt_t2591102706 * L_413 = V_2;
		NullCheck(L_412);
		L_412->set_Next_2(L_413);
		OutPt_t2591102706 * L_414 = V_2;
		OutPt_t2591102706 * L_415 = V_0;
		NullCheck(L_414);
		L_414->set_Prev_3(L_415);
		OutPt_t2591102706 * L_416 = V_1;
		OutPt_t2591102706 * L_417 = V_3;
		NullCheck(L_416);
		L_416->set_Prev_3(L_417);
		OutPt_t2591102706 * L_418 = V_3;
		OutPt_t2591102706 * L_419 = V_1;
		NullCheck(L_418);
		L_418->set_Next_2(L_419);
		Join_t2349011362 * L_420 = ___j0;
		OutPt_t2591102706 * L_421 = V_0;
		NullCheck(L_420);
		L_420->set_OutPt1_0(L_421);
		Join_t2349011362 * L_422 = ___j0;
		OutPt_t2591102706 * L_423 = V_1;
		NullCheck(L_422);
		L_422->set_OutPt2_1(L_423);
		V_9 = (bool)1;
		goto IL_074d;
	}

IL_074d:
	{
		bool L_424 = V_9;
		return L_424;
	}
}
// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::PointInPolygon(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt)
extern "C" IL2CPP_METHOD_ATTR int32_t Clipper_PointInPolygon_m3646946292 (RuntimeObject * __this /* static, unused */, IntPoint_t2327573135  ___pt0, OutPt_t2591102706 * ___op1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	OutPt_t2591102706 * V_1 = NULL;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	int64_t V_6 = 0;
	int64_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	double V_14 = 0.0;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	double V_18 = 0.0;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		OutPt_t2591102706 * L_0 = ___op1;
		V_1 = L_0;
		IntPoint_t2327573135  L_1 = ___pt0;
		int64_t L_2 = L_1.get_X_0();
		V_2 = L_2;
		IntPoint_t2327573135  L_3 = ___pt0;
		int64_t L_4 = L_3.get_Y_1();
		V_3 = L_4;
		OutPt_t2591102706 * L_5 = ___op1;
		NullCheck(L_5);
		IntPoint_t2327573135 * L_6 = L_5->get_address_of_Pt_1();
		int64_t L_7 = L_6->get_X_0();
		V_4 = L_7;
		OutPt_t2591102706 * L_8 = ___op1;
		NullCheck(L_8);
		IntPoint_t2327573135 * L_9 = L_8->get_address_of_Pt_1();
		int64_t L_10 = L_9->get_Y_1();
		V_5 = L_10;
	}

IL_002d:
	{
		OutPt_t2591102706 * L_11 = ___op1;
		NullCheck(L_11);
		OutPt_t2591102706 * L_12 = L_11->get_Next_2();
		___op1 = L_12;
		OutPt_t2591102706 * L_13 = ___op1;
		NullCheck(L_13);
		IntPoint_t2327573135 * L_14 = L_13->get_address_of_Pt_1();
		int64_t L_15 = L_14->get_X_0();
		V_6 = L_15;
		OutPt_t2591102706 * L_16 = ___op1;
		NullCheck(L_16);
		IntPoint_t2327573135 * L_17 = L_16->get_address_of_Pt_1();
		int64_t L_18 = L_17->get_Y_1();
		V_7 = L_18;
		int64_t L_19 = V_7;
		int64_t L_20 = V_3;
		V_8 = (bool)((((int64_t)L_19) == ((int64_t)L_20))? 1 : 0);
		bool L_21 = V_8;
		if (!L_21)
		{
			goto IL_0087;
		}
	}
	{
		int64_t L_22 = V_6;
		int64_t L_23 = V_2;
		if ((((int64_t)L_22) == ((int64_t)L_23)))
		{
			goto IL_0077;
		}
	}
	{
		int64_t L_24 = V_5;
		int64_t L_25 = V_3;
		if ((!(((uint64_t)L_24) == ((uint64_t)L_25))))
		{
			goto IL_0074;
		}
	}
	{
		int64_t L_26 = V_6;
		int64_t L_27 = V_2;
		int64_t L_28 = V_4;
		int64_t L_29 = V_2;
		G_B6_0 = ((((int32_t)((((int64_t)L_26) > ((int64_t)L_27))? 1 : 0)) == ((int32_t)((((int64_t)L_28) < ((int64_t)L_29))? 1 : 0)))? 1 : 0);
		goto IL_0075;
	}

IL_0074:
	{
		G_B6_0 = 0;
	}

IL_0075:
	{
		G_B8_0 = G_B6_0;
		goto IL_0078;
	}

IL_0077:
	{
		G_B8_0 = 1;
	}

IL_0078:
	{
		V_9 = (bool)G_B8_0;
		bool L_30 = V_9;
		if (!L_30)
		{
			goto IL_0086;
		}
	}
	{
		V_10 = (-1);
		goto IL_0196;
	}

IL_0086:
	{
	}

IL_0087:
	{
		int64_t L_31 = V_5;
		int64_t L_32 = V_3;
		int64_t L_33 = V_7;
		int64_t L_34 = V_3;
		V_11 = (bool)((((int32_t)((((int32_t)((((int64_t)L_31) < ((int64_t)L_32))? 1 : 0)) == ((int32_t)((((int64_t)L_33) < ((int64_t)L_34))? 1 : 0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_11;
		if (!L_35)
		{
			goto IL_0178;
		}
	}
	{
		int64_t L_36 = V_4;
		int64_t L_37 = V_2;
		V_12 = (bool)((((int32_t)((((int64_t)L_36) < ((int64_t)L_37))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_12;
		if (!L_38)
		{
			goto IL_0118;
		}
	}
	{
		int64_t L_39 = V_6;
		int64_t L_40 = V_2;
		V_13 = (bool)((((int64_t)L_39) > ((int64_t)L_40))? 1 : 0);
		bool L_41 = V_13;
		if (!L_41)
		{
			goto IL_00c0;
		}
	}
	{
		int32_t L_42 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)1, (int32_t)L_42));
		goto IL_0115;
	}

IL_00c0:
	{
		int64_t L_43 = V_4;
		int64_t L_44 = V_2;
		int64_t L_45 = V_7;
		int64_t L_46 = V_3;
		int64_t L_47 = V_6;
		int64_t L_48 = V_2;
		int64_t L_49 = V_5;
		int64_t L_50 = V_3;
		V_14 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)(((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_43, (int64_t)L_44))))), (double)(((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_45, (int64_t)L_46))))))), (double)((double)il2cpp_codegen_multiply((double)(((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_47, (int64_t)L_48))))), (double)(((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_49, (int64_t)L_50)))))))));
		double L_51 = V_14;
		V_15 = (bool)((((double)L_51) == ((double)(0.0)))? 1 : 0);
		bool L_52 = V_15;
		if (!L_52)
		{
			goto IL_00f5;
		}
	}
	{
		V_10 = (-1);
		goto IL_0196;
	}

IL_00f5:
	{
		double L_53 = V_14;
		int64_t L_54 = V_7;
		int64_t L_55 = V_5;
		V_16 = (bool)((((int32_t)((((double)L_53) > ((double)(0.0)))? 1 : 0)) == ((int32_t)((((int64_t)L_54) > ((int64_t)L_55))? 1 : 0)))? 1 : 0);
		bool L_56 = V_16;
		if (!L_56)
		{
			goto IL_0114;
		}
	}
	{
		int32_t L_57 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)1, (int32_t)L_57));
	}

IL_0114:
	{
	}

IL_0115:
	{
		goto IL_0177;
	}

IL_0118:
	{
		int64_t L_58 = V_6;
		int64_t L_59 = V_2;
		V_17 = (bool)((((int64_t)L_58) > ((int64_t)L_59))? 1 : 0);
		bool L_60 = V_17;
		if (!L_60)
		{
			goto IL_0176;
		}
	}
	{
		int64_t L_61 = V_4;
		int64_t L_62 = V_2;
		int64_t L_63 = V_7;
		int64_t L_64 = V_3;
		int64_t L_65 = V_6;
		int64_t L_66 = V_2;
		int64_t L_67 = V_5;
		int64_t L_68 = V_3;
		V_18 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)(((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_61, (int64_t)L_62))))), (double)(((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_63, (int64_t)L_64))))))), (double)((double)il2cpp_codegen_multiply((double)(((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_65, (int64_t)L_66))))), (double)(((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_67, (int64_t)L_68)))))))));
		double L_69 = V_18;
		V_19 = (bool)((((double)L_69) == ((double)(0.0)))? 1 : 0);
		bool L_70 = V_19;
		if (!L_70)
		{
			goto IL_0156;
		}
	}
	{
		V_10 = (-1);
		goto IL_0196;
	}

IL_0156:
	{
		double L_71 = V_18;
		int64_t L_72 = V_7;
		int64_t L_73 = V_5;
		V_20 = (bool)((((int32_t)((((double)L_71) > ((double)(0.0)))? 1 : 0)) == ((int32_t)((((int64_t)L_72) > ((int64_t)L_73))? 1 : 0)))? 1 : 0);
		bool L_74 = V_20;
		if (!L_74)
		{
			goto IL_0175;
		}
	}
	{
		int32_t L_75 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)1, (int32_t)L_75));
	}

IL_0175:
	{
	}

IL_0176:
	{
	}

IL_0177:
	{
	}

IL_0178:
	{
		int64_t L_76 = V_6;
		V_4 = L_76;
		int64_t L_77 = V_7;
		V_5 = L_77;
		OutPt_t2591102706 * L_78 = V_1;
		OutPt_t2591102706 * L_79 = ___op1;
		V_21 = (bool)((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_78) == ((RuntimeObject*)(OutPt_t2591102706 *)L_79))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_80 = V_21;
		if (L_80)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_81 = V_0;
		V_10 = L_81;
		goto IL_0196;
	}

IL_0196:
	{
		int32_t L_82 = V_10;
		return L_82;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::Poly2ContainsPoly1(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt)
extern "C" IL2CPP_METHOD_ATTR bool Clipper_Poly2ContainsPoly1_m3485490509 (RuntimeObject * __this /* static, unused */, OutPt_t2591102706 * ___outPt10, OutPt_t2591102706 * ___outPt21, const RuntimeMethod* method)
{
	OutPt_t2591102706 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		OutPt_t2591102706 * L_0 = ___outPt10;
		V_0 = L_0;
	}

IL_0003:
	{
		OutPt_t2591102706 * L_1 = V_0;
		NullCheck(L_1);
		IntPoint_t2327573135  L_2 = L_1->get_Pt_1();
		OutPt_t2591102706 * L_3 = ___outPt21;
		int32_t L_4 = Clipper_PointInPolygon_m3646946292(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_5) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_7 = V_1;
		V_3 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		goto IL_003c;
	}

IL_0023:
	{
		OutPt_t2591102706 * L_8 = V_0;
		NullCheck(L_8);
		OutPt_t2591102706 * L_9 = L_8->get_Next_2();
		V_0 = L_9;
		OutPt_t2591102706 * L_10 = V_0;
		OutPt_t2591102706 * L_11 = ___outPt10;
		V_4 = (bool)((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_10) == ((RuntimeObject*)(OutPt_t2591102706 *)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0003;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_003c;
	}

IL_003c:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::FixupFirstLefts1(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR void Clipper_FixupFirstLefts1_m1272006617 (Clipper_t4158555122 * __this, OutRec_t316877671 * ___OldOutRec0, OutRec_t316877671 * ___NewOutRec1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_FixupFirstLefts1_m1272006617_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3678196290  V_0;
	memset(&V_0, 0, sizeof(V_0));
	OutRec_t316877671 * V_1 = NULL;
	OutRec_t316877671 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B5_0 = 0;
	{
		List_1_t1788952413 * L_0 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		NullCheck(L_0);
		Enumerator_t3678196290  L_1 = List_1_GetEnumerator_m3370282004(L_0, /*hidden argument*/List_1_GetEnumerator_m3370282004_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0059;
		}

IL_0010:
		{
			OutRec_t316877671 * L_2 = Enumerator_get_Current_m187002534((Enumerator_t3678196290 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m187002534_RuntimeMethod_var);
			V_1 = L_2;
			OutRec_t316877671 * L_3 = V_1;
			NullCheck(L_3);
			OutRec_t316877671 * L_4 = L_3->get_FirstLeft_3();
			OutRec_t316877671 * L_5 = Clipper_ParseFirstLeft_m184863688(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
			V_2 = L_5;
			OutRec_t316877671 * L_6 = V_1;
			NullCheck(L_6);
			OutPt_t2591102706 * L_7 = L_6->get_Pts_4();
			if (!L_7)
			{
				goto IL_0033;
			}
		}

IL_002d:
		{
			OutRec_t316877671 * L_8 = V_2;
			OutRec_t316877671 * L_9 = ___OldOutRec0;
			G_B5_0 = ((((RuntimeObject*)(OutRec_t316877671 *)L_8) == ((RuntimeObject*)(OutRec_t316877671 *)L_9))? 1 : 0);
			goto IL_0034;
		}

IL_0033:
		{
			G_B5_0 = 0;
		}

IL_0034:
		{
			V_3 = (bool)G_B5_0;
			bool L_10 = V_3;
			if (!L_10)
			{
				goto IL_0058;
			}
		}

IL_0038:
		{
			OutRec_t316877671 * L_11 = V_1;
			NullCheck(L_11);
			OutPt_t2591102706 * L_12 = L_11->get_Pts_4();
			OutRec_t316877671 * L_13 = ___NewOutRec1;
			NullCheck(L_13);
			OutPt_t2591102706 * L_14 = L_13->get_Pts_4();
			bool L_15 = Clipper_Poly2ContainsPoly1_m3485490509(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
			V_4 = L_15;
			bool L_16 = V_4;
			if (!L_16)
			{
				goto IL_0057;
			}
		}

IL_0050:
		{
			OutRec_t316877671 * L_17 = V_1;
			OutRec_t316877671 * L_18 = ___NewOutRec1;
			NullCheck(L_17);
			L_17->set_FirstLeft_3(L_18);
		}

IL_0057:
		{
		}

IL_0058:
		{
		}

IL_0059:
		{
			bool L_19 = Enumerator_MoveNext_m46597772((Enumerator_t3678196290 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m46597772_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_0010;
			}
		}

IL_0062:
		{
			IL2CPP_LEAVE(0x73, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1989455672((Enumerator_t3678196290 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m1989455672_RuntimeMethod_var);
		IL2CPP_END_FINALLY(100)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_JUMP_TBL(0x73, IL_0073)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0073:
	{
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::FixupFirstLefts2(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR void Clipper_FixupFirstLefts2_m1781451389 (Clipper_t4158555122 * __this, OutRec_t316877671 * ___innerOutRec0, OutRec_t316877671 * ___outerOutRec1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_FixupFirstLefts2_m1781451389_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OutRec_t316877671 * V_0 = NULL;
	Enumerator_t3678196290  V_1;
	memset(&V_1, 0, sizeof(V_1));
	OutRec_t316877671 * V_2 = NULL;
	OutRec_t316877671 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B6_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B21_0 = 0;
	{
		OutRec_t316877671 * L_0 = ___outerOutRec1;
		NullCheck(L_0);
		OutRec_t316877671 * L_1 = L_0->get_FirstLeft_3();
		V_0 = L_1;
		List_1_t1788952413 * L_2 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		NullCheck(L_2);
		Enumerator_t3678196290  L_3 = List_1_GetEnumerator_m3370282004(L_2, /*hidden argument*/List_1_GetEnumerator_m3370282004_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ca;
		}

IL_001a:
		{
			OutRec_t316877671 * L_4 = Enumerator_get_Current_m187002534((Enumerator_t3678196290 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m187002534_RuntimeMethod_var);
			V_2 = L_4;
			OutRec_t316877671 * L_5 = V_2;
			NullCheck(L_5);
			OutPt_t2591102706 * L_6 = L_5->get_Pts_4();
			if (!L_6)
			{
				goto IL_0035;
			}
		}

IL_002b:
		{
			OutRec_t316877671 * L_7 = V_2;
			OutRec_t316877671 * L_8 = ___outerOutRec1;
			if ((((RuntimeObject*)(OutRec_t316877671 *)L_7) == ((RuntimeObject*)(OutRec_t316877671 *)L_8)))
			{
				goto IL_0035;
			}
		}

IL_002f:
		{
			OutRec_t316877671 * L_9 = V_2;
			OutRec_t316877671 * L_10 = ___innerOutRec0;
			G_B6_0 = ((((RuntimeObject*)(OutRec_t316877671 *)L_9) == ((RuntimeObject*)(OutRec_t316877671 *)L_10))? 1 : 0);
			goto IL_0036;
		}

IL_0035:
		{
			G_B6_0 = 1;
		}

IL_0036:
		{
			V_4 = (bool)G_B6_0;
			bool L_11 = V_4;
			if (!L_11)
			{
				goto IL_0041;
			}
		}

IL_003c:
		{
			goto IL_00ca;
		}

IL_0041:
		{
			OutRec_t316877671 * L_12 = V_2;
			NullCheck(L_12);
			OutRec_t316877671 * L_13 = L_12->get_FirstLeft_3();
			OutRec_t316877671 * L_14 = Clipper_ParseFirstLeft_m184863688(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
			V_3 = L_14;
			OutRec_t316877671 * L_15 = V_3;
			OutRec_t316877671 * L_16 = V_0;
			if ((((RuntimeObject*)(OutRec_t316877671 *)L_15) == ((RuntimeObject*)(OutRec_t316877671 *)L_16)))
			{
				goto IL_005e;
			}
		}

IL_0051:
		{
			OutRec_t316877671 * L_17 = V_3;
			OutRec_t316877671 * L_18 = ___innerOutRec0;
			if ((((RuntimeObject*)(OutRec_t316877671 *)L_17) == ((RuntimeObject*)(OutRec_t316877671 *)L_18)))
			{
				goto IL_005e;
			}
		}

IL_0055:
		{
			OutRec_t316877671 * L_19 = V_3;
			OutRec_t316877671 * L_20 = ___outerOutRec1;
			G_B12_0 = ((((int32_t)((((RuntimeObject*)(OutRec_t316877671 *)L_19) == ((RuntimeObject*)(OutRec_t316877671 *)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_005f;
		}

IL_005e:
		{
			G_B12_0 = 0;
		}

IL_005f:
		{
			V_5 = (bool)G_B12_0;
			bool L_21 = V_5;
			if (!L_21)
			{
				goto IL_0067;
			}
		}

IL_0065:
		{
			goto IL_00ca;
		}

IL_0067:
		{
			OutRec_t316877671 * L_22 = V_2;
			NullCheck(L_22);
			OutPt_t2591102706 * L_23 = L_22->get_Pts_4();
			OutRec_t316877671 * L_24 = ___innerOutRec0;
			NullCheck(L_24);
			OutPt_t2591102706 * L_25 = L_24->get_Pts_4();
			bool L_26 = Clipper_Poly2ContainsPoly1_m3485490509(NULL /*static, unused*/, L_23, L_25, /*hidden argument*/NULL);
			V_6 = L_26;
			bool L_27 = V_6;
			if (!L_27)
			{
				goto IL_0087;
			}
		}

IL_007e:
		{
			OutRec_t316877671 * L_28 = V_2;
			OutRec_t316877671 * L_29 = ___innerOutRec0;
			NullCheck(L_28);
			L_28->set_FirstLeft_3(L_29);
			goto IL_00c9;
		}

IL_0087:
		{
			OutRec_t316877671 * L_30 = V_2;
			NullCheck(L_30);
			OutPt_t2591102706 * L_31 = L_30->get_Pts_4();
			OutRec_t316877671 * L_32 = ___outerOutRec1;
			NullCheck(L_32);
			OutPt_t2591102706 * L_33 = L_32->get_Pts_4();
			bool L_34 = Clipper_Poly2ContainsPoly1_m3485490509(NULL /*static, unused*/, L_31, L_33, /*hidden argument*/NULL);
			V_7 = L_34;
			bool L_35 = V_7;
			if (!L_35)
			{
				goto IL_00a7;
			}
		}

IL_009e:
		{
			OutRec_t316877671 * L_36 = V_2;
			OutRec_t316877671 * L_37 = ___outerOutRec1;
			NullCheck(L_36);
			L_36->set_FirstLeft_3(L_37);
			goto IL_00c9;
		}

IL_00a7:
		{
			OutRec_t316877671 * L_38 = V_2;
			NullCheck(L_38);
			OutRec_t316877671 * L_39 = L_38->get_FirstLeft_3();
			OutRec_t316877671 * L_40 = ___innerOutRec0;
			if ((((RuntimeObject*)(OutRec_t316877671 *)L_39) == ((RuntimeObject*)(OutRec_t316877671 *)L_40)))
			{
				goto IL_00bb;
			}
		}

IL_00b0:
		{
			OutRec_t316877671 * L_41 = V_2;
			NullCheck(L_41);
			OutRec_t316877671 * L_42 = L_41->get_FirstLeft_3();
			OutRec_t316877671 * L_43 = ___outerOutRec1;
			G_B21_0 = ((((RuntimeObject*)(OutRec_t316877671 *)L_42) == ((RuntimeObject*)(OutRec_t316877671 *)L_43))? 1 : 0);
			goto IL_00bc;
		}

IL_00bb:
		{
			G_B21_0 = 1;
		}

IL_00bc:
		{
			V_8 = (bool)G_B21_0;
			bool L_44 = V_8;
			if (!L_44)
			{
				goto IL_00c9;
			}
		}

IL_00c2:
		{
			OutRec_t316877671 * L_45 = V_2;
			OutRec_t316877671 * L_46 = V_0;
			NullCheck(L_45);
			L_45->set_FirstLeft_3(L_46);
		}

IL_00c9:
		{
		}

IL_00ca:
		{
			bool L_47 = Enumerator_MoveNext_m46597772((Enumerator_t3678196290 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m46597772_RuntimeMethod_var);
			if (L_47)
			{
				goto IL_001a;
			}
		}

IL_00d6:
		{
			IL2CPP_LEAVE(0xE7, FINALLY_00d8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d8;
	}

FINALLY_00d8:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1989455672((Enumerator_t3678196290 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m1989455672_RuntimeMethod_var);
		IL2CPP_END_FINALLY(216)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(216)
	{
		IL2CPP_JUMP_TBL(0xE7, IL_00e7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00e7:
	{
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::FixupFirstLefts3(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR void Clipper_FixupFirstLefts3_m2591927432 (Clipper_t4158555122 * __this, OutRec_t316877671 * ___OldOutRec0, OutRec_t316877671 * ___NewOutRec1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_FixupFirstLefts3_m2591927432_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3678196290  V_0;
	memset(&V_0, 0, sizeof(V_0));
	OutRec_t316877671 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B5_0 = 0;
	{
		List_1_t1788952413 * L_0 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		NullCheck(L_0);
		Enumerator_t3678196290  L_1 = List_1_GetEnumerator_m3370282004(L_0, /*hidden argument*/List_1_GetEnumerator_m3370282004_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0039;
		}

IL_0010:
		{
			OutRec_t316877671 * L_2 = Enumerator_get_Current_m187002534((Enumerator_t3678196290 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m187002534_RuntimeMethod_var);
			V_1 = L_2;
			OutRec_t316877671 * L_3 = V_1;
			NullCheck(L_3);
			OutPt_t2591102706 * L_4 = L_3->get_Pts_4();
			if (!L_4)
			{
				goto IL_002c;
			}
		}

IL_0021:
		{
			OutRec_t316877671 * L_5 = V_1;
			NullCheck(L_5);
			OutRec_t316877671 * L_6 = L_5->get_FirstLeft_3();
			OutRec_t316877671 * L_7 = ___OldOutRec0;
			G_B5_0 = ((((RuntimeObject*)(OutRec_t316877671 *)L_6) == ((RuntimeObject*)(OutRec_t316877671 *)L_7))? 1 : 0);
			goto IL_002d;
		}

IL_002c:
		{
			G_B5_0 = 0;
		}

IL_002d:
		{
			V_2 = (bool)G_B5_0;
			bool L_8 = V_2;
			if (!L_8)
			{
				goto IL_0038;
			}
		}

IL_0031:
		{
			OutRec_t316877671 * L_9 = V_1;
			OutRec_t316877671 * L_10 = ___NewOutRec1;
			NullCheck(L_9);
			L_9->set_FirstLeft_3(L_10);
		}

IL_0038:
		{
		}

IL_0039:
		{
			bool L_11 = Enumerator_MoveNext_m46597772((Enumerator_t3678196290 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m46597772_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0010;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x53, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1989455672((Enumerator_t3678196290 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m1989455672_RuntimeMethod_var);
		IL2CPP_END_FINALLY(68)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0053:
	{
		return;
	}
}
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::ParseFirstLeft(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR OutRec_t316877671 * Clipper_ParseFirstLeft_m184863688 (RuntimeObject * __this /* static, unused */, OutRec_t316877671 * ___FirstLeft0, const RuntimeMethod* method)
{
	bool V_0 = false;
	OutRec_t316877671 * V_1 = NULL;
	int32_t G_B5_0 = 0;
	{
		goto IL_000b;
	}

IL_0003:
	{
		OutRec_t316877671 * L_0 = ___FirstLeft0;
		NullCheck(L_0);
		OutRec_t316877671 * L_1 = L_0->get_FirstLeft_3();
		___FirstLeft0 = L_1;
	}

IL_000b:
	{
		OutRec_t316877671 * L_2 = ___FirstLeft0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		OutRec_t316877671 * L_3 = ___FirstLeft0;
		NullCheck(L_3);
		OutPt_t2591102706 * L_4 = L_3->get_Pts_4();
		G_B5_0 = ((((RuntimeObject*)(OutPt_t2591102706 *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B5_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B5_0;
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0003;
		}
	}
	{
		OutRec_t316877671 * L_6 = ___FirstLeft0;
		V_1 = L_6;
		goto IL_0022;
	}

IL_0022:
	{
		OutRec_t316877671 * L_7 = V_1;
		return L_7;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::JoinCommonEdges()
extern "C" IL2CPP_METHOD_ATTR void Clipper_JoinCommonEdges_m2915269750 (Clipper_t4158555122 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_JoinCommonEdges_m2915269750_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Join_t2349011362 * V_2 = NULL;
	OutRec_t316877671 * V_3 = NULL;
	OutRec_t316877671 * V_4 = NULL;
	OutRec_t316877671 * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B9_0 = 0;
	{
		List_1_t3821086104 * L_0 = __this->get_m_Joins_17();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m4197570038(L_0, /*hidden argument*/List_1_get_Count_m4197570038_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_02dc;
	}

IL_0014:
	{
		List_1_t3821086104 * L_2 = __this->get_m_Joins_17();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Join_t2349011362 * L_4 = List_1_get_Item_m1875842425(L_2, L_3, /*hidden argument*/List_1_get_Item_m1875842425_RuntimeMethod_var);
		V_2 = L_4;
		Join_t2349011362 * L_5 = V_2;
		NullCheck(L_5);
		OutPt_t2591102706 * L_6 = L_5->get_OutPt1_0();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_Idx_0();
		OutRec_t316877671 * L_8 = Clipper_GetOutRec_m2429750861(__this, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		Join_t2349011362 * L_9 = V_2;
		NullCheck(L_9);
		OutPt_t2591102706 * L_10 = L_9->get_OutPt2_1();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_Idx_0();
		OutRec_t316877671 * L_12 = Clipper_GetOutRec_m2429750861(__this, L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		OutRec_t316877671 * L_13 = V_3;
		NullCheck(L_13);
		OutPt_t2591102706 * L_14 = L_13->get_Pts_4();
		if (!L_14)
		{
			goto IL_005b;
		}
	}
	{
		OutRec_t316877671 * L_15 = V_4;
		NullCheck(L_15);
		OutPt_t2591102706 * L_16 = L_15->get_Pts_4();
		G_B4_0 = ((((RuntimeObject*)(OutPt_t2591102706 *)L_16) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B4_0 = 1;
	}

IL_005c:
	{
		V_6 = (bool)G_B4_0;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0067;
		}
	}
	{
		goto IL_02d8;
	}

IL_0067:
	{
		OutRec_t316877671 * L_18 = V_3;
		NullCheck(L_18);
		bool L_19 = L_18->get_IsOpen_2();
		if (L_19)
		{
			goto IL_0078;
		}
	}
	{
		OutRec_t316877671 * L_20 = V_4;
		NullCheck(L_20);
		bool L_21 = L_20->get_IsOpen_2();
		G_B9_0 = ((int32_t)(L_21));
		goto IL_0079;
	}

IL_0078:
	{
		G_B9_0 = 1;
	}

IL_0079:
	{
		V_7 = (bool)G_B9_0;
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_0084;
		}
	}
	{
		goto IL_02d8;
	}

IL_0084:
	{
		OutRec_t316877671 * L_23 = V_3;
		OutRec_t316877671 * L_24 = V_4;
		V_8 = (bool)((((RuntimeObject*)(OutRec_t316877671 *)L_23) == ((RuntimeObject*)(OutRec_t316877671 *)L_24))? 1 : 0);
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_0094;
		}
	}
	{
		OutRec_t316877671 * L_26 = V_3;
		V_5 = L_26;
		goto IL_00c8;
	}

IL_0094:
	{
		OutRec_t316877671 * L_27 = V_3;
		OutRec_t316877671 * L_28 = V_4;
		bool L_29 = Clipper_OutRec1RightOfOutRec2_m3908483916(__this, L_27, L_28, /*hidden argument*/NULL);
		V_9 = L_29;
		bool L_30 = V_9;
		if (!L_30)
		{
			goto IL_00a9;
		}
	}
	{
		OutRec_t316877671 * L_31 = V_4;
		V_5 = L_31;
		goto IL_00c8;
	}

IL_00a9:
	{
		OutRec_t316877671 * L_32 = V_4;
		OutRec_t316877671 * L_33 = V_3;
		bool L_34 = Clipper_OutRec1RightOfOutRec2_m3908483916(__this, L_32, L_33, /*hidden argument*/NULL);
		V_10 = L_34;
		bool L_35 = V_10;
		if (!L_35)
		{
			goto IL_00bd;
		}
	}
	{
		OutRec_t316877671 * L_36 = V_3;
		V_5 = L_36;
		goto IL_00c8;
	}

IL_00bd:
	{
		OutRec_t316877671 * L_37 = V_3;
		OutRec_t316877671 * L_38 = V_4;
		OutRec_t316877671 * L_39 = Clipper_GetLowermostRec_m731535806(__this, L_37, L_38, /*hidden argument*/NULL);
		V_5 = L_39;
	}

IL_00c8:
	{
		Join_t2349011362 * L_40 = V_2;
		OutRec_t316877671 * L_41 = V_3;
		OutRec_t316877671 * L_42 = V_4;
		bool L_43 = Clipper_JoinPoints_m3293732783(__this, L_40, L_41, L_42, /*hidden argument*/NULL);
		V_11 = (bool)((((int32_t)L_43) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_11;
		if (!L_44)
		{
			goto IL_00e0;
		}
	}
	{
		goto IL_02d8;
	}

IL_00e0:
	{
		OutRec_t316877671 * L_45 = V_3;
		OutRec_t316877671 * L_46 = V_4;
		V_12 = (bool)((((RuntimeObject*)(OutRec_t316877671 *)L_45) == ((RuntimeObject*)(OutRec_t316877671 *)L_46))? 1 : 0);
		bool L_47 = V_12;
		if (!L_47)
		{
			goto IL_0274;
		}
	}
	{
		OutRec_t316877671 * L_48 = V_3;
		Join_t2349011362 * L_49 = V_2;
		NullCheck(L_49);
		OutPt_t2591102706 * L_50 = L_49->get_OutPt1_0();
		NullCheck(L_48);
		L_48->set_Pts_4(L_50);
		OutRec_t316877671 * L_51 = V_3;
		NullCheck(L_51);
		L_51->set_BottomPt_5((OutPt_t2591102706 *)NULL);
		OutRec_t316877671 * L_52 = ClipperBase_CreateOutRec_m1973586272(__this, /*hidden argument*/NULL);
		V_4 = L_52;
		OutRec_t316877671 * L_53 = V_4;
		Join_t2349011362 * L_54 = V_2;
		NullCheck(L_54);
		OutPt_t2591102706 * L_55 = L_54->get_OutPt2_1();
		NullCheck(L_53);
		L_53->set_Pts_4(L_55);
		OutRec_t316877671 * L_56 = V_4;
		Clipper_UpdateOutPtIdxs_m4256085062(__this, L_56, /*hidden argument*/NULL);
		OutRec_t316877671 * L_57 = V_4;
		NullCheck(L_57);
		OutPt_t2591102706 * L_58 = L_57->get_Pts_4();
		OutRec_t316877671 * L_59 = V_3;
		NullCheck(L_59);
		OutPt_t2591102706 * L_60 = L_59->get_Pts_4();
		bool L_61 = Clipper_Poly2ContainsPoly1_m3485490509(NULL /*static, unused*/, L_58, L_60, /*hidden argument*/NULL);
		V_13 = L_61;
		bool L_62 = V_13;
		if (!L_62)
		{
			goto IL_01a4;
		}
	}
	{
		OutRec_t316877671 * L_63 = V_4;
		OutRec_t316877671 * L_64 = V_3;
		NullCheck(L_64);
		bool L_65 = L_64->get_IsHole_1();
		NullCheck(L_63);
		L_63->set_IsHole_1((bool)((((int32_t)L_65) == ((int32_t)0))? 1 : 0));
		OutRec_t316877671 * L_66 = V_4;
		OutRec_t316877671 * L_67 = V_3;
		NullCheck(L_66);
		L_66->set_FirstLeft_3(L_67);
		bool L_68 = __this->get_m_UsingPolyTree_19();
		V_14 = L_68;
		bool L_69 = V_14;
		if (!L_69)
		{
			goto IL_0167;
		}
	}
	{
		OutRec_t316877671 * L_70 = V_4;
		OutRec_t316877671 * L_71 = V_3;
		Clipper_FixupFirstLefts2_m1781451389(__this, L_70, L_71, /*hidden argument*/NULL);
	}

IL_0167:
	{
		OutRec_t316877671 * L_72 = V_4;
		NullCheck(L_72);
		bool L_73 = L_72->get_IsHole_1();
		bool L_74 = Clipper_get_ReverseSolution_m605749754(__this, /*hidden argument*/NULL);
		OutRec_t316877671 * L_75 = V_4;
		double L_76 = Clipper_Area_m2096448732(__this, L_75, /*hidden argument*/NULL);
		V_15 = (bool)((((int32_t)((int32_t)((int32_t)L_73^(int32_t)L_74))) == ((int32_t)((((double)L_76) > ((double)(0.0)))? 1 : 0)))? 1 : 0);
		bool L_77 = V_15;
		if (!L_77)
		{
			goto IL_019e;
		}
	}
	{
		OutRec_t316877671 * L_78 = V_4;
		NullCheck(L_78);
		OutPt_t2591102706 * L_79 = L_78->get_Pts_4();
		Clipper_ReversePolyPtLinks_m7158408(__this, L_79, /*hidden argument*/NULL);
	}

IL_019e:
	{
		goto IL_0271;
	}

IL_01a4:
	{
		OutRec_t316877671 * L_80 = V_3;
		NullCheck(L_80);
		OutPt_t2591102706 * L_81 = L_80->get_Pts_4();
		OutRec_t316877671 * L_82 = V_4;
		NullCheck(L_82);
		OutPt_t2591102706 * L_83 = L_82->get_Pts_4();
		bool L_84 = Clipper_Poly2ContainsPoly1_m3485490509(NULL /*static, unused*/, L_81, L_83, /*hidden argument*/NULL);
		V_16 = L_84;
		bool L_85 = V_16;
		if (!L_85)
		{
			goto IL_023f;
		}
	}
	{
		OutRec_t316877671 * L_86 = V_4;
		OutRec_t316877671 * L_87 = V_3;
		NullCheck(L_87);
		bool L_88 = L_87->get_IsHole_1();
		NullCheck(L_86);
		L_86->set_IsHole_1(L_88);
		OutRec_t316877671 * L_89 = V_3;
		OutRec_t316877671 * L_90 = V_4;
		NullCheck(L_90);
		bool L_91 = L_90->get_IsHole_1();
		NullCheck(L_89);
		L_89->set_IsHole_1((bool)((((int32_t)L_91) == ((int32_t)0))? 1 : 0));
		OutRec_t316877671 * L_92 = V_4;
		OutRec_t316877671 * L_93 = V_3;
		NullCheck(L_93);
		OutRec_t316877671 * L_94 = L_93->get_FirstLeft_3();
		NullCheck(L_92);
		L_92->set_FirstLeft_3(L_94);
		OutRec_t316877671 * L_95 = V_3;
		OutRec_t316877671 * L_96 = V_4;
		NullCheck(L_95);
		L_95->set_FirstLeft_3(L_96);
		bool L_97 = __this->get_m_UsingPolyTree_19();
		V_17 = L_97;
		bool L_98 = V_17;
		if (!L_98)
		{
			goto IL_0208;
		}
	}
	{
		OutRec_t316877671 * L_99 = V_3;
		OutRec_t316877671 * L_100 = V_4;
		Clipper_FixupFirstLefts2_m1781451389(__this, L_99, L_100, /*hidden argument*/NULL);
	}

IL_0208:
	{
		OutRec_t316877671 * L_101 = V_3;
		NullCheck(L_101);
		bool L_102 = L_101->get_IsHole_1();
		bool L_103 = Clipper_get_ReverseSolution_m605749754(__this, /*hidden argument*/NULL);
		OutRec_t316877671 * L_104 = V_3;
		double L_105 = Clipper_Area_m2096448732(__this, L_104, /*hidden argument*/NULL);
		V_18 = (bool)((((int32_t)((int32_t)((int32_t)L_102^(int32_t)L_103))) == ((int32_t)((((double)L_105) > ((double)(0.0)))? 1 : 0)))? 1 : 0);
		bool L_106 = V_18;
		if (!L_106)
		{
			goto IL_023c;
		}
	}
	{
		OutRec_t316877671 * L_107 = V_3;
		NullCheck(L_107);
		OutPt_t2591102706 * L_108 = L_107->get_Pts_4();
		Clipper_ReversePolyPtLinks_m7158408(__this, L_108, /*hidden argument*/NULL);
	}

IL_023c:
	{
		goto IL_0271;
	}

IL_023f:
	{
		OutRec_t316877671 * L_109 = V_4;
		OutRec_t316877671 * L_110 = V_3;
		NullCheck(L_110);
		bool L_111 = L_110->get_IsHole_1();
		NullCheck(L_109);
		L_109->set_IsHole_1(L_111);
		OutRec_t316877671 * L_112 = V_4;
		OutRec_t316877671 * L_113 = V_3;
		NullCheck(L_113);
		OutRec_t316877671 * L_114 = L_113->get_FirstLeft_3();
		NullCheck(L_112);
		L_112->set_FirstLeft_3(L_114);
		bool L_115 = __this->get_m_UsingPolyTree_19();
		V_19 = L_115;
		bool L_116 = V_19;
		if (!L_116)
		{
			goto IL_0270;
		}
	}
	{
		OutRec_t316877671 * L_117 = V_3;
		OutRec_t316877671 * L_118 = V_4;
		Clipper_FixupFirstLefts1_m1272006617(__this, L_117, L_118, /*hidden argument*/NULL);
	}

IL_0270:
	{
	}

IL_0271:
	{
		goto IL_02d7;
	}

IL_0274:
	{
		OutRec_t316877671 * L_119 = V_4;
		NullCheck(L_119);
		L_119->set_Pts_4((OutPt_t2591102706 *)NULL);
		OutRec_t316877671 * L_120 = V_4;
		NullCheck(L_120);
		L_120->set_BottomPt_5((OutPt_t2591102706 *)NULL);
		OutRec_t316877671 * L_121 = V_4;
		OutRec_t316877671 * L_122 = V_3;
		NullCheck(L_122);
		int32_t L_123 = L_122->get_Idx_0();
		NullCheck(L_121);
		L_121->set_Idx_0(L_123);
		OutRec_t316877671 * L_124 = V_3;
		OutRec_t316877671 * L_125 = V_5;
		NullCheck(L_125);
		bool L_126 = L_125->get_IsHole_1();
		NullCheck(L_124);
		L_124->set_IsHole_1(L_126);
		OutRec_t316877671 * L_127 = V_5;
		OutRec_t316877671 * L_128 = V_4;
		V_20 = (bool)((((RuntimeObject*)(OutRec_t316877671 *)L_127) == ((RuntimeObject*)(OutRec_t316877671 *)L_128))? 1 : 0);
		bool L_129 = V_20;
		if (!L_129)
		{
			goto IL_02b8;
		}
	}
	{
		OutRec_t316877671 * L_130 = V_3;
		OutRec_t316877671 * L_131 = V_4;
		NullCheck(L_131);
		OutRec_t316877671 * L_132 = L_131->get_FirstLeft_3();
		NullCheck(L_130);
		L_130->set_FirstLeft_3(L_132);
	}

IL_02b8:
	{
		OutRec_t316877671 * L_133 = V_4;
		OutRec_t316877671 * L_134 = V_3;
		NullCheck(L_133);
		L_133->set_FirstLeft_3(L_134);
		bool L_135 = __this->get_m_UsingPolyTree_19();
		V_21 = L_135;
		bool L_136 = V_21;
		if (!L_136)
		{
			goto IL_02d6;
		}
	}
	{
		OutRec_t316877671 * L_137 = V_4;
		OutRec_t316877671 * L_138 = V_3;
		Clipper_FixupFirstLefts3_m2591927432(__this, L_137, L_138, /*hidden argument*/NULL);
	}

IL_02d6:
	{
	}

IL_02d7:
	{
	}

IL_02d8:
	{
		int32_t L_139 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)1));
	}

IL_02dc:
	{
		int32_t L_140 = V_1;
		int32_t L_141 = V_0;
		V_22 = (bool)((((int32_t)L_140) < ((int32_t)L_141))? 1 : 0);
		bool L_142 = V_22;
		if (L_142)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::UpdateOutPtIdxs(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR void Clipper_UpdateOutPtIdxs_m4256085062 (Clipper_t4158555122 * __this, OutRec_t316877671 * ___outrec0, const RuntimeMethod* method)
{
	OutPt_t2591102706 * V_0 = NULL;
	bool V_1 = false;
	{
		OutRec_t316877671 * L_0 = ___outrec0;
		NullCheck(L_0);
		OutPt_t2591102706 * L_1 = L_0->get_Pts_4();
		V_0 = L_1;
	}

IL_0008:
	{
		OutPt_t2591102706 * L_2 = V_0;
		OutRec_t316877671 * L_3 = ___outrec0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Idx_0();
		NullCheck(L_2);
		L_2->set_Idx_0(L_4);
		OutPt_t2591102706 * L_5 = V_0;
		NullCheck(L_5);
		OutPt_t2591102706 * L_6 = L_5->get_Prev_3();
		V_0 = L_6;
		OutPt_t2591102706 * L_7 = V_0;
		OutRec_t316877671 * L_8 = ___outrec0;
		NullCheck(L_8);
		OutPt_t2591102706 * L_9 = L_8->get_Pts_4();
		V_1 = (bool)((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_7) == ((RuntimeObject*)(OutPt_t2591102706 *)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::DoSimplePolygons()
extern "C" IL2CPP_METHOD_ATTR void Clipper_DoSimplePolygons_m1601434794 (Clipper_t4158555122 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_DoSimplePolygons_m1601434794_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OutRec_t316877671 * V_1 = NULL;
	OutPt_t2591102706 * V_2 = NULL;
	bool V_3 = false;
	OutPt_t2591102706 * V_4 = NULL;
	bool V_5 = false;
	OutPt_t2591102706 * V_6 = NULL;
	OutPt_t2591102706 * V_7 = NULL;
	OutRec_t316877671 * V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B11_0 = 0;
	{
		V_0 = 0;
		goto IL_01f6;
	}

IL_0008:
	{
		List_1_t1788952413 * L_0 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		OutRec_t316877671 * L_3 = List_1_get_Item_m350034741(L_0, L_2, /*hidden argument*/List_1_get_Item_m350034741_RuntimeMethod_var);
		V_1 = L_3;
		OutRec_t316877671 * L_4 = V_1;
		NullCheck(L_4);
		OutPt_t2591102706 * L_5 = L_4->get_Pts_4();
		V_2 = L_5;
		OutPt_t2591102706 * L_6 = V_2;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		OutRec_t316877671 * L_7 = V_1;
		NullCheck(L_7);
		bool L_8 = L_7->get_IsOpen_2();
		G_B4_0 = ((int32_t)(L_8));
		goto IL_002d;
	}

IL_002c:
	{
		G_B4_0 = 1;
	}

IL_002d:
	{
		V_3 = (bool)G_B4_0;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		goto IL_01f6;
	}

IL_0036:
	{
		OutPt_t2591102706 * L_10 = V_2;
		NullCheck(L_10);
		OutPt_t2591102706 * L_11 = L_10->get_Next_2();
		V_4 = L_11;
		goto IL_01c2;
	}

IL_0044:
	{
		OutPt_t2591102706 * L_12 = V_2;
		NullCheck(L_12);
		IntPoint_t2327573135  L_13 = L_12->get_Pt_1();
		OutPt_t2591102706 * L_14 = V_4;
		NullCheck(L_14);
		IntPoint_t2327573135  L_15 = L_14->get_Pt_1();
		bool L_16 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0072;
		}
	}
	{
		OutPt_t2591102706 * L_17 = V_4;
		NullCheck(L_17);
		OutPt_t2591102706 * L_18 = L_17->get_Next_2();
		OutPt_t2591102706 * L_19 = V_2;
		if ((((RuntimeObject*)(OutPt_t2591102706 *)L_18) == ((RuntimeObject*)(OutPt_t2591102706 *)L_19)))
		{
			goto IL_0072;
		}
	}
	{
		OutPt_t2591102706 * L_20 = V_4;
		NullCheck(L_20);
		OutPt_t2591102706 * L_21 = L_20->get_Prev_3();
		OutPt_t2591102706 * L_22 = V_2;
		G_B11_0 = ((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_21) == ((RuntimeObject*)(OutPt_t2591102706 *)L_22))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0073;
	}

IL_0072:
	{
		G_B11_0 = 0;
	}

IL_0073:
	{
		V_5 = (bool)G_B11_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_01b8;
		}
	}
	{
		OutPt_t2591102706 * L_24 = V_2;
		NullCheck(L_24);
		OutPt_t2591102706 * L_25 = L_24->get_Prev_3();
		V_6 = L_25;
		OutPt_t2591102706 * L_26 = V_4;
		NullCheck(L_26);
		OutPt_t2591102706 * L_27 = L_26->get_Prev_3();
		V_7 = L_27;
		OutPt_t2591102706 * L_28 = V_2;
		OutPt_t2591102706 * L_29 = V_7;
		NullCheck(L_28);
		L_28->set_Prev_3(L_29);
		OutPt_t2591102706 * L_30 = V_7;
		OutPt_t2591102706 * L_31 = V_2;
		NullCheck(L_30);
		L_30->set_Next_2(L_31);
		OutPt_t2591102706 * L_32 = V_4;
		OutPt_t2591102706 * L_33 = V_6;
		NullCheck(L_32);
		L_32->set_Prev_3(L_33);
		OutPt_t2591102706 * L_34 = V_6;
		OutPt_t2591102706 * L_35 = V_4;
		NullCheck(L_34);
		L_34->set_Next_2(L_35);
		OutRec_t316877671 * L_36 = V_1;
		OutPt_t2591102706 * L_37 = V_2;
		NullCheck(L_36);
		L_36->set_Pts_4(L_37);
		OutRec_t316877671 * L_38 = ClipperBase_CreateOutRec_m1973586272(__this, /*hidden argument*/NULL);
		V_8 = L_38;
		OutRec_t316877671 * L_39 = V_8;
		OutPt_t2591102706 * L_40 = V_4;
		NullCheck(L_39);
		L_39->set_Pts_4(L_40);
		OutRec_t316877671 * L_41 = V_8;
		Clipper_UpdateOutPtIdxs_m4256085062(__this, L_41, /*hidden argument*/NULL);
		OutRec_t316877671 * L_42 = V_8;
		NullCheck(L_42);
		OutPt_t2591102706 * L_43 = L_42->get_Pts_4();
		OutRec_t316877671 * L_44 = V_1;
		NullCheck(L_44);
		OutPt_t2591102706 * L_45 = L_44->get_Pts_4();
		bool L_46 = Clipper_Poly2ContainsPoly1_m3485490509(NULL /*static, unused*/, L_43, L_45, /*hidden argument*/NULL);
		V_9 = L_46;
		bool L_47 = V_9;
		if (!L_47)
		{
			goto IL_011e;
		}
	}
	{
		OutRec_t316877671 * L_48 = V_8;
		OutRec_t316877671 * L_49 = V_1;
		NullCheck(L_49);
		bool L_50 = L_49->get_IsHole_1();
		NullCheck(L_48);
		L_48->set_IsHole_1((bool)((((int32_t)L_50) == ((int32_t)0))? 1 : 0));
		OutRec_t316877671 * L_51 = V_8;
		OutRec_t316877671 * L_52 = V_1;
		NullCheck(L_51);
		L_51->set_FirstLeft_3(L_52);
		bool L_53 = __this->get_m_UsingPolyTree_19();
		V_10 = L_53;
		bool L_54 = V_10;
		if (!L_54)
		{
			goto IL_0118;
		}
	}
	{
		OutRec_t316877671 * L_55 = V_8;
		OutRec_t316877671 * L_56 = V_1;
		Clipper_FixupFirstLefts2_m1781451389(__this, L_55, L_56, /*hidden argument*/NULL);
	}

IL_0118:
	{
		goto IL_01b4;
	}

IL_011e:
	{
		OutRec_t316877671 * L_57 = V_1;
		NullCheck(L_57);
		OutPt_t2591102706 * L_58 = L_57->get_Pts_4();
		OutRec_t316877671 * L_59 = V_8;
		NullCheck(L_59);
		OutPt_t2591102706 * L_60 = L_59->get_Pts_4();
		bool L_61 = Clipper_Poly2ContainsPoly1_m3485490509(NULL /*static, unused*/, L_58, L_60, /*hidden argument*/NULL);
		V_11 = L_61;
		bool L_62 = V_11;
		if (!L_62)
		{
			goto IL_0182;
		}
	}
	{
		OutRec_t316877671 * L_63 = V_8;
		OutRec_t316877671 * L_64 = V_1;
		NullCheck(L_64);
		bool L_65 = L_64->get_IsHole_1();
		NullCheck(L_63);
		L_63->set_IsHole_1(L_65);
		OutRec_t316877671 * L_66 = V_1;
		OutRec_t316877671 * L_67 = V_8;
		NullCheck(L_67);
		bool L_68 = L_67->get_IsHole_1();
		NullCheck(L_66);
		L_66->set_IsHole_1((bool)((((int32_t)L_68) == ((int32_t)0))? 1 : 0));
		OutRec_t316877671 * L_69 = V_8;
		OutRec_t316877671 * L_70 = V_1;
		NullCheck(L_70);
		OutRec_t316877671 * L_71 = L_70->get_FirstLeft_3();
		NullCheck(L_69);
		L_69->set_FirstLeft_3(L_71);
		OutRec_t316877671 * L_72 = V_1;
		OutRec_t316877671 * L_73 = V_8;
		NullCheck(L_72);
		L_72->set_FirstLeft_3(L_73);
		bool L_74 = __this->get_m_UsingPolyTree_19();
		V_12 = L_74;
		bool L_75 = V_12;
		if (!L_75)
		{
			goto IL_017f;
		}
	}
	{
		OutRec_t316877671 * L_76 = V_1;
		OutRec_t316877671 * L_77 = V_8;
		Clipper_FixupFirstLefts2_m1781451389(__this, L_76, L_77, /*hidden argument*/NULL);
	}

IL_017f:
	{
		goto IL_01b4;
	}

IL_0182:
	{
		OutRec_t316877671 * L_78 = V_8;
		OutRec_t316877671 * L_79 = V_1;
		NullCheck(L_79);
		bool L_80 = L_79->get_IsHole_1();
		NullCheck(L_78);
		L_78->set_IsHole_1(L_80);
		OutRec_t316877671 * L_81 = V_8;
		OutRec_t316877671 * L_82 = V_1;
		NullCheck(L_82);
		OutRec_t316877671 * L_83 = L_82->get_FirstLeft_3();
		NullCheck(L_81);
		L_81->set_FirstLeft_3(L_83);
		bool L_84 = __this->get_m_UsingPolyTree_19();
		V_13 = L_84;
		bool L_85 = V_13;
		if (!L_85)
		{
			goto IL_01b3;
		}
	}
	{
		OutRec_t316877671 * L_86 = V_1;
		OutRec_t316877671 * L_87 = V_8;
		Clipper_FixupFirstLefts1_m1272006617(__this, L_86, L_87, /*hidden argument*/NULL);
	}

IL_01b3:
	{
	}

IL_01b4:
	{
		OutPt_t2591102706 * L_88 = V_2;
		V_4 = L_88;
	}

IL_01b8:
	{
		OutPt_t2591102706 * L_89 = V_4;
		NullCheck(L_89);
		OutPt_t2591102706 * L_90 = L_89->get_Next_2();
		V_4 = L_90;
	}

IL_01c2:
	{
		OutPt_t2591102706 * L_91 = V_4;
		OutRec_t316877671 * L_92 = V_1;
		NullCheck(L_92);
		OutPt_t2591102706 * L_93 = L_92->get_Pts_4();
		V_14 = (bool)((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_91) == ((RuntimeObject*)(OutPt_t2591102706 *)L_93))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_94 = V_14;
		if (L_94)
		{
			goto IL_0044;
		}
	}
	{
		OutPt_t2591102706 * L_95 = V_2;
		NullCheck(L_95);
		OutPt_t2591102706 * L_96 = L_95->get_Next_2();
		V_2 = L_96;
		OutPt_t2591102706 * L_97 = V_2;
		OutRec_t316877671 * L_98 = V_1;
		NullCheck(L_98);
		OutPt_t2591102706 * L_99 = L_98->get_Pts_4();
		V_15 = (bool)((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_97) == ((RuntimeObject*)(OutPt_t2591102706 *)L_99))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_100 = V_15;
		if (L_100)
		{
			goto IL_0036;
		}
	}
	{
	}

IL_01f6:
	{
		int32_t L_101 = V_0;
		List_1_t1788952413 * L_102 = ((ClipperBase_t2411222589 *)__this)->get_m_PolyOuts_4();
		NullCheck(L_102);
		int32_t L_103 = List_1_get_Count_m4196692370(L_102, /*hidden argument*/List_1_get_Count_m4196692370_RuntimeMethod_var);
		V_16 = (bool)((((int32_t)L_101) < ((int32_t)L_103))? 1 : 0);
		bool L_104 = V_16;
		if (L_104)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Double Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::Area(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec)
extern "C" IL2CPP_METHOD_ATTR double Clipper_Area_m2096448732 (Clipper_t4158555122 * __this, OutRec_t316877671 * ___outRec0, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		OutRec_t316877671 * L_0 = ___outRec0;
		NullCheck(L_0);
		OutPt_t2591102706 * L_1 = L_0->get_Pts_4();
		double L_2 = Clipper_Area_m360288272(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		double L_3 = V_0;
		return L_3;
	}
}
// System.Double Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::Area(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt)
extern "C" IL2CPP_METHOD_ATTR double Clipper_Area_m360288272 (Clipper_t4158555122 * __this, OutPt_t2591102706 * ___op0, const RuntimeMethod* method)
{
	OutPt_t2591102706 * V_0 = NULL;
	double V_1 = 0.0;
	bool V_2 = false;
	double V_3 = 0.0;
	bool V_4 = false;
	{
		OutPt_t2591102706 * L_0 = ___op0;
		V_0 = L_0;
		OutPt_t2591102706 * L_1 = ___op0;
		V_2 = (bool)((((RuntimeObject*)(OutPt_t2591102706 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		V_3 = (0.0);
		goto IL_0084;
	}

IL_0017:
	{
		V_1 = (0.0);
	}

IL_0021:
	{
		double L_3 = V_1;
		OutPt_t2591102706 * L_4 = ___op0;
		NullCheck(L_4);
		OutPt_t2591102706 * L_5 = L_4->get_Prev_3();
		NullCheck(L_5);
		IntPoint_t2327573135 * L_6 = L_5->get_address_of_Pt_1();
		int64_t L_7 = L_6->get_X_0();
		OutPt_t2591102706 * L_8 = ___op0;
		NullCheck(L_8);
		IntPoint_t2327573135 * L_9 = L_8->get_address_of_Pt_1();
		int64_t L_10 = L_9->get_X_0();
		OutPt_t2591102706 * L_11 = ___op0;
		NullCheck(L_11);
		OutPt_t2591102706 * L_12 = L_11->get_Prev_3();
		NullCheck(L_12);
		IntPoint_t2327573135 * L_13 = L_12->get_address_of_Pt_1();
		int64_t L_14 = L_13->get_Y_1();
		OutPt_t2591102706 * L_15 = ___op0;
		NullCheck(L_15);
		IntPoint_t2327573135 * L_16 = L_15->get_address_of_Pt_1();
		int64_t L_17 = L_16->get_Y_1();
		V_1 = ((double)il2cpp_codegen_add((double)L_3, (double)((double)il2cpp_codegen_multiply((double)(((double)((double)((int64_t)il2cpp_codegen_add((int64_t)L_7, (int64_t)L_10))))), (double)(((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_14, (int64_t)L_17)))))))));
		OutPt_t2591102706 * L_18 = ___op0;
		NullCheck(L_18);
		OutPt_t2591102706 * L_19 = L_18->get_Next_2();
		___op0 = L_19;
		OutPt_t2591102706 * L_20 = ___op0;
		OutPt_t2591102706 * L_21 = V_0;
		V_4 = (bool)((((int32_t)((((RuntimeObject*)(OutPt_t2591102706 *)L_20) == ((RuntimeObject*)(OutPt_t2591102706 *)L_21))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_4;
		if (L_22)
		{
			goto IL_0021;
		}
	}
	{
		double L_23 = V_1;
		V_3 = ((double)il2cpp_codegen_multiply((double)L_23, (double)(0.5)));
		goto IL_0084;
	}

IL_0084:
	{
		double L_24 = V_3;
		return L_24;
	}
}
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::PolyTreeToPaths(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyTree)
extern "C" IL2CPP_METHOD_ATTR List_1_t976755323 * Clipper_PolyTreeToPaths_m2508326341 (RuntimeObject * __this /* static, unused */, PolyTree_t3708317675 * ___polytree0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_PolyTreeToPaths_m2508326341_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t976755323 * V_0 = NULL;
	List_1_t976755323 * V_1 = NULL;
	{
		List_1_t976755323 * L_0 = (List_1_t976755323 *)il2cpp_codegen_object_new(List_1_t976755323_il2cpp_TypeInfo_var);
		List_1__ctor_m1623597007(L_0, /*hidden argument*/List_1__ctor_m1623597007_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t976755323 * L_1 = V_0;
		PolyTree_t3708317675 * L_2 = ___polytree0;
		NullCheck(L_2);
		int32_t L_3 = PolyTree_get_Total_m3533407708(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_set_Capacity_m3969153757(L_1, L_3, /*hidden argument*/List_1_set_Capacity_m3969153757_RuntimeMethod_var);
		PolyTree_t3708317675 * L_4 = ___polytree0;
		List_1_t976755323 * L_5 = V_0;
		Clipper_AddPolyNodeToPaths_m3146024136(NULL /*static, unused*/, L_4, 0, L_5, /*hidden argument*/NULL);
		List_1_t976755323 * L_6 = V_0;
		V_1 = L_6;
		goto IL_0021;
	}

IL_0021:
	{
		List_1_t976755323 * L_7 = V_1;
		return L_7;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::AddPolyNodeToPaths(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper/NodeType,System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>)
extern "C" IL2CPP_METHOD_ATTR void Clipper_AddPolyNodeToPaths_m3146024136 (RuntimeObject * __this /* static, unused */, PolyNode_t1300984468 * ___polynode0, int32_t ___nt1, List_1_t976755323 * ___paths2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Clipper_AddPolyNodeToPaths_m3146024136_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	Enumerator_t367335791  V_3;
	memset(&V_3, 0, sizeof(V_3));
	PolyNode_t1300984468 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		int32_t L_0 = ___nt1;
		V_1 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_001f;
	}

IL_0011:
	{
		goto IL_007e;
	}

IL_0013:
	{
		PolyNode_t1300984468 * L_3 = ___polynode0;
		NullCheck(L_3);
		bool L_4 = PolyNode_get_IsOpen_m135974531(L_3, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_001f:
	{
		goto IL_0021;
	}

IL_0021:
	{
		PolyNode_t1300984468 * L_5 = ___polynode0;
		NullCheck(L_5);
		List_1_t3799647877 * L_6 = L_5->get_m_polygon_1();
		NullCheck(L_6);
		int32_t L_7 = List_1_get_Count_m1457723948(L_6, /*hidden argument*/List_1_get_Count_m1457723948_RuntimeMethod_var);
		bool L_8 = V_0;
		V_2 = (bool)((int32_t)((int32_t)((((int32_t)L_7) > ((int32_t)0))? 1 : 0)&(int32_t)L_8));
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		List_1_t976755323 * L_10 = ___paths2;
		PolyNode_t1300984468 * L_11 = ___polynode0;
		NullCheck(L_11);
		List_1_t3799647877 * L_12 = L_11->get_m_polygon_1();
		NullCheck(L_10);
		List_1_Add_m2003227107(L_10, L_12, /*hidden argument*/List_1_Add_m2003227107_RuntimeMethod_var);
	}

IL_0042:
	{
		PolyNode_t1300984468 * L_13 = ___polynode0;
		NullCheck(L_13);
		List_1_t2773059210 * L_14 = PolyNode_get_Childs_m1719303521(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Enumerator_t367335791  L_15 = List_1_GetEnumerator_m1925293548(L_14, /*hidden argument*/List_1_GetEnumerator_m1925293548_RuntimeMethod_var);
		V_3 = L_15;
	}

IL_004f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0064;
		}

IL_0051:
		{
			PolyNode_t1300984468 * L_16 = Enumerator_get_Current_m2674871075((Enumerator_t367335791 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m2674871075_RuntimeMethod_var);
			V_4 = L_16;
			PolyNode_t1300984468 * L_17 = V_4;
			int32_t L_18 = ___nt1;
			List_1_t976755323 * L_19 = ___paths2;
			Clipper_AddPolyNodeToPaths_m3146024136(NULL /*static, unused*/, L_17, L_18, L_19, /*hidden argument*/NULL);
		}

IL_0064:
		{
			bool L_20 = Enumerator_MoveNext_m3894297936((Enumerator_t367335791 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m3894297936_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_0051;
			}
		}

IL_006d:
		{
			IL2CPP_LEAVE(0x7E, FINALLY_006f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006f;
	}

FINALLY_006f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2177275941((Enumerator_t367335791 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m2177275941_RuntimeMethod_var);
		IL2CPP_END_FINALLY(111)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(111)
	{
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007e:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::get_PreserveCollinear()
extern "C" IL2CPP_METHOD_ATTR bool ClipperBase_get_PreserveCollinear_m3706547670 (ClipperBase_t2411222589 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CPreserveCollinearU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::set_PreserveCollinear(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_set_PreserveCollinear_m475506320 (ClipperBase_t2411222589 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CPreserveCollinearU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::Swap(System.Int64&,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_Swap_m3891450181 (ClipperBase_t2411222589 * __this, int64_t* ___val10, int64_t* ___val21, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		int64_t* L_0 = ___val10;
		V_0 = (*((int64_t*)L_0));
		int64_t* L_1 = ___val10;
		int64_t* L_2 = ___val21;
		*((int64_t*)(L_1)) = (int64_t)(*((int64_t*)L_2));
		int64_t* L_3 = ___val21;
		int64_t L_4 = V_0;
		*((int64_t*)(L_3)) = (int64_t)L_4;
		return;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::IsHorizontal(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR bool ClipperBase_IsHorizontal_m234918052 (RuntimeObject * __this /* static, unused */, TEdge_t1694054893 * ___e0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TEdge_t1694054893 * L_0 = ___e0;
		NullCheck(L_0);
		IntPoint_t2327573135 * L_1 = L_0->get_address_of_Delta_3();
		int64_t L_2 = L_1->get_Y_1();
		V_0 = (bool)((((int64_t)L_2) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		goto IL_0013;
	}

IL_0013:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::SlopesEqual(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ClipperBase_SlopesEqual_m2620772186 (RuntimeObject * __this /* static, unused */, TEdge_t1694054893 * ___e10, TEdge_t1694054893 * ___e21, bool ___UseFullRange2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = ___UseFullRange2;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		TEdge_t1694054893 * L_2 = ___e10;
		NullCheck(L_2);
		IntPoint_t2327573135 * L_3 = L_2->get_address_of_Delta_3();
		int64_t L_4 = L_3->get_Y_1();
		TEdge_t1694054893 * L_5 = ___e21;
		NullCheck(L_5);
		IntPoint_t2327573135 * L_6 = L_5->get_address_of_Delta_3();
		int64_t L_7 = L_6->get_X_0();
		Int128_t2615162842  L_8 = Int128_Int128Mul_m3068794394(NULL /*static, unused*/, L_4, L_7, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_9 = ___e10;
		NullCheck(L_9);
		IntPoint_t2327573135 * L_10 = L_9->get_address_of_Delta_3();
		int64_t L_11 = L_10->get_X_0();
		TEdge_t1694054893 * L_12 = ___e21;
		NullCheck(L_12);
		IntPoint_t2327573135 * L_13 = L_12->get_address_of_Delta_3();
		int64_t L_14 = L_13->get_Y_1();
		Int128_t2615162842  L_15 = Int128_Int128Mul_m3068794394(NULL /*static, unused*/, L_11, L_14, /*hidden argument*/NULL);
		bool L_16 = Int128_op_Equality_m3178062132(NULL /*static, unused*/, L_8, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		goto IL_0077;
	}

IL_0044:
	{
		TEdge_t1694054893 * L_17 = ___e10;
		NullCheck(L_17);
		IntPoint_t2327573135 * L_18 = L_17->get_address_of_Delta_3();
		int64_t L_19 = L_18->get_Y_1();
		TEdge_t1694054893 * L_20 = ___e21;
		NullCheck(L_20);
		IntPoint_t2327573135 * L_21 = L_20->get_address_of_Delta_3();
		int64_t L_22 = L_21->get_X_0();
		TEdge_t1694054893 * L_23 = ___e10;
		NullCheck(L_23);
		IntPoint_t2327573135 * L_24 = L_23->get_address_of_Delta_3();
		int64_t L_25 = L_24->get_X_0();
		TEdge_t1694054893 * L_26 = ___e21;
		NullCheck(L_26);
		IntPoint_t2327573135 * L_27 = L_26->get_address_of_Delta_3();
		int64_t L_28 = L_27->get_Y_1();
		V_1 = (bool)((((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_19, (int64_t)L_22))) == ((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_25, (int64_t)L_28))))? 1 : 0);
		goto IL_0077;
	}

IL_0077:
	{
		bool L_29 = V_1;
		return L_29;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::SlopesEqual(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ClipperBase_SlopesEqual_m89433242 (RuntimeObject * __this /* static, unused */, IntPoint_t2327573135  ___pt10, IntPoint_t2327573135  ___pt21, IntPoint_t2327573135  ___pt32, bool ___UseFullRange3, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = ___UseFullRange3;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		IntPoint_t2327573135  L_2 = ___pt10;
		int64_t L_3 = L_2.get_Y_1();
		IntPoint_t2327573135  L_4 = ___pt21;
		int64_t L_5 = L_4.get_Y_1();
		IntPoint_t2327573135  L_6 = ___pt21;
		int64_t L_7 = L_6.get_X_0();
		IntPoint_t2327573135  L_8 = ___pt32;
		int64_t L_9 = L_8.get_X_0();
		Int128_t2615162842  L_10 = Int128_Int128Mul_m3068794394(NULL /*static, unused*/, ((int64_t)il2cpp_codegen_subtract((int64_t)L_3, (int64_t)L_5)), ((int64_t)il2cpp_codegen_subtract((int64_t)L_7, (int64_t)L_9)), /*hidden argument*/NULL);
		IntPoint_t2327573135  L_11 = ___pt10;
		int64_t L_12 = L_11.get_X_0();
		IntPoint_t2327573135  L_13 = ___pt21;
		int64_t L_14 = L_13.get_X_0();
		IntPoint_t2327573135  L_15 = ___pt21;
		int64_t L_16 = L_15.get_Y_1();
		IntPoint_t2327573135  L_17 = ___pt32;
		int64_t L_18 = L_17.get_Y_1();
		Int128_t2615162842  L_19 = Int128_Int128Mul_m3068794394(NULL /*static, unused*/, ((int64_t)il2cpp_codegen_subtract((int64_t)L_12, (int64_t)L_14)), ((int64_t)il2cpp_codegen_subtract((int64_t)L_16, (int64_t)L_18)), /*hidden argument*/NULL);
		bool L_20 = Int128_op_Equality_m3178062132(NULL /*static, unused*/, L_10, L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		goto IL_008a;
	}

IL_004c:
	{
		IntPoint_t2327573135  L_21 = ___pt10;
		int64_t L_22 = L_21.get_Y_1();
		IntPoint_t2327573135  L_23 = ___pt21;
		int64_t L_24 = L_23.get_Y_1();
		IntPoint_t2327573135  L_25 = ___pt21;
		int64_t L_26 = L_25.get_X_0();
		IntPoint_t2327573135  L_27 = ___pt32;
		int64_t L_28 = L_27.get_X_0();
		IntPoint_t2327573135  L_29 = ___pt10;
		int64_t L_30 = L_29.get_X_0();
		IntPoint_t2327573135  L_31 = ___pt21;
		int64_t L_32 = L_31.get_X_0();
		IntPoint_t2327573135  L_33 = ___pt21;
		int64_t L_34 = L_33.get_Y_1();
		IntPoint_t2327573135  L_35 = ___pt32;
		int64_t L_36 = L_35.get_Y_1();
		V_1 = (bool)((((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_22, (int64_t)L_24)), (int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_26, (int64_t)L_28)))), (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_30, (int64_t)L_32)), (int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_34, (int64_t)L_36))))))) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		goto IL_008a;
	}

IL_008a:
	{
		bool L_37 = V_1;
		return L_37;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::SlopesEqual(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ClipperBase_SlopesEqual_m2195603954 (RuntimeObject * __this /* static, unused */, IntPoint_t2327573135  ___pt10, IntPoint_t2327573135  ___pt21, IntPoint_t2327573135  ___pt32, IntPoint_t2327573135  ___pt43, bool ___UseFullRange4, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = ___UseFullRange4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		IntPoint_t2327573135  L_2 = ___pt10;
		int64_t L_3 = L_2.get_Y_1();
		IntPoint_t2327573135  L_4 = ___pt21;
		int64_t L_5 = L_4.get_Y_1();
		IntPoint_t2327573135  L_6 = ___pt32;
		int64_t L_7 = L_6.get_X_0();
		IntPoint_t2327573135  L_8 = ___pt43;
		int64_t L_9 = L_8.get_X_0();
		Int128_t2615162842  L_10 = Int128_Int128Mul_m3068794394(NULL /*static, unused*/, ((int64_t)il2cpp_codegen_subtract((int64_t)L_3, (int64_t)L_5)), ((int64_t)il2cpp_codegen_subtract((int64_t)L_7, (int64_t)L_9)), /*hidden argument*/NULL);
		IntPoint_t2327573135  L_11 = ___pt10;
		int64_t L_12 = L_11.get_X_0();
		IntPoint_t2327573135  L_13 = ___pt21;
		int64_t L_14 = L_13.get_X_0();
		IntPoint_t2327573135  L_15 = ___pt32;
		int64_t L_16 = L_15.get_Y_1();
		IntPoint_t2327573135  L_17 = ___pt43;
		int64_t L_18 = L_17.get_Y_1();
		Int128_t2615162842  L_19 = Int128_Int128Mul_m3068794394(NULL /*static, unused*/, ((int64_t)il2cpp_codegen_subtract((int64_t)L_12, (int64_t)L_14)), ((int64_t)il2cpp_codegen_subtract((int64_t)L_16, (int64_t)L_18)), /*hidden argument*/NULL);
		bool L_20 = Int128_op_Equality_m3178062132(NULL /*static, unused*/, L_10, L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		goto IL_008b;
	}

IL_004d:
	{
		IntPoint_t2327573135  L_21 = ___pt10;
		int64_t L_22 = L_21.get_Y_1();
		IntPoint_t2327573135  L_23 = ___pt21;
		int64_t L_24 = L_23.get_Y_1();
		IntPoint_t2327573135  L_25 = ___pt32;
		int64_t L_26 = L_25.get_X_0();
		IntPoint_t2327573135  L_27 = ___pt43;
		int64_t L_28 = L_27.get_X_0();
		IntPoint_t2327573135  L_29 = ___pt10;
		int64_t L_30 = L_29.get_X_0();
		IntPoint_t2327573135  L_31 = ___pt21;
		int64_t L_32 = L_31.get_X_0();
		IntPoint_t2327573135  L_33 = ___pt32;
		int64_t L_34 = L_33.get_Y_1();
		IntPoint_t2327573135  L_35 = ___pt43;
		int64_t L_36 = L_35.get_Y_1();
		V_1 = (bool)((((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_22, (int64_t)L_24)), (int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_26, (int64_t)L_28)))), (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_30, (int64_t)L_32)), (int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_34, (int64_t)L_36))))))) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		goto IL_008b;
	}

IL_008b:
	{
		bool L_37 = V_1;
		return L_37;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ClipperBase__ctor_m2145184280 (ClipperBase_t2411222589 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClipperBase__ctor_m2145184280_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t343237081 * L_0 = (List_1_t343237081 *)il2cpp_codegen_object_new(List_1_t343237081_il2cpp_TypeInfo_var);
		List_1__ctor_m360321660(L_0, /*hidden argument*/List_1__ctor_m360321660_RuntimeMethod_var);
		__this->set_m_edges_2(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_m_MinimaList_0((LocalMinima_t86068969 *)NULL);
		__this->set_m_CurrentLM_1((LocalMinima_t86068969 *)NULL);
		__this->set_m_UseFullRange_6((bool)0);
		__this->set_m_HasOpenPaths_7((bool)0);
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::RangeTest(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_RangeTest_m3418353231 (ClipperBase_t2411222589 * __this, IntPoint_t2327573135  ___Pt0, bool* ___useFullRange1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClipperBase_RangeTest_m3418353231_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		bool* L_0 = ___useFullRange1;
		V_0 = (bool)(*((uint8_t*)L_0));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0063;
		}
	}
	{
		IntPoint_t2327573135  L_2 = ___Pt0;
		int64_t L_3 = L_2.get_X_0();
		if ((((int64_t)L_3) > ((int64_t)((int64_t)4611686018427387903LL))))
		{
			goto IL_0050;
		}
	}
	{
		IntPoint_t2327573135  L_4 = ___Pt0;
		int64_t L_5 = L_4.get_Y_1();
		if ((((int64_t)L_5) > ((int64_t)((int64_t)4611686018427387903LL))))
		{
			goto IL_0050;
		}
	}
	{
		IntPoint_t2327573135  L_6 = ___Pt0;
		int64_t L_7 = L_6.get_X_0();
		if ((((int64_t)((-L_7))) > ((int64_t)((int64_t)4611686018427387903LL))))
		{
			goto IL_0050;
		}
	}
	{
		IntPoint_t2327573135  L_8 = ___Pt0;
		int64_t L_9 = L_8.get_Y_1();
		G_B6_0 = ((((int64_t)((-L_9))) > ((int64_t)((int64_t)4611686018427387903LL)))? 1 : 0);
		goto IL_0051;
	}

IL_0050:
	{
		G_B6_0 = 1;
	}

IL_0051:
	{
		V_1 = (bool)G_B6_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0060;
		}
	}
	{
		ClipperException_t3118674656 * L_11 = (ClipperException_t3118674656 *)il2cpp_codegen_object_new(ClipperException_t3118674656_il2cpp_TypeInfo_var);
		ClipperException__ctor_m1990918546(L_11, _stringLiteral301130788, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, ClipperBase_RangeTest_m3418353231_RuntimeMethod_var);
	}

IL_0060:
	{
		goto IL_00b2;
	}

IL_0063:
	{
		IntPoint_t2327573135  L_12 = ___Pt0;
		int64_t L_13 = L_12.get_X_0();
		if ((((int64_t)L_13) > ((int64_t)(((int64_t)((int64_t)((int32_t)1073741823)))))))
		{
			goto IL_009f;
		}
	}
	{
		IntPoint_t2327573135  L_14 = ___Pt0;
		int64_t L_15 = L_14.get_Y_1();
		if ((((int64_t)L_15) > ((int64_t)(((int64_t)((int64_t)((int32_t)1073741823)))))))
		{
			goto IL_009f;
		}
	}
	{
		IntPoint_t2327573135  L_16 = ___Pt0;
		int64_t L_17 = L_16.get_X_0();
		if ((((int64_t)((-L_17))) > ((int64_t)(((int64_t)((int64_t)((int32_t)1073741823)))))))
		{
			goto IL_009f;
		}
	}
	{
		IntPoint_t2327573135  L_18 = ___Pt0;
		int64_t L_19 = L_18.get_Y_1();
		G_B14_0 = ((((int64_t)((-L_19))) > ((int64_t)(((int64_t)((int64_t)((int32_t)1073741823))))))? 1 : 0);
		goto IL_00a0;
	}

IL_009f:
	{
		G_B14_0 = 1;
	}

IL_00a0:
	{
		V_2 = (bool)G_B14_0;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_00b2;
		}
	}
	{
		bool* L_21 = ___useFullRange1;
		*((int8_t*)(L_21)) = (int8_t)1;
		IntPoint_t2327573135  L_22 = ___Pt0;
		bool* L_23 = ___useFullRange1;
		ClipperBase_RangeTest_m3418353231(__this, L_22, (bool*)L_23, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::InitEdge(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_InitEdge_m4160041665 (ClipperBase_t2411222589 * __this, TEdge_t1694054893 * ___e0, TEdge_t1694054893 * ___eNext1, TEdge_t1694054893 * ___ePrev2, IntPoint_t2327573135  ___pt3, const RuntimeMethod* method)
{
	{
		TEdge_t1694054893 * L_0 = ___e0;
		TEdge_t1694054893 * L_1 = ___eNext1;
		NullCheck(L_0);
		L_0->set_Next_11(L_1);
		TEdge_t1694054893 * L_2 = ___e0;
		TEdge_t1694054893 * L_3 = ___ePrev2;
		NullCheck(L_2);
		L_2->set_Prev_12(L_3);
		TEdge_t1694054893 * L_4 = ___e0;
		IntPoint_t2327573135  L_5 = ___pt3;
		NullCheck(L_4);
		L_4->set_Curr_1(L_5);
		TEdge_t1694054893 * L_6 = ___e0;
		NullCheck(L_6);
		L_6->set_OutIdx_10((-1));
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::InitEdge2(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyType)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_InitEdge2_m4245291815 (ClipperBase_t2411222589 * __this, TEdge_t1694054893 * ___e0, int32_t ___polyType1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TEdge_t1694054893 * L_0 = ___e0;
		NullCheck(L_0);
		IntPoint_t2327573135 * L_1 = L_0->get_address_of_Curr_1();
		int64_t L_2 = L_1->get_Y_1();
		TEdge_t1694054893 * L_3 = ___e0;
		NullCheck(L_3);
		TEdge_t1694054893 * L_4 = L_3->get_Next_11();
		NullCheck(L_4);
		IntPoint_t2327573135 * L_5 = L_4->get_address_of_Curr_1();
		int64_t L_6 = L_5->get_Y_1();
		V_0 = (bool)((((int32_t)((((int64_t)L_2) < ((int64_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		TEdge_t1694054893 * L_8 = ___e0;
		TEdge_t1694054893 * L_9 = ___e0;
		NullCheck(L_9);
		IntPoint_t2327573135  L_10 = L_9->get_Curr_1();
		NullCheck(L_8);
		L_8->set_Bot_0(L_10);
		TEdge_t1694054893 * L_11 = ___e0;
		TEdge_t1694054893 * L_12 = ___e0;
		NullCheck(L_12);
		TEdge_t1694054893 * L_13 = L_12->get_Next_11();
		NullCheck(L_13);
		IntPoint_t2327573135  L_14 = L_13->get_Curr_1();
		NullCheck(L_11);
		L_11->set_Top_2(L_14);
		goto IL_0065;
	}

IL_0046:
	{
		TEdge_t1694054893 * L_15 = ___e0;
		TEdge_t1694054893 * L_16 = ___e0;
		NullCheck(L_16);
		IntPoint_t2327573135  L_17 = L_16->get_Curr_1();
		NullCheck(L_15);
		L_15->set_Top_2(L_17);
		TEdge_t1694054893 * L_18 = ___e0;
		TEdge_t1694054893 * L_19 = ___e0;
		NullCheck(L_19);
		TEdge_t1694054893 * L_20 = L_19->get_Next_11();
		NullCheck(L_20);
		IntPoint_t2327573135  L_21 = L_20->get_Curr_1();
		NullCheck(L_18);
		L_18->set_Bot_0(L_21);
	}

IL_0065:
	{
		TEdge_t1694054893 * L_22 = ___e0;
		ClipperBase_SetDx_m2904531036(__this, L_22, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_23 = ___e0;
		int32_t L_24 = ___polyType1;
		NullCheck(L_23);
		L_23->set_PolyTyp_5(L_24);
		return;
	}
}
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::FindNextLocMin(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR TEdge_t1694054893 * ClipperBase_FindNextLocMin_m1040214851 (ClipperBase_t2411222589 * __this, TEdge_t1694054893 * ___E0, const RuntimeMethod* method)
{
	TEdge_t1694054893 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	TEdge_t1694054893 * V_7 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B10_0 = 0;
	{
		goto IL_010b;
	}

IL_0006:
	{
		goto IL_0011;
	}

IL_0009:
	{
		TEdge_t1694054893 * L_0 = ___E0;
		NullCheck(L_0);
		TEdge_t1694054893 * L_1 = L_0->get_Next_11();
		___E0 = L_1;
	}

IL_0011:
	{
		TEdge_t1694054893 * L_2 = ___E0;
		NullCheck(L_2);
		IntPoint_t2327573135  L_3 = L_2->get_Bot_0();
		TEdge_t1694054893 * L_4 = ___E0;
		NullCheck(L_4);
		TEdge_t1694054893 * L_5 = L_4->get_Prev_12();
		NullCheck(L_5);
		IntPoint_t2327573135  L_6 = L_5->get_Bot_0();
		bool L_7 = IntPoint_op_Inequality_m2137021658(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_003c;
		}
	}
	{
		TEdge_t1694054893 * L_8 = ___E0;
		NullCheck(L_8);
		IntPoint_t2327573135  L_9 = L_8->get_Curr_1();
		TEdge_t1694054893 * L_10 = ___E0;
		NullCheck(L_10);
		IntPoint_t2327573135  L_11 = L_10->get_Top_2();
		bool L_12 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_12));
		goto IL_003d;
	}

IL_003c:
	{
		G_B6_0 = 1;
	}

IL_003d:
	{
		V_1 = (bool)G_B6_0;
		bool L_13 = V_1;
		if (L_13)
		{
			goto IL_0009;
		}
	}
	{
		TEdge_t1694054893 * L_14 = ___E0;
		NullCheck(L_14);
		double L_15 = L_14->get_Dx_4();
		if ((((double)L_15) == ((double)(-3.4E+38))))
		{
			goto IL_006d;
		}
	}
	{
		TEdge_t1694054893 * L_16 = ___E0;
		NullCheck(L_16);
		TEdge_t1694054893 * L_17 = L_16->get_Prev_12();
		NullCheck(L_17);
		double L_18 = L_17->get_Dx_4();
		G_B10_0 = ((((int32_t)((((double)L_18) == ((double)(-3.4E+38)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B10_0 = 0;
	}

IL_006e:
	{
		V_2 = (bool)G_B10_0;
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		goto IL_0110;
	}

IL_0077:
	{
		goto IL_0081;
	}

IL_0079:
	{
		TEdge_t1694054893 * L_20 = ___E0;
		NullCheck(L_20);
		TEdge_t1694054893 * L_21 = L_20->get_Prev_12();
		___E0 = L_21;
	}

IL_0081:
	{
		TEdge_t1694054893 * L_22 = ___E0;
		NullCheck(L_22);
		TEdge_t1694054893 * L_23 = L_22->get_Prev_12();
		NullCheck(L_23);
		double L_24 = L_23->get_Dx_4();
		V_3 = (bool)((((double)L_24) == ((double)(-3.4E+38)))? 1 : 0);
		bool L_25 = V_3;
		if (L_25)
		{
			goto IL_0079;
		}
	}
	{
		TEdge_t1694054893 * L_26 = ___E0;
		V_0 = L_26;
		goto IL_00a7;
	}

IL_009f:
	{
		TEdge_t1694054893 * L_27 = ___E0;
		NullCheck(L_27);
		TEdge_t1694054893 * L_28 = L_27->get_Next_11();
		___E0 = L_28;
	}

IL_00a7:
	{
		TEdge_t1694054893 * L_29 = ___E0;
		NullCheck(L_29);
		double L_30 = L_29->get_Dx_4();
		V_4 = (bool)((((double)L_30) == ((double)(-3.4E+38)))? 1 : 0);
		bool L_31 = V_4;
		if (L_31)
		{
			goto IL_009f;
		}
	}
	{
		TEdge_t1694054893 * L_32 = ___E0;
		NullCheck(L_32);
		IntPoint_t2327573135 * L_33 = L_32->get_address_of_Top_2();
		int64_t L_34 = L_33->get_Y_1();
		TEdge_t1694054893 * L_35 = ___E0;
		NullCheck(L_35);
		TEdge_t1694054893 * L_36 = L_35->get_Prev_12();
		NullCheck(L_36);
		IntPoint_t2327573135 * L_37 = L_36->get_address_of_Bot_0();
		int64_t L_38 = L_37->get_Y_1();
		V_5 = (bool)((((int64_t)L_34) == ((int64_t)L_38))? 1 : 0);
		bool L_39 = V_5;
		if (!L_39)
		{
			goto IL_00e3;
		}
	}
	{
		goto IL_010b;
	}

IL_00e3:
	{
		TEdge_t1694054893 * L_40 = V_0;
		NullCheck(L_40);
		TEdge_t1694054893 * L_41 = L_40->get_Prev_12();
		NullCheck(L_41);
		IntPoint_t2327573135 * L_42 = L_41->get_address_of_Bot_0();
		int64_t L_43 = L_42->get_X_0();
		TEdge_t1694054893 * L_44 = ___E0;
		NullCheck(L_44);
		IntPoint_t2327573135 * L_45 = L_44->get_address_of_Bot_0();
		int64_t L_46 = L_45->get_X_0();
		V_6 = (bool)((((int64_t)L_43) < ((int64_t)L_46))? 1 : 0);
		bool L_47 = V_6;
		if (!L_47)
		{
			goto IL_0109;
		}
	}
	{
		TEdge_t1694054893 * L_48 = V_0;
		___E0 = L_48;
	}

IL_0109:
	{
		goto IL_0110;
	}

IL_010b:
	{
		goto IL_0006;
	}

IL_0110:
	{
		TEdge_t1694054893 * L_49 = ___E0;
		V_7 = L_49;
		goto IL_0115;
	}

IL_0115:
	{
		TEdge_t1694054893 * L_50 = V_7;
		return L_50;
	}
}
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::ProcessBound(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR TEdge_t1694054893 * ClipperBase_ProcessBound_m943447758 (ClipperBase_t2411222589 * __this, TEdge_t1694054893 * ___E0, bool ___LeftBoundIsForward1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClipperBase_ProcessBound_m943447758_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TEdge_t1694054893 * V_0 = NULL;
	TEdge_t1694054893 * V_1 = NULL;
	TEdge_t1694054893 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	LocalMinima_t86068969 * V_11 = NULL;
	bool V_12 = false;
	TEdge_t1694054893 * V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	int32_t G_B10_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B52_0 = 0;
	int32_t G_B56_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B76_0 = 0;
	int32_t G_B84_0 = 0;
	int32_t G_B88_0 = 0;
	int32_t G_B95_0 = 0;
	int32_t G_B103_0 = 0;
	int32_t G_B111_0 = 0;
	{
		TEdge_t1694054893 * L_0 = ___E0;
		V_1 = L_0;
		TEdge_t1694054893 * L_1 = V_1;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_OutIdx_10();
		V_3 = (bool)((((int32_t)L_2) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0161;
		}
	}
	{
		TEdge_t1694054893 * L_4 = V_1;
		___E0 = L_4;
		bool L_5 = ___LeftBoundIsForward1;
		V_4 = L_5;
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_002a;
	}

IL_0022:
	{
		TEdge_t1694054893 * L_7 = ___E0;
		NullCheck(L_7);
		TEdge_t1694054893 * L_8 = L_7->get_Next_11();
		___E0 = L_8;
	}

IL_002a:
	{
		TEdge_t1694054893 * L_9 = ___E0;
		NullCheck(L_9);
		IntPoint_t2327573135 * L_10 = L_9->get_address_of_Top_2();
		int64_t L_11 = L_10->get_Y_1();
		TEdge_t1694054893 * L_12 = ___E0;
		NullCheck(L_12);
		TEdge_t1694054893 * L_13 = L_12->get_Next_11();
		NullCheck(L_13);
		IntPoint_t2327573135 * L_14 = L_13->get_address_of_Bot_0();
		int64_t L_15 = L_14->get_Y_1();
		V_5 = (bool)((((int64_t)L_11) == ((int64_t)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0057;
	}

IL_004f:
	{
		TEdge_t1694054893 * L_17 = ___E0;
		NullCheck(L_17);
		TEdge_t1694054893 * L_18 = L_17->get_Prev_12();
		___E0 = L_18;
	}

IL_0057:
	{
		TEdge_t1694054893 * L_19 = ___E0;
		TEdge_t1694054893 * L_20 = V_1;
		if ((((RuntimeObject*)(TEdge_t1694054893 *)L_19) == ((RuntimeObject*)(TEdge_t1694054893 *)L_20)))
		{
			goto IL_006e;
		}
	}
	{
		TEdge_t1694054893 * L_21 = ___E0;
		NullCheck(L_21);
		double L_22 = L_21->get_Dx_4();
		G_B10_0 = ((((double)L_22) == ((double)(-3.4E+38)))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B10_0 = 0;
	}

IL_006f:
	{
		V_6 = (bool)G_B10_0;
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_004f;
		}
	}
	{
		goto IL_00cf;
	}

IL_0078:
	{
		goto IL_0083;
	}

IL_007b:
	{
		TEdge_t1694054893 * L_24 = ___E0;
		NullCheck(L_24);
		TEdge_t1694054893 * L_25 = L_24->get_Prev_12();
		___E0 = L_25;
	}

IL_0083:
	{
		TEdge_t1694054893 * L_26 = ___E0;
		NullCheck(L_26);
		IntPoint_t2327573135 * L_27 = L_26->get_address_of_Top_2();
		int64_t L_28 = L_27->get_Y_1();
		TEdge_t1694054893 * L_29 = ___E0;
		NullCheck(L_29);
		TEdge_t1694054893 * L_30 = L_29->get_Prev_12();
		NullCheck(L_30);
		IntPoint_t2327573135 * L_31 = L_30->get_address_of_Bot_0();
		int64_t L_32 = L_31->get_Y_1();
		V_7 = (bool)((((int64_t)L_28) == ((int64_t)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (L_33)
		{
			goto IL_007b;
		}
	}
	{
		goto IL_00b0;
	}

IL_00a8:
	{
		TEdge_t1694054893 * L_34 = ___E0;
		NullCheck(L_34);
		TEdge_t1694054893 * L_35 = L_34->get_Next_11();
		___E0 = L_35;
	}

IL_00b0:
	{
		TEdge_t1694054893 * L_36 = ___E0;
		TEdge_t1694054893 * L_37 = V_1;
		if ((((RuntimeObject*)(TEdge_t1694054893 *)L_36) == ((RuntimeObject*)(TEdge_t1694054893 *)L_37)))
		{
			goto IL_00c7;
		}
	}
	{
		TEdge_t1694054893 * L_38 = ___E0;
		NullCheck(L_38);
		double L_39 = L_38->get_Dx_4();
		G_B20_0 = ((((double)L_39) == ((double)(-3.4E+38)))? 1 : 0);
		goto IL_00c8;
	}

IL_00c7:
	{
		G_B20_0 = 0;
	}

IL_00c8:
	{
		V_8 = (bool)G_B20_0;
		bool L_40 = V_8;
		if (L_40)
		{
			goto IL_00a8;
		}
	}
	{
	}

IL_00cf:
	{
		TEdge_t1694054893 * L_41 = ___E0;
		TEdge_t1694054893 * L_42 = V_1;
		V_9 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_41) == ((RuntimeObject*)(TEdge_t1694054893 *)L_42))? 1 : 0);
		bool L_43 = V_9;
		if (!L_43)
		{
			goto IL_00f4;
		}
	}
	{
		bool L_44 = ___LeftBoundIsForward1;
		V_10 = L_44;
		bool L_45 = V_10;
		if (!L_45)
		{
			goto IL_00ea;
		}
	}
	{
		TEdge_t1694054893 * L_46 = ___E0;
		NullCheck(L_46);
		TEdge_t1694054893 * L_47 = L_46->get_Next_11();
		V_1 = L_47;
		goto IL_00f1;
	}

IL_00ea:
	{
		TEdge_t1694054893 * L_48 = ___E0;
		NullCheck(L_48);
		TEdge_t1694054893 * L_49 = L_48->get_Prev_12();
		V_1 = L_49;
	}

IL_00f1:
	{
		goto IL_0159;
	}

IL_00f4:
	{
		bool L_50 = ___LeftBoundIsForward1;
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_0106;
		}
	}
	{
		TEdge_t1694054893 * L_52 = V_1;
		NullCheck(L_52);
		TEdge_t1694054893 * L_53 = L_52->get_Next_11();
		___E0 = L_53;
		goto IL_010e;
	}

IL_0106:
	{
		TEdge_t1694054893 * L_54 = V_1;
		NullCheck(L_54);
		TEdge_t1694054893 * L_55 = L_54->get_Prev_12();
		___E0 = L_55;
	}

IL_010e:
	{
		LocalMinima_t86068969 * L_56 = (LocalMinima_t86068969 *)il2cpp_codegen_object_new(LocalMinima_t86068969_il2cpp_TypeInfo_var);
		LocalMinima__ctor_m2131346182(L_56, /*hidden argument*/NULL);
		V_11 = L_56;
		LocalMinima_t86068969 * L_57 = V_11;
		NullCheck(L_57);
		L_57->set_Next_3((LocalMinima_t86068969 *)NULL);
		LocalMinima_t86068969 * L_58 = V_11;
		TEdge_t1694054893 * L_59 = ___E0;
		NullCheck(L_59);
		IntPoint_t2327573135 * L_60 = L_59->get_address_of_Bot_0();
		int64_t L_61 = L_60->get_Y_1();
		NullCheck(L_58);
		L_58->set_Y_0(L_61);
		LocalMinima_t86068969 * L_62 = V_11;
		NullCheck(L_62);
		L_62->set_LeftBound_1((TEdge_t1694054893 *)NULL);
		LocalMinima_t86068969 * L_63 = V_11;
		TEdge_t1694054893 * L_64 = ___E0;
		NullCheck(L_63);
		L_63->set_RightBound_2(L_64);
		TEdge_t1694054893 * L_65 = ___E0;
		NullCheck(L_65);
		L_65->set_WindDelta_7(0);
		TEdge_t1694054893 * L_66 = ___E0;
		bool L_67 = ___LeftBoundIsForward1;
		TEdge_t1694054893 * L_68 = ClipperBase_ProcessBound_m943447758(__this, L_66, L_67, /*hidden argument*/NULL);
		V_1 = L_68;
		LocalMinima_t86068969 * L_69 = V_11;
		ClipperBase_InsertLocalMinima_m285067343(__this, L_69, /*hidden argument*/NULL);
	}

IL_0159:
	{
		TEdge_t1694054893 * L_70 = V_1;
		V_13 = L_70;
		goto IL_0555;
	}

IL_0161:
	{
		TEdge_t1694054893 * L_71 = ___E0;
		NullCheck(L_71);
		double L_72 = L_71->get_Dx_4();
		V_14 = (bool)((((double)L_72) == ((double)(-3.4E+38)))? 1 : 0);
		bool L_73 = V_14;
		if (!L_73)
		{
			goto IL_021c;
		}
	}
	{
		bool L_74 = ___LeftBoundIsForward1;
		V_15 = L_74;
		bool L_75 = V_15;
		if (!L_75)
		{
			goto IL_018c;
		}
	}
	{
		TEdge_t1694054893 * L_76 = ___E0;
		NullCheck(L_76);
		TEdge_t1694054893 * L_77 = L_76->get_Prev_12();
		V_0 = L_77;
		goto IL_0193;
	}

IL_018c:
	{
		TEdge_t1694054893 * L_78 = ___E0;
		NullCheck(L_78);
		TEdge_t1694054893 * L_79 = L_78->get_Next_11();
		V_0 = L_79;
	}

IL_0193:
	{
		TEdge_t1694054893 * L_80 = V_0;
		NullCheck(L_80);
		double L_81 = L_80->get_Dx_4();
		V_16 = (bool)((((double)L_81) == ((double)(-3.4E+38)))? 1 : 0);
		bool L_82 = V_16;
		if (!L_82)
		{
			goto IL_01f2;
		}
	}
	{
		TEdge_t1694054893 * L_83 = V_0;
		NullCheck(L_83);
		IntPoint_t2327573135 * L_84 = L_83->get_address_of_Bot_0();
		int64_t L_85 = L_84->get_X_0();
		TEdge_t1694054893 * L_86 = ___E0;
		NullCheck(L_86);
		IntPoint_t2327573135 * L_87 = L_86->get_address_of_Bot_0();
		int64_t L_88 = L_87->get_X_0();
		if ((((int64_t)L_85) == ((int64_t)L_88)))
		{
			goto IL_01e0;
		}
	}
	{
		TEdge_t1694054893 * L_89 = V_0;
		NullCheck(L_89);
		IntPoint_t2327573135 * L_90 = L_89->get_address_of_Top_2();
		int64_t L_91 = L_90->get_X_0();
		TEdge_t1694054893 * L_92 = ___E0;
		NullCheck(L_92);
		IntPoint_t2327573135 * L_93 = L_92->get_address_of_Bot_0();
		int64_t L_94 = L_93->get_X_0();
		G_B40_0 = ((((int32_t)((((int64_t)L_91) == ((int64_t)L_94))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01e1;
	}

IL_01e0:
	{
		G_B40_0 = 0;
	}

IL_01e1:
	{
		V_17 = (bool)G_B40_0;
		bool L_95 = V_17;
		if (!L_95)
		{
			goto IL_01ef;
		}
	}
	{
		TEdge_t1694054893 * L_96 = ___E0;
		ClipperBase_ReverseHorizontal_m2772901178(__this, L_96, /*hidden argument*/NULL);
	}

IL_01ef:
	{
		goto IL_021b;
	}

IL_01f2:
	{
		TEdge_t1694054893 * L_97 = V_0;
		NullCheck(L_97);
		IntPoint_t2327573135 * L_98 = L_97->get_address_of_Bot_0();
		int64_t L_99 = L_98->get_X_0();
		TEdge_t1694054893 * L_100 = ___E0;
		NullCheck(L_100);
		IntPoint_t2327573135 * L_101 = L_100->get_address_of_Bot_0();
		int64_t L_102 = L_101->get_X_0();
		V_18 = (bool)((((int32_t)((((int64_t)L_99) == ((int64_t)L_102))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_103 = V_18;
		if (!L_103)
		{
			goto IL_021b;
		}
	}
	{
		TEdge_t1694054893 * L_104 = ___E0;
		ClipperBase_ReverseHorizontal_m2772901178(__this, L_104, /*hidden argument*/NULL);
	}

IL_021b:
	{
	}

IL_021c:
	{
		TEdge_t1694054893 * L_105 = ___E0;
		V_0 = L_105;
		bool L_106 = ___LeftBoundIsForward1;
		V_19 = L_106;
		bool L_107 = V_19;
		if (!L_107)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_0232;
	}

IL_022b:
	{
		TEdge_t1694054893 * L_108 = V_1;
		NullCheck(L_108);
		TEdge_t1694054893 * L_109 = L_108->get_Next_11();
		V_1 = L_109;
	}

IL_0232:
	{
		TEdge_t1694054893 * L_110 = V_1;
		NullCheck(L_110);
		IntPoint_t2327573135 * L_111 = L_110->get_address_of_Top_2();
		int64_t L_112 = L_111->get_Y_1();
		TEdge_t1694054893 * L_113 = V_1;
		NullCheck(L_113);
		TEdge_t1694054893 * L_114 = L_113->get_Next_11();
		NullCheck(L_114);
		IntPoint_t2327573135 * L_115 = L_114->get_address_of_Bot_0();
		int64_t L_116 = L_115->get_Y_1();
		if ((!(((uint64_t)L_112) == ((uint64_t)L_116))))
		{
			goto IL_0263;
		}
	}
	{
		TEdge_t1694054893 * L_117 = V_1;
		NullCheck(L_117);
		TEdge_t1694054893 * L_118 = L_117->get_Next_11();
		NullCheck(L_118);
		int32_t L_119 = L_118->get_OutIdx_10();
		G_B52_0 = ((((int32_t)((((int32_t)L_119) == ((int32_t)((int32_t)-2)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0264;
	}

IL_0263:
	{
		G_B52_0 = 0;
	}

IL_0264:
	{
		V_20 = (bool)G_B52_0;
		bool L_120 = V_20;
		if (L_120)
		{
			goto IL_022b;
		}
	}
	{
		TEdge_t1694054893 * L_121 = V_1;
		NullCheck(L_121);
		double L_122 = L_121->get_Dx_4();
		if ((!(((double)L_122) == ((double)(-3.4E+38)))))
		{
			goto IL_028f;
		}
	}
	{
		TEdge_t1694054893 * L_123 = V_1;
		NullCheck(L_123);
		TEdge_t1694054893 * L_124 = L_123->get_Next_11();
		NullCheck(L_124);
		int32_t L_125 = L_124->get_OutIdx_10();
		G_B56_0 = ((((int32_t)((((int32_t)L_125) == ((int32_t)((int32_t)-2)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0290;
	}

IL_028f:
	{
		G_B56_0 = 0;
	}

IL_0290:
	{
		V_21 = (bool)G_B56_0;
		bool L_126 = V_21;
		if (!L_126)
		{
			goto IL_02ee;
		}
	}
	{
		TEdge_t1694054893 * L_127 = V_1;
		V_2 = L_127;
		goto IL_02a2;
	}

IL_029b:
	{
		TEdge_t1694054893 * L_128 = V_2;
		NullCheck(L_128);
		TEdge_t1694054893 * L_129 = L_128->get_Prev_12();
		V_2 = L_129;
	}

IL_02a2:
	{
		TEdge_t1694054893 * L_130 = V_2;
		NullCheck(L_130);
		TEdge_t1694054893 * L_131 = L_130->get_Prev_12();
		NullCheck(L_131);
		double L_132 = L_131->get_Dx_4();
		V_22 = (bool)((((double)L_132) == ((double)(-3.4E+38)))? 1 : 0);
		bool L_133 = V_22;
		if (L_133)
		{
			goto IL_029b;
		}
	}
	{
		TEdge_t1694054893 * L_134 = V_2;
		NullCheck(L_134);
		TEdge_t1694054893 * L_135 = L_134->get_Prev_12();
		NullCheck(L_135);
		IntPoint_t2327573135 * L_136 = L_135->get_address_of_Top_2();
		int64_t L_137 = L_136->get_X_0();
		TEdge_t1694054893 * L_138 = V_1;
		NullCheck(L_138);
		TEdge_t1694054893 * L_139 = L_138->get_Next_11();
		NullCheck(L_139);
		IntPoint_t2327573135 * L_140 = L_139->get_address_of_Top_2();
		int64_t L_141 = L_140->get_X_0();
		V_23 = (bool)((((int64_t)L_137) > ((int64_t)L_141))? 1 : 0);
		bool L_142 = V_23;
		if (!L_142)
		{
			goto IL_02ed;
		}
	}
	{
		TEdge_t1694054893 * L_143 = V_2;
		NullCheck(L_143);
		TEdge_t1694054893 * L_144 = L_143->get_Prev_12();
		V_1 = L_144;
	}

IL_02ed:
	{
	}

IL_02ee:
	{
		goto IL_034c;
	}

IL_02f0:
	{
		TEdge_t1694054893 * L_145 = ___E0;
		TEdge_t1694054893 * L_146 = ___E0;
		NullCheck(L_146);
		TEdge_t1694054893 * L_147 = L_146->get_Next_11();
		NullCheck(L_145);
		L_145->set_NextInLML_13(L_147);
		TEdge_t1694054893 * L_148 = ___E0;
		NullCheck(L_148);
		double L_149 = L_148->get_Dx_4();
		if ((!(((double)L_149) == ((double)(-3.4E+38)))))
		{
			goto IL_0334;
		}
	}
	{
		TEdge_t1694054893 * L_150 = ___E0;
		TEdge_t1694054893 * L_151 = V_0;
		if ((((RuntimeObject*)(TEdge_t1694054893 *)L_150) == ((RuntimeObject*)(TEdge_t1694054893 *)L_151)))
		{
			goto IL_0334;
		}
	}
	{
		TEdge_t1694054893 * L_152 = ___E0;
		NullCheck(L_152);
		IntPoint_t2327573135 * L_153 = L_152->get_address_of_Bot_0();
		int64_t L_154 = L_153->get_X_0();
		TEdge_t1694054893 * L_155 = ___E0;
		NullCheck(L_155);
		TEdge_t1694054893 * L_156 = L_155->get_Prev_12();
		NullCheck(L_156);
		IntPoint_t2327573135 * L_157 = L_156->get_address_of_Top_2();
		int64_t L_158 = L_157->get_X_0();
		G_B68_0 = ((((int32_t)((((int64_t)L_154) == ((int64_t)L_158))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0335;
	}

IL_0334:
	{
		G_B68_0 = 0;
	}

IL_0335:
	{
		V_24 = (bool)G_B68_0;
		bool L_159 = V_24;
		if (!L_159)
		{
			goto IL_0343;
		}
	}
	{
		TEdge_t1694054893 * L_160 = ___E0;
		ClipperBase_ReverseHorizontal_m2772901178(__this, L_160, /*hidden argument*/NULL);
	}

IL_0343:
	{
		TEdge_t1694054893 * L_161 = ___E0;
		NullCheck(L_161);
		TEdge_t1694054893 * L_162 = L_161->get_Next_11();
		___E0 = L_162;
	}

IL_034c:
	{
		TEdge_t1694054893 * L_163 = ___E0;
		TEdge_t1694054893 * L_164 = V_1;
		V_25 = (bool)((((int32_t)((((RuntimeObject*)(TEdge_t1694054893 *)L_163) == ((RuntimeObject*)(TEdge_t1694054893 *)L_164))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_165 = V_25;
		if (L_165)
		{
			goto IL_02f0;
		}
	}
	{
		TEdge_t1694054893 * L_166 = ___E0;
		NullCheck(L_166);
		double L_167 = L_166->get_Dx_4();
		if ((!(((double)L_167) == ((double)(-3.4E+38)))))
		{
			goto IL_0390;
		}
	}
	{
		TEdge_t1694054893 * L_168 = ___E0;
		TEdge_t1694054893 * L_169 = V_0;
		if ((((RuntimeObject*)(TEdge_t1694054893 *)L_168) == ((RuntimeObject*)(TEdge_t1694054893 *)L_169)))
		{
			goto IL_0390;
		}
	}
	{
		TEdge_t1694054893 * L_170 = ___E0;
		NullCheck(L_170);
		IntPoint_t2327573135 * L_171 = L_170->get_address_of_Bot_0();
		int64_t L_172 = L_171->get_X_0();
		TEdge_t1694054893 * L_173 = ___E0;
		NullCheck(L_173);
		TEdge_t1694054893 * L_174 = L_173->get_Prev_12();
		NullCheck(L_174);
		IntPoint_t2327573135 * L_175 = L_174->get_address_of_Top_2();
		int64_t L_176 = L_175->get_X_0();
		G_B76_0 = ((((int32_t)((((int64_t)L_172) == ((int64_t)L_176))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0391;
	}

IL_0390:
	{
		G_B76_0 = 0;
	}

IL_0391:
	{
		V_26 = (bool)G_B76_0;
		bool L_177 = V_26;
		if (!L_177)
		{
			goto IL_039f;
		}
	}
	{
		TEdge_t1694054893 * L_178 = ___E0;
		ClipperBase_ReverseHorizontal_m2772901178(__this, L_178, /*hidden argument*/NULL);
	}

IL_039f:
	{
		TEdge_t1694054893 * L_179 = V_1;
		NullCheck(L_179);
		TEdge_t1694054893 * L_180 = L_179->get_Next_11();
		V_1 = L_180;
		goto IL_0550;
	}

IL_03ac:
	{
		goto IL_03b6;
	}

IL_03af:
	{
		TEdge_t1694054893 * L_181 = V_1;
		NullCheck(L_181);
		TEdge_t1694054893 * L_182 = L_181->get_Prev_12();
		V_1 = L_182;
	}

IL_03b6:
	{
		TEdge_t1694054893 * L_183 = V_1;
		NullCheck(L_183);
		IntPoint_t2327573135 * L_184 = L_183->get_address_of_Top_2();
		int64_t L_185 = L_184->get_Y_1();
		TEdge_t1694054893 * L_186 = V_1;
		NullCheck(L_186);
		TEdge_t1694054893 * L_187 = L_186->get_Prev_12();
		NullCheck(L_187);
		IntPoint_t2327573135 * L_188 = L_187->get_address_of_Bot_0();
		int64_t L_189 = L_188->get_Y_1();
		if ((!(((uint64_t)L_185) == ((uint64_t)L_189))))
		{
			goto IL_03e7;
		}
	}
	{
		TEdge_t1694054893 * L_190 = V_1;
		NullCheck(L_190);
		TEdge_t1694054893 * L_191 = L_190->get_Prev_12();
		NullCheck(L_191);
		int32_t L_192 = L_191->get_OutIdx_10();
		G_B84_0 = ((((int32_t)((((int32_t)L_192) == ((int32_t)((int32_t)-2)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_03e8;
	}

IL_03e7:
	{
		G_B84_0 = 0;
	}

IL_03e8:
	{
		V_27 = (bool)G_B84_0;
		bool L_193 = V_27;
		if (L_193)
		{
			goto IL_03af;
		}
	}
	{
		TEdge_t1694054893 * L_194 = V_1;
		NullCheck(L_194);
		double L_195 = L_194->get_Dx_4();
		if ((!(((double)L_195) == ((double)(-3.4E+38)))))
		{
			goto IL_0413;
		}
	}
	{
		TEdge_t1694054893 * L_196 = V_1;
		NullCheck(L_196);
		TEdge_t1694054893 * L_197 = L_196->get_Prev_12();
		NullCheck(L_197);
		int32_t L_198 = L_197->get_OutIdx_10();
		G_B88_0 = ((((int32_t)((((int32_t)L_198) == ((int32_t)((int32_t)-2)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0414;
	}

IL_0413:
	{
		G_B88_0 = 0;
	}

IL_0414:
	{
		V_28 = (bool)G_B88_0;
		bool L_199 = V_28;
		if (!L_199)
		{
			goto IL_0497;
		}
	}
	{
		TEdge_t1694054893 * L_200 = V_1;
		V_2 = L_200;
		goto IL_0426;
	}

IL_041f:
	{
		TEdge_t1694054893 * L_201 = V_2;
		NullCheck(L_201);
		TEdge_t1694054893 * L_202 = L_201->get_Next_11();
		V_2 = L_202;
	}

IL_0426:
	{
		TEdge_t1694054893 * L_203 = V_2;
		NullCheck(L_203);
		TEdge_t1694054893 * L_204 = L_203->get_Next_11();
		NullCheck(L_204);
		double L_205 = L_204->get_Dx_4();
		V_29 = (bool)((((double)L_205) == ((double)(-3.4E+38)))? 1 : 0);
		bool L_206 = V_29;
		if (L_206)
		{
			goto IL_041f;
		}
	}
	{
		TEdge_t1694054893 * L_207 = V_2;
		NullCheck(L_207);
		TEdge_t1694054893 * L_208 = L_207->get_Next_11();
		NullCheck(L_208);
		IntPoint_t2327573135 * L_209 = L_208->get_address_of_Top_2();
		int64_t L_210 = L_209->get_X_0();
		TEdge_t1694054893 * L_211 = V_1;
		NullCheck(L_211);
		TEdge_t1694054893 * L_212 = L_211->get_Prev_12();
		NullCheck(L_212);
		IntPoint_t2327573135 * L_213 = L_212->get_address_of_Top_2();
		int64_t L_214 = L_213->get_X_0();
		if ((((int64_t)L_210) == ((int64_t)L_214)))
		{
			goto IL_0488;
		}
	}
	{
		TEdge_t1694054893 * L_215 = V_2;
		NullCheck(L_215);
		TEdge_t1694054893 * L_216 = L_215->get_Next_11();
		NullCheck(L_216);
		IntPoint_t2327573135 * L_217 = L_216->get_address_of_Top_2();
		int64_t L_218 = L_217->get_X_0();
		TEdge_t1694054893 * L_219 = V_1;
		NullCheck(L_219);
		TEdge_t1694054893 * L_220 = L_219->get_Prev_12();
		NullCheck(L_220);
		IntPoint_t2327573135 * L_221 = L_220->get_address_of_Top_2();
		int64_t L_222 = L_221->get_X_0();
		G_B95_0 = ((((int64_t)L_218) > ((int64_t)L_222))? 1 : 0);
		goto IL_0489;
	}

IL_0488:
	{
		G_B95_0 = 1;
	}

IL_0489:
	{
		V_30 = (bool)G_B95_0;
		bool L_223 = V_30;
		if (!L_223)
		{
			goto IL_0496;
		}
	}
	{
		TEdge_t1694054893 * L_224 = V_2;
		NullCheck(L_224);
		TEdge_t1694054893 * L_225 = L_224->get_Next_11();
		V_1 = L_225;
	}

IL_0496:
	{
	}

IL_0497:
	{
		goto IL_04f5;
	}

IL_0499:
	{
		TEdge_t1694054893 * L_226 = ___E0;
		TEdge_t1694054893 * L_227 = ___E0;
		NullCheck(L_227);
		TEdge_t1694054893 * L_228 = L_227->get_Prev_12();
		NullCheck(L_226);
		L_226->set_NextInLML_13(L_228);
		TEdge_t1694054893 * L_229 = ___E0;
		NullCheck(L_229);
		double L_230 = L_229->get_Dx_4();
		if ((!(((double)L_230) == ((double)(-3.4E+38)))))
		{
			goto IL_04dd;
		}
	}
	{
		TEdge_t1694054893 * L_231 = ___E0;
		TEdge_t1694054893 * L_232 = V_0;
		if ((((RuntimeObject*)(TEdge_t1694054893 *)L_231) == ((RuntimeObject*)(TEdge_t1694054893 *)L_232)))
		{
			goto IL_04dd;
		}
	}
	{
		TEdge_t1694054893 * L_233 = ___E0;
		NullCheck(L_233);
		IntPoint_t2327573135 * L_234 = L_233->get_address_of_Bot_0();
		int64_t L_235 = L_234->get_X_0();
		TEdge_t1694054893 * L_236 = ___E0;
		NullCheck(L_236);
		TEdge_t1694054893 * L_237 = L_236->get_Next_11();
		NullCheck(L_237);
		IntPoint_t2327573135 * L_238 = L_237->get_address_of_Top_2();
		int64_t L_239 = L_238->get_X_0();
		G_B103_0 = ((((int32_t)((((int64_t)L_235) == ((int64_t)L_239))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_04de;
	}

IL_04dd:
	{
		G_B103_0 = 0;
	}

IL_04de:
	{
		V_31 = (bool)G_B103_0;
		bool L_240 = V_31;
		if (!L_240)
		{
			goto IL_04ec;
		}
	}
	{
		TEdge_t1694054893 * L_241 = ___E0;
		ClipperBase_ReverseHorizontal_m2772901178(__this, L_241, /*hidden argument*/NULL);
	}

IL_04ec:
	{
		TEdge_t1694054893 * L_242 = ___E0;
		NullCheck(L_242);
		TEdge_t1694054893 * L_243 = L_242->get_Prev_12();
		___E0 = L_243;
	}

IL_04f5:
	{
		TEdge_t1694054893 * L_244 = ___E0;
		TEdge_t1694054893 * L_245 = V_1;
		V_32 = (bool)((((int32_t)((((RuntimeObject*)(TEdge_t1694054893 *)L_244) == ((RuntimeObject*)(TEdge_t1694054893 *)L_245))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_246 = V_32;
		if (L_246)
		{
			goto IL_0499;
		}
	}
	{
		TEdge_t1694054893 * L_247 = ___E0;
		NullCheck(L_247);
		double L_248 = L_247->get_Dx_4();
		if ((!(((double)L_248) == ((double)(-3.4E+38)))))
		{
			goto IL_0539;
		}
	}
	{
		TEdge_t1694054893 * L_249 = ___E0;
		TEdge_t1694054893 * L_250 = V_0;
		if ((((RuntimeObject*)(TEdge_t1694054893 *)L_249) == ((RuntimeObject*)(TEdge_t1694054893 *)L_250)))
		{
			goto IL_0539;
		}
	}
	{
		TEdge_t1694054893 * L_251 = ___E0;
		NullCheck(L_251);
		IntPoint_t2327573135 * L_252 = L_251->get_address_of_Bot_0();
		int64_t L_253 = L_252->get_X_0();
		TEdge_t1694054893 * L_254 = ___E0;
		NullCheck(L_254);
		TEdge_t1694054893 * L_255 = L_254->get_Next_11();
		NullCheck(L_255);
		IntPoint_t2327573135 * L_256 = L_255->get_address_of_Top_2();
		int64_t L_257 = L_256->get_X_0();
		G_B111_0 = ((((int32_t)((((int64_t)L_253) == ((int64_t)L_257))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_053a;
	}

IL_0539:
	{
		G_B111_0 = 0;
	}

IL_053a:
	{
		V_33 = (bool)G_B111_0;
		bool L_258 = V_33;
		if (!L_258)
		{
			goto IL_0548;
		}
	}
	{
		TEdge_t1694054893 * L_259 = ___E0;
		ClipperBase_ReverseHorizontal_m2772901178(__this, L_259, /*hidden argument*/NULL);
	}

IL_0548:
	{
		TEdge_t1694054893 * L_260 = V_1;
		NullCheck(L_260);
		TEdge_t1694054893 * L_261 = L_260->get_Prev_12();
		V_1 = L_261;
	}

IL_0550:
	{
		TEdge_t1694054893 * L_262 = V_1;
		V_13 = L_262;
		goto IL_0555;
	}

IL_0555:
	{
		TEdge_t1694054893 * L_263 = V_13;
		return L_263;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::AddPath(System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyType,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ClipperBase_AddPath_m2715758810 (ClipperBase_t2411222589 * __this, List_1_t3799647877 * ___pg0, int32_t ___polyType1, bool ___Closed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClipperBase_AddPath_m2715758810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t3166129635 * V_1 = NULL;
	bool V_2 = false;
	TEdge_t1694054893 * V_3 = NULL;
	TEdge_t1694054893 * V_4 = NULL;
	TEdge_t1694054893 * V_5 = NULL;
	bool V_6 = false;
	TEdge_t1694054893 * V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t V_14 = 0;
	bool V_15 = false;
	int32_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	LocalMinima_t86068969 * V_30 = NULL;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	LocalMinima_t86068969 * V_35 = NULL;
	TEdge_t1694054893 * V_36 = NULL;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	bool V_43 = false;
	bool V_44 = false;
	bool V_45 = false;
	bool V_46 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B53_0 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B63_0 = 0;
	int32_t G_B65_0 = 0;
	int32_t G_B74_0 = 0;
	int32_t G_B76_0 = 0;
	int32_t G_B84_0 = 0;
	{
		bool L_0 = ___Closed2;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___polyType1;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		goto IL_000b;
	}

IL_000a:
	{
		G_B3_0 = 0;
	}

IL_000b:
	{
		V_8 = (bool)G_B3_0;
		bool L_2 = V_8;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		ClipperException_t3118674656 * L_3 = (ClipperException_t3118674656 *)il2cpp_codegen_object_new(ClipperException_t3118674656_il2cpp_TypeInfo_var);
		ClipperException__ctor_m1990918546(L_3, _stringLiteral1120288260, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, ClipperBase_AddPath_m2715758810_RuntimeMethod_var);
	}

IL_001c:
	{
		List_1_t3799647877 * L_4 = ___pg0;
		NullCheck(L_4);
		int32_t L_5 = List_1_get_Count_m1457723948(L_4, /*hidden argument*/List_1_get_Count_m1457723948_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		bool L_6 = ___Closed2;
		V_9 = L_6;
		bool L_7 = V_9;
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		goto IL_0032;
	}

IL_002e:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_004b;
		}
	}
	{
		List_1_t3799647877 * L_10 = ___pg0;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IntPoint_t2327573135  L_12 = List_1_get_Item_m2977464905(L_10, L_11, /*hidden argument*/List_1_get_Item_m2977464905_RuntimeMethod_var);
		List_1_t3799647877 * L_13 = ___pg0;
		NullCheck(L_13);
		IntPoint_t2327573135  L_14 = List_1_get_Item_m2977464905(L_13, 0, /*hidden argument*/List_1_get_Item_m2977464905_RuntimeMethod_var);
		bool L_15 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		G_B11_0 = ((int32_t)(L_15));
		goto IL_004c;
	}

IL_004b:
	{
		G_B11_0 = 0;
	}

IL_004c:
	{
		V_10 = (bool)G_B11_0;
		bool L_16 = V_10;
		if (L_16)
		{
			goto IL_002e;
		}
	}

IL_0052:
	{
		goto IL_0058;
	}

IL_0054:
	{
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
	}

IL_0058:
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		List_1_t3799647877 * L_19 = ___pg0;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		IntPoint_t2327573135  L_21 = List_1_get_Item_m2977464905(L_19, L_20, /*hidden argument*/List_1_get_Item_m2977464905_RuntimeMethod_var);
		List_1_t3799647877 * L_22 = ___pg0;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		IntPoint_t2327573135  L_24 = List_1_get_Item_m2977464905(L_22, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)), /*hidden argument*/List_1_get_Item_m2977464905_RuntimeMethod_var);
		bool L_25 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_21, L_24, /*hidden argument*/NULL);
		G_B17_0 = ((int32_t)(L_25));
		goto IL_0074;
	}

IL_0073:
	{
		G_B17_0 = 0;
	}

IL_0074:
	{
		V_11 = (bool)G_B17_0;
		bool L_26 = V_11;
		if (L_26)
		{
			goto IL_0054;
		}
	}
	{
		bool L_27 = ___Closed2;
		if (!L_27)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) < ((int32_t)2)))
		{
			goto IL_008d;
		}
	}

IL_0081:
	{
		bool L_29 = ___Closed2;
		if (L_29)
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_30 = V_0;
		G_B23_0 = ((((int32_t)L_30) < ((int32_t)1))? 1 : 0);
		goto IL_008b;
	}

IL_008a:
	{
		G_B23_0 = 0;
	}

IL_008b:
	{
		G_B25_0 = G_B23_0;
		goto IL_008e;
	}

IL_008d:
	{
		G_B25_0 = 1;
	}

IL_008e:
	{
		V_12 = (bool)G_B25_0;
		bool L_31 = V_12;
		if (!L_31)
		{
			goto IL_009c;
		}
	}
	{
		V_13 = (bool)0;
		goto IL_06dd;
	}

IL_009c:
	{
		int32_t L_32 = V_0;
		List_1_t3166129635 * L_33 = (List_1_t3166129635 *)il2cpp_codegen_object_new(List_1_t3166129635_il2cpp_TypeInfo_var);
		List_1__ctor_m3781015769(L_33, ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1)), /*hidden argument*/List_1__ctor_m3781015769_RuntimeMethod_var);
		V_1 = L_33;
		V_14 = 0;
		goto IL_00bc;
	}

IL_00aa:
	{
		List_1_t3166129635 * L_34 = V_1;
		TEdge_t1694054893 * L_35 = (TEdge_t1694054893 *)il2cpp_codegen_object_new(TEdge_t1694054893_il2cpp_TypeInfo_var);
		TEdge__ctor_m2585461453(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		List_1_Add_m3136544709(L_34, L_35, /*hidden argument*/List_1_Add_m3136544709_RuntimeMethod_var);
		int32_t L_36 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00bc:
	{
		int32_t L_37 = V_14;
		int32_t L_38 = V_0;
		V_15 = (bool)((((int32_t)((((int32_t)L_37) > ((int32_t)L_38))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_15;
		if (L_39)
		{
			goto IL_00aa;
		}
	}
	{
		V_2 = (bool)1;
		List_1_t3166129635 * L_40 = V_1;
		NullCheck(L_40);
		TEdge_t1694054893 * L_41 = List_1_get_Item_m1520513517(L_40, 1, /*hidden argument*/List_1_get_Item_m1520513517_RuntimeMethod_var);
		List_1_t3799647877 * L_42 = ___pg0;
		NullCheck(L_42);
		IntPoint_t2327573135  L_43 = List_1_get_Item_m2977464905(L_42, 1, /*hidden argument*/List_1_get_Item_m2977464905_RuntimeMethod_var);
		NullCheck(L_41);
		L_41->set_Curr_1(L_43);
		List_1_t3799647877 * L_44 = ___pg0;
		NullCheck(L_44);
		IntPoint_t2327573135  L_45 = List_1_get_Item_m2977464905(L_44, 0, /*hidden argument*/List_1_get_Item_m2977464905_RuntimeMethod_var);
		bool* L_46 = __this->get_address_of_m_UseFullRange_6();
		ClipperBase_RangeTest_m3418353231(__this, L_45, (bool*)L_46, /*hidden argument*/NULL);
		List_1_t3799647877 * L_47 = ___pg0;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		IntPoint_t2327573135  L_49 = List_1_get_Item_m2977464905(L_47, L_48, /*hidden argument*/List_1_get_Item_m2977464905_RuntimeMethod_var);
		bool* L_50 = __this->get_address_of_m_UseFullRange_6();
		ClipperBase_RangeTest_m3418353231(__this, L_49, (bool*)L_50, /*hidden argument*/NULL);
		List_1_t3166129635 * L_51 = V_1;
		NullCheck(L_51);
		TEdge_t1694054893 * L_52 = List_1_get_Item_m1520513517(L_51, 0, /*hidden argument*/List_1_get_Item_m1520513517_RuntimeMethod_var);
		List_1_t3166129635 * L_53 = V_1;
		NullCheck(L_53);
		TEdge_t1694054893 * L_54 = List_1_get_Item_m1520513517(L_53, 1, /*hidden argument*/List_1_get_Item_m1520513517_RuntimeMethod_var);
		List_1_t3166129635 * L_55 = V_1;
		int32_t L_56 = V_0;
		NullCheck(L_55);
		TEdge_t1694054893 * L_57 = List_1_get_Item_m1520513517(L_55, L_56, /*hidden argument*/List_1_get_Item_m1520513517_RuntimeMethod_var);
		List_1_t3799647877 * L_58 = ___pg0;
		NullCheck(L_58);
		IntPoint_t2327573135  L_59 = List_1_get_Item_m2977464905(L_58, 0, /*hidden argument*/List_1_get_Item_m2977464905_RuntimeMethod_var);
		ClipperBase_InitEdge_m4160041665(__this, L_52, L_54, L_57, L_59, /*hidden argument*/NULL);
		List_1_t3166129635 * L_60 = V_1;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		TEdge_t1694054893 * L_62 = List_1_get_Item_m1520513517(L_60, L_61, /*hidden argument*/List_1_get_Item_m1520513517_RuntimeMethod_var);
		List_1_t3166129635 * L_63 = V_1;
		NullCheck(L_63);
		TEdge_t1694054893 * L_64 = List_1_get_Item_m1520513517(L_63, 0, /*hidden argument*/List_1_get_Item_m1520513517_RuntimeMethod_var);
		List_1_t3166129635 * L_65 = V_1;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		TEdge_t1694054893 * L_67 = List_1_get_Item_m1520513517(L_65, ((int32_t)il2cpp_codegen_subtract((int32_t)L_66, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1520513517_RuntimeMethod_var);
		List_1_t3799647877 * L_68 = ___pg0;
		int32_t L_69 = V_0;
		NullCheck(L_68);
		IntPoint_t2327573135  L_70 = List_1_get_Item_m2977464905(L_68, L_69, /*hidden argument*/List_1_get_Item_m2977464905_RuntimeMethod_var);
		ClipperBase_InitEdge_m4160041665(__this, L_62, L_64, L_67, L_70, /*hidden argument*/NULL);
		int32_t L_71 = V_0;
		V_16 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_71, (int32_t)1));
		goto IL_019e;
	}

IL_0156:
	{
		List_1_t3799647877 * L_72 = ___pg0;
		int32_t L_73 = V_16;
		NullCheck(L_72);
		IntPoint_t2327573135  L_74 = List_1_get_Item_m2977464905(L_72, L_73, /*hidden argument*/List_1_get_Item_m2977464905_RuntimeMethod_var);
		bool* L_75 = __this->get_address_of_m_UseFullRange_6();
		ClipperBase_RangeTest_m3418353231(__this, L_74, (bool*)L_75, /*hidden argument*/NULL);
		List_1_t3166129635 * L_76 = V_1;
		int32_t L_77 = V_16;
		NullCheck(L_76);
		TEdge_t1694054893 * L_78 = List_1_get_Item_m1520513517(L_76, L_77, /*hidden argument*/List_1_get_Item_m1520513517_RuntimeMethod_var);
		List_1_t3166129635 * L_79 = V_1;
		int32_t L_80 = V_16;
		NullCheck(L_79);
		TEdge_t1694054893 * L_81 = List_1_get_Item_m1520513517(L_79, ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1520513517_RuntimeMethod_var);
		List_1_t3166129635 * L_82 = V_1;
		int32_t L_83 = V_16;
		NullCheck(L_82);
		TEdge_t1694054893 * L_84 = List_1_get_Item_m1520513517(L_82, ((int32_t)il2cpp_codegen_subtract((int32_t)L_83, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1520513517_RuntimeMethod_var);
		List_1_t3799647877 * L_85 = ___pg0;
		int32_t L_86 = V_16;
		NullCheck(L_85);
		IntPoint_t2327573135  L_87 = List_1_get_Item_m2977464905(L_85, L_86, /*hidden argument*/List_1_get_Item_m2977464905_RuntimeMethod_var);
		ClipperBase_InitEdge_m4160041665(__this, L_78, L_81, L_84, L_87, /*hidden argument*/NULL);
		int32_t L_88 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_88, (int32_t)1));
	}

IL_019e:
	{
		int32_t L_89 = V_16;
		V_17 = (bool)((((int32_t)((((int32_t)L_89) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_90 = V_17;
		if (L_90)
		{
			goto IL_0156;
		}
	}
	{
		List_1_t3166129635 * L_91 = V_1;
		NullCheck(L_91);
		TEdge_t1694054893 * L_92 = List_1_get_Item_m1520513517(L_91, 0, /*hidden argument*/List_1_get_Item_m1520513517_RuntimeMethod_var);
		V_3 = L_92;
		TEdge_t1694054893 * L_93 = V_3;
		V_4 = L_93;
		TEdge_t1694054893 * L_94 = V_3;
		V_5 = L_94;
		goto IL_0311;
	}

IL_01bf:
	{
		TEdge_t1694054893 * L_95 = V_4;
		NullCheck(L_95);
		IntPoint_t2327573135  L_96 = L_95->get_Curr_1();
		TEdge_t1694054893 * L_97 = V_4;
		NullCheck(L_97);
		TEdge_t1694054893 * L_98 = L_97->get_Next_11();
		NullCheck(L_98);
		IntPoint_t2327573135  L_99 = L_98->get_Curr_1();
		bool L_100 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_96, L_99, /*hidden argument*/NULL);
		if (!L_100)
		{
			goto IL_01ef;
		}
	}
	{
		bool L_101 = ___Closed2;
		if (L_101)
		{
			goto IL_01ec;
		}
	}
	{
		TEdge_t1694054893 * L_102 = V_4;
		NullCheck(L_102);
		TEdge_t1694054893 * L_103 = L_102->get_Next_11();
		TEdge_t1694054893 * L_104 = V_3;
		G_B38_0 = ((((int32_t)((((RuntimeObject*)(TEdge_t1694054893 *)L_103) == ((RuntimeObject*)(TEdge_t1694054893 *)L_104))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01ed;
	}

IL_01ec:
	{
		G_B38_0 = 1;
	}

IL_01ed:
	{
		G_B40_0 = G_B38_0;
		goto IL_01f0;
	}

IL_01ef:
	{
		G_B40_0 = 0;
	}

IL_01f0:
	{
		V_18 = (bool)G_B40_0;
		bool L_105 = V_18;
		if (!L_105)
		{
			goto IL_0233;
		}
	}
	{
		TEdge_t1694054893 * L_106 = V_4;
		TEdge_t1694054893 * L_107 = V_4;
		NullCheck(L_107);
		TEdge_t1694054893 * L_108 = L_107->get_Next_11();
		V_19 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_106) == ((RuntimeObject*)(TEdge_t1694054893 *)L_108))? 1 : 0);
		bool L_109 = V_19;
		if (!L_109)
		{
			goto IL_020d;
		}
	}
	{
		goto IL_0316;
	}

IL_020d:
	{
		TEdge_t1694054893 * L_110 = V_4;
		TEdge_t1694054893 * L_111 = V_3;
		V_20 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_110) == ((RuntimeObject*)(TEdge_t1694054893 *)L_111))? 1 : 0);
		bool L_112 = V_20;
		if (!L_112)
		{
			goto IL_0220;
		}
	}
	{
		TEdge_t1694054893 * L_113 = V_4;
		NullCheck(L_113);
		TEdge_t1694054893 * L_114 = L_113->get_Next_11();
		V_3 = L_114;
	}

IL_0220:
	{
		TEdge_t1694054893 * L_115 = V_4;
		TEdge_t1694054893 * L_116 = ClipperBase_RemoveEdge_m3101975860(__this, L_115, /*hidden argument*/NULL);
		V_4 = L_116;
		TEdge_t1694054893 * L_117 = V_4;
		V_5 = L_117;
		goto IL_0311;
	}

IL_0233:
	{
		TEdge_t1694054893 * L_118 = V_4;
		NullCheck(L_118);
		TEdge_t1694054893 * L_119 = L_118->get_Prev_12();
		TEdge_t1694054893 * L_120 = V_4;
		NullCheck(L_120);
		TEdge_t1694054893 * L_121 = L_120->get_Next_11();
		V_21 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_119) == ((RuntimeObject*)(TEdge_t1694054893 *)L_121))? 1 : 0);
		bool L_122 = V_21;
		if (!L_122)
		{
			goto IL_024e;
		}
	}
	{
		goto IL_0316;
	}

IL_024e:
	{
		bool L_123 = ___Closed2;
		if (!L_123)
		{
			goto IL_02b2;
		}
	}
	{
		TEdge_t1694054893 * L_124 = V_4;
		NullCheck(L_124);
		TEdge_t1694054893 * L_125 = L_124->get_Prev_12();
		NullCheck(L_125);
		IntPoint_t2327573135  L_126 = L_125->get_Curr_1();
		TEdge_t1694054893 * L_127 = V_4;
		NullCheck(L_127);
		IntPoint_t2327573135  L_128 = L_127->get_Curr_1();
		TEdge_t1694054893 * L_129 = V_4;
		NullCheck(L_129);
		TEdge_t1694054893 * L_130 = L_129->get_Next_11();
		NullCheck(L_130);
		IntPoint_t2327573135  L_131 = L_130->get_Curr_1();
		bool L_132 = __this->get_m_UseFullRange_6();
		bool L_133 = ClipperBase_SlopesEqual_m89433242(NULL /*static, unused*/, L_126, L_128, L_131, L_132, /*hidden argument*/NULL);
		if (!L_133)
		{
			goto IL_02b2;
		}
	}
	{
		bool L_134 = ClipperBase_get_PreserveCollinear_m3706547670(__this, /*hidden argument*/NULL);
		if (!L_134)
		{
			goto IL_02af;
		}
	}
	{
		TEdge_t1694054893 * L_135 = V_4;
		NullCheck(L_135);
		TEdge_t1694054893 * L_136 = L_135->get_Prev_12();
		NullCheck(L_136);
		IntPoint_t2327573135  L_137 = L_136->get_Curr_1();
		TEdge_t1694054893 * L_138 = V_4;
		NullCheck(L_138);
		IntPoint_t2327573135  L_139 = L_138->get_Curr_1();
		TEdge_t1694054893 * L_140 = V_4;
		NullCheck(L_140);
		TEdge_t1694054893 * L_141 = L_140->get_Next_11();
		NullCheck(L_141);
		IntPoint_t2327573135  L_142 = L_141->get_Curr_1();
		bool L_143 = ClipperBase_Pt2IsBetweenPt1AndPt3_m2502305590(__this, L_137, L_139, L_142, /*hidden argument*/NULL);
		G_B53_0 = ((((int32_t)L_143) == ((int32_t)0))? 1 : 0);
		goto IL_02b0;
	}

IL_02af:
	{
		G_B53_0 = 1;
	}

IL_02b0:
	{
		G_B55_0 = G_B53_0;
		goto IL_02b3;
	}

IL_02b2:
	{
		G_B55_0 = 0;
	}

IL_02b3:
	{
		V_22 = (bool)G_B55_0;
		bool L_144 = V_22;
		if (!L_144)
		{
			goto IL_02e6;
		}
	}
	{
		TEdge_t1694054893 * L_145 = V_4;
		TEdge_t1694054893 * L_146 = V_3;
		V_23 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_145) == ((RuntimeObject*)(TEdge_t1694054893 *)L_146))? 1 : 0);
		bool L_147 = V_23;
		if (!L_147)
		{
			goto IL_02cd;
		}
	}
	{
		TEdge_t1694054893 * L_148 = V_4;
		NullCheck(L_148);
		TEdge_t1694054893 * L_149 = L_148->get_Next_11();
		V_3 = L_149;
	}

IL_02cd:
	{
		TEdge_t1694054893 * L_150 = V_4;
		TEdge_t1694054893 * L_151 = ClipperBase_RemoveEdge_m3101975860(__this, L_150, /*hidden argument*/NULL);
		V_4 = L_151;
		TEdge_t1694054893 * L_152 = V_4;
		NullCheck(L_152);
		TEdge_t1694054893 * L_153 = L_152->get_Prev_12();
		V_4 = L_153;
		TEdge_t1694054893 * L_154 = V_4;
		V_5 = L_154;
		goto IL_0311;
	}

IL_02e6:
	{
		TEdge_t1694054893 * L_155 = V_4;
		NullCheck(L_155);
		TEdge_t1694054893 * L_156 = L_155->get_Next_11();
		V_4 = L_156;
		TEdge_t1694054893 * L_157 = V_4;
		TEdge_t1694054893 * L_158 = V_5;
		if ((((RuntimeObject*)(TEdge_t1694054893 *)L_157) == ((RuntimeObject*)(TEdge_t1694054893 *)L_158)))
		{
			goto IL_0307;
		}
	}
	{
		bool L_159 = ___Closed2;
		if (L_159)
		{
			goto IL_0304;
		}
	}
	{
		TEdge_t1694054893 * L_160 = V_4;
		NullCheck(L_160);
		TEdge_t1694054893 * L_161 = L_160->get_Next_11();
		TEdge_t1694054893 * L_162 = V_3;
		G_B63_0 = ((((RuntimeObject*)(TEdge_t1694054893 *)L_161) == ((RuntimeObject*)(TEdge_t1694054893 *)L_162))? 1 : 0);
		goto IL_0305;
	}

IL_0304:
	{
		G_B63_0 = 0;
	}

IL_0305:
	{
		G_B65_0 = G_B63_0;
		goto IL_0308;
	}

IL_0307:
	{
		G_B65_0 = 1;
	}

IL_0308:
	{
		V_24 = (bool)G_B65_0;
		bool L_163 = V_24;
		if (!L_163)
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0316;
	}

IL_0310:
	{
	}

IL_0311:
	{
		goto IL_01bf;
	}

IL_0316:
	{
		bool L_164 = ___Closed2;
		if (L_164)
		{
			goto IL_0324;
		}
	}
	{
		TEdge_t1694054893 * L_165 = V_4;
		TEdge_t1694054893 * L_166 = V_4;
		NullCheck(L_166);
		TEdge_t1694054893 * L_167 = L_166->get_Next_11();
		if ((((RuntimeObject*)(TEdge_t1694054893 *)L_165) == ((RuntimeObject*)(TEdge_t1694054893 *)L_167)))
		{
			goto IL_033c;
		}
	}

IL_0324:
	{
		bool L_168 = ___Closed2;
		if (!L_168)
		{
			goto IL_0339;
		}
	}
	{
		TEdge_t1694054893 * L_169 = V_4;
		NullCheck(L_169);
		TEdge_t1694054893 * L_170 = L_169->get_Prev_12();
		TEdge_t1694054893 * L_171 = V_4;
		NullCheck(L_171);
		TEdge_t1694054893 * L_172 = L_171->get_Next_11();
		G_B74_0 = ((((RuntimeObject*)(TEdge_t1694054893 *)L_170) == ((RuntimeObject*)(TEdge_t1694054893 *)L_172))? 1 : 0);
		goto IL_033a;
	}

IL_0339:
	{
		G_B74_0 = 0;
	}

IL_033a:
	{
		G_B76_0 = G_B74_0;
		goto IL_033d;
	}

IL_033c:
	{
		G_B76_0 = 1;
	}

IL_033d:
	{
		V_25 = (bool)G_B76_0;
		bool L_173 = V_25;
		if (!L_173)
		{
			goto IL_034b;
		}
	}
	{
		V_13 = (bool)0;
		goto IL_06dd;
	}

IL_034b:
	{
		bool L_174 = ___Closed2;
		V_26 = (bool)((((int32_t)L_174) == ((int32_t)0))? 1 : 0);
		bool L_175 = V_26;
		if (!L_175)
		{
			goto IL_036b;
		}
	}
	{
		__this->set_m_HasOpenPaths_7((bool)1);
		TEdge_t1694054893 * L_176 = V_3;
		NullCheck(L_176);
		TEdge_t1694054893 * L_177 = L_176->get_Prev_12();
		NullCheck(L_177);
		L_177->set_OutIdx_10(((int32_t)-2));
	}

IL_036b:
	{
		TEdge_t1694054893 * L_178 = V_3;
		V_4 = L_178;
	}

IL_036e:
	{
		TEdge_t1694054893 * L_179 = V_4;
		int32_t L_180 = ___polyType1;
		ClipperBase_InitEdge2_m4245291815(__this, L_179, L_180, /*hidden argument*/NULL);
		TEdge_t1694054893 * L_181 = V_4;
		NullCheck(L_181);
		TEdge_t1694054893 * L_182 = L_181->get_Next_11();
		V_4 = L_182;
		bool L_183 = V_2;
		if (!L_183)
		{
			goto IL_03a3;
		}
	}
	{
		TEdge_t1694054893 * L_184 = V_4;
		NullCheck(L_184);
		IntPoint_t2327573135 * L_185 = L_184->get_address_of_Curr_1();
		int64_t L_186 = L_185->get_Y_1();
		TEdge_t1694054893 * L_187 = V_3;
		NullCheck(L_187);
		IntPoint_t2327573135 * L_188 = L_187->get_address_of_Curr_1();
		int64_t L_189 = L_188->get_Y_1();
		G_B84_0 = ((((int32_t)((((int64_t)L_186) == ((int64_t)L_189))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_03a4;
	}

IL_03a3:
	{
		G_B84_0 = 0;
	}

IL_03a4:
	{
		V_27 = (bool)G_B84_0;
		bool L_190 = V_27;
		if (!L_190)
		{
			goto IL_03ac;
		}
	}
	{
		V_2 = (bool)0;
	}

IL_03ac:
	{
		TEdge_t1694054893 * L_191 = V_4;
		TEdge_t1694054893 * L_192 = V_3;
		V_28 = (bool)((((int32_t)((((RuntimeObject*)(TEdge_t1694054893 *)L_191) == ((RuntimeObject*)(TEdge_t1694054893 *)L_192))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_193 = V_28;
		if (L_193)
		{
			goto IL_036e;
		}
	}
	{
		bool L_194 = V_2;
		V_29 = L_194;
		bool L_195 = V_29;
		if (!L_195)
		{
			goto IL_04b4;
		}
	}
	{
		bool L_196 = ___Closed2;
		V_31 = L_196;
		bool L_197 = V_31;
		if (!L_197)
		{
			goto IL_03d5;
		}
	}
	{
		V_13 = (bool)0;
		goto IL_06dd;
	}

IL_03d5:
	{
		TEdge_t1694054893 * L_198 = V_4;
		NullCheck(L_198);
		TEdge_t1694054893 * L_199 = L_198->get_Prev_12();
		NullCheck(L_199);
		L_199->set_OutIdx_10(((int32_t)-2));
		LocalMinima_t86068969 * L_200 = (LocalMinima_t86068969 *)il2cpp_codegen_object_new(LocalMinima_t86068969_il2cpp_TypeInfo_var);
		LocalMinima__ctor_m2131346182(L_200, /*hidden argument*/NULL);
		V_30 = L_200;
		LocalMinima_t86068969 * L_201 = V_30;
		NullCheck(L_201);
		L_201->set_Next_3((LocalMinima_t86068969 *)NULL);
		LocalMinima_t86068969 * L_202 = V_30;
		TEdge_t1694054893 * L_203 = V_4;
		NullCheck(L_203);
		IntPoint_t2327573135 * L_204 = L_203->get_address_of_Bot_0();
		int64_t L_205 = L_204->get_Y_1();
		NullCheck(L_202);
		L_202->set_Y_0(L_205);
		LocalMinima_t86068969 * L_206 = V_30;
		NullCheck(L_206);
		L_206->set_LeftBound_1((TEdge_t1694054893 *)NULL);
		LocalMinima_t86068969 * L_207 = V_30;
		TEdge_t1694054893 * L_208 = V_4;
		NullCheck(L_207);
		L_207->set_RightBound_2(L_208);
		LocalMinima_t86068969 * L_209 = V_30;
		NullCheck(L_209);
		TEdge_t1694054893 * L_210 = L_209->get_RightBound_2();
		NullCheck(L_210);
		L_210->set_Side_6(1);
		LocalMinima_t86068969 * L_211 = V_30;
		NullCheck(L_211);
		TEdge_t1694054893 * L_212 = L_211->get_RightBound_2();
		NullCheck(L_212);
		L_212->set_WindDelta_7(0);
		goto IL_0494;
	}

IL_0432:
	{
		TEdge_t1694054893 * L_213 = V_4;
		NullCheck(L_213);
		IntPoint_t2327573135 * L_214 = L_213->get_address_of_Bot_0();
		int64_t L_215 = L_214->get_X_0();
		TEdge_t1694054893 * L_216 = V_4;
		NullCheck(L_216);
		TEdge_t1694054893 * L_217 = L_216->get_Prev_12();
		NullCheck(L_217);
		IntPoint_t2327573135 * L_218 = L_217->get_address_of_Top_2();
		int64_t L_219 = L_218->get_X_0();
		V_32 = (bool)((((int32_t)((((int64_t)L_215) == ((int64_t)L_219))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_220 = V_32;
		if (!L_220)
		{
			goto IL_0464;
		}
	}
	{
		TEdge_t1694054893 * L_221 = V_4;
		ClipperBase_ReverseHorizontal_m2772901178(__this, L_221, /*hidden argument*/NULL);
	}

IL_0464:
	{
		TEdge_t1694054893 * L_222 = V_4;
		NullCheck(L_222);
		TEdge_t1694054893 * L_223 = L_222->get_Next_11();
		NullCheck(L_223);
		int32_t L_224 = L_223->get_OutIdx_10();
		V_33 = (bool)((((int32_t)L_224) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_225 = V_33;
		if (!L_225)
		{
			goto IL_047c;
		}
	}
	{
		goto IL_0496;
	}

IL_047c:
	{
		TEdge_t1694054893 * L_226 = V_4;
		TEdge_t1694054893 * L_227 = V_4;
		NullCheck(L_227);
		TEdge_t1694054893 * L_228 = L_227->get_Next_11();
		NullCheck(L_226);
		L_226->set_NextInLML_13(L_228);
		TEdge_t1694054893 * L_229 = V_4;
		NullCheck(L_229);
		TEdge_t1694054893 * L_230 = L_229->get_Next_11();
		V_4 = L_230;
	}

IL_0494:
	{
		goto IL_0432;
	}

IL_0496:
	{
		LocalMinima_t86068969 * L_231 = V_30;
		ClipperBase_InsertLocalMinima_m285067343(__this, L_231, /*hidden argument*/NULL);
		List_1_t343237081 * L_232 = __this->get_m_edges_2();
		List_1_t3166129635 * L_233 = V_1;
		NullCheck(L_232);
		List_1_Add_m2506364138(L_232, L_233, /*hidden argument*/List_1_Add_m2506364138_RuntimeMethod_var);
		V_13 = (bool)1;
		goto IL_06dd;
	}

IL_04b4:
	{
		List_1_t343237081 * L_234 = __this->get_m_edges_2();
		List_1_t3166129635 * L_235 = V_1;
		NullCheck(L_234);
		List_1_Add_m2506364138(L_234, L_235, /*hidden argument*/List_1_Add_m2506364138_RuntimeMethod_var);
		V_7 = (TEdge_t1694054893 *)NULL;
		TEdge_t1694054893 * L_236 = V_4;
		NullCheck(L_236);
		TEdge_t1694054893 * L_237 = L_236->get_Prev_12();
		NullCheck(L_237);
		IntPoint_t2327573135  L_238 = L_237->get_Bot_0();
		TEdge_t1694054893 * L_239 = V_4;
		NullCheck(L_239);
		TEdge_t1694054893 * L_240 = L_239->get_Prev_12();
		NullCheck(L_240);
		IntPoint_t2327573135  L_241 = L_240->get_Top_2();
		bool L_242 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_238, L_241, /*hidden argument*/NULL);
		V_34 = L_242;
		bool L_243 = V_34;
		if (!L_243)
		{
			goto IL_04f0;
		}
	}
	{
		TEdge_t1694054893 * L_244 = V_4;
		NullCheck(L_244);
		TEdge_t1694054893 * L_245 = L_244->get_Next_11();
		V_4 = L_245;
	}

IL_04f0:
	{
		goto IL_06d3;
	}

IL_04f5:
	{
		TEdge_t1694054893 * L_246 = V_4;
		TEdge_t1694054893 * L_247 = ClipperBase_FindNextLocMin_m1040214851(__this, L_246, /*hidden argument*/NULL);
		V_4 = L_247;
		TEdge_t1694054893 * L_248 = V_4;
		TEdge_t1694054893 * L_249 = V_7;
		V_37 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_248) == ((RuntimeObject*)(TEdge_t1694054893 *)L_249))? 1 : 0);
		bool L_250 = V_37;
		if (!L_250)
		{
			goto IL_0511;
		}
	}
	{
		goto IL_06d8;
	}

IL_0511:
	{
		TEdge_t1694054893 * L_251 = V_7;
		V_38 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_251) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_252 = V_38;
		if (!L_252)
		{
			goto IL_0520;
		}
	}
	{
		TEdge_t1694054893 * L_253 = V_4;
		V_7 = L_253;
	}

IL_0520:
	{
		LocalMinima_t86068969 * L_254 = (LocalMinima_t86068969 *)il2cpp_codegen_object_new(LocalMinima_t86068969_il2cpp_TypeInfo_var);
		LocalMinima__ctor_m2131346182(L_254, /*hidden argument*/NULL);
		V_35 = L_254;
		LocalMinima_t86068969 * L_255 = V_35;
		NullCheck(L_255);
		L_255->set_Next_3((LocalMinima_t86068969 *)NULL);
		LocalMinima_t86068969 * L_256 = V_35;
		TEdge_t1694054893 * L_257 = V_4;
		NullCheck(L_257);
		IntPoint_t2327573135 * L_258 = L_257->get_address_of_Bot_0();
		int64_t L_259 = L_258->get_Y_1();
		NullCheck(L_256);
		L_256->set_Y_0(L_259);
		TEdge_t1694054893 * L_260 = V_4;
		NullCheck(L_260);
		double L_261 = L_260->get_Dx_4();
		TEdge_t1694054893 * L_262 = V_4;
		NullCheck(L_262);
		TEdge_t1694054893 * L_263 = L_262->get_Prev_12();
		NullCheck(L_263);
		double L_264 = L_263->get_Dx_4();
		V_39 = (bool)((((double)L_261) < ((double)L_264))? 1 : 0);
		bool L_265 = V_39;
		if (!L_265)
		{
			goto IL_057b;
		}
	}
	{
		LocalMinima_t86068969 * L_266 = V_35;
		TEdge_t1694054893 * L_267 = V_4;
		NullCheck(L_267);
		TEdge_t1694054893 * L_268 = L_267->get_Prev_12();
		NullCheck(L_266);
		L_266->set_LeftBound_1(L_268);
		LocalMinima_t86068969 * L_269 = V_35;
		TEdge_t1694054893 * L_270 = V_4;
		NullCheck(L_269);
		L_269->set_RightBound_2(L_270);
		V_6 = (bool)0;
		goto IL_0597;
	}

IL_057b:
	{
		LocalMinima_t86068969 * L_271 = V_35;
		TEdge_t1694054893 * L_272 = V_4;
		NullCheck(L_271);
		L_271->set_LeftBound_1(L_272);
		LocalMinima_t86068969 * L_273 = V_35;
		TEdge_t1694054893 * L_274 = V_4;
		NullCheck(L_274);
		TEdge_t1694054893 * L_275 = L_274->get_Prev_12();
		NullCheck(L_273);
		L_273->set_RightBound_2(L_275);
		V_6 = (bool)1;
	}

IL_0597:
	{
		LocalMinima_t86068969 * L_276 = V_35;
		NullCheck(L_276);
		TEdge_t1694054893 * L_277 = L_276->get_LeftBound_1();
		NullCheck(L_277);
		L_277->set_Side_6(0);
		LocalMinima_t86068969 * L_278 = V_35;
		NullCheck(L_278);
		TEdge_t1694054893 * L_279 = L_278->get_RightBound_2();
		NullCheck(L_279);
		L_279->set_Side_6(1);
		bool L_280 = ___Closed2;
		V_40 = (bool)((((int32_t)L_280) == ((int32_t)0))? 1 : 0);
		bool L_281 = V_40;
		if (!L_281)
		{
			goto IL_05ca;
		}
	}
	{
		LocalMinima_t86068969 * L_282 = V_35;
		NullCheck(L_282);
		TEdge_t1694054893 * L_283 = L_282->get_LeftBound_1();
		NullCheck(L_283);
		L_283->set_WindDelta_7(0);
		goto IL_0601;
	}

IL_05ca:
	{
		LocalMinima_t86068969 * L_284 = V_35;
		NullCheck(L_284);
		TEdge_t1694054893 * L_285 = L_284->get_LeftBound_1();
		NullCheck(L_285);
		TEdge_t1694054893 * L_286 = L_285->get_Next_11();
		LocalMinima_t86068969 * L_287 = V_35;
		NullCheck(L_287);
		TEdge_t1694054893 * L_288 = L_287->get_RightBound_2();
		V_41 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_286) == ((RuntimeObject*)(TEdge_t1694054893 *)L_288))? 1 : 0);
		bool L_289 = V_41;
		if (!L_289)
		{
			goto IL_05f4;
		}
	}
	{
		LocalMinima_t86068969 * L_290 = V_35;
		NullCheck(L_290);
		TEdge_t1694054893 * L_291 = L_290->get_LeftBound_1();
		NullCheck(L_291);
		L_291->set_WindDelta_7((-1));
		goto IL_0601;
	}

IL_05f4:
	{
		LocalMinima_t86068969 * L_292 = V_35;
		NullCheck(L_292);
		TEdge_t1694054893 * L_293 = L_292->get_LeftBound_1();
		NullCheck(L_293);
		L_293->set_WindDelta_7(1);
	}

IL_0601:
	{
		LocalMinima_t86068969 * L_294 = V_35;
		NullCheck(L_294);
		TEdge_t1694054893 * L_295 = L_294->get_RightBound_2();
		LocalMinima_t86068969 * L_296 = V_35;
		NullCheck(L_296);
		TEdge_t1694054893 * L_297 = L_296->get_LeftBound_1();
		NullCheck(L_297);
		int32_t L_298 = L_297->get_WindDelta_7();
		NullCheck(L_295);
		L_295->set_WindDelta_7(((-L_298)));
		LocalMinima_t86068969 * L_299 = V_35;
		NullCheck(L_299);
		TEdge_t1694054893 * L_300 = L_299->get_LeftBound_1();
		bool L_301 = V_6;
		TEdge_t1694054893 * L_302 = ClipperBase_ProcessBound_m943447758(__this, L_300, L_301, /*hidden argument*/NULL);
		V_4 = L_302;
		TEdge_t1694054893 * L_303 = V_4;
		NullCheck(L_303);
		int32_t L_304 = L_303->get_OutIdx_10();
		V_42 = (bool)((((int32_t)L_304) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_305 = V_42;
		if (!L_305)
		{
			goto IL_0648;
		}
	}
	{
		TEdge_t1694054893 * L_306 = V_4;
		bool L_307 = V_6;
		TEdge_t1694054893 * L_308 = ClipperBase_ProcessBound_m943447758(__this, L_306, L_307, /*hidden argument*/NULL);
		V_4 = L_308;
	}

IL_0648:
	{
		LocalMinima_t86068969 * L_309 = V_35;
		NullCheck(L_309);
		TEdge_t1694054893 * L_310 = L_309->get_RightBound_2();
		bool L_311 = V_6;
		TEdge_t1694054893 * L_312 = ClipperBase_ProcessBound_m943447758(__this, L_310, (bool)((((int32_t)L_311) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		V_36 = L_312;
		TEdge_t1694054893 * L_313 = V_36;
		NullCheck(L_313);
		int32_t L_314 = L_313->get_OutIdx_10();
		V_43 = (bool)((((int32_t)L_314) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_315 = V_43;
		if (!L_315)
		{
			goto IL_067c;
		}
	}
	{
		TEdge_t1694054893 * L_316 = V_36;
		bool L_317 = V_6;
		TEdge_t1694054893 * L_318 = ClipperBase_ProcessBound_m943447758(__this, L_316, (bool)((((int32_t)L_317) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		V_36 = L_318;
	}

IL_067c:
	{
		LocalMinima_t86068969 * L_319 = V_35;
		NullCheck(L_319);
		TEdge_t1694054893 * L_320 = L_319->get_LeftBound_1();
		NullCheck(L_320);
		int32_t L_321 = L_320->get_OutIdx_10();
		V_44 = (bool)((((int32_t)L_321) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_322 = V_44;
		if (!L_322)
		{
			goto IL_069c;
		}
	}
	{
		LocalMinima_t86068969 * L_323 = V_35;
		NullCheck(L_323);
		L_323->set_LeftBound_1((TEdge_t1694054893 *)NULL);
		goto IL_06ba;
	}

IL_069c:
	{
		LocalMinima_t86068969 * L_324 = V_35;
		NullCheck(L_324);
		TEdge_t1694054893 * L_325 = L_324->get_RightBound_2();
		NullCheck(L_325);
		int32_t L_326 = L_325->get_OutIdx_10();
		V_45 = (bool)((((int32_t)L_326) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_327 = V_45;
		if (!L_327)
		{
			goto IL_06ba;
		}
	}
	{
		LocalMinima_t86068969 * L_328 = V_35;
		NullCheck(L_328);
		L_328->set_RightBound_2((TEdge_t1694054893 *)NULL);
	}

IL_06ba:
	{
		LocalMinima_t86068969 * L_329 = V_35;
		ClipperBase_InsertLocalMinima_m285067343(__this, L_329, /*hidden argument*/NULL);
		bool L_330 = V_6;
		V_46 = (bool)((((int32_t)L_330) == ((int32_t)0))? 1 : 0);
		bool L_331 = V_46;
		if (!L_331)
		{
			goto IL_06d2;
		}
	}
	{
		TEdge_t1694054893 * L_332 = V_36;
		V_4 = L_332;
	}

IL_06d2:
	{
	}

IL_06d3:
	{
		goto IL_04f5;
	}

IL_06d8:
	{
		V_13 = (bool)1;
		goto IL_06dd;
	}

IL_06dd:
	{
		bool L_333 = V_13;
		return L_333;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::AddPaths(System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyType,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ClipperBase_AddPaths_m736258290 (ClipperBase_t2411222589 * __this, List_1_t976755323 * ___ppg0, int32_t ___polyType1, bool ___closed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClipperBase_AddPaths_m736258290_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		V_0 = (bool)0;
		List_1_t976755323 * L_0 = ___ppg0;
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m3865745726(L_0, /*hidden argument*/List_1_get_Count_m3865745726_RuntimeMethod_var);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0027;
	}

IL_000e:
	{
		List_1_t976755323 * L_2 = ___ppg0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		List_1_t3799647877 * L_4 = List_1_get_Item_m2952603493(L_2, L_3, /*hidden argument*/List_1_get_Item_m2952603493_RuntimeMethod_var);
		int32_t L_5 = ___polyType1;
		bool L_6 = ___closed2;
		bool L_7 = ClipperBase_AddPath_m2715758810(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0023;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0023:
	{
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0027:
	{
		int32_t L_10 = V_2;
		int32_t L_11 = V_1;
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_000e;
		}
	}
	{
		bool L_13 = V_0;
		V_5 = L_13;
		goto IL_0036;
	}

IL_0036:
	{
		bool L_14 = V_5;
		return L_14;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::Pt2IsBetweenPt1AndPt3(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR bool ClipperBase_Pt2IsBetweenPt1AndPt3_m2502305590 (ClipperBase_t2411222589 * __this, IntPoint_t2327573135  ___pt10, IntPoint_t2327573135  ___pt21, IntPoint_t2327573135  ___pt32, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		IntPoint_t2327573135  L_0 = ___pt10;
		IntPoint_t2327573135  L_1 = ___pt32;
		bool L_2 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		IntPoint_t2327573135  L_3 = ___pt10;
		IntPoint_t2327573135  L_4 = ___pt21;
		bool L_5 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		IntPoint_t2327573135  L_6 = ___pt32;
		IntPoint_t2327573135  L_7 = ___pt21;
		bool L_8 = IntPoint_op_Equality_m246719467(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_8));
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = 1;
	}

IL_001d:
	{
		V_0 = (bool)G_B4_0;
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0025;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_007c;
	}

IL_0025:
	{
		IntPoint_t2327573135  L_10 = ___pt10;
		int64_t L_11 = L_10.get_X_0();
		IntPoint_t2327573135  L_12 = ___pt32;
		int64_t L_13 = L_12.get_X_0();
		V_2 = (bool)((((int32_t)((((int64_t)L_11) == ((int64_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_005b;
		}
	}
	{
		IntPoint_t2327573135  L_15 = ___pt21;
		int64_t L_16 = L_15.get_X_0();
		IntPoint_t2327573135  L_17 = ___pt10;
		int64_t L_18 = L_17.get_X_0();
		IntPoint_t2327573135  L_19 = ___pt21;
		int64_t L_20 = L_19.get_X_0();
		IntPoint_t2327573135  L_21 = ___pt32;
		int64_t L_22 = L_21.get_X_0();
		V_1 = (bool)((((int32_t)((((int64_t)L_16) > ((int64_t)L_18))? 1 : 0)) == ((int32_t)((((int64_t)L_20) < ((int64_t)L_22))? 1 : 0)))? 1 : 0);
		goto IL_007c;
	}

IL_005b:
	{
		IntPoint_t2327573135  L_23 = ___pt21;
		int64_t L_24 = L_23.get_Y_1();
		IntPoint_t2327573135  L_25 = ___pt10;
		int64_t L_26 = L_25.get_Y_1();
		IntPoint_t2327573135  L_27 = ___pt21;
		int64_t L_28 = L_27.get_Y_1();
		IntPoint_t2327573135  L_29 = ___pt32;
		int64_t L_30 = L_29.get_Y_1();
		V_1 = (bool)((((int32_t)((((int64_t)L_24) > ((int64_t)L_26))? 1 : 0)) == ((int32_t)((((int64_t)L_28) < ((int64_t)L_30))? 1 : 0)))? 1 : 0);
		goto IL_007c;
	}

IL_007c:
	{
		bool L_31 = V_1;
		return L_31;
	}
}
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::RemoveEdge(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR TEdge_t1694054893 * ClipperBase_RemoveEdge_m3101975860 (ClipperBase_t2411222589 * __this, TEdge_t1694054893 * ___e0, const RuntimeMethod* method)
{
	TEdge_t1694054893 * V_0 = NULL;
	TEdge_t1694054893 * V_1 = NULL;
	{
		TEdge_t1694054893 * L_0 = ___e0;
		NullCheck(L_0);
		TEdge_t1694054893 * L_1 = L_0->get_Prev_12();
		TEdge_t1694054893 * L_2 = ___e0;
		NullCheck(L_2);
		TEdge_t1694054893 * L_3 = L_2->get_Next_11();
		NullCheck(L_1);
		L_1->set_Next_11(L_3);
		TEdge_t1694054893 * L_4 = ___e0;
		NullCheck(L_4);
		TEdge_t1694054893 * L_5 = L_4->get_Next_11();
		TEdge_t1694054893 * L_6 = ___e0;
		NullCheck(L_6);
		TEdge_t1694054893 * L_7 = L_6->get_Prev_12();
		NullCheck(L_5);
		L_5->set_Prev_12(L_7);
		TEdge_t1694054893 * L_8 = ___e0;
		NullCheck(L_8);
		TEdge_t1694054893 * L_9 = L_8->get_Next_11();
		V_0 = L_9;
		TEdge_t1694054893 * L_10 = ___e0;
		NullCheck(L_10);
		L_10->set_Prev_12((TEdge_t1694054893 *)NULL);
		TEdge_t1694054893 * L_11 = V_0;
		V_1 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		TEdge_t1694054893 * L_12 = V_1;
		return L_12;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::SetDx(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_SetDx_m2904531036 (ClipperBase_t2411222589 * __this, TEdge_t1694054893 * ___e0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TEdge_t1694054893 * L_0 = ___e0;
		NullCheck(L_0);
		IntPoint_t2327573135 * L_1 = L_0->get_address_of_Delta_3();
		TEdge_t1694054893 * L_2 = ___e0;
		NullCheck(L_2);
		IntPoint_t2327573135 * L_3 = L_2->get_address_of_Top_2();
		int64_t L_4 = L_3->get_X_0();
		TEdge_t1694054893 * L_5 = ___e0;
		NullCheck(L_5);
		IntPoint_t2327573135 * L_6 = L_5->get_address_of_Bot_0();
		int64_t L_7 = L_6->get_X_0();
		L_1->set_X_0(((int64_t)il2cpp_codegen_subtract((int64_t)L_4, (int64_t)L_7)));
		TEdge_t1694054893 * L_8 = ___e0;
		NullCheck(L_8);
		IntPoint_t2327573135 * L_9 = L_8->get_address_of_Delta_3();
		TEdge_t1694054893 * L_10 = ___e0;
		NullCheck(L_10);
		IntPoint_t2327573135 * L_11 = L_10->get_address_of_Top_2();
		int64_t L_12 = L_11->get_Y_1();
		TEdge_t1694054893 * L_13 = ___e0;
		NullCheck(L_13);
		IntPoint_t2327573135 * L_14 = L_13->get_address_of_Bot_0();
		int64_t L_15 = L_14->get_Y_1();
		L_9->set_Y_1(((int64_t)il2cpp_codegen_subtract((int64_t)L_12, (int64_t)L_15)));
		TEdge_t1694054893 * L_16 = ___e0;
		NullCheck(L_16);
		IntPoint_t2327573135 * L_17 = L_16->get_address_of_Delta_3();
		int64_t L_18 = L_17->get_Y_1();
		V_0 = (bool)((((int64_t)L_18) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_19 = V_0;
		if (!L_19)
		{
			goto IL_0069;
		}
	}
	{
		TEdge_t1694054893 * L_20 = ___e0;
		NullCheck(L_20);
		L_20->set_Dx_4((-3.4E+38));
		goto IL_0088;
	}

IL_0069:
	{
		TEdge_t1694054893 * L_21 = ___e0;
		TEdge_t1694054893 * L_22 = ___e0;
		NullCheck(L_22);
		IntPoint_t2327573135 * L_23 = L_22->get_address_of_Delta_3();
		int64_t L_24 = L_23->get_X_0();
		TEdge_t1694054893 * L_25 = ___e0;
		NullCheck(L_25);
		IntPoint_t2327573135 * L_26 = L_25->get_address_of_Delta_3();
		int64_t L_27 = L_26->get_Y_1();
		NullCheck(L_21);
		L_21->set_Dx_4(((double)((double)(((double)((double)L_24)))/(double)(((double)((double)L_27))))));
	}

IL_0088:
	{
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::InsertLocalMinima(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_InsertLocalMinima_m285067343 (ClipperBase_t2411222589 * __this, LocalMinima_t86068969 * ___newLm0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	LocalMinima_t86068969 * V_2 = NULL;
	bool V_3 = false;
	int32_t G_B9_0 = 0;
	{
		LocalMinima_t86068969 * L_0 = __this->get_m_MinimaList_0();
		V_0 = (bool)((((RuntimeObject*)(LocalMinima_t86068969 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		LocalMinima_t86068969 * L_2 = ___newLm0;
		__this->set_m_MinimaList_0(L_2);
		goto IL_0091;
	}

IL_0019:
	{
		LocalMinima_t86068969 * L_3 = ___newLm0;
		NullCheck(L_3);
		int64_t L_4 = L_3->get_Y_0();
		LocalMinima_t86068969 * L_5 = __this->get_m_MinimaList_0();
		NullCheck(L_5);
		int64_t L_6 = L_5->get_Y_0();
		V_1 = (bool)((((int32_t)((((int64_t)L_4) < ((int64_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		LocalMinima_t86068969 * L_8 = ___newLm0;
		LocalMinima_t86068969 * L_9 = __this->get_m_MinimaList_0();
		NullCheck(L_8);
		L_8->set_Next_3(L_9);
		LocalMinima_t86068969 * L_10 = ___newLm0;
		__this->set_m_MinimaList_0(L_10);
		goto IL_0091;
	}

IL_004a:
	{
		LocalMinima_t86068969 * L_11 = __this->get_m_MinimaList_0();
		V_2 = L_11;
		goto IL_005b;
	}

IL_0054:
	{
		LocalMinima_t86068969 * L_12 = V_2;
		NullCheck(L_12);
		LocalMinima_t86068969 * L_13 = L_12->get_Next_3();
		V_2 = L_13;
	}

IL_005b:
	{
		LocalMinima_t86068969 * L_14 = V_2;
		NullCheck(L_14);
		LocalMinima_t86068969 * L_15 = L_14->get_Next_3();
		if (!L_15)
		{
			goto IL_0078;
		}
	}
	{
		LocalMinima_t86068969 * L_16 = ___newLm0;
		NullCheck(L_16);
		int64_t L_17 = L_16->get_Y_0();
		LocalMinima_t86068969 * L_18 = V_2;
		NullCheck(L_18);
		LocalMinima_t86068969 * L_19 = L_18->get_Next_3();
		NullCheck(L_19);
		int64_t L_20 = L_19->get_Y_0();
		G_B9_0 = ((((int64_t)L_17) < ((int64_t)L_20))? 1 : 0);
		goto IL_0079;
	}

IL_0078:
	{
		G_B9_0 = 0;
	}

IL_0079:
	{
		V_3 = (bool)G_B9_0;
		bool L_21 = V_3;
		if (L_21)
		{
			goto IL_0054;
		}
	}
	{
		LocalMinima_t86068969 * L_22 = ___newLm0;
		LocalMinima_t86068969 * L_23 = V_2;
		NullCheck(L_23);
		LocalMinima_t86068969 * L_24 = L_23->get_Next_3();
		NullCheck(L_22);
		L_22->set_Next_3(L_24);
		LocalMinima_t86068969 * L_25 = V_2;
		LocalMinima_t86068969 * L_26 = ___newLm0;
		NullCheck(L_25);
		L_25->set_Next_3(L_26);
	}

IL_0091:
	{
		return;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::PopLocalMinima(System.Int64,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima&)
extern "C" IL2CPP_METHOD_ATTR bool ClipperBase_PopLocalMinima_m1590347675 (ClipperBase_t2411222589 * __this, int64_t ___Y0, LocalMinima_t86068969 ** ___current1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		LocalMinima_t86068969 ** L_0 = ___current1;
		LocalMinima_t86068969 * L_1 = __this->get_m_CurrentLM_1();
		*((RuntimeObject **)(L_0)) = (RuntimeObject *)L_1;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_0), (RuntimeObject *)L_1);
		LocalMinima_t86068969 * L_2 = __this->get_m_CurrentLM_1();
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		LocalMinima_t86068969 * L_3 = __this->get_m_CurrentLM_1();
		NullCheck(L_3);
		int64_t L_4 = L_3->get_Y_0();
		int64_t L_5 = ___Y0;
		G_B3_0 = ((((int64_t)L_4) == ((int64_t)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		LocalMinima_t86068969 * L_7 = __this->get_m_CurrentLM_1();
		NullCheck(L_7);
		LocalMinima_t86068969 * L_8 = L_7->get_Next_3();
		__this->set_m_CurrentLM_1(L_8);
		V_1 = (bool)1;
		goto IL_0040;
	}

IL_003c:
	{
		V_1 = (bool)0;
		goto IL_0040;
	}

IL_0040:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::ReverseHorizontal(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_ReverseHorizontal_m2772901178 (ClipperBase_t2411222589 * __this, TEdge_t1694054893 * ___e0, const RuntimeMethod* method)
{
	{
		TEdge_t1694054893 * L_0 = ___e0;
		NullCheck(L_0);
		IntPoint_t2327573135 * L_1 = L_0->get_address_of_Top_2();
		int64_t* L_2 = L_1->get_address_of_X_0();
		TEdge_t1694054893 * L_3 = ___e0;
		NullCheck(L_3);
		IntPoint_t2327573135 * L_4 = L_3->get_address_of_Bot_0();
		int64_t* L_5 = L_4->get_address_of_X_0();
		ClipperBase_Swap_m3891450181(__this, (int64_t*)L_2, (int64_t*)L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::Reset()
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_Reset_m1502376064 (ClipperBase_t2411222589 * __this, const RuntimeMethod* method)
{
	LocalMinima_t86068969 * V_0 = NULL;
	bool V_1 = false;
	TEdge_t1694054893 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		LocalMinima_t86068969 * L_0 = __this->get_m_MinimaList_0();
		__this->set_m_CurrentLM_1(L_0);
		LocalMinima_t86068969 * L_1 = __this->get_m_CurrentLM_1();
		V_1 = (bool)((((RuntimeObject*)(LocalMinima_t86068969 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		goto IL_00a0;
	}

IL_001f:
	{
		__this->set_m_Scanbeam_3((Scanbeam_t3952834741 *)NULL);
		LocalMinima_t86068969 * L_3 = __this->get_m_MinimaList_0();
		V_0 = L_3;
		goto IL_008f;
	}

IL_002f:
	{
		LocalMinima_t86068969 * L_4 = V_0;
		NullCheck(L_4);
		int64_t L_5 = L_4->get_Y_0();
		ClipperBase_InsertScanbeam_m3852300338(__this, L_5, /*hidden argument*/NULL);
		LocalMinima_t86068969 * L_6 = V_0;
		NullCheck(L_6);
		TEdge_t1694054893 * L_7 = L_6->get_LeftBound_1();
		V_2 = L_7;
		TEdge_t1694054893 * L_8 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_8) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		TEdge_t1694054893 * L_10 = V_2;
		TEdge_t1694054893 * L_11 = V_2;
		NullCheck(L_11);
		IntPoint_t2327573135  L_12 = L_11->get_Bot_0();
		NullCheck(L_10);
		L_10->set_Curr_1(L_12);
		TEdge_t1694054893 * L_13 = V_2;
		NullCheck(L_13);
		L_13->set_OutIdx_10((-1));
	}

IL_0061:
	{
		LocalMinima_t86068969 * L_14 = V_0;
		NullCheck(L_14);
		TEdge_t1694054893 * L_15 = L_14->get_RightBound_2();
		V_2 = L_15;
		TEdge_t1694054893 * L_16 = V_2;
		V_4 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0087;
		}
	}
	{
		TEdge_t1694054893 * L_18 = V_2;
		TEdge_t1694054893 * L_19 = V_2;
		NullCheck(L_19);
		IntPoint_t2327573135  L_20 = L_19->get_Bot_0();
		NullCheck(L_18);
		L_18->set_Curr_1(L_20);
		TEdge_t1694054893 * L_21 = V_2;
		NullCheck(L_21);
		L_21->set_OutIdx_10((-1));
	}

IL_0087:
	{
		LocalMinima_t86068969 * L_22 = V_0;
		NullCheck(L_22);
		LocalMinima_t86068969 * L_23 = L_22->get_Next_3();
		V_0 = L_23;
	}

IL_008f:
	{
		LocalMinima_t86068969 * L_24 = V_0;
		V_5 = (bool)((!(((RuntimeObject*)(LocalMinima_t86068969 *)L_24) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_25 = V_5;
		if (L_25)
		{
			goto IL_002f;
		}
	}
	{
		__this->set_m_ActiveEdges_5((TEdge_t1694054893 *)NULL);
	}

IL_00a0:
	{
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::InsertScanbeam(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_InsertScanbeam_m3852300338 (ClipperBase_t2411222589 * __this, int64_t ___Y0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClipperBase_InsertScanbeam_m3852300338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Scanbeam_t3952834741 * V_2 = NULL;
	Scanbeam_t3952834741 * V_3 = NULL;
	Scanbeam_t3952834741 * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B9_0 = 0;
	{
		Scanbeam_t3952834741 * L_0 = __this->get_m_Scanbeam_3();
		V_0 = (bool)((((RuntimeObject*)(Scanbeam_t3952834741 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		Scanbeam_t3952834741 * L_2 = (Scanbeam_t3952834741 *)il2cpp_codegen_object_new(Scanbeam_t3952834741_il2cpp_TypeInfo_var);
		Scanbeam__ctor_m2134228870(L_2, /*hidden argument*/NULL);
		__this->set_m_Scanbeam_3(L_2);
		Scanbeam_t3952834741 * L_3 = __this->get_m_Scanbeam_3();
		NullCheck(L_3);
		L_3->set_Next_1((Scanbeam_t3952834741 *)NULL);
		Scanbeam_t3952834741 * L_4 = __this->get_m_Scanbeam_3();
		int64_t L_5 = ___Y0;
		NullCheck(L_4);
		L_4->set_Y_0(L_5);
		goto IL_00d7;
	}

IL_0038:
	{
		int64_t L_6 = ___Y0;
		Scanbeam_t3952834741 * L_7 = __this->get_m_Scanbeam_3();
		NullCheck(L_7);
		int64_t L_8 = L_7->get_Y_0();
		V_1 = (bool)((((int64_t)L_6) > ((int64_t)L_8))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_006e;
		}
	}
	{
		Scanbeam_t3952834741 * L_10 = (Scanbeam_t3952834741 *)il2cpp_codegen_object_new(Scanbeam_t3952834741_il2cpp_TypeInfo_var);
		Scanbeam__ctor_m2134228870(L_10, /*hidden argument*/NULL);
		V_2 = L_10;
		Scanbeam_t3952834741 * L_11 = V_2;
		int64_t L_12 = ___Y0;
		NullCheck(L_11);
		L_11->set_Y_0(L_12);
		Scanbeam_t3952834741 * L_13 = V_2;
		Scanbeam_t3952834741 * L_14 = __this->get_m_Scanbeam_3();
		NullCheck(L_13);
		L_13->set_Next_1(L_14);
		Scanbeam_t3952834741 * L_15 = V_2;
		__this->set_m_Scanbeam_3(L_15);
		goto IL_00d7;
	}

IL_006e:
	{
		Scanbeam_t3952834741 * L_16 = __this->get_m_Scanbeam_3();
		V_3 = L_16;
		goto IL_007f;
	}

IL_0078:
	{
		Scanbeam_t3952834741 * L_17 = V_3;
		NullCheck(L_17);
		Scanbeam_t3952834741 * L_18 = L_17->get_Next_1();
		V_3 = L_18;
	}

IL_007f:
	{
		Scanbeam_t3952834741 * L_19 = V_3;
		NullCheck(L_19);
		Scanbeam_t3952834741 * L_20 = L_19->get_Next_1();
		if (!L_20)
		{
			goto IL_009a;
		}
	}
	{
		int64_t L_21 = ___Y0;
		Scanbeam_t3952834741 * L_22 = V_3;
		NullCheck(L_22);
		Scanbeam_t3952834741 * L_23 = L_22->get_Next_1();
		NullCheck(L_23);
		int64_t L_24 = L_23->get_Y_0();
		G_B9_0 = ((((int32_t)((((int64_t)L_21) > ((int64_t)L_24))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_009b;
	}

IL_009a:
	{
		G_B9_0 = 0;
	}

IL_009b:
	{
		V_5 = (bool)G_B9_0;
		bool L_25 = V_5;
		if (L_25)
		{
			goto IL_0078;
		}
	}
	{
		int64_t L_26 = ___Y0;
		Scanbeam_t3952834741 * L_27 = V_3;
		NullCheck(L_27);
		int64_t L_28 = L_27->get_Y_0();
		V_6 = (bool)((((int64_t)L_26) == ((int64_t)L_28))? 1 : 0);
		bool L_29 = V_6;
		if (!L_29)
		{
			goto IL_00b2;
		}
	}
	{
		goto IL_00d7;
	}

IL_00b2:
	{
		Scanbeam_t3952834741 * L_30 = (Scanbeam_t3952834741 *)il2cpp_codegen_object_new(Scanbeam_t3952834741_il2cpp_TypeInfo_var);
		Scanbeam__ctor_m2134228870(L_30, /*hidden argument*/NULL);
		V_4 = L_30;
		Scanbeam_t3952834741 * L_31 = V_4;
		int64_t L_32 = ___Y0;
		NullCheck(L_31);
		L_31->set_Y_0(L_32);
		Scanbeam_t3952834741 * L_33 = V_4;
		Scanbeam_t3952834741 * L_34 = V_3;
		NullCheck(L_34);
		Scanbeam_t3952834741 * L_35 = L_34->get_Next_1();
		NullCheck(L_33);
		L_33->set_Next_1(L_35);
		Scanbeam_t3952834741 * L_36 = V_3;
		Scanbeam_t3952834741 * L_37 = V_4;
		NullCheck(L_36);
		L_36->set_Next_1(L_37);
	}

IL_00d7:
	{
		return;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::PopScanbeam(System.Int64&)
extern "C" IL2CPP_METHOD_ATTR bool ClipperBase_PopScanbeam_m1570193237 (ClipperBase_t2411222589 * __this, int64_t* ___Y0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Scanbeam_t3952834741 * L_0 = __this->get_m_Scanbeam_3();
		V_0 = (bool)((((RuntimeObject*)(Scanbeam_t3952834741 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		int64_t* L_2 = ___Y0;
		*((int64_t*)(L_2)) = (int64_t)(((int64_t)((int64_t)0)));
		V_1 = (bool)0;
		goto IL_0039;
	}

IL_0017:
	{
		int64_t* L_3 = ___Y0;
		Scanbeam_t3952834741 * L_4 = __this->get_m_Scanbeam_3();
		NullCheck(L_4);
		int64_t L_5 = L_4->get_Y_0();
		*((int64_t*)(L_3)) = (int64_t)L_5;
		Scanbeam_t3952834741 * L_6 = __this->get_m_Scanbeam_3();
		NullCheck(L_6);
		Scanbeam_t3952834741 * L_7 = L_6->get_Next_1();
		__this->set_m_Scanbeam_3(L_7);
		V_1 = (bool)1;
		goto IL_0039;
	}

IL_0039:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::LocalMinimaPending()
extern "C" IL2CPP_METHOD_ATTR bool ClipperBase_LocalMinimaPending_m2619425210 (ClipperBase_t2411222589 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		LocalMinima_t86068969 * L_0 = __this->get_m_CurrentLM_1();
		V_0 = (bool)((!(((RuntimeObject*)(LocalMinima_t86068969 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::CreateOutRec()
extern "C" IL2CPP_METHOD_ATTR OutRec_t316877671 * ClipperBase_CreateOutRec_m1973586272 (ClipperBase_t2411222589 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClipperBase_CreateOutRec_m1973586272_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OutRec_t316877671 * V_0 = NULL;
	OutRec_t316877671 * V_1 = NULL;
	{
		OutRec_t316877671 * L_0 = (OutRec_t316877671 *)il2cpp_codegen_object_new(OutRec_t316877671_il2cpp_TypeInfo_var);
		OutRec__ctor_m289344415(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		OutRec_t316877671 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_Idx_0((-1));
		OutRec_t316877671 * L_2 = V_0;
		NullCheck(L_2);
		L_2->set_IsHole_1((bool)0);
		OutRec_t316877671 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_IsOpen_2((bool)0);
		OutRec_t316877671 * L_4 = V_0;
		NullCheck(L_4);
		L_4->set_FirstLeft_3((OutRec_t316877671 *)NULL);
		OutRec_t316877671 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_Pts_4((OutPt_t2591102706 *)NULL);
		OutRec_t316877671 * L_6 = V_0;
		NullCheck(L_6);
		L_6->set_BottomPt_5((OutPt_t2591102706 *)NULL);
		OutRec_t316877671 * L_7 = V_0;
		NullCheck(L_7);
		L_7->set_PolyNode_6((PolyNode_t1300984468 *)NULL);
		List_1_t1788952413 * L_8 = __this->get_m_PolyOuts_4();
		OutRec_t316877671 * L_9 = V_0;
		NullCheck(L_8);
		List_1_Add_m2443849649(L_8, L_9, /*hidden argument*/List_1_Add_m2443849649_RuntimeMethod_var);
		OutRec_t316877671 * L_10 = V_0;
		List_1_t1788952413 * L_11 = __this->get_m_PolyOuts_4();
		NullCheck(L_11);
		int32_t L_12 = List_1_get_Count_m4196692370(L_11, /*hidden argument*/List_1_get_Count_m4196692370_RuntimeMethod_var);
		NullCheck(L_10);
		L_10->set_Idx_0(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)));
		OutRec_t316877671 * L_13 = V_0;
		V_1 = L_13;
		goto IL_005c;
	}

IL_005c:
	{
		OutRec_t316877671 * L_14 = V_1;
		return L_14;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::DisposeOutRec(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_DisposeOutRec_m3331437289 (ClipperBase_t2411222589 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClipperBase_DisposeOutRec_m3331437289_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OutRec_t316877671 * V_0 = NULL;
	{
		List_1_t1788952413 * L_0 = __this->get_m_PolyOuts_4();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		OutRec_t316877671 * L_2 = List_1_get_Item_m350034741(L_0, L_1, /*hidden argument*/List_1_get_Item_m350034741_RuntimeMethod_var);
		V_0 = L_2;
		OutRec_t316877671 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_Pts_4((OutPt_t2591102706 *)NULL);
		V_0 = (OutRec_t316877671 *)NULL;
		List_1_t1788952413 * L_4 = __this->get_m_PolyOuts_4();
		int32_t L_5 = ___index0;
		NullCheck(L_4);
		List_1_set_Item_m2160825928(L_4, L_5, (OutRec_t316877671 *)NULL, /*hidden argument*/List_1_set_Item_m2160825928_RuntimeMethod_var);
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::UpdateEdgeIntoAEL(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge&)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_UpdateEdgeIntoAEL_m4154808885 (ClipperBase_t2411222589 * __this, TEdge_t1694054893 ** ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClipperBase_UpdateEdgeIntoAEL_m4154808885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TEdge_t1694054893 * V_0 = NULL;
	TEdge_t1694054893 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		TEdge_t1694054893 ** L_0 = ___e0;
		TEdge_t1694054893 * L_1 = *((TEdge_t1694054893 **)L_0);
		NullCheck(L_1);
		TEdge_t1694054893 * L_2 = L_1->get_NextInLML_13();
		V_2 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		ClipperException_t3118674656 * L_4 = (ClipperException_t3118674656 *)il2cpp_codegen_object_new(ClipperException_t3118674656_il2cpp_TypeInfo_var);
		ClipperException__ctor_m1990918546(L_4, _stringLiteral3795700735, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, ClipperBase_UpdateEdgeIntoAEL_m4154808885_RuntimeMethod_var);
	}

IL_001a:
	{
		TEdge_t1694054893 ** L_5 = ___e0;
		TEdge_t1694054893 * L_6 = *((TEdge_t1694054893 **)L_5);
		NullCheck(L_6);
		TEdge_t1694054893 * L_7 = L_6->get_PrevInAEL_15();
		V_0 = L_7;
		TEdge_t1694054893 ** L_8 = ___e0;
		TEdge_t1694054893 * L_9 = *((TEdge_t1694054893 **)L_8);
		NullCheck(L_9);
		TEdge_t1694054893 * L_10 = L_9->get_NextInAEL_14();
		V_1 = L_10;
		TEdge_t1694054893 ** L_11 = ___e0;
		TEdge_t1694054893 * L_12 = *((TEdge_t1694054893 **)L_11);
		NullCheck(L_12);
		TEdge_t1694054893 * L_13 = L_12->get_NextInLML_13();
		TEdge_t1694054893 ** L_14 = ___e0;
		TEdge_t1694054893 * L_15 = *((TEdge_t1694054893 **)L_14);
		NullCheck(L_15);
		int32_t L_16 = L_15->get_OutIdx_10();
		NullCheck(L_13);
		L_13->set_OutIdx_10(L_16);
		TEdge_t1694054893 * L_17 = V_0;
		V_3 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_17) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_0054;
		}
	}
	{
		TEdge_t1694054893 * L_19 = V_0;
		TEdge_t1694054893 ** L_20 = ___e0;
		TEdge_t1694054893 * L_21 = *((TEdge_t1694054893 **)L_20);
		NullCheck(L_21);
		TEdge_t1694054893 * L_22 = L_21->get_NextInLML_13();
		NullCheck(L_19);
		L_19->set_NextInAEL_14(L_22);
		goto IL_0061;
	}

IL_0054:
	{
		TEdge_t1694054893 ** L_23 = ___e0;
		TEdge_t1694054893 * L_24 = *((TEdge_t1694054893 **)L_23);
		NullCheck(L_24);
		TEdge_t1694054893 * L_25 = L_24->get_NextInLML_13();
		__this->set_m_ActiveEdges_5(L_25);
	}

IL_0061:
	{
		TEdge_t1694054893 * L_26 = V_1;
		V_4 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_26) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_27 = V_4;
		if (!L_27)
		{
			goto IL_0078;
		}
	}
	{
		TEdge_t1694054893 * L_28 = V_1;
		TEdge_t1694054893 ** L_29 = ___e0;
		TEdge_t1694054893 * L_30 = *((TEdge_t1694054893 **)L_29);
		NullCheck(L_30);
		TEdge_t1694054893 * L_31 = L_30->get_NextInLML_13();
		NullCheck(L_28);
		L_28->set_PrevInAEL_15(L_31);
	}

IL_0078:
	{
		TEdge_t1694054893 ** L_32 = ___e0;
		TEdge_t1694054893 * L_33 = *((TEdge_t1694054893 **)L_32);
		NullCheck(L_33);
		TEdge_t1694054893 * L_34 = L_33->get_NextInLML_13();
		TEdge_t1694054893 ** L_35 = ___e0;
		TEdge_t1694054893 * L_36 = *((TEdge_t1694054893 **)L_35);
		NullCheck(L_36);
		int32_t L_37 = L_36->get_Side_6();
		NullCheck(L_34);
		L_34->set_Side_6(L_37);
		TEdge_t1694054893 ** L_38 = ___e0;
		TEdge_t1694054893 * L_39 = *((TEdge_t1694054893 **)L_38);
		NullCheck(L_39);
		TEdge_t1694054893 * L_40 = L_39->get_NextInLML_13();
		TEdge_t1694054893 ** L_41 = ___e0;
		TEdge_t1694054893 * L_42 = *((TEdge_t1694054893 **)L_41);
		NullCheck(L_42);
		int32_t L_43 = L_42->get_WindDelta_7();
		NullCheck(L_40);
		L_40->set_WindDelta_7(L_43);
		TEdge_t1694054893 ** L_44 = ___e0;
		TEdge_t1694054893 * L_45 = *((TEdge_t1694054893 **)L_44);
		NullCheck(L_45);
		TEdge_t1694054893 * L_46 = L_45->get_NextInLML_13();
		TEdge_t1694054893 ** L_47 = ___e0;
		TEdge_t1694054893 * L_48 = *((TEdge_t1694054893 **)L_47);
		NullCheck(L_48);
		int32_t L_49 = L_48->get_WindCnt_8();
		NullCheck(L_46);
		L_46->set_WindCnt_8(L_49);
		TEdge_t1694054893 ** L_50 = ___e0;
		TEdge_t1694054893 * L_51 = *((TEdge_t1694054893 **)L_50);
		NullCheck(L_51);
		TEdge_t1694054893 * L_52 = L_51->get_NextInLML_13();
		TEdge_t1694054893 ** L_53 = ___e0;
		TEdge_t1694054893 * L_54 = *((TEdge_t1694054893 **)L_53);
		NullCheck(L_54);
		int32_t L_55 = L_54->get_WindCnt2_9();
		NullCheck(L_52);
		L_52->set_WindCnt2_9(L_55);
		TEdge_t1694054893 ** L_56 = ___e0;
		TEdge_t1694054893 ** L_57 = ___e0;
		TEdge_t1694054893 * L_58 = *((TEdge_t1694054893 **)L_57);
		NullCheck(L_58);
		TEdge_t1694054893 * L_59 = L_58->get_NextInLML_13();
		*((RuntimeObject **)(L_56)) = (RuntimeObject *)L_59;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_56), (RuntimeObject *)L_59);
		TEdge_t1694054893 ** L_60 = ___e0;
		TEdge_t1694054893 * L_61 = *((TEdge_t1694054893 **)L_60);
		TEdge_t1694054893 ** L_62 = ___e0;
		TEdge_t1694054893 * L_63 = *((TEdge_t1694054893 **)L_62);
		NullCheck(L_63);
		IntPoint_t2327573135  L_64 = L_63->get_Bot_0();
		NullCheck(L_61);
		L_61->set_Curr_1(L_64);
		TEdge_t1694054893 ** L_65 = ___e0;
		TEdge_t1694054893 * L_66 = *((TEdge_t1694054893 **)L_65);
		TEdge_t1694054893 * L_67 = V_0;
		NullCheck(L_66);
		L_66->set_PrevInAEL_15(L_67);
		TEdge_t1694054893 ** L_68 = ___e0;
		TEdge_t1694054893 * L_69 = *((TEdge_t1694054893 **)L_68);
		TEdge_t1694054893 * L_70 = V_1;
		NullCheck(L_69);
		L_69->set_NextInAEL_14(L_70);
		TEdge_t1694054893 ** L_71 = ___e0;
		TEdge_t1694054893 * L_72 = *((TEdge_t1694054893 **)L_71);
		bool L_73 = ClipperBase_IsHorizontal_m234918052(NULL /*static, unused*/, L_72, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_73) == ((int32_t)0))? 1 : 0);
		bool L_74 = V_5;
		if (!L_74)
		{
			goto IL_010e;
		}
	}
	{
		TEdge_t1694054893 ** L_75 = ___e0;
		TEdge_t1694054893 * L_76 = *((TEdge_t1694054893 **)L_75);
		NullCheck(L_76);
		IntPoint_t2327573135 * L_77 = L_76->get_address_of_Top_2();
		int64_t L_78 = L_77->get_Y_1();
		ClipperBase_InsertScanbeam_m3852300338(__this, L_78, /*hidden argument*/NULL);
	}

IL_010e:
	{
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::SwapPositionsInAEL(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_SwapPositionsInAEL_m2341169767 (ClipperBase_t2411222589 * __this, TEdge_t1694054893 * ___edge10, TEdge_t1694054893 * ___edge21, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	TEdge_t1694054893 * V_2 = NULL;
	TEdge_t1694054893 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	TEdge_t1694054893 * V_7 = NULL;
	TEdge_t1694054893 * V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	TEdge_t1694054893 * V_11 = NULL;
	TEdge_t1694054893 * V_12 = NULL;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t G_B3_0 = 0;
	{
		TEdge_t1694054893 * L_0 = ___edge10;
		NullCheck(L_0);
		TEdge_t1694054893 * L_1 = L_0->get_NextInAEL_14();
		TEdge_t1694054893 * L_2 = ___edge10;
		NullCheck(L_2);
		TEdge_t1694054893 * L_3 = L_2->get_PrevInAEL_15();
		if ((((RuntimeObject*)(TEdge_t1694054893 *)L_1) == ((RuntimeObject*)(TEdge_t1694054893 *)L_3)))
		{
			goto IL_001f;
		}
	}
	{
		TEdge_t1694054893 * L_4 = ___edge21;
		NullCheck(L_4);
		TEdge_t1694054893 * L_5 = L_4->get_NextInAEL_14();
		TEdge_t1694054893 * L_6 = ___edge21;
		NullCheck(L_6);
		TEdge_t1694054893 * L_7 = L_6->get_PrevInAEL_15();
		G_B3_0 = ((((RuntimeObject*)(TEdge_t1694054893 *)L_5) == ((RuntimeObject*)(TEdge_t1694054893 *)L_7))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 1;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0029;
		}
	}
	{
		goto IL_01c7;
	}

IL_0029:
	{
		TEdge_t1694054893 * L_9 = ___edge10;
		NullCheck(L_9);
		TEdge_t1694054893 * L_10 = L_9->get_NextInAEL_14();
		TEdge_t1694054893 * L_11 = ___edge21;
		V_1 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_10) == ((RuntimeObject*)(TEdge_t1694054893 *)L_11))? 1 : 0);
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		TEdge_t1694054893 * L_13 = ___edge21;
		NullCheck(L_13);
		TEdge_t1694054893 * L_14 = L_13->get_NextInAEL_14();
		V_2 = L_14;
		TEdge_t1694054893 * L_15 = V_2;
		V_4 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_004f;
		}
	}
	{
		TEdge_t1694054893 * L_17 = V_2;
		TEdge_t1694054893 * L_18 = ___edge10;
		NullCheck(L_17);
		L_17->set_PrevInAEL_15(L_18);
	}

IL_004f:
	{
		TEdge_t1694054893 * L_19 = ___edge10;
		NullCheck(L_19);
		TEdge_t1694054893 * L_20 = L_19->get_PrevInAEL_15();
		V_3 = L_20;
		TEdge_t1694054893 * L_21 = V_3;
		V_5 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_21) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_0067;
		}
	}
	{
		TEdge_t1694054893 * L_23 = V_3;
		TEdge_t1694054893 * L_24 = ___edge21;
		NullCheck(L_23);
		L_23->set_NextInAEL_14(L_24);
	}

IL_0067:
	{
		TEdge_t1694054893 * L_25 = ___edge21;
		TEdge_t1694054893 * L_26 = V_3;
		NullCheck(L_25);
		L_25->set_PrevInAEL_15(L_26);
		TEdge_t1694054893 * L_27 = ___edge21;
		TEdge_t1694054893 * L_28 = ___edge10;
		NullCheck(L_27);
		L_27->set_NextInAEL_14(L_28);
		TEdge_t1694054893 * L_29 = ___edge10;
		TEdge_t1694054893 * L_30 = ___edge21;
		NullCheck(L_29);
		L_29->set_PrevInAEL_15(L_30);
		TEdge_t1694054893 * L_31 = ___edge10;
		TEdge_t1694054893 * L_32 = V_2;
		NullCheck(L_31);
		L_31->set_NextInAEL_14(L_32);
		goto IL_0199;
	}

IL_0089:
	{
		TEdge_t1694054893 * L_33 = ___edge21;
		NullCheck(L_33);
		TEdge_t1694054893 * L_34 = L_33->get_NextInAEL_14();
		TEdge_t1694054893 * L_35 = ___edge10;
		V_6 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_34) == ((RuntimeObject*)(TEdge_t1694054893 *)L_35))? 1 : 0);
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_00f3;
		}
	}
	{
		TEdge_t1694054893 * L_37 = ___edge10;
		NullCheck(L_37);
		TEdge_t1694054893 * L_38 = L_37->get_NextInAEL_14();
		V_7 = L_38;
		TEdge_t1694054893 * L_39 = V_7;
		V_9 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_39) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_40 = V_9;
		if (!L_40)
		{
			goto IL_00b4;
		}
	}
	{
		TEdge_t1694054893 * L_41 = V_7;
		TEdge_t1694054893 * L_42 = ___edge21;
		NullCheck(L_41);
		L_41->set_PrevInAEL_15(L_42);
	}

IL_00b4:
	{
		TEdge_t1694054893 * L_43 = ___edge21;
		NullCheck(L_43);
		TEdge_t1694054893 * L_44 = L_43->get_PrevInAEL_15();
		V_8 = L_44;
		TEdge_t1694054893 * L_45 = V_8;
		V_10 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_45) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_46 = V_10;
		if (!L_46)
		{
			goto IL_00cf;
		}
	}
	{
		TEdge_t1694054893 * L_47 = V_8;
		TEdge_t1694054893 * L_48 = ___edge10;
		NullCheck(L_47);
		L_47->set_NextInAEL_14(L_48);
	}

IL_00cf:
	{
		TEdge_t1694054893 * L_49 = ___edge10;
		TEdge_t1694054893 * L_50 = V_8;
		NullCheck(L_49);
		L_49->set_PrevInAEL_15(L_50);
		TEdge_t1694054893 * L_51 = ___edge10;
		TEdge_t1694054893 * L_52 = ___edge21;
		NullCheck(L_51);
		L_51->set_NextInAEL_14(L_52);
		TEdge_t1694054893 * L_53 = ___edge21;
		TEdge_t1694054893 * L_54 = ___edge10;
		NullCheck(L_53);
		L_53->set_PrevInAEL_15(L_54);
		TEdge_t1694054893 * L_55 = ___edge21;
		TEdge_t1694054893 * L_56 = V_7;
		NullCheck(L_55);
		L_55->set_NextInAEL_14(L_56);
		goto IL_0199;
	}

IL_00f3:
	{
		TEdge_t1694054893 * L_57 = ___edge10;
		NullCheck(L_57);
		TEdge_t1694054893 * L_58 = L_57->get_NextInAEL_14();
		V_11 = L_58;
		TEdge_t1694054893 * L_59 = ___edge10;
		NullCheck(L_59);
		TEdge_t1694054893 * L_60 = L_59->get_PrevInAEL_15();
		V_12 = L_60;
		TEdge_t1694054893 * L_61 = ___edge10;
		TEdge_t1694054893 * L_62 = ___edge21;
		NullCheck(L_62);
		TEdge_t1694054893 * L_63 = L_62->get_NextInAEL_14();
		NullCheck(L_61);
		L_61->set_NextInAEL_14(L_63);
		TEdge_t1694054893 * L_64 = ___edge10;
		NullCheck(L_64);
		TEdge_t1694054893 * L_65 = L_64->get_NextInAEL_14();
		V_13 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_65) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_66 = V_13;
		if (!L_66)
		{
			goto IL_012b;
		}
	}
	{
		TEdge_t1694054893 * L_67 = ___edge10;
		NullCheck(L_67);
		TEdge_t1694054893 * L_68 = L_67->get_NextInAEL_14();
		TEdge_t1694054893 * L_69 = ___edge10;
		NullCheck(L_68);
		L_68->set_PrevInAEL_15(L_69);
	}

IL_012b:
	{
		TEdge_t1694054893 * L_70 = ___edge10;
		TEdge_t1694054893 * L_71 = ___edge21;
		NullCheck(L_71);
		TEdge_t1694054893 * L_72 = L_71->get_PrevInAEL_15();
		NullCheck(L_70);
		L_70->set_PrevInAEL_15(L_72);
		TEdge_t1694054893 * L_73 = ___edge10;
		NullCheck(L_73);
		TEdge_t1694054893 * L_74 = L_73->get_PrevInAEL_15();
		V_14 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_74) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_75 = V_14;
		if (!L_75)
		{
			goto IL_0152;
		}
	}
	{
		TEdge_t1694054893 * L_76 = ___edge10;
		NullCheck(L_76);
		TEdge_t1694054893 * L_77 = L_76->get_PrevInAEL_15();
		TEdge_t1694054893 * L_78 = ___edge10;
		NullCheck(L_77);
		L_77->set_NextInAEL_14(L_78);
	}

IL_0152:
	{
		TEdge_t1694054893 * L_79 = ___edge21;
		TEdge_t1694054893 * L_80 = V_11;
		NullCheck(L_79);
		L_79->set_NextInAEL_14(L_80);
		TEdge_t1694054893 * L_81 = ___edge21;
		NullCheck(L_81);
		TEdge_t1694054893 * L_82 = L_81->get_NextInAEL_14();
		V_15 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_82) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_83 = V_15;
		if (!L_83)
		{
			goto IL_0175;
		}
	}
	{
		TEdge_t1694054893 * L_84 = ___edge21;
		NullCheck(L_84);
		TEdge_t1694054893 * L_85 = L_84->get_NextInAEL_14();
		TEdge_t1694054893 * L_86 = ___edge21;
		NullCheck(L_85);
		L_85->set_PrevInAEL_15(L_86);
	}

IL_0175:
	{
		TEdge_t1694054893 * L_87 = ___edge21;
		TEdge_t1694054893 * L_88 = V_12;
		NullCheck(L_87);
		L_87->set_PrevInAEL_15(L_88);
		TEdge_t1694054893 * L_89 = ___edge21;
		NullCheck(L_89);
		TEdge_t1694054893 * L_90 = L_89->get_PrevInAEL_15();
		V_16 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_90) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_91 = V_16;
		if (!L_91)
		{
			goto IL_0198;
		}
	}
	{
		TEdge_t1694054893 * L_92 = ___edge21;
		NullCheck(L_92);
		TEdge_t1694054893 * L_93 = L_92->get_PrevInAEL_15();
		TEdge_t1694054893 * L_94 = ___edge21;
		NullCheck(L_93);
		L_93->set_NextInAEL_14(L_94);
	}

IL_0198:
	{
	}

IL_0199:
	{
		TEdge_t1694054893 * L_95 = ___edge10;
		NullCheck(L_95);
		TEdge_t1694054893 * L_96 = L_95->get_PrevInAEL_15();
		V_17 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_96) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_97 = V_17;
		if (!L_97)
		{
			goto IL_01b1;
		}
	}
	{
		TEdge_t1694054893 * L_98 = ___edge10;
		__this->set_m_ActiveEdges_5(L_98);
		goto IL_01c7;
	}

IL_01b1:
	{
		TEdge_t1694054893 * L_99 = ___edge21;
		NullCheck(L_99);
		TEdge_t1694054893 * L_100 = L_99->get_PrevInAEL_15();
		V_18 = (bool)((((RuntimeObject*)(TEdge_t1694054893 *)L_100) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_101 = V_18;
		if (!L_101)
		{
			goto IL_01c7;
		}
	}
	{
		TEdge_t1694054893 * L_102 = ___edge21;
		__this->set_m_ActiveEdges_5(L_102);
	}

IL_01c7:
	{
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::DeleteFromAEL(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge)
extern "C" IL2CPP_METHOD_ATTR void ClipperBase_DeleteFromAEL_m216615416 (ClipperBase_t2411222589 * __this, TEdge_t1694054893 * ___e0, const RuntimeMethod* method)
{
	TEdge_t1694054893 * V_0 = NULL;
	TEdge_t1694054893 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	{
		TEdge_t1694054893 * L_0 = ___e0;
		NullCheck(L_0);
		TEdge_t1694054893 * L_1 = L_0->get_PrevInAEL_15();
		V_0 = L_1;
		TEdge_t1694054893 * L_2 = ___e0;
		NullCheck(L_2);
		TEdge_t1694054893 * L_3 = L_2->get_NextInAEL_14();
		V_1 = L_3;
		TEdge_t1694054893 * L_4 = V_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		TEdge_t1694054893 * L_5 = V_1;
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		TEdge_t1694054893 * L_6 = ___e0;
		TEdge_t1694054893 * L_7 = __this->get_m_ActiveEdges_5();
		G_B4_0 = ((((int32_t)((((RuntimeObject*)(TEdge_t1694054893 *)L_6) == ((RuntimeObject*)(TEdge_t1694054893 *)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B4_0 = 0;
	}

IL_0024:
	{
		V_2 = (bool)G_B4_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_002a;
		}
	}
	{
		goto IL_0061;
	}

IL_002a:
	{
		TEdge_t1694054893 * L_9 = V_0;
		V_3 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_9) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_003b;
		}
	}
	{
		TEdge_t1694054893 * L_11 = V_0;
		TEdge_t1694054893 * L_12 = V_1;
		NullCheck(L_11);
		L_11->set_NextInAEL_14(L_12);
		goto IL_0042;
	}

IL_003b:
	{
		TEdge_t1694054893 * L_13 = V_1;
		__this->set_m_ActiveEdges_5(L_13);
	}

IL_0042:
	{
		TEdge_t1694054893 * L_14 = V_1;
		V_4 = (bool)((!(((RuntimeObject*)(TEdge_t1694054893 *)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0053;
		}
	}
	{
		TEdge_t1694054893 * L_16 = V_1;
		TEdge_t1694054893 * L_17 = V_0;
		NullCheck(L_16);
		L_16->set_PrevInAEL_15(L_17);
	}

IL_0053:
	{
		TEdge_t1694054893 * L_18 = ___e0;
		NullCheck(L_18);
		L_18->set_NextInAEL_14((TEdge_t1694054893 *)NULL);
		TEdge_t1694054893 * L_19 = ___e0;
		NullCheck(L_19);
		L_19->set_PrevInAEL_15((TEdge_t1694054893 *)NULL);
	}

IL_0061:
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
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ClipperException__ctor_m1990918546 (ClipperException_t3118674656 * __this, String_t* ___description0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___description0;
		Exception__ctor_m1152696503(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128::.ctor(System.Int64,System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void Int128__ctor_m1790720025 (Int128_t2615162842 * __this, int64_t ____hi0, uint64_t ____lo1, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ____lo1;
		__this->set_lo_1(L_0);
		int64_t L_1 = ____hi0;
		__this->set_hi_0(L_1);
		return;
	}
}
extern "C"  void Int128__ctor_m1790720025_AdjustorThunk (RuntimeObject * __this, int64_t ____hi0, uint64_t ____lo1, const RuntimeMethod* method)
{
	Int128_t2615162842 * _thisAdjusted = reinterpret_cast<Int128_t2615162842 *>(__this + 1);
	Int128__ctor_m1790720025(_thisAdjusted, ____hi0, ____lo1, method);
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128::op_Equality(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128)
extern "C" IL2CPP_METHOD_ATTR bool Int128_op_Equality_m3178062132 (RuntimeObject * __this /* static, unused */, Int128_t2615162842  ___val10, Int128_t2615162842  ___val21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Int128_op_Equality_m3178062132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	{
		Int128_t2615162842  L_0 = ___val10;
		Int128_t2615162842  L_1 = L_0;
		RuntimeObject * L_2 = Box(Int128_t2615162842_il2cpp_TypeInfo_var, &L_1);
		Int128_t2615162842  L_3 = ___val21;
		Int128_t2615162842  L_4 = L_3;
		RuntimeObject * L_5 = Box(Int128_t2615162842_il2cpp_TypeInfo_var, &L_4);
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_2) == ((RuntimeObject*)(RuntimeObject *)L_5))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0017;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0055;
	}

IL_0017:
	{
	}
	{
		Int128_t2615162842  L_8 = ___val21;
		Int128_t2615162842  L_9 = L_8;
		RuntimeObject * L_10 = Box(Int128_t2615162842_il2cpp_TypeInfo_var, &L_9);
		G_B5_0 = ((((RuntimeObject*)(RuntimeObject *)L_10) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B5_0 = 1;
	}

IL_002b:
	{
		V_2 = (bool)G_B5_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0033;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0055;
	}

IL_0033:
	{
		Int128_t2615162842  L_12 = ___val10;
		int64_t L_13 = L_12.get_hi_0();
		Int128_t2615162842  L_14 = ___val21;
		int64_t L_15 = L_14.get_hi_0();
		if ((!(((uint64_t)L_13) == ((uint64_t)L_15))))
		{
			goto IL_0051;
		}
	}
	{
		Int128_t2615162842  L_16 = ___val10;
		uint64_t L_17 = L_16.get_lo_1();
		Int128_t2615162842  L_18 = ___val21;
		uint64_t L_19 = L_18.get_lo_1();
		G_B10_0 = ((((int64_t)L_17) == ((int64_t)L_19))? 1 : 0);
		goto IL_0052;
	}

IL_0051:
	{
		G_B10_0 = 0;
	}

IL_0052:
	{
		V_1 = (bool)G_B10_0;
		goto IL_0055;
	}

IL_0055:
	{
		bool L_20 = V_1;
		return L_20;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Int128_Equals_m2161341553 (Int128_t2615162842 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Int128_Equals_m2161341553_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int128_t2615162842  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		G_B3_0 = ((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, Int128_t2615162842_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0044;
	}

IL_001b:
	{
		RuntimeObject * L_3 = ___obj0;
		V_0 = ((*(Int128_t2615162842 *)((Int128_t2615162842 *)UnBox(L_3, Int128_t2615162842_il2cpp_TypeInfo_var))));
		Int128_t2615162842  L_4 = V_0;
		int64_t L_5 = L_4.get_hi_0();
		int64_t L_6 = __this->get_hi_0();
		if ((!(((uint64_t)L_5) == ((uint64_t)L_6))))
		{
			goto IL_0040;
		}
	}
	{
		Int128_t2615162842  L_7 = V_0;
		uint64_t L_8 = L_7.get_lo_1();
		uint64_t L_9 = __this->get_lo_1();
		G_B8_0 = ((((int64_t)L_8) == ((int64_t)L_9))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B8_0 = 0;
	}

IL_0041:
	{
		V_2 = (bool)G_B8_0;
		goto IL_0044;
	}

IL_0044:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
extern "C"  bool Int128_Equals_m2161341553_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	Int128_t2615162842 * _thisAdjusted = reinterpret_cast<Int128_t2615162842 *>(__this + 1);
	return Int128_Equals_m2161341553(_thisAdjusted, ___obj0, method);
}
// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Int128_GetHashCode_m948042182 (Int128_t2615162842 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int64_t* L_0 = __this->get_address_of_hi_0();
		int32_t L_1 = Int64_GetHashCode_m703091690((int64_t*)L_0, /*hidden argument*/NULL);
		uint64_t* L_2 = __this->get_address_of_lo_1();
		int32_t L_3 = UInt64_GetHashCode_m4209760355((uint64_t*)L_2, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_1^(int32_t)L_3));
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
extern "C"  int32_t Int128_GetHashCode_m948042182_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Int128_t2615162842 * _thisAdjusted = reinterpret_cast<Int128_t2615162842 *>(__this + 1);
	return Int128_GetHashCode_m948042182(_thisAdjusted, method);
}
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128::op_UnaryNegation(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128)
extern "C" IL2CPP_METHOD_ATTR Int128_t2615162842  Int128_op_UnaryNegation_m2590084368 (RuntimeObject * __this /* static, unused */, Int128_t2615162842  ___val0, const RuntimeMethod* method)
{
	bool V_0 = false;
	Int128_t2615162842  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Int128_t2615162842  L_0 = ___val0;
		uint64_t L_1 = L_0.get_lo_1();
		V_0 = (bool)((((int64_t)L_1) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int128_t2615162842  L_3 = ___val0;
		int64_t L_4 = L_3.get_hi_0();
		Int128_t2615162842  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Int128__ctor_m1790720025((&L_5), ((-L_4)), (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0039;
	}

IL_0020:
	{
		Int128_t2615162842  L_6 = ___val0;
		int64_t L_7 = L_6.get_hi_0();
		Int128_t2615162842  L_8 = ___val0;
		uint64_t L_9 = L_8.get_lo_1();
		Int128_t2615162842  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Int128__ctor_m1790720025((&L_10), ((~L_7)), ((int64_t)il2cpp_codegen_add((int64_t)((~L_9)), (int64_t)(((int64_t)((int64_t)1))))), /*hidden argument*/NULL);
		V_1 = L_10;
		goto IL_0039;
	}

IL_0039:
	{
		Int128_t2615162842  L_11 = V_1;
		return L_11;
	}
}
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128::Int128Mul(System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR Int128_t2615162842  Int128_Int128Mul_m3068794394 (RuntimeObject * __this /* static, unused */, int64_t ___lhs0, int64_t ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	int64_t V_9 = 0;
	Int128_t2615162842  V_10;
	memset(&V_10, 0, sizeof(V_10));
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	Int128_t2615162842  V_14;
	memset(&V_14, 0, sizeof(V_14));
	Int128_t2615162842  G_B9_0;
	memset(&G_B9_0, 0, sizeof(G_B9_0));
	{
		int64_t L_0 = ___lhs0;
		int64_t L_1 = ___rhs1;
		V_0 = (bool)((((int32_t)((((int32_t)((((int64_t)L_0) < ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)((((int64_t)L_1) < ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int64_t L_2 = ___lhs0;
		V_11 = (bool)((((int64_t)L_2) < ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_3 = V_11;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		int64_t L_4 = ___lhs0;
		___lhs0 = ((-L_4));
	}

IL_0020:
	{
		int64_t L_5 = ___rhs1;
		V_12 = (bool)((((int64_t)L_5) < ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_6 = V_12;
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		int64_t L_7 = ___rhs1;
		___rhs1 = ((-L_7));
	}

IL_002f:
	{
		int64_t L_8 = ___lhs0;
		V_1 = ((int64_t)((uint64_t)L_8>>((int32_t)32)));
		int64_t L_9 = ___lhs0;
		V_2 = ((int64_t)((int64_t)L_9&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))));
		int64_t L_10 = ___rhs1;
		V_3 = ((int64_t)((uint64_t)L_10>>((int32_t)32)));
		int64_t L_11 = ___rhs1;
		V_4 = ((int64_t)((int64_t)L_11&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))));
		uint64_t L_12 = V_1;
		uint64_t L_13 = V_3;
		V_5 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_12, (int64_t)L_13));
		uint64_t L_14 = V_2;
		uint64_t L_15 = V_4;
		V_6 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_14, (int64_t)L_15));
		uint64_t L_16 = V_1;
		uint64_t L_17 = V_4;
		uint64_t L_18 = V_2;
		uint64_t L_19 = V_3;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)), (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_18, (int64_t)L_19))));
		uint64_t L_20 = V_5;
		uint64_t L_21 = V_7;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, (int64_t)((int64_t)((uint64_t)L_21>>((int32_t)32)))));
		uint64_t L_22 = V_7;
		uint64_t L_23 = V_6;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_22<<(int32_t)((int32_t)32))), (int64_t)L_23));
		uint64_t L_24 = V_8;
		uint64_t L_25 = V_6;
		V_13 = (bool)((!(((uint64_t)L_24) >= ((uint64_t)L_25)))? 1 : 0);
		bool L_26 = V_13;
		if (!L_26)
		{
			goto IL_0082;
		}
	}
	{
		int64_t L_27 = V_9;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_27, (int64_t)(((int64_t)((int64_t)1)))));
	}

IL_0082:
	{
		int64_t L_28 = V_9;
		uint64_t L_29 = V_8;
		Int128__ctor_m1790720025((Int128_t2615162842 *)(&V_10), L_28, L_29, /*hidden argument*/NULL);
		bool L_30 = V_0;
		if (L_30)
		{
			goto IL_0094;
		}
	}
	{
		Int128_t2615162842  L_31 = V_10;
		G_B9_0 = L_31;
		goto IL_009b;
	}

IL_0094:
	{
		Int128_t2615162842  L_32 = V_10;
		Int128_t2615162842  L_33 = Int128_op_UnaryNegation_m2590084368(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		G_B9_0 = L_33;
	}

IL_009b:
	{
		V_14 = G_B9_0;
		goto IL_009f;
	}

IL_009f:
	{
		Int128_t2615162842  L_34 = V_14;
		return L_34;
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
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint::.ctor(System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void IntPoint__ctor_m3815773329 (IntPoint_t2327573135 * __this, int64_t ___X0, int64_t ___Y1, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___X0;
		__this->set_X_0(L_0);
		int64_t L_1 = ___Y1;
		__this->set_Y_1(L_1);
		return;
	}
}
extern "C"  void IntPoint__ctor_m3815773329_AdjustorThunk (RuntimeObject * __this, int64_t ___X0, int64_t ___Y1, const RuntimeMethod* method)
{
	IntPoint_t2327573135 * _thisAdjusted = reinterpret_cast<IntPoint_t2327573135 *>(__this + 1);
	IntPoint__ctor_m3815773329(_thisAdjusted, ___X0, ___Y1, method);
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint::.ctor(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR void IntPoint__ctor_m1795439093 (IntPoint_t2327573135 * __this, IntPoint_t2327573135  ___pt0, const RuntimeMethod* method)
{
	{
		IntPoint_t2327573135  L_0 = ___pt0;
		int64_t L_1 = L_0.get_X_0();
		__this->set_X_0(L_1);
		IntPoint_t2327573135  L_2 = ___pt0;
		int64_t L_3 = L_2.get_Y_1();
		__this->set_Y_1(L_3);
		return;
	}
}
extern "C"  void IntPoint__ctor_m1795439093_AdjustorThunk (RuntimeObject * __this, IntPoint_t2327573135  ___pt0, const RuntimeMethod* method)
{
	IntPoint_t2327573135 * _thisAdjusted = reinterpret_cast<IntPoint_t2327573135 *>(__this + 1);
	IntPoint__ctor_m1795439093(_thisAdjusted, ___pt0, method);
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint::op_Equality(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR bool IntPoint_op_Equality_m246719467 (RuntimeObject * __this /* static, unused */, IntPoint_t2327573135  ___a0, IntPoint_t2327573135  ___b1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		IntPoint_t2327573135  L_0 = ___a0;
		int64_t L_1 = L_0.get_X_0();
		IntPoint_t2327573135  L_2 = ___b1;
		int64_t L_3 = L_2.get_X_0();
		if ((!(((uint64_t)L_1) == ((uint64_t)L_3))))
		{
			goto IL_001f;
		}
	}
	{
		IntPoint_t2327573135  L_4 = ___a0;
		int64_t L_5 = L_4.get_Y_1();
		IntPoint_t2327573135  L_6 = ___b1;
		int64_t L_7 = L_6.get_Y_1();
		G_B3_0 = ((((int64_t)L_5) == ((int64_t)L_7))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint::op_Inequality(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint)
extern "C" IL2CPP_METHOD_ATTR bool IntPoint_op_Inequality_m2137021658 (RuntimeObject * __this /* static, unused */, IntPoint_t2327573135  ___a0, IntPoint_t2327573135  ___b1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		IntPoint_t2327573135  L_0 = ___a0;
		int64_t L_1 = L_0.get_X_0();
		IntPoint_t2327573135  L_2 = ___b1;
		int64_t L_3 = L_2.get_X_0();
		if ((!(((uint64_t)L_1) == ((uint64_t)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		IntPoint_t2327573135  L_4 = ___a0;
		int64_t L_5 = L_4.get_Y_1();
		IntPoint_t2327573135  L_6 = ___b1;
		int64_t L_7 = L_6.get_Y_1();
		G_B3_0 = ((((int32_t)((((int64_t)L_5) == ((int64_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 1;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool IntPoint_Equals_m2959216444 (IntPoint_t2327573135 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntPoint_Equals_m2959216444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	IntPoint_t2327573135  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t G_B6_0 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0048;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, IntPoint_t2327573135_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject * L_4 = ___obj0;
		V_3 = ((*(IntPoint_t2327573135 *)((IntPoint_t2327573135 *)UnBox(L_4, IntPoint_t2327573135_il2cpp_TypeInfo_var))));
		int64_t L_5 = __this->get_X_0();
		IntPoint_t2327573135  L_6 = V_3;
		int64_t L_7 = L_6.get_X_0();
		if ((!(((uint64_t)L_5) == ((uint64_t)L_7))))
		{
			goto IL_0040;
		}
	}
	{
		int64_t L_8 = __this->get_Y_1();
		IntPoint_t2327573135  L_9 = V_3;
		int64_t L_10 = L_9.get_Y_1();
		G_B6_0 = ((((int64_t)L_8) == ((int64_t)L_10))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B6_0 = 0;
	}

IL_0041:
	{
		V_1 = (bool)G_B6_0;
		goto IL_0048;
	}

IL_0044:
	{
		V_1 = (bool)0;
		goto IL_0048;
	}

IL_0048:
	{
		bool L_11 = V_1;
		return L_11;
	}
}
extern "C"  bool IntPoint_Equals_m2959216444_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	IntPoint_t2327573135 * _thisAdjusted = reinterpret_cast<IntPoint_t2327573135 *>(__this + 1);
	return IntPoint_Equals_m2959216444(_thisAdjusted, ___obj0, method);
}
// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t IntPoint_GetHashCode_m897251063 (IntPoint_t2327573135 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntPoint_GetHashCode_m897251063_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IntPoint_t2327573135  L_0 = (*(IntPoint_t2327573135 *)__this);
		RuntimeObject * L_1 = Box(IntPoint_t2327573135_il2cpp_TypeInfo_var, &L_0);
		NullCheck((ValueType_t3640485471 *)L_1);
		int32_t L_2 = ValueType_GetHashCode_m715362416((ValueType_t3640485471 *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
extern "C"  int32_t IntPoint_GetHashCode_m897251063_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	IntPoint_t2327573135 * _thisAdjusted = reinterpret_cast<IntPoint_t2327573135 *>(__this + 1);
	return IntPoint_GetHashCode_m897251063(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IntersectNode__ctor_m896529871 (IntersectNode_t3379514219 * __this, const RuntimeMethod* method)
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
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Join__ctor_m316918409 (Join_t2349011362 * __this, const RuntimeMethod* method)
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
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LocalMinima__ctor_m2131346182 (LocalMinima_t86068969 * __this, const RuntimeMethod* method)
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
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Maxima__ctor_m3291383381 (Maxima_t4278896992 * __this, const RuntimeMethod* method)
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
// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/MyIntersectNodeSort::Compare(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode,Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode)
extern "C" IL2CPP_METHOD_ATTR int32_t MyIntersectNodeSort_Compare_m1511610739 (MyIntersectNodeSort_t682547759 * __this, IntersectNode_t3379514219 * ___node10, IntersectNode_t3379514219 * ___node21, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		IntersectNode_t3379514219 * L_0 = ___node21;
		NullCheck(L_0);
		IntPoint_t2327573135 * L_1 = L_0->get_address_of_Pt_2();
		int64_t L_2 = L_1->get_Y_1();
		IntersectNode_t3379514219 * L_3 = ___node10;
		NullCheck(L_3);
		IntPoint_t2327573135 * L_4 = L_3->get_address_of_Pt_2();
		int64_t L_5 = L_4->get_Y_1();
		V_0 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_2, (int64_t)L_5));
		int64_t L_6 = V_0;
		V_1 = (bool)((((int64_t)L_6) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0026;
		}
	}
	{
		V_2 = 1;
		goto IL_0037;
	}

IL_0026:
	{
		int64_t L_8 = V_0;
		V_3 = (bool)((((int64_t)L_8) < ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0033;
		}
	}
	{
		V_2 = (-1);
		goto IL_0037;
	}

IL_0033:
	{
		V_2 = 0;
		goto IL_0037;
	}

IL_0037:
	{
		int32_t L_10 = V_2;
		return L_10;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/MyIntersectNodeSort::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MyIntersectNodeSort__ctor_m928340280 (MyIntersectNodeSort_t682547759 * __this, const RuntimeMethod* method)
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
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt::.ctor()
extern "C" IL2CPP_METHOD_ATTR void OutPt__ctor_m2666169316 (OutPt_t2591102706 * __this, const RuntimeMethod* method)
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
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec::.ctor()
extern "C" IL2CPP_METHOD_ATTR void OutRec__ctor_m289344415 (OutRec_t316877671 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::AddChild(Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode)
extern "C" IL2CPP_METHOD_ATTR void PolyNode_AddChild_m3254340323 (PolyNode_t1300984468 * __this, PolyNode_t1300984468 * ___Child0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PolyNode_AddChild_m3254340323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t2773059210 * L_0 = __this->get_m_Childs_3();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m613940410(L_0, /*hidden argument*/List_1_get_Count_m613940410_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t2773059210 * L_2 = __this->get_m_Childs_3();
		PolyNode_t1300984468 * L_3 = ___Child0;
		NullCheck(L_2);
		List_1_Add_m2668163909(L_2, L_3, /*hidden argument*/List_1_Add_m2668163909_RuntimeMethod_var);
		PolyNode_t1300984468 * L_4 = ___Child0;
		NullCheck(L_4);
		L_4->set_m_Parent_0(__this);
		PolyNode_t1300984468 * L_5 = ___Child0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		L_5->set_m_Index_2(L_6);
		return;
	}
}
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::get_Childs()
extern "C" IL2CPP_METHOD_ATTR List_1_t2773059210 * PolyNode_get_Childs_m1719303521 (PolyNode_t1300984468 * __this, const RuntimeMethod* method)
{
	List_1_t2773059210 * V_0 = NULL;
	{
		List_1_t2773059210 * L_0 = __this->get_m_Childs_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		List_1_t2773059210 * L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::get_IsOpen()
extern "C" IL2CPP_METHOD_ATTR bool PolyNode_get_IsOpen_m135974531 (PolyNode_t1300984468 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsOpenU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::set_IsOpen(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void PolyNode_set_IsOpen_m638335 (PolyNode_t1300984468 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsOpenU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PolyNode__ctor_m395933230 (PolyNode_t1300984468 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PolyNode__ctor_m395933230_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3799647877 * L_0 = (List_1_t3799647877 *)il2cpp_codegen_object_new(List_1_t3799647877_il2cpp_TypeInfo_var);
		List_1__ctor_m662080189(L_0, /*hidden argument*/List_1__ctor_m662080189_RuntimeMethod_var);
		__this->set_m_polygon_1(L_0);
		List_1_t2773059210 * L_1 = (List_1_t2773059210 *)il2cpp_codegen_object_new(List_1_t2773059210_il2cpp_TypeInfo_var);
		List_1__ctor_m2370664853(L_1, /*hidden argument*/List_1__ctor_m2370664853_RuntimeMethod_var);
		__this->set_m_Childs_3(L_1);
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
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyTree::Clear()
extern "C" IL2CPP_METHOD_ATTR void PolyTree_Clear_m2732860785 (PolyTree_t3708317675 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PolyTree_Clear_m2732860785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		List_1_t2773059210 * L_0 = __this->get_m_AllPolys_5();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m613940410(L_0, /*hidden argument*/List_1_get_Count_m613940410_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0025;
	}

IL_0011:
	{
		List_1_t2773059210 * L_2 = __this->get_m_AllPolys_5();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		List_1_set_Item_m1646382115(L_2, L_3, (PolyNode_t1300984468 *)NULL, /*hidden argument*/List_1_set_Item_m1646382115_RuntimeMethod_var);
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0025:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		V_2 = (bool)((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_0011;
		}
	}
	{
		List_1_t2773059210 * L_8 = __this->get_m_AllPolys_5();
		NullCheck(L_8);
		List_1_Clear_m4286208124(L_8, /*hidden argument*/List_1_Clear_m4286208124_RuntimeMethod_var);
		List_1_t2773059210 * L_9 = ((PolyNode_t1300984468 *)__this)->get_m_Childs_3();
		NullCheck(L_9);
		List_1_Clear_m4286208124(L_9, /*hidden argument*/List_1_Clear_m4286208124_RuntimeMethod_var);
		return;
	}
}
// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyTree::get_Total()
extern "C" IL2CPP_METHOD_ATTR int32_t PolyTree_get_Total_m3533407708 (PolyTree_t3708317675 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PolyTree_get_Total_m3533407708_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t2773059210 * L_0 = __this->get_m_AllPolys_5();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m613940410(L_0, /*hidden argument*/List_1_get_Count_m613940410_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		List_1_t2773059210 * L_3 = ((PolyNode_t1300984468 *)__this)->get_m_Childs_3();
		NullCheck(L_3);
		PolyNode_t1300984468 * L_4 = List_1_get_Item_m229336946(L_3, 0, /*hidden argument*/List_1_get_Item_m229336946_RuntimeMethod_var);
		List_1_t2773059210 * L_5 = __this->get_m_AllPolys_5();
		NullCheck(L_5);
		PolyNode_t1300984468 * L_6 = List_1_get_Item_m229336946(L_5, 0, /*hidden argument*/List_1_get_Item_m229336946_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)((((RuntimeObject*)(PolyNode_t1300984468 *)L_4) == ((RuntimeObject*)(PolyNode_t1300984468 *)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = 0;
	}

IL_0031:
	{
		V_1 = (bool)G_B3_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_9 = V_0;
		V_2 = L_9;
		goto IL_003d;
	}

IL_003d:
	{
		int32_t L_10 = V_2;
		return L_10;
	}
}
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyTree::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PolyTree__ctor_m3193473443 (PolyTree_t3708317675 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PolyTree__ctor_m3193473443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2773059210 * L_0 = (List_1_t2773059210 *)il2cpp_codegen_object_new(List_1_t2773059210_il2cpp_TypeInfo_var);
		List_1__ctor_m2370664853(L_0, /*hidden argument*/List_1__ctor_m2370664853_RuntimeMethod_var);
		__this->set_m_AllPolys_5(L_0);
		PolyNode__ctor_m395933230(__this, /*hidden argument*/NULL);
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
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Scanbeam::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Scanbeam__ctor_m2134228870 (Scanbeam_t3952834741 * __this, const RuntimeMethod* method)
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
// System.Void Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TEdge__ctor_m2585461453 (TEdge_t1694054893 * __this, const RuntimeMethod* method)
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
// System.Double Mapbox.VectorTile.Geometry.LatLng::get_Lat()
extern "C" IL2CPP_METHOD_ATTR double LatLng_get_Lat_m4162783761 (LatLng_t1304626312 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get_U3CLatU3Ek__BackingField_0();
		return L_0;
	}
}
extern "C"  double LatLng_get_Lat_m4162783761_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	LatLng_t1304626312 * _thisAdjusted = reinterpret_cast<LatLng_t1304626312 *>(__this + 1);
	return LatLng_get_Lat_m4162783761(_thisAdjusted, method);
}
// System.Void Mapbox.VectorTile.Geometry.LatLng::set_Lat(System.Double)
extern "C" IL2CPP_METHOD_ATTR void LatLng_set_Lat_m1802382718 (LatLng_t1304626312 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		double L_0 = ___value0;
		__this->set_U3CLatU3Ek__BackingField_0(L_0);
		return;
	}
}
extern "C"  void LatLng_set_Lat_m1802382718_AdjustorThunk (RuntimeObject * __this, double ___value0, const RuntimeMethod* method)
{
	LatLng_t1304626312 * _thisAdjusted = reinterpret_cast<LatLng_t1304626312 *>(__this + 1);
	LatLng_set_Lat_m1802382718(_thisAdjusted, ___value0, method);
}
// System.Double Mapbox.VectorTile.Geometry.LatLng::get_Lng()
extern "C" IL2CPP_METHOD_ATTR double LatLng_get_Lng_m3070828082 (LatLng_t1304626312 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get_U3CLngU3Ek__BackingField_1();
		return L_0;
	}
}
extern "C"  double LatLng_get_Lng_m3070828082_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	LatLng_t1304626312 * _thisAdjusted = reinterpret_cast<LatLng_t1304626312 *>(__this + 1);
	return LatLng_get_Lng_m3070828082(_thisAdjusted, method);
}
// System.Void Mapbox.VectorTile.Geometry.LatLng::set_Lng(System.Double)
extern "C" IL2CPP_METHOD_ATTR void LatLng_set_Lng_m4213309140 (LatLng_t1304626312 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		double L_0 = ___value0;
		__this->set_U3CLngU3Ek__BackingField_1(L_0);
		return;
	}
}
extern "C"  void LatLng_set_Lng_m4213309140_AdjustorThunk (RuntimeObject * __this, double ___value0, const RuntimeMethod* method)
{
	LatLng_t1304626312 * _thisAdjusted = reinterpret_cast<LatLng_t1304626312 *>(__this + 1);
	LatLng_set_Lng_m4213309140(_thisAdjusted, ___value0, method);
}
// System.String Mapbox.VectorTile.Geometry.LatLng::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* LatLng_ToString_m2732242640 (LatLng_t1304626312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LatLng_ToString_m2732242640_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatInfo_t435877138_il2cpp_TypeInfo_var);
		NumberFormatInfo_t435877138 * L_0 = NumberFormatInfo_get_InvariantInfo_m349577018(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		double L_3 = LatLng_get_Lat_m4162783761((LatLng_t1304626312 *)__this, /*hidden argument*/NULL);
		double L_4 = L_3;
		RuntimeObject * L_5 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_2;
		double L_7 = LatLng_get_Lng_m3070828082((LatLng_t1304626312 *)__this, /*hidden argument*/NULL);
		double L_8 = L_7;
		RuntimeObject * L_9 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Format_m1881875187(NULL /*static, unused*/, L_0, _stringLiteral3599782859, L_6, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_0035;
	}

IL_0035:
	{
		String_t* L_11 = V_0;
		return L_11;
	}
}
extern "C"  String_t* LatLng_ToString_m2732242640_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	LatLng_t1304626312 * _thisAdjusted = reinterpret_cast<LatLng_t1304626312 *>(__this + 1);
	return LatLng_ToString_m2732242640(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>> Mapbox.VectorTile.Geometry.UtilGeom::ClipGeometries(System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>,Mapbox.VectorTile.Geometry.GeomType,System.Int64,System.UInt32,System.Single)
extern "C" IL2CPP_METHOD_ATTR List_1_t3374746317 * UtilGeom_ClipGeometries_m3460887927 (RuntimeObject * __this /* static, unused */, List_1_t3374746317 * ___geoms0, int32_t ___geomType1, int64_t ___extent2, uint32_t ___bufferSize3, float ___scale4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UtilGeom_ClipGeometries_m3460887927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3374746317 * V_0 = NULL;
	bool V_1 = false;
	List_1_t976755323 * V_2 = NULL;
	List_1_t976755323 * V_3 = NULL;
	List_1_t976755323 * V_4 = NULL;
	Clipper_t4158555122 * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	Enumerator_t969022898  V_8;
	memset(&V_8, 0, sizeof(V_8));
	List_1_t1902671575 * V_9 = NULL;
	List_1_t1902671575 * V_10 = NULL;
	Enumerator_t3791915452  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Point2d_1_t430596833  V_12;
	memset(&V_12, 0, sizeof(V_12));
	bool V_13 = false;
	bool V_14 = false;
	List_1_t3374746317 * V_15 = NULL;
	bool V_16 = false;
	Enumerator_t969022898  V_17;
	memset(&V_17, 0, sizeof(V_17));
	List_1_t1902671575 * V_18 = NULL;
	List_1_t3799647877 * V_19 = NULL;
	Enumerator_t3791915452  V_20;
	memset(&V_20, 0, sizeof(V_20));
	Point2d_1_t430596833  V_21;
	memset(&V_21, 0, sizeof(V_21));
	bool V_22 = false;
	PolyTree_t3708317675 * V_23 = NULL;
	bool V_24 = false;
	bool V_25 = false;
	Enumerator_t2865999200  V_26;
	memset(&V_26, 0, sizeof(V_26));
	List_1_t3799647877 * V_27 = NULL;
	List_1_t1902671575 * V_28 = NULL;
	Enumerator_t1393924458  V_29;
	memset(&V_29, 0, sizeof(V_29));
	IntPoint_t2327573135  V_30;
	memset(&V_30, 0, sizeof(V_30));
	Point2d_1_t430596833  V_31;
	memset(&V_31, 0, sizeof(V_31));
	bool V_32 = false;
	bool V_33 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B10_0 = 0;
	{
		List_1_t3374746317 * L_0 = (List_1_t3374746317 *)il2cpp_codegen_object_new(List_1_t3374746317_il2cpp_TypeInfo_var);
		List_1__ctor_m3363723201(L_0, /*hidden argument*/List_1__ctor_m3363723201_RuntimeMethod_var);
		V_0 = L_0;
		int32_t L_1 = ___geomType1;
		V_7 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		bool L_2 = V_7;
		if (!L_2)
		{
			goto IL_00f2;
		}
	}
	{
		List_1_t3374746317 * L_3 = ___geoms0;
		NullCheck(L_3);
		Enumerator_t969022898  L_4 = List_1_GetEnumerator_m2038359400(L_3, /*hidden argument*/List_1_GetEnumerator_m2038359400_RuntimeMethod_var);
		V_8 = L_4;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00cd;
		}

IL_0023:
		{
			List_1_t1902671575 * L_5 = Enumerator_get_Current_m2305517609((Enumerator_t969022898 *)(&V_8), /*hidden argument*/Enumerator_get_Current_m2305517609_RuntimeMethod_var);
			V_9 = L_5;
			List_1_t1902671575 * L_6 = (List_1_t1902671575 *)il2cpp_codegen_object_new(List_1_t1902671575_il2cpp_TypeInfo_var);
			List_1__ctor_m3071334132(L_6, /*hidden argument*/List_1__ctor_m3071334132_RuntimeMethod_var);
			V_10 = L_6;
			List_1_t1902671575 * L_7 = V_9;
			NullCheck(L_7);
			Enumerator_t3791915452  L_8 = List_1_GetEnumerator_m168500892(L_7, /*hidden argument*/List_1_GetEnumerator_m168500892_RuntimeMethod_var);
			V_11 = L_8;
		}

IL_003e:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0097;
			}

IL_0040:
			{
				Point2d_1_t430596833  L_9 = Enumerator_get_Current_m3843371202((Enumerator_t3791915452 *)(&V_11), /*hidden argument*/Enumerator_get_Current_m3843371202_RuntimeMethod_var);
				V_12 = L_9;
				Point2d_1_t430596833  L_10 = V_12;
				int64_t L_11 = L_10.get_X_0();
				uint32_t L_12 = ___bufferSize3;
				if ((((int64_t)L_11) < ((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)(((int64_t)((int64_t)0))), (int64_t)(((int64_t)((uint64_t)L_12))))))))
				{
					goto IL_0082;
				}
			}

IL_0058:
			{
				Point2d_1_t430596833  L_13 = V_12;
				int64_t L_14 = L_13.get_Y_1();
				uint32_t L_15 = ___bufferSize3;
				if ((((int64_t)L_14) < ((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)(((int64_t)((int64_t)0))), (int64_t)(((int64_t)((uint64_t)L_15))))))))
				{
					goto IL_0082;
				}
			}

IL_0066:
			{
				Point2d_1_t430596833  L_16 = V_12;
				int64_t L_17 = L_16.get_X_0();
				int64_t L_18 = ___extent2;
				uint32_t L_19 = ___bufferSize3;
				if ((((int64_t)L_17) > ((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_18, (int64_t)(((int64_t)((uint64_t)L_19))))))))
				{
					goto IL_0082;
				}
			}

IL_0073:
			{
				Point2d_1_t430596833  L_20 = V_12;
				int64_t L_21 = L_20.get_Y_1();
				int64_t L_22 = ___extent2;
				uint32_t L_23 = ___bufferSize3;
				G_B10_0 = ((((int64_t)L_21) > ((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_22, (int64_t)(((int64_t)((uint64_t)L_23)))))))? 1 : 0);
				goto IL_0083;
			}

IL_0082:
			{
				G_B10_0 = 1;
			}

IL_0083:
			{
				V_13 = (bool)G_B10_0;
				bool L_24 = V_13;
				if (!L_24)
				{
					goto IL_008c;
				}
			}

IL_0089:
			{
				goto IL_0097;
			}

IL_008c:
			{
				List_1_t1902671575 * L_25 = V_10;
				Point2d_1_t430596833  L_26 = V_12;
				NullCheck(L_25);
				List_1_Add_m525322066(L_25, L_26, /*hidden argument*/List_1_Add_m525322066_RuntimeMethod_var);
			}

IL_0097:
			{
				bool L_27 = Enumerator_MoveNext_m3252576324((Enumerator_t3791915452 *)(&V_11), /*hidden argument*/Enumerator_MoveNext_m3252576324_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_0040;
				}
			}

IL_00a0:
			{
				IL2CPP_LEAVE(0xB1, FINALLY_00a2);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00a2;
		}

FINALLY_00a2:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m1629134392((Enumerator_t3791915452 *)(&V_11), /*hidden argument*/Enumerator_Dispose_m1629134392_RuntimeMethod_var);
			IL2CPP_END_FINALLY(162)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(162)
		{
			IL2CPP_JUMP_TBL(0xB1, IL_00b1)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00b1:
		{
			List_1_t1902671575 * L_28 = V_10;
			NullCheck(L_28);
			int32_t L_29 = List_1_get_Count_m5074056(L_28, /*hidden argument*/List_1_get_Count_m5074056_RuntimeMethod_var);
			V_14 = (bool)((((int32_t)L_29) > ((int32_t)0))? 1 : 0);
			bool L_30 = V_14;
			if (!L_30)
			{
				goto IL_00cc;
			}
		}

IL_00c1:
		{
			List_1_t3374746317 * L_31 = V_0;
			List_1_t1902671575 * L_32 = V_10;
			NullCheck(L_31);
			List_1_Add_m4058561955(L_31, L_32, /*hidden argument*/List_1_Add_m4058561955_RuntimeMethod_var);
		}

IL_00cc:
		{
		}

IL_00cd:
		{
			bool L_33 = Enumerator_MoveNext_m3241215966((Enumerator_t969022898 *)(&V_8), /*hidden argument*/Enumerator_MoveNext_m3241215966_RuntimeMethod_var);
			if (L_33)
			{
				goto IL_0023;
			}
		}

IL_00d9:
		{
			IL2CPP_LEAVE(0xEA, FINALLY_00db);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00db;
	}

FINALLY_00db:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3919971796((Enumerator_t969022898 *)(&V_8), /*hidden argument*/Enumerator_Dispose_m3919971796_RuntimeMethod_var);
		IL2CPP_END_FINALLY(219)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(219)
	{
		IL2CPP_JUMP_TBL(0xEA, IL_00ea)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ea:
	{
		List_1_t3374746317 * L_34 = V_0;
		V_15 = L_34;
		goto IL_03a1;
	}

IL_00f2:
	{
		V_1 = (bool)1;
		int32_t L_35 = ___geomType1;
		V_16 = (bool)((((int32_t)L_35) == ((int32_t)2))? 1 : 0);
		bool L_36 = V_16;
		if (!L_36)
		{
			goto IL_0102;
		}
	}
	{
		V_1 = (bool)0;
	}

IL_0102:
	{
		List_1_t976755323 * L_37 = (List_1_t976755323 *)il2cpp_codegen_object_new(List_1_t976755323_il2cpp_TypeInfo_var);
		List_1__ctor_m1623597007(L_37, /*hidden argument*/List_1__ctor_m1623597007_RuntimeMethod_var);
		V_2 = L_37;
		List_1_t976755323 * L_38 = (List_1_t976755323 *)il2cpp_codegen_object_new(List_1_t976755323_il2cpp_TypeInfo_var);
		List_1__ctor_m4019536950(L_38, 1, /*hidden argument*/List_1__ctor_m4019536950_RuntimeMethod_var);
		V_3 = L_38;
		List_1_t976755323 * L_39 = (List_1_t976755323 *)il2cpp_codegen_object_new(List_1_t976755323_il2cpp_TypeInfo_var);
		List_1__ctor_m1623597007(L_39, /*hidden argument*/List_1__ctor_m1623597007_RuntimeMethod_var);
		V_4 = L_39;
		List_1_t976755323 * L_40 = V_3;
		List_1_t3799647877 * L_41 = (List_1_t3799647877 *)il2cpp_codegen_object_new(List_1_t3799647877_il2cpp_TypeInfo_var);
		List_1__ctor_m3836626604(L_41, 4, /*hidden argument*/List_1__ctor_m3836626604_RuntimeMethod_var);
		NullCheck(L_40);
		List_1_Add_m2003227107(L_40, L_41, /*hidden argument*/List_1_Add_m2003227107_RuntimeMethod_var);
		List_1_t976755323 * L_42 = V_3;
		NullCheck(L_42);
		List_1_t3799647877 * L_43 = List_1_get_Item_m2952603493(L_42, 0, /*hidden argument*/List_1_get_Item_m2952603493_RuntimeMethod_var);
		uint32_t L_44 = ___bufferSize3;
		uint32_t L_45 = ___bufferSize3;
		IntPoint_t2327573135  L_46;
		memset(&L_46, 0, sizeof(L_46));
		IntPoint__ctor_m3815773329((&L_46), ((int64_t)il2cpp_codegen_subtract((int64_t)(((int64_t)((int64_t)0))), (int64_t)(((int64_t)((uint64_t)L_44))))), ((int64_t)il2cpp_codegen_subtract((int64_t)(((int64_t)((int64_t)0))), (int64_t)(((int64_t)((uint64_t)L_45))))), /*hidden argument*/NULL);
		NullCheck(L_43);
		List_1_Add_m2426393733(L_43, L_46, /*hidden argument*/List_1_Add_m2426393733_RuntimeMethod_var);
		List_1_t976755323 * L_47 = V_3;
		NullCheck(L_47);
		List_1_t3799647877 * L_48 = List_1_get_Item_m2952603493(L_47, 0, /*hidden argument*/List_1_get_Item_m2952603493_RuntimeMethod_var);
		int64_t L_49 = ___extent2;
		uint32_t L_50 = ___bufferSize3;
		uint32_t L_51 = ___bufferSize3;
		IntPoint_t2327573135  L_52;
		memset(&L_52, 0, sizeof(L_52));
		IntPoint__ctor_m3815773329((&L_52), ((int64_t)il2cpp_codegen_add((int64_t)L_49, (int64_t)(((int64_t)((uint64_t)L_50))))), ((int64_t)il2cpp_codegen_subtract((int64_t)(((int64_t)((int64_t)0))), (int64_t)(((int64_t)((uint64_t)L_51))))), /*hidden argument*/NULL);
		NullCheck(L_48);
		List_1_Add_m2426393733(L_48, L_52, /*hidden argument*/List_1_Add_m2426393733_RuntimeMethod_var);
		List_1_t976755323 * L_53 = V_3;
		NullCheck(L_53);
		List_1_t3799647877 * L_54 = List_1_get_Item_m2952603493(L_53, 0, /*hidden argument*/List_1_get_Item_m2952603493_RuntimeMethod_var);
		int64_t L_55 = ___extent2;
		uint32_t L_56 = ___bufferSize3;
		int64_t L_57 = ___extent2;
		uint32_t L_58 = ___bufferSize3;
		IntPoint_t2327573135  L_59;
		memset(&L_59, 0, sizeof(L_59));
		IntPoint__ctor_m3815773329((&L_59), ((int64_t)il2cpp_codegen_add((int64_t)L_55, (int64_t)(((int64_t)((uint64_t)L_56))))), ((int64_t)il2cpp_codegen_add((int64_t)L_57, (int64_t)(((int64_t)((uint64_t)L_58))))), /*hidden argument*/NULL);
		NullCheck(L_54);
		List_1_Add_m2426393733(L_54, L_59, /*hidden argument*/List_1_Add_m2426393733_RuntimeMethod_var);
		List_1_t976755323 * L_60 = V_3;
		NullCheck(L_60);
		List_1_t3799647877 * L_61 = List_1_get_Item_m2952603493(L_60, 0, /*hidden argument*/List_1_get_Item_m2952603493_RuntimeMethod_var);
		uint32_t L_62 = ___bufferSize3;
		int64_t L_63 = ___extent2;
		uint32_t L_64 = ___bufferSize3;
		IntPoint_t2327573135  L_65;
		memset(&L_65, 0, sizeof(L_65));
		IntPoint__ctor_m3815773329((&L_65), ((int64_t)il2cpp_codegen_subtract((int64_t)(((int64_t)((int64_t)0))), (int64_t)(((int64_t)((uint64_t)L_62))))), ((int64_t)il2cpp_codegen_add((int64_t)L_63, (int64_t)(((int64_t)((uint64_t)L_64))))), /*hidden argument*/NULL);
		NullCheck(L_61);
		List_1_Add_m2426393733(L_61, L_65, /*hidden argument*/List_1_Add_m2426393733_RuntimeMethod_var);
		List_1_t3374746317 * L_66 = ___geoms0;
		NullCheck(L_66);
		Enumerator_t969022898  L_67 = List_1_GetEnumerator_m2038359400(L_66, /*hidden argument*/List_1_GetEnumerator_m2038359400_RuntimeMethod_var);
		V_17 = L_67;
	}

IL_0198:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0201;
		}

IL_019a:
		{
			List_1_t1902671575 * L_68 = Enumerator_get_Current_m2305517609((Enumerator_t969022898 *)(&V_17), /*hidden argument*/Enumerator_get_Current_m2305517609_RuntimeMethod_var);
			V_18 = L_68;
			List_1_t3799647877 * L_69 = (List_1_t3799647877 *)il2cpp_codegen_object_new(List_1_t3799647877_il2cpp_TypeInfo_var);
			List_1__ctor_m662080189(L_69, /*hidden argument*/List_1__ctor_m662080189_RuntimeMethod_var);
			V_19 = L_69;
			List_1_t1902671575 * L_70 = V_18;
			NullCheck(L_70);
			Enumerator_t3791915452  L_71 = List_1_GetEnumerator_m168500892(L_70, /*hidden argument*/List_1_GetEnumerator_m168500892_RuntimeMethod_var);
			V_20 = L_71;
		}

IL_01b5:
		try
		{ // begin try (depth: 2)
			{
				goto IL_01dd;
			}

IL_01b7:
			{
				Point2d_1_t430596833  L_72 = Enumerator_get_Current_m3843371202((Enumerator_t3791915452 *)(&V_20), /*hidden argument*/Enumerator_get_Current_m3843371202_RuntimeMethod_var);
				V_21 = L_72;
				List_1_t3799647877 * L_73 = V_19;
				Point2d_1_t430596833  L_74 = V_21;
				int64_t L_75 = L_74.get_X_0();
				Point2d_1_t430596833  L_76 = V_21;
				int64_t L_77 = L_76.get_Y_1();
				IntPoint_t2327573135  L_78;
				memset(&L_78, 0, sizeof(L_78));
				IntPoint__ctor_m3815773329((&L_78), L_75, L_77, /*hidden argument*/NULL);
				NullCheck(L_73);
				List_1_Add_m2426393733(L_73, L_78, /*hidden argument*/List_1_Add_m2426393733_RuntimeMethod_var);
			}

IL_01dd:
			{
				bool L_79 = Enumerator_MoveNext_m3252576324((Enumerator_t3791915452 *)(&V_20), /*hidden argument*/Enumerator_MoveNext_m3252576324_RuntimeMethod_var);
				if (L_79)
				{
					goto IL_01b7;
				}
			}

IL_01e6:
			{
				IL2CPP_LEAVE(0x1F7, FINALLY_01e8);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01e8;
		}

FINALLY_01e8:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m1629134392((Enumerator_t3791915452 *)(&V_20), /*hidden argument*/Enumerator_Dispose_m1629134392_RuntimeMethod_var);
			IL2CPP_END_FINALLY(488)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(488)
		{
			IL2CPP_JUMP_TBL(0x1F7, IL_01f7)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_01f7:
		{
			List_1_t976755323 * L_80 = V_2;
			List_1_t3799647877 * L_81 = V_19;
			NullCheck(L_80);
			List_1_Add_m2003227107(L_80, L_81, /*hidden argument*/List_1_Add_m2003227107_RuntimeMethod_var);
		}

IL_0201:
		{
			bool L_82 = Enumerator_MoveNext_m3241215966((Enumerator_t969022898 *)(&V_17), /*hidden argument*/Enumerator_MoveNext_m3241215966_RuntimeMethod_var);
			if (L_82)
			{
				goto IL_019a;
			}
		}

IL_020a:
		{
			IL2CPP_LEAVE(0x21B, FINALLY_020c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_020c;
	}

FINALLY_020c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3919971796((Enumerator_t969022898 *)(&V_17), /*hidden argument*/Enumerator_Dispose_m3919971796_RuntimeMethod_var);
		IL2CPP_END_FINALLY(524)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(524)
	{
		IL2CPP_JUMP_TBL(0x21B, IL_021b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_021b:
	{
		Clipper_t4158555122 * L_83 = (Clipper_t4158555122 *)il2cpp_codegen_object_new(Clipper_t4158555122_il2cpp_TypeInfo_var);
		Clipper__ctor_m4161462815(L_83, 0, /*hidden argument*/NULL);
		V_5 = L_83;
		Clipper_t4158555122 * L_84 = V_5;
		List_1_t976755323 * L_85 = V_2;
		bool L_86 = V_1;
		NullCheck(L_84);
		ClipperBase_AddPaths_m736258290(L_84, L_85, 0, L_86, /*hidden argument*/NULL);
		Clipper_t4158555122 * L_87 = V_5;
		List_1_t976755323 * L_88 = V_3;
		NullCheck(L_87);
		ClipperBase_AddPaths_m736258290(L_87, L_88, 1, (bool)1, /*hidden argument*/NULL);
		V_6 = (bool)0;
		int32_t L_89 = ___geomType1;
		V_22 = (bool)((((int32_t)L_89) == ((int32_t)2))? 1 : 0);
		bool L_90 = V_22;
		if (!L_90)
		{
			goto IL_0272;
		}
	}
	{
		PolyTree_t3708317675 * L_91 = (PolyTree_t3708317675 *)il2cpp_codegen_object_new(PolyTree_t3708317675_il2cpp_TypeInfo_var);
		PolyTree__ctor_m3193473443(L_91, /*hidden argument*/NULL);
		V_23 = L_91;
		Clipper_t4158555122 * L_92 = V_5;
		PolyTree_t3708317675 * L_93 = V_23;
		NullCheck(L_92);
		bool L_94 = Clipper_Execute_m84679915(L_92, 0, L_93, 1, 1, /*hidden argument*/NULL);
		V_6 = L_94;
		bool L_95 = V_6;
		V_24 = L_95;
		bool L_96 = V_24;
		if (!L_96)
		{
			goto IL_026f;
		}
	}
	{
		PolyTree_t3708317675 * L_97 = V_23;
		List_1_t976755323 * L_98 = Clipper_PolyTreeToPaths_m2508326341(NULL /*static, unused*/, L_97, /*hidden argument*/NULL);
		V_4 = L_98;
	}

IL_026f:
	{
		goto IL_0282;
	}

IL_0272:
	{
		Clipper_t4158555122 * L_99 = V_5;
		List_1_t976755323 * L_100 = V_4;
		NullCheck(L_99);
		bool L_101 = Clipper_Execute_m3531475587(L_99, 0, L_100, 1, 1, /*hidden argument*/NULL);
		V_6 = L_101;
	}

IL_0282:
	{
		bool L_102 = V_6;
		V_25 = L_102;
		bool L_103 = V_25;
		if (!L_103)
		{
			goto IL_039b;
		}
	}
	{
		List_1_t3374746317 * L_104 = (List_1_t3374746317 *)il2cpp_codegen_object_new(List_1_t3374746317_il2cpp_TypeInfo_var);
		List_1__ctor_m3363723201(L_104, /*hidden argument*/List_1__ctor_m3363723201_RuntimeMethod_var);
		V_0 = L_104;
		List_1_t976755323 * L_105 = V_4;
		NullCheck(L_105);
		Enumerator_t2865999200  L_106 = List_1_GetEnumerator_m1025021732(L_105, /*hidden argument*/List_1_GetEnumerator_m1025021732_RuntimeMethod_var);
		V_26 = L_106;
	}

IL_029e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0379;
		}

IL_02a3:
		{
			List_1_t3799647877 * L_107 = Enumerator_get_Current_m2583456201((Enumerator_t2865999200 *)(&V_26), /*hidden argument*/Enumerator_get_Current_m2583456201_RuntimeMethod_var);
			V_27 = L_107;
			List_1_t1902671575 * L_108 = (List_1_t1902671575 *)il2cpp_codegen_object_new(List_1_t1902671575_il2cpp_TypeInfo_var);
			List_1__ctor_m3071334132(L_108, /*hidden argument*/List_1__ctor_m3071334132_RuntimeMethod_var);
			V_28 = L_108;
			List_1_t3799647877 * L_109 = V_27;
			NullCheck(L_109);
			Enumerator_t1393924458  L_110 = List_1_GetEnumerator_m531684481(L_109, /*hidden argument*/List_1_GetEnumerator_m531684481_RuntimeMethod_var);
			V_29 = L_110;
		}

IL_02be:
		try
		{ // begin try (depth: 2)
			{
				goto IL_02f9;
			}

IL_02c0:
			{
				IntPoint_t2327573135  L_111 = Enumerator_get_Current_m713232202((Enumerator_t1393924458 *)(&V_29), /*hidden argument*/Enumerator_get_Current_m713232202_RuntimeMethod_var);
				V_30 = L_111;
				List_1_t1902671575 * L_112 = V_28;
				il2cpp_codegen_initobj((&V_31), sizeof(Point2d_1_t430596833 ));
				IntPoint_t2327573135  L_113 = V_30;
				int64_t L_114 = L_113.get_X_0();
				(&V_31)->set_X_0(L_114);
				IntPoint_t2327573135  L_115 = V_30;
				int64_t L_116 = L_115.get_Y_1();
				(&V_31)->set_Y_1(L_116);
				Point2d_1_t430596833  L_117 = V_31;
				NullCheck(L_112);
				List_1_Add_m525322066(L_112, L_117, /*hidden argument*/List_1_Add_m525322066_RuntimeMethod_var);
			}

IL_02f9:
			{
				bool L_118 = Enumerator_MoveNext_m47157718((Enumerator_t1393924458 *)(&V_29), /*hidden argument*/Enumerator_MoveNext_m47157718_RuntimeMethod_var);
				if (L_118)
				{
					goto IL_02c0;
				}
			}

IL_0302:
			{
				IL2CPP_LEAVE(0x313, FINALLY_0304);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0304;
		}

FINALLY_0304:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m1296738317((Enumerator_t1393924458 *)(&V_29), /*hidden argument*/Enumerator_Dispose_m1296738317_RuntimeMethod_var);
			IL2CPP_END_FINALLY(772)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(772)
		{
			IL2CPP_JUMP_TBL(0x313, IL_0313)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0313:
		{
			int32_t L_119 = ___geomType1;
			V_32 = (bool)((((int32_t)L_119) == ((int32_t)3))? 1 : 0);
			bool L_120 = V_32;
			if (!L_120)
			{
				goto IL_036f;
			}
		}

IL_031d:
		{
			List_1_t1902671575 * L_121 = V_28;
			NullCheck(L_121);
			Point2d_1_t430596833  L_122 = List_1_get_Item_m1111031903(L_121, 0, /*hidden argument*/List_1_get_Item_m1111031903_RuntimeMethod_var);
			V_31 = L_122;
			List_1_t1902671575 * L_123 = V_28;
			List_1_t1902671575 * L_124 = V_28;
			NullCheck(L_124);
			int32_t L_125 = List_1_get_Count_m5074056(L_124, /*hidden argument*/List_1_get_Count_m5074056_RuntimeMethod_var);
			NullCheck(L_123);
			Point2d_1_t430596833  L_126 = List_1_get_Item_m1111031903(L_123, ((int32_t)il2cpp_codegen_subtract((int32_t)L_125, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1111031903_RuntimeMethod_var);
			Point2d_1_t430596833  L_127 = L_126;
			RuntimeObject * L_128 = Box(Point2d_1_t430596833_il2cpp_TypeInfo_var, &L_127);
			RuntimeObject * L_129 = Box(Point2d_1_t430596833_il2cpp_TypeInfo_var, (&V_31));
			NullCheck(L_129);
			bool L_130 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_129, L_128);
			V_31 = *(Point2d_1_t430596833 *)UnBox(L_129);
			V_33 = (bool)((((int32_t)L_130) == ((int32_t)0))? 1 : 0);
			bool L_131 = V_33;
			if (!L_131)
			{
				goto IL_036e;
			}
		}

IL_0353:
		{
			List_1_t1902671575 * L_132 = V_28;
			List_1_t1902671575 * L_133 = V_28;
			List_1_t1902671575 * L_134 = V_28;
			NullCheck(L_134);
			int32_t L_135 = List_1_get_Count_m5074056(L_134, /*hidden argument*/List_1_get_Count_m5074056_RuntimeMethod_var);
			NullCheck(L_133);
			Point2d_1_t430596833  L_136 = List_1_get_Item_m1111031903(L_133, ((int32_t)il2cpp_codegen_subtract((int32_t)L_135, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1111031903_RuntimeMethod_var);
			NullCheck(L_132);
			List_1_Insert_m2826020932(L_132, 0, L_136, /*hidden argument*/List_1_Insert_m2826020932_RuntimeMethod_var);
		}

IL_036e:
		{
		}

IL_036f:
		{
			List_1_t3374746317 * L_137 = V_0;
			List_1_t1902671575 * L_138 = V_28;
			NullCheck(L_137);
			List_1_Add_m4058561955(L_137, L_138, /*hidden argument*/List_1_Add_m4058561955_RuntimeMethod_var);
		}

IL_0379:
		{
			bool L_139 = Enumerator_MoveNext_m1025732668((Enumerator_t2865999200 *)(&V_26), /*hidden argument*/Enumerator_MoveNext_m1025732668_RuntimeMethod_var);
			if (L_139)
			{
				goto IL_02a3;
			}
		}

IL_0385:
		{
			IL2CPP_LEAVE(0x396, FINALLY_0387);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0387;
	}

FINALLY_0387:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3359721649((Enumerator_t2865999200 *)(&V_26), /*hidden argument*/Enumerator_Dispose_m3359721649_RuntimeMethod_var);
		IL2CPP_END_FINALLY(903)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(903)
	{
		IL2CPP_JUMP_TBL(0x396, IL_0396)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0396:
	{
		List_1_t3374746317 * L_140 = V_0;
		V_15 = L_140;
		goto IL_03a1;
	}

IL_039b:
	{
		List_1_t3374746317 * L_141 = ___geoms0;
		V_15 = L_141;
		goto IL_03a1;
	}

IL_03a1:
	{
		List_1_t3374746317 * L_142 = V_15;
		return L_142;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
