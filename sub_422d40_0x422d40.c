// 函数名称: sub_422d40
// 虚拟地址: 0x422d40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_422d40(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_695f1a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_34 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edi = arg2
    sub_420960(arg1, edi, 0)
    
    if ((data_31660c8 & 1) == 0)
        data_31660c8.d |= 1
        int32_t var_c_1 = 0
        data_31660c4 = sub_4f5220(data_307c5a4, "animCompleteVisibity")
        int32_t var_c_2 = 0xffffffff
    
    int32_t result_1 = 0
    
    while (true)
        int32_t var_20 = 0
        int32_t result_2 = result_1
        void* eax_5
        int32_t ecx_2
        eax_5, ecx_2 = sub_4fc3d0(&data_be1cb8, arg1)
        
        if (edi s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_2 = *(eax_5 + (edi << 2) + 0x30)
        int128_t* eax_6
        
        if (edx_2 != 0)
            eax_6 = sub_4fc1e0(ecx_2, edx_2)
        else
            eax_6, edx_2 = sub_4fc0d0()
            *(eax_6 + 4) = &data_83f3d3
            *(eax_5 + (edi << 2) + 0x30) = *(eax_6 + 0x1bc)
        
        char* esi_3 = *(eax_5 + 4)
        
        if (*(esi_3 + 4) != 0x1e)
            break
        
        if (*esi_3 == 0)
            sub_520800(eax_6, edx_2.b, esi_3, 0)
            
            if (*esi_3 == 0)
                sub_509540(esi_3)
        
        int32_t esi_4 = *(sub_4f7720(&var_20, edi * 0x118 + ***esi_3, eax_6) + 0x434)
        bool eax_12 = sub_422490(result_1)
        float edx_7 = data_31660c4
        int128_t* ebx_1
        ebx_1.b = eax_12
        uint32_t var_38_1 = zx.d(ebx_1.b == 0)
        sub_4fa4e0(esi_4, edx_7, edx_7.b)
        
        if (ebx_1.b == 0)
            if ((data_31660c8 & 2) == 0)
                data_31660c8.d |= 2
                int32_t var_c_3 = 1
                data_31660c0 = sub_4f5220(data_307c5a4, "btn_phaseButtonSelected")
                int32_t var_c_4 = 0xffffffff
            
            if ((data_31660c8 & 4) == 0)
                data_31660c8.d |= 4
                int32_t var_c_5 = 2
                data_31660bc = sub_4f5220(data_307c5a4, "btn_phaseButton")
                int32_t var_c_6 = 0xffffffff
            
            int32_t ebx_2 = data_31660c0
            int32_t eax_17
            int32_t ecx_8
            eax_17, ecx_8 = sub_4fc3d0(&data_be1cb8, esi_4)
            
            if (ebx_2 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_8 = *(eax_17 + (ebx_2 << 2) + 0x30)
            int128_t* eax_18
            
            if (edx_8 != 0)
                eax_18 = sub_4fc1e0(ecx_8, edx_8)
            else
                eax_18 = sub_4fc0d0()
                *(eax_18 + 4) = &data_83f3d3
                *(eax_17 + (ebx_2 << 2) + 0x30) = *(eax_18 + 0x1bc)
            
            int32_t ebx_3 = data_31660bc
            *(eax_18 + 0x22) = 1
            int32_t eax_19
            int32_t ecx_9
            eax_19, ecx_9 = sub_4fc3d0(&data_be1cb8, esi_4)
            
            if (ebx_3 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_10 = *(eax_19 + (ebx_3 << 2) + 0x30)
            int128_t* eax_20
            
            if (edx_10 != 0)
                eax_20 = sub_4fc1e0(ecx_9, edx_10)
            else
                eax_20 = sub_4fc0d0()
                *(eax_20 + 4) = &data_83f3d3
                *(eax_19 + (ebx_3 << 2) + 0x30) = *(eax_20 + 0x1bc)
            
            edi = arg2
            *(eax_20 + 0x22) = 1
        
        int32_t result = result_1 + 1
        result_1 = result
        
        if (result s>= 0xa)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    
    sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
