// 函数名称: sub_5d29b0
// 虚拟地址: 0x5d29b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d29b0(int16_t* arg1 @ esi, int32_t* arg2 @ edi, uint32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_c = 0x12
    int32_t var_c = 0x12
    int32_t var_10 = 0
    int16_t* var_14 = arg1
    sub_5cd100()
    
    if ((arg2[1].w & 0x100) == 0)
        *arg1 = 1
    else
        *arg1 = 3
    
    arg1[7] = arg2[1].w & 0xff
    uint16_t edx = zx.w(*(arg2 + 6))
    arg1[1] = edx
    *(arg1 + 4) = *arg2
    int32_t eax_1
    eax_1.w = arg1[7]
    eax_1.w u>>= 3
    eax_1.w *= edx
    int32_t ecx_1 = zx.d(eax_1.w) * *(arg1 + 4)
    arg1[6] = eax_1.w
    *(arg1 + 8) = ecx_1
    
    if (arg4 == 0)
        uint32_t eax_6 = waveOutOpen(nullptr, arg3, arg1, 0, 0, WAVE_FORMAT_QUERY)
        int32_t eax_7 = neg.d(eax_6)
        return sbb.d(eax_7, eax_7, eax_6 != 0) + 1
    
    uint32_t eax_2 = waveInOpen(nullptr, arg3, arg1, 0, 0, WAVE_FORMAT_QUERY)
    int32_t eax_3 = neg.d(eax_2)
    return sbb.d(eax_3, eax_3, eax_2 != 0) + 1
}
