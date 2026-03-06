// 函数名称: sub_403c90
// 虚拟地址: 0x403c90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_403c90(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d24b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_188 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void var_170
    sub_5abfc0(&var_170, 0, 0x158)
    int32_t var_16c = *(arg3 + 0x10)
    int32_t var_168 = *(arg3 + 0x14)
    int32_t var_144 = *(arg3 + 0x18)
    int32_t var_140 = 0
    char* const var_174 = &data_83f3d3
    int32_t var_8_1 = 0
    sub_4c4590("PC")
    char* const ebx = var_174
    char* const eax_7
    
    if (ebx == 0)
        eax_7 = &data_83f3d3
    else
        if (*ebx != 0 && *(sub_4c4060(&var_174) + 8) s>= 0xfe)
            sub_4c5870("firebaseToken.Length() < MAX_FIREBASE_IDENTIFIER_LENGTH - 1", &data_83f3d3, 
                "..\code\CClient.cpp", 0x574, "GameSettingsToLoginData")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        eax_7 = ebx
    
    void var_11c
    char* edx_1 = &var_11c - eax_7
    int32_t ecx
    
    do
        ecx.b = *eax_7
        *(edx_1 + eax_7) = ecx.b
        eax_7 = &eax_7[1]
    while (ecx.b != 0)
    
    char eax_8
    int32_t ecx_1
    eax_8, ecx_1 = sub_4b95c0(ecx, 4)
    
    if (eax_8 == 0)
        char eax_9
        int32_t ecx_2
        eax_9, ecx_2 = sub_4b95c0(ecx_1, 3)
        
        if (eax_9 == 0)
            if (sub_4b95c0(ecx_2, 2) != 0)
                int32_t var_140_3 = 1
        else
            int32_t var_140_2 = 2
    else
        int32_t var_140_1 = 3
    
    char var_164[0x1f]
    _strncpy(&var_164, arg3, 0x20)
    char var_145 = 0
    char var_13c[0x1f]
    _strncpy(&var_13c, &arg3[0x20], 0x20)
    char var_11d = 0
    __builtin_memcpy(arg4, &var_170, 0x158)
    int32_t var_8_2 = 0xffffffff
    
    if (ebx != 0 && *ebx != 0)
        void* eax_12 = sub_4c4060(&var_174)
        int32_t temp0_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_3 = *(eax_12 + 0xc) + 0x10
            sub_4f4430(eax_12, sub_4f4380(esi_3), esi_3)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return arg4
}
