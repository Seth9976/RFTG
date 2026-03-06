// 函数名称: sub_4123d0
// 虚拟地址: 0x4123d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4123d0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* esi = data_27e7a70
    *(esi + 0x38) = data_307b6b0
    *(esi + 0x3c) = data_307b6b4
    *(esi + 0x40) = data_307b6b8
    *(esi + 0x44) = 0
    *(esi + 0x48) = 0
    *(esi + 0x4c) = 0
    *(esi + 0x50) = 0x3f800000
    float var_44
    sub_405900(&var_44, 0x3f800000, esi + 0x44)
    float var_14 = var_44
    long double x87_r7 = fconvert.t(var_14)
    float var_20 = *(esi + 0x38)
    float eax_5 = *(esi + 0x40)
    float var_40
    float var_30 = fconvert.s(fconvert.t(var_40) + fconvert.t(*(esi + 0x3c)))
    var_14 = fconvert.s(x87_r7 + fconvert.t(var_20))
    float var_10_1 = var_30
    float var_3c
    float var_2c = fconvert.s(fconvert.t(var_3c) + fconvert.t(eax_5))
    float var_c_1 = var_2c
    int32_t result = sub_4138d0(var_2c, esi + 0x10, &var_14, &var_20, &data_8409cc)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
