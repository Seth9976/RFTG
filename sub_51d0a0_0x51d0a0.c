// 函数名称: sub_51d0a0
// 虚拟地址: 0x51d0a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_51d0a0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* ecx_1 = data_30786fc
    uint32_t eax_2 = *(ecx_1 + 0x5e20698)
    void* edx_4
    float* esi
    
    if (eax_2 != 0x28)
        void* edx_9 = mods.dp.d(sx.q(*(ecx_1 + 0x5e01280) + eax_2 + 1), 0x28) * 0x259a10 + ecx_1
        esi = edx_9 + arg1 * 0x10 + 0x24a00c
        edx_4 = (arg2 << 4) + edx_9 + 0x24a00c
    else
        esi = ecx_1 + arg1 * 0x1c + 0x5e0128c
        edx_4 = ecx_1 + arg2 * 0x1c + 0x5e0128c
    
    if (*(ecx_1 + 0x5e206b0) == 0)
    label_51d13b:
        int32_t ecx_2 = *(ecx_1 + 0x5e20690)
        int32_t eax_9
        long double x87_r6_2
        long double x87_r7_2
        
        if (ecx_2 == 1)
            long double x87_r7_1 = fconvert.t(*esi)
            long double x87_r6_1 = fconvert.t(*edx_4)
            x87_r6_1 - x87_r7_1
            eax_2.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (p_1)
                x87_r7_2 = fconvert.t(*esi)
                x87_r6_2 = fconvert.t(*edx_4)
            label_51d157:
                x87_r6_2 - x87_r7_2
                eax_2.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
                
                if ((eax_2:1.b & 0x41) != 0)
                    eax_9.b = arg1 s> arg2
                    return eax_9
                
                eax_2.b = 0
                return eax_2
        else if (ecx_2 == 4)
            long double x87_r7_3 = fconvert.t(esi[3])
            long double x87_r6_3 = fconvert.t(*(edx_4 + 0xc))
            x87_r6_3 - x87_r7_3
            eax_2.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
            bool p_2 = unimplemented  {test ah, 0x5}
            
            if (p_2)
                x87_r7_2 = fconvert.t(esi[3])
                x87_r6_2 = fconvert.t(*(edx_4 + 0xc))
                goto label_51d157
        else if (ecx_2 == 0)
            long double x87_r7_4 = fconvert.t(esi[1])
            long double x87_r6_4 = fconvert.t(*(edx_4 + 4))
            x87_r6_4 - x87_r7_4
            eax_2.w = (x87_r6_4 < x87_r7_4 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_4, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_4 == x87_r7_4 ? 1 : 0) << 0xe
            bool p_3 = unimplemented  {test ah, 0x5}
            
            if (p_3)
                x87_r7_2 = fconvert.t(esi[1])
                x87_r6_2 = fconvert.t(*(edx_4 + 4))
                goto label_51d157
        else if (ecx_2 != 2)
            if (ecx_2 != 3)
                sub_4c5870("Halt", &data_83f3d3, "PerfEvent.cpp", 0x256, "ProfilerSortFunc")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            eax_2 = sub_5a9697(*(ecx_1 + arg1 * 0x1c + 0x5e01284), *(ecx_1 + arg2 * 0x1c + 0x5e01284))
            
            if (eax_2 s>= 0)
                if (eax_2 s> 0)
                    eax_2.b = 0
                    return eax_2
                
                eax_2 =
                    sub_5a9697(*(ecx_1 + arg1 * 0x1c + 0x5e01288), *(ecx_1 + arg2 * 0x1c + 0x5e01288))
                
                if (eax_2 s>= 0)
                    if (eax_2 s> 0)
                        eax_2.b = 0
                        return eax_2
                    
                    eax_9.b = arg1 s> arg2
                    return eax_9
        else
            int32_t esi_1 = esi[2]
            int32_t edx_10 = *(edx_4 + 8)
            
            if (esi_1 s<= edx_10)
                if (esi_1 s< edx_10)
                    eax_2.b = 0
                    return eax_2
                
                eax_9.b = arg1 s> arg2
                return eax_9
    else
        eax_2 = *(ecx_1 + 0x5e206b4)
        
        if (eax_2 != arg1)
            if (eax_2 != arg2)
                goto label_51d13b
            
            eax_2.b = 0
            return eax_2
    
    eax_2.b = 1
    return eax_2
}
