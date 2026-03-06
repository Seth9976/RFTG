// 函数名称: sub_422670
// 虚拟地址: 0x422670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_422670(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_695f78
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_44 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ecx
    ecx.b = 0
    sub_41ed10(ecx)
    int32_t ebx = arg2
    sub_420960(arg1, ebx, 1)
    
    if ((data_31660dc & 1) == 0)
        data_31660dc.d |= 1
        int32_t var_c_1 = 0
        data_31660d8 = sub_4f5220(data_307c5a4, "animCompleteVisibity")
        int32_t var_c_2 = 0xffffffff
    
    int32_t var_28
    
    for (int32_t i = 0; i s< 0xa; i += 1)
        var_28 = 0
        int32_t i_1 = i
        void* eax_5
        int32_t ecx_2
        eax_5, ecx_2 = sub_4fc3d0(&data_be1cb8, arg1)
        
        if (ebx s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_1 = *(eax_5 + (ebx << 2) + 0x30)
        int128_t* eax_6
        
        if (edx_1 != 0)
            eax_6 = sub_4fc1e0(ecx_2, edx_1)
        else
            eax_6 = sub_4fc0d0()
            *(eax_6 + 4) = &data_83f3d3
            edx_1 = *(eax_6 + 0x1bc)
            *(eax_5 + (ebx << 2) + 0x30) = edx_1
        
        char* esi_3 = *(eax_5 + 4)
        
        if (*(esi_3 + 4) != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_3 == 0)
            sub_520800(eax_6, edx_1.b, esi_3, 0)
            
            if (*esi_3 == 0)
                sub_509540(esi_3)
        
        void* eax_11
        int32_t ecx_5
        int32_t edx_5
        eax_11, ecx_5, edx_5 = sub_4f7720(&var_28, ebx * 0x118 + ***esi_3, eax_6)
        int32_t esi_4 = *(eax_11 + 0x434)
        uint32_t edx_6 = zx.d(sub_422570(i, edx_5, ecx_5) == 0)
        uint32_t var_48_1 = edx_6
        sub_4fa4e0(esi_4, data_31660d8, edx_6.b)
    
    if ((data_31660dc & 2) == 0)
        data_31660dc.d |= 2
        int32_t var_c_3 = 1
        data_31660d4 = sub_4f5220(data_307c5a4, "animPhaseNudge")
        int32_t var_c_4 = 0xffffffff
    
    if ((data_31660dc & 4) == 0)
        data_31660dc.d |= 4
        int32_t var_c_5 = 2
        data_31660d0 = sub_4f5220(data_307c5a4, "animPhaseFade")
        int32_t var_c_6 = 0xffffffff
    
    if ((data_31660dc & 8) == 0)
        data_31660dc.d |= 8
        int32_t var_c_7 = 3
        data_31660cc = sub_4f5220(data_307c5a4, "animIconNudge")
        int32_t var_c_8 = 0xffffffff
    
    int32_t edi_1 = ebx * 0x118
    int32_t result_1 = 0
    var_28 = edi_1
    
    while (true)
        int32_t var_20 = 0
        int32_t result_2 = result_1
        
        if (arg1 == 0)
            sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                "DataArray<struct UIState>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        uint32_t eax_23 = zx.d(arg1.w)
        
        if (eax_23 u< data_be1cbc)
            void* edx_8 = data_be1cb8
            int32_t ecx_10 = eax_23 * 0x438
            
            if (*(ecx_10 + edx_8 + 0x434) == arg1)
                void* esi_6 = edx_8 + eax_23 * 0x438
                int32_t edx_9 = *(esi_6 + (ebx << 2) + 0x30)
                int128_t* eax_25
                
                if (edx_9 != 0)
                    eax_25 = sub_4fc1e0(ecx_10, edx_9)
                else
                    eax_25 = sub_4fc0d0()
                    *(eax_25 + 4) = &data_83f3d3
                    edx_9 = *(eax_25 + 0x1bc)
                    *(esi_6 + (ebx << 2) + 0x30) = edx_9
                
                char* esi_7 = *(esi_6 + 4)
                
                if (*(esi_7 + 4) != 0x1e)
                    sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                        "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (*esi_7 == 0)
                    sub_520800(eax_25, edx_9.b, esi_7, 0)
                    
                    if (*esi_7 == 0)
                        sub_509540(esi_7)
                
                void* eax_29
                char edx_12
                eax_29, edx_12 = sub_4f7720(&var_20, ***esi_7 + edi_1, eax_25)
                int32_t edi_2 = *(eax_29 + 0x434)
                float ebx_2 = data_31660d4
                int32_t var_48_2 = 1
                sub_4fa4e0(edi_2, ebx_2, edx_12)
                
                if (edi_2 == 0)
                    sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                        "DataArray<struct UIState>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                uint32_t esi_9 = zx.d(edi_2.w)
                
                if (esi_9 u< data_be1cbc)
                    int32_t ecx_14 = data_be1cb8
                    
                    if (*(esi_9 * 0x438 + ecx_14 + 0x434) == edi_2)
                        int32_t eax_34 = esi_9 * 0x438
                        int32_t eax_35 = eax_34 + ecx_14
                        
                        if (ebx_2 s>= 0x100)
                            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                                "UIStateElementGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int32_t edx_13 = *(eax_35 + (ebx_2 << 2) + 0x30)
                        int128_t* eax_36
                        
                        if (edx_13 != 0)
                            eax_36 = sub_4fc1e0(ecx_14, edx_13)
                        else
                            eax_36 = sub_4fc0d0()
                            *(eax_36 + 4) = &data_83f3d3
                            edx_13 = *(eax_36 + 0x1bc)
                            *(eax_35 + (ebx_2 << 2) + 0x30) = edx_13
                        
                        long double x87_r7_1 = float.t(0)
                        float ebx_3 = data_31660d0
                        *(eax_36 + 0x14) = fconvert.s(x87_r7_1)
                        int32_t var_48_3 = 1
                        eax_36[1].d = fconvert.s(x87_r7_1)
                        sub_4fa4e0(edi_2, ebx_3, edx_13.b)
                        
                        if (esi_9 u< data_be1cbc)
                            int32_t ecx_16 = data_be1cb8
                            
                            if (*(esi_9 * 0x438 + ecx_16 + 0x434) == edi_2)
                                int32_t eax_41 = eax_34 + ecx_16
                                
                                if (ebx_3 s>= 0x100)
                                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 
                                        0x518, "UIStateElementGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t edx_14 = *(eax_41 + (ebx_3 << 2) + 0x30)
                                int128_t* eax_42
                                int32_t ecx_17
                                
                                if (edx_14 != 0)
                                    eax_42, ecx_17 = sub_4fc1e0(ecx_16, edx_14)
                                else
                                    eax_42 = sub_4fc0d0()
                                    edx_14 = eax_41
                                    *(eax_42 + 4) = &data_83f3d3
                                    ecx_17 = *(eax_42 + 0x1bc)
                                    *(edx_14 + (ebx_3 << 2) + 0x30) = ecx_17
                                
                                long double x87_r7_2 = float.t(0)
                                float ebx_4 = data_31660cc
                                *(eax_42 + 0x14) = fconvert.s(x87_r7_2)
                                int32_t var_48_4 = 1
                                eax_42[1].d = fconvert.s(x87_r7_2)
                                sub_4fa4e0(edi_2, ebx_4, edx_14.b)
                                
                                if (esi_9 u< data_be1cbc)
                                    int32_t eax_44 = data_be1cb8
                                    
                                    if (*(esi_9 * 0x438 + eax_44 + 0x434) == edi_2)
                                        int32_t esi_12 = eax_34 + eax_44
                                        
                                        if (ebx_4 s>= 0x100)
                                            break
                                        
                                        int32_t edx_15 = *(esi_12 + (ebx_4 << 2) + 0x30)
                                        int128_t* eax_45
                                        
                                        if (edx_15 != 0)
                                            eax_45 = sub_4fc1e0(ecx_17, edx_15)
                                        else
                                            eax_45 = sub_4fc0d0()
                                            *(eax_45 + 4) = &data_83f3d3
                                            *(esi_12 + (ebx_4 << 2) + 0x30) = *(eax_45 + 0x1bc)
                                        
                                        long double x87_r7_3 = float.t(0)
                                        *(eax_45 + 0x14) = fconvert.s(x87_r7_3)
                                        eax_45[1].d = fconvert.s(x87_r7_3)
                                        int32_t result = result_1 + 1
                                        result_1 = result
                                        
                                        if (result s>= 0xa)
                                            fsbase->NtTib.ExceptionList = ExceptionList
                                            return result
                                        
                                        ebx = arg2
                                        edi_1 = var_28
                                        continue
                                
                                sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                    "c:\ax2010\engine\DataArray.h", 0x46, 
                                    "DataArray<struct UIState>::DataArrayGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                        
                        sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                            "c:\ax2010\engine\DataArray.h", 0x46, 
                            "DataArray<struct UIState>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                
                sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                    "c:\ax2010\engine\DataArray.h", 0x46, "DataArray<struct UIState>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        
        sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x46, 
            "DataArray<struct UIState>::DataArrayGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
