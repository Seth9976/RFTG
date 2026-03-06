// 函数名称: sub_445b80
// 虚拟地址: 0x445b80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_445b80(void* arg1 @ esi, int32_t* arg2)
{
    // 第一条实际指令: void var_30
    void var_30
    int32_t* eax_1 = sub_445ac0(&var_30, *(arg1 + 0x84))
    long double x87_r7 = float.t(*(arg1 + 0x84))
    int32_t edx = eax_1[1]
    float var_1c = *eax_1
    float var_c = fconvert.s(fneg(x87_r7))
    int32_t var_18 = edx
    int32_t var_14 = eax_1[2]
    int32_t var_10 = eax_1[3]
    void arg_8
    
    if (sub_4057a0(&var_1c, &arg_8).b == 0)
        return 
    
    long double x87_r7_2 = fconvert.t(var_c)
    long double x87_r6_1
    
    if (*arg2 != 0)
        x87_r6_1 = fconvert.t(arg2[7])
        x87_r6_1 - x87_r7_2
    
    if (*arg2 != 0 && (((x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) != 0)
        return 
    
    int32_t eax_3 = *(arg1 + 0xac)
    arg2[7] = fconvert.s(x87_r7_2)
    *arg2 = 0xe
    arg2[1] = eax_3
}
