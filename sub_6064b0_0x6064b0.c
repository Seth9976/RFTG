// 函数名称: sub_6064b0
// 虚拟地址: 0x6064b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6064b0(void* arg1, int16_t* arg2, void* arg3, void* arg4, void* arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* edx = arg5
    int32_t eax_1 = *(edx + 0x18)
    int32_t eax_2 = neg.d(eax_1)
    
    if (arg3 s<= 0)
        return arg3 * 2
    
    arg5 = arg3
    void* i
    
    do
        uint32_t esi_1 = zx.d(*arg2)
        arg2 = &arg2[1]
        void* ecx_21 = arg1 + 4
        arg1 = ecx_21
        i = arg5
        arg5 -= 1
        *(ecx_21 - 4) =
            zx.d(*(((esi_1 & *(arg4 + 0xc)) u>> *(arg4 + 0x1a)) + (&data_8bac68)[zx.d(*(arg4 + 0x16))]))
            u>> *(edx + 0x1e) << *(edx + 0x22) |
            zx.d(*(((*(arg4 + 8) & esi_1) u>> *(arg4 + 0x19)) + (&data_8bac68)[zx.d(*(arg4 + 0x15))]))
            u>> *(edx + 0x1d) << *(edx + 0x21) |
            zx.d(*(((*(arg4 + 4) & esi_1) u>> *(arg4 + 0x18)) + (&data_8bac68)[zx.d(*(arg4 + 0x14))]))
            u>> *(edx + 0x1c) << *(edx + 0x20)
            | zx.d((sbb.d(eax_2, eax_2, eax_1 != 0)).b) u>> *(edx + 0x1f) << *(edx + 0x23)
    while (i != 1)
    return arg3 * 2
}
