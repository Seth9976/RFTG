// 函数名称: sub_54f4a0
// 虚拟地址: 0x54f4a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __fastcallsub_54f4a0(float* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69346c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_f4 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    long double x87_r7 = fconvert.t(0.78539818525314331)
    int32_t mxcsr
    int16_t x87control
    sub_68b980(mxcsr, x87control, x87_r7)
    char var_1c = 0
    float var_4c = fconvert.s(fconvert.t(fconvert.s(x87_r7)))
    long double x87_r7_2 = float.t(1)
    float var_48 = fconvert.s(x87_r7_2)
    float var_44 = fconvert.s(fconvert.t(0.100000001f))
    float var_40 = fconvert.s(fconvert.t(100f))
    float var_18 = fconvert.s(x87_r7_2)
    void var_3c
    __builtin_memcpy(&var_3c, &data_be4c5c, 0x20)
    sub_4ddf40(&var_4c)
    bool cond:0 = (data_3165954 & 1) != 0
    data_27e8020 = 0xff00ffff
    
    if (not(cond:0))
        data_3165954.d |= 1
        int32_t var_8_1 = 0
        data_3165950 = sub_509140(3, "sys/white_pixel.texture")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3165954 & 2) == 0)
        data_3165954.d |= 2
        int32_t var_8_3 = 1
        data_316594c = sub_509140(5, "sys/pbr/ibl_brdf_lut.material")
        int32_t var_8_4 = 0xffffffff
    
    void var_84
    int32_t eax_5
    int32_t edx
    eax_5, edx = sub_4dae90(&var_84)
    float var_34[0x4]
    __builtin_memcpy(&var_34, eax_5, 0x20)
    void var_e4
    sub_406370(&var_e4, edx, &var_34)
    void* eax_7 = data_27e7fe4
    void var_a4
    __builtin_memcpy(&var_a4, &var_e4, 0x40)
    *(eax_7 + 0xdc) = 1
    __builtin_memcpy(eax_7 + 0x9c, &var_a4, 0x40)
    void var_20
    sub_4e2000(&var_20)
    long double x87_r7_3 = float.t(0)
    float var_5c = fconvert.s(x87_r7_3)
    float edx_1 = var_5c
    float var_58 = fconvert.s(x87_r7_3)
    float var_54 = fconvert.s(fconvert.t(*arg1))
    float var_70 = var_58
    float eax_10 = data_27e7fe0
    bool cond:1 = *(eax_10 i+ 0x38) == 0
    float var_50 = fconvert.s(fconvert.t(arg1[1]))
    float ecx_2 = var_54
    float var_74 = edx_1
    float var_6c = ecx_2
    float var_68 = var_50
    
    if (cond:1)
        sub_4d9830(eax_10, &data_be4aac, data_3165950, &data_84076c, &var_74, data_316594c)
    else
        eax_10 = sub_4d9650(&var_74, eax_10 i+ 0x28, &data_84076c, &var_5c, &var_74)
        void var_24
        
        if (eax_10.b != 0)
            sub_4d9830(eax_10, &data_be4aac, data_3165950, &var_5c, &var_24, data_316594c)
    
    void* eax_12 = data_27e7fe4
    *(eax_12 + 0x254) = 0
    __builtin_memcpy(eax_12 + 0x9c, 0x83faf8, 0x40)
    *(eax_12 + 0xdc) = 0
    sub_4e2080()
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
}
