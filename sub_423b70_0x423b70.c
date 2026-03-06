// 函数名称: sub_423b70
// 虚拟地址: 0x423b70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_423b70(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69821e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_18c
    int32_t eax_2 = __security_cookie ^ &var_18c
    int32_t __saved_edi
    int32_t var_19c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = data_27e7a40
    int32_t var_180 = arg1
    char var_189 = 1
    
    if (esi == 0)
        var_189 = 0
        sub_4075c0()
        esi = data_27e7a40
    
    void* eax_6 = *(esi + 0x548)
    
    if (*(eax_6 + 0x2c0a4) == 4)
        for (int32_t i = 0; i s< 0xa; i += 1)
            if (i u> 9)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0xb46, "PhaseButtonToRole")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t j
            
            switch (i)
                case 0
                    j = 0
                case 1
                    j = 1
                case 2
                    j = 2
                case 3
                    j = 3
                case 4
                    j = 4
                case 5
                    j = 5
                case 6
                    j = 6
                case 7
                    j = 7
                case 8
                    j = 8
                case 9
                    j = 9
            
            void* edx_1 = *(esi + 0x548)
            int32_t ecx_1 = *(edx_1 + 0x1c8)
            int32_t eax_7 = 0
            
            if (ecx_1 s> 0)
                void* edx_2 = edx_1 + 0x188
                
                do
                    if (*edx_2 == j)
                        void* eax_8 = sub_46b2b0(*(esi + 0x74))
                        int32_t edx_3 = *(eax_8 + 0x1f54)
                        int32_t ecx_2 = 0
                        
                        if (edx_3 s<= 0)
                        label_423c8c:
                            ecx_2 = 0xffffffff
                        else
                            void* eax_9 = eax_8 + 0x1f44
                            
                            while (*eax_9 != j)
                                ecx_2 += 1
                                eax_9 += 8
                                
                                if (ecx_2 s>= edx_3)
                                    goto label_423c8c
                        
                        ecx_2.b = ecx_2 != 0xffffffff
                        sub_41f430(i, zx.d(ecx_2.b))
                        esi = data_27e7a40
                        break
                    
                    eax_7 += 1
                    edx_2 += 4
                while (eax_7 s< ecx_1)
    
    int32_t var_184
    int32_t eax_10 = sub_41efc0(&var_184)
    
    if ((data_316664c & 1) == 0)
        data_316664c.d |= 1
        int32_t var_c_1 = 0
        data_3166648 = sub_4f5220(data_307c5a4, "imgGlow")
        int32_t var_c_2 = 0xffffffff
    
    int32_t edi_1 = 0
    int32_t var_188 = 0
    int32_t var_130 = 1
    int32_t var_138 = 1
    int32_t var_148 = 0
    int32_t var_128 = 0
    int32_t var_140 = 0
    int32_t* result
    
    while (true)
        int32_t eax_13 = sub_421c90(edi_1)
        int32_t eax_15 = sub_421dd0(edi_1)
        int32_t* ebx_1 = data_307ca70
        int32_t eax_16 = *(eax_6 + 0x20c)
        int32_t var_160 = var_130
        bool cond:3_1 = *(data_27e7fd0 + 0x27) != 0
        int32_t var_15c_1 = eax_16
        int32_t eax_17 = *(eax_6 + 0x1c8)
        int32_t var_168 = var_138
        int32_t var_164_1 = eax_17
        
        if (not(cond:3_1))
            ebx_1 = data_307c530
        
        unimplemented  {fld1 }
        int32_t* var_1a8_1 = &var_160
        float var_1a8_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        int32_t var_158 = var_148
        int32_t var_154_1 = eax_13
        void var_120
        int32_t eax_21 = sub_4f66d0(&var_120, ebx_1, var_184, &var_158, var_1a8_2, &var_160, nullptr)
        unimplemented  {call 0x4f66d0}
        unimplemented  {fld1 }
        float var_60[0x11]
        __builtin_memcpy(&var_60, eax_21, 0x40)
        int32_t* var_1a8_3 = &var_168
        int32_t var_170 = var_128
        int32_t var_16c_1 = eax_15
        float var_1a8_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        int32_t eax_25 = sub_4f66d0(&var_120, ebx_1, var_184, &var_170, var_1a8_4, &var_168, nullptr)
        unimplemented  {call 0x4f66d0}
        unimplemented  {fld st0, dword [edx+0x2c0a8]}
        float var_1a0_3 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        void var_a0
        __builtin_memcpy(&var_a0, eax_25, 0x40)
        float* eax_26 = sub_4238f0(&var_60, &var_a0, var_1a0_3)
        int32_t var_150 = var_140
        void var_e0
        __builtin_memcpy(&var_e0, eax_26, 0x40)
        int32_t var_14c_1 = var_188
        
        if (eax_10 == 0)
            sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                "DataArray<struct UIState>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        uint32_t eax_28 = zx.d(eax_10.w)
        
        if (eax_28 u< data_be1cbc)
            void* esi_6 = data_be1cb8
            int32_t ecx_7 = eax_28 * 0x438
            
            if (*(ecx_7 + esi_6 + 0x434) == eax_10)
                int32_t ebx_2 = var_184
                void* esi_7 = esi_6 + eax_28 * 0x438
                
                if (ebx_2 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_10 = *(esi_7 + (ebx_2 << 2) + 0x30)
                int128_t* eax_30
                
                if (edx_10 != 0)
                    eax_30 = sub_4fc1e0(ecx_7, edx_10)
                else
                    eax_30, edx_10 = sub_4fc0d0()
                    *(eax_30 + 4) = &data_83f3d3
                    *(esi_7 + (ebx_2 << 2) + 0x30) = *(eax_30 + 0x1bc)
                
                char* esi_8 = *(esi_7 + 4)
                
                if (*(esi_8 + 4) != 0x1e)
                    sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                        "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (*esi_8 == 0)
                    sub_520800(eax_30, edx_10.b, esi_8, 0)
                    
                    if (*esi_8 == 0)
                        sub_509540(esi_8)
                
                void* esi_9 = *(sub_4f7720(&var_150, ebx_2 * 0x118 + ***esi_8, eax_30) + 0x434)
                bool edx_14 = sub_423a30(var_188) == 0
                uint32_t var_1a0_4 = zx.d(edx_14)
                sub_4fa4e0(esi_9, data_3166648, edx_14)
                unimplemented  {fld1 }
                float var_1a0_5 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                int16_t top = top - 2
                result = sub_4f9fe0(esi_9, &var_e0)
                edi_1 = var_188 + 1
                var_188 = edi_1
                
                if (edi_1 s>= 0xa)
                    break
                
                continue
        
        sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x46, 
            "DataArray<struct UIState>::DataArrayGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    if (var_189 == 0)
        result = sub_407670()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_18c)
    return result
}
