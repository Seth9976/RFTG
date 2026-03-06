// 函数名称: sub_52b1d0
// 虚拟地址: 0x52b1d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_52b1d0(int32_t arg1, int32_t arg2 @ edi)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691a2c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t var_14 = arg1
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t esi_1 = *(sub_52ae50(arg1) + 4)
    void* eax_4 = sub_530500(arg1, arg2)
    
    if (esi_1 != 0x66)
        sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0x11f8, "FieldGetComboOptions")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* ecx = data_be1ef8
    
    if (ecx != 0)
        int32_t eax_6 = *(eax_4 + 0x14c0)
        
        if (eax_6 == 3)
            if ((data_3165630 & 1) == 0)
                data_3165630.d |= 1
                int32_t var_8_1 = 0
                data_31655e8 = sub_52af70(1, arg2, ecx, 3, 0x31655f0)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0x31655f0
        
        if (eax_6 == 5)
            if ((data_3165630 & 2) == 0)
                data_3165630.d |= 2
                int32_t var_8_2 = 1
                data_31655a0 = sub_52af70(2, arg2, ecx, 5, 0x31655a8)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0x31655a8
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return &data_bec298
}
