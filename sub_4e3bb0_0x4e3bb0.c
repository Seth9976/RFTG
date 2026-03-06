// 函数名称: sub_4e3bb0
// 虚拟地址: 0x4e3bb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_4e3bb0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68cae1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t edi
    int32_t var_20 = edi
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = data_26a44e4
    
    if (esi == 0)
        sub_4f4250()
        esi = data_26a44e4
    
    int32_t edx = 0
    int32_t* esi_1
    
    while (true)
        if (1 << (edx.b + 4) s>= 0x280)
            esi_1 = esi + edx * 0x14
            break
        
        edx += 1
        
        if (edx s>= 7)
            esi_1 = esi + 0x8c
            break
    
    esi_1[3] += 1
    
    if (*esi_1 == 0)
        sub_4f4170(esi_1)
    
    int32_t* edi_2 = *esi_1
    *esi_1 = *edi_2
    sub_5abfc0(edi_2, 0, 0x280)
    int32_t* var_14 = edi_2
    int32_t* var_18 = edi_2
    int32_t var_8_1 = 0
    
    if (edi_2 == 0)
        edi_2 = nullptr
    else
        void* (__fastcall* var_28_1)(int32_t* arg1) = sub_407cd0
        sub_5a7116(edi_2, 0x4c, 8, sub_407c40)
    
    data_26a44e0 = edi_2
    BOOL result = InitializeCriticalSectionAndSpinCount(&edi_2[0x9a], 0x400)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
