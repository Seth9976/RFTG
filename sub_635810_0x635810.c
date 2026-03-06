// 函数名称: sub_635810
// 虚拟地址: 0x635810
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_635810(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, char arg5, char arg6, char arg7, char arg8)
{
    // 第一条实际指令: uint32_t eax = zx.d(arg8)
    uint32_t eax = zx.d(arg8)
    
    if (arg4 == 1)
        int32_t* esi_8 = *(arg1 + 0x10) * arg3 + *(arg1 + 0x14) + (arg2 << 2)
        int32_t eax_29
        int32_t edx_30
        edx_30:eax_29 = mulu.dp.d(0x80808081, zx.d(*(esi_8 + 1)) * (0xff - eax))
        int32_t ebx_5 = *esi_8
        int32_t eax_30
        int32_t edx_34
        edx_34:eax_30 = mulu.dp.d(0x80808081, zx.d(*(esi_8 + 2)) * (0xff - eax))
        *esi_8 = (zx.d(arg6) + (edx_30 u>> 7)) << 8 | ((edx_34 u>> 7) + zx.d(arg5)) << 0x10
            | (zx.d(ebx_5.b) * (0xff - eax) u/ 0xff + zx.d(arg7)) | (ebx_5 & 0xff000000)
        return 0
    
    if (arg4 != 2)
        if (arg4 == 4)
            int32_t* ecx_5 = *(arg1 + 0x10) * arg3 + *(arg1 + 0x14) + (arg2 << 2)
            int32_t eax_11
            int32_t edx_13
            edx_13:eax_11 = mulu.dp.d(0x80808081, zx.d(*(ecx_5 + 2)) * zx.d(arg5))
            int32_t ebx = *ecx_5
            int32_t eax_13
            int32_t edx_17
            edx_17:eax_13 = mulu.dp.d(0x80808081, zx.d(*(ecx_5 + 1)) * zx.d(arg6))
            *ecx_5 = (edx_13 u>> 7 << 8 | edx_17 u>> 7) << 8 | (zx.d(ebx.b) * zx.d(arg7) u/ 0xff)
                | (ebx & 0xff000000)
            return 0
        
        *(*(arg1 + 0x10) * arg3 + *(arg1 + 0x14) + (arg2 << 2)) =
            ((eax << 8 | zx.d(arg5)) << 8 | zx.d(arg6)) << 8 | zx.d(arg7)
        return 0
    
    int32_t ecx_8 = *(arg1 + 0x10) * arg3 + *(arg1 + 0x14)
    int32_t eax_18 = *(ecx_8 + (arg2 << 2))
    int32_t* edx_24 = ecx_8 + (arg2 << 2)
    uint32_t ecx_10 = zx.d(*(edx_24 + 2)) + zx.d(arg5)
    
    if (ecx_10 u> 0xff)
        ecx_10 = 0xff
    
    uint32_t edi_1 = zx.d(*(ecx_8 + (arg2 << 2) + 1)) + zx.d(arg6)
    
    if (edi_1 u> 0xff)
        edi_1 = 0xff
    
    uint32_t esi_7 = zx.d(eax_18.b) + zx.d(arg7)
    
    if (esi_7 u> 0xff)
        esi_7 = 0xff
    
    *edx_24 = ((eax_18 u>> 0x18 << 8 | ecx_10) << 8 | edi_1) << 8 | esi_7
    return 0
}
