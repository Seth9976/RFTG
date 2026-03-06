// 函数名称: sub_4419b0
// 虚拟地址: 0x4419b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4419b0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_694ba6
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t eax_2 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165ce8 & 1) == 0)
        data_3165ce8.d |= 1
        int32_t var_c_1 = 0
        data_3165ce4 = sub_4f5220(data_307c794, "tblPlayers")
        int32_t var_c_2 = 0xffffffff
    
    void* eax_5 = *(data_27e7a40 + 0x548)
    
    if (eax_5 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* i = *(eax_5 + 0x45844)
    void* i_2 = i
    void* i_1 = nullptr
    
    if (*(i + 0x458) s> 0)
        int32_t var_20_1 = 0
        void* var_34_1 = i + 0x20
        
        do
            int32_t ebx_1 = data_3165ce4
            int32_t var_28 = var_20_1
            void* i_3 = i_1
            void* eax_9
            int32_t ecx_1
            eax_9, ecx_1 = sub_4fc3d0(&data_be1cb8, arg1)
            
            if (ebx_1 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_2 = *(eax_9 + (ebx_1 << 2) + 0x30)
            int128_t* eax_10
            
            if (edx_2 != 0)
                eax_10 = sub_4fc1e0(ecx_1, edx_2)
            else
                eax_10, edx_2 = sub_4fc0d0()
                *(eax_10 + 4) = &data_83f3d3
                *(eax_9 + (ebx_1 << 2) + 0x30) = *(eax_10 + 0x1bc)
            
            char* esi_3 = *(eax_9 + 4)
            
            if (*(esi_3 + 4) != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*esi_3 == 0)
                sub_520800(eax_10, edx_2.b, esi_3, 0)
                
                if (*esi_3 == 0)
                    sub_509540(esi_3)
            
            int32_t ebx_4 = *(sub_4f7720(&var_28, ebx_1 * 0x118 + ***esi_3, eax_10) + 0x434)
            
            if (arg4 s>= arg3(var_34_1, eax_2))
                arg3(var_34_1)
            
            char* var_30
            sub_4c4ab0(&var_30)
            int32_t var_c_3 = 1
            char* eax_17 = var_30
            char* edi_3 = &data_83f3d3
            
            if (eax_17 != 0)
                edi_3 = eax_17
            
            int32_t eax_18
            int32_t ecx_6
            eax_18, ecx_6 = sub_4fc3d0(&data_be1cb8, ebx_4)
            
            if (arg2 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_5 = *(eax_18 + (arg2 << 2) + 0x30)
            int128_t* eax_19
            
            if (edx_5 != 0)
                eax_19 = sub_4fc1e0(ecx_6, edx_5)
            else
                eax_19 = sub_4fc0d0()
                *(eax_19 + 4) = &data_83f3d3
                *(eax_18 + (arg2 << 2) + 0x30) = *(eax_19 + 0x1bc)
            
            *(eax_19 + 0x64) = *eax_19 + 1
            sub_4c4590(edi_3)
            *(eax_19 + 0x151) = 1
            int32_t var_c_4 = 0xffffffff
            char* eax_21 = var_30
            
            if (eax_21 != 0 && *eax_21 != 0)
                if (*(eax_21 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp0_1 = *(eax_21 - 0xc)
                *(eax_21 - 0xc) -= 1
                
                if (temp0_1 == 1)
                    void* edx_8 = data_26a44e4
                    int32_t esi_10 = *(eax_21 - 4) + 0x10
                    
                    if (edx_8 == 0)
                        sub_4f4250()
                        edx_8 = data_26a44e4
                    
                    int32_t eax_22 = 0
                    int32_t* edi_5
                    
                    while (true)
                        if (esi_10 s<= 1 << (eax_22.b + 4))
                            edi_5 = edx_8 + eax_22 * 0x14
                            break
                        
                        eax_22 += 1
                        
                        if (eax_22 s>= 7)
                            edi_5 = edx_8 + 0x8c
                            break
                    
                    sub_4f4430(&eax_21[0xfffffff0], edi_5, esi_10)
            
            var_34_1 += 0xb4
            i = i_1 + 1
            i_1 = i
        while (i s< sx.d(*(i_2 + 0x458)))
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return i
}
