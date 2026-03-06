// 函数名称: sub_5a5680
// 虚拟地址: 0x5a5680
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_5a5680(void* arg1 @ esi, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x40)
    int32_t eax = *(arg1 + 0x40)
    void* ecx = *(arg1 + 0x44)
    float* edx = *(arg1 + 0x14)
    int32_t ebx = *(arg1 + 0x1c)
    int32_t eax_1 = *(arg1 + 0x10)
    float* eax_2 = *(arg1 + 0x60) + (*(arg1 + 0x4c) << 1)
    int32_t ecx_2 = *(arg1 + 0xb0)
    uint32_t edi_1 = *(arg1 + 0xa0) u>> 2
    
    if (*(arg1 + 0xac) s>= 0 && arg2 s> *(arg1 + 0xa4))
        while (true)
            int32_t ecx_3 = *(arg1 + 0xa4)
            
            if (ecx_3 s>= 0 && ecx_3 s< *(arg1 + 0x18))
                float* edx_6 = ecx_2 + ((*(arg1 + 0xac) * edi_1) << 2)
                int16_t x87control = sub_5a37e0(edx, edx_6, ecx_3 * ebx + eax_1, x87control, arg1, edx, 
                    edx_6, eax, ecx, eax_2)
            
            int32_t eax_7 = *(arg1 + 0xa4)
            
            if (eax_7 == *(arg1 + 0xa8))
                eax_2 = nullptr
                *(arg1 + 0xac) = 0xffffffff
                *(arg1 + 0xa4) = 0
                *(arg1 + 0xa8) = 0
                break
            
            *(arg1 + 0xa4) = eax_7 + 1
            int32_t eax_11
            int32_t edx_7
            edx_7:eax_11 = sx.q(*(arg1 + 0xac) + 1)
            int32_t temp0_1 = divs.dp.d(edx_7:eax_11, *(arg1 + 0x8c))
            *(arg1 + 0xac) = mods.dp.d(edx_7:eax_11, *(arg1 + 0x8c))
            
            if (arg2 s<= *(arg1 + 0xa4))
                return temp0_1
    
    return eax_2
}
