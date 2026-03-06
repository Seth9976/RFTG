// 函数名称: sub_4e3d60
// 虚拟地址: 0x4e3d60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4e3d60(void* arg1)
{
    // 第一条实际指令: EnterCriticalSection(data_26a44e0 + 0x268)
    EnterCriticalSection(data_26a44e0 + 0x268)
    void* eax_2 = data_26a44e0
    int32_t ecx = *(eax_2 + 0x264)
    
    if (*(eax_2 + 0x260) == ecx)
        LeaveCriticalSection(eax_2 + 0x268)
        int32_t eax_4
        eax_4.b = 0
        return eax_4
    
    int32_t ecx_1 = ecx & 0x80000007
    
    if (ecx_1 s< 0)
        ecx_1 = ((ecx_1 - 1) | 0xfffffff8) + 1
    
    sub_4e3df0(arg1, ecx_1 * 0x4c + eax_2)
    void* eax_5 = data_26a44e0
    *(eax_5 + 0x264) += 1
    LeaveCriticalSection(eax_5 + 0x268)
    int32_t eax_7
    eax_7.b = 1
    return eax_7
}
