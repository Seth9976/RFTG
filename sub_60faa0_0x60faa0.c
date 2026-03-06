// 函数名称: sub_60faa0
// 虚拟地址: 0x60faa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60faa0(int32_t arg1, int32_t arg2, void* arg3, char* arg4, char* arg5, void* arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(arg8)
    int32_t i = arg7
    void* edi = arg6
    int32_t j = (eax_1 - edx) s>> 1
    int32_t j_1 = j
    arg6 = edi
    
    if (i != 0)
        int32_t esi_1 = arg1
        
        do
            i -= 1
            
            if (j != 0)
                do
                    uint32_t edi_2 = zx.d(*arg5)
                    uint32_t eax_4 = zx.d(*arg4)
                    int32_t ebx_2 =
                        *(esi_1 + (edi_2 << 2) + 0x800) + *(esi_1 + (eax_4 << 2) + 0x400) + 0x400
                    arg4 = &arg4[4]
                    arg5 = &arg5[4]
                    uint32_t eax_6 = zx.d(*arg3)
                    int32_t esi_3 = *(esi_1 + (edi_2 << 2) + 0xc00) + 0x700
                    int32_t edi_5
                    edi_5.w = *(arg2 + ((eax_6 + esi_3) << 2))
                    edi_5.w |= *(arg2 + ((ebx_2 + eax_6) << 2))
                    int32_t edx_3 = *(esi_1 + (eax_4 << 2)) + 0x100
                    edi_5.w |= *(arg2 + ((eax_6 + edx_3) << 2))
                    int32_t ebx_3
                    ebx_3.w = edi_5.w
                    int16_t* edi_6 = arg6
                    *edi_6 = ebx_3.w
                    uint32_t eax_8 = zx.d(*(arg3 + 2))
                    int32_t esi_4
                    esi_4.w = *(arg2 + ((esi_3 + eax_8) << 2))
                    arg3 += 4
                    esi_4.w |= *(arg2 + ((ebx_2 + eax_8) << 2))
                    esi_4.w |= *(arg2 + ((eax_8 + edx_3) << 2))
                    j -= 1
                    edi_6[1] = esi_4.w
                    esi_1 = arg1
                    edi = &edi_6[2]
                    arg6 = edi
                while (j != 0)
                
                j = j_1
            
            edi += arg9 * 2
            arg6 = edi
        while (i != 0)
    
    return j
}
