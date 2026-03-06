// 函数名称: sub_433850
// 虚拟地址: 0x433850
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_433850(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: if (arg2 != *(data_27e7a40 + 0x74))
    if (arg2 != *(data_27e7a40 + 0x74))
        int32_t var_34 = arg4
        void var_28
        int32_t eax_3
        int80_t result
        result, eax_3 = sub_433000(arg3, arg2, arg5, &var_28, arg3)
        int32_t entry_ebx
        __builtin_memcpy(entry_ebx, eax_3, 0x20)
        return result
    
    sub_4c5870("who != gCClient->localPlayerWho", &data_83f3d3, "..\code\RFTGClient.cpp", 0x265d, 
        "VROpponentTableauTakeover")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
