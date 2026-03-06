// 函数名称: sub_4ec490
// 虚拟地址: 0x4ec490
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __fastcallsub_4ec490(int32_t* arg1, void* arg2, long double arg3 @ st0)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int16_t x87control = sub_4eb7e0(arg1, *(arg2 + 0x30))
    float var_20 = fconvert.s(arg3)
    
    if ((data_3160084.b & 1) == 0)
        long double x87_r0 = fconvert.t(data_be1abc)
        data_3160084 |= 1
        data_316007c = fconvert.s(x87_r0 / fconvert.t(360.0))
    
    void* edi = *(arg2 + 0x30)
    float var_20_3 = fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(data_316007c) * fconvert.t(var_20)))
        * fconvert.t(*(*(edi + 0x2e4) + 0x58)))) * fconvert.t(0.5))
    int32_t ecx
    int32_t mxcsr
    long double st0
    st0, ecx = sub_686860(mxcsr, x87control, fconvert.t(var_20_3))
    int32_t var_40 = ecx
    float result = fconvert.s(fconvert.t(fconvert.s(st0)))
    long double x87_r7 = fconvert.t(fconvert.s(sub_406680(fconvert.s(fconvert.t(var_20_3)))))
    float var_1c = fconvert.s(fconvert.t(*(arg2 + 0x18)) * x87_r7)
    long double x87_r7_2 = fconvert.t(*(arg2 + 0x1c))
    var_1c = var_1c
    float var_18_1 = fconvert.s(x87_r7_2 * x87_r7)
    float result_1 = result
    float var_14_1 = fconvert.s(x87_r7 * fconvert.t(*(arg2 + 0x20)))
    float var_34
    sub_405ee0(&var_34, edi + 0x28c, &var_1c)
    *(edi + 0x28c) = var_34
    int32_t var_30
    *(edi + 0x290) = var_30
    int32_t var_2c
    *(edi + 0x294) = var_2c
    *(edi + 0x298) = result
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
