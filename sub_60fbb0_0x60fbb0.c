// 函数名称: sub_60fbb0
// 虚拟地址: 0x60fbb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60fbb0(int32_t arg1, int32_t arg2, void* arg3, char* arg4, char* arg5, char* arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: char* ecx = arg6
    char* ecx = arg6
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(arg8)
    int32_t i = arg7
    int32_t j = (eax_1 - edx) s>> 1
    int32_t j_1 = j
    
    if (i != 0)
        int32_t edx_3 = arg1
        
        do
            i -= 1
            
            if (j != 0)
                do
                    uint32_t eax_5 = zx.d(*arg4)
                    int32_t eax_7 =
                        *(edx_3 + (zx.d(*arg5) << 2) + 0x800) + *(edx_3 + (eax_5 << 2) + 0x400) + 0x400
                    char* eax_10 = *(edx_3 + (zx.d(*arg5) << 2) + 0xc00) + 0x700
                    arg5 = &arg5[4]
                    uint32_t ebx_6 = zx.d(*arg3)
                    int32_t edi_1 = *(edx_3 + (eax_5 << 2)) + 0x100
                    int32_t edx_9 = *(arg2 + ((ebx_6 + eax_10) << 2)) | *(arg2 + ((eax_7 + ebx_6) << 2))
                        | *(arg2 + ((ebx_6 + edi_1) << 2))
                    *ecx = edx_9.b
                    ecx[1] = (edx_9 u>> 8).b
                    ecx[2] = (edx_9 u>> 0x10).b
                    uint32_t eax_15 = zx.d(*(arg3 + 2))
                    arg4 = &arg4[4]
                    arg3 += 4
                    int32_t edx_17 = *(arg2 + ((eax_10 + eax_15) << 2))
                        | *(arg2 + ((eax_7 + eax_15) << 2)) | *(arg2 + ((eax_15 + edi_1) << 2))
                    ecx = &ecx[6]
                    ecx[0xfffffffd] = edx_17.b
                    ecx[0xfffffffe] = (edx_17 u>> 8).b
                    j -= 1
                    ecx[0xffffffff] = (edx_17 u>> 0x10).b
                    edx_3 = arg1
                while (j != 0)
                
                j = j_1
            
            ecx = &ecx[arg9 * 3]
        while (i != 0)
    
    return j
}
