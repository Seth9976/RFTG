// 函数名称: sub_485f00
// 虚拟地址: 0x485f00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_485f00()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6932f6
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3
    int32_t edx
    int32_t entry_ebx
    eax_3, edx = sub_4fc3d0(&data_be1cb8, entry_ebx)
    bool cond:0 = (data_3165928 & 1) != 0
    *(eax_3 + 0x2c) = sub_484af0
    
    if (not(cond:0))
        data_3165928.d |= 1
        int32_t var_8_1 = 0
        int32_t eax_5
        eax_5, edx = sub_4f5220(data_307c4f8, "txtCode")
        data_3165924 = eax_5
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3165928 & 2) == 0)
        data_3165928.d |= 2
        int32_t var_8_3 = 1
        int32_t eax_6
        eax_6, edx = sub_4f5220(data_307c4f8, "txtResult")
        data_3165920 = eax_6
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3165928 & 4) == 0)
        data_3165928.d |= 4
        int32_t var_8_5 = 2
        int32_t eax_7
        eax_7, edx = sub_4f5220(data_307c4f8, "txtCodeEdit")
        data_316591c = eax_7
        int32_t var_8_6 = 0xffffffff
    
    bool cond:1 = data_307cd18 == 2
    int32_t ecx_2 = data_316591c
    int32_t var_28 = cond:1.d
    int32_t var_2c_4 = ecx_2
    sub_4fb570(entry_ebx, edx, ecx_2.b)
    
    if (cond:1 != 0)
        if ((data_3165928 & 8) == 0)
            data_3165928.d |= 8
            int32_t var_8_7 = 3
            data_3165918 = sub_4f5220(data_307c4f8, "txtCodeEdit")
            int32_t var_8_8 = 0xffffffff
        
        char eax_14 = sub_40d210(
            &sub_4f6e90(data_3165918, sub_4fc3d0(&data_be1cb8, entry_ebx), &data_83f3d3)[0x16])
        
        if ((data_3165928 & 0x10) == 0)
            data_3165928.d |= 0x10
            int32_t var_8_9 = 4
            data_3165914 = sub_4f5220(data_307c4f8, "BtnOK")
            int32_t var_8_10 = 0xffffffff
        
        *(sub_4f6e90(data_3165914, sub_4fc3d0(&data_be1cb8, entry_ebx), &data_83f3d3) + 0x23) =
            eax_14 == 0
    
    int32_t eax_19 = data_307cd18
    
    if (eax_19 u> 3)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RftGVR.cpp", 0x15f8, "VRLinkUpdateNew")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t var_2c_7
    
    switch (eax_19)
        case 0
            sub_4fa770(entry_ebx, 1, 0)
            int32_t var_28_1 = 1
            var_2c_7 = 0x1e
        label_4860fa:
            int32_t* eax_20 = sub_4fa770(entry_ebx, var_2c_7, 1)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_20
        case 1
            sub_4fa770(entry_ebx, 2, 0)
            int32_t edx_3 = sub_4fa770(entry_ebx, 0x1d, 1)
            char* ecx_6 = data_3165924
            int32_t var_28_3 = 1
            int32_t* var_2c_8 = &data_307cd24
            int32_t* eax_22 = sub_4f9300(entry_ebx, edx_3, ecx_6, ecx_6.b)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_22
        case 2
            sub_4fa770(entry_ebx, 0x14, 0)
            int32_t var_28_2 = 1
            var_2c_7 = 0xb
            goto label_4860fa
        case 3
            sub_4fa770(entry_ebx, 8, 0)
            char* ecx_9 = sub_4fa770(entry_ebx, 0x17, 1)
            int32_t eax_23 = data_307cd34
            
            if (eax_23 u> 4)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RftGVR.cpp", 0x15f3, "VRLinkUpdateNew")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            char const* const eax_24
            
            switch (eax_23)
                case 0
                    eax_24 = "Linking Device..."
                case 1
                    eax_24 = "Link Successful"
                case 2
                    eax_24 = "Link Failed.\r\rInvalid or expired Link Code."
                case 3
                    eax_24 = "Link Failed.\r\rDevices already linked."
                case 4
                    eax_24 = "Link Failed. Devices both in the same active game.\r\rEither finish or "
                    "abandon shared game, then re-link."
            
            int32_t edx_4 = data_3165920
            int32_t var_28_4 = 1
            char const* const var_2c_9 = eax_24
            int32_t* eax_26 = sub_4f9300(entry_ebx, edx_4, ecx_9, edx_4.b)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_26
}
