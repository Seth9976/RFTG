// 函数名称: sub_5003c0
// 虚拟地址: 0x5003c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOL __convention("regparm")sub_5003c0(int32_t arg1, int32_t arg2, char* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d748
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg3
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = arg4
    WIN32_FIND_DATAA* lpFindFileData
    
    if (esi[0x52].b != 0)
        lpFindFileData = &esi[1]
        
        if (FindNextFileA(esi[0x51], lpFindFileData) != 1)
            FindClose(esi[0x51])
            BOOL eax_18
            eax_18.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_18
    else
        char* eax_3 = sub_4c6050()
        
        if (eax_3 == 0)
            sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        char* edx = sub_4c42b0(&var_14, eax_3)
        int32_t var_8_1 = 0
        char* esi_2 = var_14
        char* const eax_5 = &data_83f3d3
        
        if (esi_2 != 0)
            eax_5 = esi_2
        
        lpFindFileData = &arg4[1]
        void* eax_6 = sub_4c5b00(eax_5, edx, lpFindFileData, eax_5)
        
        if (eax_6.b == 0)
            int32_t var_8_2 = 0xffffffff
            
            if (esi_2 != 0 && *esi_2 != eax_6.b)
                eax_6 = sub_4c4060(&var_14)
                int32_t temp1_1 = *(eax_6 + 4)
                *(eax_6 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_4 = *(eax_6 + 0xc) + 0x10
                    sub_4f4430(eax_6, sub_4f4380(esi_4), esi_4)
            
            eax_6.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_6
        
        arg4[0x52].b = 1
        int32_t var_8_3 = 0xffffffff
        
        if (esi_2 != 0 && *esi_2 != 0)
            void* eax_11 = sub_4c4060(&var_14)
            int32_t temp0_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_6 = *(eax_11 + 0xc) + 0x10
                sub_4f4430(eax_11, sub_4f4380(esi_6), esi_6)
        
        esi = arg4
    
    BOOL i
    
    do
        if (((lpFindFileData->dwFileAttributes u>> 4).b & 1) == 0)
            *arg5 = *esi
            sub_4c4590(&esi[0xc])
            int32_t* eax_20
            eax_20.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_20
        
        i = FindNextFileA(lpFindFileData->__offset(0x140).d, lpFindFileData)
    while (i == 1)
    FindClose(esi[0x51])
    BOOL eax_15
    eax_15.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_15
}
