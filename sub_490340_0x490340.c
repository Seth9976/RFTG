// 函数名称: sub_490340
// 虚拟地址: 0x490340
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_490340(int32_t arg1, void* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t ebx = arg6
    int32_t ebx = arg6
    int32_t result = arg1
    int32_t i_3 = sx.d(*(arg2 + 0x458))
    int32_t esi = 0xffffffff
    
    if (i_3 s> 0)
        int32_t* ecx_2 = arg4 + (arg5 << 2)
        int32_t i
        
        do
            int32_t edx_2 = *ecx_2
            
            if (edx_2 s> esi)
                esi = edx_2
            
            ecx_2 = &ecx_2[5]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t edx_3 = arg3
    int32_t var_8 = edx_3
    
    do
        int32_t ecx_8 = 0
        
        if (ebx s>= 4)
            int32_t eax_3 = *(arg4 + ((edx_3 * 5 + arg5) << 2)) + 2
            int32_t edx_5 = (((ebx - 4) u>> 2) + 1) << 2
            int32_t i_4 = ((ebx - 4) u>> 2) + 1
            int32_t i_1
            
            do
                int32_t ebx_1
                ebx_1.b = eax_3 - 2 s< esi
                *(data_2691c6c + (result << 3)) = fconvert.d(float.t(ebx_1 * 2 - 1))
                int32_t ebx_3
                ebx_3.b = eax_3 - 1 s< esi
                *(data_2691c6c + (result << 3) + 8) = fconvert.d(float.t(ebx_3 * 2 - 1))
                int32_t edx_10
                edx_10.b = eax_3 s< esi
                *(data_2691c6c + (result << 3) + 0x10) = fconvert.d(float.t(edx_10 * 2 - 1))
                int32_t ebx_5
                ebx_5.b = eax_3 + 1 s< esi
                result += 4
                eax_3 += 4
                i_1 = i_4
                i_4 -= 1
                *(data_2691c6c + (result << 3) - 8) = fconvert.d(float.t(ebx_5 * 2 - 1))
            while (i_1 != 1)
            ebx = arg6
            edx_3 = var_8
            ecx_8 = edx_5
        
        if (ecx_8 s< ebx)
            int32_t eax_8 = *(arg4 + ((edx_3 * 5 + arg5) << 2)) + ecx_8
            int32_t i_5 = arg6 - ecx_8
            int32_t i_2
            
            do
                int32_t ecx_9
                ecx_9.b = eax_8 s< esi
                result += 1
                eax_8 += 1
                i_2 = i_5
                i_5 -= 1
                *(data_2691c6c + (result << 3) - 8) = fconvert.d(float.t(ecx_9 * 2 - 1))
            while (i_2 != 1)
            ebx = arg6
        
        edx_3 = mods.dp.d(sx.q(edx_3 + 1), sx.d(*(arg2 + 0x458)))
        var_8 = edx_3
    while (edx_3 != arg3)
    
    return result
}
