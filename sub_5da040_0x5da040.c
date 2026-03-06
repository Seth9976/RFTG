// 函数名称: sub_5da040
// 虚拟地址: 0x5da040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5da040(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t var_10
    int32_t var_10
    int32_t var_8
    
    if (sub_5d9920(arg1, &var_8, &var_10) s< 0)
        return 0xffffffff
    
    float var_c = fconvert.s(float.t(arg1[0x31]) / float.t(arg1[0x32]))
    float var_14 = fconvert.s(float.t(var_8) / float.t(var_10))
    long double x87_r7_4 = float.t(1)
    sub_5d9680(arg1, fconvert.s(x87_r7_4), fconvert.s(x87_r7_4))
    float var_2c_1
    var_2c_1.q = fconvert.d(fconvert.t(var_c) - fconvert.t(var_14))
    long double st0 = abs(var_2c_1)
    long double temp0 = fconvert.t(0.0001)
    st0 - temp0
    int32_t eax_2
    eax_2.w = (st0 < temp0 ? 1 : 0) << 8 | (is_unordered.t(st0, temp0) ? 1 : 0) << 0xa
        | (st0 == temp0 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    float var_c_1
    
    if (p)
        long double x87_r7_10 = fconvert.t(var_c)
        long double x87_r6_1 = fconvert.t(var_14)
        x87_r6_1 - x87_r7_10
        eax_2.w = (x87_r6_1 < x87_r7_10 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_10) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_10 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x5}
        int32_t* var_30_2
        int32_t var_24
        
        if (p_1)
            int32_t var_20_2 = 0
            int32_t var_18_2 = var_10
            var_c_1 = fconvert.s(float.t(var_10) / float.t(arg1[0x32]))
            var_2c_1.q = fconvert.d(float.t(arg1[0x31]) * fconvert.t(var_c_1))
            int32_t eax_9 = sub_685f40(sub_5dec60(var_2c_1))
            int32_t eax_12
            int32_t edx_3
            edx_3:eax_12 = sx.q(var_8 - eax_9)
            int32_t var_1c_2 = eax_9
            var_24 = (eax_12 - edx_3) s>> 1
            var_30_2 = &var_24
        else
            long double x87_r7_11 = float.t(var_8)
            int32_t edx_1 = var_8
            var_24 = 0
            int32_t var_1c_1 = edx_1
            var_c_1 = fconvert.s(x87_r7_11 / float.t(arg1[0x31]))
            var_2c_1.q = fconvert.d(float.t(arg1[0x32]) * fconvert.t(var_c_1))
            int32_t eax_3 = sub_685f40(sub_5dec60(var_2c_1))
            int32_t eax_6
            int32_t edx_2
            edx_2:eax_6 = sx.q(var_10 - eax_3)
            int32_t var_20_1 = (eax_6 - edx_2) s>> 1
            int32_t var_18_1 = eax_3
            var_30_2 = &var_24
        sub_5d9f50(arg1, var_30_2)
    else
        var_c_1 = fconvert.s(float.t(var_8) / float.t(arg1[0x31]))
        sub_5d9f50(arg1, nullptr)
    
    long double x87_r7_21 = fconvert.t(var_c_1)
    sub_5d9680(arg1, fconvert.s(x87_r7_21), fconvert.s(x87_r7_21))
    return 0
}
