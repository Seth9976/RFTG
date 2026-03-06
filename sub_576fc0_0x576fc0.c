// 函数名称: sub_576fc0
// 虚拟地址: 0x576fc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_576fc0(int32_t* arg1, int32_t* arg2, float* arg3 @ esi)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    long double x87_r7 = fconvert.t(*arg1)
    long double x87_r6 = fconvert.t(*arg3)
    *arg2 = *arg1
    x87_r6 - x87_r7
    arg2[1] = arg1[1]
    arg2[2] = arg1[2]
    arg2[3] = arg1[3]
    int32_t eax_3
    eax_3.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        long double x87_r7_4 = fconvert.t(arg1[2])
        long double x87_r6_3 = fconvert.t(arg3[2])
        x87_r6_3 - x87_r7_4
        eax_3.w = (x87_r6_3 < x87_r7_4 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_3, x87_r7_4) ? 1 : 0) << 0xa
            | (x87_r6_3 == x87_r7_4 ? 1 : 0) << 0xe
        
        if ((eax_3:1.b & 0x41) == 0)
            long double x87_r7_6 = fconvert.t(fconvert.s(fconvert.t(arg3[2])))
            arg2[2] = fconvert.s(x87_r7_6)
            *arg2 =
                fconvert.s(x87_r7_6 - fconvert.t(fconvert.s(fconvert.t(arg1[2]) - fconvert.t(*arg1))))
    else
        long double x87_r7_2 = fconvert.t(fconvert.s(fconvert.t(*arg3)))
        *arg2 = fconvert.s(x87_r7_2)
        arg2[2] = fconvert.s(x87_r7_2 + fconvert.t(fconvert.s(fconvert.t(arg1[2]) - fconvert.t(*arg1))))
    
    long double x87_r7_8 = fconvert.t(arg1[1])
    long double x87_r6_6 = fconvert.t(arg3[1])
    x87_r6_6 - x87_r7_8
    eax_3.w = (x87_r6_6 < x87_r7_8 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_6, x87_r7_8) ? 1 : 0) << 0xa
        | (x87_r6_6 == x87_r7_8 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (not(p_1))
        long double x87_r7_10 = fconvert.t(fconvert.s(fconvert.t(arg3[1])))
        arg2[1] = fconvert.s(x87_r7_10)
        arg2[3] =
            fconvert.s(x87_r7_10 + fconvert.t(fconvert.s(fconvert.t(arg1[3]) - fconvert.t(arg1[1]))))
        return arg2
    
    long double x87_r7_12 = fconvert.t(arg1[3])
    long double x87_r6_9 = fconvert.t(arg3[3])
    x87_r6_9 - x87_r7_12
    eax_3.w = (x87_r6_9 < x87_r7_12 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_9, x87_r7_12) ? 1 : 0) << 0xa
        | (x87_r6_9 == x87_r7_12 ? 1 : 0) << 0xe
    
    if ((eax_3:1.b & 0x41) == 0)
        long double x87_r7_14 = fconvert.t(fconvert.s(fconvert.t(arg3[3])))
        arg2[3] = fconvert.s(x87_r7_14)
        arg2[1] =
            fconvert.s(x87_r7_14 - fconvert.t(fconvert.s(fconvert.t(arg1[3]) - fconvert.t(arg1[1]))))
    
    return arg2
}
