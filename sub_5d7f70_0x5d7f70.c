// 函数名称: sub_5d7f70
// 虚拟地址: 0x5d7f70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_5d7f70(int32_t arg1, void* arg2, char* arg3, char* arg4, char* arg5, char* arg6)
{
    // 第一条实际指令: int32_t* edx = *(arg2 + 4)
    int32_t* edx = *(arg2 + 4)
    
    if (edx == 0)
        *arg3 = *(((*(arg2 + 0xc) & arg1) u>> *(arg2 + 0x20)) + (&data_8bac68)[zx.d(*(arg2 + 0x1c))])
        *arg4 = *(((*(arg2 + 0x10) & arg1) u>> *(arg2 + 0x21)) + (&data_8bac68)[zx.d(*(arg2 + 0x1d))])
        *arg5 = *(((*(arg2 + 0x14) & arg1) u>> *(arg2 + 0x22)) + (&data_8bac68)[zx.d(*(arg2 + 0x1e))])
        int32_t eax_1 = (&data_8bac68)[zx.d(*(arg2 + 0x1f))]
        *arg6 = *(((*(arg2 + 0x18) & arg1) u>> *(arg2 + 0x23)) + eax_1)
        return eax_1
    
    if (arg1 u>= *edx)
        *arg6 = 0
        *arg5 = 0
        *arg4 = 0
        *arg3 = 0
        return arg5
    
    *arg3 = *(edx[1] + (arg1 << 2))
    *arg4 = *(*(*(arg2 + 4) + 4) + (arg1 << 2) + 1)
    *arg5 = *(*(*(arg2 + 4) + 4) + (arg1 << 2) + 2)
    void* eax_2
    eax_2.b = *(*(*(arg2 + 4) + 4) + (arg1 << 2) + 3)
    *arg6 = eax_2.b
    return eax_2
}
