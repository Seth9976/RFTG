// 函数名称: sub_606870
// 虚拟地址: 0x606870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_606870(int32_t arg1, int32_t* arg2, int32_t arg3, void* arg4, void* arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (arg3 s<= 0)
        return arg3 << 2
    
    int32_t* ecx_1 = arg2
    void* esi_1 = arg1 - ecx_1
    arg1 = arg3
    int32_t i
    
    do
        int32_t esi_2 = *ecx_1
        uint32_t edi_6 =
            (*(arg4 + 0x18) & esi_2) u>> *(arg4 + 0x23) u>> *(arg5 + 0x1f) << *(arg5 + 0x23)
            | (*(arg4 + 0x14) & esi_2) u>> *(arg4 + 0x22) u>> *(arg5 + 0x1e) << *(arg5 + 0x22)
        ecx_1 = &arg2[1]
        arg2 = ecx_1
        uint32_t edi_8 = edi_6
            | (*(arg4 + 0x10) & esi_2) u>> *(arg4 + 0x21) u>> *(arg5 + 0x1d) << *(arg5 + 0x21)
            | (*(arg4 + 0xc) & esi_2) u>> *(arg4 + 0x20) u>> *(arg5 + 0x1c) << *(arg5 + 0x20)
        i = arg1
        arg1 -= 1
        *(esi_1 + ecx_1 - 4) = edi_8
    while (i != 1)
    return arg3 * 4
}
