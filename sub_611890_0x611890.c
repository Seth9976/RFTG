// 函数名称: sub_611890
// 虚拟地址: 0x611890
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_611890(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int128_t* esi = arg1
    int32_t result = arg5
    int32_t result_1 = result
    int32_t result_2 = result
    int32_t result_3 = result
    
    if (arg6 != 0)
        int128_t xmm0_1 = result.o
        
        do
            int32_t ecx = arg3 << 2
            arg6 -= 1
            int128_t* edi_1 = esi
            
            if (ecx s> 0x3f)
                if (0x10 - (esi & 0xf) s< 0x10)
                    ecx -= 0x10 - (esi & 0xf)
                    int32_t eax_1
                    int32_t edx_3
                    edx_3:eax_1 = sx.q(0x10 - (esi & 0xf))
                    int32_t edx_6 = ((edx_3 & 3) + eax_1) s>> 2
                    
                    if (edx_6 != 0)
                        int32_t ecx_2
                        int32_t edi_2
                        edi_2, ecx_2 = __memfill_u32(edi_1, arg5, edx_6)
                        edi_1 = esi + (edx_6 << 2)
                
                int32_t eax_4
                int32_t edx_7
                edx_7:eax_4 = sx.q(ecx)
                int32_t j_1 = (eax_4 + (edx_7 & 0x3f)) s>> 6
                
                if (j_1 != 0)
                    int32_t j
                    
                    do
                        *edi_1 = xmm0_1
                        edi_1[1] = xmm0_1
                        edi_1[2] = xmm0_1
                        edi_1[3] = xmm0_1
                        edi_1 = &edi_1[4]
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                
                result = arg5
            
            if ((ecx.b & 0x3f) != 0)
                int32_t ecx_4 = ecx s>> 2 & 0xf
                int32_t ecx_5
                int32_t edi_3
                
                if (ecx_4 != 0)
                    edi_3, ecx_5 = __memfill_u32(edi_1, result, ecx_4)
            
            esi += arg4
        while (arg6 != 0)
    
    return result
}
