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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Networking.ChannelQOS
struct ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A;
// UnityEngine.Networking.ConnectionConfigInternal
struct ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.GlobalConfig
struct GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66;
// UnityEngine.Networking.GlobalConfigInternal
struct GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F;
// UnityEngine.Networking.HostTopology
struct HostTopology_t268779309BB2D69F29D1A182662C79818813892B;
// UnityEngine.Networking.HostTopologyInternal
struct HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39;
// System.Collections.Generic.IList`1<System.Byte>
struct IList_1_t15467A9C40BD12CE17BE6FF409B2EF0FDD26B9D6;
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33;
// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>
struct List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>
struct List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct ReadOnlyCollection_1_t88367D6A0A0435F3B7F5A180EAE18DC0323A14E7;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// UnityEngine.Networking.ChannelQOS[]
struct ChannelQOSU5BU5D_t889380DA7AE26AC186A7E6D4A4CD6D32EB26E4E0;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Networking.ConnectionConfig[]
struct ConnectionConfigU5BU5D_t9F6658E7D6BA15446277AD5EEE600C32809499CB;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Collections.Generic.List`1<System.Byte>[]
struct List_1U5BU5D_t75FF913D3760C42BEB7CE55D319A09963770CE05;
// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// System.Net.Sockets.TcpClient
struct TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t5AB6E9D20BDB8A993042228A58C871DF8C3BCE87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QosType_tAD0DC2835CF976743FCBBFDD0B4BC1B6392A2293_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral087D31DBCB0C14AB130B18593F0AAF5E885A1617;
IL2CPP_EXTERN_C String_t* _stringLiteral0A7707C8AD286270B40614B2F06591CDC7B4DD38;
IL2CPP_EXTERN_C String_t* _stringLiteral17D0AF7CB0B5010B76781B8C6CCF63569494D2FC;
IL2CPP_EXTERN_C String_t* _stringLiteral1F4F8DCA94A6832B1312A4D1589F77B40D6B6BA1;
IL2CPP_EXTERN_C String_t* _stringLiteral317EE74AF038EFA1EFB835A1A142AD358C5939C3;
IL2CPP_EXTERN_C String_t* _stringLiteral364CBA7CC7922443D723F08B65C6354BDEB51914;
IL2CPP_EXTERN_C String_t* _stringLiteral3866C00AAA41CBA51BF961FDAB79035290665796;
IL2CPP_EXTERN_C String_t* _stringLiteral391D3D893F2A037DC2B31D312AAD2F090EE8875F;
IL2CPP_EXTERN_C String_t* _stringLiteral457098191ECB07164C22B87F790888612D9840BD;
IL2CPP_EXTERN_C String_t* _stringLiteral4DB1A45BB662D79231E9447F2CBFDE3B6CE19D71;
IL2CPP_EXTERN_C String_t* _stringLiteral515E8DC0021BC9F0BE2285E066E0396A65CF1DE2;
IL2CPP_EXTERN_C String_t* _stringLiteral56FC7ACF83761F215C42F94457870B28C159AD13;
IL2CPP_EXTERN_C String_t* _stringLiteral572189F4EA97569D6C0D3A4A68C98F20D9FC95A5;
IL2CPP_EXTERN_C String_t* _stringLiteral574EAFB007F2E7E398E934C28531F3E45502C792;
IL2CPP_EXTERN_C String_t* _stringLiteral5A068CD5BEF2AF2FF0E3642874366761954C834B;
IL2CPP_EXTERN_C String_t* _stringLiteral5E40CEC237B69F5B4BBC04F1BABC44DACADCDC68;
IL2CPP_EXTERN_C String_t* _stringLiteral603078036E4F6701B78C3C841B17DE1BD4B49EB7;
IL2CPP_EXTERN_C String_t* _stringLiteral6BD2C10566F502C3C2BF829339E1CCBA316C993F;
IL2CPP_EXTERN_C String_t* _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
IL2CPP_EXTERN_C String_t* _stringLiteral7BD2BAAE773711A25E2A86E4644B6FA5287BE9CB;
IL2CPP_EXTERN_C String_t* _stringLiteral85680EDBC3A789EE54201869637026FD805F2948;
IL2CPP_EXTERN_C String_t* _stringLiteral8A4CACA68D0889BCC0B193D3EB8B384C328208A3;
IL2CPP_EXTERN_C String_t* _stringLiteral8BDB449231EF7773BAF2A5B09B300A7ADEAB2FF2;
IL2CPP_EXTERN_C String_t* _stringLiteral9552624BDF15687DEEA5EE13EAD814AB55C4BB5A;
IL2CPP_EXTERN_C String_t* _stringLiteral970E2379B8ADD15A47FF04C1F1AE7051F01DA5DC;
IL2CPP_EXTERN_C String_t* _stringLiteral9CB64D4DAF8CDF7B5A2130FCCDD62ECE720AFE8E;
IL2CPP_EXTERN_C String_t* _stringLiteralB7924E654A4528032CD5FC50B5878AA01E102C42;
IL2CPP_EXTERN_C String_t* _stringLiteralB9AE80899B6D0474D40662CA412C16118D9F6DB8;
IL2CPP_EXTERN_C String_t* _stringLiteralC94B47F32002FEDF4A271879FE7A0BC4157B2A6F;
IL2CPP_EXTERN_C String_t* _stringLiteralCDBC178854E256F8C61DC4C296BB7F91494D0D08;
IL2CPP_EXTERN_C String_t* _stringLiteralD545B2AC9E1F7D2797A7BD919E1632698CEF91B5;
IL2CPP_EXTERN_C String_t* _stringLiteralDC4A22150C3582A362005292F9B7BDE6394836BA;
IL2CPP_EXTERN_C String_t* _stringLiteralDF5230F0D16A6901ED26AE1F9636F2A61DA5D6ED;
IL2CPP_EXTERN_C String_t* _stringLiteralEA9F88EAA400C7758A1C3CF48D8E6A867EF21B25;
IL2CPP_EXTERN_C String_t* _stringLiteralF9936E0CD170AE401911C48E5EFD1DA0A0AC9004;
IL2CPP_EXTERN_C String_t* _stringLiteralFB53011A10B004A1383FD0B7A61E675D7980F715;
IL2CPP_EXTERN_C const RuntimeMethod* ChannelQOS__ctor_m885E633D2A1D64E13E087DA039943C767E575DA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionConfigInternal__ctor_m3159326166C18DBB931A215F34FDE777C78D2AC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionConfig_GetChannel_m0473DB76B5FE9E1992A3500F37F3C88ACB6DA3D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionConfig_GetSharedOrderChannels_m7DB0D9738F33E044807142B8C2CBB50DDA42A9EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionConfig_Validate_m84787B66F366FDC5EF3D074316F7041E84AA735F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionConfig__ctor_m1976654A083CE2C1858BECF7EED65005BFC16343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionConfig_set_MinUpdateTimeout_m9879D2D21137E06AD888D3A77928C98DB71C6101_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC56BDC16EF132C1FF68A2DE409C105AD6B6EDB92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCA5AF94E5CDC291C5024A38E2660C8CB19682EE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCF03F3EA00D810696408ABDA570EF4EF0976E030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD073B0C912CA5B28B0809D9F5CA2848BDC176469_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9C6BB00A24C9CB4946A9E76569A445E8173A2B01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mEC015BBE1981CD48D16AA43753CE5A52D359E57F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlobalConfigInternal__ctor_m9D3BDDFE489512D1B72565B516638C76564AAA68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlobalConfig_set_MaxHosts_mC8CC24D71F0E97C2BB97F88778619E1740225D44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlobalConfig_set_MaxTimerTimeout_m642C9A728E7D10410B645E8B0013D97D161D346C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlobalConfig_set_MinTimerTimeout_m9ABF8A2D404ED550E089C2EB3B2F5384D62DFEE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlobalConfig_set_ThreadAwakeTimeout_m11AE6BA88859ED3F6FA86D986B2D42BE95ACB29E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HostTopology_GetSpecialConnectionConfig_m52EB0C01DBCEFABCCA2999BA5AA4FC5200049BC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HostTopology__ctor_m402906F2EFF083571541B3EDED1729CA3FDB6244_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m04CCA815BA538CCC717F5B0CEABEE87777C02191_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m395F91C48816169EBE7E930528A1A8CE600FD060_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AsReadOnly_m5B294C3B51BB4CD52DCA4DC740F05BA7A873859E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m795565AF9DAB5243B5CCB29CA6129D67F619C88E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mBC12FB54B3BD6D46D3D0041FC837BB9B5ABD5224_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m07E75EC513A2A1B607C7C94D32F9F1DD52F9DC81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0F98CE6F7E0141E6A7388E6DA3FCC2F93802C219_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1F4A4C6B76603E6A2DA8067FDC73F87532587024_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2C0EC005D5C06E5F178A8FB94D48DA905506D907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m94137B698864A43E9459A65D4BE18DA911CA9939_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB609C617D427D5EC266B009014EB41732F164150_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m68E7DB4815C63A275BDC11FF71FACD9235A7C562_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA887125ECBEEA92DEE8520B227EFE1CBF3FB6434_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mEA12AB396EABC73A3E2E57BE233BC77763A61BFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransport_AddHostWithSimulator_m7D2AA3190354AF70603B43E642EBABD8B014E2B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransport_AddWebsocketHost_m700C762A710DDC088B7768520A810E8B211143B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransport_CheckTopology_mCA4CDEBBD3AA34CE15D5110586307B01EAD7C1AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransport_Send_m8D6D448EDCA5A74B58C5DC9DE1AEA7658C9FC0A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* QosType_tAD0DC2835CF976743FCBBFDD0B4BC1B6392A2293_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ChannelQOS__ctor_m885E633D2A1D64E13E087DA039943C767E575DA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfigInternal_Dispose_m4161119120EC3447F951143746AA3822B262C590_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfigInternal_Dispose_m5105F829E0DD5CB86927351FC94BF5AE14B8493E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfigInternal__ctor_m3159326166C18DBB931A215F34FDE777C78D2AC0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfig_GetChannel_m0473DB76B5FE9E1992A3500F37F3C88ACB6DA3D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfig_GetSharedOrderChannels_m7DB0D9738F33E044807142B8C2CBB50DDA42A9EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfig_Validate_m84787B66F366FDC5EF3D074316F7041E84AA735F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfig__ctor_m1976654A083CE2C1858BECF7EED65005BFC16343_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfig__ctor_mCB0E2B50103AB6B3917758DC5FC0E52AD153DED3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfig_get_ChannelCount_m932C1B881D3046BC18899207F5796698B7539C7C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfig_get_SharedOrderChannelCount_m406DE1A3A83A15FCC644746D4C7A6180339A4853_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionConfig_set_MinUpdateTimeout_m9879D2D21137E06AD888D3A77928C98DB71C6101_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GlobalConfigInternal_Dispose_m52DC0B3749B578FB9D4F63E79820FA7AAC3DDA53_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GlobalConfigInternal_Dispose_m8211C847457CFF6475989864B152A6F7B458D6D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GlobalConfigInternal__ctor_m9D3BDDFE489512D1B72565B516638C76564AAA68_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GlobalConfig_set_MaxHosts_mC8CC24D71F0E97C2BB97F88778619E1740225D44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GlobalConfig_set_MaxTimerTimeout_m642C9A728E7D10410B645E8B0013D97D161D346C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GlobalConfig_set_MinTimerTimeout_m9ABF8A2D404ED550E089C2EB3B2F5384D62DFEE7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GlobalConfig_set_ThreadAwakeTimeout_m11AE6BA88859ED3F6FA86D986B2D42BE95ACB29E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HostTopologyInternal_Dispose_m083CAFDDE99B9C65B901855E17687C86ED981E7F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HostTopologyInternal_Dispose_mC632F73CFD4F9D9558C4A6B19A1B594011A46D8E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HostTopologyInternal__ctor_m9DAA9FD8AC2102B55B9EB6E4F334C8B8555F5E43_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HostTopology_GetSpecialConnectionConfig_m52EB0C01DBCEFABCCA2999BA5AA4FC5200049BC1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HostTopology__ctor_m402906F2EFF083571541B3EDED1729CA3FDB6244_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HostTopology__ctor_mA0D7BC0F1CC6956ABFBDAC61941B38E75B00D87D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HostTopology_get_SpecialConnectionConfigsCount_m34BCBF16F6499FF007E37C3C3657B1BAE8E8522C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTransport_AddHostWithSimulator_m7D2AA3190354AF70603B43E642EBABD8B014E2B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTransport_AddHost_m24D3C68D33504C5A83C47A701F7CDA20E814898D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTransport_AddHost_mEBF87FF57C336EC3EB6A2F69575172A71620B5CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTransport_AddWebsocketHost_m700C762A710DDC088B7768520A810E8B211143B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTransport_AddWebsocketHost_mB3864DBBDF764C49AD73BC89237F4C9EBFC4252A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTransport_CheckTopology_mCA4CDEBBD3AA34CE15D5110586307B01EAD7C1AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTransport_GetConnectionInfo_m1550BA82DCB30A4FFDE4A7804BCBA43C65EDC214_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTransport_Init_m8AC1E8A78F9FE38D1C540568ED589A223FFB4557_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTransport_IsPortOpen_mDE9CADB4888CF273569A783CD842A22D921AAFB4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTransport_ReceiveFromHost_mA71172AC0F63C20F82032607D4A807447AC3962A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTransport_Send_m8D6D448EDCA5A74B58C5DC9DE1AEA7658C9FC0A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTransport_Shutdown_mCDADD01490BB0C9B0F5BAFB391E207C7B0298DC4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkTransport__cctor_mDB08DB01C3DE3EDE771ACE7C805808E30E306F9E_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tCC84939A1CA389421571C5A203BEA7522E1B67AA 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.Byte>
struct  List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____items_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__items_1() const { return ____items_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>
struct  List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t75FF913D3760C42BEB7CE55D319A09963770CE05* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B, ____items_1)); }
	inline List_1U5BU5D_t75FF913D3760C42BEB7CE55D319A09963770CE05* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_t75FF913D3760C42BEB7CE55D319A09963770CE05** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_t75FF913D3760C42BEB7CE55D319A09963770CE05* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	List_1U5BU5D_t75FF913D3760C42BEB7CE55D319A09963770CE05* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B_StaticFields, ____emptyArray_5)); }
	inline List_1U5BU5D_t75FF913D3760C42BEB7CE55D319A09963770CE05* get__emptyArray_5() const { return ____emptyArray_5; }
	inline List_1U5BU5D_t75FF913D3760C42BEB7CE55D319A09963770CE05** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(List_1U5BU5D_t75FF913D3760C42BEB7CE55D319A09963770CE05* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct  List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ChannelQOSU5BU5D_t889380DA7AE26AC186A7E6D4A4CD6D32EB26E4E0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33, ____items_1)); }
	inline ChannelQOSU5BU5D_t889380DA7AE26AC186A7E6D4A4CD6D32EB26E4E0* get__items_1() const { return ____items_1; }
	inline ChannelQOSU5BU5D_t889380DA7AE26AC186A7E6D4A4CD6D32EB26E4E0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ChannelQOSU5BU5D_t889380DA7AE26AC186A7E6D4A4CD6D32EB26E4E0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ChannelQOSU5BU5D_t889380DA7AE26AC186A7E6D4A4CD6D32EB26E4E0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33_StaticFields, ____emptyArray_5)); }
	inline ChannelQOSU5BU5D_t889380DA7AE26AC186A7E6D4A4CD6D32EB26E4E0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ChannelQOSU5BU5D_t889380DA7AE26AC186A7E6D4A4CD6D32EB26E4E0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ChannelQOSU5BU5D_t889380DA7AE26AC186A7E6D4A4CD6D32EB26E4E0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>
struct  List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ConnectionConfigU5BU5D_t9F6658E7D6BA15446277AD5EEE600C32809499CB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE, ____items_1)); }
	inline ConnectionConfigU5BU5D_t9F6658E7D6BA15446277AD5EEE600C32809499CB* get__items_1() const { return ____items_1; }
	inline ConnectionConfigU5BU5D_t9F6658E7D6BA15446277AD5EEE600C32809499CB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ConnectionConfigU5BU5D_t9F6658E7D6BA15446277AD5EEE600C32809499CB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ConnectionConfigU5BU5D_t9F6658E7D6BA15446277AD5EEE600C32809499CB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE_StaticFields, ____emptyArray_5)); }
	inline ConnectionConfigU5BU5D_t9F6658E7D6BA15446277AD5EEE600C32809499CB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ConnectionConfigU5BU5D_t9F6658E7D6BA15446277AD5EEE600C32809499CB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ConnectionConfigU5BU5D_t9F6658E7D6BA15446277AD5EEE600C32809499CB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct  ReadOnlyCollection_1_t88367D6A0A0435F3B7F5A180EAE18DC0323A14E7  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t88367D6A0A0435F3B7F5A180EAE18DC0323A14E7, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t88367D6A0A0435F3B7F5A180EAE18DC0323A14E7, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// UnityEngine.Networking.HostTopology
struct  HostTopology_t268779309BB2D69F29D1A182662C79818813892B  : public RuntimeObject
{
public:
	// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::m_DefConfig
	ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * ___m_DefConfig_0;
	// System.Int32 UnityEngine.Networking.HostTopology::m_MaxDefConnections
	int32_t ___m_MaxDefConnections_1;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> UnityEngine.Networking.HostTopology::m_SpecialConnections
	List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * ___m_SpecialConnections_2;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_ReceivedMessagePoolSize
	uint16_t ___m_ReceivedMessagePoolSize_3;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_SentMessagePoolSize
	uint16_t ___m_SentMessagePoolSize_4;
	// System.Single UnityEngine.Networking.HostTopology::m_MessagePoolSizeGrowthFactor
	float ___m_MessagePoolSizeGrowthFactor_5;

public:
	inline static int32_t get_offset_of_m_DefConfig_0() { return static_cast<int32_t>(offsetof(HostTopology_t268779309BB2D69F29D1A182662C79818813892B, ___m_DefConfig_0)); }
	inline ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * get_m_DefConfig_0() const { return ___m_DefConfig_0; }
	inline ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A ** get_address_of_m_DefConfig_0() { return &___m_DefConfig_0; }
	inline void set_m_DefConfig_0(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * value)
	{
		___m_DefConfig_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefConfig_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaxDefConnections_1() { return static_cast<int32_t>(offsetof(HostTopology_t268779309BB2D69F29D1A182662C79818813892B, ___m_MaxDefConnections_1)); }
	inline int32_t get_m_MaxDefConnections_1() const { return ___m_MaxDefConnections_1; }
	inline int32_t* get_address_of_m_MaxDefConnections_1() { return &___m_MaxDefConnections_1; }
	inline void set_m_MaxDefConnections_1(int32_t value)
	{
		___m_MaxDefConnections_1 = value;
	}

	inline static int32_t get_offset_of_m_SpecialConnections_2() { return static_cast<int32_t>(offsetof(HostTopology_t268779309BB2D69F29D1A182662C79818813892B, ___m_SpecialConnections_2)); }
	inline List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * get_m_SpecialConnections_2() const { return ___m_SpecialConnections_2; }
	inline List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE ** get_address_of_m_SpecialConnections_2() { return &___m_SpecialConnections_2; }
	inline void set_m_SpecialConnections_2(List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * value)
	{
		___m_SpecialConnections_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SpecialConnections_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ReceivedMessagePoolSize_3() { return static_cast<int32_t>(offsetof(HostTopology_t268779309BB2D69F29D1A182662C79818813892B, ___m_ReceivedMessagePoolSize_3)); }
	inline uint16_t get_m_ReceivedMessagePoolSize_3() const { return ___m_ReceivedMessagePoolSize_3; }
	inline uint16_t* get_address_of_m_ReceivedMessagePoolSize_3() { return &___m_ReceivedMessagePoolSize_3; }
	inline void set_m_ReceivedMessagePoolSize_3(uint16_t value)
	{
		___m_ReceivedMessagePoolSize_3 = value;
	}

	inline static int32_t get_offset_of_m_SentMessagePoolSize_4() { return static_cast<int32_t>(offsetof(HostTopology_t268779309BB2D69F29D1A182662C79818813892B, ___m_SentMessagePoolSize_4)); }
	inline uint16_t get_m_SentMessagePoolSize_4() const { return ___m_SentMessagePoolSize_4; }
	inline uint16_t* get_address_of_m_SentMessagePoolSize_4() { return &___m_SentMessagePoolSize_4; }
	inline void set_m_SentMessagePoolSize_4(uint16_t value)
	{
		___m_SentMessagePoolSize_4 = value;
	}

	inline static int32_t get_offset_of_m_MessagePoolSizeGrowthFactor_5() { return static_cast<int32_t>(offsetof(HostTopology_t268779309BB2D69F29D1A182662C79818813892B, ___m_MessagePoolSizeGrowthFactor_5)); }
	inline float get_m_MessagePoolSizeGrowthFactor_5() const { return ___m_MessagePoolSizeGrowthFactor_5; }
	inline float* get_address_of_m_MessagePoolSizeGrowthFactor_5() { return &___m_MessagePoolSizeGrowthFactor_5; }
	inline void set_m_MessagePoolSizeGrowthFactor_5(float value)
	{
		___m_MessagePoolSizeGrowthFactor_5 = value;
	}
};


// UnityEngine.Networking.NetworkTransport
struct  NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44  : public RuntimeObject
{
public:

public:
};

struct NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_StaticFields
{
public:
	// System.Int32 UnityEngine.Networking.NetworkTransport::s_nextSceneId
	int32_t ___s_nextSceneId_0;

public:
	inline static int32_t get_offset_of_s_nextSceneId_0() { return static_cast<int32_t>(offsetof(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_StaticFields, ___s_nextSceneId_0)); }
	inline int32_t get_s_nextSceneId_0() const { return ___s_nextSceneId_0; }
	inline int32_t* get_address_of_s_nextSceneId_0() { return &___s_nextSceneId_0; }
	inline void set_s_nextSceneId_0(int32_t value)
	{
		___s_nextSceneId_0 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
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


// System.Collections.Generic.List`1_Enumerator<System.Collections.Generic.List`1<System.Byte>>
struct  Enumerator_t0340BD53573C77700ED3FF138F75977DCBDF1DEE 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t0340BD53573C77700ED3FF138F75977DCBDF1DEE, ___list_0)); }
	inline List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * get_list_0() const { return ___list_0; }
	inline List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t0340BD53573C77700ED3FF138F75977DCBDF1DEE, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t0340BD53573C77700ED3FF138F75977DCBDF1DEE, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t0340BD53573C77700ED3FF138F75977DCBDF1DEE, ___current_3)); }
	inline List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * get_current_3() const { return ___current_3; }
	inline List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
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


// System.Collections.Generic.List`1_Enumerator<UnityEngine.Networking.ChannelQOS>
struct  Enumerator_t2F8B0C9500483A43B42F26A09356CEA1E8162787 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t2F8B0C9500483A43B42F26A09356CEA1E8162787, ___list_0)); }
	inline List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * get_list_0() const { return ___list_0; }
	inline List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2F8B0C9500483A43B42F26A09356CEA1E8162787, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2F8B0C9500483A43B42F26A09356CEA1E8162787, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2F8B0C9500483A43B42F26A09356CEA1E8162787, ___current_3)); }
	inline ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * get_current_3() const { return ___current_3; }
	inline ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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

// System.Net.Sockets.AddressFamily
struct  AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Threading.WaitHandle
struct  WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.TimeSpan
struct  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UnityEngine.Networking.ConnectionAcksType
struct  ConnectionAcksType_t4F4B2573A461869C52F77783DD9C379C97A5473B 
{
public:
	// System.Int32 UnityEngine.Networking.ConnectionAcksType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionAcksType_t4F4B2573A461869C52F77783DD9C379C97A5473B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.ConnectionConfigInternal
struct  ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.ConnectionConfigInternal::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.ConnectionConfigInternal
struct ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.ConnectionConfigInternal
struct ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.GlobalConfigInternal
struct  GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.GlobalConfigInternal::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Networking.HostTopologyInternal
struct  HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.HostTopologyInternal::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Networking.NetworkError
struct  NetworkError_t55031A243A0FD02F80E44FC25FFC9B7BD6F60DE9 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkError_t55031A243A0FD02F80E44FC25FFC9B7BD6F60DE9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.NetworkEventType
struct  NetworkEventType_t145BD45D629C9B92E4172F8728C2639A9198A1A0 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkEventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkEventType_t145BD45D629C9B92E4172F8728C2639A9198A1A0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.QosType
struct  QosType_tAD0DC2835CF976743FCBBFDD0B4BC1B6392A2293 
{
public:
	// System.Int32 UnityEngine.Networking.QosType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QosType_tAD0DC2835CF976743FCBBFDD0B4BC1B6392A2293, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.ReactorModel
struct  ReactorModel_tA949EB04FA3D4C0920C729636C7CD64D4A84A141 
{
public:
	// System.Int32 UnityEngine.Networking.ReactorModel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReactorModel_tA949EB04FA3D4C0920C729636C7CD64D4A84A141, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.Types.NetworkID
struct  NetworkID_tA7160DE9FBEE6E236564AEA6C328B6180FC368C3 
{
public:
	// System.UInt64 UnityEngine.Networking.Types.NetworkID::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkID_tA7160DE9FBEE6E236564AEA6C328B6180FC368C3, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.Types.NodeID
struct  NodeID_t07417F7D8D30332570E9D4A123D9E8B7CA1D1E80 
{
public:
	// System.UInt16 UnityEngine.Networking.Types.NodeID::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NodeID_t07417F7D8D30332570E9D4A123D9E8B7CA1D1E80, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// System.Net.Sockets.TcpClient
struct  TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::m_ClientSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___m_ClientSocket_0;
	// System.Boolean System.Net.Sockets.TcpClient::m_Active
	bool ___m_Active_1;
	// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::m_DataStream
	NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___m_DataStream_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.TcpClient::m_Family
	int32_t ___m_Family_3;
	// System.Boolean System.Net.Sockets.TcpClient::m_CleanedUp
	bool ___m_CleanedUp_4;

public:
	inline static int32_t get_offset_of_m_ClientSocket_0() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_ClientSocket_0)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_m_ClientSocket_0() const { return ___m_ClientSocket_0; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_m_ClientSocket_0() { return &___m_ClientSocket_0; }
	inline void set_m_ClientSocket_0(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___m_ClientSocket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClientSocket_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_1() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_Active_1)); }
	inline bool get_m_Active_1() const { return ___m_Active_1; }
	inline bool* get_address_of_m_Active_1() { return &___m_Active_1; }
	inline void set_m_Active_1(bool value)
	{
		___m_Active_1 = value;
	}

	inline static int32_t get_offset_of_m_DataStream_2() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_DataStream_2)); }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * get_m_DataStream_2() const { return ___m_DataStream_2; }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 ** get_address_of_m_DataStream_2() { return &___m_DataStream_2; }
	inline void set_m_DataStream_2(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * value)
	{
		___m_DataStream_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DataStream_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_3() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_Family_3)); }
	inline int32_t get_m_Family_3() const { return ___m_Family_3; }
	inline int32_t* get_address_of_m_Family_3() { return &___m_Family_3; }
	inline void set_m_Family_3(int32_t value)
	{
		___m_Family_3 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_4() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_CleanedUp_4)); }
	inline bool get_m_CleanedUp_4() const { return ___m_CleanedUp_4; }
	inline bool* get_address_of_m_CleanedUp_4() { return &___m_CleanedUp_4; }
	inline void set_m_CleanedUp_4(bool value)
	{
		___m_CleanedUp_4 = value;
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
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
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Networking.ChannelQOS
struct  ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE  : public RuntimeObject
{
public:
	// UnityEngine.Networking.QosType UnityEngine.Networking.ChannelQOS::m_Type
	int32_t ___m_Type_0;
	// System.Boolean UnityEngine.Networking.ChannelQOS::m_BelongsSharedOrderChannel
	bool ___m_BelongsSharedOrderChannel_1;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BelongsSharedOrderChannel_1() { return static_cast<int32_t>(offsetof(ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE, ___m_BelongsSharedOrderChannel_1)); }
	inline bool get_m_BelongsSharedOrderChannel_1() const { return ___m_BelongsSharedOrderChannel_1; }
	inline bool* get_address_of_m_BelongsSharedOrderChannel_1() { return &___m_BelongsSharedOrderChannel_1; }
	inline void set_m_BelongsSharedOrderChannel_1(bool value)
	{
		___m_BelongsSharedOrderChannel_1 = value;
	}
};


// UnityEngine.Networking.ConnectionConfig
struct  ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A  : public RuntimeObject
{
public:
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_PacketSize
	uint16_t ___m_PacketSize_1;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_FragmentSize
	uint16_t ___m_FragmentSize_2;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ResendTimeout
	uint32_t ___m_ResendTimeout_3;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_DisconnectTimeout
	uint32_t ___m_DisconnectTimeout_4;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ConnectTimeout
	uint32_t ___m_ConnectTimeout_5;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_MinUpdateTimeout
	uint32_t ___m_MinUpdateTimeout_6;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_PingTimeout
	uint32_t ___m_PingTimeout_7;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ReducedPingTimeout
	uint32_t ___m_ReducedPingTimeout_8;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AllCostTimeout
	uint32_t ___m_AllCostTimeout_9;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_NetworkDropThreshold
	uint8_t ___m_NetworkDropThreshold_10;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_OverflowDropThreshold
	uint8_t ___m_OverflowDropThreshold_11;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_MaxConnectionAttempt
	uint8_t ___m_MaxConnectionAttempt_12;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AckDelay
	uint32_t ___m_AckDelay_13;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_SendDelay
	uint32_t ___m_SendDelay_14;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageSize
	uint16_t ___m_MaxCombinedReliableMessageSize_15;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageCount
	uint16_t ___m_MaxCombinedReliableMessageCount_16;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxSentMessageQueueSize
	uint16_t ___m_MaxSentMessageQueueSize_17;
	// UnityEngine.Networking.ConnectionAcksType UnityEngine.Networking.ConnectionConfig::m_AcksType
	int32_t ___m_AcksType_18;
	// System.Boolean UnityEngine.Networking.ConnectionConfig::m_UsePlatformSpecificProtocols
	bool ___m_UsePlatformSpecificProtocols_19;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_InitialBandwidth
	uint32_t ___m_InitialBandwidth_20;
	// System.Single UnityEngine.Networking.ConnectionConfig::m_BandwidthPeakFactor
	float ___m_BandwidthPeakFactor_21;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_WebSocketReceiveBufferMaxSize
	uint16_t ___m_WebSocketReceiveBufferMaxSize_22;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_UdpSocketReceiveBufferMaxSize
	uint32_t ___m_UdpSocketReceiveBufferMaxSize_23;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCertFilePath
	String_t* ___m_SSLCertFilePath_24;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLPrivateKeyFilePath
	String_t* ___m_SSLPrivateKeyFilePath_25;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCAFilePath
	String_t* ___m_SSLCAFilePath_26;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS> UnityEngine.Networking.ConnectionConfig::m_Channels
	List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * ___m_Channels_27;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>> UnityEngine.Networking.ConnectionConfig::m_SharedOrderChannels
	List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * ___m_SharedOrderChannels_28;

public:
	inline static int32_t get_offset_of_m_PacketSize_1() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_PacketSize_1)); }
	inline uint16_t get_m_PacketSize_1() const { return ___m_PacketSize_1; }
	inline uint16_t* get_address_of_m_PacketSize_1() { return &___m_PacketSize_1; }
	inline void set_m_PacketSize_1(uint16_t value)
	{
		___m_PacketSize_1 = value;
	}

	inline static int32_t get_offset_of_m_FragmentSize_2() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_FragmentSize_2)); }
	inline uint16_t get_m_FragmentSize_2() const { return ___m_FragmentSize_2; }
	inline uint16_t* get_address_of_m_FragmentSize_2() { return &___m_FragmentSize_2; }
	inline void set_m_FragmentSize_2(uint16_t value)
	{
		___m_FragmentSize_2 = value;
	}

	inline static int32_t get_offset_of_m_ResendTimeout_3() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_ResendTimeout_3)); }
	inline uint32_t get_m_ResendTimeout_3() const { return ___m_ResendTimeout_3; }
	inline uint32_t* get_address_of_m_ResendTimeout_3() { return &___m_ResendTimeout_3; }
	inline void set_m_ResendTimeout_3(uint32_t value)
	{
		___m_ResendTimeout_3 = value;
	}

	inline static int32_t get_offset_of_m_DisconnectTimeout_4() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_DisconnectTimeout_4)); }
	inline uint32_t get_m_DisconnectTimeout_4() const { return ___m_DisconnectTimeout_4; }
	inline uint32_t* get_address_of_m_DisconnectTimeout_4() { return &___m_DisconnectTimeout_4; }
	inline void set_m_DisconnectTimeout_4(uint32_t value)
	{
		___m_DisconnectTimeout_4 = value;
	}

	inline static int32_t get_offset_of_m_ConnectTimeout_5() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_ConnectTimeout_5)); }
	inline uint32_t get_m_ConnectTimeout_5() const { return ___m_ConnectTimeout_5; }
	inline uint32_t* get_address_of_m_ConnectTimeout_5() { return &___m_ConnectTimeout_5; }
	inline void set_m_ConnectTimeout_5(uint32_t value)
	{
		___m_ConnectTimeout_5 = value;
	}

	inline static int32_t get_offset_of_m_MinUpdateTimeout_6() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_MinUpdateTimeout_6)); }
	inline uint32_t get_m_MinUpdateTimeout_6() const { return ___m_MinUpdateTimeout_6; }
	inline uint32_t* get_address_of_m_MinUpdateTimeout_6() { return &___m_MinUpdateTimeout_6; }
	inline void set_m_MinUpdateTimeout_6(uint32_t value)
	{
		___m_MinUpdateTimeout_6 = value;
	}

	inline static int32_t get_offset_of_m_PingTimeout_7() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_PingTimeout_7)); }
	inline uint32_t get_m_PingTimeout_7() const { return ___m_PingTimeout_7; }
	inline uint32_t* get_address_of_m_PingTimeout_7() { return &___m_PingTimeout_7; }
	inline void set_m_PingTimeout_7(uint32_t value)
	{
		___m_PingTimeout_7 = value;
	}

	inline static int32_t get_offset_of_m_ReducedPingTimeout_8() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_ReducedPingTimeout_8)); }
	inline uint32_t get_m_ReducedPingTimeout_8() const { return ___m_ReducedPingTimeout_8; }
	inline uint32_t* get_address_of_m_ReducedPingTimeout_8() { return &___m_ReducedPingTimeout_8; }
	inline void set_m_ReducedPingTimeout_8(uint32_t value)
	{
		___m_ReducedPingTimeout_8 = value;
	}

	inline static int32_t get_offset_of_m_AllCostTimeout_9() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_AllCostTimeout_9)); }
	inline uint32_t get_m_AllCostTimeout_9() const { return ___m_AllCostTimeout_9; }
	inline uint32_t* get_address_of_m_AllCostTimeout_9() { return &___m_AllCostTimeout_9; }
	inline void set_m_AllCostTimeout_9(uint32_t value)
	{
		___m_AllCostTimeout_9 = value;
	}

	inline static int32_t get_offset_of_m_NetworkDropThreshold_10() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_NetworkDropThreshold_10)); }
	inline uint8_t get_m_NetworkDropThreshold_10() const { return ___m_NetworkDropThreshold_10; }
	inline uint8_t* get_address_of_m_NetworkDropThreshold_10() { return &___m_NetworkDropThreshold_10; }
	inline void set_m_NetworkDropThreshold_10(uint8_t value)
	{
		___m_NetworkDropThreshold_10 = value;
	}

	inline static int32_t get_offset_of_m_OverflowDropThreshold_11() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_OverflowDropThreshold_11)); }
	inline uint8_t get_m_OverflowDropThreshold_11() const { return ___m_OverflowDropThreshold_11; }
	inline uint8_t* get_address_of_m_OverflowDropThreshold_11() { return &___m_OverflowDropThreshold_11; }
	inline void set_m_OverflowDropThreshold_11(uint8_t value)
	{
		___m_OverflowDropThreshold_11 = value;
	}

	inline static int32_t get_offset_of_m_MaxConnectionAttempt_12() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_MaxConnectionAttempt_12)); }
	inline uint8_t get_m_MaxConnectionAttempt_12() const { return ___m_MaxConnectionAttempt_12; }
	inline uint8_t* get_address_of_m_MaxConnectionAttempt_12() { return &___m_MaxConnectionAttempt_12; }
	inline void set_m_MaxConnectionAttempt_12(uint8_t value)
	{
		___m_MaxConnectionAttempt_12 = value;
	}

	inline static int32_t get_offset_of_m_AckDelay_13() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_AckDelay_13)); }
	inline uint32_t get_m_AckDelay_13() const { return ___m_AckDelay_13; }
	inline uint32_t* get_address_of_m_AckDelay_13() { return &___m_AckDelay_13; }
	inline void set_m_AckDelay_13(uint32_t value)
	{
		___m_AckDelay_13 = value;
	}

	inline static int32_t get_offset_of_m_SendDelay_14() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_SendDelay_14)); }
	inline uint32_t get_m_SendDelay_14() const { return ___m_SendDelay_14; }
	inline uint32_t* get_address_of_m_SendDelay_14() { return &___m_SendDelay_14; }
	inline void set_m_SendDelay_14(uint32_t value)
	{
		___m_SendDelay_14 = value;
	}

	inline static int32_t get_offset_of_m_MaxCombinedReliableMessageSize_15() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_MaxCombinedReliableMessageSize_15)); }
	inline uint16_t get_m_MaxCombinedReliableMessageSize_15() const { return ___m_MaxCombinedReliableMessageSize_15; }
	inline uint16_t* get_address_of_m_MaxCombinedReliableMessageSize_15() { return &___m_MaxCombinedReliableMessageSize_15; }
	inline void set_m_MaxCombinedReliableMessageSize_15(uint16_t value)
	{
		___m_MaxCombinedReliableMessageSize_15 = value;
	}

	inline static int32_t get_offset_of_m_MaxCombinedReliableMessageCount_16() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_MaxCombinedReliableMessageCount_16)); }
	inline uint16_t get_m_MaxCombinedReliableMessageCount_16() const { return ___m_MaxCombinedReliableMessageCount_16; }
	inline uint16_t* get_address_of_m_MaxCombinedReliableMessageCount_16() { return &___m_MaxCombinedReliableMessageCount_16; }
	inline void set_m_MaxCombinedReliableMessageCount_16(uint16_t value)
	{
		___m_MaxCombinedReliableMessageCount_16 = value;
	}

	inline static int32_t get_offset_of_m_MaxSentMessageQueueSize_17() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_MaxSentMessageQueueSize_17)); }
	inline uint16_t get_m_MaxSentMessageQueueSize_17() const { return ___m_MaxSentMessageQueueSize_17; }
	inline uint16_t* get_address_of_m_MaxSentMessageQueueSize_17() { return &___m_MaxSentMessageQueueSize_17; }
	inline void set_m_MaxSentMessageQueueSize_17(uint16_t value)
	{
		___m_MaxSentMessageQueueSize_17 = value;
	}

	inline static int32_t get_offset_of_m_AcksType_18() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_AcksType_18)); }
	inline int32_t get_m_AcksType_18() const { return ___m_AcksType_18; }
	inline int32_t* get_address_of_m_AcksType_18() { return &___m_AcksType_18; }
	inline void set_m_AcksType_18(int32_t value)
	{
		___m_AcksType_18 = value;
	}

	inline static int32_t get_offset_of_m_UsePlatformSpecificProtocols_19() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_UsePlatformSpecificProtocols_19)); }
	inline bool get_m_UsePlatformSpecificProtocols_19() const { return ___m_UsePlatformSpecificProtocols_19; }
	inline bool* get_address_of_m_UsePlatformSpecificProtocols_19() { return &___m_UsePlatformSpecificProtocols_19; }
	inline void set_m_UsePlatformSpecificProtocols_19(bool value)
	{
		___m_UsePlatformSpecificProtocols_19 = value;
	}

	inline static int32_t get_offset_of_m_InitialBandwidth_20() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_InitialBandwidth_20)); }
	inline uint32_t get_m_InitialBandwidth_20() const { return ___m_InitialBandwidth_20; }
	inline uint32_t* get_address_of_m_InitialBandwidth_20() { return &___m_InitialBandwidth_20; }
	inline void set_m_InitialBandwidth_20(uint32_t value)
	{
		___m_InitialBandwidth_20 = value;
	}

	inline static int32_t get_offset_of_m_BandwidthPeakFactor_21() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_BandwidthPeakFactor_21)); }
	inline float get_m_BandwidthPeakFactor_21() const { return ___m_BandwidthPeakFactor_21; }
	inline float* get_address_of_m_BandwidthPeakFactor_21() { return &___m_BandwidthPeakFactor_21; }
	inline void set_m_BandwidthPeakFactor_21(float value)
	{
		___m_BandwidthPeakFactor_21 = value;
	}

	inline static int32_t get_offset_of_m_WebSocketReceiveBufferMaxSize_22() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_WebSocketReceiveBufferMaxSize_22)); }
	inline uint16_t get_m_WebSocketReceiveBufferMaxSize_22() const { return ___m_WebSocketReceiveBufferMaxSize_22; }
	inline uint16_t* get_address_of_m_WebSocketReceiveBufferMaxSize_22() { return &___m_WebSocketReceiveBufferMaxSize_22; }
	inline void set_m_WebSocketReceiveBufferMaxSize_22(uint16_t value)
	{
		___m_WebSocketReceiveBufferMaxSize_22 = value;
	}

	inline static int32_t get_offset_of_m_UdpSocketReceiveBufferMaxSize_23() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_UdpSocketReceiveBufferMaxSize_23)); }
	inline uint32_t get_m_UdpSocketReceiveBufferMaxSize_23() const { return ___m_UdpSocketReceiveBufferMaxSize_23; }
	inline uint32_t* get_address_of_m_UdpSocketReceiveBufferMaxSize_23() { return &___m_UdpSocketReceiveBufferMaxSize_23; }
	inline void set_m_UdpSocketReceiveBufferMaxSize_23(uint32_t value)
	{
		___m_UdpSocketReceiveBufferMaxSize_23 = value;
	}

	inline static int32_t get_offset_of_m_SSLCertFilePath_24() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_SSLCertFilePath_24)); }
	inline String_t* get_m_SSLCertFilePath_24() const { return ___m_SSLCertFilePath_24; }
	inline String_t** get_address_of_m_SSLCertFilePath_24() { return &___m_SSLCertFilePath_24; }
	inline void set_m_SSLCertFilePath_24(String_t* value)
	{
		___m_SSLCertFilePath_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SSLCertFilePath_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_SSLPrivateKeyFilePath_25() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_SSLPrivateKeyFilePath_25)); }
	inline String_t* get_m_SSLPrivateKeyFilePath_25() const { return ___m_SSLPrivateKeyFilePath_25; }
	inline String_t** get_address_of_m_SSLPrivateKeyFilePath_25() { return &___m_SSLPrivateKeyFilePath_25; }
	inline void set_m_SSLPrivateKeyFilePath_25(String_t* value)
	{
		___m_SSLPrivateKeyFilePath_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SSLPrivateKeyFilePath_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_SSLCAFilePath_26() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_SSLCAFilePath_26)); }
	inline String_t* get_m_SSLCAFilePath_26() const { return ___m_SSLCAFilePath_26; }
	inline String_t** get_address_of_m_SSLCAFilePath_26() { return &___m_SSLCAFilePath_26; }
	inline void set_m_SSLCAFilePath_26(String_t* value)
	{
		___m_SSLCAFilePath_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SSLCAFilePath_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Channels_27() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_Channels_27)); }
	inline List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * get_m_Channels_27() const { return ___m_Channels_27; }
	inline List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 ** get_address_of_m_Channels_27() { return &___m_Channels_27; }
	inline void set_m_Channels_27(List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * value)
	{
		___m_Channels_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Channels_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedOrderChannels_28() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_SharedOrderChannels_28)); }
	inline List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * get_m_SharedOrderChannels_28() const { return ___m_SharedOrderChannels_28; }
	inline List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B ** get_address_of_m_SharedOrderChannels_28() { return &___m_SharedOrderChannels_28; }
	inline void set_m_SharedOrderChannels_28(List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * value)
	{
		___m_SharedOrderChannels_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedOrderChannels_28), (void*)value);
	}
};


// UnityEngine.Networking.GlobalConfig
struct  GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66  : public RuntimeObject
{
public:
	// System.UInt32 UnityEngine.Networking.GlobalConfig::m_ThreadAwakeTimeout
	uint32_t ___m_ThreadAwakeTimeout_3;
	// UnityEngine.Networking.ReactorModel UnityEngine.Networking.GlobalConfig::m_ReactorModel
	int32_t ___m_ReactorModel_4;
	// System.UInt16 UnityEngine.Networking.GlobalConfig::m_ReactorMaximumReceivedMessages
	uint16_t ___m_ReactorMaximumReceivedMessages_5;
	// System.UInt16 UnityEngine.Networking.GlobalConfig::m_ReactorMaximumSentMessages
	uint16_t ___m_ReactorMaximumSentMessages_6;
	// System.UInt16 UnityEngine.Networking.GlobalConfig::m_MaxPacketSize
	uint16_t ___m_MaxPacketSize_7;
	// System.UInt16 UnityEngine.Networking.GlobalConfig::m_MaxHosts
	uint16_t ___m_MaxHosts_8;
	// System.Byte UnityEngine.Networking.GlobalConfig::m_ThreadPoolSize
	uint8_t ___m_ThreadPoolSize_9;
	// System.UInt32 UnityEngine.Networking.GlobalConfig::m_MinTimerTimeout
	uint32_t ___m_MinTimerTimeout_10;
	// System.UInt32 UnityEngine.Networking.GlobalConfig::m_MaxTimerTimeout
	uint32_t ___m_MaxTimerTimeout_11;
	// System.UInt32 UnityEngine.Networking.GlobalConfig::m_MinNetSimulatorTimeout
	uint32_t ___m_MinNetSimulatorTimeout_12;
	// System.UInt32 UnityEngine.Networking.GlobalConfig::m_MaxNetSimulatorTimeout
	uint32_t ___m_MaxNetSimulatorTimeout_13;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Networking.GlobalConfig::m_ConnectionReadyForSend
	Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * ___m_ConnectionReadyForSend_14;
	// System.Action`1<System.Int32> UnityEngine.Networking.GlobalConfig::m_NetworkEventAvailable
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___m_NetworkEventAvailable_15;

public:
	inline static int32_t get_offset_of_m_ThreadAwakeTimeout_3() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_ThreadAwakeTimeout_3)); }
	inline uint32_t get_m_ThreadAwakeTimeout_3() const { return ___m_ThreadAwakeTimeout_3; }
	inline uint32_t* get_address_of_m_ThreadAwakeTimeout_3() { return &___m_ThreadAwakeTimeout_3; }
	inline void set_m_ThreadAwakeTimeout_3(uint32_t value)
	{
		___m_ThreadAwakeTimeout_3 = value;
	}

	inline static int32_t get_offset_of_m_ReactorModel_4() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_ReactorModel_4)); }
	inline int32_t get_m_ReactorModel_4() const { return ___m_ReactorModel_4; }
	inline int32_t* get_address_of_m_ReactorModel_4() { return &___m_ReactorModel_4; }
	inline void set_m_ReactorModel_4(int32_t value)
	{
		___m_ReactorModel_4 = value;
	}

	inline static int32_t get_offset_of_m_ReactorMaximumReceivedMessages_5() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_ReactorMaximumReceivedMessages_5)); }
	inline uint16_t get_m_ReactorMaximumReceivedMessages_5() const { return ___m_ReactorMaximumReceivedMessages_5; }
	inline uint16_t* get_address_of_m_ReactorMaximumReceivedMessages_5() { return &___m_ReactorMaximumReceivedMessages_5; }
	inline void set_m_ReactorMaximumReceivedMessages_5(uint16_t value)
	{
		___m_ReactorMaximumReceivedMessages_5 = value;
	}

	inline static int32_t get_offset_of_m_ReactorMaximumSentMessages_6() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_ReactorMaximumSentMessages_6)); }
	inline uint16_t get_m_ReactorMaximumSentMessages_6() const { return ___m_ReactorMaximumSentMessages_6; }
	inline uint16_t* get_address_of_m_ReactorMaximumSentMessages_6() { return &___m_ReactorMaximumSentMessages_6; }
	inline void set_m_ReactorMaximumSentMessages_6(uint16_t value)
	{
		___m_ReactorMaximumSentMessages_6 = value;
	}

	inline static int32_t get_offset_of_m_MaxPacketSize_7() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_MaxPacketSize_7)); }
	inline uint16_t get_m_MaxPacketSize_7() const { return ___m_MaxPacketSize_7; }
	inline uint16_t* get_address_of_m_MaxPacketSize_7() { return &___m_MaxPacketSize_7; }
	inline void set_m_MaxPacketSize_7(uint16_t value)
	{
		___m_MaxPacketSize_7 = value;
	}

	inline static int32_t get_offset_of_m_MaxHosts_8() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_MaxHosts_8)); }
	inline uint16_t get_m_MaxHosts_8() const { return ___m_MaxHosts_8; }
	inline uint16_t* get_address_of_m_MaxHosts_8() { return &___m_MaxHosts_8; }
	inline void set_m_MaxHosts_8(uint16_t value)
	{
		___m_MaxHosts_8 = value;
	}

	inline static int32_t get_offset_of_m_ThreadPoolSize_9() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_ThreadPoolSize_9)); }
	inline uint8_t get_m_ThreadPoolSize_9() const { return ___m_ThreadPoolSize_9; }
	inline uint8_t* get_address_of_m_ThreadPoolSize_9() { return &___m_ThreadPoolSize_9; }
	inline void set_m_ThreadPoolSize_9(uint8_t value)
	{
		___m_ThreadPoolSize_9 = value;
	}

	inline static int32_t get_offset_of_m_MinTimerTimeout_10() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_MinTimerTimeout_10)); }
	inline uint32_t get_m_MinTimerTimeout_10() const { return ___m_MinTimerTimeout_10; }
	inline uint32_t* get_address_of_m_MinTimerTimeout_10() { return &___m_MinTimerTimeout_10; }
	inline void set_m_MinTimerTimeout_10(uint32_t value)
	{
		___m_MinTimerTimeout_10 = value;
	}

	inline static int32_t get_offset_of_m_MaxTimerTimeout_11() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_MaxTimerTimeout_11)); }
	inline uint32_t get_m_MaxTimerTimeout_11() const { return ___m_MaxTimerTimeout_11; }
	inline uint32_t* get_address_of_m_MaxTimerTimeout_11() { return &___m_MaxTimerTimeout_11; }
	inline void set_m_MaxTimerTimeout_11(uint32_t value)
	{
		___m_MaxTimerTimeout_11 = value;
	}

	inline static int32_t get_offset_of_m_MinNetSimulatorTimeout_12() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_MinNetSimulatorTimeout_12)); }
	inline uint32_t get_m_MinNetSimulatorTimeout_12() const { return ___m_MinNetSimulatorTimeout_12; }
	inline uint32_t* get_address_of_m_MinNetSimulatorTimeout_12() { return &___m_MinNetSimulatorTimeout_12; }
	inline void set_m_MinNetSimulatorTimeout_12(uint32_t value)
	{
		___m_MinNetSimulatorTimeout_12 = value;
	}

	inline static int32_t get_offset_of_m_MaxNetSimulatorTimeout_13() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_MaxNetSimulatorTimeout_13)); }
	inline uint32_t get_m_MaxNetSimulatorTimeout_13() const { return ___m_MaxNetSimulatorTimeout_13; }
	inline uint32_t* get_address_of_m_MaxNetSimulatorTimeout_13() { return &___m_MaxNetSimulatorTimeout_13; }
	inline void set_m_MaxNetSimulatorTimeout_13(uint32_t value)
	{
		___m_MaxNetSimulatorTimeout_13 = value;
	}

	inline static int32_t get_offset_of_m_ConnectionReadyForSend_14() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_ConnectionReadyForSend_14)); }
	inline Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * get_m_ConnectionReadyForSend_14() const { return ___m_ConnectionReadyForSend_14; }
	inline Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 ** get_address_of_m_ConnectionReadyForSend_14() { return &___m_ConnectionReadyForSend_14; }
	inline void set_m_ConnectionReadyForSend_14(Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * value)
	{
		___m_ConnectionReadyForSend_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConnectionReadyForSend_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_NetworkEventAvailable_15() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_NetworkEventAvailable_15)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_m_NetworkEventAvailable_15() const { return ___m_NetworkEventAvailable_15; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_m_NetworkEventAvailable_15() { return &___m_NetworkEventAvailable_15; }
	inline void set_m_NetworkEventAvailable_15(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___m_NetworkEventAvailable_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NetworkEventAvailable_15), (void*)value);
	}
};


// System.Action`1<System.Int32>
struct  Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Int32,System.Int32>
struct  Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NullReferenceException
struct  NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t88367D6A0A0435F3B7F5A180EAE18DC0323A14E7 * List_1_AsReadOnly_m5B294C3B51BB4CD52DCA4DC740F05BA7A873859E_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3 (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::.ctor()
inline void List_1__ctor_m0F98CE6F7E0141E6A7388E6DA3FCC2F93802C219 (List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::.ctor()
inline void List_1__ctor_m07E75EC513A2A1B607C7C94D32F9F1DD52F9DC81 (List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxCombinedReliableMessageSize_m9165A4E3AE23CDADE7CAEFA3FAC29401A6449CD1 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::GetEnumerator()
inline Enumerator_t2F8B0C9500483A43B42F26A09356CEA1E8162787  List_1_GetEnumerator_mBC12FB54B3BD6D46D3D0041FC837BB9B5ABD5224 (List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2F8B0C9500483A43B42F26A09356CEA1E8162787  (*) (List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.ChannelQOS>::get_Current()
inline ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * Enumerator_get_Current_mEC015BBE1981CD48D16AA43753CE5A52D359E57F_inline (Enumerator_t2F8B0C9500483A43B42F26A09356CEA1E8162787 * __this, const RuntimeMethod* method)
{
	return ((  ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * (*) (Enumerator_t2F8B0C9500483A43B42F26A09356CEA1E8162787 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.ChannelQOS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelQOS__ctor_m885E633D2A1D64E13E087DA039943C767E575DA8 (ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * __this, ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * ___channel0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::Add(!0)
inline void List_1_Add_m04CCA815BA538CCC717F5B0CEABEE87777C02191 (List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * __this, ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 *, ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.ChannelQOS>::MoveNext()
inline bool Enumerator_MoveNext_mCF03F3EA00D810696408ABDA570EF4EF0976E030 (Enumerator_t2F8B0C9500483A43B42F26A09356CEA1E8162787 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2F8B0C9500483A43B42F26A09356CEA1E8162787 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.ChannelQOS>::Dispose()
inline void Enumerator_Dispose_mCA5AF94E5CDC291C5024A38E2660C8CB19682EE0 (Enumerator_t2F8B0C9500483A43B42F26A09356CEA1E8162787 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2F8B0C9500483A43B42F26A09356CEA1E8162787 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::GetEnumerator()
inline Enumerator_t0340BD53573C77700ED3FF138F75977DCBDF1DEE  List_1_GetEnumerator_m795565AF9DAB5243B5CCB29CA6129D67F619C88E (List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t0340BD53573C77700ED3FF138F75977DCBDF1DEE  (*) (List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Byte>>::get_Current()
inline List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * Enumerator_get_Current_m9C6BB00A24C9CB4946A9E76569A445E8173A2B01_inline (Enumerator_t0340BD53573C77700ED3FF138F75977DCBDF1DEE * __this, const RuntimeMethod* method)
{
	return ((  List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * (*) (Enumerator_t0340BD53573C77700ED3FF138F75977DCBDF1DEE *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::Add(!0)
inline void List_1_Add_m395F91C48816169EBE7E930528A1A8CE600FD060 (List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * __this, List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B *, List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Byte>>::MoveNext()
inline bool Enumerator_MoveNext_mD073B0C912CA5B28B0809D9F5CA2848BDC176469 (Enumerator_t0340BD53573C77700ED3FF138F75977DCBDF1DEE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0340BD53573C77700ED3FF138F75977DCBDF1DEE *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Byte>>::Dispose()
inline void Enumerator_Dispose_mC56BDC16EF132C1FF68A2DE409C105AD6B6EDB92 (Enumerator_t0340BD53573C77700ED3FF138F75977DCBDF1DEE * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0340BD53573C77700ED3FF138F75977DCBDF1DEE *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::get_Count()
inline int32_t List_1_get_Count_m94137B698864A43E9459A65D4BE18DA911CA9939_inline (List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::get_Count()
inline int32_t List_1_get_Count_mB609C617D427D5EC266B009014EB41732F164150_inline (List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_m70E955627155998B426145940DE105ECEF213B96 (Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.QosType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelQOS__ctor_m27A6808139CF080A838D4BEB5F0E10246017335A (ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::get_Item(System.Int32)
inline ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * List_1_get_Item_mEA12AB396EABC73A3E2E57BE233BC77763A61BFA_inline (List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * (*) (List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Networking.QosType UnityEngine.Networking.ChannelQOS::get_QOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChannelQOS_get_QOS_mF5244DCF956770207F0E45F59EE694FA0647917B (ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::get_Item(System.Int32)
inline List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * List_1_get_Item_m68E7DB4815C63A275BDC11FF71FACD9235A7C562_inline (List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * (*) (List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
inline ReadOnlyCollection_1_t88367D6A0A0435F3B7F5A180EAE18DC0323A14E7 * List_1_AsReadOnly_m5B294C3B51BB4CD52DCA4DC740F05BA7A873859E (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t88367D6A0A0435F3B7F5A180EAE18DC0323A14E7 * (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, const RuntimeMethod*))List_1_AsReadOnly_m5B294C3B51BB4CD52DCA4DC740F05BA7A873859E_gshared)(__this, method);
}
// System.IntPtr UnityEngine.Networking.ConnectionConfigInternal::InternalCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ConnectionConfigInternal_InternalCreate_m57E00EAD6FD85A7AEE88C4BABD2B76F028D26229 (const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_PacketSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_PacketSize_mF111FD026B1D2B89D5254278F879E81B3700AD87 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.ConnectionConfigInternal::SetPacketSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionConfigInternal_SetPacketSize_m53D38ACE88594D14DFB61BF99B2109FA35F5E4B3 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_FragmentSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_FragmentSize_m484053C0601EC4C11376B231262171C4514D8B62 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_FragmentSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_FragmentSize_m81A3C2E79C8CA333D4901A34E253916986870678 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ResendTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ResendTimeout_mDF1507B518A47887277E53F0930DC1CA5A973FCF (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_ResendTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_ResendTimeout_m52B7443A4BF5D1DC15E41BC1E3EA4B0890D06413 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_DisconnectTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_DisconnectTimeout_m173B79C0C029B50A4250352F1219E8631D40586C (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_DisconnectTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_DisconnectTimeout_m7B620F41E9B1F610CA2616939BBE5C636C073369 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ConnectTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ConnectTimeout_mDCE83595DFC763E869D55FF4F120CFE7BE5E84DF (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_ConnectTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_ConnectTimeout_mC4F96B2E33DB75AB6CFB251E28816294F4D629F2 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_MinUpdateTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_MinUpdateTimeout_mAF0AEE59A6FDED5C2B37111FC8BB7875A6E13F65 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MinUpdateTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MinUpdateTimeout_mF4DA20AA8EAF8A4E82DA4471483A5B8A3601B2F7 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_PingTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_PingTimeout_mC060D30B64D197917007D81E2DE93C3A85B2E601 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_PingTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_PingTimeout_m882CF8571F3F466C026F84FB48FD7BCAFC41FBF3 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ReducedPingTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ReducedPingTimeout_m332075F8A61A51FBB2738BAE9DDD4313A507D979 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_ReducedPingTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_ReducedPingTimeout_m10956CD170C63491A8D04F4A95D048090831E8CE (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AllCostTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_AllCostTimeout_m123FA29854A46EFE05048577E3B01FDB386472F9 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_AllCostTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_AllCostTimeout_m37CC810E66808CDCFBDA2DA785169927C8FE5553 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.ConnectionConfig::get_NetworkDropThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_NetworkDropThreshold_m73408CF1E684E9331CAB60214C1A4202FE38162F (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_NetworkDropThreshold(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_NetworkDropThreshold_m0E9A369B4625FDBE833B23D9A792E8CD111F5AF4 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.ConnectionConfig::get_OverflowDropThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_OverflowDropThreshold_m230A2787733CA84DC31F44330506F00E9F8B2833 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_OverflowDropThreshold(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_OverflowDropThreshold_m4AD127798D39BC9B8034EC35DA235EAC85D87B18 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.ConnectionConfig::get_MaxConnectionAttempt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_MaxConnectionAttempt_m00AABC69DE80B89AB2710361768544F0D380787B (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxConnectionAttempt(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxConnectionAttempt_m6A5DFC749DB71E05E4167E11ED8D1930D34A20A9 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AckDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_AckDelay_m191F064DBF69779F634408012F65C838A823D7AA (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_AckDelay(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_AckDelay_m39BC6D36B69AE86B8587FEDCA9B6232F7A9D1960 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_SendDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_SendDelay_mBEEE56DA650F2C5EC85E72A6422A2CD2A2FAD228 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_SendDelay(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_SendDelay_m6CDA97F9DB65D815562064D9FC5C6E92FDD735E3 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxCombinedReliableMessageSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxCombinedReliableMessageSize_mAD08AF5D34269E4648AA1630AE3524A0747433CC (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxCombinedReliableMessageCount_mEC5C1ABA687D86DC5FCD020FEEC6423860AE2EE9 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxCombinedReliableMessageCount(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxCombinedReliableMessageCount_m477651B41F261E81BC43D3C854AA6664EBF7B541 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxSentMessageQueueSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxSentMessageQueueSize_m98D5D25BA1DD83103EDAEDBC8F11653CFFA8D848 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxSentMessageQueueSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxSentMessageQueueSize_m517343266C198505E7BD899AD4489AD6BD593AE1 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint16_t ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.ConnectionAcksType UnityEngine.Networking.ConnectionConfig::get_AcksType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_AcksType_mE938983722B1EDBEB1ABD7D1292BDDA8847299FE (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_AcksType(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_AcksType_m9CB8EE193EE3AEDB5CC5E63D3DE5D768450523EE (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.ConnectionConfig::get_UsePlatformSpecificProtocols()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionConfig_get_UsePlatformSpecificProtocols_m4BE9E4483FAB5F015D560C2A31942F522B35AB85 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_UsePlatformSpecificProtocols(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_UsePlatformSpecificProtocols_m65F8757AA1E47534DD74441D8325B7F33320985E (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, bool ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_InitialBandwidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_InitialBandwidth_m7616A3F25FE1459562849DA4EB0F12BA80CB420B (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_InitialBandwidth(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_InitialBandwidth_mF6348D56F65CED75B5809F6AE996C2DDB8903244 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.ConnectionConfig::get_BandwidthPeakFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ConnectionConfig_get_BandwidthPeakFactor_mA1E5982C49A375FA7E347CAA42B2C89FD08B8B51 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_BandwidthPeakFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_BandwidthPeakFactor_m3C43D6BD419D87787D18860D3927E7E1ABE1F9B7 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, float ___value0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_WebSocketReceiveBufferMaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_WebSocketReceiveBufferMaxSize_m1B9EE2B09699C09651DF5DFEBB46199D33ADBC5B (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_WebSocketReceiveBufferMaxSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_WebSocketReceiveBufferMaxSize_m02AD41DCF144B4EE187F705916F85BE3C1D5895F (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_UdpSocketReceiveBufferMaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_UdpSocketReceiveBufferMaxSize_m55D6B396EA136644276C0752FA02B613F5915985 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_UdpSocketReceiveBufferMaxSize(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_UdpSocketReceiveBufferMaxSize_m04A8CBD90C0CD7F0E888BC09D78EA9378C74B019 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLCertFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLCertFilePath_m6AAC33A8DDF7077A4AFFBDCE3688E7589EF77425 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::SetSSLCertFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_SetSSLCertFilePath_mE1BB6420E3CB9775AD1E55561D9973D7DA1794A4 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLPrivateKeyFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLPrivateKeyFilePath_mAF3636A8502E6ADCCEB47FDDECC35C767E80118B (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::SetSSLPrivateKeyFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_SetSSLPrivateKeyFilePath_m97560CCDF198A876997E44D363018BA65C5929EB (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLCAFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLCAFilePath_m4C6D3C771C6E55B6789F03944B6A7DBDFCD4E9B8 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::SetSSLCAFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_SetSSLCAFilePath_mC553B8CCC370BFC28CC8D26437CC6B1F0FD60315 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.QosType UnityEngine.Networking.ConnectionConfig::GetChannel(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_GetChannel_m0473DB76B5FE9E1992A3500F37F3C88ACB6DA3D4 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint8_t ___idx0, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.ConnectionConfigInternal::AddChannel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfigInternal_AddChannel_m6F0C7412C1B07FA22276ED59872E1B5280C07C14 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_ChannelCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_ChannelCount_m932C1B881D3046BC18899207F5796698B7539C7C (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<System.Byte> UnityEngine.Networking.ConnectionConfig::GetSharedOrderChannels(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionConfig_GetSharedOrderChannels_m7DB0D9738F33E044807142B8C2CBB50DDA42A9EC (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint8_t ___idx0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.ConnectionConfigInternal::MakeChannelsSharedOrder(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionConfigInternal_MakeChannelsSharedOrder_m386F46D817576653643A908AAAA1AB6DA136707E (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___values0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_SharedOrderChannelCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_SharedOrderChannelCount_m406DE1A3A83A15FCC644746D4C7A6180339A4853 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InternalDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InternalDestroy_mA5ED8454D97B55A9BF3FDDC6DDE09D31E6DF20E9 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.GlobalConfig::get_MaxTimerTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GlobalConfig_get_MaxTimerTimeout_mCD5050AC59E0C337AA85E9C77EB33F8077649945 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Networking.GlobalConfigInternal::InternalCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GlobalConfigInternal_InternalCreate_m68D5446714022799455D7C09C48BF18DC0EDEC90 (const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.GlobalConfig::get_ThreadAwakeTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GlobalConfig_get_ThreadAwakeTimeout_mD0B48A1B07BA6851A019B0EF69BE4FBBDDBC7552 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::set_ThreadAwakeTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_set_ThreadAwakeTimeout_mE59BEC296BB2878EC5DBB317ADCA406852E49FCE (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, uint32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.ReactorModel UnityEngine.Networking.GlobalConfig::get_ReactorModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlobalConfig_get_ReactorModel_m17AC0B9C3BFE6A06D5ED6287840B318B07FD7963 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::set_ReactorModel(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_set_ReactorModel_m370F4A7B85736E2A9A92760B8491B019E9309A8D (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.GlobalConfig::get_ReactorMaximumReceivedMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t GlobalConfig_get_ReactorMaximumReceivedMessages_m587841C2DBAEA01D10B66F333CA376C3A61B6C33 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::set_ReactorMaximumReceivedMessages(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_set_ReactorMaximumReceivedMessages_mF4B7494442A14194F16E04F41373E9CA2B7CC620 (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.GlobalConfig::get_ReactorMaximumSentMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t GlobalConfig_get_ReactorMaximumSentMessages_m71E2AF5B8E8A777099B2FC9746F965935B95CD41 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::set_ReactorMaximumSentMessages(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_set_ReactorMaximumSentMessages_m0869AE8CD72F55DDB159F32E1730B4C07B28C6CE (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.GlobalConfig::get_MaxPacketSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t GlobalConfig_get_MaxPacketSize_mFC9F967F3D5F7BCA7AEF0CEA2A764FAC75884387 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::set_MaxPacketSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_set_MaxPacketSize_m8C6143A73542A29FE2E2A299CC03BB1081C62D02 (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.GlobalConfig::get_MaxHosts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t GlobalConfig_get_MaxHosts_m96B921B2164D801914BC596559B3373962DB4CC2 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::set_MaxHosts(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_set_MaxHosts_m6E4D5FA13061E1D5BB12BAE76C2DE4CE1A48FA99 (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.GlobalConfig::get_ThreadPoolSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t GlobalConfig_get_ThreadPoolSize_m3F884581529F6474406313B001354AA23885682C (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::set_ThreadPoolSize(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_set_ThreadPoolSize_mA30F9BEAE6BBE337D7AA5CF85F22DE65A1AAB641 (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.GlobalConfig::get_MinTimerTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GlobalConfig_get_MinTimerTimeout_m108C611D76E95BDA013E819EF86BCF902F977A7B (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::set_MinTimerTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_set_MinTimerTimeout_m2330A74449E798E17D30A685CC9AF0FDBAED53E1 (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::set_MaxTimerTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_set_MaxTimerTimeout_mED89AE4816D8B7B39183849289738DF641C242CF (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.GlobalConfig::get_MinNetSimulatorTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GlobalConfig_get_MinNetSimulatorTimeout_m4C6BB9D0CAA455E0AE2EED89EC8D2DEAAC39D7F4 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::set_MinNetSimulatorTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_set_MinNetSimulatorTimeout_m54488C6614ED2EF9FFAB902757CC3CFE895E9834 (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.GlobalConfig::get_MaxNetSimulatorTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GlobalConfig_get_MaxNetSimulatorTimeout_mD86F57F2E32CB417D44272936D24A04D35C0FE1E (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::set_MaxNetSimulatorTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_set_MaxNetSimulatorTimeout_m247688A48376F7FA4B9551DC3292FBD05309989D (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::InternalDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_InternalDestroy_m82C15BED6D4EB877B4702894F1C07780AFD65B68 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>::.ctor()
inline void List_1__ctor_m1F4A4C6B76603E6A2DA8067FDC73F87532587024 (List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.ConnectionConfig::Validate(UnityEngine.Networking.ConnectionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_Validate_m84787B66F366FDC5EF3D074316F7041E84AA735F (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * ___config0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor(UnityEngine.Networking.ConnectionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig__ctor_m1976654A083CE2C1858BECF7EED65005BFC16343 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * ___config0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>::get_Count()
inline int32_t List_1_get_Count_m2C0EC005D5C06E5F178A8FB94D48DA905506D907_inline (List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>::get_Item(System.Int32)
inline ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * List_1_get_Item_mA887125ECBEEA92DEE8520B227EFE1CBF3FB6434_inline (List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * (*) (List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::get_DefaultConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * HostTopology_get_DefaultConfig_m0E4C32CC256D7C901C1C91C86B38F33EBD03A0E3 (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::.ctor(UnityEngine.Networking.ConnectionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal__ctor_m3159326166C18DBB931A215F34FDE777C78D2AC0 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * ___config0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.HostTopology::get_MaxDefaultConnections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HostTopology_get_MaxDefaultConnections_mBED404D3C504A13C5302198D237E509B664CFEAD (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Networking.HostTopologyInternal::InternalCreate(UnityEngine.Networking.ConnectionConfigInternal,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HostTopologyInternal_InternalCreate_m04CCA00F1B270054658A87CE635FB6E83ADD3551 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * ___config0, int32_t ___maxDefaultConnections1, const RuntimeMethod* method);
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::GetSpecialConnectionConfig(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * HostTopology_GetSpecialConnectionConfig_m52EB0C01DBCEFABCCA2999BA5AA4FC5200049BC1 (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * __this, int32_t ___i0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.HostTopologyInternal::AddSpecialConnectionConfig(UnityEngine.Networking.ConnectionConfigInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HostTopologyInternal_AddSpecialConnectionConfig_m0A2F45F5745DC98599A7EE8359F3A17DBE66856C (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 * __this, ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * ___config0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.HostTopology::get_SpecialConnectionConfigsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HostTopology_get_SpecialConnectionConfigsCount_m34BCBF16F6499FF007E37C3C3657B1BAE8E8522C (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * __this, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.HostTopology::get_ReceivedMessagePoolSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HostTopology_get_ReceivedMessagePoolSize_m37EAF773FF7EB9CB306E0BC20FE9B132C16880FD (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::set_ReceivedMessagePoolSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_set_ReceivedMessagePoolSize_m058306E23591D771402037081DA32C2FE60B1464 (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.HostTopology::get_SentMessagePoolSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HostTopology_get_SentMessagePoolSize_m04C3CF4CEC53530BBB0CA64C753F9EFEAF6EB16A (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::set_SentMessagePoolSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_set_SentMessagePoolSize_mAB16B0D773E42DD470FBC0F2C79030B914DAABE1 (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.HostTopology::get_MessagePoolSizeGrowthFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HostTopology_get_MessagePoolSizeGrowthFactor_m7A7ED02522613F0DB49B663F1F51B0104FC60FA0 (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::set_MessagePoolSizeGrowthFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_set_MessagePoolSizeGrowthFactor_mE735BFC3E80552A0BD0C125B06BD80973563020A (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::InternalDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_InternalDestroy_m71E5CC3F9775FC938F4B1397F87811AEF3FCFECF (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Action`1<System.Int32> UnityEngine.Networking.GlobalConfig::get_NetworkEventAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * GlobalConfig_get_NetworkEventAvailable_m6D648DA928B1C86504ED603F268A3036FBDB457E (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransport::SetNetworkEventAvailableCallback(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_SetNetworkEventAvailableCallback_m9996DCB1B44D723DC6D555810D3A474B8A91B64F (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___callback0, const RuntimeMethod* method);
// System.Action`2<System.Int32,System.Int32> UnityEngine.Networking.GlobalConfig::get_ConnectionReadyForSend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * GlobalConfig_get_ConnectionReadyForSend_m8F88B2A0D0C17D7A9800470C377CF827694F3EE6 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransport::SetConnectionReadyForSendCallback(System.Action`2<System.Int32,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_SetConnectionReadyForSendCallback_mD9660BB5DDC8630EBB844DC6A717D4F6CBF8EF05 (Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::.ctor(UnityEngine.Networking.GlobalConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal__ctor_m9D3BDDFE489512D1B72565B516638C76564AAA68 (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * ___config0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransport::InitializeClassWithConfig(UnityEngine.Networking.GlobalConfigInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_InitializeClassWithConfig_mA43ECAAD1DEFB5BA599591691AF2B3826F6A0BDC (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * ___config0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransport::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_Cleanup_m7BF767E0AB80E628379B2AF924E109666794B6F0 (const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransport::CheckTopology(UnityEngine.Networking.HostTopology)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_CheckTopology_mCA4CDEBBD3AA34CE15D5110586307B01EAD7C1AA (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * ___topology0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::.ctor(UnityEngine.Networking.HostTopology)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal__ctor_m9DAA9FD8AC2102B55B9EB6E4F334C8B8555F5E43 (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 * __this, HostTopology_t268779309BB2D69F29D1A182662C79818813892B * ___topology0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostInternal(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostInternal_mE6C08100955EB6B0A84D2012C4539CCEFD21D78F (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 * ___topologyInt0, String_t* ___ip1, int32_t ___port2, int32_t ___minTimeout3, int32_t ___maxTimeout4, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWithSimulator(UnityEngine.Networking.HostTopology,System.Int32,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostWithSimulator_m7D2AA3190354AF70603B43E642EBABD8B014E2B8 (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * ___topology0, int32_t ___minTimeout1, int32_t ___maxTimeout2, int32_t ___port3, String_t* ___ip4, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHost_m24D3C68D33504C5A83C47A701F7CDA20E814898D (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * ___topology0, int32_t ___port1, String_t* ___ip2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkTransport::IsPortOpen(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_IsPortOpen_mDE9CADB4888CF273569A783CD842A22D921AAFB4 (String_t* ___ip0, int32_t ___port1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWsHostInternal(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddWsHostInternal_mC1C24C4B573DA481ED99DB6C68B44E29D30A6AB0 (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 * ___topologyInt0, String_t* ___ip1, int32_t ___port2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWebsocketHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddWebsocketHost_m700C762A710DDC088B7768520A810E8B211143B5 (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * ___topology0, int32_t ___port1, String_t* ___ip2, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  TimeSpan_FromMilliseconds_m12D90542B044C450FDFBCEA1CBC32369479483EC (double ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient__ctor_m04BD4EDA03D1AE7183FC99DB886BD93CF85D2F2C (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, const RuntimeMethod* method);
// System.IAsyncResult System.Net.Sockets.TcpClient::BeginConnect(System.String,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TcpClient_BeginConnect_mAF5D929DCA6FFD78BC0DE6E0F448B5F911CD8303 (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, String_t* ___host0, int32_t ___port1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___requestCallback2, RuntimeObject * ___state3, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::EndConnect(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_EndConnect_m8A878839804034D19DA751A6FC9C11736017782D (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.NetworkTransport::GetConnectionInfo(System.Int32,System.Int32,System.Int32&,System.UInt64&,System.UInt16&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkTransport_GetConnectionInfo_m9C1C905E4C06B265514A87B380E4851795068A24 (int32_t ___hostId0, int32_t ___connectionId1, int32_t* ___port2, uint64_t* ___network3, uint16_t* ___dstNode4, uint8_t* ___error5, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkTransport::SendWrapper(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_SendWrapper_m2BEDC12E5B2E0AADC4E602DDEDA16552C29EBB5D (int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::PopDataFromHost(System.Int32,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_PopDataFromHost_mB17AEA581E92B7C403B4C14C01A796E55138D910 (int32_t ___hostId0, int32_t* ___connectionId1, int32_t* ___channelId2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer3, int32_t ___bufferSize4, int32_t* ___receivedSize5, uint8_t* ___error6, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::GetMaxPacketSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_GetMaxPacketSize_m98EE9A0A5FD4C30AEF12D0B7EE498B3043E929F1 (const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> UnityEngine.Networking.HostTopology::get_SpecialConnectionConfigs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * HostTopology_get_SpecialConnectionConfigs_m6FA6CF1CD59EBC0DBBB9454048EDDACE322C029C (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.QosType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelQOS__ctor_m27A6808139CF080A838D4BEB5F0E10246017335A (ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___value0;
		__this->set_m_Type_0(L_0);
		__this->set_m_BelongsSharedOrderChannel_1((bool)0);
		return;
	}
}
// System.Void UnityEngine.Networking.ChannelQOS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelQOS__ctor_mC81B2299638594A864108C3B898944CA10F7B146 (ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_m_Type_0(0);
		__this->set_m_BelongsSharedOrderChannel_1((bool)0);
		return;
	}
}
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.ChannelQOS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelQOS__ctor_m885E633D2A1D64E13E087DA039943C767E575DA8 (ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * __this, ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * ___channel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChannelQOS__ctor_m885E633D2A1D64E13E087DA039943C767E575DA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * L_0 = ___channel0;
		V_0 = (bool)((((RuntimeObject*)(ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_2 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3(L_2, _stringLiteral4DB1A45BB662D79231E9447F2CBFDE3B6CE19D71, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ChannelQOS__ctor_m885E633D2A1D64E13E087DA039943C767E575DA8_RuntimeMethod_var);
	}

IL_001b:
	{
		ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * L_3 = ___channel0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_m_Type_0();
		__this->set_m_Type_0(L_4);
		ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * L_5 = ___channel0;
		NullCheck(L_5);
		bool L_6 = L_5->get_m_BelongsSharedOrderChannel_1();
		__this->set_m_BelongsSharedOrderChannel_1(L_6);
		return;
	}
}
// UnityEngine.Networking.QosType UnityEngine.Networking.ChannelQOS::get_QOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChannelQOS_get_QOS_mF5244DCF956770207F0E45F59EE694FA0647917B (ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Type_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig__ctor_mCB0E2B50103AB6B3917758DC5FC0E52AD153DED3 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig__ctor_mCB0E2B50103AB6B3917758DC5FC0E52AD153DED3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * L_0 = (List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 *)il2cpp_codegen_object_new(List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33_il2cpp_TypeInfo_var);
		List_1__ctor_m0F98CE6F7E0141E6A7388E6DA3FCC2F93802C219(L_0, /*hidden argument*/List_1__ctor_m0F98CE6F7E0141E6A7388E6DA3FCC2F93802C219_RuntimeMethod_var);
		__this->set_m_Channels_27(L_0);
		List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * L_1 = (List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B *)il2cpp_codegen_object_new(List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B_il2cpp_TypeInfo_var);
		List_1__ctor_m07E75EC513A2A1B607C7C94D32F9F1DD52F9DC81(L_1, /*hidden argument*/List_1__ctor_m07E75EC513A2A1B607C7C94D32F9F1DD52F9DC81_RuntimeMethod_var);
		__this->set_m_SharedOrderChannels_28(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_m_PacketSize_1((uint16_t)((int32_t)1440));
		__this->set_m_FragmentSize_2((uint16_t)((int32_t)500));
		__this->set_m_ResendTimeout_3(((int32_t)1200));
		__this->set_m_DisconnectTimeout_4(((int32_t)2000));
		__this->set_m_ConnectTimeout_5(((int32_t)2000));
		__this->set_m_MinUpdateTimeout_6(((int32_t)10));
		__this->set_m_PingTimeout_7(((int32_t)500));
		__this->set_m_ReducedPingTimeout_8(((int32_t)100));
		__this->set_m_AllCostTimeout_9(((int32_t)20));
		__this->set_m_NetworkDropThreshold_10((uint8_t)5);
		__this->set_m_OverflowDropThreshold_11((uint8_t)5);
		__this->set_m_MaxConnectionAttempt_12((uint8_t)((int32_t)10));
		__this->set_m_AckDelay_13(((int32_t)33));
		__this->set_m_SendDelay_14(((int32_t)10));
		__this->set_m_MaxCombinedReliableMessageSize_15((uint16_t)((int32_t)100));
		__this->set_m_MaxCombinedReliableMessageCount_16((uint16_t)((int32_t)10));
		__this->set_m_MaxSentMessageQueueSize_17((uint16_t)((int32_t)512));
		__this->set_m_AcksType_18(1);
		__this->set_m_UsePlatformSpecificProtocols_19((bool)0);
		__this->set_m_InitialBandwidth_20(0);
		__this->set_m_BandwidthPeakFactor_21((2.0f));
		__this->set_m_WebSocketReceiveBufferMaxSize_22((uint16_t)0);
		__this->set_m_UdpSocketReceiveBufferMaxSize_23(0);
		__this->set_m_SSLCertFilePath_24((String_t*)NULL);
		__this->set_m_SSLPrivateKeyFilePath_25((String_t*)NULL);
		__this->set_m_SSLCAFilePath_26((String_t*)NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor(UnityEngine.Networking.ConnectionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig__ctor_m1976654A083CE2C1858BECF7EED65005BFC16343 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig__ctor_m1976654A083CE2C1858BECF7EED65005BFC16343_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_t2F8B0C9500483A43B42F26A09356CEA1E8162787  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * V_3 = NULL;
	Enumerator_t0340BD53573C77700ED3FF138F75977DCBDF1DEE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * L_0 = (List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 *)il2cpp_codegen_object_new(List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33_il2cpp_TypeInfo_var);
		List_1__ctor_m0F98CE6F7E0141E6A7388E6DA3FCC2F93802C219(L_0, /*hidden argument*/List_1__ctor_m0F98CE6F7E0141E6A7388E6DA3FCC2F93802C219_RuntimeMethod_var);
		__this->set_m_Channels_27(L_0);
		List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * L_1 = (List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B *)il2cpp_codegen_object_new(List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B_il2cpp_TypeInfo_var);
		List_1__ctor_m07E75EC513A2A1B607C7C94D32F9F1DD52F9DC81(L_1, /*hidden argument*/List_1__ctor_m07E75EC513A2A1B607C7C94D32F9F1DD52F9DC81_RuntimeMethod_var);
		__this->set_m_SharedOrderChannels_28(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_2 = ___config0;
		V_0 = (bool)((((RuntimeObject*)(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_4 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3(L_4, _stringLiteral317EE74AF038EFA1EFB835A1A142AD358C5939C3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ConnectionConfig__ctor_m1976654A083CE2C1858BECF7EED65005BFC16343_RuntimeMethod_var);
	}

IL_0031:
	{
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_5 = ___config0;
		NullCheck(L_5);
		uint16_t L_6 = L_5->get_m_PacketSize_1();
		__this->set_m_PacketSize_1(L_6);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_7 = ___config0;
		NullCheck(L_7);
		uint16_t L_8 = L_7->get_m_FragmentSize_2();
		__this->set_m_FragmentSize_2(L_8);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_9 = ___config0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->get_m_ResendTimeout_3();
		__this->set_m_ResendTimeout_3(L_10);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_11 = ___config0;
		NullCheck(L_11);
		uint32_t L_12 = L_11->get_m_DisconnectTimeout_4();
		__this->set_m_DisconnectTimeout_4(L_12);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_13 = ___config0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->get_m_ConnectTimeout_5();
		__this->set_m_ConnectTimeout_5(L_14);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_15 = ___config0;
		NullCheck(L_15);
		uint32_t L_16 = L_15->get_m_MinUpdateTimeout_6();
		__this->set_m_MinUpdateTimeout_6(L_16);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_17 = ___config0;
		NullCheck(L_17);
		uint32_t L_18 = L_17->get_m_PingTimeout_7();
		__this->set_m_PingTimeout_7(L_18);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_19 = ___config0;
		NullCheck(L_19);
		uint32_t L_20 = L_19->get_m_ReducedPingTimeout_8();
		__this->set_m_ReducedPingTimeout_8(L_20);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_21 = ___config0;
		NullCheck(L_21);
		uint32_t L_22 = L_21->get_m_AllCostTimeout_9();
		__this->set_m_AllCostTimeout_9(L_22);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_23 = ___config0;
		NullCheck(L_23);
		uint8_t L_24 = L_23->get_m_NetworkDropThreshold_10();
		__this->set_m_NetworkDropThreshold_10(L_24);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_25 = ___config0;
		NullCheck(L_25);
		uint8_t L_26 = L_25->get_m_OverflowDropThreshold_11();
		__this->set_m_OverflowDropThreshold_11(L_26);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_27 = ___config0;
		NullCheck(L_27);
		uint8_t L_28 = L_27->get_m_MaxConnectionAttempt_12();
		__this->set_m_MaxConnectionAttempt_12(L_28);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_29 = ___config0;
		NullCheck(L_29);
		uint32_t L_30 = L_29->get_m_AckDelay_13();
		__this->set_m_AckDelay_13(L_30);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_31 = ___config0;
		NullCheck(L_31);
		uint32_t L_32 = L_31->get_m_SendDelay_14();
		__this->set_m_SendDelay_14(L_32);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_33 = ___config0;
		NullCheck(L_33);
		uint16_t L_34 = ConnectionConfig_get_MaxCombinedReliableMessageSize_m9165A4E3AE23CDADE7CAEFA3FAC29401A6449CD1(L_33, /*hidden argument*/NULL);
		__this->set_m_MaxCombinedReliableMessageSize_15(L_34);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_35 = ___config0;
		NullCheck(L_35);
		uint16_t L_36 = L_35->get_m_MaxCombinedReliableMessageCount_16();
		__this->set_m_MaxCombinedReliableMessageCount_16(L_36);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_37 = ___config0;
		NullCheck(L_37);
		uint16_t L_38 = L_37->get_m_MaxSentMessageQueueSize_17();
		__this->set_m_MaxSentMessageQueueSize_17(L_38);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_39 = ___config0;
		NullCheck(L_39);
		int32_t L_40 = L_39->get_m_AcksType_18();
		__this->set_m_AcksType_18(L_40);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_41 = ___config0;
		NullCheck(L_41);
		bool L_42 = L_41->get_m_UsePlatformSpecificProtocols_19();
		__this->set_m_UsePlatformSpecificProtocols_19(L_42);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_43 = ___config0;
		NullCheck(L_43);
		uint32_t L_44 = L_43->get_m_InitialBandwidth_20();
		__this->set_m_InitialBandwidth_20(L_44);
		uint32_t L_45 = __this->get_m_InitialBandwidth_20();
		V_1 = (bool)((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_1;
		if (!L_46)
		{
			goto IL_0149;
		}
	}
	{
		uint16_t L_47 = __this->get_m_PacketSize_1();
		uint32_t L_48 = __this->get_m_MinUpdateTimeout_6();
		__this->set_m_InitialBandwidth_20(((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_47, (int32_t)((int32_t)1000)))/(uint32_t)(int32_t)L_48)));
	}

IL_0149:
	{
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_49 = ___config0;
		NullCheck(L_49);
		float L_50 = L_49->get_m_BandwidthPeakFactor_21();
		__this->set_m_BandwidthPeakFactor_21(L_50);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_51 = ___config0;
		NullCheck(L_51);
		uint16_t L_52 = L_51->get_m_WebSocketReceiveBufferMaxSize_22();
		__this->set_m_WebSocketReceiveBufferMaxSize_22(L_52);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_53 = ___config0;
		NullCheck(L_53);
		uint32_t L_54 = L_53->get_m_UdpSocketReceiveBufferMaxSize_23();
		__this->set_m_UdpSocketReceiveBufferMaxSize_23(L_54);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_55 = ___config0;
		NullCheck(L_55);
		String_t* L_56 = L_55->get_m_SSLCertFilePath_24();
		__this->set_m_SSLCertFilePath_24(L_56);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_57 = ___config0;
		NullCheck(L_57);
		String_t* L_58 = L_57->get_m_SSLPrivateKeyFilePath_25();
		__this->set_m_SSLPrivateKeyFilePath_25(L_58);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_59 = ___config0;
		NullCheck(L_59);
		String_t* L_60 = L_59->get_m_SSLCAFilePath_26();
		__this->set_m_SSLCAFilePath_26(L_60);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_61 = ___config0;
		NullCheck(L_61);
		List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * L_62 = L_61->get_m_Channels_27();
		NullCheck(L_62);
		Enumerator_t2F8B0C9500483A43B42F26A09356CEA1E8162787  L_63 = List_1_GetEnumerator_mBC12FB54B3BD6D46D3D0041FC837BB9B5ABD5224(L_62, /*hidden argument*/List_1_GetEnumerator_mBC12FB54B3BD6D46D3D0041FC837BB9B5ABD5224_RuntimeMethod_var);
		V_2 = L_63;
	}

IL_019e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01bc;
		}

IL_01a0:
		{
			ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * L_64 = Enumerator_get_Current_mEC015BBE1981CD48D16AA43753CE5A52D359E57F_inline((Enumerator_t2F8B0C9500483A43B42F26A09356CEA1E8162787 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mEC015BBE1981CD48D16AA43753CE5A52D359E57F_RuntimeMethod_var);
			V_3 = L_64;
			List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * L_65 = __this->get_m_Channels_27();
			ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * L_66 = V_3;
			ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * L_67 = (ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE *)il2cpp_codegen_object_new(ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE_il2cpp_TypeInfo_var);
			ChannelQOS__ctor_m885E633D2A1D64E13E087DA039943C767E575DA8(L_67, L_66, /*hidden argument*/NULL);
			NullCheck(L_65);
			List_1_Add_m04CCA815BA538CCC717F5B0CEABEE87777C02191(L_65, L_67, /*hidden argument*/List_1_Add_m04CCA815BA538CCC717F5B0CEABEE87777C02191_RuntimeMethod_var);
		}

IL_01bc:
		{
			bool L_68 = Enumerator_MoveNext_mCF03F3EA00D810696408ABDA570EF4EF0976E030((Enumerator_t2F8B0C9500483A43B42F26A09356CEA1E8162787 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mCF03F3EA00D810696408ABDA570EF4EF0976E030_RuntimeMethod_var);
			if (L_68)
			{
				goto IL_01a0;
			}
		}

IL_01c5:
		{
			IL2CPP_LEAVE(0x1D6, FINALLY_01c7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01c7;
	}

FINALLY_01c7:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mCA5AF94E5CDC291C5024A38E2660C8CB19682EE0((Enumerator_t2F8B0C9500483A43B42F26A09356CEA1E8162787 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mCA5AF94E5CDC291C5024A38E2660C8CB19682EE0_RuntimeMethod_var);
		IL2CPP_END_FINALLY(455)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(455)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1D6, IL_01d6)
	}

IL_01d6:
	{
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_69 = ___config0;
		NullCheck(L_69);
		List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * L_70 = L_69->get_m_SharedOrderChannels_28();
		NullCheck(L_70);
		Enumerator_t0340BD53573C77700ED3FF138F75977DCBDF1DEE  L_71 = List_1_GetEnumerator_m795565AF9DAB5243B5CCB29CA6129D67F619C88E(L_70, /*hidden argument*/List_1_GetEnumerator_m795565AF9DAB5243B5CCB29CA6129D67F619C88E_RuntimeMethod_var);
		V_4 = L_71;
	}

IL_01e4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01ff;
		}

IL_01e6:
		{
			List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_72 = Enumerator_get_Current_m9C6BB00A24C9CB4946A9E76569A445E8173A2B01_inline((Enumerator_t0340BD53573C77700ED3FF138F75977DCBDF1DEE *)(&V_4), /*hidden argument*/Enumerator_get_Current_m9C6BB00A24C9CB4946A9E76569A445E8173A2B01_RuntimeMethod_var);
			V_5 = L_72;
			List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * L_73 = __this->get_m_SharedOrderChannels_28();
			List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_74 = V_5;
			NullCheck(L_73);
			List_1_Add_m395F91C48816169EBE7E930528A1A8CE600FD060(L_73, L_74, /*hidden argument*/List_1_Add_m395F91C48816169EBE7E930528A1A8CE600FD060_RuntimeMethod_var);
		}

IL_01ff:
		{
			bool L_75 = Enumerator_MoveNext_mD073B0C912CA5B28B0809D9F5CA2848BDC176469((Enumerator_t0340BD53573C77700ED3FF138F75977DCBDF1DEE *)(&V_4), /*hidden argument*/Enumerator_MoveNext_mD073B0C912CA5B28B0809D9F5CA2848BDC176469_RuntimeMethod_var);
			if (L_75)
			{
				goto IL_01e6;
			}
		}

IL_0208:
		{
			IL2CPP_LEAVE(0x219, FINALLY_020a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_020a;
	}

FINALLY_020a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC56BDC16EF132C1FF68A2DE409C105AD6B6EDB92((Enumerator_t0340BD53573C77700ED3FF138F75977DCBDF1DEE *)(&V_4), /*hidden argument*/Enumerator_Dispose_mC56BDC16EF132C1FF68A2DE409C105AD6B6EDB92_RuntimeMethod_var);
		IL2CPP_END_FINALLY(522)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(522)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x219, IL_0219)
	}

IL_0219:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::Validate(UnityEngine.Networking.ConnectionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_Validate_m84787B66F366FDC5EF3D074316F7041E84AA735F (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_Validate_m84787B66F366FDC5EF3D074316F7041E84AA735F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_0 = ___config0;
		NullCheck(L_0);
		uint16_t L_1 = L_0->get_m_PacketSize_1();
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)((int32_t)128)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3 = ((int32_t)128);
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteralCDBC178854E256F8C61DC4C296BB7F91494D0D08, L_4, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_6 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ConnectionConfig_Validate_m84787B66F366FDC5EF3D074316F7041E84AA735F_RuntimeMethod_var);
	}

IL_002c:
	{
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_7 = ___config0;
		NullCheck(L_7);
		uint16_t L_8 = L_7->get_m_FragmentSize_2();
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_9 = ___config0;
		NullCheck(L_9);
		uint16_t L_10 = L_9->get_m_PacketSize_1();
		V_1 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)128)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_12 = ((int32_t)128);
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral5A068CD5BEF2AF2FF0E3642874366761954C834B, L_13, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_15 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_15, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ConnectionConfig_Validate_m84787B66F366FDC5EF3D074316F7041E84AA735F_RuntimeMethod_var);
	}

IL_0061:
	{
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_16 = ___config0;
		NullCheck(L_16);
		List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * L_17 = L_16->get_m_Channels_27();
		NullCheck(L_17);
		int32_t L_18 = List_1_get_Count_m94137B698864A43E9459A65D4BE18DA911CA9939_inline(L_17, /*hidden argument*/List_1_get_Count_m94137B698864A43E9459A65D4BE18DA911CA9939_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_18) > ((int32_t)((int32_t)255)))? 1 : 0);
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_0082;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_20 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_20, _stringLiteralDC4A22150C3582A362005292F9B7BDE6394836BA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ConnectionConfig_Validate_m84787B66F366FDC5EF3D074316F7041E84AA735F_RuntimeMethod_var);
	}

IL_0082:
	{
		return;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_PacketSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_PacketSize_mF111FD026B1D2B89D5254278F879E81B3700AD87 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_PacketSize_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_PacketSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_PacketSize_m63659526F918FAEF6046A378EEB4751A1E8EB8DE (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_m_PacketSize_1(L_0);
		return;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_FragmentSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_FragmentSize_m484053C0601EC4C11376B231262171C4514D8B62 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_FragmentSize_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_FragmentSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_FragmentSize_m046E74CD6E0B6F514523F8B0AD39D73AEB250003 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_m_FragmentSize_2(L_0);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ResendTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ResendTimeout_mDF1507B518A47887277E53F0930DC1CA5A973FCF (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_ResendTimeout_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_ResendTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_ResendTimeout_m43632F093312174A1FA0AFEFEC2196AD16168175 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		__this->set_m_ResendTimeout_3(L_0);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_DisconnectTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_DisconnectTimeout_m173B79C0C029B50A4250352F1219E8631D40586C (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_DisconnectTimeout_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_DisconnectTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_DisconnectTimeout_m7857ACD887D1DB00FFD85CDFB15C3CBABBE407F0 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		__this->set_m_DisconnectTimeout_4(L_0);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ConnectTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ConnectTimeout_mDCE83595DFC763E869D55FF4F120CFE7BE5E84DF (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_ConnectTimeout_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_ConnectTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_ConnectTimeout_mA86A065731F5B9BEA715AFD1EBE03F7537170B2A (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		__this->set_m_ConnectTimeout_5(L_0);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_MinUpdateTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_MinUpdateTimeout_mAF0AEE59A6FDED5C2B37111FC8BB7875A6E13F65 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_MinUpdateTimeout_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_MinUpdateTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_MinUpdateTimeout_m9879D2D21137E06AD888D3A77928C98DB71C6101 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_set_MinUpdateTimeout_m9879D2D21137E06AD888D3A77928C98DB71C6101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		uint32_t L_0 = ___value0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_2, _stringLiteral364CBA7CC7922443D723F08B65C6354BDEB51914, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ConnectionConfig_set_MinUpdateTimeout_m9879D2D21137E06AD888D3A77928C98DB71C6101_RuntimeMethod_var);
	}

IL_0014:
	{
		uint32_t L_3 = ___value0;
		__this->set_m_MinUpdateTimeout_6(L_3);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_PingTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_PingTimeout_mC060D30B64D197917007D81E2DE93C3A85B2E601 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_PingTimeout_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_PingTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_PingTimeout_m67BD6EB9190A47F393671B4EAB384A70D1982B38 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		__this->set_m_PingTimeout_7(L_0);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ReducedPingTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ReducedPingTimeout_m332075F8A61A51FBB2738BAE9DDD4313A507D979 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_ReducedPingTimeout_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_ReducedPingTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_ReducedPingTimeout_mE4FAEBD787FE707DDD02E968561EB910ADE5986A (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		__this->set_m_ReducedPingTimeout_8(L_0);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AllCostTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_AllCostTimeout_m123FA29854A46EFE05048577E3B01FDB386472F9 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_AllCostTimeout_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_AllCostTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_AllCostTimeout_m1FF269D0EB7362A6988A2B592A9590DCCFB362E8 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		__this->set_m_AllCostTimeout_9(L_0);
		return;
	}
}
// System.Byte UnityEngine.Networking.ConnectionConfig::get_NetworkDropThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_NetworkDropThreshold_m73408CF1E684E9331CAB60214C1A4202FE38162F (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_m_NetworkDropThreshold_10();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_NetworkDropThreshold(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_NetworkDropThreshold_m76B7742BF6CB68D266CBA0E8B69D54114659F943 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_m_NetworkDropThreshold_10(L_0);
		return;
	}
}
// System.Byte UnityEngine.Networking.ConnectionConfig::get_OverflowDropThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_OverflowDropThreshold_m230A2787733CA84DC31F44330506F00E9F8B2833 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_m_OverflowDropThreshold_11();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_OverflowDropThreshold(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_OverflowDropThreshold_mCCD0BEE959262A7299682904ADCFD44E19A56D72 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_m_OverflowDropThreshold_11(L_0);
		return;
	}
}
// System.Byte UnityEngine.Networking.ConnectionConfig::get_MaxConnectionAttempt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_MaxConnectionAttempt_m00AABC69DE80B89AB2710361768544F0D380787B (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_m_MaxConnectionAttempt_12();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_MaxConnectionAttempt(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_MaxConnectionAttempt_m6FCF597F19004A0928F51EA0A47FBD488DA9FDCC (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_m_MaxConnectionAttempt_12(L_0);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AckDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_AckDelay_m191F064DBF69779F634408012F65C838A823D7AA (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_AckDelay_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_AckDelay(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_AckDelay_m0039F63673D5C50C42C496479264EF71707A3DBB (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		__this->set_m_AckDelay_13(L_0);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_SendDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_SendDelay_mBEEE56DA650F2C5EC85E72A6422A2CD2A2FAD228 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_SendDelay_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_SendDelay(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_SendDelay_m5567B566804640A236F7085D5C8F08AF9114D353 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		__this->set_m_SendDelay_14(L_0);
		return;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxCombinedReliableMessageSize_m9165A4E3AE23CDADE7CAEFA3FAC29401A6449CD1 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_MaxCombinedReliableMessageSize_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_MaxCombinedReliableMessageSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_MaxCombinedReliableMessageSize_m79F27CFC16103969B9123F6DBA8AEB32D9457ED2 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_m_MaxCombinedReliableMessageSize_15(L_0);
		return;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxCombinedReliableMessageCount_mEC5C1ABA687D86DC5FCD020FEEC6423860AE2EE9 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_MaxCombinedReliableMessageCount_16();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_MaxCombinedReliableMessageCount(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_MaxCombinedReliableMessageCount_m29EDD7794A5FAC250488B5A9FF5E652201240A27 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_m_MaxCombinedReliableMessageCount_16(L_0);
		return;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxSentMessageQueueSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxSentMessageQueueSize_m98D5D25BA1DD83103EDAEDBC8F11653CFFA8D848 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_MaxSentMessageQueueSize_17();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_MaxSentMessageQueueSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_MaxSentMessageQueueSize_m59FEBBA265404CE7AD03CCB255BCC186DA1CDFB8 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_m_MaxSentMessageQueueSize_17(L_0);
		return;
	}
}
// UnityEngine.Networking.ConnectionAcksType UnityEngine.Networking.ConnectionConfig::get_AcksType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_AcksType_mE938983722B1EDBEB1ABD7D1292BDDA8847299FE (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_AcksType_18();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_AcksType(UnityEngine.Networking.ConnectionAcksType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_AcksType_mEF2867C0D1B2AD3494602EB1538664C978279FA7 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_AcksType_18(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.ConnectionConfig::get_UsePlatformSpecificProtocols()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionConfig_get_UsePlatformSpecificProtocols_m4BE9E4483FAB5F015D560C2A31942F522B35AB85 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_UsePlatformSpecificProtocols_19();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_InitialBandwidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_InitialBandwidth_m7616A3F25FE1459562849DA4EB0F12BA80CB420B (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_InitialBandwidth_20();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_InitialBandwidth(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_InitialBandwidth_m38457894A7CF410E8A87212CF9927CEBB915A215 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		__this->set_m_InitialBandwidth_20(L_0);
		return;
	}
}
// System.Single UnityEngine.Networking.ConnectionConfig::get_BandwidthPeakFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ConnectionConfig_get_BandwidthPeakFactor_mA1E5982C49A375FA7E347CAA42B2C89FD08B8B51 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_BandwidthPeakFactor_21();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_BandwidthPeakFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_BandwidthPeakFactor_mC8A2B01750057B4EF881FCE549FB9F7DD67111CE (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_BandwidthPeakFactor_21(L_0);
		return;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_WebSocketReceiveBufferMaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_WebSocketReceiveBufferMaxSize_m1B9EE2B09699C09651DF5DFEBB46199D33ADBC5B (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_WebSocketReceiveBufferMaxSize_22();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_WebSocketReceiveBufferMaxSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_WebSocketReceiveBufferMaxSize_mEE25173AF7222C5B29D9DF51F09D64164780021D (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_m_WebSocketReceiveBufferMaxSize_22(L_0);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_UdpSocketReceiveBufferMaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_UdpSocketReceiveBufferMaxSize_m55D6B396EA136644276C0752FA02B613F5915985 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_UdpSocketReceiveBufferMaxSize_23();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_UdpSocketReceiveBufferMaxSize(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_UdpSocketReceiveBufferMaxSize_m8639F338ED86367A6A94C5D33BC0ADEF662D24AE (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		__this->set_m_UdpSocketReceiveBufferMaxSize_23(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLCertFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLCertFilePath_m6AAC33A8DDF7077A4AFFBDCE3688E7589EF77425 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_SSLCertFilePath_24();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLPrivateKeyFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLPrivateKeyFilePath_mAF3636A8502E6ADCCEB47FDDECC35C767E80118B (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_SSLPrivateKeyFilePath_25();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLCAFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLCAFilePath_m4C6D3C771C6E55B6789F03944B6A7DBDFCD4E9B8 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_SSLCAFilePath_26();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_ChannelCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_ChannelCount_m932C1B881D3046BC18899207F5796698B7539C7C (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_get_ChannelCount_m932C1B881D3046BC18899207F5796698B7539C7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * L_0 = __this->get_m_Channels_27();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m94137B698864A43E9459A65D4BE18DA911CA9939_inline(L_0, /*hidden argument*/List_1_get_Count_m94137B698864A43E9459A65D4BE18DA911CA9939_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_SharedOrderChannelCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_SharedOrderChannelCount_m406DE1A3A83A15FCC644746D4C7A6180339A4853 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_get_SharedOrderChannelCount_m406DE1A3A83A15FCC644746D4C7A6180339A4853_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * L_0 = __this->get_m_SharedOrderChannels_28();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_mB609C617D427D5EC266B009014EB41732F164150_inline(L_0, /*hidden argument*/List_1_get_Count_mB609C617D427D5EC266B009014EB41732F164150_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Byte UnityEngine.Networking.ConnectionConfig::AddChannel(UnityEngine.Networking.QosType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	uint8_t V_3 = 0x0;
	{
		List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * L_0 = __this->get_m_Channels_27();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m94137B698864A43E9459A65D4BE18DA911CA9939_inline(L_0, /*hidden argument*/List_1_get_Count_m94137B698864A43E9459A65D4BE18DA911CA9939_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_1) > ((int32_t)((int32_t)255)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_3 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_3, _stringLiteral1F4F8DCA94A6832B1312A4D1589F77B40D6B6BA1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6_RuntimeMethod_var);
	}

IL_0022:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (QosType_tAD0DC2835CF976743FCBBFDD0B4BC1B6392A2293_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___value0;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(QosType_tAD0DC2835CF976743FCBBFDD0B4BC1B6392A2293_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		bool L_9 = Enum_IsDefined_m70E955627155998B426145940DE105ECEF213B96(L_5, L_8, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_11 = ___value0;
		int32_t L_12 = ((int32_t)L_11);
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteralDF5230F0D16A6901ED26AE1F9636F2A61DA5D6ED, L_13, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_15 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_15, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6_RuntimeMethod_var);
	}

IL_0055:
	{
		int32_t L_16 = ___value0;
		ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * L_17 = (ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE *)il2cpp_codegen_object_new(ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE_il2cpp_TypeInfo_var);
		ChannelQOS__ctor_m27A6808139CF080A838D4BEB5F0E10246017335A(L_17, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * L_18 = __this->get_m_Channels_27();
		ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * L_19 = V_0;
		NullCheck(L_18);
		List_1_Add_m04CCA815BA538CCC717F5B0CEABEE87777C02191(L_18, L_19, /*hidden argument*/List_1_Add_m04CCA815BA538CCC717F5B0CEABEE87777C02191_RuntimeMethod_var);
		List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * L_20 = __this->get_m_Channels_27();
		NullCheck(L_20);
		int32_t L_21 = List_1_get_Count_m94137B698864A43E9459A65D4BE18DA911CA9939_inline(L_20, /*hidden argument*/List_1_get_Count_m94137B698864A43E9459A65D4BE18DA911CA9939_RuntimeMethod_var);
		V_3 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)))));
		goto IL_007a;
	}

IL_007a:
	{
		uint8_t L_22 = V_3;
		return L_22;
	}
}
// UnityEngine.Networking.QosType UnityEngine.Networking.ConnectionConfig::GetChannel(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_GetChannel_m0473DB76B5FE9E1992A3500F37F3C88ACB6DA3D4 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint8_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_GetChannel_m0473DB76B5FE9E1992A3500F37F3C88ACB6DA3D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		uint8_t L_0 = ___idx0;
		List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * L_1 = __this->get_m_Channels_27();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m94137B698864A43E9459A65D4BE18DA911CA9939_inline(L_1, /*hidden argument*/List_1_get_Count_m94137B698864A43E9459A65D4BE18DA911CA9939_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_4 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_4, _stringLiteral970E2379B8ADD15A47FF04C1F1AE7051F01DA5DC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ConnectionConfig_GetChannel_m0473DB76B5FE9E1992A3500F37F3C88ACB6DA3D4_RuntimeMethod_var);
	}

IL_0021:
	{
		List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * L_5 = __this->get_m_Channels_27();
		uint8_t L_6 = ___idx0;
		NullCheck(L_5);
		ChannelQOS_tF55C4AC4858FAFCFBDA366C6F6B1E2B35DFFF3DE * L_7 = List_1_get_Item_mEA12AB396EABC73A3E2E57BE233BC77763A61BFA_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_mEA12AB396EABC73A3E2E57BE233BC77763A61BFA_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_8 = ChannelQOS_get_QOS_mF5244DCF956770207F0E45F59EE694FA0647917B(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_0035;
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Collections.Generic.IList`1<System.Byte> UnityEngine.Networking.ConnectionConfig::GetSharedOrderChannels(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionConfig_GetSharedOrderChannels_m7DB0D9738F33E044807142B8C2CBB50DDA42A9EC (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint8_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_GetSharedOrderChannels_m7DB0D9738F33E044807142B8C2CBB50DDA42A9EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		uint8_t L_0 = ___idx0;
		List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * L_1 = __this->get_m_SharedOrderChannels_28();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_mB609C617D427D5EC266B009014EB41732F164150_inline(L_1, /*hidden argument*/List_1_get_Count_mB609C617D427D5EC266B009014EB41732F164150_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_4 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_4, _stringLiteralB7924E654A4528032CD5FC50B5878AA01E102C42, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ConnectionConfig_GetSharedOrderChannels_m7DB0D9738F33E044807142B8C2CBB50DDA42A9EC_RuntimeMethod_var);
	}

IL_0021:
	{
		List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * L_5 = __this->get_m_SharedOrderChannels_28();
		uint8_t L_6 = ___idx0;
		NullCheck(L_5);
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_7 = List_1_get_Item_m68E7DB4815C63A275BDC11FF71FACD9235A7C562_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m68E7DB4815C63A275BDC11FF71FACD9235A7C562_RuntimeMethod_var);
		NullCheck(L_7);
		ReadOnlyCollection_1_t88367D6A0A0435F3B7F5A180EAE18DC0323A14E7 * L_8 = List_1_AsReadOnly_m5B294C3B51BB4CD52DCA4DC740F05BA7A873859E(L_7, /*hidden argument*/List_1_AsReadOnly_m5B294C3B51BB4CD52DCA4DC740F05BA7A873859E_RuntimeMethod_var);
		V_1 = (RuntimeObject*)L_8;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS> UnityEngine.Networking.ConnectionConfig::get_Channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * ConnectionConfig_get_Channels_mB6ACB57EA2F40BE8D4360EF33855A540F2C0147C (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method)
{
	List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * V_0 = NULL;
	{
		List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * L_0 = __this->get_m_Channels_27();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * L_1 = V_0;
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
// Conversion methods for marshalling of: UnityEngine.Networking.ConnectionConfigInternal
IL2CPP_EXTERN_C void ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078_marshal_pinvoke(const ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078& unmarshaled, ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078_marshal_pinvoke_back(const ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078_marshaled_pinvoke& marshaled, ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.ConnectionConfigInternal
IL2CPP_EXTERN_C void ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078_marshal_pinvoke_cleanup(ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.ConnectionConfigInternal
IL2CPP_EXTERN_C void ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078_marshal_com(const ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078& unmarshaled, ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078_marshal_com_back(const ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078_marshaled_com& marshaled, ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.ConnectionConfigInternal
IL2CPP_EXTERN_C void ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078_marshal_com_cleanup(ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::.ctor(UnityEngine.Networking.ConnectionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal__ctor_m3159326166C18DBB931A215F34FDE777C78D2AC0 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfigInternal__ctor_m3159326166C18DBB931A215F34FDE777C78D2AC0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	uint8_t V_11 = 0x0;
	bool V_12 = false;
	uint8_t V_13 = 0x0;
	RuntimeObject* V_14 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_15 = NULL;
	bool V_16 = false;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_0 = ___config0;
		V_0 = (bool)((((RuntimeObject*)(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_2 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3(L_2, _stringLiteral317EE74AF038EFA1EFB835A1A142AD358C5939C3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ConnectionConfigInternal__ctor_m3159326166C18DBB931A215F34FDE777C78D2AC0_RuntimeMethod_var);
	}

IL_001b:
	{
		intptr_t L_3 = ConnectionConfigInternal_InternalCreate_m57E00EAD6FD85A7AEE88C4BABD2B76F028D26229(/*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_3);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_4 = ___config0;
		NullCheck(L_4);
		uint16_t L_5 = ConnectionConfig_get_PacketSize_mF111FD026B1D2B89D5254278F879E81B3700AD87(L_4, /*hidden argument*/NULL);
		bool L_6 = ConnectionConfigInternal_SetPacketSize_m53D38ACE88594D14DFB61BF99B2109FA35F5E4B3(__this, L_5, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_8, _stringLiteral6BD2C10566F502C3C2BF829339E1CCBA316C993F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ConnectionConfigInternal__ctor_m3159326166C18DBB931A215F34FDE777C78D2AC0_RuntimeMethod_var);
	}

IL_0044:
	{
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_9 = ___config0;
		NullCheck(L_9);
		uint16_t L_10 = ConnectionConfig_get_FragmentSize_m484053C0601EC4C11376B231262171C4514D8B62(L_9, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_FragmentSize_m81A3C2E79C8CA333D4901A34E253916986870678(__this, L_10, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_11 = ___config0;
		NullCheck(L_11);
		uint32_t L_12 = ConnectionConfig_get_ResendTimeout_mDF1507B518A47887277E53F0930DC1CA5A973FCF(L_11, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_ResendTimeout_m52B7443A4BF5D1DC15E41BC1E3EA4B0890D06413(__this, L_12, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_13 = ___config0;
		NullCheck(L_13);
		uint32_t L_14 = ConnectionConfig_get_DisconnectTimeout_m173B79C0C029B50A4250352F1219E8631D40586C(L_13, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_DisconnectTimeout_m7B620F41E9B1F610CA2616939BBE5C636C073369(__this, L_14, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_15 = ___config0;
		NullCheck(L_15);
		uint32_t L_16 = ConnectionConfig_get_ConnectTimeout_mDCE83595DFC763E869D55FF4F120CFE7BE5E84DF(L_15, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_ConnectTimeout_mC4F96B2E33DB75AB6CFB251E28816294F4D629F2(__this, L_16, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_17 = ___config0;
		NullCheck(L_17);
		uint32_t L_18 = ConnectionConfig_get_MinUpdateTimeout_mAF0AEE59A6FDED5C2B37111FC8BB7875A6E13F65(L_17, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_MinUpdateTimeout_mF4DA20AA8EAF8A4E82DA4471483A5B8A3601B2F7(__this, L_18, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_19 = ___config0;
		NullCheck(L_19);
		uint32_t L_20 = ConnectionConfig_get_PingTimeout_mC060D30B64D197917007D81E2DE93C3A85B2E601(L_19, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_PingTimeout_m882CF8571F3F466C026F84FB48FD7BCAFC41FBF3(__this, L_20, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_21 = ___config0;
		NullCheck(L_21);
		uint32_t L_22 = ConnectionConfig_get_ReducedPingTimeout_m332075F8A61A51FBB2738BAE9DDD4313A507D979(L_21, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_ReducedPingTimeout_m10956CD170C63491A8D04F4A95D048090831E8CE(__this, L_22, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_23 = ___config0;
		NullCheck(L_23);
		uint32_t L_24 = ConnectionConfig_get_AllCostTimeout_m123FA29854A46EFE05048577E3B01FDB386472F9(L_23, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_AllCostTimeout_m37CC810E66808CDCFBDA2DA785169927C8FE5553(__this, L_24, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_25 = ___config0;
		NullCheck(L_25);
		uint8_t L_26 = ConnectionConfig_get_NetworkDropThreshold_m73408CF1E684E9331CAB60214C1A4202FE38162F(L_25, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_NetworkDropThreshold_m0E9A369B4625FDBE833B23D9A792E8CD111F5AF4(__this, L_26, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_27 = ___config0;
		NullCheck(L_27);
		uint8_t L_28 = ConnectionConfig_get_OverflowDropThreshold_m230A2787733CA84DC31F44330506F00E9F8B2833(L_27, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_OverflowDropThreshold_m4AD127798D39BC9B8034EC35DA235EAC85D87B18(__this, L_28, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_29 = ___config0;
		NullCheck(L_29);
		uint8_t L_30 = ConnectionConfig_get_MaxConnectionAttempt_m00AABC69DE80B89AB2710361768544F0D380787B(L_29, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_MaxConnectionAttempt_m6A5DFC749DB71E05E4167E11ED8D1930D34A20A9(__this, L_30, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_31 = ___config0;
		NullCheck(L_31);
		uint32_t L_32 = ConnectionConfig_get_AckDelay_m191F064DBF69779F634408012F65C838A823D7AA(L_31, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_AckDelay_m39BC6D36B69AE86B8587FEDCA9B6232F7A9D1960(__this, L_32, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_33 = ___config0;
		NullCheck(L_33);
		uint32_t L_34 = ConnectionConfig_get_SendDelay_mBEEE56DA650F2C5EC85E72A6422A2CD2A2FAD228(L_33, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_SendDelay_m6CDA97F9DB65D815562064D9FC5C6E92FDD735E3(__this, L_34, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_35 = ___config0;
		NullCheck(L_35);
		uint16_t L_36 = ConnectionConfig_get_MaxCombinedReliableMessageSize_m9165A4E3AE23CDADE7CAEFA3FAC29401A6449CD1(L_35, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_MaxCombinedReliableMessageSize_mAD08AF5D34269E4648AA1630AE3524A0747433CC(__this, L_36, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_37 = ___config0;
		NullCheck(L_37);
		uint16_t L_38 = ConnectionConfig_get_MaxCombinedReliableMessageCount_mEC5C1ABA687D86DC5FCD020FEEC6423860AE2EE9(L_37, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_MaxCombinedReliableMessageCount_m477651B41F261E81BC43D3C854AA6664EBF7B541(__this, L_38, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_39 = ___config0;
		NullCheck(L_39);
		uint16_t L_40 = ConnectionConfig_get_MaxSentMessageQueueSize_m98D5D25BA1DD83103EDAEDBC8F11653CFFA8D848(L_39, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_MaxSentMessageQueueSize_m517343266C198505E7BD899AD4489AD6BD593AE1(__this, L_40, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_41 = ___config0;
		NullCheck(L_41);
		int32_t L_42 = ConnectionConfig_get_AcksType_mE938983722B1EDBEB1ABD7D1292BDDA8847299FE(L_41, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_AcksType_m9CB8EE193EE3AEDB5CC5E63D3DE5D768450523EE(__this, (uint8_t)(((int32_t)((uint8_t)L_42))), /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_43 = ___config0;
		NullCheck(L_43);
		bool L_44 = ConnectionConfig_get_UsePlatformSpecificProtocols_m4BE9E4483FAB5F015D560C2A31942F522B35AB85(L_43, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_UsePlatformSpecificProtocols_m65F8757AA1E47534DD74441D8325B7F33320985E(__this, L_44, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_45 = ___config0;
		NullCheck(L_45);
		uint32_t L_46 = ConnectionConfig_get_InitialBandwidth_m7616A3F25FE1459562849DA4EB0F12BA80CB420B(L_45, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_InitialBandwidth_mF6348D56F65CED75B5809F6AE996C2DDB8903244(__this, L_46, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_47 = ___config0;
		NullCheck(L_47);
		float L_48 = ConnectionConfig_get_BandwidthPeakFactor_mA1E5982C49A375FA7E347CAA42B2C89FD08B8B51(L_47, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_BandwidthPeakFactor_m3C43D6BD419D87787D18860D3927E7E1ABE1F9B7(__this, L_48, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_49 = ___config0;
		NullCheck(L_49);
		uint16_t L_50 = ConnectionConfig_get_WebSocketReceiveBufferMaxSize_m1B9EE2B09699C09651DF5DFEBB46199D33ADBC5B(L_49, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_WebSocketReceiveBufferMaxSize_m02AD41DCF144B4EE187F705916F85BE3C1D5895F(__this, L_50, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_51 = ___config0;
		NullCheck(L_51);
		uint32_t L_52 = ConnectionConfig_get_UdpSocketReceiveBufferMaxSize_m55D6B396EA136644276C0752FA02B613F5915985(L_51, /*hidden argument*/NULL);
		ConnectionConfigInternal_set_UdpSocketReceiveBufferMaxSize_m04A8CBD90C0CD7F0E888BC09D78EA9378C74B019(__this, L_52, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_53 = ___config0;
		NullCheck(L_53);
		String_t* L_54 = ConnectionConfig_get_SSLCertFilePath_m6AAC33A8DDF7077A4AFFBDCE3688E7589EF77425(L_53, /*hidden argument*/NULL);
		V_2 = (bool)((!(((RuntimeObject*)(String_t*)L_54) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_55 = V_2;
		if (!L_55)
		{
			goto IL_019f;
		}
	}
	{
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_56 = ___config0;
		NullCheck(L_56);
		String_t* L_57 = ConnectionConfig_get_SSLCertFilePath_m6AAC33A8DDF7077A4AFFBDCE3688E7589EF77425(L_56, /*hidden argument*/NULL);
		int32_t L_58 = ConnectionConfigInternal_SetSSLCertFilePath_mE1BB6420E3CB9775AD1E55561D9973D7DA1794A4(__this, L_57, /*hidden argument*/NULL);
		V_3 = L_58;
		int32_t L_59 = V_3;
		V_4 = (bool)((!(((uint32_t)L_59) <= ((uint32_t)0)))? 1 : 0);
		bool L_60 = V_4;
		if (!L_60)
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_61 = V_3;
		int32_t L_62 = L_61;
		RuntimeObject * L_63 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_62);
		String_t* L_64 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral56FC7ACF83761F215C42F94457870B28C159AD13, L_63, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_65 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_65, L_64, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, ConnectionConfigInternal__ctor_m3159326166C18DBB931A215F34FDE777C78D2AC0_RuntimeMethod_var);
	}

IL_019e:
	{
	}

IL_019f:
	{
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_66 = ___config0;
		NullCheck(L_66);
		String_t* L_67 = ConnectionConfig_get_SSLPrivateKeyFilePath_mAF3636A8502E6ADCCEB47FDDECC35C767E80118B(L_66, /*hidden argument*/NULL);
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_67) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_68 = V_5;
		if (!L_68)
		{
			goto IL_01e0;
		}
	}
	{
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_69 = ___config0;
		NullCheck(L_69);
		String_t* L_70 = ConnectionConfig_get_SSLPrivateKeyFilePath_mAF3636A8502E6ADCCEB47FDDECC35C767E80118B(L_69, /*hidden argument*/NULL);
		int32_t L_71 = ConnectionConfigInternal_SetSSLPrivateKeyFilePath_m97560CCDF198A876997E44D363018BA65C5929EB(__this, L_70, /*hidden argument*/NULL);
		V_6 = L_71;
		int32_t L_72 = V_6;
		V_7 = (bool)((!(((uint32_t)L_72) <= ((uint32_t)0)))? 1 : 0);
		bool L_73 = V_7;
		if (!L_73)
		{
			goto IL_01df;
		}
	}
	{
		int32_t L_74 = V_6;
		int32_t L_75 = L_74;
		RuntimeObject * L_76 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_75);
		String_t* L_77 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral7BD2BAAE773711A25E2A86E4644B6FA5287BE9CB, L_76, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_78 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_78, L_77, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_78, ConnectionConfigInternal__ctor_m3159326166C18DBB931A215F34FDE777C78D2AC0_RuntimeMethod_var);
	}

IL_01df:
	{
	}

IL_01e0:
	{
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_79 = ___config0;
		NullCheck(L_79);
		String_t* L_80 = ConnectionConfig_get_SSLCAFilePath_m4C6D3C771C6E55B6789F03944B6A7DBDFCD4E9B8(L_79, /*hidden argument*/NULL);
		V_8 = (bool)((!(((RuntimeObject*)(String_t*)L_80) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_81 = V_8;
		if (!L_81)
		{
			goto IL_0221;
		}
	}
	{
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_82 = ___config0;
		NullCheck(L_82);
		String_t* L_83 = ConnectionConfig_get_SSLCAFilePath_m4C6D3C771C6E55B6789F03944B6A7DBDFCD4E9B8(L_82, /*hidden argument*/NULL);
		int32_t L_84 = ConnectionConfigInternal_SetSSLCAFilePath_mC553B8CCC370BFC28CC8D26437CC6B1F0FD60315(__this, L_83, /*hidden argument*/NULL);
		V_9 = L_84;
		int32_t L_85 = V_9;
		V_10 = (bool)((!(((uint32_t)L_85) <= ((uint32_t)0)))? 1 : 0);
		bool L_86 = V_10;
		if (!L_86)
		{
			goto IL_0220;
		}
	}
	{
		int32_t L_87 = V_9;
		int32_t L_88 = L_87;
		RuntimeObject * L_89 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_88);
		String_t* L_90 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral3866C00AAA41CBA51BF961FDAB79035290665796, L_89, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_91 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_91, L_90, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_91, ConnectionConfigInternal__ctor_m3159326166C18DBB931A215F34FDE777C78D2AC0_RuntimeMethod_var);
	}

IL_0220:
	{
	}

IL_0221:
	{
		V_11 = (uint8_t)0;
		goto IL_023f;
	}

IL_0226:
	{
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_92 = ___config0;
		uint8_t L_93 = V_11;
		NullCheck(L_92);
		int32_t L_94 = ConnectionConfig_GetChannel_m0473DB76B5FE9E1992A3500F37F3C88ACB6DA3D4(L_92, L_93, /*hidden argument*/NULL);
		ConnectionConfigInternal_AddChannel_m6F0C7412C1B07FA22276ED59872E1B5280C07C14(__this, (((int32_t)((uint8_t)L_94))), /*hidden argument*/NULL);
		uint8_t L_95 = V_11;
		V_11 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1)))));
	}

IL_023f:
	{
		uint8_t L_96 = V_11;
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_97 = ___config0;
		NullCheck(L_97);
		int32_t L_98 = ConnectionConfig_get_ChannelCount_m932C1B881D3046BC18899207F5796698B7539C7C(L_97, /*hidden argument*/NULL);
		V_12 = (bool)((((int32_t)L_96) < ((int32_t)L_98))? 1 : 0);
		bool L_99 = V_12;
		if (L_99)
		{
			goto IL_0226;
		}
	}
	{
		V_13 = (uint8_t)0;
		goto IL_0289;
	}

IL_0254:
	{
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_100 = ___config0;
		uint8_t L_101 = V_13;
		NullCheck(L_100);
		RuntimeObject* L_102 = ConnectionConfig_GetSharedOrderChannels_m7DB0D9738F33E044807142B8C2CBB50DDA42A9EC(L_100, L_101, /*hidden argument*/NULL);
		V_14 = L_102;
		RuntimeObject* L_103 = V_14;
		NullCheck(L_103);
		int32_t L_104 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count() */, ICollection_1_t5AB6E9D20BDB8A993042228A58C871DF8C3BCE87_il2cpp_TypeInfo_var, L_103);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_105 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_104);
		V_15 = L_105;
		RuntimeObject* L_106 = V_14;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_107 = V_15;
		NullCheck(L_106);
		InterfaceActionInvoker2< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Byte>::CopyTo(!0[],System.Int32) */, ICollection_1_t5AB6E9D20BDB8A993042228A58C871DF8C3BCE87_il2cpp_TypeInfo_var, L_106, L_107, 0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_108 = V_15;
		ConnectionConfigInternal_MakeChannelsSharedOrder_m386F46D817576653643A908AAAA1AB6DA136707E(__this, L_108, /*hidden argument*/NULL);
		uint8_t L_109 = V_13;
		V_13 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)1)))));
	}

IL_0289:
	{
		uint8_t L_110 = V_13;
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_111 = ___config0;
		NullCheck(L_111);
		int32_t L_112 = ConnectionConfig_get_SharedOrderChannelCount_m406DE1A3A83A15FCC644746D4C7A6180339A4853(L_111, /*hidden argument*/NULL);
		V_16 = (bool)((((int32_t)L_110) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_16;
		if (L_113)
		{
			goto IL_0254;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_Dispose_m4161119120EC3447F951143746AA3822B262C590 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfigInternal_Dispose_m4161119120EC3447F951143746AA3822B262C590_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_3 = __this->get_m_Ptr_0();
		ConnectionConfigInternal_InternalDestroy_mA5ED8454D97B55A9BF3FDDC6DDE09D31E6DF20E9((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_002e:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_Finalize_m86CE7D1789FE804A8A655C1C5C81CFAE2097918D (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, const RuntimeMethod* method)
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
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Networking.ConnectionConfigInternal::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x14, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_Dispose_m5105F829E0DD5CB86927351FC94BF5AE14B8493E (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfigInternal_Dispose_m5105F829E0DD5CB86927351FC94BF5AE14B8493E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_3 = __this->get_m_Ptr_0();
		ConnectionConfigInternal_InternalDestroy_mA5ED8454D97B55A9BF3FDDC6DDE09D31E6DF20E9((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_002e:
	{
		return;
	}
}
// System.IntPtr UnityEngine.Networking.ConnectionConfigInternal::InternalCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ConnectionConfigInternal_InternalCreate_m57E00EAD6FD85A7AEE88C4BABD2B76F028D26229 (const RuntimeMethod* method)
{
	typedef intptr_t (*ConnectionConfigInternal_InternalCreate_m57E00EAD6FD85A7AEE88C4BABD2B76F028D26229_ftn) ();
	static ConnectionConfigInternal_InternalCreate_m57E00EAD6FD85A7AEE88C4BABD2B76F028D26229_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InternalCreate_m57E00EAD6FD85A7AEE88C4BABD2B76F028D26229_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InternalCreate()");
	intptr_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InternalDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InternalDestroy_mA5ED8454D97B55A9BF3FDDC6DDE09D31E6DF20E9 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InternalDestroy_mA5ED8454D97B55A9BF3FDDC6DDE09D31E6DF20E9_ftn) (intptr_t);
	static ConnectionConfigInternal_InternalDestroy_mA5ED8454D97B55A9BF3FDDC6DDE09D31E6DF20E9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InternalDestroy_mA5ED8454D97B55A9BF3FDDC6DDE09D31E6DF20E9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InternalDestroy(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// System.Byte UnityEngine.Networking.ConnectionConfigInternal::AddChannel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfigInternal_AddChannel_m6F0C7412C1B07FA22276ED59872E1B5280C07C14 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef uint8_t (*ConnectionConfigInternal_AddChannel_m6F0C7412C1B07FA22276ED59872E1B5280C07C14_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, int32_t);
	static ConnectionConfigInternal_AddChannel_m6F0C7412C1B07FA22276ED59872E1B5280C07C14_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_AddChannel_m6F0C7412C1B07FA22276ED59872E1B5280C07C14_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::AddChannel(System.Int32)");
	uint8_t retVal = _il2cpp_icall_func(__this, ___value0);
	return retVal;
}
// System.Boolean UnityEngine.Networking.ConnectionConfigInternal::SetPacketSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionConfigInternal_SetPacketSize_m53D38ACE88594D14DFB61BF99B2109FA35F5E4B3 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef bool (*ConnectionConfigInternal_SetPacketSize_m53D38ACE88594D14DFB61BF99B2109FA35F5E4B3_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, uint16_t);
	static ConnectionConfigInternal_SetPacketSize_m53D38ACE88594D14DFB61BF99B2109FA35F5E4B3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_SetPacketSize_m53D38ACE88594D14DFB61BF99B2109FA35F5E4B3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::SetPacketSize(System.UInt16)");
	bool retVal = _il2cpp_icall_func(__this, ___value0);
	return retVal;
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_FragmentSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_FragmentSize_m81A3C2E79C8CA333D4901A34E253916986870678 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_FragmentSize_m81A3C2E79C8CA333D4901A34E253916986870678_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, uint16_t);
	static ConnectionConfigInternal_set_FragmentSize_m81A3C2E79C8CA333D4901A34E253916986870678_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_FragmentSize_m81A3C2E79C8CA333D4901A34E253916986870678_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_FragmentSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_ResendTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_ResendTimeout_m52B7443A4BF5D1DC15E41BC1E3EA4B0890D06413 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_ResendTimeout_m52B7443A4BF5D1DC15E41BC1E3EA4B0890D06413_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, uint32_t);
	static ConnectionConfigInternal_set_ResendTimeout_m52B7443A4BF5D1DC15E41BC1E3EA4B0890D06413_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_ResendTimeout_m52B7443A4BF5D1DC15E41BC1E3EA4B0890D06413_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_ResendTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_DisconnectTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_DisconnectTimeout_m7B620F41E9B1F610CA2616939BBE5C636C073369 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_DisconnectTimeout_m7B620F41E9B1F610CA2616939BBE5C636C073369_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, uint32_t);
	static ConnectionConfigInternal_set_DisconnectTimeout_m7B620F41E9B1F610CA2616939BBE5C636C073369_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_DisconnectTimeout_m7B620F41E9B1F610CA2616939BBE5C636C073369_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_DisconnectTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_ConnectTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_ConnectTimeout_mC4F96B2E33DB75AB6CFB251E28816294F4D629F2 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_ConnectTimeout_mC4F96B2E33DB75AB6CFB251E28816294F4D629F2_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, uint32_t);
	static ConnectionConfigInternal_set_ConnectTimeout_mC4F96B2E33DB75AB6CFB251E28816294F4D629F2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_ConnectTimeout_mC4F96B2E33DB75AB6CFB251E28816294F4D629F2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_ConnectTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MinUpdateTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MinUpdateTimeout_mF4DA20AA8EAF8A4E82DA4471483A5B8A3601B2F7 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_MinUpdateTimeout_mF4DA20AA8EAF8A4E82DA4471483A5B8A3601B2F7_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, uint32_t);
	static ConnectionConfigInternal_set_MinUpdateTimeout_mF4DA20AA8EAF8A4E82DA4471483A5B8A3601B2F7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_MinUpdateTimeout_mF4DA20AA8EAF8A4E82DA4471483A5B8A3601B2F7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_MinUpdateTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_PingTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_PingTimeout_m882CF8571F3F466C026F84FB48FD7BCAFC41FBF3 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_PingTimeout_m882CF8571F3F466C026F84FB48FD7BCAFC41FBF3_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, uint32_t);
	static ConnectionConfigInternal_set_PingTimeout_m882CF8571F3F466C026F84FB48FD7BCAFC41FBF3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_PingTimeout_m882CF8571F3F466C026F84FB48FD7BCAFC41FBF3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_PingTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_ReducedPingTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_ReducedPingTimeout_m10956CD170C63491A8D04F4A95D048090831E8CE (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_ReducedPingTimeout_m10956CD170C63491A8D04F4A95D048090831E8CE_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, uint32_t);
	static ConnectionConfigInternal_set_ReducedPingTimeout_m10956CD170C63491A8D04F4A95D048090831E8CE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_ReducedPingTimeout_m10956CD170C63491A8D04F4A95D048090831E8CE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_ReducedPingTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_AllCostTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_AllCostTimeout_m37CC810E66808CDCFBDA2DA785169927C8FE5553 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_AllCostTimeout_m37CC810E66808CDCFBDA2DA785169927C8FE5553_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, uint32_t);
	static ConnectionConfigInternal_set_AllCostTimeout_m37CC810E66808CDCFBDA2DA785169927C8FE5553_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_AllCostTimeout_m37CC810E66808CDCFBDA2DA785169927C8FE5553_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_AllCostTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_NetworkDropThreshold(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_NetworkDropThreshold_m0E9A369B4625FDBE833B23D9A792E8CD111F5AF4 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_NetworkDropThreshold_m0E9A369B4625FDBE833B23D9A792E8CD111F5AF4_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, uint8_t);
	static ConnectionConfigInternal_set_NetworkDropThreshold_m0E9A369B4625FDBE833B23D9A792E8CD111F5AF4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_NetworkDropThreshold_m0E9A369B4625FDBE833B23D9A792E8CD111F5AF4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_NetworkDropThreshold(System.Byte)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_OverflowDropThreshold(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_OverflowDropThreshold_m4AD127798D39BC9B8034EC35DA235EAC85D87B18 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_OverflowDropThreshold_m4AD127798D39BC9B8034EC35DA235EAC85D87B18_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, uint8_t);
	static ConnectionConfigInternal_set_OverflowDropThreshold_m4AD127798D39BC9B8034EC35DA235EAC85D87B18_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_OverflowDropThreshold_m4AD127798D39BC9B8034EC35DA235EAC85D87B18_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_OverflowDropThreshold(System.Byte)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxConnectionAttempt(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxConnectionAttempt_m6A5DFC749DB71E05E4167E11ED8D1930D34A20A9 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_MaxConnectionAttempt_m6A5DFC749DB71E05E4167E11ED8D1930D34A20A9_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, uint8_t);
	static ConnectionConfigInternal_set_MaxConnectionAttempt_m6A5DFC749DB71E05E4167E11ED8D1930D34A20A9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_MaxConnectionAttempt_m6A5DFC749DB71E05E4167E11ED8D1930D34A20A9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_MaxConnectionAttempt(System.Byte)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_AckDelay(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_AckDelay_m39BC6D36B69AE86B8587FEDCA9B6232F7A9D1960 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_AckDelay_m39BC6D36B69AE86B8587FEDCA9B6232F7A9D1960_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, uint32_t);
	static ConnectionConfigInternal_set_AckDelay_m39BC6D36B69AE86B8587FEDCA9B6232F7A9D1960_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_AckDelay_m39BC6D36B69AE86B8587FEDCA9B6232F7A9D1960_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_AckDelay(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_SendDelay(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_SendDelay_m6CDA97F9DB65D815562064D9FC5C6E92FDD735E3 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_SendDelay_m6CDA97F9DB65D815562064D9FC5C6E92FDD735E3_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, uint32_t);
	static ConnectionConfigInternal_set_SendDelay_m6CDA97F9DB65D815562064D9FC5C6E92FDD735E3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_SendDelay_m6CDA97F9DB65D815562064D9FC5C6E92FDD735E3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_SendDelay(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxCombinedReliableMessageSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxCombinedReliableMessageSize_mAD08AF5D34269E4648AA1630AE3524A0747433CC (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_MaxCombinedReliableMessageSize_mAD08AF5D34269E4648AA1630AE3524A0747433CC_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, uint16_t);
	static ConnectionConfigInternal_set_MaxCombinedReliableMessageSize_mAD08AF5D34269E4648AA1630AE3524A0747433CC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_MaxCombinedReliableMessageSize_mAD08AF5D34269E4648AA1630AE3524A0747433CC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_MaxCombinedReliableMessageSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxCombinedReliableMessageCount(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxCombinedReliableMessageCount_m477651B41F261E81BC43D3C854AA6664EBF7B541 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_MaxCombinedReliableMessageCount_m477651B41F261E81BC43D3C854AA6664EBF7B541_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, uint16_t);
	static ConnectionConfigInternal_set_MaxCombinedReliableMessageCount_m477651B41F261E81BC43D3C854AA6664EBF7B541_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_MaxCombinedReliableMessageCount_m477651B41F261E81BC43D3C854AA6664EBF7B541_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_MaxCombinedReliableMessageCount(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxSentMessageQueueSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxSentMessageQueueSize_m517343266C198505E7BD899AD4489AD6BD593AE1 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_MaxSentMessageQueueSize_m517343266C198505E7BD899AD4489AD6BD593AE1_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, uint16_t);
	static ConnectionConfigInternal_set_MaxSentMessageQueueSize_m517343266C198505E7BD899AD4489AD6BD593AE1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_MaxSentMessageQueueSize_m517343266C198505E7BD899AD4489AD6BD593AE1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_MaxSentMessageQueueSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_AcksType(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_AcksType_m9CB8EE193EE3AEDB5CC5E63D3DE5D768450523EE (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_AcksType_m9CB8EE193EE3AEDB5CC5E63D3DE5D768450523EE_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, uint8_t);
	static ConnectionConfigInternal_set_AcksType_m9CB8EE193EE3AEDB5CC5E63D3DE5D768450523EE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_AcksType_m9CB8EE193EE3AEDB5CC5E63D3DE5D768450523EE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_AcksType(System.Byte)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_UsePlatformSpecificProtocols(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_UsePlatformSpecificProtocols_m65F8757AA1E47534DD74441D8325B7F33320985E (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_UsePlatformSpecificProtocols_m65F8757AA1E47534DD74441D8325B7F33320985E_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, bool);
	static ConnectionConfigInternal_set_UsePlatformSpecificProtocols_m65F8757AA1E47534DD74441D8325B7F33320985E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_UsePlatformSpecificProtocols_m65F8757AA1E47534DD74441D8325B7F33320985E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_UsePlatformSpecificProtocols(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_InitialBandwidth(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_InitialBandwidth_mF6348D56F65CED75B5809F6AE996C2DDB8903244 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_InitialBandwidth_mF6348D56F65CED75B5809F6AE996C2DDB8903244_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, uint32_t);
	static ConnectionConfigInternal_set_InitialBandwidth_mF6348D56F65CED75B5809F6AE996C2DDB8903244_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_InitialBandwidth_mF6348D56F65CED75B5809F6AE996C2DDB8903244_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_InitialBandwidth(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_BandwidthPeakFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_BandwidthPeakFactor_m3C43D6BD419D87787D18860D3927E7E1ABE1F9B7 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_BandwidthPeakFactor_m3C43D6BD419D87787D18860D3927E7E1ABE1F9B7_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, float);
	static ConnectionConfigInternal_set_BandwidthPeakFactor_m3C43D6BD419D87787D18860D3927E7E1ABE1F9B7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_BandwidthPeakFactor_m3C43D6BD419D87787D18860D3927E7E1ABE1F9B7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_BandwidthPeakFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_WebSocketReceiveBufferMaxSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_WebSocketReceiveBufferMaxSize_m02AD41DCF144B4EE187F705916F85BE3C1D5895F (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_WebSocketReceiveBufferMaxSize_m02AD41DCF144B4EE187F705916F85BE3C1D5895F_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, uint16_t);
	static ConnectionConfigInternal_set_WebSocketReceiveBufferMaxSize_m02AD41DCF144B4EE187F705916F85BE3C1D5895F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_WebSocketReceiveBufferMaxSize_m02AD41DCF144B4EE187F705916F85BE3C1D5895F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_WebSocketReceiveBufferMaxSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_UdpSocketReceiveBufferMaxSize(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_UdpSocketReceiveBufferMaxSize_m04A8CBD90C0CD7F0E888BC09D78EA9378C74B019 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_set_UdpSocketReceiveBufferMaxSize_m04A8CBD90C0CD7F0E888BC09D78EA9378C74B019_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, uint32_t);
	static ConnectionConfigInternal_set_UdpSocketReceiveBufferMaxSize_m04A8CBD90C0CD7F0E888BC09D78EA9378C74B019_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_UdpSocketReceiveBufferMaxSize_m04A8CBD90C0CD7F0E888BC09D78EA9378C74B019_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_UdpSocketReceiveBufferMaxSize(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::SetSSLCertFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_SetSSLCertFilePath_mE1BB6420E3CB9775AD1E55561D9973D7DA1794A4 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef int32_t (*ConnectionConfigInternal_SetSSLCertFilePath_mE1BB6420E3CB9775AD1E55561D9973D7DA1794A4_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, String_t*);
	static ConnectionConfigInternal_SetSSLCertFilePath_mE1BB6420E3CB9775AD1E55561D9973D7DA1794A4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_SetSSLCertFilePath_mE1BB6420E3CB9775AD1E55561D9973D7DA1794A4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::SetSSLCertFilePath(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___value0);
	return retVal;
}
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::SetSSLPrivateKeyFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_SetSSLPrivateKeyFilePath_m97560CCDF198A876997E44D363018BA65C5929EB (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef int32_t (*ConnectionConfigInternal_SetSSLPrivateKeyFilePath_m97560CCDF198A876997E44D363018BA65C5929EB_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, String_t*);
	static ConnectionConfigInternal_SetSSLPrivateKeyFilePath_m97560CCDF198A876997E44D363018BA65C5929EB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_SetSSLPrivateKeyFilePath_m97560CCDF198A876997E44D363018BA65C5929EB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::SetSSLPrivateKeyFilePath(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___value0);
	return retVal;
}
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::SetSSLCAFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_SetSSLCAFilePath_mC553B8CCC370BFC28CC8D26437CC6B1F0FD60315 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef int32_t (*ConnectionConfigInternal_SetSSLCAFilePath_mC553B8CCC370BFC28CC8D26437CC6B1F0FD60315_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, String_t*);
	static ConnectionConfigInternal_SetSSLCAFilePath_mC553B8CCC370BFC28CC8D26437CC6B1F0FD60315_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_SetSSLCAFilePath_mC553B8CCC370BFC28CC8D26437CC6B1F0FD60315_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::SetSSLCAFilePath(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___value0);
	return retVal;
}
// System.Boolean UnityEngine.Networking.ConnectionConfigInternal::MakeChannelsSharedOrder(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionConfigInternal_MakeChannelsSharedOrder_m386F46D817576653643A908AAAA1AB6DA136707E (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___values0, const RuntimeMethod* method)
{
	typedef bool (*ConnectionConfigInternal_MakeChannelsSharedOrder_m386F46D817576653643A908AAAA1AB6DA136707E_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*);
	static ConnectionConfigInternal_MakeChannelsSharedOrder_m386F46D817576653643A908AAAA1AB6DA136707E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_MakeChannelsSharedOrder_m386F46D817576653643A908AAAA1AB6DA136707E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::MakeChannelsSharedOrder(System.Byte[])");
	bool retVal = _il2cpp_icall_func(__this, ___values0);
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
// System.Void UnityEngine.Networking.GlobalConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfig__ctor_m866AAD8ED24D864385AD4E717249FCFDBC1C2888 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_m_ThreadAwakeTimeout_3(1);
		__this->set_m_ReactorModel_4(0);
		__this->set_m_ReactorMaximumReceivedMessages_5((uint16_t)((int32_t)1024));
		__this->set_m_ReactorMaximumSentMessages_6((uint16_t)((int32_t)1024));
		__this->set_m_MaxPacketSize_7((uint16_t)((int32_t)2000));
		__this->set_m_MaxHosts_8((uint16_t)((int32_t)16));
		__this->set_m_ThreadPoolSize_9((uint8_t)1);
		__this->set_m_MinTimerTimeout_10(1);
		__this->set_m_MaxTimerTimeout_11(((int32_t)12000));
		__this->set_m_MinNetSimulatorTimeout_12(1);
		__this->set_m_MaxNetSimulatorTimeout_13(((int32_t)12000));
		__this->set_m_ConnectionReadyForSend_14((Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 *)NULL);
		__this->set_m_NetworkEventAvailable_15((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)NULL);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.GlobalConfig::get_ThreadAwakeTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GlobalConfig_get_ThreadAwakeTimeout_mD0B48A1B07BA6851A019B0EF69BE4FBBDDBC7552 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_ThreadAwakeTimeout_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.GlobalConfig::set_ThreadAwakeTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfig_set_ThreadAwakeTimeout_m11AE6BA88859ED3F6FA86D986B2D42BE95ACB29E (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GlobalConfig_set_ThreadAwakeTimeout_m11AE6BA88859ED3F6FA86D986B2D42BE95ACB29E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		uint32_t L_0 = ___value0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_2, _stringLiteral574EAFB007F2E7E398E934C28531F3E45502C792, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, GlobalConfig_set_ThreadAwakeTimeout_m11AE6BA88859ED3F6FA86D986B2D42BE95ACB29E_RuntimeMethod_var);
	}

IL_0014:
	{
		uint32_t L_3 = ___value0;
		__this->set_m_ThreadAwakeTimeout_3(L_3);
		return;
	}
}
// UnityEngine.Networking.ReactorModel UnityEngine.Networking.GlobalConfig::get_ReactorModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlobalConfig_get_ReactorModel_m17AC0B9C3BFE6A06D5ED6287840B318B07FD7963 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_ReactorModel_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.GlobalConfig::set_ReactorModel(UnityEngine.Networking.ReactorModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfig_set_ReactorModel_m76C6FDC5ABC4A5F45E3BEBF827B52FF7F901DF3A (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_ReactorModel_4(L_0);
		return;
	}
}
// System.UInt16 UnityEngine.Networking.GlobalConfig::get_ReactorMaximumReceivedMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t GlobalConfig_get_ReactorMaximumReceivedMessages_m587841C2DBAEA01D10B66F333CA376C3A61B6C33 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_ReactorMaximumReceivedMessages_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.GlobalConfig::set_ReactorMaximumReceivedMessages(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfig_set_ReactorMaximumReceivedMessages_mC00199DC57615844B285D5E1B62EFB098303BCA5 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_m_ReactorMaximumReceivedMessages_5(L_0);
		return;
	}
}
// System.UInt16 UnityEngine.Networking.GlobalConfig::get_ReactorMaximumSentMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t GlobalConfig_get_ReactorMaximumSentMessages_m71E2AF5B8E8A777099B2FC9746F965935B95CD41 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_ReactorMaximumSentMessages_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.GlobalConfig::set_ReactorMaximumSentMessages(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfig_set_ReactorMaximumSentMessages_mA619554DCFD0428A485B4B2099700323D3C52A5E (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_m_ReactorMaximumSentMessages_6(L_0);
		return;
	}
}
// System.UInt16 UnityEngine.Networking.GlobalConfig::get_MaxPacketSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t GlobalConfig_get_MaxPacketSize_mFC9F967F3D5F7BCA7AEF0CEA2A764FAC75884387 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_MaxPacketSize_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.GlobalConfig::set_MaxPacketSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfig_set_MaxPacketSize_m605C30A7929A47F3496716C296B72FA47392B779 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_m_MaxPacketSize_7(L_0);
		return;
	}
}
// System.UInt16 UnityEngine.Networking.GlobalConfig::get_MaxHosts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t GlobalConfig_get_MaxHosts_m96B921B2164D801914BC596559B3373962DB4CC2 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_MaxHosts_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.GlobalConfig::set_MaxHosts(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfig_set_MaxHosts_mC8CC24D71F0E97C2BB97F88778619E1740225D44 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GlobalConfig_set_MaxHosts_mC8CC24D71F0E97C2BB97F88778619E1740225D44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		uint16_t L_0 = ___value0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_2, _stringLiteral457098191ECB07164C22B87F790888612D9840BD, _stringLiteral17D0AF7CB0B5010B76781B8C6CCF63569494D2FC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, GlobalConfig_set_MaxHosts_mC8CC24D71F0E97C2BB97F88778619E1740225D44_RuntimeMethod_var);
	}

IL_0019:
	{
		uint16_t L_3 = ___value0;
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)((int32_t)128)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		uint16_t L_5 = ((uint16_t)((int32_t)128));
		RuntimeObject * L_6 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteralF9936E0CD170AE401911C48E5EFD1DA0A0AC9004, L_6, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_8, _stringLiteral457098191ECB07164C22B87F790888612D9840BD, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, GlobalConfig_set_MaxHosts_mC8CC24D71F0E97C2BB97F88778619E1740225D44_RuntimeMethod_var);
	}

IL_0044:
	{
		uint16_t L_9 = ___value0;
		__this->set_m_MaxHosts_8(L_9);
		return;
	}
}
// System.Byte UnityEngine.Networking.GlobalConfig::get_ThreadPoolSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t GlobalConfig_get_ThreadPoolSize_m3F884581529F6474406313B001354AA23885682C (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_m_ThreadPoolSize_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.GlobalConfig::set_ThreadPoolSize(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfig_set_ThreadPoolSize_m6A78D360E72E52EF1F183F48E876A7C372B12727 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_m_ThreadPoolSize_9(L_0);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.GlobalConfig::get_MinTimerTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GlobalConfig_get_MinTimerTimeout_m108C611D76E95BDA013E819EF86BCF902F977A7B (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_MinTimerTimeout_10();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.GlobalConfig::set_MinTimerTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfig_set_MinTimerTimeout_m9ABF8A2D404ED550E089C2EB3B2F5384D62DFEE7 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GlobalConfig_set_MinTimerTimeout_m9ABF8A2D404ED550E089C2EB3B2F5384D62DFEE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		uint32_t L_0 = ___value0;
		uint32_t L_1 = GlobalConfig_get_MaxTimerTimeout_mCD5050AC59E0C337AA85E9C77EB33F8077649945(__this, /*hidden argument*/NULL);
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)L_1)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_3 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_3, _stringLiteral8BDB449231EF7773BAF2A5B09B300A7ADEAB2FF2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, GlobalConfig_set_MinTimerTimeout_m9ABF8A2D404ED550E089C2EB3B2F5384D62DFEE7_RuntimeMethod_var);
	}

IL_0019:
	{
		uint32_t L_4 = ___value0;
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_6 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_6, _stringLiteral391D3D893F2A037DC2B31D312AAD2F090EE8875F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, GlobalConfig_set_MinTimerTimeout_m9ABF8A2D404ED550E089C2EB3B2F5384D62DFEE7_RuntimeMethod_var);
	}

IL_002c:
	{
		uint32_t L_7 = ___value0;
		__this->set_m_MinTimerTimeout_10(L_7);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.GlobalConfig::get_MaxTimerTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GlobalConfig_get_MaxTimerTimeout_mCD5050AC59E0C337AA85E9C77EB33F8077649945 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_MaxTimerTimeout_11();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.GlobalConfig::set_MaxTimerTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfig_set_MaxTimerTimeout_m642C9A728E7D10410B645E8B0013D97D161D346C (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GlobalConfig_set_MaxTimerTimeout_m642C9A728E7D10410B645E8B0013D97D161D346C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		uint32_t L_0 = ___value0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_2, _stringLiteralB9AE80899B6D0474D40662CA412C16118D9F6DB8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, GlobalConfig_set_MaxTimerTimeout_m642C9A728E7D10410B645E8B0013D97D161D346C_RuntimeMethod_var);
	}

IL_0014:
	{
		uint32_t L_3 = ___value0;
		V_1 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)12000))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		uint32_t L_5 = ((uint32_t)((int32_t)12000));
		RuntimeObject * L_6 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral5E40CEC237B69F5B4BBC04F1BABC44DACADCDC68, L_6, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, GlobalConfig_set_MaxTimerTimeout_m642C9A728E7D10410B645E8B0013D97D161D346C_RuntimeMethod_var);
	}

IL_003a:
	{
		uint32_t L_9 = ___value0;
		__this->set_m_MaxTimerTimeout_11(L_9);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.GlobalConfig::get_MinNetSimulatorTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GlobalConfig_get_MinNetSimulatorTimeout_m4C6BB9D0CAA455E0AE2EED89EC8D2DEAAC39D7F4 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_MinNetSimulatorTimeout_12();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.GlobalConfig::get_MaxNetSimulatorTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GlobalConfig_get_MaxNetSimulatorTimeout_mD86F57F2E32CB417D44272936D24A04D35C0FE1E (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_MaxNetSimulatorTimeout_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Action`1<System.Int32> UnityEngine.Networking.GlobalConfig::get_NetworkEventAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * GlobalConfig_get_NetworkEventAvailable_m6D648DA928B1C86504ED603F268A3036FBDB457E (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method)
{
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_0 = NULL;
	{
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_0 = __this->get_m_NetworkEventAvailable_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = V_0;
		return L_1;
	}
}
// System.Action`2<System.Int32,System.Int32> UnityEngine.Networking.GlobalConfig::get_ConnectionReadyForSend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * GlobalConfig_get_ConnectionReadyForSend_m8F88B2A0D0C17D7A9800470C377CF827694F3EE6 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method)
{
	Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * V_0 = NULL;
	{
		Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * L_0 = __this->get_m_ConnectionReadyForSend_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * L_1 = V_0;
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
// System.Void UnityEngine.Networking.GlobalConfigInternal::.ctor(UnityEngine.Networking.GlobalConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal__ctor_m9D3BDDFE489512D1B72565B516638C76564AAA68 (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GlobalConfigInternal__ctor_m9D3BDDFE489512D1B72565B516638C76564AAA68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * L_0 = ___config0;
		V_1 = (bool)((((RuntimeObject*)(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_2 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3(L_2, _stringLiteral317EE74AF038EFA1EFB835A1A142AD358C5939C3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, GlobalConfigInternal__ctor_m9D3BDDFE489512D1B72565B516638C76564AAA68_RuntimeMethod_var);
	}

IL_001b:
	{
		intptr_t L_3 = GlobalConfigInternal_InternalCreate_m68D5446714022799455D7C09C48BF18DC0EDEC90(/*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_3);
		GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * L_4 = ___config0;
		NullCheck(L_4);
		uint32_t L_5 = GlobalConfig_get_ThreadAwakeTimeout_mD0B48A1B07BA6851A019B0EF69BE4FBBDDBC7552(L_4, /*hidden argument*/NULL);
		GlobalConfigInternal_set_ThreadAwakeTimeout_mE59BEC296BB2878EC5DBB317ADCA406852E49FCE(__this, L_5, /*hidden argument*/NULL);
		GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * L_6 = ___config0;
		NullCheck(L_6);
		int32_t L_7 = GlobalConfig_get_ReactorModel_m17AC0B9C3BFE6A06D5ED6287840B318B07FD7963(L_6, /*hidden argument*/NULL);
		GlobalConfigInternal_set_ReactorModel_m370F4A7B85736E2A9A92760B8491B019E9309A8D(__this, (uint8_t)(((int32_t)((uint8_t)L_7))), /*hidden argument*/NULL);
		GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * L_8 = ___config0;
		NullCheck(L_8);
		uint16_t L_9 = GlobalConfig_get_ReactorMaximumReceivedMessages_m587841C2DBAEA01D10B66F333CA376C3A61B6C33(L_8, /*hidden argument*/NULL);
		GlobalConfigInternal_set_ReactorMaximumReceivedMessages_mF4B7494442A14194F16E04F41373E9CA2B7CC620(__this, L_9, /*hidden argument*/NULL);
		GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * L_10 = ___config0;
		NullCheck(L_10);
		uint16_t L_11 = GlobalConfig_get_ReactorMaximumSentMessages_m71E2AF5B8E8A777099B2FC9746F965935B95CD41(L_10, /*hidden argument*/NULL);
		GlobalConfigInternal_set_ReactorMaximumSentMessages_m0869AE8CD72F55DDB159F32E1730B4C07B28C6CE(__this, L_11, /*hidden argument*/NULL);
		GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * L_12 = ___config0;
		NullCheck(L_12);
		uint16_t L_13 = GlobalConfig_get_MaxPacketSize_mFC9F967F3D5F7BCA7AEF0CEA2A764FAC75884387(L_12, /*hidden argument*/NULL);
		GlobalConfigInternal_set_MaxPacketSize_m8C6143A73542A29FE2E2A299CC03BB1081C62D02(__this, L_13, /*hidden argument*/NULL);
		GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * L_14 = ___config0;
		NullCheck(L_14);
		uint16_t L_15 = GlobalConfig_get_MaxHosts_m96B921B2164D801914BC596559B3373962DB4CC2(L_14, /*hidden argument*/NULL);
		GlobalConfigInternal_set_MaxHosts_m6E4D5FA13061E1D5BB12BAE76C2DE4CE1A48FA99(__this, L_15, /*hidden argument*/NULL);
		GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * L_16 = ___config0;
		NullCheck(L_16);
		uint8_t L_17 = GlobalConfig_get_ThreadPoolSize_m3F884581529F6474406313B001354AA23885682C(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_008c;
		}
	}
	{
		GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * L_18 = ___config0;
		NullCheck(L_18);
		uint8_t L_19 = GlobalConfig_get_ThreadPoolSize_m3F884581529F6474406313B001354AA23885682C(L_18, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)L_19) > ((int32_t)((int32_t)254)))? 1 : 0);
		goto IL_008d;
	}

IL_008c:
	{
		G_B5_0 = 1;
	}

IL_008d:
	{
		V_2 = (bool)G_B5_0;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_009c;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_21 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_21, _stringLiteral087D31DBCB0C14AB130B18593F0AAF5E885A1617, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, GlobalConfigInternal__ctor_m9D3BDDFE489512D1B72565B516638C76564AAA68_RuntimeMethod_var);
	}

IL_009c:
	{
		GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * L_22 = ___config0;
		NullCheck(L_22);
		uint8_t L_23 = GlobalConfig_get_ThreadPoolSize_m3F884581529F6474406313B001354AA23885682C(L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * L_24 = ___config0;
		NullCheck(L_24);
		uint8_t L_25 = GlobalConfig_get_ThreadPoolSize_m3F884581529F6474406313B001354AA23885682C(L_24, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_25) > ((int32_t)1))? 1 : 0);
		bool L_26 = V_3;
		if (!L_26)
		{
			goto IL_00bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral85680EDBC3A789EE54201869637026FD805F2948, /*hidden argument*/NULL);
		V_0 = (uint8_t)1;
	}

IL_00bf:
	{
		uint8_t L_27 = V_0;
		GlobalConfigInternal_set_ThreadPoolSize_mA30F9BEAE6BBE337D7AA5CF85F22DE65A1AAB641(__this, L_27, /*hidden argument*/NULL);
		GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * L_28 = ___config0;
		NullCheck(L_28);
		uint32_t L_29 = GlobalConfig_get_MinTimerTimeout_m108C611D76E95BDA013E819EF86BCF902F977A7B(L_28, /*hidden argument*/NULL);
		GlobalConfigInternal_set_MinTimerTimeout_m2330A74449E798E17D30A685CC9AF0FDBAED53E1(__this, L_29, /*hidden argument*/NULL);
		GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * L_30 = ___config0;
		NullCheck(L_30);
		uint32_t L_31 = GlobalConfig_get_MaxTimerTimeout_mCD5050AC59E0C337AA85E9C77EB33F8077649945(L_30, /*hidden argument*/NULL);
		GlobalConfigInternal_set_MaxTimerTimeout_mED89AE4816D8B7B39183849289738DF641C242CF(__this, L_31, /*hidden argument*/NULL);
		GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * L_32 = ___config0;
		NullCheck(L_32);
		uint32_t L_33 = GlobalConfig_get_MinNetSimulatorTimeout_m4C6BB9D0CAA455E0AE2EED89EC8D2DEAAC39D7F4(L_32, /*hidden argument*/NULL);
		GlobalConfigInternal_set_MinNetSimulatorTimeout_m54488C6614ED2EF9FFAB902757CC3CFE895E9834(__this, L_33, /*hidden argument*/NULL);
		GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * L_34 = ___config0;
		NullCheck(L_34);
		uint32_t L_35 = GlobalConfig_get_MaxNetSimulatorTimeout_mD86F57F2E32CB417D44272936D24A04D35C0FE1E(L_34, /*hidden argument*/NULL);
		GlobalConfigInternal_set_MaxNetSimulatorTimeout_m247688A48376F7FA4B9551DC3292FBD05309989D(__this, L_35, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_Dispose_m52DC0B3749B578FB9D4F63E79820FA7AAC3DDA53 (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GlobalConfigInternal_Dispose_m52DC0B3749B578FB9D4F63E79820FA7AAC3DDA53_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_3 = __this->get_m_Ptr_0();
		GlobalConfigInternal_InternalDestroy_m82C15BED6D4EB877B4702894F1C07780AFD65B68((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_002e:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_Finalize_mFFA149D255A46213D5CBCD1745EBC147B3A89330 (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, const RuntimeMethod* method)
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
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Networking.GlobalConfigInternal::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x14, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_Dispose_m8211C847457CFF6475989864B152A6F7B458D6D6 (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GlobalConfigInternal_Dispose_m8211C847457CFF6475989864B152A6F7B458D6D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_3 = __this->get_m_Ptr_0();
		GlobalConfigInternal_InternalDestroy_m82C15BED6D4EB877B4702894F1C07780AFD65B68((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_002e:
	{
		return;
	}
}
// System.IntPtr UnityEngine.Networking.GlobalConfigInternal::InternalCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GlobalConfigInternal_InternalCreate_m68D5446714022799455D7C09C48BF18DC0EDEC90 (const RuntimeMethod* method)
{
	typedef intptr_t (*GlobalConfigInternal_InternalCreate_m68D5446714022799455D7C09C48BF18DC0EDEC90_ftn) ();
	static GlobalConfigInternal_InternalCreate_m68D5446714022799455D7C09C48BF18DC0EDEC90_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_InternalCreate_m68D5446714022799455D7C09C48BF18DC0EDEC90_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::InternalCreate()");
	intptr_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::InternalDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_InternalDestroy_m82C15BED6D4EB877B4702894F1C07780AFD65B68 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_InternalDestroy_m82C15BED6D4EB877B4702894F1C07780AFD65B68_ftn) (intptr_t);
	static GlobalConfigInternal_InternalDestroy_m82C15BED6D4EB877B4702894F1C07780AFD65B68_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_InternalDestroy_m82C15BED6D4EB877B4702894F1C07780AFD65B68_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::InternalDestroy(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::set_ThreadAwakeTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_set_ThreadAwakeTimeout_mE59BEC296BB2878EC5DBB317ADCA406852E49FCE (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_set_ThreadAwakeTimeout_mE59BEC296BB2878EC5DBB317ADCA406852E49FCE_ftn) (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F *, uint32_t);
	static GlobalConfigInternal_set_ThreadAwakeTimeout_mE59BEC296BB2878EC5DBB317ADCA406852E49FCE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_set_ThreadAwakeTimeout_mE59BEC296BB2878EC5DBB317ADCA406852E49FCE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::set_ThreadAwakeTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::set_ReactorModel(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_set_ReactorModel_m370F4A7B85736E2A9A92760B8491B019E9309A8D (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_set_ReactorModel_m370F4A7B85736E2A9A92760B8491B019E9309A8D_ftn) (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F *, uint8_t);
	static GlobalConfigInternal_set_ReactorModel_m370F4A7B85736E2A9A92760B8491B019E9309A8D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_set_ReactorModel_m370F4A7B85736E2A9A92760B8491B019E9309A8D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::set_ReactorModel(System.Byte)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::set_ReactorMaximumReceivedMessages(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_set_ReactorMaximumReceivedMessages_mF4B7494442A14194F16E04F41373E9CA2B7CC620 (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_set_ReactorMaximumReceivedMessages_mF4B7494442A14194F16E04F41373E9CA2B7CC620_ftn) (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F *, uint16_t);
	static GlobalConfigInternal_set_ReactorMaximumReceivedMessages_mF4B7494442A14194F16E04F41373E9CA2B7CC620_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_set_ReactorMaximumReceivedMessages_mF4B7494442A14194F16E04F41373E9CA2B7CC620_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::set_ReactorMaximumReceivedMessages(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::set_ReactorMaximumSentMessages(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_set_ReactorMaximumSentMessages_m0869AE8CD72F55DDB159F32E1730B4C07B28C6CE (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_set_ReactorMaximumSentMessages_m0869AE8CD72F55DDB159F32E1730B4C07B28C6CE_ftn) (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F *, uint16_t);
	static GlobalConfigInternal_set_ReactorMaximumSentMessages_m0869AE8CD72F55DDB159F32E1730B4C07B28C6CE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_set_ReactorMaximumSentMessages_m0869AE8CD72F55DDB159F32E1730B4C07B28C6CE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::set_ReactorMaximumSentMessages(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::set_MaxPacketSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_set_MaxPacketSize_m8C6143A73542A29FE2E2A299CC03BB1081C62D02 (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_set_MaxPacketSize_m8C6143A73542A29FE2E2A299CC03BB1081C62D02_ftn) (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F *, uint16_t);
	static GlobalConfigInternal_set_MaxPacketSize_m8C6143A73542A29FE2E2A299CC03BB1081C62D02_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_set_MaxPacketSize_m8C6143A73542A29FE2E2A299CC03BB1081C62D02_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::set_MaxPacketSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::set_MaxHosts(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_set_MaxHosts_m6E4D5FA13061E1D5BB12BAE76C2DE4CE1A48FA99 (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_set_MaxHosts_m6E4D5FA13061E1D5BB12BAE76C2DE4CE1A48FA99_ftn) (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F *, uint16_t);
	static GlobalConfigInternal_set_MaxHosts_m6E4D5FA13061E1D5BB12BAE76C2DE4CE1A48FA99_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_set_MaxHosts_m6E4D5FA13061E1D5BB12BAE76C2DE4CE1A48FA99_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::set_MaxHosts(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::set_ThreadPoolSize(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_set_ThreadPoolSize_mA30F9BEAE6BBE337D7AA5CF85F22DE65A1AAB641 (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_set_ThreadPoolSize_mA30F9BEAE6BBE337D7AA5CF85F22DE65A1AAB641_ftn) (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F *, uint8_t);
	static GlobalConfigInternal_set_ThreadPoolSize_mA30F9BEAE6BBE337D7AA5CF85F22DE65A1AAB641_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_set_ThreadPoolSize_mA30F9BEAE6BBE337D7AA5CF85F22DE65A1AAB641_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::set_ThreadPoolSize(System.Byte)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::set_MinTimerTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_set_MinTimerTimeout_m2330A74449E798E17D30A685CC9AF0FDBAED53E1 (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_set_MinTimerTimeout_m2330A74449E798E17D30A685CC9AF0FDBAED53E1_ftn) (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F *, uint32_t);
	static GlobalConfigInternal_set_MinTimerTimeout_m2330A74449E798E17D30A685CC9AF0FDBAED53E1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_set_MinTimerTimeout_m2330A74449E798E17D30A685CC9AF0FDBAED53E1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::set_MinTimerTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::set_MaxTimerTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_set_MaxTimerTimeout_mED89AE4816D8B7B39183849289738DF641C242CF (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_set_MaxTimerTimeout_mED89AE4816D8B7B39183849289738DF641C242CF_ftn) (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F *, uint32_t);
	static GlobalConfigInternal_set_MaxTimerTimeout_mED89AE4816D8B7B39183849289738DF641C242CF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_set_MaxTimerTimeout_mED89AE4816D8B7B39183849289738DF641C242CF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::set_MaxTimerTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::set_MinNetSimulatorTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_set_MinNetSimulatorTimeout_m54488C6614ED2EF9FFAB902757CC3CFE895E9834 (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_set_MinNetSimulatorTimeout_m54488C6614ED2EF9FFAB902757CC3CFE895E9834_ftn) (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F *, uint32_t);
	static GlobalConfigInternal_set_MinNetSimulatorTimeout_m54488C6614ED2EF9FFAB902757CC3CFE895E9834_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_set_MinNetSimulatorTimeout_m54488C6614ED2EF9FFAB902757CC3CFE895E9834_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::set_MinNetSimulatorTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::set_MaxNetSimulatorTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfigInternal_set_MaxNetSimulatorTimeout_m247688A48376F7FA4B9551DC3292FBD05309989D (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_set_MaxNetSimulatorTimeout_m247688A48376F7FA4B9551DC3292FBD05309989D_ftn) (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F *, uint32_t);
	static GlobalConfigInternal_set_MaxNetSimulatorTimeout_m247688A48376F7FA4B9551DC3292FBD05309989D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_set_MaxNetSimulatorTimeout_m247688A48376F7FA4B9551DC3292FBD05309989D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::set_MaxNetSimulatorTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.HostTopology::.ctor(UnityEngine.Networking.ConnectionConfig,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopology__ctor_m402906F2EFF083571541B3EDED1729CA3FDB6244 (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * __this, ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * ___defaultConfig0, int32_t ___maxDefaultConnections1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopology__ctor_m402906F2EFF083571541B3EDED1729CA3FDB6244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		__this->set_m_DefConfig_0((ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A *)NULL);
		__this->set_m_MaxDefConnections_1(0);
		List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * L_0 = (List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE *)il2cpp_codegen_object_new(List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE_il2cpp_TypeInfo_var);
		List_1__ctor_m1F4A4C6B76603E6A2DA8067FDC73F87532587024(L_0, /*hidden argument*/List_1__ctor_m1F4A4C6B76603E6A2DA8067FDC73F87532587024_RuntimeMethod_var);
		__this->set_m_SpecialConnections_2(L_0);
		__this->set_m_ReceivedMessagePoolSize_3((uint16_t)((int32_t)1024));
		__this->set_m_SentMessagePoolSize_4((uint16_t)((int32_t)1024));
		__this->set_m_MessagePoolSizeGrowthFactor_5((0.75f));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_1 = ___defaultConfig0;
		V_0 = (bool)((((RuntimeObject*)(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_3 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3(L_3, _stringLiteral317EE74AF038EFA1EFB835A1A142AD358C5939C3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, HostTopology__ctor_m402906F2EFF083571541B3EDED1729CA3FDB6244_RuntimeMethod_var);
	}

IL_0055:
	{
		int32_t L_4 = ___maxDefaultConnections1;
		V_1 = (bool)((((int32_t)((((int32_t)L_4) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0070;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_6 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_6, _stringLiteral9CB64D4DAF8CDF7B5A2130FCCDD62ECE720AFE8E, _stringLiteral572189F4EA97569D6C0D3A4A68C98F20D9FC95A5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, HostTopology__ctor_m402906F2EFF083571541B3EDED1729CA3FDB6244_RuntimeMethod_var);
	}

IL_0070:
	{
		int32_t L_7 = ___maxDefaultConnections1;
		V_2 = (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)((int32_t)65535)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_008f;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_9 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_9, _stringLiteral9CB64D4DAF8CDF7B5A2130FCCDD62ECE720AFE8E, _stringLiteralC94B47F32002FEDF4A271879FE7A0BC4157B2A6F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, HostTopology__ctor_m402906F2EFF083571541B3EDED1729CA3FDB6244_RuntimeMethod_var);
	}

IL_008f:
	{
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_10 = ___defaultConfig0;
		ConnectionConfig_Validate_m84787B66F366FDC5EF3D074316F7041E84AA735F(L_10, /*hidden argument*/NULL);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_11 = ___defaultConfig0;
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_12 = (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A *)il2cpp_codegen_object_new(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A_il2cpp_TypeInfo_var);
		ConnectionConfig__ctor_m1976654A083CE2C1858BECF7EED65005BFC16343(L_12, L_11, /*hidden argument*/NULL);
		__this->set_m_DefConfig_0(L_12);
		int32_t L_13 = ___maxDefaultConnections1;
		__this->set_m_MaxDefConnections_1(L_13);
		return;
	}
}
// System.Void UnityEngine.Networking.HostTopology::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopology__ctor_mA0D7BC0F1CC6956ABFBDAC61941B38E75B00D87D (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopology__ctor_mA0D7BC0F1CC6956ABFBDAC61941B38E75B00D87D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_DefConfig_0((ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A *)NULL);
		__this->set_m_MaxDefConnections_1(0);
		List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * L_0 = (List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE *)il2cpp_codegen_object_new(List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE_il2cpp_TypeInfo_var);
		List_1__ctor_m1F4A4C6B76603E6A2DA8067FDC73F87532587024(L_0, /*hidden argument*/List_1__ctor_m1F4A4C6B76603E6A2DA8067FDC73F87532587024_RuntimeMethod_var);
		__this->set_m_SpecialConnections_2(L_0);
		__this->set_m_ReceivedMessagePoolSize_3((uint16_t)((int32_t)1024));
		__this->set_m_SentMessagePoolSize_4((uint16_t)((int32_t)1024));
		__this->set_m_MessagePoolSizeGrowthFactor_5((0.75f));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::get_DefaultConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * HostTopology_get_DefaultConfig_m0E4C32CC256D7C901C1C91C86B38F33EBD03A0E3 (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * __this, const RuntimeMethod* method)
{
	ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * V_0 = NULL;
	{
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_0 = __this->get_m_DefConfig_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Networking.HostTopology::get_MaxDefaultConnections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HostTopology_get_MaxDefaultConnections_mBED404D3C504A13C5302198D237E509B664CFEAD (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_MaxDefConnections_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Networking.HostTopology::get_SpecialConnectionConfigsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HostTopology_get_SpecialConnectionConfigsCount_m34BCBF16F6499FF007E37C3C3657B1BAE8E8522C (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopology_get_SpecialConnectionConfigsCount_m34BCBF16F6499FF007E37C3C3657B1BAE8E8522C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * L_0 = __this->get_m_SpecialConnections_2();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m2C0EC005D5C06E5F178A8FB94D48DA905506D907_inline(L_0, /*hidden argument*/List_1_get_Count_m2C0EC005D5C06E5F178A8FB94D48DA905506D907_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> UnityEngine.Networking.HostTopology::get_SpecialConnectionConfigs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * HostTopology_get_SpecialConnectionConfigs_m6FA6CF1CD59EBC0DBBB9454048EDDACE322C029C (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * __this, const RuntimeMethod* method)
{
	List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * V_0 = NULL;
	{
		List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * L_0 = __this->get_m_SpecialConnections_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::GetSpecialConnectionConfig(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * HostTopology_GetSpecialConnectionConfig_m52EB0C01DBCEFABCCA2999BA5AA4FC5200049BC1 (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopology_GetSpecialConnectionConfig_m52EB0C01DBCEFABCCA2999BA5AA4FC5200049BC1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___i0;
		List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * L_1 = __this->get_m_SpecialConnections_2();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m2C0EC005D5C06E5F178A8FB94D48DA905506D907_inline(L_1, /*hidden argument*/List_1_get_Count_m2C0EC005D5C06E5F178A8FB94D48DA905506D907_RuntimeMethod_var);
		if ((((int32_t)L_0) > ((int32_t)L_2)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = ___i0;
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_5 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_5, _stringLiteral8A4CACA68D0889BCC0B193D3EB8B384C328208A3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, HostTopology_GetSpecialConnectionConfig_m52EB0C01DBCEFABCCA2999BA5AA4FC5200049BC1_RuntimeMethod_var);
	}

IL_0025:
	{
		List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * L_6 = __this->get_m_SpecialConnections_2();
		int32_t L_7 = ___i0;
		NullCheck(L_6);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_8 = List_1_get_Item_mA887125ECBEEA92DEE8520B227EFE1CBF3FB6434_inline(L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)), /*hidden argument*/List_1_get_Item_mA887125ECBEEA92DEE8520B227EFE1CBF3FB6434_RuntimeMethod_var);
		V_1 = L_8;
		goto IL_0036;
	}

IL_0036:
	{
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_9 = V_1;
		return L_9;
	}
}
// System.UInt16 UnityEngine.Networking.HostTopology::get_ReceivedMessagePoolSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HostTopology_get_ReceivedMessagePoolSize_m37EAF773FF7EB9CB306E0BC20FE9B132C16880FD (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_ReceivedMessagePoolSize_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.HostTopology::get_SentMessagePoolSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HostTopology_get_SentMessagePoolSize_m04C3CF4CEC53530BBB0CA64C753F9EFEAF6EB16A (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_SentMessagePoolSize_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.Networking.HostTopology::get_MessagePoolSizeGrowthFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HostTopology_get_MessagePoolSizeGrowthFactor_m7A7ED02522613F0DB49B663F1F51B0104FC60FA0 (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_MessagePoolSizeGrowthFactor_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
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
// System.Void UnityEngine.Networking.HostTopologyInternal::.ctor(UnityEngine.Networking.HostTopology)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal__ctor_m9DAA9FD8AC2102B55B9EB6E4F334C8B8555F5E43 (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 * __this, HostTopology_t268779309BB2D69F29D1A182662C79818813892B * ___topology0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopologyInternal__ctor_m9DAA9FD8AC2102B55B9EB6E4F334C8B8555F5E43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * V_0 = NULL;
	int32_t V_1 = 0;
	ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * V_2 = NULL;
	ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * V_3 = NULL;
	bool V_4 = false;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_0 = ___topology0;
		NullCheck(L_0);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_1 = HostTopology_get_DefaultConfig_m0E4C32CC256D7C901C1C91C86B38F33EBD03A0E3(L_0, /*hidden argument*/NULL);
		ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * L_2 = (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *)il2cpp_codegen_object_new(ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078_il2cpp_TypeInfo_var);
		ConnectionConfigInternal__ctor_m3159326166C18DBB931A215F34FDE777C78D2AC0(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * L_3 = V_0;
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_4 = ___topology0;
		NullCheck(L_4);
		int32_t L_5 = HostTopology_get_MaxDefaultConnections_mBED404D3C504A13C5302198D237E509B664CFEAD(L_4, /*hidden argument*/NULL);
		intptr_t L_6 = HostTopologyInternal_InternalCreate_m04CCA00F1B270054658A87CE635FB6E83ADD3551(L_3, L_5, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_6);
		V_1 = 1;
		goto IL_0047;
	}

IL_002a:
	{
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_7 = ___topology0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_9 = HostTopology_GetSpecialConnectionConfig_m52EB0C01DBCEFABCCA2999BA5AA4FC5200049BC1(L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_10 = V_2;
		ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * L_11 = (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *)il2cpp_codegen_object_new(ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078_il2cpp_TypeInfo_var);
		ConnectionConfigInternal__ctor_m3159326166C18DBB931A215F34FDE777C78D2AC0(L_11, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * L_12 = V_3;
		HostTopologyInternal_AddSpecialConnectionConfig_m0A2F45F5745DC98599A7EE8359F3A17DBE66856C(__this, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_14 = V_1;
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_15 = ___topology0;
		NullCheck(L_15);
		int32_t L_16 = HostTopology_get_SpecialConnectionConfigsCount_m34BCBF16F6499FF007E37C3C3657B1BAE8E8522C(L_15, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_14) > ((int32_t)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_002a;
		}
	}
	{
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_18 = ___topology0;
		NullCheck(L_18);
		uint16_t L_19 = HostTopology_get_ReceivedMessagePoolSize_m37EAF773FF7EB9CB306E0BC20FE9B132C16880FD(L_18, /*hidden argument*/NULL);
		HostTopologyInternal_set_ReceivedMessagePoolSize_m058306E23591D771402037081DA32C2FE60B1464(__this, L_19, /*hidden argument*/NULL);
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_20 = ___topology0;
		NullCheck(L_20);
		uint16_t L_21 = HostTopology_get_SentMessagePoolSize_m04C3CF4CEC53530BBB0CA64C753F9EFEAF6EB16A(L_20, /*hidden argument*/NULL);
		HostTopologyInternal_set_SentMessagePoolSize_mAB16B0D773E42DD470FBC0F2C79030B914DAABE1(__this, L_21, /*hidden argument*/NULL);
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_22 = ___topology0;
		NullCheck(L_22);
		float L_23 = HostTopology_get_MessagePoolSizeGrowthFactor_m7A7ED02522613F0DB49B663F1F51B0104FC60FA0(L_22, /*hidden argument*/NULL);
		HostTopologyInternal_set_MessagePoolSizeGrowthFactor_mE735BFC3E80552A0BD0C125B06BD80973563020A(__this, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.HostTopologyInternal::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_Dispose_m083CAFDDE99B9C65B901855E17687C86ED981E7F (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopologyInternal_Dispose_m083CAFDDE99B9C65B901855E17687C86ED981E7F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_3 = __this->get_m_Ptr_0();
		HostTopologyInternal_InternalDestroy_m71E5CC3F9775FC938F4B1397F87811AEF3FCFECF((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_002e:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.HostTopologyInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_Finalize_mDB9371DF591F3F2EC5988C3E76ADDC3076F077BA (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 * __this, const RuntimeMethod* method)
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
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Networking.HostTopologyInternal::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x14, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.HostTopologyInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_Dispose_mC632F73CFD4F9D9558C4A6B19A1B594011A46D8E (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopologyInternal_Dispose_mC632F73CFD4F9D9558C4A6B19A1B594011A46D8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_3 = __this->get_m_Ptr_0();
		HostTopologyInternal_InternalDestroy_m71E5CC3F9775FC938F4B1397F87811AEF3FCFECF((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_002e:
	{
		return;
	}
}
// System.IntPtr UnityEngine.Networking.HostTopologyInternal::InternalCreate(UnityEngine.Networking.ConnectionConfigInternal,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HostTopologyInternal_InternalCreate_m04CCA00F1B270054658A87CE635FB6E83ADD3551 (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * ___config0, int32_t ___maxDefaultConnections1, const RuntimeMethod* method)
{
	typedef intptr_t (*HostTopologyInternal_InternalCreate_m04CCA00F1B270054658A87CE635FB6E83ADD3551_ftn) (ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *, int32_t);
	static HostTopologyInternal_InternalCreate_m04CCA00F1B270054658A87CE635FB6E83ADD3551_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_InternalCreate_m04CCA00F1B270054658A87CE635FB6E83ADD3551_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::InternalCreate(UnityEngine.Networking.ConnectionConfigInternal,System.Int32)");
	intptr_t retVal = _il2cpp_icall_func(___config0, ___maxDefaultConnections1);
	return retVal;
}
// System.Void UnityEngine.Networking.HostTopologyInternal::InternalDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_InternalDestroy_m71E5CC3F9775FC938F4B1397F87811AEF3FCFECF (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*HostTopologyInternal_InternalDestroy_m71E5CC3F9775FC938F4B1397F87811AEF3FCFECF_ftn) (intptr_t);
	static HostTopologyInternal_InternalDestroy_m71E5CC3F9775FC938F4B1397F87811AEF3FCFECF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_InternalDestroy_m71E5CC3F9775FC938F4B1397F87811AEF3FCFECF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::InternalDestroy(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// System.UInt16 UnityEngine.Networking.HostTopologyInternal::AddSpecialConnectionConfig(UnityEngine.Networking.ConnectionConfigInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HostTopologyInternal_AddSpecialConnectionConfig_m0A2F45F5745DC98599A7EE8359F3A17DBE66856C (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 * __this, ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 * ___config0, const RuntimeMethod* method)
{
	typedef uint16_t (*HostTopologyInternal_AddSpecialConnectionConfig_m0A2F45F5745DC98599A7EE8359F3A17DBE66856C_ftn) (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 *, ConnectionConfigInternal_tA4BD9D163516820771949053DE20639A8A7D8078 *);
	static HostTopologyInternal_AddSpecialConnectionConfig_m0A2F45F5745DC98599A7EE8359F3A17DBE66856C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_AddSpecialConnectionConfig_m0A2F45F5745DC98599A7EE8359F3A17DBE66856C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::AddSpecialConnectionConfig(UnityEngine.Networking.ConnectionConfigInternal)");
	uint16_t retVal = _il2cpp_icall_func(__this, ___config0);
	return retVal;
}
// System.Void UnityEngine.Networking.HostTopologyInternal::set_ReceivedMessagePoolSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_set_ReceivedMessagePoolSize_m058306E23591D771402037081DA32C2FE60B1464 (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*HostTopologyInternal_set_ReceivedMessagePoolSize_m058306E23591D771402037081DA32C2FE60B1464_ftn) (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 *, uint16_t);
	static HostTopologyInternal_set_ReceivedMessagePoolSize_m058306E23591D771402037081DA32C2FE60B1464_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_set_ReceivedMessagePoolSize_m058306E23591D771402037081DA32C2FE60B1464_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::set_ReceivedMessagePoolSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.HostTopologyInternal::set_SentMessagePoolSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_set_SentMessagePoolSize_mAB16B0D773E42DD470FBC0F2C79030B914DAABE1 (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*HostTopologyInternal_set_SentMessagePoolSize_mAB16B0D773E42DD470FBC0F2C79030B914DAABE1_ftn) (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 *, uint16_t);
	static HostTopologyInternal_set_SentMessagePoolSize_mAB16B0D773E42DD470FBC0F2C79030B914DAABE1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_set_SentMessagePoolSize_mAB16B0D773E42DD470FBC0F2C79030B914DAABE1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::set_SentMessagePoolSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.HostTopologyInternal::set_MessagePoolSizeGrowthFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_set_MessagePoolSizeGrowthFactor_mE735BFC3E80552A0BD0C125B06BD80973563020A (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*HostTopologyInternal_set_MessagePoolSizeGrowthFactor_mE735BFC3E80552A0BD0C125B06BD80973563020A_ftn) (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 *, float);
	static HostTopologyInternal_set_MessagePoolSizeGrowthFactor_mE735BFC3E80552A0BD0C125B06BD80973563020A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_set_MessagePoolSizeGrowthFactor_mE735BFC3E80552A0BD0C125B06BD80973563020A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::set_MessagePoolSizeGrowthFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
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
// System.Void UnityEngine.Networking.NetworkTransport::Init(UnityEngine.Networking.GlobalConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_Init_m8AC1E8A78F9FE38D1C540568ED589A223FFB4557 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_Init_m8AC1E8A78F9FE38D1C540568ED589A223FFB4557_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * L_0 = ___config0;
		NullCheck(L_0);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = GlobalConfig_get_NetworkEventAvailable_m6D648DA928B1C86504ED603F268A3036FBDB457E(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * L_3 = ___config0;
		NullCheck(L_3);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_4 = GlobalConfig_get_NetworkEventAvailable_m6D648DA928B1C86504ED603F268A3036FBDB457E(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		NetworkTransport_SetNetworkEventAvailableCallback_m9996DCB1B44D723DC6D555810D3A474B8A91B64F(L_4, /*hidden argument*/NULL);
	}

IL_001a:
	{
		GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * L_5 = ___config0;
		NullCheck(L_5);
		Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * L_6 = GlobalConfig_get_ConnectionReadyForSend_m8F88B2A0D0C17D7A9800470C377CF827694F3EE6(L_5, /*hidden argument*/NULL);
		V_1 = (bool)((!(((RuntimeObject*)(Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * L_8 = ___config0;
		NullCheck(L_8);
		Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * L_9 = GlobalConfig_get_ConnectionReadyForSend_m8F88B2A0D0C17D7A9800470C377CF827694F3EE6(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		NetworkTransport_SetConnectionReadyForSendCallback_mD9660BB5DDC8630EBB844DC6A717D4F6CBF8EF05(L_9, /*hidden argument*/NULL);
	}

IL_0033:
	{
		GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * L_10 = ___config0;
		GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * L_11 = (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F *)il2cpp_codegen_object_new(GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F_il2cpp_TypeInfo_var);
		GlobalConfigInternal__ctor_m9D3BDDFE489512D1B72565B516638C76564AAA68(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		NetworkTransport_InitializeClassWithConfig_mA43ECAAD1DEFB5BA599591691AF2B3826F6A0BDC(L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransport::InitializeClassWithConfig(UnityEngine.Networking.GlobalConfigInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_InitializeClassWithConfig_mA43ECAAD1DEFB5BA599591691AF2B3826F6A0BDC (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F * ___config0, const RuntimeMethod* method)
{
	typedef void (*NetworkTransport_InitializeClassWithConfig_mA43ECAAD1DEFB5BA599591691AF2B3826F6A0BDC_ftn) (GlobalConfigInternal_t0F07F384FD03D7CE842BC781D7C747B5579F680F *);
	static NetworkTransport_InitializeClassWithConfig_mA43ECAAD1DEFB5BA599591691AF2B3826F6A0BDC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_InitializeClassWithConfig_mA43ECAAD1DEFB5BA599591691AF2B3826F6A0BDC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::InitializeClassWithConfig(UnityEngine.Networking.GlobalConfigInternal)");
	_il2cpp_icall_func(___config0);
}
// System.Void UnityEngine.Networking.NetworkTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_Shutdown_mCDADD01490BB0C9B0F5BAFB391E207C7B0298DC4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_Shutdown_mCDADD01490BB0C9B0F5BAFB391E207C7B0298DC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		NetworkTransport_Cleanup_m7BF767E0AB80E628379B2AF924E109666794B6F0(/*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWithSimulator(UnityEngine.Networking.HostTopology,System.Int32,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostWithSimulator_m7D2AA3190354AF70603B43E642EBABD8B014E2B8 (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * ___topology0, int32_t ___minTimeout1, int32_t ___maxTimeout2, int32_t ___port3, String_t* ___ip4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_AddHostWithSimulator_m7D2AA3190354AF70603B43E642EBABD8B014E2B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_0 = ___topology0;
		V_0 = (bool)((((RuntimeObject*)(HostTopology_t268779309BB2D69F29D1A182662C79818813892B *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_2 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3(L_2, _stringLiteralD545B2AC9E1F7D2797A7BD919E1632698CEF91B5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NetworkTransport_AddHostWithSimulator_m7D2AA3190354AF70603B43E642EBABD8B014E2B8_RuntimeMethod_var);
	}

IL_0014:
	{
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_3 = ___topology0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		NetworkTransport_CheckTopology_mCA4CDEBBD3AA34CE15D5110586307B01EAD7C1AA(L_3, /*hidden argument*/NULL);
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_4 = ___topology0;
		HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 * L_5 = (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 *)il2cpp_codegen_object_new(HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10_il2cpp_TypeInfo_var);
		HostTopologyInternal__ctor_m9DAA9FD8AC2102B55B9EB6E4F334C8B8555F5E43(L_5, L_4, /*hidden argument*/NULL);
		String_t* L_6 = ___ip4;
		int32_t L_7 = ___port3;
		int32_t L_8 = ___minTimeout1;
		int32_t L_9 = ___maxTimeout2;
		int32_t L_10 = NetworkTransport_AddHostInternal_mE6C08100955EB6B0A84D2012C4539CCEFD21D78F(L_5, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		goto IL_002e;
	}

IL_002e:
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHost_m24D3C68D33504C5A83C47A701F7CDA20E814898D (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * ___topology0, int32_t ___port1, String_t* ___ip2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_AddHost_m24D3C68D33504C5A83C47A701F7CDA20E814898D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_0 = ___topology0;
		int32_t L_1 = ___port1;
		String_t* L_2 = ___ip2;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		int32_t L_3 = NetworkTransport_AddHostWithSimulator_m7D2AA3190354AF70603B43E642EBABD8B014E2B8(L_0, 0, 0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHost_mEBF87FF57C336EC3EB6A2F69575172A71620B5CE (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * ___topology0, int32_t ___port1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_AddHost_mEBF87FF57C336EC3EB6A2F69575172A71620B5CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_0 = ___topology0;
		int32_t L_1 = ___port1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		int32_t L_2 = NetworkTransport_AddHost_m24D3C68D33504C5A83C47A701F7CDA20E814898D(L_0, L_1, (String_t*)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostInternal(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostInternal_mE6C08100955EB6B0A84D2012C4539CCEFD21D78F (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 * ___topologyInt0, String_t* ___ip1, int32_t ___port2, int32_t ___minTimeout3, int32_t ___maxTimeout4, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_AddHostInternal_mE6C08100955EB6B0A84D2012C4539CCEFD21D78F_ftn) (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 *, String_t*, int32_t, int32_t, int32_t);
	static NetworkTransport_AddHostInternal_mE6C08100955EB6B0A84D2012C4539CCEFD21D78F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_AddHostInternal_mE6C08100955EB6B0A84D2012C4539CCEFD21D78F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::AddHostInternal(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32,System.Int32,System.Int32)");
	int32_t retVal = _il2cpp_icall_func(___topologyInt0, ___ip1, ___port2, ___minTimeout3, ___maxTimeout4);
	return retVal;
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWebsocketHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddWebsocketHost_m700C762A710DDC088B7768520A810E8B211143B5 (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * ___topology0, int32_t ___port1, String_t* ___ip2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_AddWebsocketHost_m700C762A710DDC088B7768520A810E8B211143B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___port1;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2 = ___ip2;
		int32_t L_3 = ___port1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		bool L_4 = NetworkTransport_IsPortOpen_mDE9CADB4888CF273569A783CD842A22D921AAFB4(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_6 = ___port1;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57(_stringLiteral9552624BDF15687DEEA5EE13EAD814AB55C4BB5A, L_8, _stringLiteral0A7707C8AD286270B40614B2F06591CDC7B4DD38, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_10 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NetworkTransport_AddWebsocketHost_m700C762A710DDC088B7768520A810E8B211143B5_RuntimeMethod_var);
	}

IL_0030:
	{
	}

IL_0031:
	{
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_11 = ___topology0;
		V_2 = (bool)((((RuntimeObject*)(HostTopology_t268779309BB2D69F29D1A182662C79818813892B *)L_11) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0044;
		}
	}
	{
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_13 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3(L_13, _stringLiteralD545B2AC9E1F7D2797A7BD919E1632698CEF91B5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NetworkTransport_AddWebsocketHost_m700C762A710DDC088B7768520A810E8B211143B5_RuntimeMethod_var);
	}

IL_0044:
	{
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_14 = ___topology0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		NetworkTransport_CheckTopology_mCA4CDEBBD3AA34CE15D5110586307B01EAD7C1AA(L_14, /*hidden argument*/NULL);
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_15 = ___topology0;
		HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 * L_16 = (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 *)il2cpp_codegen_object_new(HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10_il2cpp_TypeInfo_var);
		HostTopologyInternal__ctor_m9DAA9FD8AC2102B55B9EB6E4F334C8B8555F5E43(L_16, L_15, /*hidden argument*/NULL);
		String_t* L_17 = ___ip2;
		int32_t L_18 = ___port1;
		int32_t L_19 = NetworkTransport_AddWsHostInternal_mC1C24C4B573DA481ED99DB6C68B44E29D30A6AB0(L_16, L_17, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		goto IL_005b;
	}

IL_005b:
	{
		int32_t L_20 = V_3;
		return L_20;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWebsocketHost(UnityEngine.Networking.HostTopology,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddWebsocketHost_mB3864DBBDF764C49AD73BC89237F4C9EBFC4252A (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * ___topology0, int32_t ___port1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_AddWebsocketHost_mB3864DBBDF764C49AD73BC89237F4C9EBFC4252A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_0 = ___topology0;
		int32_t L_1 = ___port1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		int32_t L_2 = NetworkTransport_AddWebsocketHost_m700C762A710DDC088B7768520A810E8B211143B5(L_0, L_1, (String_t*)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWsHostInternal(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddWsHostInternal_mC1C24C4B573DA481ED99DB6C68B44E29D30A6AB0 (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 * ___topologyInt0, String_t* ___ip1, int32_t ___port2, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_AddWsHostInternal_mC1C24C4B573DA481ED99DB6C68B44E29D30A6AB0_ftn) (HostTopologyInternal_tA95C0259BC91D8E3D227BAF3D4F7CEE5C5331E10 *, String_t*, int32_t);
	static NetworkTransport_AddWsHostInternal_mC1C24C4B573DA481ED99DB6C68B44E29D30A6AB0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_AddWsHostInternal_mC1C24C4B573DA481ED99DB6C68B44E29D30A6AB0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::AddWsHostInternal(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32)");
	int32_t retVal = _il2cpp_icall_func(___topologyInt0, ___ip1, ___port2);
	return retVal;
}
// System.Boolean UnityEngine.Networking.NetworkTransport::IsPortOpen(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_IsPortOpen_mDE9CADB4888CF273569A783CD842A22D921AAFB4 (String_t* ___ip0, int32_t ___port1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_IsPortOpen_mDE9CADB4888CF273569A783CD842A22D921AAFB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	String_t* G_B3_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_0 = TimeSpan_FromMilliseconds_m12D90542B044C450FDFBCEA1CBC32369479483EC((500.0), /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = ___ip0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_2 = ___ip0;
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
	}

IL_001b:
	{
		V_1 = G_B3_0;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_3 = (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE *)il2cpp_codegen_object_new(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE_il2cpp_TypeInfo_var);
			TcpClient__ctor_m04BD4EDA03D1AE7183FC99DB886BD93CF85D2F2C(L_3, /*hidden argument*/NULL);
			V_2 = L_3;
		}

IL_0023:
		try
		{ // begin try (depth: 2)
			{
				TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_4 = V_2;
				String_t* L_5 = V_1;
				int32_t L_6 = ___port1;
				NullCheck(L_4);
				RuntimeObject* L_7 = TcpClient_BeginConnect_mAF5D929DCA6FFD78BC0DE6E0F448B5F911CD8303(L_4, L_5, L_6, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)NULL, NULL, /*hidden argument*/NULL);
				V_3 = L_7;
				RuntimeObject* L_8 = V_3;
				NullCheck(L_8);
				WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * L_9 = InterfaceFuncInvoker0< WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * >::Invoke(1 /* System.Threading.WaitHandle System.IAsyncResult::get_AsyncWaitHandle() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, L_8);
				TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_10 = V_0;
				NullCheck(L_9);
				bool L_11 = VirtFuncInvoker1< bool, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  >::Invoke(12 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.TimeSpan) */, L_9, L_10);
				V_4 = L_11;
				bool L_12 = V_4;
				V_5 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
				bool L_13 = V_5;
				if (!L_13)
				{
					goto IL_004e;
				}
			}

IL_0048:
			{
				V_6 = (bool)0;
				IL2CPP_LEAVE(0x73, FINALLY_0059);
			}

IL_004e:
			{
				TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_14 = V_2;
				RuntimeObject* L_15 = V_3;
				NullCheck(L_14);
				TcpClient_EndConnect_m8A878839804034D19DA751A6FC9C11736017782D(L_14, L_15, /*hidden argument*/NULL);
				IL2CPP_LEAVE(0x64, FINALLY_0059);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0059;
		}

FINALLY_0059:
		{ // begin finally (depth: 2)
			{
				TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_16 = V_2;
				if (!L_16)
				{
					goto IL_0063;
				}
			}

IL_005c:
			{
				TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_17 = V_2;
				NullCheck(L_17);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_17);
			}

IL_0063:
			{
				IL2CPP_END_FINALLY(89)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(89)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x73, IL_0073)
			IL2CPP_JUMP_TBL(0x64, IL_0064)
		}

IL_0064:
		{
			goto IL_006e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0067;
		throw e;
	}

CATCH_0067:
	{ // begin catch(System.Object)
		V_6 = (bool)0;
		goto IL_0073;
	} // end catch (depth: 1)

IL_006e:
	{
		V_6 = (bool)1;
		goto IL_0073;
	}

IL_0073:
	{
		bool L_18 = V_6;
		return L_18;
	}
}
// System.String UnityEngine.Networking.NetworkTransport::GetConnectionInfo(System.Int32,System.Int32,System.Int32&,System.UInt64&,System.UInt16&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkTransport_GetConnectionInfo_m9C1C905E4C06B265514A87B380E4851795068A24 (int32_t ___hostId0, int32_t ___connectionId1, int32_t* ___port2, uint64_t* ___network3, uint16_t* ___dstNode4, uint8_t* ___error5, const RuntimeMethod* method)
{
	typedef String_t* (*NetworkTransport_GetConnectionInfo_m9C1C905E4C06B265514A87B380E4851795068A24_ftn) (int32_t, int32_t, int32_t*, uint64_t*, uint16_t*, uint8_t*);
	static NetworkTransport_GetConnectionInfo_m9C1C905E4C06B265514A87B380E4851795068A24_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_GetConnectionInfo_m9C1C905E4C06B265514A87B380E4851795068A24_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::GetConnectionInfo(System.Int32,System.Int32,System.Int32&,System.UInt64&,System.UInt16&,System.Byte&)");
	String_t* retVal = _il2cpp_icall_func(___hostId0, ___connectionId1, ___port2, ___network3, ___dstNode4, ___error5);
	return retVal;
}
// System.Void UnityEngine.Networking.NetworkTransport::GetConnectionInfo(System.Int32,System.Int32,System.String&,System.Int32&,UnityEngine.Networking.Types.NetworkID&,UnityEngine.Networking.Types.NodeID&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_GetConnectionInfo_m1550BA82DCB30A4FFDE4A7804BCBA43C65EDC214 (int32_t ___hostId0, int32_t ___connectionId1, String_t** ___address2, int32_t* ___port3, uint64_t* ___network4, uint16_t* ___dstNode5, uint8_t* ___error6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_GetConnectionInfo_m1550BA82DCB30A4FFDE4A7804BCBA43C65EDC214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		String_t** L_0 = ___address2;
		int32_t L_1 = ___hostId0;
		int32_t L_2 = ___connectionId1;
		int32_t* L_3 = ___port3;
		uint8_t* L_4 = ___error6;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		String_t* L_5 = NetworkTransport_GetConnectionInfo_m9C1C905E4C06B265514A87B380E4851795068A24(L_1, L_2, (int32_t*)L_3, (uint64_t*)(&V_0), (uint16_t*)(&V_1), (uint8_t*)L_4, /*hidden argument*/NULL);
		*((RuntimeObject **)L_0) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)L_5);
		uint64_t* L_6 = ___network4;
		uint64_t L_7 = V_0;
		*((int64_t*)L_6) = (int64_t)L_7;
		uint16_t* L_8 = ___dstNode5;
		uint16_t L_9 = V_1;
		*((int16_t*)L_8) = (int16_t)L_9;
		return;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::GetMaxPacketSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_GetMaxPacketSize_m98EE9A0A5FD4C30AEF12D0B7EE498B3043E929F1 (const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_GetMaxPacketSize_m98EE9A0A5FD4C30AEF12D0B7EE498B3043E929F1_ftn) ();
	static NetworkTransport_GetMaxPacketSize_m98EE9A0A5FD4C30AEF12D0B7EE498B3043E929F1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_GetMaxPacketSize_m98EE9A0A5FD4C30AEF12D0B7EE498B3043E929F1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::GetMaxPacketSize()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Boolean UnityEngine.Networking.NetworkTransport::RemoveHost(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_RemoveHost_m30AE2F5E95C285B9A206B7B7E3DF092E73FC4E76 (int32_t ___hostId0, const RuntimeMethod* method)
{
	typedef bool (*NetworkTransport_RemoveHost_m30AE2F5E95C285B9A206B7B7E3DF092E73FC4E76_ftn) (int32_t);
	static NetworkTransport_RemoveHost_m30AE2F5E95C285B9A206B7B7E3DF092E73FC4E76_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_RemoveHost_m30AE2F5E95C285B9A206B7B7E3DF092E73FC4E76_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::RemoveHost(System.Int32)");
	bool retVal = _il2cpp_icall_func(___hostId0);
	return retVal;
}
// System.Int32 UnityEngine.Networking.NetworkTransport::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_Connect_mAB9436F3762B46F3078AD6BC36AA49BD5E598588 (int32_t ___hostId0, String_t* ___address1, int32_t ___port2, int32_t ___exeptionConnectionId3, uint8_t* ___error4, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_Connect_mAB9436F3762B46F3078AD6BC36AA49BD5E598588_ftn) (int32_t, String_t*, int32_t, int32_t, uint8_t*);
	static NetworkTransport_Connect_mAB9436F3762B46F3078AD6BC36AA49BD5E598588_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_Connect_mAB9436F3762B46F3078AD6BC36AA49BD5E598588_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)");
	int32_t retVal = _il2cpp_icall_func(___hostId0, ___address1, ___port2, ___exeptionConnectionId3, ___error4);
	return retVal;
}
// System.Boolean UnityEngine.Networking.NetworkTransport::Disconnect(System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_Disconnect_mD0F2C28F6A7B17313F966C4D74FD84F7F4E3A015 (int32_t ___hostId0, int32_t ___connectionId1, uint8_t* ___error2, const RuntimeMethod* method)
{
	typedef bool (*NetworkTransport_Disconnect_mD0F2C28F6A7B17313F966C4D74FD84F7F4E3A015_ftn) (int32_t, int32_t, uint8_t*);
	static NetworkTransport_Disconnect_mD0F2C28F6A7B17313F966C4D74FD84F7F4E3A015_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_Disconnect_mD0F2C28F6A7B17313F966C4D74FD84F7F4E3A015_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::Disconnect(System.Int32,System.Int32,System.Byte&)");
	bool retVal = _il2cpp_icall_func(___hostId0, ___connectionId1, ___error2);
	return retVal;
}
// System.Boolean UnityEngine.Networking.NetworkTransport::Send(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_Send_m8D6D448EDCA5A74B58C5DC9DE1AEA7658C9FC0A7 (int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_Send_m8D6D448EDCA5A74B58C5DC9DE1AEA7658C9FC0A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___buffer3;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_2 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3(L_2, _stringLiteral603078036E4F6701B78C3C841B17DE1BD4B49EB7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NetworkTransport_Send_m8D6D448EDCA5A74B58C5DC9DE1AEA7658C9FC0A7_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___hostId0;
		int32_t L_4 = ___connectionId1;
		int32_t L_5 = ___channelId2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___buffer3;
		int32_t L_7 = ___size4;
		uint8_t* L_8 = ___error5;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		bool L_9 = NetworkTransport_SendWrapper_m2BEDC12E5B2E0AADC4E602DDEDA16552C29EBB5D(L_3, L_4, L_5, L_6, L_7, (uint8_t*)L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_10 = V_1;
		return L_10;
	}
}
// System.Boolean UnityEngine.Networking.NetworkTransport::SendWrapper(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_SendWrapper_m2BEDC12E5B2E0AADC4E602DDEDA16552C29EBB5D (int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method)
{
	typedef bool (*NetworkTransport_SendWrapper_m2BEDC12E5B2E0AADC4E602DDEDA16552C29EBB5D_ftn) (int32_t, int32_t, int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, uint8_t*);
	static NetworkTransport_SendWrapper_m2BEDC12E5B2E0AADC4E602DDEDA16552C29EBB5D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_SendWrapper_m2BEDC12E5B2E0AADC4E602DDEDA16552C29EBB5D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::SendWrapper(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)");
	bool retVal = _il2cpp_icall_func(___hostId0, ___connectionId1, ___channelId2, ___buffer3, ___size4, ___error5);
	return retVal;
}
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.NetworkTransport::ReceiveFromHost(System.Int32,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_ReceiveFromHost_mA71172AC0F63C20F82032607D4A807447AC3962A (int32_t ___hostId0, int32_t* ___connectionId1, int32_t* ___channelId2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer3, int32_t ___bufferSize4, int32_t* ___receivedSize5, uint8_t* ___error6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_ReceiveFromHost_mA71172AC0F63C20F82032607D4A807447AC3962A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___hostId0;
		int32_t* L_1 = ___connectionId1;
		int32_t* L_2 = ___channelId2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___buffer3;
		int32_t L_4 = ___bufferSize4;
		int32_t* L_5 = ___receivedSize5;
		uint8_t* L_6 = ___error6;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		int32_t L_7 = NetworkTransport_PopDataFromHost_mB17AEA581E92B7C403B4C14C01A796E55138D910(L_0, (int32_t*)L_1, (int32_t*)L_2, L_3, L_4, (int32_t*)L_5, (uint8_t*)L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::PopDataFromHost(System.Int32,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_PopDataFromHost_mB17AEA581E92B7C403B4C14C01A796E55138D910 (int32_t ___hostId0, int32_t* ___connectionId1, int32_t* ___channelId2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer3, int32_t ___bufferSize4, int32_t* ___receivedSize5, uint8_t* ___error6, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_PopDataFromHost_mB17AEA581E92B7C403B4C14C01A796E55138D910_ftn) (int32_t, int32_t*, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t*, uint8_t*);
	static NetworkTransport_PopDataFromHost_mB17AEA581E92B7C403B4C14C01A796E55138D910_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_PopDataFromHost_mB17AEA581E92B7C403B4C14C01A796E55138D910_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::PopDataFromHost(System.Int32,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)");
	int32_t retVal = _il2cpp_icall_func(___hostId0, ___connectionId1, ___channelId2, ___buffer3, ___bufferSize4, ___receivedSize5, ___error6);
	return retVal;
}
// System.Void UnityEngine.Networking.NetworkTransport::SetNetworkEventAvailableCallback(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_SetNetworkEventAvailableCallback_m9996DCB1B44D723DC6D555810D3A474B8A91B64F (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___callback0, const RuntimeMethod* method)
{
	typedef void (*NetworkTransport_SetNetworkEventAvailableCallback_m9996DCB1B44D723DC6D555810D3A474B8A91B64F_ftn) (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *);
	static NetworkTransport_SetNetworkEventAvailableCallback_m9996DCB1B44D723DC6D555810D3A474B8A91B64F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_SetNetworkEventAvailableCallback_m9996DCB1B44D723DC6D555810D3A474B8A91B64F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::SetNetworkEventAvailableCallback(System.Action`1<System.Int32>)");
	_il2cpp_icall_func(___callback0);
}
// System.Void UnityEngine.Networking.NetworkTransport::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_Cleanup_m7BF767E0AB80E628379B2AF924E109666794B6F0 (const RuntimeMethod* method)
{
	typedef void (*NetworkTransport_Cleanup_m7BF767E0AB80E628379B2AF924E109666794B6F0_ftn) ();
	static NetworkTransport_Cleanup_m7BF767E0AB80E628379B2AF924E109666794B6F0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_Cleanup_m7BF767E0AB80E628379B2AF924E109666794B6F0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::Cleanup()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Networking.NetworkTransport::SetConnectionReadyForSendCallback(System.Action`2<System.Int32,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_SetConnectionReadyForSendCallback_mD9660BB5DDC8630EBB844DC6A717D4F6CBF8EF05 (Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * ___callback0, const RuntimeMethod* method)
{
	typedef void (*NetworkTransport_SetConnectionReadyForSendCallback_mD9660BB5DDC8630EBB844DC6A717D4F6CBF8EF05_ftn) (Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 *);
	static NetworkTransport_SetConnectionReadyForSendCallback_mD9660BB5DDC8630EBB844DC6A717D4F6CBF8EF05_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_SetConnectionReadyForSendCallback_mD9660BB5DDC8630EBB844DC6A717D4F6CBF8EF05_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::SetConnectionReadyForSendCallback(System.Action`2<System.Int32,System.Int32>)");
	_il2cpp_icall_func(___callback0);
}
// System.Void UnityEngine.Networking.NetworkTransport::CheckTopology(UnityEngine.Networking.HostTopology)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_CheckTopology_mCA4CDEBBD3AA34CE15D5110586307B01EAD7C1AA (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * ___topology0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_CheckTopology_mCA4CDEBBD3AA34CE15D5110586307B01EAD7C1AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		int32_t L_0 = NetworkTransport_GetMaxPacketSize_m98EE9A0A5FD4C30AEF12D0B7EE498B3043E929F1(/*hidden argument*/NULL);
		V_0 = L_0;
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_1 = ___topology0;
		NullCheck(L_1);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_2 = HostTopology_get_DefaultConfig_m0E4C32CC256D7C901C1C91C86B38F33EBD03A0E3(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		uint16_t L_3 = ConnectionConfig_get_PacketSize_mF111FD026B1D2B89D5254278F879E81B3700AD87(L_2, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteralFB53011A10B004A1383FD0B7A61E675D7980F715, L_8, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_10 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NetworkTransport_CheckTopology_mCA4CDEBBD3AA34CE15D5110586307B01EAD7C1AA_RuntimeMethod_var);
	}

IL_002f:
	{
		V_2 = 0;
		goto IL_0085;
	}

IL_0033:
	{
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_11 = ___topology0;
		NullCheck(L_11);
		List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * L_12 = HostTopology_get_SpecialConnectionConfigs_m6FA6CF1CD59EBC0DBBB9454048EDDACE322C029C(L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_14 = List_1_get_Item_mA887125ECBEEA92DEE8520B227EFE1CBF3FB6434_inline(L_12, L_13, /*hidden argument*/List_1_get_Item_mA887125ECBEEA92DEE8520B227EFE1CBF3FB6434_RuntimeMethod_var);
		NullCheck(L_14);
		uint16_t L_15 = ConnectionConfig_get_PacketSize_mF111FD026B1D2B89D5254278F879E81B3700AD87(L_14, /*hidden argument*/NULL);
		int32_t L_16 = V_0;
		V_3 = (bool)((((int32_t)L_15) > ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0080;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral515E8DC0021BC9F0BE2285E066E0396A65CF1DE2);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral515E8DC0021BC9F0BE2285E066E0396A65CF1DE2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_19;
		int32_t L_21 = V_2;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_23);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = L_20;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteralEA9F88EAA400C7758A1C3CF48D8E6A867EF21B25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralEA9F88EAA400C7758A1C3CF48D8E6A867EF21B25);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = L_24;
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_28);
		String_t* L_29 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_25, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_30 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_30, L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, NetworkTransport_CheckTopology_mCA4CDEBBD3AA34CE15D5110586307B01EAD7C1AA_RuntimeMethod_var);
	}

IL_0080:
	{
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_0085:
	{
		int32_t L_32 = V_2;
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_33 = ___topology0;
		NullCheck(L_33);
		List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * L_34 = HostTopology_get_SpecialConnectionConfigs_m6FA6CF1CD59EBC0DBBB9454048EDDACE322C029C(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		int32_t L_35 = List_1_get_Count_m2C0EC005D5C06E5F178A8FB94D48DA905506D907_inline(L_34, /*hidden argument*/List_1_get_Count_m2C0EC005D5C06E5F178A8FB94D48DA905506D907_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_32) < ((int32_t)L_35))? 1 : 0);
		bool L_36 = V_4;
		if (L_36)
		{
			goto IL_0033;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransport::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport__cctor_mDB08DB01C3DE3EDE771ACE7C805808E30E306F9E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport__cctor_mDB08DB01C3DE3EDE771ACE7C805808E30E306F9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var))->set_s_nextSceneId_0(1);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return L_4;
	}
}
