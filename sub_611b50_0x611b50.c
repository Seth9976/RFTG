// 函数名称: sub_611b50
// 虚拟地址: 0x611b50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_611b50(int64_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int64_t* esi = arg1
    int32_t result = arg3
    int32_t result_1 = result
    int64_t st0 = result.q
    
    if (arg5 != 0)
        result = arg4
        int32_t ecx_1 = result << 2
        
        do
            int32_t ecx_2 = ecx_1
            arg5 -= 1
            int64_t* edi_1 = esi
            
            if (ecx_2 s> 0x3f)
                if (8 - (esi & 7) s< 8)
                    ecx_2 -= 8 - (esi & 7)
                    int32_t eax_1
                    int32_t edx_3
                    edx_3:eax_1 = sx.q(8 - (esi & 7))
                    int32_t edx_6 = ((edx_3 & 3) + eax_1) s>> 2
                    
                    if (edx_6 != 0)
                        int32_t ecx_4
                        int32_t edi_2
                        edi_2, ecx_4 = __memfill_u32(edi_1, arg3, edx_6)
                        edi_1 = esi + (edx_6 << 2)
                
                int32_t eax_4
                int32_t edx_7
                edx_7:eax_4 = sx.q(ecx_2)
                result = (eax_4 + (edx_7 & 0x3f)) s>> 6
                
                if (result != 0)
                    int32_t j
                    
                    do
                        *edi_1 = st0
                        edi_1[1] = st0
                        edi_1[2] = st0
                        edi_1[3] = st0
                        edi_1[4] = st0
                        edi_1[5] = st0
                        edi_1[6] = st0
                        edi_1[7] = st0
                        edi_1 = &edi_1[8]
                        j = result
                        result -= 1
                    while (j != 1)
            
            if ((ecx_2.b & 0x3f) != 0)
                int32_t ecx_6 = ecx_2 s>> 2 & 0xf
                
                if (ecx_6 != 0)
                    result = arg3
                    int32_t ecx_7
                    int32_t edi_3
                    edi_3, ecx_7 = __memfill_u32(edi_1, result, ecx_6)
            
            esi += arg2
        while (arg5 != 0)
    
    return result
}
