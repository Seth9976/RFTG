// 函数名称: sub_441d30
// 虚拟地址: 0x441d30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_441d30(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_694b66
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_54 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = data_3165cdc
    
    if ((data_3165ce0 & 1) == 0)
        data_3165ce0.d |= 1
        int32_t var_c_1 = 0
        data_3165cd8 = sub_4f5220(data_307c794, "tblPlayers")
        int32_t var_c_2 = 0xffffffff
    
    void* result = *(data_27e7a40 + 0x548)
    
    if (result == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* edi = *(result + 0x45844)
    void* result_1 = nullptr
    
    if (*(edi + 0x458) s> 0)
        int16_t* edi_1 = edi + 0xa6
        int32_t var_20_1 = 0
        int16_t* var_3c_1 = edi_1
        
        while (true)
            int32_t ebx_1 = data_3165cd8
            void* result_2 = result_1
            int32_t var_28 = var_20_1
            void* eax_7
            int32_t ecx_3
            eax_7, ecx_3 = sub_4fc3d0(&data_be1cb8, arg1)
            
            if (ebx_1 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_1 = *(eax_7 + (ebx_1 << 2) + 0x30)
            int128_t* eax_8
            
            if (edx_1 != 0)
                eax_8 = sub_4fc1e0(ecx_3, edx_1)
            else
                eax_8 = sub_4fc0d0()
                *(eax_8 + 4) = &data_83f3d3
                edx_1 = *(eax_8 + 0x1bc)
                *(eax_7 + (ebx_1 << 2) + 0x30) = edx_1
            
            char* esi_3 = *(eax_7 + 4)
            
            if (*(esi_3 + 4) != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*esi_3 == 0)
                sub_520800(eax_8, edx_1.b, esi_3, 0)
                
                if (*esi_3 == 0)
                    sub_509540(esi_3)
            
            int32_t ecx_6 = *(sub_4f7720(&var_28, ebx_1 * 0x118 + ***esi_3, eax_8) + 0x434)
            sx.d(edi_1[2]) - sx.d(*(edi_1 - 3)) - sx.d(edi_1[1]) - sx.d(*edi_1) s< *(arg2 + 0xc)
            *(arg2 + 0x18)
            *(arg2 + 0x24)
            *(arg2 + 0x30)
            char* var_34
            sub_4c4ab0(&var_34)
            int32_t var_c_3 = 1
            char* eax_21 = var_34
            char* edi_4 = &data_83f3d3
            
            if (eax_21 != 0)
                edi_4 = eax_21
            
            int32_t eax_22
            int32_t ecx_9
            eax_22, ecx_9 = sub_4fc3d0(&data_be1cb8, ecx_6)
            
            if (eax_3 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_5 = *(eax_22 + (eax_3 << 2) + 0x30)
            int128_t* eax_23
            
            if (edx_5 != 0)
                eax_23 = sub_4fc1e0(ecx_9, edx_5)
            else
                eax_23 = sub_4fc0d0()
                *(eax_23 + 4) = &data_83f3d3
                *(eax_22 + (eax_3 << 2) + 0x30) = *(eax_23 + 0x1bc)
            
            *(eax_23 + 0x64) = *eax_23 + 1
            sub_4c4590(edi_4)
            *(eax_23 + 0x151) = 1
            int32_t var_c_4 = 0xffffffff
            char* eax_27 = var_34
            
            if (eax_27 != 0 && *eax_27 != 0)
                if (*(eax_27 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp0_1 = *(eax_27 - 0xc)
                *(eax_27 - 0xc) -= 1
                
                if (temp0_1 == 1)
                    void* edx_7 = data_26a44e4
                    int32_t esi_10 = *(eax_27 - 4) + 0x10
                    
                    if (edx_7 == 0)
                        sub_4f4250()
                        edx_7 = data_26a44e4
                    
                    int32_t eax_28 = 0
                    int32_t* edi_6
                    
                    while (true)
                        if (esi_10 s<= 1 << (eax_28.b + 4))
                            edi_6 = edx_7 + eax_28 * 0x14
                            break
                        
                        eax_28 += 1
                        
                        if (eax_28 s>= 7)
                            edi_6 = edx_7 + 0x8c
                            break
                    
                    sub_4f4430(&eax_27[0xfffffff0], edi_6, esi_10)
            
            var_3c_1 = &var_3c_1[0x5a]
            result = result_1 + 1
            result_1 = result
            
            if (result s>= sx.d(*(edi + 0x458)))
                break
            
            edi_1 = var_3c_1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
