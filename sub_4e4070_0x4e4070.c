// 函数名称: sub_4e4070
// 虚拟地址: 0x4e4070
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4e4070()
{
    // 第一条实际指令: EnterCriticalSection(data_26a44e0 + 0x268)
    EnterCriticalSection(data_26a44e0 + 0x268)
    void* ecx = data_26a44e0
    
    if (*(ecx + 0x260) - *(ecx + 0x264) s>= 8)
        sub_4c5680("too many queued notifications")
        ecx = data_26a44e0
    
    int32_t edx_2 = *(ecx + 0x260)
    int32_t eax_3 = edx_2 & 0x80000007
    
    if (eax_3 s< 0)
        eax_3 = ((eax_3 - 1) | 0xfffffff8) + 1
    
    *(ecx + 0x260) = edx_2 + 1
    sub_4c4590("Title")
    sub_4c4590("You have a new turn!")
    CRITICAL_SECTION* lpCriticalSection = data_26a44e0 + 0x268
    *(ecx + eax_3 * 0x4c + 0x48) = 0
    return LeaveCriticalSection(lpCriticalSection)
}
