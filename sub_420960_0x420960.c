// 函数名称: sub_420960
// 虚拟地址: 0x420960
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_420960(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_695382
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_3c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx = data_3165e68
    int32_t* esi = data_307c5a4
    
    if ((ecx.b & 1) == 0)
        data_3165e68 = ecx | 1
        int32_t var_c_1 = 0
        int32_t eax_3 = sub_4f5220(esi, "img_explore")
        int32_t var_c_2 = 0xffffffff
        ecx = data_3165e68
        data_3165e64 = eax_3
    
    if ((ecx.b & 2) == 0)
        data_3165e68 = ecx | 2
        int32_t var_c_3 = 1
        int32_t eax_4 = sub_4f5220(esi, "img_explore11")
        int32_t var_c_4 = 0xffffffff
        ecx = data_3165e68
        data_3165e60 = eax_4
    
    if ((ecx.b & 4) == 0)
        data_3165e68 = ecx | 4
        int32_t var_c_5 = 2
        int32_t eax_5 = sub_4f5220(esi, "img_explore50")
        int32_t var_c_6 = 0xffffffff
        ecx = data_3165e68
        data_3165e5c = eax_5
    
    if ((ecx.b & 8) == 0)
        data_3165e68 = ecx | 8
        int32_t var_c_7 = 3
        int32_t eax_6 = sub_4f5220(esi, "img_develop")
        int32_t var_c_8 = 0xffffffff
        ecx = data_3165e68
        data_3165e58 = eax_6
    
    if ((ecx.b & 0x10) == 0)
        data_3165e68 = ecx | 0x10
        int32_t var_c_9 = 4
        int32_t eax_7 = sub_4f5220(esi, "img_settle")
        int32_t var_c_10 = 0xffffffff
        ecx = data_3165e68
        data_3165e54 = eax_7
    
    if ((ecx.b & 0x20) == 0)
        data_3165e68 = ecx | 0x20
        int32_t var_c_11 = 5
        int32_t eax_8 = sub_4f5220(esi, "img_consume")
        int32_t var_c_12 = 0xffffffff
        ecx = data_3165e68
        data_3165e50 = eax_8
    
    if ((ecx.b & 0x40) == 0)
        data_3165e68 = ecx | 0x40
        int32_t var_c_13 = 6
        int32_t eax_9 = sub_4f5220(esi, "img_consume2x")
        int32_t var_c_14 = 0xffffffff
        ecx = data_3165e68
        data_3165e4c = eax_9
    
    if (ecx.b s>= 0)
        data_3165e68 = ecx | 0x80
        int32_t var_c_15 = 7
        int32_t eax_10 = sub_4f5220(esi, "img_trade")
        int32_t var_c_16 = 0xffffffff
        ecx = data_3165e68
        data_3165e48 = eax_10
    
    int32_t eax_11
    
    if ((ecx & 0x100) != 0)
        eax_11 = data_3165e44
    else
        data_3165e68 = ecx | 0x100
        int32_t var_c_17 = 8
        eax_11 = sub_4f5220(esi, "img_produce")
        int32_t var_c_18 = 0xffffffff
        ecx = data_3165e68
        data_3165e44 = eax_11
    
    int32_t edx
    
    if ((ecx & 0x200) != 0)
        edx = data_3165e40
    else
        data_3165e68 = ecx | 0x200
        int32_t var_c_19 = 9
        edx = sub_4f5220(esi, "img_search")
        int32_t var_c_20 = 0xffffffff
        ecx = data_3165e68
        eax_11 = data_3165e44
        data_3165e40 = edx
    
    int32_t esi_3
    
    if ((ecx & 0x400) != 0)
        esi_3 = data_3165e58
    else
        int32_t esi_1 = data_3165e5c
        data_315fae8 = data_3165e54
        data_315faec = data_3165e48
        int32_t ebx_3 = data_3165e4c
        data_315fadc = esi_1
        int32_t esi_2 = data_3165e60
        data_315faf0 = ebx_3
        int32_t ebx_4 = data_3165e50
        data_315fae0 = esi_2
        esi_3 = data_3165e58
        data_315fafc = ebx_4
        int32_t ebx_5 = data_3165e64
        ecx |= 0x400
        data_3165e68 = ecx
        data_315fae4 = esi_3
        data_315faf4 = eax_11
        data_315faf8 = edx
        data_315fb00 = ebx_5
    
    if ((ecx & 0x800) == 0)
        data_315fb08 = data_3165e5c
        data_315fb0c = data_3165e60
        int32_t ebx_8 = data_3165e54
        data_315fb18 = ebx_8
        data_315fb1c = ebx_8
        data_315fb20 = data_3165e48
        int32_t ebx_10 = data_3165e4c
        ecx |= 0x800
        data_3165e68 = ecx
        data_315fb04 = edx
        data_315fb10 = esi_3
        data_315fb14 = esi_3
        data_315fb24 = ebx_10
        data_315fb28 = eax_11
    
    if ((ecx & 0x1000) == 0)
        data_315fb2c = edx
        int32_t edx_1 = data_3165e64
        data_315fb30 = edx_1
        data_315fb34 = edx_1
        int32_t edx_2 = data_3165e54
        data_315fb40 = edx_2
        data_315fb44 = edx_2
        int32_t edx_3 = data_3165e50
        ecx |= 0x1000
        data_3165e68 = ecx
        data_315fb38 = esi_3
        data_315fb3c = esi_3
        data_315fb48 = edx_3
        data_315fb4c = edx_3
        data_315fb50 = eax_11
        data_315fb54 = eax_11
    
    if ((ecx & 0x2000) == 0)
        data_3165e68 = ecx | 0x2000
        int32_t var_c_21 = 0xa
        data_3165e3c = sub_4f5220(data_307c5a4, "PhaseNumTxt")
        int32_t var_c_22 = 0xffffffff
    
    int32_t result_1 = 0
    
    while (true)
        int32_t result_2 = result_1
        int32_t var_20 = 0
        void* eax_15
        int32_t ecx_13
        eax_15, ecx_13 = sub_4fc3d0(&data_be1cb8, arg1)
        
        if (arg2 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_4 = *(eax_15 + (arg2 << 2) + 0x30)
        int128_t* eax_16
        
        if (edx_4 != 0)
            eax_16 = sub_4fc1e0(ecx_13, edx_4)
        else
            eax_16 = sub_4fc0d0()
            *(eax_16 + 4) = &data_83f3d3
            edx_4 = *(eax_16 + 0x1bc)
            *(eax_15 + (arg2 << 2) + 0x30) = edx_4
        
        char* esi_6 = *(eax_15 + 4)
        
        if (*(esi_6 + 4) != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_6 == 0)
            sub_520800(eax_16, edx_4.b, esi_6, 0)
            
            if (*esi_6 == 0)
                sub_509540(esi_6)
        
        int32_t eax_21 = *(sub_4f7720(&var_20, arg2 * 0x118 + ***esi_6, eax_16) + 0x434)
        
        if (result_1 u> 0xa)
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0xf49, "RoleNumeralDot")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        char* const edi_2
        
        switch (result_1)
            case 0
                edi_2 = &data_85ce4c
            case 1, 2
                edi_2 = &data_85ce50
            case 3, 4
                edi_2 = &data_85ce54
            case 5, 6
                edi_2 = &data_85ce58
            case 7
                edi_2 = &data_85ce5c
            case 8
                edi_2 = &data_85ce60
            case 9
                edi_2 = &data_85ce64
            case 0xa
                edi_2 = &data_83f3d3
        
        int32_t ebx_12 = data_3165e3c
        int32_t eax_22
        int32_t ecx_18
        eax_22, ecx_18 = sub_4fc3d0(&data_be1cb8, eax_21)
        
        if (ebx_12 s>= 0x100)
            break
        
        int32_t edx_8 = *(eax_22 + (ebx_12 << 2) + 0x30)
        int128_t* eax_23
        
        if (edx_8 != 0)
            eax_23 = sub_4fc1e0(ecx_18, edx_8)
        else
            eax_23 = sub_4fc0d0()
            *(eax_23 + 4) = &data_83f3d3
            *(eax_22 + (ebx_12 << 2) + 0x30) = *(eax_23 + 0x1bc)
        
        *(eax_23 + 0x64) = *eax_23 + 1
        sub_4c4590(edi_2)
        *(eax_23 + 0x151) = 1
        int32_t edx_10
        
        if (arg3 != 1)
            edx_10 = (&data_315fb04)[result_1]
        else
            edx_10 = (&data_315fb2c)[result_1]
        
        sub_4fa590(eax_21, &data_315fadc, edx_10)
        int16_t top = top - 1
        unimplemented  {call 0x4fa590}
        int32_t result = result_1 + 1
        result_1 = result
        
        if (result s>= 0xa)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    
    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
