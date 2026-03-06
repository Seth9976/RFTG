// 函数名称: sub_488500
// 虚拟地址: 0x488500
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_488500(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_696d04
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_4c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    char edx
    
    if ((data_3166314 & 1) == 0)
        data_3166314.d |= 1
        int32_t var_c_1 = 0
        int32_t eax_4
        eax_4, edx = sub_4f5220(data_307ca44, "tblGamblingButtons")
        data_3166310 = eax_4
        int32_t var_c_2 = 0xffffffff
    
    void* eax_5 = data_27e7a40
    
    if (*(eax_5 + 0x2c4960) == 0)
        int32_t var_50 = 1
        int32_t eax_7 = sub_4fa4e0(arg1, data_3166310, edx)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
    
    bool var_35 = *(sub_46b2b0(*(eax_5 + 0x74)) + 0x1c) == 0x11
    
    if ((data_3166314 & 2) == 0)
        data_3166314.d |= 2
        int32_t var_c_3 = 1
        data_316630c = sub_4f5220(data_307c644, "txt_gambling")
        int32_t var_c_4 = 0xffffffff
    
    int128_t* eax_11 = sub_4f6e90(data_3166310, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    float edx_2 = data_3166310
    *(eax_11 + 0x11c) = sub_41cc40
    eax_11.b = var_35 == 0
    uint32_t var_50_1 = zx.d(eax_11.b)
    sub_4fa4e0(arg1, edx_2, edx_2.b)
    int32_t var_34 = 1
    int32_t var_1c = 0
    
    while (true)
        int32_t ebx_1 = data_3166310
        int32_t var_28 = var_34 - 1
        int32_t var_24_1 = var_1c
        void* eax_16
        int32_t ecx_4
        eax_16, ecx_4 = sub_4fc3d0(&data_be1cb8, arg1)
        
        if (ebx_1 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_3 = *(eax_16 + (ebx_1 << 2) + 0x30)
        int128_t* eax_17
        
        if (edx_3 != 0)
            eax_17 = sub_4fc1e0(ecx_4, edx_3)
        else
            eax_17, edx_3 = sub_4fc0d0()
            *(eax_17 + 4) = &data_83f3d3
            *(eax_16 + (ebx_1 << 2) + 0x30) = *(eax_17 + 0x1bc)
        
        char* esi_5 = *(eax_16 + 4)
        
        if (*(esi_5 + 4) != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_5 == 0)
            sub_520800(eax_17, edx_3.b, esi_5, 0)
            
            if (*esi_5 == 0)
                sub_509540(esi_5)
        
        int32_t edi_3 = *(sub_4f7720(&var_28, ebx_1 * 0x118 + ***esi_5, eax_17) + 0x434)
        int32_t var_c_5 = 2
        char* var_2c
        char* eax_24 = *sub_4c4ab0(&var_2c)
        char* var_30_1 = &data_83f3d3
        
        if (eax_24 != 0)
            var_30_1 = eax_24
        
        int32_t ebx_4 = data_316630c
        int32_t eax_25
        int32_t ecx_8
        eax_25, ecx_8 = sub_4fc3d0(&data_be1cb8, edi_3)
        
        if (ebx_4 s>= 0x100)
            break
        
        int32_t edx_6 = *(eax_25 + (ebx_4 << 2) + 0x30)
        int128_t* eax_26
        
        if (edx_6 != 0)
            eax_26 = sub_4fc1e0(ecx_8, edx_6)
        else
            eax_26 = sub_4fc0d0()
            *(eax_26 + 4) = &data_83f3d3
            *(eax_25 + (ebx_4 << 2) + 0x30) = *(eax_26 + 0x1bc)
        
        *(eax_26 + 0x64) = *eax_26 + 1
        sub_4c4590(var_30_1)
        *(eax_26 + 0x151) = 1
        int32_t var_c_6 = 0xffffffff
        char* eax_28 = var_2c
        
        if (eax_28 != 0 && *eax_28 != 0)
            void* eax_30 = sub_4c4060(&var_2c)
            int32_t temp0_1 = *(eax_30 + 4)
            *(eax_30 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_11 = *(eax_30 + 0xc) + 0x10
                sub_4f4430(eax_30, sub_4f4380(esi_11), esi_11)
        
        int32_t eax_34 = var_34 + 1
        var_34 = eax_34
        
        if (eax_34 s> 7)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_34
    
    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
