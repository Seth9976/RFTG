// 函数名称: sub_5dd770
// 虚拟地址: 0x5dd770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5dd770(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t esi_1 = arg3 * arg4
    int32_t esi_1 = arg3 * arg4
    
    if (arg4 == 0 || arg3 == 0 || divu.dp.d(0:esi_1, arg4) != arg3)
        return 0
    
    int32_t ecx_1 = *(arg1 + 0x1c)
    int32_t eax_4 = *(arg1 + 0x20) - ecx_1
    
    if (esi_1 u> eax_4)
        esi_1 = eax_4
    
    int32_t var_14 = esi_1
    int32_t var_18 = ecx_1
    int32_t var_1c = arg2
    sub_5cd110()
    *(arg1 + 0x1c) += esi_1
    return divu.dp.d(0:esi_1, arg3)
}
