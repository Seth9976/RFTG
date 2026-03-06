// 函数名称: sub_60ef90
// 虚拟地址: 0x60ef90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60ef90(int32_t arg1, int32_t arg2, void* arg3, char* arg4, char* arg5, uint32_t arg6, int32_t arg7, void* arg8, void* arg9)
{
    // 第一条实际指令: void* ebx = arg8
    void* ebx = arg8
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(ebx)
    void* edi = arg6
    void* var_8 = edi
    void* edi_1 = edi + ((ebx + arg9) << 1)
    void* ecx_1 = ebx + (arg9 << 1)
    arg9 = arg3 + ebx
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 = sx.q(arg7)
    int32_t i = (eax_6 - edx_3) s>> 1
    void* var_c = edi_1
    
    if (i != 0)
        int32_t ecx_2 = ecx_1 * 2
        int32_t esi_1 = arg1
        
        do
            int32_t j = (eax_1 - edx) s>> 1
            
            if (j != 0)
                do
                    uint32_t edi_3 = zx.d(*arg5)
                    uint32_t eax_9 = zx.d(*arg4)
                    int32_t eax_11 =
                        *(esi_1 + (edi_3 << 2) + 0x800) + *(esi_1 + (eax_9 << 2) + 0x400) + 0x400
                    int32_t esi_3 = *(esi_1 + (edi_3 << 2) + 0xc00) + 0x700
                    arg4 = &arg4[1]
                    arg5 = &arg5[1]
                    uint32_t edi_4 = zx.d(*arg3)
                    int32_t edx_7 = *(esi_1 + (eax_9 << 2)) + 0x100
                    int16_t* edi_8 = var_8
                    *edi_8 = *(arg2 + ((edi_4 + esi_3) << 2)) | *(arg2 + ((edi_4 + eax_11) << 2))
                        | *(arg2 + ((edi_4 + edx_7) << 2))
                    uint32_t edi_10 = zx.d(*(arg3 + 1))
                    arg3 += 2
                    edi_8[1] = *(arg2 + ((edi_10 + esi_3) << 2)) | *(arg2 + ((edi_10 + eax_11) << 2))
                        | *(arg2 + ((edi_10 + edx_7) << 2))
                    var_8 = &edi_8[2]
                    uint32_t edi_16 = zx.d(*arg9)
                    int16_t* edi_20 = var_c
                    *edi_20 = *(arg2 + ((edi_16 + esi_3) << 2)) | *(arg2 + ((edi_16 + eax_11) << 2))
                        | *(arg2 + ((edi_16 + edx_7) << 2))
                    uint32_t ebx_15 = zx.d(*(arg9 + 1))
                    arg9 += 2
                    int32_t esi_4
                    esi_4.w = *(arg2 + ((esi_3 + ebx_15) << 2))
                    esi_4.w |= *(arg2 + ((eax_11 + ebx_15) << 2))
                    arg6 = ebx_15
                    esi_4.w |= *(arg2 + ((ebx_15 + edx_7) << 2))
                    j -= 1
                    edi_20[1] = esi_4.w
                    esi_1 = arg1
                    edi_1 = &edi_20[2]
                    var_c = edi_1
                while (j != 0)
                
                ebx = arg8
            
            var_8 += ecx_2
            arg3 += ebx
            arg9 += ebx
            edi_1 += ecx_2
            i -= 1
            var_c = edi_1
        while (i != 0)
    
    return i
}
