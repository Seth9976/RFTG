// 函数名称: sub_5dd7d0
// 虚拟地址: 0x5dd7d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5dd7d0(void* arg1, int32_t arg2, int32_t arg3, uint32_t arg4)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x1c)
    int32_t ecx = *(arg1 + 0x1c)
    int32_t eax = *(arg1 + 0x20)
    uint32_t result = arg4
    
    if (arg3 * result + ecx u> eax)
        result = divu.dp.d(0:(eax - ecx), arg3)
    
    int32_t esi_1 = arg3 * result
    int32_t var_14 = esi_1
    int32_t var_18 = arg2
    int32_t var_1c = ecx
    sub_5cd110()
    *(arg1 + 0x1c) += esi_1
    return result
}
