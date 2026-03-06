// 函数名称: sub_5d2850
// 虚拟地址: 0x5d2850
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5d2850(void* arg1)
{
    // 第一条实际指令: int32_t* eax = *(arg1 + 0xa0)
    int32_t* eax = *(arg1 + 0xa0)
    waveOutWrite(*eax, &eax[eax[0x14] * 8 + 4], 0x20)
    void* result = *(arg1 + 0xa0)
    int32_t ecx_4 = (*(result + 0x50) + 1) & 0x80000001
    
    if (ecx_4 s< 0)
        ecx_4 = ((ecx_4 - 1) | 0xfffffffe) + 1
    
    *(result + 0x50) = ecx_4
    return result
}
