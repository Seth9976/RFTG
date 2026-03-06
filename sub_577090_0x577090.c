// 函数名称: sub_577090
// 虚拟地址: 0x577090
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_577090(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    long double x87_r7 = float.t(0)
    long double temp1 = fconvert.t(*arg1)
    x87_r7 - temp1
    *arg2 = *arg1
    arg2[1] = arg1[1]
    arg2[2] = arg1[2]
    arg2[3] = arg1[3]
    int32_t eax_3
    eax_3.w = (x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe | 0x3800
    long double x87_r6 = float.t(0)
    long double x87_r5 = float.t(1)
    long double x87_r4 = float.t(1)
    long double x87_r4_1
    long double x87_r7_1
    
    if ((eax_3:1.b & 0x41) != 0)
        long double temp2_1 = fconvert.t(arg1[2])
        x87_r4 - temp2_1
        eax_3.w = (x87_r4 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r4, temp2_1) ? 1 : 0) << 0xa
            | (x87_r4 == temp2_1 ? 1 : 0) << 0xe | 0x2000
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (not(p_1))
            arg2[2] = fconvert.s(x87_r4)
            *arg2 = fconvert.s(x87_r5 - fconvert.t(fconvert.s(fconvert.t(arg1[2]) - fconvert.t(*arg1))))
        
        x87_r4_1 = x87_r7
        x87_r7_1 = x87_r4
    else
        x87_r4_1 = x87_r7
        x87_r7_1 = x87_r4
        *arg2 = fconvert.s(x87_r4_1)
        arg2[2] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg1[2]) - fconvert.t(*arg1))) + x87_r6)
    
    long double temp3 = fconvert.t(arg1[1])
    x87_r4_1 - temp3
    eax_3.w = (x87_r4_1 < temp3 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_1, temp3) ? 1 : 0) << 0xa
        | (x87_r4_1 == temp3 ? 1 : 0) << 0xe | 0x2000
    
    if ((eax_3:1.b & 0x41) == 0)
        arg2[1] = fconvert.s(x87_r7_1)
        arg2[3] = fconvert.s(x87_r5 + fconvert.t(fconvert.s(fconvert.t(arg1[3]) - fconvert.t(arg1[1]))))
        return arg2
    
    long double temp4 = fconvert.t(arg1[3])
    x87_r4_1 - temp4
    eax_3.w = (x87_r4_1 < temp4 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_1, temp4) ? 1 : 0) << 0xa
        | (x87_r4_1 == temp4 ? 1 : 0) << 0xe | 0x3000
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (p_2)
        return arg2
    
    arg2[3] = fconvert.s(x87_r4_1)
    arg2[1] = fconvert.s(x87_r6 - fconvert.t(fconvert.s(fconvert.t(arg1[3]) - fconvert.t(arg1[1]))))
    return arg2
}
