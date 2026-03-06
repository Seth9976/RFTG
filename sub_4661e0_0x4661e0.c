// 函数名称: sub_4661e0
// 虚拟地址: 0x4661e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4661e0(int32_t* arg1 @ esi, float* arg2 @ edi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_18 = ecx
    long double st0 = sub_4064d0(fconvert.s(fconvert.t(*arg2)))
    long double st0_1 = sub_4064d0(fconvert.s(fconvert.t(arg2[1])))
    long double temp0 = fconvert.t(fconvert.d(st0))
    st0_1 - temp0
    int32_t eax
    eax.w = (st0_1 < temp0 ? 1 : 0) << 8 | (is_unordered.t(st0_1, temp0) ? 1 : 0) << 0xa
        | (st0_1 == temp0 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    double var_14
    long double x87_r7_6
    
    if (p)
        var_14.d = fconvert.s(float.t(0))
        var_14:4.d = fconvert.s(fconvert.t(arg2[2]))
        x87_r7_6 = fneg(fconvert.t(arg2[1]))
    else
        var_14.d = fconvert.s(fneg(fconvert.t(arg2[2])))
        var_14:4.d = fconvert.s(float.t(0))
        x87_r7_6 = fconvert.t(*arg2)
    
    *arg1 = var_14.d
    arg1[1] = var_14:4.d
    arg1[2] = fconvert.s(x87_r7_6)
    return arg1
}
