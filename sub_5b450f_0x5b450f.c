// 函数名称: sub_5b450f
// 虚拟地址: 0x5b450f
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5b450f(double arg1, int32_t* arg2)
{
    // 第一条实际指令: long double result = fconvert.t(arg1)
    long double result = fconvert.t(arg1)
    long double x87_r6 = float.t(0)
    x87_r6 - result
    int32_t eax
    eax.w = (x87_r6 < result ? 1 : 0) << 8 | (is_unordered.t(x87_r6, result) ? 1 : 0) << 0xa
        | (x87_r6 == result ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x44}
    int32_t edx
    
    if (not(p))
        edx = 0
    else if ((zx.d(arg1:6.w) & 0x7ff0) != 0 || ((arg1:4.d & 0xfffff) == 0 && arg1.d == 0))
        int32_t var_c_2 = 0
        result = sub_5b447c(0f, 0)
        edx = (zx.d(arg1:6.w) u>> 4 & 0x7ff) - 0x3fe
    else
        long double temp0_1 = fconvert.t(arg1)
        result - temp0_1
        edx = 0xfffffc03
        uint32_t eax_1
        eax_1.w = (result < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(result, temp0_1) ? 1 : 0) << 0xa
            | (result == temp0_1 ? 1 : 0) << 0xe
        int32_t eax_2
        
        if ((eax_1:1.b & 0x41) != 0)
            eax_2 = 0
        else
            eax_2 = 1
        
        while ((arg1:6.b & 0x10) == 0)
            arg1:4.d <<= 1
            
            if ((arg1.d & 0x80000000) != 0)
                arg1:4.d |= 1
            
            arg1.d <<= 1
            edx -= 1
        
        arg1:6.w &= 0xffef
        
        if (eax_2 != 0)
            arg1:6.w |= 0x8000
        
        int32_t var_c_1 = 0
        result = sub_5b447c(0f, 0)
    
    *arg2 = edx
    return result
}
