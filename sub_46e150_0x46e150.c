// 函数名称: sub_46e150
// 虚拟地址: 0x46e150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_46e150(char arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6942fe
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_3c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165b50 & 1) == 0)
        data_3165b50.d |= 1
        int32_t var_c_1 = 0
        data_3165b4c = sub_4f5220(data_307c530, "tblGamblingButtons")
        int32_t var_c_2 = 0xffffffff
    
    int32_t* edx = *(data_27e7a40 + 0x548)
    int32_t ebx = 1
    
    while (true)
        int32_t edi_1 = data_3165b4c
        int32_t var_20 = ebx - 1
        int32_t var_1c_1 = 0
        void* eax_7
        int32_t ecx_1
        eax_7, ecx_1 = sub_4fc3d0(&data_be1cb8, *edx)
        
        if (edi_1 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_1 = *(eax_7 + (edi_1 << 2) + 0x30)
        int128_t* eax_8
        
        if (edx_1 != 0)
            eax_8 = sub_4fc1e0(ecx_1, edx_1)
        else
            eax_8, edx_1 = sub_4fc0d0()
            *(eax_8 + 4) = &data_83f3d3
            *(eax_7 + (edi_1 << 2) + 0x30) = *(eax_8 + 0x1bc)
        
        char* esi_3 = *(eax_7 + 4)
        
        if (*(esi_3 + 4) != 0x1e)
            break
        
        if (*esi_3 == 0)
            sub_520800(eax_8, edx_1.b, esi_3, 0)
            
            if (*esi_3 == 0)
                sub_509540(esi_3)
        
        void* result =
            sub_4fc3d0(&data_be1cb8, *(sub_4f7720(&var_20, edi_1 * 0x118 + ***esi_3, eax_8) + 0x434))
        ebx += 1
        *(result + 8) = arg1 == 0
        
        if (ebx s> 7)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    
    sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
