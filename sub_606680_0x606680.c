// 函数名称: sub_606680
// 虚拟地址: 0x606680
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_606680(int32_t arg1, int32_t* arg2, int32_t arg3, void* arg4, void* arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (arg3 s<= 0)
        return arg3 << 2
    
    int32_t* ecx_1 = arg2
    int32_t* esi_1 = arg1 - ecx_1
    arg1 = arg3
    int32_t i
    
    do
        int32_t esi_2 = *ecx_1
        uint16_t edi_4 =
            ((*(arg4 + 0x14) & esi_2) u>> *(arg4 + 0x22) u>> *(arg5 + 0x1e)).w << *(arg5 + 0x22)
            | ((*(arg4 + 0x10) & esi_2) u>> *(arg4 + 0x21) u>> *(arg5 + 0x1d)).w << *(arg5 + 0x21)
        uint32_t edi_5 = zx.d(edi_4)
            | zx.d(((*(arg4 + 0xc) & esi_2) u>> *(arg4 + 0x20) u>> *(arg5 + 0x1c)).w << *(arg5 + 0x20))
            | zx.d(*(arg5 + 0x18))
        *(esi_1 + arg2) = ((((*(arg4 + 0x18) & esi_2) u>> *(arg4 + 0x23) & 0xf8)
            | (edi_5 & 0x3e0) << 0xe) * 4) | (edi_5 & 0xfc1f)
        ecx_1 = &arg2[1]
        i = arg1
        arg1 -= 1
        arg2 = ecx_1
    while (i != 1)
    return arg3 * 4
}
