// 函数名称: sub_431b80
// 虚拟地址: 0x431b80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_431b80(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: float var_c = fconvert.s(fconvert.t(0.196349546f))
    float var_c = fconvert.s(fconvert.t(0.196349546f))
    
    if (arg3 == 2)
        var_c = fconvert.s(fconvert.t(0.142799675f))
    
    void var_40
    int32_t eax_1
    int16_t x87control
    eax_1, x87control = sub_431860(&var_40, arg4, arg3, 0f, 0f, 1f, 
        fconvert.s(fconvert.t(1.20000005f)), fconvert.s(fconvert.t(var_c)), 
        fconvert.s(fconvert.t(1.04719758f)))
    void* entry_result
    __builtin_memcpy(entry_result, eax_1, 0x20)
    int32_t ecx
    int32_t mxcsr
    long double st0
    st0, ecx = sub_686860(mxcsr, x87control, fconvert.t(-0.20000000298023224))
    int32_t var_4c_1 = ecx
    float var_24 = fconvert.s(fconvert.t(fconvert.s(st0)))
    long double x87_r7_10 = fconvert.t(fconvert.s(sub_406680(fconvert.s(fconvert.t(-0.200000003f)))))
    float var_20 = fconvert.s(x87_r7_10)
    var_20 = var_20
    long double x87_r7_12 = fconvert.t(fconvert.s(x87_r7_10 * fconvert.t(0.0)))
    float var_18_1 = fconvert.s(x87_r7_12)
    float var_1c_1 = fconvert.s(x87_r7_12)
    float var_14 = var_24
    float var_30
    sub_405ee0(&var_30, &var_20, entry_result + 4)
    *(entry_result + 4) = var_30
    int32_t var_2c
    *(entry_result + 8) = var_2c
    int32_t var_28
    *(entry_result + 0xc) = var_28
    *(entry_result + 0x10) = var_24
    return entry_result
}
