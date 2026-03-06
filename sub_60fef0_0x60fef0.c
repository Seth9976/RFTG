// 函数名称: sub_60fef0
// 虚拟地址: 0x60fef0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60fef0(int32_t arg1, int32_t arg2, void* arg3, char* arg4, char* arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t ecx = arg6
    int32_t ecx = arg6
    int32_t ebx = arg7
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = sx.q(arg8)
    int32_t i = (eax_1 - edx_1) s>> 1
    char* esi_1 = (arg9 + (arg8 << 1)) * 3
    arg6 = i
    
    if (ebx != 0)
        int32_t edx_2 = arg1
        
        while (true)
            ebx -= 1
            
            if (arg6 != 0)
                do
                    uint32_t ebx_1 = zx.d(*arg4)
                    int32_t eax_6 = *(edx_2 + (ebx_1 << 2)) + 0x100
                    int32_t eax_10 =
                        *(edx_2 + (zx.d(*arg5) << 2) + 0x800) + *(edx_2 + (ebx_1 << 2) + 0x400) + 0x400
                    int32_t eax_12 = *(edx_2 + (zx.d(*arg5) << 2) + 0xc00)
                    char* edx_3 = arg3
                    arg5 = &arg5[4]
                    uint32_t ebx_5 = zx.d(*edx_3)
                    arg4 = &arg4[4]
                    int32_t edx_8 = *(arg2 + ((ebx_5 + eax_12 + 0x700) << 2))
                        | *(arg2 + ((eax_10 + ebx_5) << 2)) | *(arg2 + ((ebx_5 + eax_6) << 2))
                    char ebx_7 = edx_8.b
                    esi_1[ecx + 3] = ebx_7
                    esi_1[ecx] = ebx_7
                    *(ecx + 3) = ebx_7
                    *ecx = ebx_7
                    uint8_t ebx_10 = (edx_8 u>> 8).b
                    esi_1[ecx + 4] = ebx_10
                    esi_1[ecx + 1] = ebx_10
                    *(ecx + 4) = ebx_10
                    *(ecx + 1) = ebx_10
                    uint8_t edx_9 = (edx_8 u>> 0x10).b
                    esi_1[ecx + 5] = edx_9
                    esi_1[ecx + 2] = edx_9
                    *(ecx + 5) = edx_9
                    *(ecx + 2) = edx_9
                    uint32_t eax_16 = zx.d(edx_3[2])
                    arg3 = &edx_3[4]
                    int32_t edx_17 = *(arg2 + ((eax_12 + 0x700 + eax_16) << 2))
                        | *(arg2 + ((eax_10 + eax_16) << 2)) | *(arg2 + ((eax_16 + eax_6) << 2))
                    char ebx_14 = edx_17.b
                    esi_1[ecx + 9] = ebx_14
                    esi_1[ecx + 6] = ebx_14
                    *(ecx + 9) = ebx_14
                    *(ecx + 6) = ebx_14
                    uint8_t ebx_17 = (edx_17 u>> 8).b
                    esi_1[ecx + 0xa] = ebx_17
                    esi_1[ecx + 7] = ebx_17
                    uint8_t edx_18 = (edx_17 u>> 0x10).b
                    *(ecx + 0xa) = ebx_17
                    *(ecx + 7) = ebx_17
                    esi_1[ecx + 0xb] = edx_18
                    esi_1[ecx + 8] = edx_18
                    *(ecx + 0xb) = edx_18
                    i -= 1
                    *(ecx + 8) = edx_18
                    edx_2 = arg1
                    ecx += 0xc
                while (i != 0)
            
            ecx = &esi_1[ecx]
            
            if (ebx == 0)
                break
            
            i = arg6
    
    return i
}
