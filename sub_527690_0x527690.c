// 函数名称: sub_527690
// 虚拟地址: 0x527690
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_527690(int32_t* arg1, float arg2, int32_t arg3)
{
    // 第一条实际指令: float var_3c
    float var_3c
    __builtin_memcpy(&var_3c, 0x840974, 0x24)
    long double x87_r6 = fconvert.t(arg2)
    var_3c = fconvert.s(fconvert.t(var_3c) * x87_r6)
    float var_30
    float var_30_1 = fconvert.s(fconvert.t(var_30) * x87_r6)
    float var_24
    float var_24_1 = fconvert.s(fconvert.t(var_24) * x87_r6)
    float var_38
    float var_38_1 = fconvert.s(x87_r6 * fconvert.t(var_38))
    float var_2c
    float var_2c_1 = fconvert.s(fconvert.t(var_2c) * x87_r6)
    float var_20
    float var_20_1 = fconvert.s(x87_r6 * fconvert.t(var_20))
    float eax
    float edx
    float* entry_ebx
    eax, edx = sub_40af40(entry_ebx)
    long double x87_r6_10 = fconvert.t(arg2)
    int32_t result
    int80_t st0
    st0, result = sub_4e41f0(arg1, arg3, &var_3c, arg1, 
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(eax) / x87_r6_10))), 
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(edx) / x87_r6_10))), 
        fconvert.s(fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(fconvert.t(entry_ebx[2]) - fconvert.t(*entry_ebx))) / x87_r6_10))), 
        fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(entry_ebx[3]) - fconvert.t(entry_ebx[1]))) / x87_r6_10))))
    return result
}
