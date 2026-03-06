// 函数名称: sub_537720
// 虚拟地址: 0x537720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __convention("regparm")sub_537720(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: float var_8 = fconvert.s(fconvert.t(data_3078844))
    float var_8 = fconvert.s(fconvert.t(data_3078844))
    float var_c = fconvert.s(fconvert.t(data_3078840))
    void var_1c
    int32_t* eax = sub_5374d0(&var_1c)
    int32_t edx = *eax
    int32_t ecx = eax[1]
    int32_t esi_1 = eax[3]
    float var_14 = fconvert.s(sub_537650(
        fconvert.s(fconvert.t(fconvert.s(float.t(arg3 - edx) / float.t(eax[2] - edx)))), 
        fconvert.s(float.t(1))))
    long double x87_r7_9 = fconvert.t(fconvert.s(fconvert.t(var_c) - fconvert.t(var_8)))
    int32_t ecx_3
    long double st0_1
    st0_1, ecx_3 = sub_537650(
        fconvert.s(fconvert.t(fconvert.s(
            x87_r7_9 * fconvert.t(fconvert.s(float.t(1) - float.t(arg1 - ecx) / float.t(esi_1 - ecx)))
            + fconvert.t(var_8)))), 
        fconvert.s(x87_r7_9))
    float var_10_3 = fconvert.s(st0_1)
    int32_t var_48 = ecx_3
    float result = fconvert.s(sub_465dd0(fconvert.s(fconvert.t(var_14)), fconvert.s(float.t(0)), 
        fconvert.s(float.t(1))))
    float var_10_4 = fconvert.s(sub_465dd0(fconvert.s(fconvert.t(var_10_3)), 
        fconvert.s(fconvert.t(var_8)), fconvert.s(fconvert.t(var_c))))
    return result
}
