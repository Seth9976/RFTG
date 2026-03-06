// 函数名称: sub_4171c0
// 虚拟地址: 0x4171c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4171c0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69552a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_44 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165ecc & 1) == 0)
        data_3165ecc.d |= 1
        int32_t var_c_1 = 0
        data_3165ec8 = sub_4f5220(data_307c4d8, "tblButtons")
        int32_t var_c_2 = 0xffffffff
    
    void* eax_5 = sub_4fc3d0(&data_be1cb8, arg1)
    int32_t edi = data_3165ec8
    *(eax_5 + 0x2c) = sub_417140
    int128_t* eax_7 = sub_4f6e90(edi, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    bool cond:0 = (data_3165ecc & 2) != 0
    *(eax_7 + 0x11c) = sub_417170
    
    if (not(cond:0))
        data_3165ecc.d |= 2
        int32_t var_c_3 = 1
        data_3165ec4 = sub_4f5220(data_307c4dc, "btnLanguage")
        int32_t var_c_4 = 0xffffffff
    
    if ((data_3165ecc & 4) == 0)
        data_3165ecc.d |= 4
        int32_t var_c_5 = 2
        data_3165ec0 = sub_4f5220(data_307c4dc, "img_lang")
        int32_t var_c_6 = 0xffffffff
    
    int128_t* eax_11 = sub_4f6e90(data_3165ec8, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    eax_11[0x12].d = *eax_11 + 1
    *(eax_11 + 0x124) = 3
    *(eax_11 + 0x128) = 1
    *(eax_11 + 0x12c) = 3
    eax_11[0x13].d = 1
    int32_t result_1 = 0
    int32_t var_1c = 0
    
    while (true)
        int32_t ebx_1 = data_3165ec8
        int32_t result_2 = result_1
        int32_t var_24_1 = var_1c
        void* eax_13
        int32_t ecx_4
        eax_13, ecx_4 = sub_4fc3d0(&data_be1cb8, arg1)
        
        if (ebx_1 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_3 = *(eax_13 + (ebx_1 << 2) + 0x30)
        int128_t* eax_14
        
        if (edx_3 != 0)
            eax_14 = sub_4fc1e0(ecx_4, edx_3)
        else
            eax_14, edx_3 = sub_4fc0d0()
            *(eax_14 + 4) = &data_83f3d3
            *(eax_13 + (ebx_1 << 2) + 0x30) = *(eax_14 + 0x1bc)
        
        char* esi_6 = *(eax_13 + 4)
        
        if (*(esi_6 + 4) != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_6 == 0)
            sub_520800(eax_14, edx_3.b, esi_6, 0)
            
            if (*esi_6 == 0)
                sub_509540(esi_6)
        
        void* eax_18 = sub_4f7720(&result_2, ebx_1 * 0x118 + ***esi_6, eax_14)
        int32_t esi_7 = lookup_table_846e90[result_1]
        int32_t edi_5 = *(eax_18 + 0x434)
        char* eax_19 = sub_417b20(esi_7)
        int32_t var_34_1
        
        if (esi_7 u> 0xb)
            var_34_1 = data_307c4ac
        else
            switch (esi_7)
                case 0
                    var_34_1 = data_307c4ac
                case 1
                    var_34_1 = data_307c4a8
                case 2
                    var_34_1 = data_307c4b8
                case 4
                    var_34_1 = data_307c4d0
        
        int32_t ebx_4 = data_3165ec4
        int32_t eax_22
        int32_t ecx_10
        eax_22, ecx_10 = sub_4fc3d0(&data_be1cb8, edi_5)
        
        if (ebx_4 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_7 = *(eax_22 + (ebx_4 << 2) + 0x30)
        int128_t* eax_23
        
        if (edx_7 != 0)
            eax_23 = sub_4fc1e0(ecx_10, edx_7)
        else
            eax_23 = sub_4fc0d0()
            *(eax_23 + 4) = &data_83f3d3
            *(eax_22 + (ebx_4 << 2) + 0x30) = *(eax_23 + 0x1bc)
        
        *(eax_23 + 0x64) = *eax_23 + 1
        sub_4c4590(eax_19)
        int32_t ebx_6 = data_3165ec0
        *(eax_23 + 0x151) = 0
        int32_t eax_25
        int32_t ecx_12
        eax_25, ecx_12 = sub_4fc3d0(&data_be1cb8, edi_5)
        
        if (ebx_6 s>= 0x100)
            break
        
        int32_t edx_10 = *(eax_25 + (ebx_6 << 2) + 0x30)
        int128_t* eax_26
        
        if (edx_10 != 0)
            eax_26 = sub_4fc1e0(ecx_12, edx_10)
        else
            eax_26 = sub_4fc0d0()
            *(eax_26 + 4) = &data_83f3d3
            *(eax_25 + (ebx_6 << 2) + 0x30) = *(eax_26 + 0x1bc)
        
        *(eax_26 + 0x94) = *eax_26 + 1
        *(eax_26 + 0x98) = var_34_1
        int32_t result = result_1 + 1
        result_1 = result
        
        if (result s>= 3)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    
    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
