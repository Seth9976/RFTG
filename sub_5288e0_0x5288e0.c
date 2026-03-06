// 函数名称: sub_5288e0
// 虚拟地址: 0x5288e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_5288e0(float arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6931f8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_50 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_27e7fd0
    int32_t ecx = data_30d9510
    float var_18 = fconvert.s(float.t(*(eax_3 + 0x14)))
    int32_t var_54 = data_30d9514
    int32_t var_58 = ecx
    float var_1c = fconvert.s(float.t(*(eax_3 + 0x18)))
    long double x87_r7_2 = float.t(0)
    float var_30 = fconvert.s(x87_r7_2)
    float var_24 = fconvert.s(fconvert.t(var_1c))
    float var_60 = fconvert.s(fconvert.t(var_18))
    float var_5c = var_24
    float var_6c = var_24
    float var_40
    sub_527e80(&var_40, fconvert.s(fconvert.t(data_30d950c)), var_30, fconvert.s(x87_r7_2))
    var_30 = var_40
    int32_t var_3c
    int32_t var_2c_1 = var_3c
    int32_t var_38
    int32_t var_28_1 = var_38
    int32_t var_34
    int32_t var_24_1 = var_34
    int32_t ecx_4
    int80_t result
    result, ecx_4 = sub_525c20(var_34, data_30d74e8, &data_30d74ec, &var_30)
    sub_4c42b0(&var_18, "editor")
    int32_t var_8_1 = 0
    int32_t* edx_5 = data_30d74ec
    void* eax_7
    int32_t ecx_5
    eax_7, ecx_5 = sub_530500(ecx_4, edx_5)
    float* var_54_2 = &var_18
    sub_528650(eax_7, 0, edx_5)
    int32_t var_8_2 = 0xffffffff
    float eax_8 = var_18
    
    if (eax_8 != 0 && *eax_8 != 0)
        void* eax_10 = sub_4c4060(&var_18)
        int32_t temp0_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_10 + 0xc) + 0x10
            ecx_5 = sub_4f4430(eax_10, sub_4f4380(esi_2), esi_2)
    
    int32_t edx_6 = data_30d74ec
    data_30d94f0 = 0
    
    if (edx_6 != 0)
        void* eax_13
        eax_13, ecx_5 = sub_530500(ecx_5, edx_6)
        int32_t i = 0
        
        if (*(eax_13 + 0x19d0) s> 0)
            void* edi_2 = eax_13 + 0x15d0
            
            do
                void* eax_14
                eax_14, ecx_5 = sub_530500(ecx_5, *edi_2)
                sub_5285e0(eax_14, &data_30d74f0, &data_30d94f0, nullptr)
                i += 1
                edi_2 += 4
            while (i s< *(eax_13 + 0x19d0))
    
    data_30d74ec
    int32_t var_54_4 = ecx_5
    float var_54_5 = fconvert.s(fconvert.t(arg1))
    sub_5273f0()
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
