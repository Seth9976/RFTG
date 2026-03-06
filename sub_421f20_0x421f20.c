// 函数名称: sub_421f20
// 虚拟地址: 0x421f20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_421f20(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69528e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_34 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165e30 & 1) == 0)
        data_3165e30.d |= 1
        int32_t var_c_1 = 0
        data_3165e2c = sub_4f5220(data_307c5a4, "animPhaseVisibity")
        int32_t var_c_2 = 0xffffffff
    
    int32_t result_1 = 0
    
    while (true)
        int32_t result_2 = result_1
        int32_t var_20 = 0
        void* eax_5
        int32_t ecx_2
        eax_5, ecx_2 = sub_4fc3d0(&data_be1cb8, arg1)
        int32_t entry_ebx
        
        if (entry_ebx s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_1 = *(eax_5 + (entry_ebx << 2) + 0x30)
        int128_t* eax_6
        
        if (edx_1 != 0)
            eax_6 = sub_4fc1e0(ecx_2, edx_1)
        else
            eax_6 = sub_4fc0d0()
            *(eax_6 + 4) = &data_83f3d3
            edx_1 = *(eax_6 + 0x1bc)
            *(eax_5 + (entry_ebx << 2) + 0x30) = edx_1
        
        char* edi_2 = *(eax_5 + 4)
        
        if (*(edi_2 + 4) != 0x1e)
            break
        
        if (*edi_2 == 0)
            sub_520800(eax_6, edx_1.b, edi_2, 0)
            
            if (*edi_2 == 0)
                sub_509540(edi_2)
        
        void* eax_10 = sub_4f7720(&var_20, entry_ebx * 0x118 + ***edi_2, eax_6)
        float edx_5 = data_3165e2c
        int32_t var_38_1 = 1
        sub_4fa4e0(*(eax_10 + 0x434), edx_5, edx_5.b)
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
