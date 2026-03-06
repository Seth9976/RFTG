// 函数名称: sub_6063d0
// 虚拟地址: 0x6063d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6063d0(void* arg1, int32_t* arg2, int32_t arg3, void* arg4, void* arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (arg3 s<= 0)
        return arg3 * 2
    
    int32_t i_1 = arg3
    int32_t i
    
    do
        int32_t esi_1 = *arg2
        uint32_t edx_3
        edx_3.b =
            *(((esi_1 & *(arg4 + 0x14)) u>> *(arg4 + 0x22)) + (&data_8bac68)[zx.d(*(arg4 + 0x1e))])
        edx_3.b u>>= *(arg5 + 0x1e)
        arg2 = &arg2[1]
        void* ecx_19 = arg1 + 2
        arg1 = ecx_19
        i = i_1
        i_1 -= 1
        *(ecx_19 - 2) = zx.w(edx_3.b) << *(arg5 + 0x22) | zx.w(
            *(((esi_1 & *(arg4 + 0x10)) u>> *(arg4 + 0x21)) + (&data_8bac68)[zx.d(*(arg4 + 0x1d))])
            u>> *(arg5 + 0x1d)) << *(arg5 + 0x21) | zx.w(
            *(((esi_1 & *(arg4 + 0xc)) u>> *(arg4 + 0x20)) + (&data_8bac68)[zx.d(*(arg4 + 0x1c))])
            u>> *(arg5 + 0x1c)) << *(arg5 + 0x20) | *(arg5 + 0x18)
    while (i != 1)
    return arg3 * 2
}
