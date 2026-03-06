// 函数名称: sub_480860
// 虚拟地址: 0x480860
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_480860(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_693376
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_316593c & 1) == 0)
        data_316593c.d |= 1
        int32_t var_8_1 = 0
        data_3165938 = sub_4f5220(data_307c620, "AvatarImage")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_316593c & 2) == 0)
        data_316593c.d |= 2
        int32_t var_8_3 = 1
        data_3161144 = sub_4f5220(data_307c620, "Name")
        int32_t var_8_4 = 0xffffffff
    
    *(sub_4fc3d0(&data_be1cb8, arg1) + 0x2c) = sub_47f640
    char* const result_1 = &data_83f3d3
    int32_t var_8_5 = 2
    char const* const eax_7 = "Go Online"
    
    if (*(data_27e7a54 + 0x50) == 0)
        eax_7 = "Go Offline"
    
    sub_4c4590(eax_7)
    
    if ((data_316593c & 4) == 0)
        data_316593c.d |= 4
        var_8_5.b = 3
        data_3165934 = sub_4f5220(data_307c620, "BtnOffline")
        var_8_5.b = 2
    
    char* const result_2 = result_1
    char* const result_3 = &data_83f3d3
    
    if (result_2 != 0)
        result_3 = result_2
    
    int128_t* eax_11 = sub_4f6e90(data_3165934, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    char* const result_4 = result_3
    *(eax_11 + 0x64) = *eax_11 + 1
    sub_4c4590(result_4)
    bool cond:1 = (data_316593c & 8) != 0
    *(eax_11 + 0x151) = 1
    
    if (not(cond:1))
        data_316593c.d |= 8
        var_8_5.b = 4
        data_3165930 = sub_4f5220(data_307c620, "BtnOK")
        var_8_5.b = 2
    
    int128_t* eax_14
    eax_14.b = *(sub_4f6e90(data_3161144, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3) + 0x15c)
    
    if (eax_14.b == 0)
        char* edi_7 = data_27e7a54
        
        if (edi_7 == 0)
            sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_4c42b0(&result_3, edi_7)
        var_8_5.b = 5
        char* const result_5 = result_3
        int32_t var_1c_1
        
        if (result_5 == 0 || *result_5 == 0)
            var_1c_1 = 0
        else
            var_1c_1 = *(sub_4c4060(&result_3) + 8)
        
        var_8_5.b = 2
        *(sub_4f6e90(data_3165930, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3) + 0x23) = var_1c_1 s< 1
        char* const result_6 = result_3
        
        if (result_6 != 0 && *result_6 != 0)
            void* eax_28 = sub_4c4060(&result_3)
            int32_t temp0_1 = *(eax_28 + 4)
            *(eax_28 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_13 = *(eax_28 + 0xc) + 0x10
                sub_4f4430(eax_28, sub_4f4380(esi_13), esi_13)
    else
        int128_t* eax_16 = sub_4f6e90(data_3161144, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        char* ecx_4 = eax_16[0x16].d
        
        if (ecx_4 == 0 || *ecx_4 == 0)
            result_3 = nullptr
        else
            result_3 = *(sub_4c4060(&eax_16[0x16]) + 8)
        
        int128_t* eax_21 = sub_4f6e90(data_3165930, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        *(eax_21 + 0x23) = result_3 s< 1
    
    if ((data_316593c & 0x10) == 0)
        data_316593c.d |= 0x10
        var_8_5.b = 6
        data_316592c = sub_4f5220(data_307c620, "imgOnlineIndicator")
        var_8_5.b = 2
    
    int32_t eax_33
    
    if (*(data_27e7a54 + 0x50) == 0)
        void* eax_34 = data_27e7a40
        
        if (eax_34 == 0)
            sub_4075c0()
            void* eax_35 = data_27e7a40
            int32_t edi_12 = *(eax_35 + 0x20)
            int32_t esi_14 = *(eax_35 + 0x24)
            sub_407670()
            
            if (esi_14 != 8 || edi_12 != 2)
                eax_33 = 2
            else
                eax_33 = 0
        else if (*(eax_34 + 0x24) != 8 || *(eax_34 + 0x20) != 2)
            eax_33 = 2
        else
            eax_33 = 0
    else
        eax_33 = 1
    
    if (eax_33 == 0)
        result_3 = data_307c558
    else if (eax_33 == 1)
        result_3 = data_307c55c
    else
        if (eax_33 != 2)
            sub_4c5870("Halt", &data_83f3d3, "..\code\UsernameSetupDlg.cpp", 0x34f, 
                "OnlineStatusIndicator")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result_3 = data_307c554
    
    int32_t* eax_42 = sub_4f6e90(data_316592c, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    char* const result_7 = result_3
    eax_42[0x25] = *eax_42 + 1
    eax_42[0x26] = result_7
    int32_t eax_45 = sub_4ba260(*(data_27e7a54 + 0x18))
    int128_t* eax_47 = sub_4f6e90(data_3165938, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    int32_t edi_17 = data_3161144
    *(eax_47 + 0x94) = *eax_47 + 1
    *(eax_47 + 0x98) = eax_45
    char* eax_48 = data_27e7a54
    int128_t* eax_50 = sub_4f6e90(edi_17, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    *(eax_50 + 0x64) = *eax_50 + 1
    sub_4c4590(eax_48)
    *(eax_50 + 0x151) = 1
    int32_t var_8_6 = 0xffffffff
    void* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp4_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp4_1 == 1)
            int32_t esi_23 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_23), esi_23)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
