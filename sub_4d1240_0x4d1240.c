// 函数名称: sub_4d1240
// 虚拟地址: 0x4d1240
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4d1240(void* arg1)
{
    // 第一条实际指令: int32_t esi
    int32_t esi
    void** eax_1 = sub_4d11f0(arg1 + 0x518, esi)
    int32_t edx
    
    if (eax_1 != 0)
        return sub_4d2a30(arg1 + 0x518, edx, eax_1) __tailcall
    sub_4c5870("listIter", &data_83f3d3, "NetSync.cpp", 0x16e, 
        "NetSync::HostRemoveClientWithoutDisconnecting")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
