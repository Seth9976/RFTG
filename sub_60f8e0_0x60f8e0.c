// 函数名称: sub_60f8e0
// 虚拟地址: 0x60f8e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60f8e0(int32_t arg1, int32_t arg2, void* arg3, char* arg4, char* arg5, void* arg6, int32_t arg7, int32_t arg8, uint32_t arg9)
{
    // 第一条实际指令: int32_t ebx = arg8
    int32_t ebx = arg8
    int32_t ecx = arg9 + (ebx << 1)
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(ebx)
    void* edi = arg6
    arg6 = arg3 + ebx
    void* esi = edi
    int32_t* edi_1 = edi + (ecx << 3)
    int32_t eax_7
    int32_t edx_4
    edx_4:eax_7 = sx.q(arg7)
    int32_t i = (eax_7 - edx_4) s>> 1
    
    if (i != 0)
        int32_t edx_5 = arg1
        
        do
            int32_t j = (eax_2 - edx) s>> 1
            
            if (j != 0)
                do
                    uint32_t ebx_1 = zx.d(*arg4)
                    int32_t eax_13 = *(edx_5 + (ebx_1 << 2)) + 0x100
                    int32_t eax_17 =
                        *(edx_5 + (zx.d(*arg5) << 2) + 0x800) + *(edx_5 + (ebx_1 << 2) + 0x400) + 0x400
                    int32_t eax_20 = *(edx_5 + (zx.d(*arg5) << 2) + 0xc00) + 0x700
                    arg5 = &arg5[1]
                    char* ebx_5 = arg3
                    uint32_t edx_6 = zx.d(*ebx_5)
                    arg3 = &ebx_5[1]
                    int32_t eax_24 = *(arg2 + ((eax_20 + edx_6) << 2))
                        | *(arg2 + ((edx_6 + eax_17) << 2)) | *(arg2 + ((edx_6 + eax_13) << 2))
                    *(esi + (ecx << 2) + 4) = eax_24
                    *(esi + (ecx << 2)) = eax_24
                    *(esi + 4) = eax_24
                    *esi = eax_24
                    uint32_t eax_25 = zx.d(ebx_5[1])
                    arg3 = &ebx_5[2]
                    int32_t eax_28 = *(arg2 + ((eax_20 + eax_25) << 2))
                        | *(arg2 + ((eax_17 + eax_25) << 2)) | *(arg2 + ((eax_25 + eax_13) << 2))
                    *(esi + (ecx << 2) + 0xc) = eax_28
                    *(esi + (ecx << 2) + 8) = eax_28
                    char* edx_18 = arg6
                    *(esi + 0xc) = eax_28
                    *(esi + 8) = eax_28
                    uint32_t eax_29 = zx.d(*edx_18)
                    arg4 = &arg4[1]
                    esi += 0x10
                    int32_t eax_32 = *(arg2 + ((eax_20 + eax_29) << 2))
                        | *(arg2 + ((eax_17 + eax_29) << 2)) | *(arg2 + ((eax_29 + eax_13) << 2))
                    edi_1[ecx + 1] = eax_32
                    edi_1[ecx] = eax_32
                    edi_1[1] = eax_32
                    *edi_1 = eax_32
                    uint32_t edx_25 = zx.d(edx_18[1])
                    arg6 = &edx_18[2]
                    edi_1 = &edi_1[4]
                    int32_t eax_39 = *(arg2 + ((eax_20 + edx_25) << 2))
                        | *(arg2 + ((eax_17 + edx_25) << 2)) | *(arg2 + ((edx_25 + eax_13) << 2))
                    edi_1[ecx - 1] = eax_39
                    edi_1[ecx - 2] = eax_39
                    edx_5 = arg1
                    edi_1[-1] = eax_39
                    edi_1[-2] = eax_39
                    j -= 1
                while (j != 0)
                
                ebx = arg8
            
            arg3 += ebx
            arg6 += ebx
            esi += (ecx * 3 + arg9) * 4
            edi_1 = &edi_1[ecx * 3 + arg9]
            i -= 1
        while (i != 0)
    
    return i
}
