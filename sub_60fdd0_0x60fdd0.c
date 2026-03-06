// 函数名称: sub_60fdd0
// 虚拟地址: 0x60fdd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60fdd0(int32_t arg1, int32_t arg2, void* arg3, char* arg4, char* arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(arg9)
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(arg8)
    int32_t ebx = arg7
    int32_t i = (eax_4 - edx_1) s>> 1
    int32_t esi = arg6
    arg6 = i
    
    if (ebx != 0)
        int32_t edi_1 = (((eax_1 - edx) s>> 1) + arg8) << 2
        int32_t ecx_3 = arg1
        arg8 = edi_1
        
        while (true)
            ebx -= 1
            
            if (arg6 != 0)
                do
                    uint32_t eax_8 = zx.d(*arg4)
                    int32_t eax_10 =
                        *(ecx_3 + (zx.d(*arg5) << 2) + 0x800) + *(ecx_3 + (eax_8 << 2) + 0x400) + 0x400
                    int32_t eax_13 = *(ecx_3 + (zx.d(*arg5) << 2) + 0xc00) + 0x700
                    arg5 = &arg5[4]
                    uint32_t ebx_6 = zx.d(*arg3)
                    int32_t edi_3 = *(ecx_3 + (eax_8 << 2)) + 0x100
                    arg4 = &arg4[4]
                    int32_t ecx_9 = *(arg2 + ((ebx_6 + eax_13) << 2))
                        | *(arg2 + ((eax_10 + ebx_6) << 2)) | *(arg2 + ((ebx_6 + edi_3) << 2))
                    *(arg8 + esi) = ecx_9
                    *esi = ecx_9
                    uint32_t eax_17 = zx.d(*(arg3 + 2))
                    arg3 += 4
                    int32_t ecx_16 = *(arg2 + ((eax_13 + eax_17) << 2))
                        | *(arg2 + ((eax_10 + eax_17) << 2)) | *(arg2 + ((eax_17 + edi_3) << 2))
                    edi_1 = arg8
                    i -= 1
                    *(edi_1 + esi + 4) = ecx_16
                    *(esi + 4) = ecx_16
                    ecx_3 = arg1
                    esi += 8
                while (i != 0)
            
            esi += edi_1
            
            if (ebx == 0)
                break
            
            i = arg6
    
    return i
}
