// 函数名称: sub_444910
// 虚拟地址: 0x444910
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_444910(float* arg1, float arg2, float arg3)
{
    // 第一条实际指令: int32_t* esi = data_307c03c
    int32_t* esi = data_307c03c
    int32_t* eax = sub_4265b0(arg1)
    long double x87_r7 = fconvert.t(arg2)
    float edx = eax[1]
    float var_14 = *eax
    float ecx_1 = eax[2]
    float edx_1 = eax[3]
    long double x87_r6_2 = fconvert.t(arg3)
    var_14 = fconvert.s(x87_r7 + fconvert.t(var_14))
    float var_10_1 = fconvert.s(x87_r6_2 + fconvert.t(edx))
    float var_c_1 = fconvert.s(x87_r7 + fconvert.t(ecx_1))
    float var_8_1 = fconvert.s(x87_r6_2 + fconvert.t(edx_1))
    return sub_444880(esi, &var_14)
}
