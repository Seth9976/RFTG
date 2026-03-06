// 函数名称: sub_6117a0
// 虚拟地址: 0x6117a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6117a0(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t result = arg3
    int128_t* esi = arg1
    int32_t result_1 = result
    int32_t result_2 = result
    int32_t result_3 = result
    int32_t result_4 = result
    
    if (arg5 != 0)
        result = arg4
        int128_t xmm0_1 = result_1.o
        void* ecx_1 = result * 2
        
        do
            void* ecx_2 = ecx_1
            arg5 -= 1
            int128_t* edi_1 = esi
            
            if (ecx_2 s> 0x3f)
                if (0x10 - (esi & 0xf) s< 0x10)
                    ecx_2 -= 0x10 - (esi & 0xf)
                    int32_t eax_1
                    int32_t edx_3
                    edx_3:eax_1 = sx.q(0x10 - (esi & 0xf))
                    int32_t edx_5 = (eax_1 - edx_3) s>> 1
                    
                    if (edx_5 != 0)
                        uint32_t esi_1 = zx.d(arg3.w)
                        uint32_t eax_5 = esi_1 | esi_1 << 0x10
                        esi = arg1
                        int32_t ecx_5
                        int32_t edi_2
                        edi_2, ecx_5 = __memfill_u32(edi_1, eax_5, edx_5 u>> 1)
                        int32_t ecx_7
                        int32_t edi_3
                        edi_3, ecx_7 =
                            __memfill_u16(edi_2, eax_5.w, adc.d(ecx_5, ecx_5, (edx_5 & 1) != 0))
                        edi_1 = esi + (edx_5 << 1)
                
                int32_t eax_7
                int32_t edx_6
                edx_6:eax_7 = sx.q(ecx_2)
                result = (eax_7 + (edx_6 & 0x3f)) s>> 6
                
                if (result != 0)
                    int32_t j
                    
                    do
                        *edi_1 = xmm0_1
                        edi_1[1] = xmm0_1
                        edi_1[2] = xmm0_1
                        edi_1[3] = xmm0_1
                        edi_1 = &edi_1[4]
                        j = result
                        result -= 1
                    while (j != 1)
            
            if ((ecx_2.b & 0x3f) != 0)
                int32_t ecx_9 = ecx_2 s>> 1 & 0x1f
                
                if (ecx_9 != 0)
                    uint32_t edx_8 = zx.d(arg3.w)
                    result = edx_8 | edx_8 << 0x10
                    int32_t ecx_11
                    int32_t edi_4
                    edi_4, ecx_11 = __memfill_u32(edi_1, result, ecx_9 u>> 1)
                    int32_t ecx_13
                    int32_t edi_5
                    edi_5, ecx_13 =
                        __memfill_u16(edi_4, result.w, adc.d(ecx_11, ecx_11, (ecx_9 & 1) != 0))
            
            esi += arg2
            arg1 = esi
        while (arg5 != 0)
    
    return result
}
