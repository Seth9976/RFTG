// 函数名称: sub_635680
// 虚拟地址: 0x635680
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_635680(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, char arg5, char arg6, char arg7, char arg8)
{
    // 第一条实际指令: if (arg4 == 1)
    if (arg4 == 1)
        int32_t* esi_7 = *(arg1 + 0x10) * arg3 + *(arg1 + 0x14) + (arg2 << 2)
        int32_t eax_27
        int32_t edx_25
        edx_25:eax_27 = mulu.dp.d(0x80808081, zx.d(*(esi_7 + 1)) * (0xff - zx.d(arg8)))
        int32_t eax_28
        int32_t edx_29
        edx_29:eax_28 = mulu.dp.d(0x80808081, zx.d(*(esi_7 + 2)) * (0xff - zx.d(arg8)))
        int32_t eax_30
        int32_t edx_35
        edx_35:eax_30 = mulu.dp.d(0x80808081, zx.d(*esi_7) * (0xff - zx.d(arg8)))
        *esi_7 = (zx.d(arg6) + (edx_25 u>> 7)) << 8 | ((edx_29 u>> 7) + zx.d(arg5)) << 0x10
            | ((edx_35 u>> 7) + zx.d(arg7))
        return 0
    
    if (arg4 != 2)
        if (arg4 == 4)
            int32_t* ecx_9 = *(arg1 + 0x10) * arg3 + *(arg1 + 0x14) + (arg2 << 2)
            int32_t eax_11
            int32_t edx_7
            edx_7:eax_11 = mulu.dp.d(0x80808081, zx.d(*(ecx_9 + 2)) * zx.d(arg5))
            int32_t eax_13
            int32_t edx_11
            edx_11:eax_13 = mulu.dp.d(0x80808081, zx.d(*(ecx_9 + 1)) * zx.d(arg6))
            int32_t eax_15
            int32_t edx_15
            edx_15:eax_15 = mulu.dp.d(0x80808081, zx.d(*ecx_9) * zx.d(arg7))
            *ecx_9 = (edx_7 u>> 7 << 8 | edx_11 u>> 7) << 8 | edx_15 u>> 7
            return 0
        
        *(*(arg1 + 0x10) * arg3 + *(arg1 + 0x14) + (arg2 << 2)) =
            (zx.d(arg5) << 8 | zx.d(arg6)) << 8 | zx.d(arg7)
        return 0
    
    int32_t ecx_12 = *(arg1 + 0x10) * arg3 + *(arg1 + 0x14)
    char* ecx_13 = ecx_12 + (arg2 << 2)
    uint32_t eax_19 = zx.d(*(ecx_12 + (arg2 << 2) + 2)) + zx.d(arg5)
    
    if (eax_19 u> 0xff)
        eax_19 = 0xff
    
    uint32_t esi_6 = zx.d(*(ecx_12 + (arg2 << 2) + 1)) + zx.d(arg6)
    
    if (esi_6 u> 0xff)
        esi_6 = 0xff
    
    uint32_t edx_19 = zx.d(*ecx_13) + zx.d(arg7)
    
    if (edx_19 u> 0xff)
        edx_19 = 0xff
    
    *ecx_13 = (eax_19 << 8 | esi_6) << 8 | edx_19
    return 0
}
