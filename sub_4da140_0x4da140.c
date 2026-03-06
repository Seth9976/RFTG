// 函数名称: sub_4da140
// 虚拟地址: 0x4da140
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4da140(int32_t arg1, int32_t arg2, float* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69374e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_64 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_316599c & 1) == 0)
        data_316599c.d |= 1
        int32_t var_c_1 = 0
        data_3165998 = sub_509140(3, "sys\white_pixel.texture")
        int32_t var_c_2 = 0xffffffff
    
    long double x87_r7 = fconvert.t(0.5f)
    int32_t ecx = *arg4
    float var_48 = fconvert.s(x87_r7)
    float var_44 = fconvert.s(x87_r7)
    float var_40 = fconvert.s(x87_r7)
    float var_38 = var_48
    int16_t var_53 = 0
    char var_51 = 0
    float var_2c = fconvert.s(x87_r7)
    float eax_7 = data_27e7fe0
    int32_t var_50 = ecx
    int32_t var_4c = 0.d
    float var_34 = var_44
    float var_30 = var_40
    float* esi = &var_38
    
    if (*(eax_7 i+ 0x38) == 0)
        int32_t var_68_2 = 0
        sub_4d9830(eax_7, &var_50, data_3165998, esi, arg3, nullptr)
    else
        eax_7 = sub_4d9650(eax_7, eax_7 i+ 0x28, esi, &var_48, arg3)
        
        if (eax_7.b != 0)
            int32_t var_68_1 = 0
            void var_28
            sub_4d9830(eax_7, &var_50, data_3165998, &var_48, &var_28, nullptr)
    
    fsbase->NtTib.ExceptionList = ExceptionList
}
