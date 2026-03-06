// 函数名称: sub_5d1950
// 虚拟地址: 0x5d1950
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5d1950(float* arg1, int32_t* arg2, void* arg3)
{
    // 第一条实际指令: float var_8 = fconvert.s(fconvert.t(10000f))
    float var_8 = fconvert.s(fconvert.t(10000f))
    int32_t __saved_esi = 0x200
    int32_t i = 0
    int32_t var_220 = 0
    float var_210[0x80]
    float (* var_224)[0x80] = &var_210
    sub_5cd100()
    sub_5d1570(&var_210, arg1)
    *arg2 = 0xffffffff
    
    if (*(arg3 + 0x201c) s> 0)
        int32_t var_c_1 = 0
        
        do
            long double x87_r7_2 =
                fconvert.t(fconvert.s(sub_5d1410(*(arg3 + 0x2020) + var_c_1, &var_210)))
            long double x87_r6_1 = fconvert.t(var_8)
            x87_r6_1 - x87_r7_2
            
            if ((((x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) == 0)
                var_8 = fconvert.s(x87_r7_2)
                *arg2 = i
            
            var_c_1 += 0x204
            i += 1
        while (i s< *(arg3 + 0x201c))
    
    return fconvert.t(var_8)
}
