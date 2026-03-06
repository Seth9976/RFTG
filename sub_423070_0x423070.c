// 函数名称: sub_423070
// 虚拟地址: 0x423070
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_423070(int32_t arg1, int32_t arg2, float arg3)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69522e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_3c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165e20 & 1) == 0)
        data_3165e20.d |= 1
        int32_t var_c_1 = 0
        data_3165e1c = sub_4f5220(data_307c5a4, "animCompleteVisibity")
        int32_t var_c_2 = 0xffffffff
    
    int32_t result_1 = 0
    
    while (true)
        int32_t result_2 = result_1
        int32_t var_20 = 0
        void* eax_5
        int32_t ecx_2
        eax_5, ecx_2 = sub_4fc3d0(&data_be1cb8, arg1)
        
        if (arg2 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_1 = *(eax_5 + (arg2 << 2) + 0x30)
        int128_t* eax_6
        
        if (edx_1 != 0)
            eax_6 = sub_4fc1e0(ecx_2, edx_1)
        else
            eax_6 = sub_4fc0d0()
            *(eax_6 + 4) = &data_83f3d3
            edx_1 = *(eax_6 + 0x1bc)
            *(eax_5 + (arg2 << 2) + 0x30) = edx_1
        
        char* esi_3 = *(eax_5 + 4)
        
        if (*(esi_3 + 4) != 0x1e)
            break
        
        if (*esi_3 == 0)
            sub_520800(eax_6, edx_1.b, esi_3, 0)
            
            if (*esi_3 == 0)
                sub_509540(esi_3)
        
        int32_t esi_4 = *(sub_4f7720(&var_20, arg2 * 0x118 + ***esi_3, eax_6) + 0x434)
        long double x87_r7_1 = fconvert.t(arg3)
        int32_t edi_2 = data_3165e1c
        long double x87_r6_1 = float.t(0)
        x87_r6_1 - x87_r7_1
        void* eax_10
        eax_10.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        int32_t* ecx_7
        int32_t* edx_5
        bool cond:3_1
        
        if (not(p_1))
            void* eax_16
            int32_t ecx_9
            eax_16, ecx_9 = sub_4fc3d0(&data_be1cb8, esi_4)
            
            if (edi_2 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_6 = *(eax_16 + (edi_2 << 2) + 0x30)
            int32_t* eax_17
            
            if (edx_6 != 0)
                eax_17, ecx_7 = sub_4fc1e0(ecx_9, edx_6)
            else
                eax_17, edx_6 = sub_4fc0d0()
                eax_17[1] = &data_83f3d3
                ecx_7 = eax_17[0x6f]
                *(eax_16 + (edi_2 << 2) + 0x30) = ecx_7
            
            char* esi_8 = *(eax_16 + 4)
            int32_t* ebx_3 = eax_17
            
            if (*(esi_8 + 4) != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*esi_8 == 0)
                eax_17, ecx_7 = sub_520800(eax_17, edx_6.b, esi_8, 0)
                
                if (*esi_8 == 0)
                    sub_509540(esi_8)
            
            edx_5 = ebx_3[2]
            
            if (edx_5 s<= *ebx_3)
                ecx_7 = **esi_8
                edx_5 = *ecx_7
                eax_17.b = edx_5[edi_2 * 0x46 + 0xc].b
            else
                eax_17.b = ebx_3[3].b
            
            cond:3_1 = eax_17.b == 0
        else
            void* eax_11
            int32_t ecx_6
            eax_11, ecx_6 = sub_4fc3d0(&data_be1cb8, esi_4)
            
            if (edi_2 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            edx_5 = *(eax_11 + (edi_2 << 2) + 0x30)
            int128_t* eax_12
            
            if (edx_5 != 0)
                eax_12, ecx_7 = sub_4fc1e0(ecx_6, edx_5)
            else
                eax_12, ecx_7 = sub_4fc0d0()
                *(eax_12 + 4) = &data_83f3d3
                edx_5 = *(eax_12 + 0x1bc)
                *(eax_11 + (edi_2 << 2) + 0x30) = edx_5
            
            char* esi_6 = *(eax_11 + 4)
            
            if (*(esi_6 + 4) != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*esi_6 == 0)
                ecx_7, edx_5 = sub_520800(eax_12, edx_5.b, esi_6, 0)
                
                if (*esi_6 == 0)
                    edx_5 = sub_509540(esi_6)
            
            if (*(eax_12 + 8) s<= *eax_12)
                ecx_7 = *esi_6
                edx_5 = *ecx_7
                int32_t eax_15
                eax_15.b = *(edi_2 * 0x118 + *edx_5 + 0x30)
                cond:3_1 = eax_15.b == 1
            else
                int32_t eax_14
                eax_14.b = *(eax_12 + 0xc)
                cond:3_1 = eax_14.b == 1
        
        if (not(cond:3_1))
            int32_t* var_40_1 = ecx_7
            
            if (sub_4faeb0(data_3165e1c, edx_5, esi_4, fconvert.s(fconvert.t(arg3))) == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
        
        int32_t result = result_1 + 1
        result_1 = result
        
        if (result s>= 0xa)
            result.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    
    sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
