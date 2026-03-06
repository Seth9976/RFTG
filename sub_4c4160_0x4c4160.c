// 函数名称: sub_4c4160
// 虚拟地址: 0x4c4160
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4c4160(int32_t arg1, void** arg2, int32_t* arg3, void** arg4, char arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d158
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* eax_3 = *arg3
    
    if (eax_3 == 0 || *eax_3 == 0)
        int32_t* var_30_1 = arg3
        void* eax_5 = sub_4c40c0(arg4, arg2)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5
    
    void* eax_7 = sub_4c4060(arg3)
    void* ecx_2 = *(eax_7 + 8)
    void** edx = arg4
    
    if (*(eax_7 + 0xc) s>= edx + 1 && *(eax_7 + 4) s<= 1)
        *(eax_7 + 8) = edx
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
    
    char* esi = *arg3
    char* var_14 = esi
    
    if (esi != 0 && *esi != 0)
        void* eax_9 = sub_4c4060(&var_14)
        *(eax_9 + 4) += 1
    
    int32_t var_8_1 = 0
    char* eax_10 = *arg3
    
    if (eax_10 != 0 && *eax_10 != 0)
        void* eax_12 = sub_4c4060(arg3)
        int32_t temp0_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_12 + 0xc) + 0x10
            edx = sub_4f4430(eax_12, sub_4f4380(esi_2), esi_2)
            esi = var_14
    
    int32_t* var_30_3 = arg3
    int128_t* eax_16 = sub_4c40c0(arg4, edx)
    
    if (arg5 != 0)
        eax_16 = sub_5ab990(*arg3, esi, ecx_2, eax_2)
    
    int32_t var_8_2 = 0xffffffff
    
    if (esi != 0 && *esi != 0)
        eax_16 = sub_4c4060(&var_14)
        int32_t temp1_1 = *(eax_16 + 4)
        *(eax_16 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_4 = *(eax_16 + 0xc) + 0x10
            eax_16 = sub_4f4430(eax_16, sub_4f4380(esi_4), esi_4)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_16
}
