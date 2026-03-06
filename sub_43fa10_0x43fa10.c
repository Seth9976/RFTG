// 函数名称: sub_43fa10
// 虚拟地址: 0x43fa10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_43fa10()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690ade
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* edi = data_27e7a40
    var_14:3.b = 0
    var_14:2.b = 0
    char edx
    
    if (*(edi + 0x2c4960) == 2)
        char eax_3
        eax_3, edx = sub_44b860()
        edi = data_27e7a40
        
        if (eax_3 != 0 || *(edi + 0x2c4960) == 1)
        label_43fa65:
            int32_t ebx_1 = *(edi + 0x2c4958)
            int32_t esi_1 = 0
            
            if (ebx_1 s> 0)
                do
                    if (*(edi + 0x2c4960) != 2 || esi_1 != *(edi + 0x2c495c))
                        char eax_5
                        eax_5, edx = sub_4194d0(esi_1)
                        
                        if (eax_5 != 0)
                            goto label_43faa8
                    
                    esi_1 += 1
                while (esi_1 s< ebx_1)
            
            if (data_27c060c != 0 && *(edi + 0x2c4960) != 1)
                var_14:2.b = 1
            label_43faa8:
                var_14:3.b = 1
    else if (*(edi + 0x2c4960) == 1)
        goto label_43fa65
    
    if ((data_31652b8 & 1) == 0)
        data_31652b8.d |= 1
        int32_t var_8_1 = 0
        int32_t eax_7
        eax_7, edx = sub_4f5220(data_307c530, "btn_next")
        int32_t var_8_2 = 0xffffffff
        edi = data_27e7a40
        data_31652b4 = eax_7
    
    int32_t* edi_1 = *(edi + 0x548)
    int32_t var_28 = 0
    sub_4fa4e0(*edi_1, data_31652b4, edx)
    int32_t ebx_2 = data_31652b4
    int32_t eax_9
    int32_t ecx_2
    eax_9, ecx_2 = sub_4fc3d0(&data_be1cb8, *edi_1)
    
    if (ebx_2 s>= 0x100)
        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_1 = *(eax_9 + (ebx_2 << 2) + 0x30)
    int128_t* eax_11
    
    if (edx_1 != 0)
        eax_11 = sub_4fc1e0(ecx_2, edx_1)
    else
        eax_11 = sub_4fc0d0()
        *(eax_11 + 4) = &data_83f3d3
        *(eax_9 + (ebx_2 << 2) + 0x30) = *(eax_11 + 0x1bc)
    
    int32_t ebx_3 = data_31652b4
    *(eax_11 + 0x21) = var_14:3.b == 0
    int32_t eax_12
    int32_t ecx_4
    eax_12, ecx_4 = sub_4fc3d0(&data_be1cb8, *edi_1)
    char const* const eax_17
    int128_t* esi_6
    
    if (var_14:2.b != 1)
        if (ebx_3 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_5 = *(eax_12 + (ebx_3 << 2) + 0x30)
        int128_t* eax_22
        
        if (edx_5 != 0)
            eax_22 = sub_4fc1e0(ecx_4, edx_5)
        else
            eax_22 = sub_4fc0d0()
            *(eax_22 + 4) = &data_83f3d3
            *(eax_12 + (ebx_3 << 2) + 0x30) = *(eax_22 + 0x1bc)
        
        esi_6 = eax_22
        *(esi_6 + 0x64) = *esi_6 + 1
        eax_17 = "Next Game"
    else
        if (ebx_3 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_3 = *(eax_12 + (ebx_3 << 2) + 0x30)
        
        if (edx_3 != 0)
            esi_6 = sub_4fc1e0(ecx_4, edx_3)
            *(esi_6 + 0x64) = *esi_6 + 1
            eax_17 = "Next Game - Local"
        else
            int128_t* eax_14 = sub_4fc0d0()
            *(eax_14 + 4) = &data_83f3d3
            *(eax_12 + (ebx_3 << 2) + 0x30) = *(eax_14 + 0x1bc)
            esi_6 = eax_14
            *(esi_6 + 0x64) = *esi_6 + 1
            eax_17 = "Next Game - Local"
    
    int32_t* result = sub_4c4590(eax_17)
    *(esi_6 + 0x151) = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
