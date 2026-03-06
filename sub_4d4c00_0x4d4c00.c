// 函数名称: sub_4d4c00
// 虚拟地址: 0x4d4c00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4d4c00(float* arg1, float* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_34 = fconvert.s(fconvert.t(*arg2) - fconvert.t(arg1[4]))
    long double x87_r7_2 = fconvert.t(arg2[1])
    float var_18 = var_34
    float var_30 = fconvert.s(x87_r7_2 - fconvert.t(arg1[5]))
    float var_2c = fconvert.s(fconvert.t(arg2[2]) - fconvert.t(arg1[6]))
    float var_10 = var_2c
    sub_4d5cb0(&var_34, &var_18, arg1)
    float var_4c = var_34
    float var_48 = var_30
    float var_44 = var_2c
    float var_1c
    sub_4d5cb0(&var_1c, &arg2[3], arg1)
    float ecx_4 = var_1c
    var_34 = fconvert.s(fconvert.t(arg1[7]))
    float var_30_1 = fconvert.s(fconvert.t(arg1[8]))
    float var_40 = ecx_4
    float var_2c_1 = fconvert.s(fconvert.t(arg1[9]))
    float var_3c = var_18
    float var_38 = var_30
    float var_24 = 0f
    float ecx_5 = var_34
    int32_t var_20 = 0
    var_1c = 0f
    var_18 = ecx_5
    float var_14_1 = var_30_1
    float var_10_1 = var_2c_1
    int32_t result
    float* entry_ebx
    int80_t st0
    st0, result = sub_4d7d80(&var_4c, &var_24, entry_ebx)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
