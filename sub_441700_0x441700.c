// 函数名称: sub_441700
// 虚拟地址: 0x441700
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_441700(int32_t arg1, float arg2, float arg3)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_694bde
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_3c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165cf0 & 1) == 0)
        data_3165cf0.d |= 1
        int32_t var_c_1 = 0
        data_3165cec = sub_4f5220(data_307c794, "tblPlayers")
        int32_t var_c_2 = 0xffffffff
    
    void* eax_5 = *(data_27e7a40 + 0x548)
    
    if (eax_5 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_7 = *(eax_5 + 0x45844)
    int32_t i = 0
    int32_t i_1 = 0
    
    if (*(eax_7 + 0x458) s> 0)
        void* var_2c_1 = eax_7 + 0xac
        
        do
            if (*var_2c_1 != 0)
                int32_t edi_1 = data_3165cec
                int32_t i_2 = i
                int32_t var_20 = 0
                void* eax_9
                int32_t ecx_1
                eax_9, ecx_1 = sub_4fc3d0(&data_be1cb8, arg1)
                
                if (edi_1 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_2 = *(eax_9 + (edi_1 << 2) + 0x30)
                int128_t* eax_10
                
                if (edx_2 != 0)
                    eax_10 = sub_4fc1e0(ecx_1, edx_2)
                else
                    eax_10, edx_2 = sub_4fc0d0()
                    *(eax_10 + 4) = &data_83f3d3
                    *(eax_9 + (edi_1 << 2) + 0x30) = *(eax_10 + 0x1bc)
                
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
                
                void* eax_14
                char edx_5
                eax_14, edx_5 = sub_4f7720(&var_20, edi_1 * 0x118 + ***esi_3, eax_10)
                int32_t esi_4 = *(eax_14 + 0x434)
                int32_t var_40_1 = 0
                sub_4fa4e0(esi_4, arg2, edx_5)
                int32_t eax_16
                int32_t ecx_5
                eax_16, ecx_5 = sub_4fc3d0(&data_be1cb8, esi_4)
                
                if (arg2 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_6 = *(eax_16 + (arg2 << 2) + 0x30)
                int128_t* eax_17
                
                if (edx_6 != 0)
                    eax_17 = sub_4fc1e0(ecx_5, edx_6)
                else
                    eax_17 = sub_4fc0d0()
                    *(eax_17 + 4) = &data_83f3d3
                    *(eax_16 + (arg2 << 2) + 0x30) = *(eax_17 + 0x1bc)
                
                long double x87_r7_1 = float.t(0)
                int128_t* ecx_7 = eax_17
                long double x87_r6_1 = fconvert.t(arg3)
                x87_r6_1 - x87_r7_1
                eax_17.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
                
                if ((eax_17:1.b & 1) == 0)
                    *(ecx_7 + 0x14) = fconvert.s(x87_r7_1)
                    ecx_7[1].d = fconvert.s(x87_r7_1)
            
            var_2c_1 += 0xb4
            i = i_1 + 1
            i_1 = i
        while (i s< sx.d(*(eax_7 + 0x458)))
    
    fsbase->NtTib.ExceptionList = ExceptionList
}
