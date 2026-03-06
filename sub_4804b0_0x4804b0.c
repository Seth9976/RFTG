// 函数名称: sub_4804b0
// 虚拟地址: 0x4804b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4804b0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69406c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_34 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = sub_4fc3d0(&data_be1cb8, arg1)
    bool cond:0 = (data_3165ac4 & 1) != 0
    *(eax_3 + 0x2c) = sub_47fba0
    
    if (not(cond:0))
        data_3165ac4.d |= 1
        int32_t var_c_1 = 0
        data_3165190 = sub_4f5220(data_307c624, "tblAvatar")
        int32_t var_c_2 = 0xffffffff
    
    int128_t* eax_7 = sub_4f6e90(data_3165190, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    int32_t edi_1 = data_3165190
    *(eax_7 + 0x11c) = sub_47fbb0
    int128_t* eax_9 = sub_4f6e90(edi_1, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    eax_9[0x12].d = *eax_9 + 1
    *(eax_9 + 0x124) = 3
    *(eax_9 + 0x128) = 1
    *(eax_9 + 0x12c) = 3
    eax_9[0x13].d = 1
    int32_t result_1 = 0
    
    while (true)
        int32_t result_2 = result_1
        int32_t eax_11
        int32_t edx_2
        eax_11, edx_2 = sub_4fb130(arg1, result_1)
        int32_t edi_3 = data_3165190
        int32_t var_20 = eax_11
        int32_t var_1c_1 = edx_2
        void* eax_12
        int32_t ecx_2
        eax_12, ecx_2 = sub_4fc3d0(&data_be1cb8, arg1)
        
        if (edi_3 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_3 = *(eax_12 + (edi_3 << 2) + 0x30)
        int32_t* eax_13
        
        if (edx_3 != 0)
            eax_13 = sub_4fc1e0(ecx_2, edx_3)
        else
            eax_13, edx_3 = sub_4fc0d0()
            eax_13[1] = &data_83f3d3
            *(eax_12 + (edi_3 << 2) + 0x30) = eax_13[0x6f]
        
        char* esi_6 = *(eax_12 + 4)
        
        if (*(esi_6 + 4) != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_6 == 0)
            sub_520800(eax_13, edx_3.b, esi_6, 0)
            
            if (*esi_6 == 0)
                sub_509540(esi_6)
        
        int32_t esi_7 = *(sub_4f7720(&var_20, edi_3 * 0x118 + ***esi_6, eax_13) + 0x434)
        int32_t ebx_2
        
        if (result_1 + 0xc u> 0x11)
            ebx_2 = data_307c018
        else
            switch (result_1)
                case 0
                    ebx_2 = data_307c038
                case 1, 0xfffffffa
                    ebx_2 = data_307c030
                case 2
                    ebx_2 = data_307c014
                case 3
                    ebx_2 = data_307c008
                case 4
                    ebx_2 = data_307c010
                case 5
                    ebx_2 = data_307c00c
                case 0xfffffff4, 0xfffffff5, 0xfffffff6, 0xfffffff7, 0xfffffff8
                    ebx_2 = data_307c018
                case 0xfffffff9
                    ebx_2 = data_307c02c
                case 0xfffffffb
                    ebx_2 = data_307c034
                case 0xfffffffc
                    ebx_2 = data_307c000
                case 0xfffffffd
                    ebx_2 = data_307bff8
                case 0xfffffffe
                    ebx_2 = data_307bffc
                case 0xffffffff
                    ebx_2 = data_307c004
        
        if ((data_3165ac4 & 2) == 0)
            data_3165ac4.d |= 2
            int32_t var_c_3 = 1
            data_3165ac0 = sub_4f5220(data_307c628, "imgAvatar")
            int32_t var_c_4 = 0xffffffff
        
        int32_t edi_6 = data_3165ac0
        int32_t eax_22
        int32_t ecx_6
        eax_22, ecx_6 = sub_4fc3d0(&data_be1cb8, esi_7)
        
        if (edi_6 s>= 0x100)
            break
        
        int32_t edx_6 = *(eax_22 + (edi_6 << 2) + 0x30)
        int128_t* eax_23
        
        if (edx_6 != 0)
            eax_23 = sub_4fc1e0(ecx_6, edx_6)
        else
            eax_23 = sub_4fc0d0()
            *(eax_23 + 4) = &data_83f3d3
            *(eax_22 + (edi_6 << 2) + 0x30) = *(eax_23 + 0x1bc)
        
        *(eax_23 + 0x94) = *eax_23 + 1
        *(eax_23 + 0x98) = ebx_2
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
