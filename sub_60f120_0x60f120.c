// 函数名称: sub_60f120
// 虚拟地址: 0x60f120
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60f120(int32_t arg1, int32_t arg2, void* arg3, char* arg4, char* arg5, void* arg6, uint32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t ebx = arg8
    int32_t ebx = arg8
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(ebx)
    char* esi = arg6
    char* ecx_2 = (ebx + arg9) * 3 + arg6
    arg6 = arg3 + ebx
    int32_t edx_2 = (ebx + (arg9 << 1)) * 3
    int32_t eax_9
    int32_t edx_3
    edx_3:eax_9 = sx.q(arg7)
    int32_t i = (eax_9 - edx_3) s>> 1
    
    if (i != 0)
        int32_t edi_1 = arg1
        
        do
            int32_t j = (eax_1 - edx) s>> 1
            
            if (j != 0)
                do
                    uint32_t ebx_1 = zx.d(*arg4)
                    int32_t eax_15 = *(edi_1 + (ebx_1 << 2)) + 0x100
                    int32_t eax_19 =
                        *(edi_1 + (zx.d(*arg5) << 2) + 0x800) + *(edi_1 + (ebx_1 << 2) + 0x400) + 0x400
                    int32_t eax_22 = *(edi_1 + (zx.d(*arg5) << 2) + 0xc00) + 0x700
                    arg5 = &arg5[1]
                    char* ebx_5 = arg3
                    uint32_t edi_2 = zx.d(*ebx_5)
                    int32_t eax_26 = *(arg2 + ((eax_22 + edi_2) << 2))
                        | *(arg2 + ((edi_2 + eax_19) << 2)) | *(arg2 + ((edi_2 + eax_15) << 2))
                    *esi = eax_26.b
                    esi[1] = (eax_26 u>> 8).b
                    esi[2] = (eax_26 u>> 0x10).b
                    uint32_t eax_28 = zx.d(ebx_5[1])
                    arg3 = &ebx_5[2]
                    arg4 = &arg4[1]
                    int32_t eax_31 = *(arg2 + ((eax_22 + eax_28) << 2))
                        | *(arg2 + ((eax_19 + eax_28) << 2)) | *(arg2 + ((eax_28 + eax_15) << 2))
                    char* edi_12 = arg6
                    esi[3] = eax_31.b
                    esi[4] = (eax_31 u>> 8).b
                    esi[5] = (eax_31 u>> 0x10).b
                    uint32_t eax_33 = zx.d(*edi_12)
                    esi = &esi[6]
                    int32_t eax_36 = *(arg2 + ((eax_22 + eax_33) << 2))
                        | *(arg2 + ((eax_19 + eax_33) << 2)) | *(arg2 + ((eax_33 + eax_15) << 2))
                    *ecx_2 = eax_36.b
                    ecx_2[1] = (eax_36 u>> 8).b
                    ecx_2[2] = (eax_36 u>> 0x10).b
                    uint32_t edi_18 = zx.d(edi_12[1])
                    arg6 = &edi_12[2]
                    ecx_2 = &ecx_2[6]
                    int32_t eax_44 = *(arg2 + ((eax_22 + edi_18) << 2))
                        | *(arg2 + ((eax_19 + edi_18) << 2)) | *(arg2 + ((edi_18 + eax_15) << 2))
                    edi_1 = arg1
                    ecx_2[0xfffffffd] = eax_44.b
                    ecx_2[0xfffffffe] = (eax_44 u>> 8).b
                    ecx_2[0xffffffff] = (eax_44 u>> 0x10).b
                    j -= 1
                while (j != 0)
                
                ebx = arg8
            
            arg3 += ebx
            arg6 += ebx
            esi = &esi[edx_2]
            ecx_2 = &ecx_2[edx_2]
            i -= 1
        while (i != 0)
    
    return i
}
