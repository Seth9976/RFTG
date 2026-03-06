// 函数名称: sub_551f30
// 虚拟地址: 0x551f30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_551f30(void* arg1, int32_t* arg2 @ esi, int32_t arg3, char* arg4, struct _EXCEPTION_REGISTRATION_RECORD* arg5)
{
    // 第一条实际指令: int32_t ecx = arg2[1]
    int32_t ecx = arg2[1]
    int128_t* result_1 = *arg2
    int32_t eax_1 = arg2[3]
    int32_t ecx_1 = arg2[2]
    int32_t var_8 = arg2[4]
    
    if (arg5 != 1)
        result_1 = sub_4cce80(eax_1 * ecx_1)
    
    int128_t* result
    
    if (arg3 == 6)
        result = sub_594230(&result_1, arg4, arg1)
    else if (arg3 != 5)
        int128_t** var_24_2
        
        if (arg3 != 2)
            if (arg3 != 0xa)
                sub_4c5870("Halt", &data_83f3d3, "TextureImport.cpp", 0x3a3, "TextureLoadImage")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            var_24_2 = &result_1
        else
            var_24_2 = &result_1
        
        result = sub_551c60(arg3, arg4, arg1, var_24_2)
    else
        result = sub_594e60(arg2, arg5, &result_1, arg4, arg1)
    
    if (result.b == 0)
        return result
    
    if (arg5 != 1)
        long double x87_r7_1 = float.t(1)
        int32_t temp0_1 = divs.dp.d(sx.q(ecx), arg5)
        long double x87_r7_2 = float.t(0)
        int32_t temp0_2 = divs.dp.d(sx.q(ecx_1), arg5)
        arg2[1] = temp0_1
        int128_t* result_2 = result_1
        arg2[2] = temp0_2
        arg2[3] = divs.dp.d(sx.q(eax_1), arg5)
        sub_5a5d70(result_2, ecx, ecx_1, *arg2, temp0_1, temp0_2, fconvert.s(x87_r7_2), 
            fconvert.s(x87_r7_2), fconvert.s(x87_r7_1), fconvert.s(x87_r7_1))
        result = result_1
        
        if (result != 0)
            _aligned_free_base(result)
    
    result.b = 1
    return result
}
