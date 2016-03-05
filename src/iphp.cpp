#define WIN32_LEAN_AND_MEAN 1
#include <windows.h>
#include "InitState.h"
#include "console/console.h"

#define BOOST_PP_VARIADICS 1
#include <boost/preprocessor/iteration/local.hpp>
#include <boost/preprocessor/list/for_each.hpp>
#include <boost/preprocessor/variadic/to_list.hpp>
#include <boost/preprocessor.hpp>

#include <memory>

#pragma pack(1)

FARPROC p[267] = {0};

#define EXPORT_FUNCTIONS_P0 BOOST_PP_VARIADIC_TO_LIST( "AddIPAddress", "AllocateAndGetInterfaceInfoFromStack", "AllocateAndGetIpAddrTableFromStack", "CancelIPChangeNotify", "CancelMibChangeNotify2")
#define EXPORT_FUNCTIONS_P1 BOOST_PP_VARIADIC_TO_LIST( "CloseCompartment", "CloseGetIPPhysicalInterfaceForDestination", "ConvertCompartmentGuidToId", "ConvertCompartmentIdToGuid", "ConvertGuidToStringA")
#define EXPORT_FUNCTIONS_P2 BOOST_PP_VARIADIC_TO_LIST( "ConvertGuidToStringW", "ConvertInterfaceAliasToLuid", "ConvertInterfaceGuidToLuid", "ConvertInterfaceIndexToLuid", "ConvertInterfaceLuidToAlias")
#define EXPORT_FUNCTIONS_P3 BOOST_PP_VARIADIC_TO_LIST( "ConvertInterfaceLuidToGuid", "ConvertInterfaceLuidToIndex", "ConvertInterfaceLuidToNameA", "ConvertInterfaceLuidToNameW", "ConvertInterfaceNameToLuidA")
#define EXPORT_FUNCTIONS_P4 BOOST_PP_VARIADIC_TO_LIST( "ConvertInterfaceNameToLuidW", "ConvertInterfacePhysicalAddressToLuid", "ConvertIpv4MaskToLength", "ConvertLengthToIpv4Mask", "ConvertRemoteInterfaceAliasToLuid")
#define EXPORT_FUNCTIONS_P5 BOOST_PP_VARIADIC_TO_LIST( "ConvertRemoteInterfaceGuidToLuid", "ConvertRemoteInterfaceIndexToLuid", "ConvertRemoteInterfaceLuidToAlias", "ConvertRemoteInterfaceLuidToGuid", "ConvertRemoteInterfaceLuidToIndex")
#define EXPORT_FUNCTIONS_P6 BOOST_PP_VARIADIC_TO_LIST( "ConvertStringToGuidA", "ConvertStringToGuidW", "ConvertStringToInterfacePhysicalAddress", "CreateAnycastIpAddressEntry", "CreateIpForwardEntry")
#define EXPORT_FUNCTIONS_P7 BOOST_PP_VARIADIC_TO_LIST( "CreateIpForwardEntry2", "CreateIpNetEntry", "CreateIpNetEntry2", "CreatePersistentTcpPortReservation", "CreatePersistentUdpPortReservation")
#define EXPORT_FUNCTIONS_P8 BOOST_PP_VARIADIC_TO_LIST( "CreateProxyArpEntry", "CreateSortedAddressPairs", "CreateUnicastIpAddressEntry", "DeleteAnycastIpAddressEntry", "DeleteIPAddress")
#define EXPORT_FUNCTIONS_P9 BOOST_PP_VARIADIC_TO_LIST( "DeleteIpForwardEntry", "DeleteIpForwardEntry2", "DeleteIpNetEntry", "DeleteIpNetEntry2", "DeletePersistentTcpPortReservation")
#define EXPORT_FUNCTIONS_P10 BOOST_PP_VARIADIC_TO_LIST( "DeletePersistentUdpPortReservation", "DeleteProxyArpEntry", "DeleteUnicastIpAddressEntry", "DisableMediaSense", "EnableRouter")
#define EXPORT_FUNCTIONS_P11 BOOST_PP_VARIADIC_TO_LIST( "FlushIpNetTable", "FlushIpNetTable2", "FlushIpPathTable", "FreeMibTable", "GetAdapterIndex")
#define EXPORT_FUNCTIONS_P12 BOOST_PP_VARIADIC_TO_LIST( "GetAdapterOrderMap", "GetAdaptersAddresses", "GetAdaptersInfo", "GetAnycastIpAddressEntry", "GetAnycastIpAddressTable")
#define EXPORT_FUNCTIONS_P13 BOOST_PP_VARIADIC_TO_LIST( "GetBestInterface", "GetBestInterfaceEx", "GetBestRoute", "GetBestRoute2", "GetCurrentThreadCompartmentId")
#define EXPORT_FUNCTIONS_P14 BOOST_PP_VARIADIC_TO_LIST( "GetExtendedTcpTable", "GetExtendedUdpTable", "GetFriendlyIfIndex", "GetIcmpStatistics", "GetIcmpStatisticsEx")
#define EXPORT_FUNCTIONS_P15 BOOST_PP_VARIADIC_TO_LIST( "GetIfEntry", "GetIfEntry2", "GetIfStackTable", "GetIfTable", "GetIfTable2")
#define EXPORT_FUNCTIONS_P16 BOOST_PP_VARIADIC_TO_LIST( "GetIfTable2Ex", "GetInterfaceInfo", "GetInvertedIfStackTable", "GetIpAddrTable", "GetIpErrorString")
#define EXPORT_FUNCTIONS_P17 BOOST_PP_VARIADIC_TO_LIST( "GetIpForwardEntry2", "GetIpForwardTable", "GetIpForwardTable2", "GetIpInterfaceEntry", "GetIpInterfaceTable")
#define EXPORT_FUNCTIONS_P18 BOOST_PP_VARIADIC_TO_LIST( "GetIpNetEntry2", "GetIpNetTable", "GetIpNetTable2", "GetIpNetworkConnectionBandwidthEstimates", "GetIpPathEntry")
#define EXPORT_FUNCTIONS_P19 BOOST_PP_VARIADIC_TO_LIST( "GetIpPathTable", "GetIpStatistics", "GetIpStatisticsEx", "GetMulticastIpAddressEntry", "GetMulticastIpAddressTable")
#define EXPORT_FUNCTIONS_P20 BOOST_PP_VARIADIC_TO_LIST( "GetNetworkInformation", "GetNetworkParams", "GetNumberOfInterfaces", "GetOwnerModuleFromPidAndInfo", "GetOwnerModuleFromTcp6Entry")
#define EXPORT_FUNCTIONS_P21 BOOST_PP_VARIADIC_TO_LIST( "GetOwnerModuleFromTcpEntry", "GetOwnerModuleFromUdp6Entry", "GetOwnerModuleFromUdpEntry", "GetPerAdapterInfo", "GetPerTcp6ConnectionEStats")
#define EXPORT_FUNCTIONS_P22 BOOST_PP_VARIADIC_TO_LIST( "GetPerTcp6ConnectionStats", "GetPerTcpConnectionEStats", "GetPerTcpConnectionStats", "GetRTTAndHopCount", "GetSessionCompartmentId")
#define EXPORT_FUNCTIONS_P23 BOOST_PP_VARIADIC_TO_LIST( "GetTcp6Table", "GetTcp6Table2", "GetTcpStatistics", "GetTcpStatisticsEx", "GetTcpTable")
#define EXPORT_FUNCTIONS_P24 BOOST_PP_VARIADIC_TO_LIST( "GetTcpTable2", "GetTeredoPort", "GetUdp6Table", "GetUdpStatistics", "GetUdpStatisticsEx")
#define EXPORT_FUNCTIONS_P25 BOOST_PP_VARIADIC_TO_LIST( "GetUdpTable", "GetUniDirectionalAdapterInfo", "GetUnicastIpAddressEntry", "GetUnicastIpAddressTable", "Icmp6CreateFile")
#define EXPORT_FUNCTIONS_P26 BOOST_PP_VARIADIC_TO_LIST( "Icmp6ParseReplies", "Icmp6SendEcho2", "IcmpCloseHandle", "IcmpCreateFile", "IcmpParseReplies")
#define EXPORT_FUNCTIONS_P27 BOOST_PP_VARIADIC_TO_LIST( "IcmpSendEcho", "IcmpSendEcho2", "IcmpSendEcho2Ex", "InitializeIpForwardEntry", "InitializeIpInterfaceEntry")
#define EXPORT_FUNCTIONS_P28 BOOST_PP_VARIADIC_TO_LIST( "InitializeUnicastIpAddressEntry", "InternalCleanupPersistentStore", "InternalCreateAnycastIpAddressEntry", "InternalCreateIpForwardEntry", "InternalCreateIpForwardEntry2")
#define EXPORT_FUNCTIONS_P29 BOOST_PP_VARIADIC_TO_LIST( "InternalCreateIpNetEntry", "InternalCreateIpNetEntry2", "InternalCreateUnicastIpAddressEntry", "InternalDeleteAnycastIpAddressEntry", "InternalDeleteIpForwardEntry")
#define EXPORT_FUNCTIONS_P30 BOOST_PP_VARIADIC_TO_LIST( "InternalDeleteIpForwardEntry2", "InternalDeleteIpNetEntry", "InternalDeleteIpNetEntry2", "InternalDeleteUnicastIpAddressEntry", "InternalFindInterfaceByAddress")
#define EXPORT_FUNCTIONS_P31 BOOST_PP_VARIADIC_TO_LIST( "InternalGetAnycastIpAddressEntry", "InternalGetAnycastIpAddressTable", "InternalGetForwardIpTable2", "InternalGetIPPhysicalInterfaceForDestination", "InternalGetIfEntry2")
#define EXPORT_FUNCTIONS_P32 BOOST_PP_VARIADIC_TO_LIST( "InternalGetIfTable", "InternalGetIfTable2", "InternalGetIpAddrTable", "InternalGetIpForwardEntry2", "InternalGetIpForwardTable")
#define EXPORT_FUNCTIONS_P33 BOOST_PP_VARIADIC_TO_LIST( "InternalGetIpInterfaceEntry", "InternalGetIpInterfaceTable", "InternalGetIpNetEntry2", "InternalGetIpNetTable", "InternalGetIpNetTable2")
#define EXPORT_FUNCTIONS_P34 BOOST_PP_VARIADIC_TO_LIST( "InternalGetMulticastIpAddressEntry", "InternalGetMulticastIpAddressTable", "InternalGetRtcSlotInformation", "InternalGetTcp6Table2", "InternalGetTcp6TableWithOwnerModule")
#define EXPORT_FUNCTIONS_P35 BOOST_PP_VARIADIC_TO_LIST( "InternalGetTcp6TableWithOwnerPid", "InternalGetTcpTable", "InternalGetTcpTable2", "InternalGetTcpTableEx", "InternalGetTcpTableWithOwnerModule")
#define EXPORT_FUNCTIONS_P36 BOOST_PP_VARIADIC_TO_LIST( "InternalGetTcpTableWithOwnerPid", "InternalGetTunnelPhysicalAdapter", "InternalGetUdp6TableWithOwnerModule", "InternalGetUdp6TableWithOwnerPid", "InternalGetUdpTable")
#define EXPORT_FUNCTIONS_P37 BOOST_PP_VARIADIC_TO_LIST( "InternalGetUdpTableEx", "InternalGetUdpTableWithOwnerModule", "InternalGetUdpTableWithOwnerPid", "InternalGetUnicastIpAddressEntry", "InternalGetUnicastIpAddressTable")
#define EXPORT_FUNCTIONS_P38 BOOST_PP_VARIADIC_TO_LIST( "InternalIcmpCreateFileEx", "InternalSetIfEntry", "InternalSetIpForwardEntry", "InternalSetIpForwardEntry2", "InternalSetIpInterfaceEntry")
#define EXPORT_FUNCTIONS_P39 BOOST_PP_VARIADIC_TO_LIST( "InternalSetIpNetEntry", "InternalSetIpNetEntry2", "InternalSetIpStats", "InternalSetTcpEntry", "InternalSetTeredoPort")
#define EXPORT_FUNCTIONS_P40 BOOST_PP_VARIADIC_TO_LIST( "InternalSetUnicastIpAddressEntry", "IpReleaseAddress", "IpRenewAddress", "LookupPersistentTcpPortReservation", "LookupPersistentUdpPortReservation")
#define EXPORT_FUNCTIONS_P41 BOOST_PP_VARIADIC_TO_LIST( "NTPTimeToNTFileTime", "NTTimeToNTPTime", "NhGetGuidFromInterfaceName", "NhGetInterfaceDescriptionFromGuid", "NhGetInterfaceNameFromDeviceGuid")
#define EXPORT_FUNCTIONS_P42 BOOST_PP_VARIADIC_TO_LIST( "NhGetInterfaceNameFromGuid", "NhpAllocateAndGetInterfaceInfoFromStack", "NotifyAddrChange", "NotifyCompartmentChange", "NotifyIpInterfaceChange")
#define EXPORT_FUNCTIONS_P43 BOOST_PP_VARIADIC_TO_LIST( "NotifyRouteChange", "NotifyRouteChange2", "NotifyStableUnicastIpAddressTable", "NotifyTeredoPortChange", "NotifyUnicastIpAddressChange")
#define EXPORT_FUNCTIONS_P44 BOOST_PP_VARIADIC_TO_LIST( "OpenCompartment", "ParseNetworkString", "ResolveIpNetEntry2", "ResolveNeighbor", "RestoreMediaSense")
#define EXPORT_FUNCTIONS_P45 BOOST_PP_VARIADIC_TO_LIST( "SendARP", "SetAdapterIpAddress", "SetCurrentThreadCompartmentId", "SetIfEntry", "SetIpForwardEntry")
#define EXPORT_FUNCTIONS_P46 BOOST_PP_VARIADIC_TO_LIST( "SetIpForwardEntry2", "SetIpInterfaceEntry", "SetIpNetEntry", "SetIpNetEntry2", "SetIpStatistics")
#define EXPORT_FUNCTIONS_P47 BOOST_PP_VARIADIC_TO_LIST( "SetIpStatisticsEx", "SetIpTTL", "SetNetworkInformation", "SetPerTcp6ConnectionEStats", "SetPerTcp6ConnectionStats")
#define EXPORT_FUNCTIONS_P48 BOOST_PP_VARIADIC_TO_LIST( "SetPerTcpConnectionEStats", "SetPerTcpConnectionStats", "SetSessionCompartmentId", "SetTcpEntry", "SetUnicastIpAddressEntry")
#define EXPORT_FUNCTIONS_P49 BOOST_PP_VARIADIC_TO_LIST( "UnenableRouter", "_PfAddFiltersToInterface@24", "_PfAddGlobalFilterToInterface@8", "_PfBindInterfaceToIPAddress@12", "_PfBindInterfaceToIndex@16")
#define EXPORT_FUNCTIONS_P50 BOOST_PP_VARIADIC_TO_LIST( "_PfCreateInterface@24", "_PfDeleteInterface@4", "_PfDeleteLog@0", "_PfGetInterfaceStatistics@16", "_PfMakeLog@4")
#define EXPORT_FUNCTIONS_P51 BOOST_PP_VARIADIC_TO_LIST( "_PfRebindFilters@8", "_PfRemoveFilterHandles@12", "_PfRemoveFiltersFromInterface@20", "_PfRemoveGlobalFilterFromInterface@8", "_PfSetLogBuffer@28")
#define EXPORT_FUNCTIONS_P52 BOOST_PP_VARIADIC_TO_LIST( "_PfTestPacket@20", "_PfUnBindInterface@4", "do_echo_rep", "do_echo_req", "if_indextoname")
#define EXPORT_FUNCTIONS_P53 BOOST_PP_VARIADIC_TO_LIST( "if_nametoindex", "register_icmp")

namespace pd2hook
{
namespace
{
struct DllState
{
	HINSTANCE hLThis = nullptr;
	HMODULE hL = nullptr;
	std::unique_ptr<CConsole> console;
};

struct DllStateDestroyer
{
	void operator()(DllState *state)
	{
		DestroyStates();

		if (state && state->hL)
		{
			FreeLibrary(state->hL);
		}
	}
};

std::unique_ptr<DllState, DllStateDestroyer> State;
}
}

BOOL WINAPI DllMain(HINSTANCE hInst,DWORD reason,LPVOID)
	{

	if (reason == DLL_PROCESS_ATTACH)
		{
		char bufd[200];
		GetSystemDirectory(bufd, 200);
		strcat_s(bufd, "\\IPHLPAPI.dll");

		pd2hook::State.reset(new pd2hook::DllState());
		pd2hook::State->hLThis = hInst;
		pd2hook::State->hL = LoadLibrary(bufd);
		HMODULE hL = pd2hook::State->hL;

		hL = LoadLibrary(bufd);
		if (!hL) return false;

		// Gives: p[pos++] = GetProcAddress(hL, "AddIPAddress"); p[pos++] = GetProcAddress(hL, "AllocateAndGetInterfaceInfoFromStack"); ... etc
		int pos = 0;
#define GET_PROC_ADDRESS_MACRO(r, data, elem) p[data++] = GetProcAddress(hL, elem);
#define BOOST_PP_LOCAL_LIMITS (0, 53)
#define BOOST_PP_LOCAL_MACRO(n) BOOST_PP_LIST_FOR_EACH(GET_PROC_ADDRESS_MACRO, pos, EXPORT_FUNCTIONS_P##n)
#include BOOST_PP_LOCAL_ITERATE()

		pd2hook::InitiateStates();

		}
	if (reason == DLL_PROCESS_DETACH)
		{
			pd2hook::State.reset();
		}

	return 1;
	}

// The following macros generate the required 266 stub functions that forward the calls to the real DLL.
// They look like this pattern repeated from 0 to 266 inclusive with {N} substituted as the number.
/*
extern "C" __declspec(naked) void __stdcall __E__{N}__
{
	__asm { __asm jmp p[{N} * 4] }
}
*/

/*
Explanation for the interested:
This code makes use of preprocessor metaprogramming to perform a compile time loop (in the preprocessor!) and automatically generate all of our function definitions.
Unfortunately since this isn't an intended usage of the preprocessor it always ends up looking quite esoteric. In this case it's even more unfortunate as the Boost
Preprocessor Library has a limit of 256 when it comes to most arithmetic operations. Since we need to go to 266 we can't simply run a single loop up there. The next
best solution is to run a nested loop 3 times from 0-99 and add a 1 or 2 to the start of certain symbols when needed.

The FUNCTION_* macros are tuples containing values that pertain to each iteration of the inner loop. FUNCTION_PREFIX_LOW are the prefixes for the function ordinals
for counts between 0 and 9 inclusive. FUNCTION_PREFIX are the prefixes for the function ordinals between 10 and 99 inclusive. And FUNCTION_COUNT is a tuple of the
final ordinals for each hundred. The reason there is a split of the prefixes is because 0-9 only have 1 digit and so on the second and third iterations they would
generate: 10-19 and 20-29. Therefore for the 1 digit counts we add a 0 to the prefix.

FOR_PRED is a predicate that's used to check whether we are at the end of the loop. It specifically checks whether the current element (CURRENT_ELEM(state)) is equal to
the number past the final element (BOOST_PP_INC(FINAL_ELEM(state)). If so, we've made it to the end of the loop.

FOR_OP is the "increment" operation and generates the state for the next iteration. It constructs another tuple by incrementing the current element and appending the same
final element and the same data element.

FOR_MACRO is the actual "body" of the loop, it outputs the function definition. The ordinal of the function is given by concat'ing the data element (which is the prefix)
to the current element, i.e. the iteration count.

FOR_MACRO_LEVEL2 is the outer macro of the recursive for loop. It uses BOOST_PP_FOR twice. The first is for elements 0 - 9. The state is given as a tuple of the starting
element (0), the final element (9) and the prefix (taken from FUNCTION_PREFIX_LOW). The second usage is for elements 10 - 99. The state is given as a tuple of the starting
element (10), the final element (taken from FUNCTION_COUNT) and and the prefix (taken from FUNCTION_PREFIX).

The final step is to call BOOST_PP_FOR on the outer macro. In this case it's just looping from 0 to 2 with no extra data.
*/

#define CURRENT_INDEX 0
#define FINAL_INDEX 1
#define DATA_INDEX 2
#define CURRENT_ELEM(state) BOOST_PP_TUPLE_ELEM(3, CURRENT_INDEX, state)
#define FINAL_ELEM(state) BOOST_PP_TUPLE_ELEM(3, FINAL_INDEX, state)
#define DATA_ELEM(state) BOOST_PP_TUPLE_ELEM(3, DATA_INDEX, state)

#define FUNCTION_PREFIX_LOW (,10,20)
#define FUNCTION_PREFIX (,1,2)
#define FUNCTION_COUNT (99,99,66)

#define FOR_PRED(r, state) BOOST_PP_NOT_EQUAL(CURRENT_ELEM(state), BOOST_PP_INC(FINAL_ELEM(state)))
#define FOR_OP(r, state) (BOOST_PP_INC(CURRENT_ELEM(state)), FINAL_ELEM(state), DATA_ELEM(state))
#define FOR_MACRO(r, state) extern "C" __declspec(naked) void __stdcall BOOST_PP_CAT(__E__, BOOST_PP_CAT(DATA_ELEM(state),BOOST_PP_CAT(CURRENT_ELEM(state), __)))() \
		{ \
			__asm { __asm jmp p[BOOST_PP_CAT(DATA_ELEM(state),CURRENT_ELEM(state)) * 4] } \
		}
#define FOR_MACRO_LEVEL2(r, state) BOOST_PP_FOR((0, 9, BOOST_PP_TUPLE_ELEM(3, CURRENT_ELEM(state), FUNCTION_PREFIX_LOW)), FOR_PRED, FOR_OP, FOR_MACRO) \
	BOOST_PP_FOR((10, BOOST_PP_TUPLE_ELEM(3, CURRENT_ELEM(state), FUNCTION_COUNT), BOOST_PP_TUPLE_ELEM(3, CURRENT_ELEM(state), FUNCTION_PREFIX)), FOR_PRED, FOR_OP, FOR_MACRO)
BOOST_PP_FOR((0, 2,), FOR_PRED, FOR_OP, FOR_MACRO_LEVEL2)
