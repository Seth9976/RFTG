// 函数名称: sub_514bb0
// 虚拟地址: 0x514bb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_514bb0()
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_690308
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_2e0
    int32_t eax_2 = __security_cookie ^ &var_2e0
    int32_t __saved_edi
    int32_t var_2ec = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* entry_ebx
    
    if (entry_ebx[3] == 0)
        char* const var_2d8 = &data_83f3d3
        void* (__fastcall* var_2f0_1)(int32_t* arg1) = sub_514da0
        int32_t var_c_1 = 0
        void var_2d4
        sub_5a7116(&var_2d4, 8, 0x20, sub_514d90)
        int32_t var_1d4_1 = 0
        int128_t var_1d0[0x4]
        sub_5abfc0(&var_1d0, 0, 0x40)
        int32_t var_190
        __builtin_memset(&var_190, 0, 0x18)
        int128_t var_178[0xc]
        sub_5abfc0(&var_178, 0, 0xc0)
        int128_t var_b8[0x8]
        sub_5abfc0(&var_b8, 0, 0x80)
        int32_t var_38
        __builtin_memset(&var_38, 0, 0x18)
        int32_t var_c_2 = 1
        int32_t* eax_5 = *entry_ebx
        char* const* var_2f0_2 = &var_2d8
        int32_t var_2f4_1 = entry_ebx[1]
        int32_t var_2dc = 0xffffffff
        sub_5136d0(&var_2e0, "main", &var_2dc, eax_5)
        char* eax_6 = var_2e0
        
        if (eax_6 != 0 && *eax_6 != 0)
            void* eax_8 = sub_4c4060(&var_2e0)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_2 = *(eax_8 + 0xc) + 0x10
                sub_4f4430(eax_8, sub_4f4380(esi_2), esi_2)
        
        char* const* var_2f0_4 = &var_2d8
        char** eax_11
        int32_t ecx_2
        void* edx_2
        eax_11, ecx_2, edx_2 = sub_5138e0()
        char** var_2f0_5 = eax_11
        entry_ebx[4] = eax_11
        int32_t* var_2f4_2 = entry_ebx
        entry_ebx[3] = sub_514b20(&var_2d8, edx_2, ecx_2)
        int32_t var_c_3 = 0xffffffff
        sub_514e50(&var_2d8)
    
    int32_t result = entry_ebx[3]
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_2e0)
    return result
}
