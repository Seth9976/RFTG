// 函数名称: sub_65bd80
// 虚拟地址: 0x65bd80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_65bd80(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t esi_1 = arg1 - arg6
    int32_t esi_1 = arg1 - arg6
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(esi_1)
    int32_t ecx = arg3 - arg5
    int32_t temp0 = divs.dp.d(sx.q(esi_1), ecx)
    int32_t edx_2 = temp0 - 1
    
    if (esi_1 s>= 0)
        edx_2 = temp0 + 1
    
    int32_t esi_2 = arg6
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 = sx.q(temp0 * ecx)
    int32_t edx_4 = arg4
    int32_t var_8 = 0
    
    if (edx_4 s> arg3)
        arg4 = arg3
        edx_4 = arg3
    
    if (arg5 s< edx_4)
        *(arg7 + (arg5 << 2)) = esi_2
        edx_4 = arg4
    
    int32_t i
    
    for (i = arg5 + 1; i s< edx_4; i += 1)
        var_8 += (eax_1 ^ edx) - edx - ((eax_6 ^ edx_3) - edx_3)
        
        if (var_8 s< ecx)
            esi_2 += temp0
        else
            var_8 -= ecx
            esi_2 += edx_2
        
        *(arg7 + (i << 2)) = esi_2
    
    return i
}
