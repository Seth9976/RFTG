// 函数名称: sub_4138d0
// 虚拟地址: 0x4138d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4138d0(int32_t arg1, float* arg2, float* arg3, int32_t* arg4, float* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    *arg2 = fconvert.s(float.t(1))
    arg2[5] = *arg4
    arg2[6] = arg4[1]
    arg2[7] = arg4[2]
    float var_24 = fconvert.s(fconvert.t(*arg3) - fconvert.t(*arg4))
    float var_20 = fconvert.s(fconvert.t(arg3[1]) - fconvert.t(arg4[1]))
    long double x87_r7_6 = fconvert.t(arg3[2]) - fconvert.t(arg4[2])
    float var_14 = var_24
    float var_10 = var_20
    float var_c = fconvert.s(x87_r7_6)
    float* eax_4 = sub_4131a0(&var_14, &var_24)
    int32_t edx_1 = eax_4[1]
    int32_t eax_5 = eax_4[2]
    var_14 = *eax_4
    int32_t var_10_1 = edx_1
    int32_t var_c_1 = eax_5
    float* eax_6 = sub_413800(&var_24, arg5)
    int32_t esi_4 = eax_6[1]
    int32_t edi_1 = eax_6[2]
    int32_t result = eax_6[3]
    arg2[1] = *eax_6
    arg2[2] = esi_4
    arg2[3] = edi_1
    arg2[4] = result
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
