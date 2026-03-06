// 函数名称: sub_610080
// 虚拟地址: 0x610080
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_610080(int32_t arg1, int32_t arg2, void* arg3, char* arg4, char* arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t ecx = arg6
    int32_t ecx = arg6
    int32_t ebx = arg7
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = sx.q(arg8)
    int32_t i = (eax_1 - edx_1) s>> 1
    arg6 = i
    
    if (ebx != 0)
        int32_t edx_2 = arg1
        int32_t edi_1 = (arg9 + (arg8 << 1)) << 2
        arg9 = edi_1
        
        while (true)
            ebx -= 1
            
            if (arg6 != 0)
                do
                    uint32_t eax_5 = zx.d(*arg4)
                    int32_t eax_7 =
                        *(edx_2 + (zx.d(*arg5) << 2) + 0x800) + *(edx_2 + (eax_5 << 2) + 0x400) + 0x400
                    int32_t eax_10 = *(edx_2 + (zx.d(*arg5) << 2) + 0xc00) + 0x700
                    arg5 = &arg5[4]
                    uint32_t ebx_6 = zx.d(*arg3)
                    int32_t edi_3 = *(edx_2 + (eax_5 << 2)) + 0x100
                    arg4 = &arg4[4]
                    int32_t edx_8 = *(arg2 + ((ebx_6 + eax_10) << 2)) | *(arg2 + ((eax_7 + ebx_6) << 2))
                        | *(arg2 + ((ebx_6 + edi_3) << 2))
                    *(arg9 + ecx + 4) = edx_8
                    *(arg9 + ecx) = edx_8
                    *(ecx + 4) = edx_8
                    *ecx = edx_8
                    uint32_t eax_14 = zx.d(*(arg3 + 2))
                    arg3 += 4
                    int32_t edx_15 = *(arg2 + ((eax_10 + eax_14) << 2))
                        | *(arg2 + ((eax_7 + eax_14) << 2)) | *(arg2 + ((eax_14 + edi_3) << 2))
                    edi_1 = arg9
                    i -= 1
                    *(edi_1 + ecx + 0xc) = edx_15
                    *(edi_1 + ecx + 8) = edx_15
                    *(ecx + 0xc) = edx_15
                    *(ecx + 8) = edx_15
                    edx_2 = arg1
                    ecx += 0x10
                while (i != 0)
            
            ecx += edi_1
            
            if (ebx == 0)
                break
            
            i = arg6
    
    return i
}
