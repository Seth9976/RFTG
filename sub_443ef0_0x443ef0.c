// 函数名称: sub_443ef0
// 虚拟地址: 0x443ef0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_443ef0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69217a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_27e7a40
    
    if (*(eax_3 + 0x2c4960) == 0)
        char edx
        
        if ((data_316570c & 1) == 0)
            data_316570c.d |= 1
            int32_t var_8_1 = 0
            int32_t eax_5
            eax_5, edx = sub_4f5220(data_307c6f8, "animDlg")
            data_3165708 = eax_5
            int32_t var_8_2 = 0xffffffff
        
        int32_t var_3c = 1
        int32_t eax_7 = sub_4fa4e0(arg1, data_3165708, edx)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
    
    void* eax_8 = sub_46b2b0(*(eax_3 + 0x74))
    void* var_24 = eax_8
    int32_t ebx
    
    if (*(eax_8 + 0x1c) != 0x18 || *(eax_8 + 0x1f90) != 0)
        ebx.b = 0
    else
        ebx.b = 1
    
    if ((data_316570c & 2) == 0)
        data_316570c.d |= 2
        int32_t var_8_3 = 1
        data_3165704 = sub_4f5220(data_307c6f8, "animDlg")
        int32_t var_8_4 = 0xffffffff
    
    float edx_2 = data_3165704
    int32_t ebx_1 = arg1
    eax_8.b = ebx.b == 0
    uint32_t var_3c_1 = zx.d(eax_8.b)
    sub_4fa4e0(ebx_1, edx_2, edx_2.b)
    void* eax_10 = sub_4fc3d0(&data_be1cb8, ebx_1)
    bool cond:2 = (data_316570c & 4) != 0
    *(eax_10 + 0x2c) = sub_443560
    
    if (not(cond:2))
        data_316570c.d |= 4
        int32_t var_8_5 = 2
        data_3165700 = sub_4f5220(data_307c6f8, "txtHelp")
        int32_t var_8_6 = 0xffffffff
    
    int128_t* eax_14 = sub_4f6e90(data_3165700, sub_4fc3d0(&data_be1cb8, ebx_1), &data_83f3d3)
    *eax_14 += 1
    int32_t var_18 = 0
    
    while (true)
        void* eax_15 = sub_443820(var_18)
        int32_t ecx_4 = *eax_15
        int32_t eax_16
        int32_t ecx_5
        eax_16, ecx_5 = sub_4fc3d0(&data_be1cb8, ebx_1)
        
        if (ecx_4 s>= 0x100)
            break
        
        int32_t edx_3 = *(eax_16 + (ecx_4 << 2) + 0x30)
        int128_t* eax_18
        
        if (edx_3 != 0)
            eax_18 = sub_4fc1e0(ecx_5, edx_3)
        else
            eax_18 = sub_4fc0d0()
            *(eax_18 + 4) = &data_83f3d3
            *(eax_16 + (ecx_4 << 2) + 0x30) = *(eax_18 + 0x1bc)
        
        *eax_18 += 1
        int32_t edi_3 = *eax_15
        
        if (*(var_24 + 0x1f8c) != var_18)
            int32_t edx_9 = data_307c0a0
            int128_t* eax_27 = sub_4f6e90(edi_3, sub_4fc3d0(&data_be1cb8, ebx_1), &data_83f3d3)
            *(eax_27 + 0x94) = *eax_27 + 1
            *(eax_27 + 0x98) = edx_9
        else
            int32_t ecx_7 = data_307c09c
            int128_t* eax_21 = sub_4f6e90(edi_3, sub_4fc3d0(&data_be1cb8, ebx_1), &data_83f3d3)
            int32_t edi_5 = data_3165700
            *(eax_21 + 0x94) = *eax_21 + 1
            *(eax_21 + 0x98) = ecx_7
            char* eax_22 = *(eax_15 + 4)
            int128_t* eax_24 = sub_4f6e90(edi_5, sub_4fc3d0(&data_be1cb8, ebx_1), &data_83f3d3)
            *(eax_24 + 0x64) = *eax_24 + 1
            sub_4c4590(eax_22)
            ebx_1 = arg1
            *(eax_24 + 0x151) = 1
        
        if (var_18 == 8)
            void* eax_29 = *(data_27e7a40 + 0x548)
            
            if (eax_29 == 0)
                sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, 
                    "GetGame")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* ecx_13 = *(eax_29 + 0x45844)
            eax_29.b = *(ecx_13 + 0x45a)
            int32_t var_1c_5
            
            if (eax_29.b s> 1 && eax_29.b s< 4)
                var_1c_5 = 1
            
            if (eax_29.b s<= 1 || eax_29.b s>= 4 || *(ecx_13 + 0x45c) != 0)
                var_1c_5 = 0
            
            *(sub_4f6e90(*eax_15, sub_4fc3d0(&data_be1cb8, ebx_1), &data_83f3d3) + 0x23) = var_1c_5 == 0
        
        int32_t eax_33 = var_18 + 1
        var_18 = eax_33
        
        if (eax_33 s>= 9)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_33
    
    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
