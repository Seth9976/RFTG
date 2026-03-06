// 函数名称: sub_60f2e0
// 虚拟地址: 0x60f2e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60f2e0(int32_t arg1, int32_t arg2, void* arg3, char* arg4, char* arg5, uint32_t arg6, int32_t arg7, void* arg8, void* arg9)
{
    // 第一条实际指令: void* ebx = arg8
    void* ebx = arg8
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(ebx)
    void* edi = arg6
    void* var_8 = edi
    void* edi_1 = edi + ((ebx + arg9) << 2)
    void* ecx_1 = ebx + (arg9 << 1)
    arg9 = arg3 + ebx
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 = sx.q(arg7)
    int32_t i = (eax_6 - edx_3) s>> 1
    void* var_c = edi_1
    
    if (i != 0)
        int32_t ecx_3 = ecx_1 * 4
        int32_t esi_1 = arg1
        void* edi_2 = edi_1
        
        do
            int32_t j = (eax_1 - edx) s>> 1
            
            if (j != 0)
                do
                    uint32_t edi_4 = zx.d(*arg5)
                    uint32_t eax_9 = zx.d(*arg4)
                    int32_t eax_11 =
                        *(esi_1 + (edi_4 << 2) + 0x800) + *(esi_1 + (eax_9 << 2) + 0x400) + 0x400
                    int32_t esi_3 = *(esi_1 + (edi_4 << 2) + 0xc00) + 0x700
                    arg4 = &arg4[1]
                    arg5 = &arg5[1]
                    uint32_t edi_5 = zx.d(*arg3)
                    int32_t edx_7 = *(esi_1 + (eax_9 << 2)) + 0x100
                    int32_t* edi_9 = var_8
                    *edi_9 = *(arg2 + ((edi_5 + esi_3) << 2)) | *(arg2 + ((edi_5 + eax_11) << 2))
                        | *(arg2 + ((edi_5 + edx_7) << 2))
                    uint32_t edi_11 = zx.d(*(arg3 + 1))
                    arg3 += 2
                    edi_9[1] = *(arg2 + ((edi_11 + esi_3) << 2)) | *(arg2 + ((edi_11 + eax_11) << 2))
                        | *(arg2 + ((edi_11 + edx_7) << 2))
                    var_8 = &edi_9[2]
                    uint32_t edi_17 = zx.d(*arg9)
                    int32_t* edi_21 = var_c
                    *edi_21 = *(arg2 + ((edi_17 + esi_3) << 2)) | *(arg2 + ((edi_17 + eax_11) << 2))
                        | *(arg2 + ((edi_17 + edx_7) << 2))
                    uint32_t ebx_21 = zx.d(*(arg9 + 1))
                    arg9 += 2
                    arg6 = ebx_21
                    j -= 1
                    edi_21[1] = *(arg2 + ((esi_3 + ebx_21) << 2)) | *(arg2 + ((eax_11 + ebx_21) << 2))
                        | *(arg2 + ((ebx_21 + edx_7) << 2))
                    esi_1 = arg1
                    edi_2 = &edi_21[2]
                    var_c = edi_2
                while (j != 0)
                
                ebx = arg8
            
            var_8 += ecx_3
            arg3 += ebx
            arg9 += ebx
            edi_2 += ecx_3
            i -= 1
            var_c = edi_2
        while (i != 0)
    
    return i
}
