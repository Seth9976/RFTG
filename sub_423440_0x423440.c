// 函数名称: sub_423440
// 虚拟地址: 0x423440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_423440(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6951fa
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_3c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx = *(data_27e7a40 + 0x548)
    
    if ((data_3165e18 & 1) == 0)
        data_3165e18.d |= 1
        int32_t var_c_1 = 0
        data_3165e14 = sub_4f5220(data_307c5a4, "animPhaseNudge")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3165e18 & 2) == 0)
        data_3165e18.d |= 2
        int32_t var_c_3 = 1
        data_3165e10 = sub_4f5220(data_307c5a4, "animPhaseFade")
        int32_t var_c_4 = 0xffffffff
    
    if ((data_3165e18 & 4) == 0)
        data_3165e18.d |= 4
        int32_t var_c_5 = 2
        data_3165e0c = sub_4f5220(data_307c5a4, "animIconNudge")
        int32_t var_c_6 = 0xffffffff
    
    int32_t result_1 = 0
    
    while (true)
        int32_t var_20 = 0
        int32_t result_2 = result_1
        void* eax_8
        int32_t ecx_2
        eax_8, ecx_2 = sub_4fc3d0(&data_be1cb8, arg1)
        
        if (arg2 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_3 = *(eax_8 + (arg2 << 2) + 0x30)
        int128_t* eax_9
        
        if (edx_3 != 0)
            eax_9 = sub_4fc1e0(ecx_2, edx_3)
        else
            eax_9, edx_3 = sub_4fc0d0()
            *(eax_9 + 4) = &data_83f3d3
            *(eax_8 + (arg2 << 2) + 0x30) = *(eax_9 + 0x1bc)
        
        char* edi_2 = *(eax_8 + 4)
        
        if (*(edi_2 + 4) != 0x1e)
            break
        
        if (*edi_2 == 0)
            sub_520800(eax_9, edx_3.b, edi_2, 0)
            
            if (*edi_2 == 0)
                sub_509540(edi_2)
        
        int32_t edi_3 = *(sub_4f7720(&var_20, arg2 * 0x118 + ***edi_2, eax_9) + 0x434)
        int32_t eax_15 = sub_421c90(result_1)
        float edx_9 = data_3165e14
        eax_15.b = *(*(data_27e7a40 + 0x548) + 0xbfa8) == *(ecx + (eax_15 << 2) + 0x1cc)
        int128_t* ebx_1
        ebx_1.b = eax_15.b == 0
        int128_t* var_40_1 = ebx_1
        char edx_10 = sub_4fa4e0(edi_3, edx_9, edx_9.b)
        int128_t* var_48_1 = ebx_1
        char edx_11 = sub_4fa4e0(edi_3, data_3165e10, edx_10)
        int128_t* var_50_1 = ebx_1
        sub_4fa4e0(edi_3, data_3165e0c, edx_11)
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
