// 函数名称: sub_60f460
// 虚拟地址: 0x60f460
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60f460(int32_t arg1, int32_t arg2, void* arg3, char* arg4, char* arg5, void* arg6, int32_t arg7, int32_t arg8, uint32_t arg9)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(arg9)
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(arg8)
    void* edi = arg6
    arg6 = arg3 + arg8
    int32_t ecx_1 = (eax_1 - edx) s>> 1
    int32_t esi = ecx_1 + arg8
    int32_t eax_10
    int32_t edx_2
    edx_2:eax_10 = sx.q(arg7)
    void* var_8 = edi
    void* edi_1 = edi + (esi << 3)
    int32_t i = (eax_10 - edx_2) s>> 1
    void* var_10 = edi_1
    
    if (i != 0)
        int32_t esi_1 = arg1
        int32_t ecx_5 = (esi * 3 + ecx_1) * 4
        int32_t ebx_1 = arg8
        
        do
            int32_t j = (eax_4 - edx_1) s>> 1
            
            if (j != 0)
                do
                    uint32_t edi_3 = zx.d(*arg5)
                    uint32_t eax_13 = zx.d(*arg4)
                    int32_t esi_2 = *(esi_1 + (edi_3 << 2) + 0xc00)
                    int32_t ebx_3 =
                        *(esi_1 + (edi_3 << 2) + 0x800) + *(esi_1 + (eax_13 << 2) + 0x400) + 0x400
                    arg4 = &arg4[1]
                    arg5 = &arg5[1]
                    uint32_t eax_15 = zx.d(*arg3)
                    int32_t edx_6 = *(esi_1 + (eax_13 << 2)) + 0x100
                    int32_t eax_18 = *(arg2 + ((eax_15 + esi_2 + 0x700) << 2))
                        | *(arg2 + ((ebx_3 + eax_15) << 2)) | *(arg2 + ((eax_15 + edx_6) << 2))
                    int32_t* edi_9 = var_8
                    edi_9[esi] = eax_18
                    *edi_9 = eax_18
                    uint32_t eax_19 = zx.d(*(arg3 + 1))
                    arg3 += 2
                    int32_t eax_22 = *(arg2 + ((eax_19 + esi_2 + 0x700) << 2))
                        | *(arg2 + ((ebx_3 + eax_19) << 2)) | *(arg2 + ((eax_19 + edx_6) << 2))
                    edi_9[1 + esi] = eax_22
                    edi_9[1] = eax_22
                    var_8 = &edi_9[2]
                    uint32_t eax_23 = zx.d(*arg6)
                    int32_t eax_26 = *(arg2 + ((eax_23 + esi_2 + 0x700) << 2))
                        | *(arg2 + ((ebx_3 + eax_23) << 2)) | *(arg2 + ((eax_23 + edx_6) << 2))
                    int32_t* edi_23 = var_10
                    edi_23[esi] = eax_26
                    *edi_23 = eax_26
                    uint32_t ebx_12 = zx.d(*(arg6 + 1))
                    arg6 += 2
                    int32_t eax_32 = *(arg2 + ((ebx_12 + esi_2 + 0x700) << 2))
                        | *(arg2 + ((ebx_3 + ebx_12) << 2)) | *(arg2 + ((ebx_12 + edx_6) << 2))
                    esi_1 = arg1
                    edi_23[esi + 1] = eax_32
                    j -= 1
                    edi_23[1] = eax_32
                    edi_1 = &edi_23[2]
                    var_10 = edi_1
                while (j != 0)
                
                ebx_1 = arg8
            
            var_8 += ecx_5
            arg3 += ebx_1
            arg6 += ebx_1
            edi_1 += ecx_5
            i -= 1
            var_10 = edi_1
        while (i != 0)
    
    return i
}
